// Recovered from libkentos.so by Ghidra 12.2
// address: 001d5c40
// size: 204
// name: FUN_001d5c40
// namespace: Global
// signature: undefined FUN_001d5c40(void)
// generated: 2026-11-22 21:43:05


undefined8 FUN_001d5c40(long param_1)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0x8b70) = *(long *)(param_1 + 0x3b0);
  if ((*(long *)(param_1 + 0x3b0) == 0) && (*(long *)(param_1 + 0x608) == 0)) {
    *(undefined1 *)(param_1 + 0x8b61) = 0;
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x8b62) != '\0') {
      (**(code **)PTR_PTR_00758ed0)(*(undefined8 *)(param_1 + 0x8b68));
    }
    if (*(long *)(param_1 + 0x8b70) == 0) {
      uVar1 = (**(code **)PTR_PTR_00758aa0)(*(undefined8 *)(param_1 + 0x608));
      *(undefined8 *)(param_1 + 0x8b68) = uVar1;
    }
    else {
      uVar1 = FUN_002a9c30(&LAB_0062b4c0);
      *(undefined8 *)(param_1 + 0x8b68) = uVar1;
    }
    uVar1 = 0x1b;
    *(bool *)(param_1 + 0x8b62) = *(long *)(param_1 + 0x8b68) != 0;
    if (*(long *)(param_1 + 0x8b68) != 0) {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x8b61) = 1;
    }
  }
  return uVar1;
}


