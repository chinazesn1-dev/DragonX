// Recovered from libkentos.so by Ghidra 12.2
// address: 001d64bc
// size: 28
// name: _FINI_1
// namespace: Global
// signature: undefined _FINI_1(void)
// generated: 2026-11-22 21:43:07


int _FINI_1(void)

{
  int iVar1;
  
  if (DAT_00843364 == 0) {
    return 0x843000;
  }
  iVar1 = pthread_key_delete(DAT_00843360);
  return iVar1;
}


