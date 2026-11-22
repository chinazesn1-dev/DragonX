// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4b38
// size: 256
// name: FUN_001f4b38
// namespace: Global
// signature: undefined FUN_001f4b38(void)
// generated: 2026-11-22 21:46:55


long FUN_001f4b38(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  void *pvVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0xa1) != '\0') && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    cVar1 = *(char *)(param_1 + 0xa2);
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa2);
    if ((param_2 != 0) && (cVar1 != '\0')) {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_001f4bc8;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x40) = pvVar2;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (cVar1 == '\0') {
    if ((long)param_3 < 9) {
      param_3 = 8;
    }
    *(ulong *)(param_1 + 0x70) = param_3;
    if ((param_2 == 0) || (param_3 < 8)) {
      pvVar2 = operator_new__(param_3);
      *(void **)(param_1 + 0x68) = pvVar2;
      *(undefined1 *)(param_1 + 0xa1) = 1;
      return param_1;
    }
    *(long *)(param_1 + 0x68) = param_2;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    return param_1;
  }
LAB_001f4bc8:
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}


