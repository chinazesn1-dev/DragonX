// Recovered from libkentos.so by Ghidra 12.2
// address: 001d69a0
// size: 52
// name: _INIT_6
// namespace: Global
// signature: undefined _INIT_6(void)
// generated: 2026-11-22 21:43:09


/* WARNING: Removing unreachable block (ram,0x001d69c8) */

int _INIT_6(void)

{
  int iVar1;
  
  iVar1 = mprotect(&DAT_00831000,0xe000,7);
  return iVar1;
}


