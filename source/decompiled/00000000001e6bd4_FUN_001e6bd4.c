// Recovered from libkentos.so by Ghidra 12.2
// address: 001e6bd4
// size: 276
// name: FUN_001e6bd4
// namespace: Global
// signature: undefined FUN_001e6bd4(void)
// generated: 2026-11-22 21:46:12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e6bd4(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong local_40;
  ulong uStack_38;
  undefined1 *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((DAT_0082f838 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f838), iVar3 != 0)) {
    _DAT_0082f820 = 0;
    DAT_0082f828 = 0;
    DAT_0082f830 = (undefined1 *)0x0;
    __cxa_atexit(&LAB_001d9720,&DAT_0082f820,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f838);
  }
  uVar1 = _DAT_0082f820 >> 1 & 0x7f;
  if ((_DAT_0082f820 & 1) != 0) {
    uVar1 = DAT_0082f828;
  }
  if (uVar1 == 0) {
    FUN_001f43a8();
    FUN_001e1a64(&local_40,&DAT_0082f840,"/saved_key.txt");
    if ((_DAT_0082f820 & 1) == 0) {
      _DAT_0082f820 = _DAT_0082f820 & 0xffffffffffff0000;
    }
    else {
      *DAT_0082f830 = 0;
      DAT_0082f828 = 0;
    }
                    /* try { // try from 001e6c5c to 001e6c6f has its CatchHandler @ 001e6ce8 */
    FUN_00205068(&DAT_0082f820,0);
    DAT_0082f830 = local_30;
    DAT_0082f828 = uStack_38;
    _DAT_0082f820 = local_40;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


