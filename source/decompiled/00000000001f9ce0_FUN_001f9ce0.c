// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9ce0
// size: 296
// name: FUN_001f9ce0
// namespace: Global
// signature: undefined FUN_001f9ce0(void)
// generated: 2026-11-22 21:47:04


int FUN_001f9ce0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_001f9a88();
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = iVar1 - 0x30;
  if (uVar3 < 10) {
LAB_001f9d2c:
    FUN_001f9a88(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar4 = iVar1 - 0x30;
    if (9 < uVar4) {
      if (iVar1 - 0x41U < 6) {
        uVar4 = iVar1 - 0x37;
      }
      else {
        if (5 < iVar1 - 0x61U) goto LAB_001f9df4;
        uVar4 = iVar1 - 0x57;
      }
    }
    FUN_001f9a88(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar5 = iVar1 - 0x30;
    if (9 < uVar5) {
      if (iVar1 - 0x41U < 6) {
        uVar5 = iVar1 - 0x37;
      }
      else {
        if (5 < iVar1 - 0x61U) goto LAB_001f9df4;
        uVar5 = iVar1 - 0x57;
      }
    }
    FUN_001f9a88(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = iVar1 - 0x30;
    if (9 < uVar2) {
      if (iVar1 - 0x41U < 6) {
        uVar2 = iVar1 - 0x37;
      }
      else {
        if (5 < iVar1 - 0x61U) goto LAB_001f9df4;
        uVar2 = iVar1 - 0x57;
      }
    }
    iVar1 = uVar2 + uVar3 * 0x1000 + uVar4 * 0x100 + uVar5 * 0x10;
  }
  else {
    if (iVar1 - 0x41U < 6) {
      uVar3 = iVar1 - 0x37;
      goto LAB_001f9d2c;
    }
    if (iVar1 - 0x61U < 6) {
      uVar3 = iVar1 - 0x57;
      goto LAB_001f9d2c;
    }
LAB_001f9df4:
    iVar1 = -1;
  }
  return iVar1;
}


