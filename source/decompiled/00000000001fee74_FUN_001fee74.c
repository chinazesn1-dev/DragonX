// Recovered from libkentos.so by Ghidra 12.2
// address: 001fee74
// size: 104
// name: FUN_001fee74
// namespace: Global
// signature: undefined FUN_001fee74(void)
// generated: 2026-11-22 21:47:12


void FUN_001fee74(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001fee74(param_1,*param_2);
  FUN_001fee74(param_1,param_2[1]);
  FUN_00204a08(param_2 + 8,*(undefined1 *)(param_2 + 7));
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    operator_delete((void *)param_2[6]);
  }
  operator_delete(param_2);
  return;
}


