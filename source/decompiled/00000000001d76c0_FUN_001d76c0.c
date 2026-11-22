// Recovered from libkentos.so by Ghidra 12.2
// address: 001d76c0
// size: 740
// name: FUN_001d76c0
// namespace: Global
// signature: undefined FUN_001d76c0(void)
// generated: 2026-11-22 21:43:12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d76c0(char *param_1)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  char *pcVar3;
  size_t __n;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_270;
  size_t local_268;
  void *local_260;
  char acStack_258 [512];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  memset(acStack_258,0,0x200);
  if (((DAT_0082f0b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f0b0), iVar2 != 0)) {
    _DAT_0082f0a8 = _UNK_004789c8;
    DAT_0082f0a0 = _DAT_004789c0;
    __cxa_atexit(&LAB_001d8edc,&DAT_0082f0a0,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f0b0);
  }
  if (DAT_0082f0af != '\0') {
    DAT_0082f0a0 = DAT_0082f0a0 ^ 0x2e2e2e2e2e2e2e2e;
    _DAT_0082f0a8 = _DAT_0082f0a8 ^ 0x2e2e2e2e2e2e2e2e;
  }
  if (((DAT_0082f0c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f0c0), iVar2 != 0)) {
    _DAT_0082f0b8 = 0x5a5c;
    DAT_0082f0ba = 0x2e;
    __cxa_atexit(&LAB_001d8ee4,&DAT_0082f0b8,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f0c0);
  }
  if (DAT_0082f0ba != 0) {
    DAT_0082f0ba = DAT_0082f0ba ^ 0x2e;
    _DAT_0082f0b8 = _DAT_0082f0b8 ^ 0x2e2e;
  }
  __stream = fopen((char *)&DAT_0082f0a0,&DAT_0082f0b8);
  uVar4 = 0;
  if (__stream != (FILE *)0x0) {
    pcVar3 = fgets(acStack_258,0x200,__stream);
    if (pcVar3 != (char *)0x0) {
      do {
        local_270 = 0;
        local_268 = 0;
        local_260 = (void *)0x0;
        __n = strlen(acStack_258);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          FUN_001d91e4(&local_270);
        }
        if (__n < 0x17) {
          local_270 = CONCAT71(local_270._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_270 | 1);
          if (__n != 0) goto LAB_001d7860;
        }
        else {
          uVar5 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar5);
          local_270 = uVar5 | 1;
          local_268 = __n;
          local_260 = __dest;
LAB_001d7860:
          memcpy(__dest,acStack_258,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        pcVar3 = strstr(acStack_258,param_1);
        if (pcVar3 != (char *)0x0) {
          DAT_0082f000 = 1;
          if ((local_270 & 1) != 0) {
            operator_delete(local_260);
          }
          uVar4 = 1;
          goto LAB_001d78d8;
        }
        if ((local_270 & 1) != 0) {
          operator_delete(local_260);
        }
        pcVar3 = fgets(acStack_258,0x200,__stream);
      } while (pcVar3 != (char *)0x0);
    }
    fclose(__stream);
    uVar4 = 0;
  }
LAB_001d78d8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


