// Recovered from libkentos.so by Ghidra 12.2
// address: 001edec8
// size: 208
// name: FUN_001edec8
// namespace: Global
// signature: undefined FUN_001edec8(void)
// generated: 2026-11-22 21:46:48


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001edec8(void)

{
  long lVar1;
  int iVar2;
  char acStack_84 [92];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_0082fc78 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082fc78), iVar2 != 0)) {
    DAT_0082fc70 = 0x454a5d00;
    uRam000000000082fc68 = _UNK_00479be8;
    _DAT_0082fc60 = _DAT_00479be0;
    DAT_0082fc74 = 0x2e;
    __cxa_atexit(&LAB_00204800,&DAT_0082fc60,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082fc78);
  }
  FUN_0020c598(&DAT_0082fc60);
  __system_property_get(&DAT_0082fc60,acStack_84);
  iVar2 = atoi(acStack_84);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


