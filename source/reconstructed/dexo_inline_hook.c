#define _GNU_SOURCE
#include "dexo_inline_hook.h"

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

static int is_pc_relative(uint32_t insn)
{
    /* B / BL */
    if ((insn & 0x7c000000u) == 0x14000000u) {
        return 1;
    }
    if ((insn & 0xfc000000u) == 0x94000000u) {
        return 1;
    }
    /* ADR / ADRP */
    if ((insn & 0x9f000000u) == 0x10000000u) {
        return 1;
    }
    if ((insn & 0x9f000000u) == 0x90000000u) {
        return 1;
    }
    /* LDR (literal) */
    if ((insn & 0x3b000000u) == 0x18000000u) {
        return 1;
    }
    /* CBZ / CBNZ */
    if ((insn & 0x7e000000u) == 0x34000000u) {
        return 1;
    }
    /* TBZ / TBNZ */
    if ((insn & 0x7e000000u) == 0x36000000u) {
        return 1;
    }
    return 0;
}

int dexo_inline_hook(void* target, void* replacement, void** trampoline)
{
    uint32_t original[4];
    long page_size;
    void* tramp;
    uint32_t* tramp_code;
    uint32_t* target_code;
    uintptr_t page_address;

    if (target == NULL || replacement == NULL || trampoline == NULL) {
        return 0;
    }
    *trampoline = NULL;

    memcpy(original, target, sizeof(original));
    for (int i = 0; i < 4; ++i) {
        if (is_pc_relative(original[i])) {
            return 0;
        }
    }

    page_size = sysconf(_SC_PAGESIZE);
    if (page_size <= 0) {
        return 0;
    }

    tramp = mmap(NULL, (size_t)page_size, PROT_READ | PROT_WRITE,
                 MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (tramp == MAP_FAILED) {
        return 0;
    }
    tramp_code = (uint32_t*)tramp;
    memcpy(tramp_code, original, sizeof(original));
    tramp_code[4] = 0x58000050u; /* ldr x16, #8 */
    tramp_code[5] = 0xd61f0200u; /* br x16 */
    *((uint64_t*)(tramp_code + 6)) = (uint64_t)target + 16;
    __builtin___clear_cache((char*)tramp, (char*)tramp + 32);
    if (mprotect(tramp, (size_t)page_size, PROT_READ | PROT_EXEC) != 0) {
        munmap(tramp, (size_t)page_size);
        return 0;
    }

    page_address = ((uintptr_t)target) & ~((uintptr_t)page_size - 1);
    if (mprotect((void*)page_address, (size_t)page_size,
                 PROT_READ | PROT_WRITE) != 0) {
        munmap(tramp, (size_t)page_size);
        return 0;
    }
    target_code = (uint32_t*)target;
    target_code[0] = 0x58000050u; /* ldr x16, #8 */
    target_code[1] = 0xd61f0200u; /* br x16 */
    *((uint64_t*)(target_code + 2)) = (uint64_t)replacement;
    __builtin___clear_cache((char*)target, (char*)target + 16);
    mprotect((void*)page_address, (size_t)page_size, PROT_READ | PROT_EXEC);

    *trampoline = tramp;
    return 1;
}
