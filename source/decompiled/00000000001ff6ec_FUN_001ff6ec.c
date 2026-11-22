// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff6ec
// size: 176
// name: FUN_001ff6ec
// namespace: Global
// signature: undefined FUN_001ff6ec(void)
// generated: 2026-11-22 21:47:12


long * FUN_001ff6ec(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_001ff79c(param_1[1],param_2);
  FUN_00204a08((long)param_2 + 0x40,*(undefined1 *)((long)param_2 + 0x38));
  if ((*(byte *)((long)param_2 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar3;
}


