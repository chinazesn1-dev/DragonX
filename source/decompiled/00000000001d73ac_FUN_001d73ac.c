// Recovered from libkentos.so by Ghidra 12.2
// address: 001d73ac
// size: 788
// name: FUN_001d73ac
// namespace: Global
// signature: undefined FUN_001d73ac(void)
// generated: 2026-11-22 21:43:11


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_001d73ac(char *param_1)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  char *pcVar3;
  ulong uVar4;
  char acStack_538 [1024];
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memset(acStack_138,0,0xff);
  memset(acStack_538,0,0x400);
  if (((DAT_0082f070 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f070), iVar2 != 0)) {
    _DAT_0082f068 = _UNK_004789c8;
    DAT_0082f060 = _DAT_004789c0;
    __cxa_atexit(&LAB_001d8edc,&DAT_0082f060,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f070);
  }
  if (DAT_0082f06f != '\0') {
    DAT_0082f060 = DAT_0082f060 ^ 0x2e2e2e2e2e2e2e2e;
    _DAT_0082f068 = _DAT_0082f068 ^ 0x2e2e2e2e2e2e2e2e;
  }
  sprintf(acStack_138,(char *)&DAT_0082f060);
  if (((DAT_0082f080 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f080), iVar2 != 0)) {
    _DAT_0082f078 = 0x5a5c;
    DAT_0082f07a = 0x2e;
    __cxa_atexit(&LAB_001d8ee4,&DAT_0082f078,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f080);
  }
  if (DAT_0082f07a != 0) {
    DAT_0082f07a = DAT_0082f07a ^ 0x2e;
    _DAT_0082f078 = _DAT_0082f078 ^ 0x2e2e;
  }
  __stream = fopen(acStack_138,&DAT_0082f078);
  if (__stream == (FILE *)0x0) {
    if (((DAT_0082f090 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f090), iVar2 != 0)) {
      _DAT_0082f088 = 0x4b5e4148;
      _DAT_0082f08c = 0x2e40;
      __cxa_atexit(&LAB_001d8ef0,&DAT_0082f088,&PTR_LOOP_00759000);
      __cxa_guard_release(&DAT_0082f090);
    }
    if (DAT_0082f08d != '\0') {
      _DAT_0082f088 = _DAT_0082f088 ^ 0x2e2e2e2e;
      _DAT_0082f08c = _DAT_0082f08c ^ 0x2e2e;
    }
    perror(&DAT_0082f088);
    uVar4 = 0;
  }
  else {
    do {
      pcVar3 = fgets(acStack_538,0x400,__stream);
      if (pcVar3 == (char *)0x0) {
        uVar4 = 0;
        goto LAB_001d752c;
      }
      pcVar3 = strstr(acStack_538,param_1);
    } while (pcVar3 == (char *)0x0);
    uVar4 = strtoul(acStack_538,(char **)0x0,0x10);
LAB_001d752c:
    fclose(__stream);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


