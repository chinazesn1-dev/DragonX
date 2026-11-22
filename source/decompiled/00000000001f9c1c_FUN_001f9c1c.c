// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9c1c
// size: 192
// name: FUN_001f9c1c
// namespace: Global
// signature: undefined FUN_001f9c1c(void)
// generated: 2026-11-22 21:47:04


void FUN_001f9c1c(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  puVar4 = *(undefined1 **)(param_1 + 0x38);
  *(undefined1 **)(param_1 + 0x40) = puVar4;
  uVar3 = (long)*(undefined1 **)(param_1 + 0x48) - (long)puVar4;
  uVar1 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  if (*(undefined1 **)(param_1 + 0x48) < puVar4 || uVar3 == 0) {
    if (uVar3 < 0x3fffffffffffffff) {
      uVar3 = uVar3 * 2;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
                    /* try { // try from 001f9c98 to 001f9c9f has its CatchHandler @ 001f9cdc */
    puVar2 = operator_new(uVar3);
    *puVar2 = uVar1;
    *(undefined1 **)(param_1 + 0x38) = puVar2;
    *(undefined1 **)(param_1 + 0x40) = puVar2 + 1;
    *(undefined1 **)(param_1 + 0x48) = puVar2 + uVar3;
    if (puVar4 != (undefined1 *)0x0) {
      operator_delete(puVar4);
      return;
    }
  }
  else {
    *puVar4 = uVar1;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  }
  return;
}


