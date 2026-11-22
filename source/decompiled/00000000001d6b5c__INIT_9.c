// Recovered from libkentos.so by Ghidra 12.2
// address: 001d6b5c
// size: 348
// name: _INIT_9
// namespace: Global
// signature: undefined _INIT_9(void)
// generated: 2026-11-22 21:43:09


void _INIT_9(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_0082f100 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f100), iVar2 != 0)) {
    DAT_0082f0f0 = 0;
    DAT_0082f0f8 = 0;
    DAT_0082f0e8 = &DAT_0082f0f0;
    __cxa_atexit(&LAB_001d9734,&DAT_0082f0e8,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f100);
  }
  if (((DAT_0082f120 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f120), iVar2 != 0)) {
    DAT_0082f110 = 0;
    DAT_0082f118 = 0;
    DAT_0082f108 = &DAT_0082f110;
    __cxa_atexit(&LAB_001d973c,&DAT_0082f108,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f120);
  }
  DAT_0083d848 = 0;
  DAT_0083d850 = 0;
  DAT_0083d858 = 0;
  __cxa_atexit(&LAB_001d9744,&DAT_0083d848,&PTR_LOOP_00759000);
  DAT_0083d868 = 0;
  DAT_0083d870 = 0;
  DAT_0083d860 = 0;
  __cxa_atexit(&LAB_001d9744,&DAT_0083d860,&PTR_LOOP_00759000);
  puVar1 = PTR__mutex_00758248;
  __cxa_atexit(PTR__mutex_00758248,&DAT_0083d878,&PTR_LOOP_00759000);
  DAT_0083d8a8 = 0;
  DAT_0083d8b0 = 0;
  DAT_0083d8a0 = 0;
  __cxa_atexit(&LAB_002686c8,&DAT_0083d8a0,&PTR_LOOP_00759000);
  __cxa_atexit(puVar1,&DAT_0083d8b8,&PTR_LOOP_00759000);
  return;
}


