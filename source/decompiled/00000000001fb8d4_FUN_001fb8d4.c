// Recovered from libkentos.so by Ghidra 12.2
// address: 001fb8d4
// size: 132
// name: FUN_001fb8d4
// namespace: Global
// signature: undefined FUN_001fb8d4(void)
// generated: 2026-11-22 21:47:07


void FUN_001fb8d4(long param_1)

{
  long *plVar1;
  void *pvVar2;
  code *pcVar3;
  
  FUN_00204a08(param_1 + 0xa0,*(undefined1 *)(param_1 + 0x98));
  plVar1 = *(long **)(param_1 + 0x80);
  if ((long *)(param_1 + 0x60) == plVar1) {
    pcVar3 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_001fb91c;
    pcVar3 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar3)();
LAB_001fb91c:
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(param_1 + 0x10) = pvVar2;
  operator_delete(pvVar2);
  return;
}


