// Recovered from libkentos.so by Ghidra 12.2
// address: 001d6a98
// size: 196
// name: _INIT_8
// namespace: Global
// signature: undefined _INIT_8(void)
// generated: 2026-11-22 21:43:09


void _INIT_8(void)

{
  int iVar1;
  
  if (((DAT_0082f100 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0082f100), iVar1 != 0)) {
    DAT_0082f0f0 = 0;
    DAT_0082f0f8 = 0;
    DAT_0082f0e8 = &DAT_0082f0f0;
    __cxa_atexit(&LAB_001d9734,&DAT_0082f0e8,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f100);
  }
  if (((DAT_0082f120 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0082f120), iVar1 != 0)) {
    DAT_0082f110 = 0;
    DAT_0082f118 = 0;
    DAT_0082f108 = &DAT_0082f110;
    __cxa_atexit(&LAB_001d973c,&DAT_0082f108,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f120);
    return;
  }
  return;
}


