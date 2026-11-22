// Recovered from libkentos.so by Ghidra 12.2
// address: 001e7280
// size: 212
// name: FUN_001e7280
// namespace: Global
// signature: undefined FUN_001e7280(void)
// generated: 2026-11-22 21:46:13


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001e7280(void)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  
  if (((DAT_0082f818 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f818), iVar3 != 0)) {
    _DAT_0082f800 = 0;
    DAT_0082f808 = 0;
    DAT_0082f810 = (char *)0x0;
    __cxa_atexit(&LAB_001d9720,&DAT_0082f800,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f818);
  }
  uVar1 = _DAT_0082f800 >> 1 & 0x7f;
  if ((_DAT_0082f800 & 1) != 0) {
    uVar1 = DAT_0082f808;
  }
  if (uVar1 == 0) {
    FUN_001d9094(&DAT_0082f800,"/sdcard/Dexo/saved_key.txt",0x1a);
  }
  pcVar2 = DAT_0082f810;
  if ((_DAT_0082f800 & 1) == 0) {
    pcVar2 = &DAT_0082f801;
  }
  iVar3 = unlink(pcVar2);
  FUN_001e6bd4(iVar3);
  pcVar2 = DAT_0082f830;
  if ((DAT_0082f820 & 1) == 0) {
    pcVar2 = &DAT_0082f821;
  }
  iVar3 = unlink(pcVar2);
  return iVar3;
}


