#define _GNU_SOURCE
#include "dexo_hooks.h"

#include <dlfcn.h>
#include <elf.h>
#include <link.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#ifndef R_AARCH64_JUMP_SLOT
#define R_AARCH64_JUMP_SLOT 1026
#endif
#ifndef R_AARCH64_GLOB_DAT
#define R_AARCH64_GLOB_DAT 1025
#endif

struct dexo_module {
    const char* name;
    uintptr_t base;
    ElfW(Dyn)* dynamic;
    int found;
};

static const char* basename_of(const char* path)
{
    if (path == NULL) {
        return "";
    }
    const char* slash = strrchr(path, '/');
    return slash != NULL ? slash + 1 : path;
}

static int module_callback(struct dl_phdr_info* info, size_t size, void* data)
{
    (void)size;
    struct dexo_module* module = (struct dexo_module*)data;
    if (info->dlpi_name == NULL || info->dlpi_name[0] == '\0') {
        return 0;
    }
    if (strcmp(basename_of(info->dlpi_name), module->name) != 0) {
        return 0;
    }
    for (int i = 0; i < info->dlpi_phnum; ++i) {
        const ElfW(Phdr)* phdr = &info->dlpi_phdr[i];
        if (phdr->p_type == PT_DYNAMIC) {
            module->base = (uintptr_t)info->dlpi_addr;
            module->dynamic = (ElfW(Dyn)*)(info->dlpi_addr + phdr->p_vaddr);
            module->found = 1;
            return 1;
        }
    }
    return 0;
}

static int find_module(const char* name, struct dexo_module* module)
{
    memset(module, 0, sizeof(*module));
    module->name = name;
    dl_iterate_phdr(module_callback, module);
    return module->found;
}

static uintptr_t relocate_ptr(uintptr_t base, ElfW(Addr) value)
{
    /* bionic normally stores relocated absolute addresses in .dynamic. */
    if (value >= base) {
        return (uintptr_t)value;
    }
    return base + (uintptr_t)value;
}

static int make_writable(void* address)
{
    const long page_size = sysconf(_SC_PAGESIZE);
    if (page_size <= 0) {
        return -1;
    }
    const uintptr_t page = (uintptr_t)address & ~((uintptr_t)page_size - 1);
    return mprotect((void*)page, (size_t)page_size, PROT_READ | PROT_WRITE);
}

static int patch_relocations(const ElfW(Rela)* rela, size_t count,
                             const ElfW(Sym)* symtab, const char* strtab,
                             uintptr_t base, const char* symbol,
                             void* replacement, void** original)
{
    int patched = 0;
    for (size_t i = 0; i < count; ++i) {
        const ElfW(Rela)* entry = &rela[i];
        const unsigned type = (unsigned)ELF64_R_TYPE(entry->r_info);
        if (type != R_AARCH64_JUMP_SLOT && type != R_AARCH64_GLOB_DAT) {
            continue;
        }
        const size_t index = (size_t)ELF64_R_SYM(entry->r_info);
        const ElfW(Sym)* sym = &symtab[index];
        if (sym->st_name == 0) {
            continue;
        }
        const char* name = strtab + sym->st_name;
        if (strcmp(name, symbol) != 0) {
            continue;
        }
        void** slot = (void**)(base + (uintptr_t)entry->r_offset);
        if (*slot == replacement) {
            continue;
        }
        if (make_writable(slot) != 0) {
            continue;
        }
        if (original != NULL && patched == 0) {
            *original = *slot;
        }
        *slot = replacement;
        ++patched;
    }
    return patched;
}

static int patch_module(const struct dexo_module* module, const char* symbol,
                        void* replacement, void** original)
{
    uintptr_t symtab_addr = 0;
    uintptr_t strtab_addr = 0;
    uintptr_t jmprel_addr = 0;
    size_t pltrelsz = 0;
    uintptr_t rela_addr = 0;
    size_t relasz = 0;

    for (ElfW(Dyn)* dyn = module->dynamic; dyn->d_tag != DT_NULL; ++dyn) {
        switch (dyn->d_tag) {
        case DT_SYMTAB:
            symtab_addr = relocate_ptr(module->base, dyn->d_un.d_ptr);
            break;
        case DT_STRTAB:
            strtab_addr = relocate_ptr(module->base, dyn->d_un.d_ptr);
            break;
        case DT_JMPREL:
            jmprel_addr = relocate_ptr(module->base, dyn->d_un.d_ptr);
            break;
        case DT_PLTRELSZ:
            pltrelsz = (size_t)dyn->d_un.d_val;
            break;
        case DT_RELA:
            rela_addr = relocate_ptr(module->base, dyn->d_un.d_ptr);
            break;
        case DT_RELASZ:
            relasz = (size_t)dyn->d_un.d_val;
            break;
        default:
            break;
        }
    }

    if (symtab_addr == 0 || strtab_addr == 0) {
        return 0;
    }

    int patched = 0;
    const ElfW(Sym)* symtab = (const ElfW(Sym)*)symtab_addr;
    const char* strtab = (const char*)strtab_addr;
    if (jmprel_addr != 0 && pltrelsz > 0) {
        patched += patch_relocations((const ElfW(Rela)*)jmprel_addr,
                                     pltrelsz / sizeof(ElfW(Rela)),
                                     symtab, strtab, module->base, symbol,
                                     replacement, original);
    }
    if (rela_addr != 0 && relasz > 0) {
        patched += patch_relocations((const ElfW(Rela)*)rela_addr,
                                     relasz / sizeof(ElfW(Rela)),
                                     symtab, strtab, module->base, symbol,
                                     replacement, original);
    }
    return patched;
}

int dexo_hook_symbol(const char* module_name, const char* symbol,
                     void* replacement, void** original)
{
    struct dexo_module module;
    if (!find_module(module_name, &module)) {
        return 0;
    }
    if (original != NULL) {
        *original = NULL;
    }
    return patch_module(&module, symbol, replacement, original);
}

struct all_hook_context {
    const char* symbol;
    void* replacement;
    void** original;
    int patched;
};

static int all_hook_callback(struct dl_phdr_info* info, size_t size, void* data)
{
    (void)size;
    struct all_hook_context* context = (struct all_hook_context*)data;
    if (info->dlpi_name == NULL || info->dlpi_name[0] == '\0') {
        return 0;
    }
    struct dexo_module module;
    memset(&module, 0, sizeof(module));
    module.name = basename_of(info->dlpi_name);
    for (int i = 0; i < info->dlpi_phnum; ++i) {
        const ElfW(Phdr)* phdr = &info->dlpi_phdr[i];
        if (phdr->p_type == PT_DYNAMIC) {
            module.base = (uintptr_t)info->dlpi_addr;
            module.dynamic = (ElfW(Dyn)*)(info->dlpi_addr + phdr->p_vaddr);
            module.found = 1;
            break;
        }
    }
    if (module.found) {
        context->patched += patch_module(&module, context->symbol,
                                         context->replacement,
                                         context->original);
    }
    return 0;
}

int dexo_hook_symbol_all(const char* symbol, void* replacement, void** original)
{
    struct all_hook_context context;
    context.symbol = symbol;
    context.replacement = replacement;
    context.original = original;
    context.patched = 0;
    if (original != NULL) {
        *original = NULL;
    }
    dl_iterate_phdr(all_hook_callback, &context);
    return context.patched;
}

int dexo_module_loaded(const char* module_name)
{
    struct dexo_module module;
    return find_module(module_name, &module);
}

uintptr_t dexo_module_base(const char* module_name)
{
    struct dexo_module module;
    if (!find_module(module_name, &module)) {
        return 0;
    }
    return module.base;
}
