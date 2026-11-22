// Recovered from libkentos.so by Ghidra 12.2
// address: 001ee4f4
// size: 76
// name: FUN_001ee4f4
// namespace: Global
// signature: undefined FUN_001ee4f4(void)
// generated: 2026-11-22 21:46:48


void FUN_001ee4f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001ee4f4(param_1,*param_2);
  FUN_001ee4f4(param_1,param_2[1]);
  operator_delete(param_2);
  return;
}


