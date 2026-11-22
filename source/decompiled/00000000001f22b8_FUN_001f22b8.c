// Recovered from libkentos.so by Ghidra 12.2
// address: 001f22b8
// size: 1160
// name: FUN_001f22b8
// namespace: Global
// signature: undefined FUN_001f22b8(void)
// generated: 2026-11-22 21:46:52


void FUN_001f22b8(undefined4 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x830) < 8) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x828);
  if (*(int *)(lVar2 + 0x11c) < 1) {
    return;
  }
  *(undefined4 *)(lVar2 + 0x11c) = *param_1;
  iVar3 = param_1[1];
  if ((((iVar3 != 0) || (param_1[2] != 0)) || (param_1[3] != 0)) &&
     (iVar1 = *(int *)(lVar2 + 4), 0 < iVar1)) {
    if (((iVar3 != 0) && (iVar1 - 0x3112cU < 7)) &&
       ((1 << (ulong)(iVar1 - 0x3112cU & 0x1f) & 0x43U) != 0)) {
      *(int *)(lVar2 + 4) = iVar3;
    }
    if (((param_1[2] != 0) && (iVar1 - 0x3112aU < 8)) &&
       ((1 << (ulong)(iVar1 - 0x3112aU & 0x1f) & 0x83U) != 0)) {
      *(undefined4 *)(lVar2 + 4) = param_1[2];
    }
    if (((param_1[3] != 0) && (iVar1 - 0x3112eU < 6)) &&
       ((1 << (ulong)(iVar1 - 0x3112eU & 0x1f) & 0x23U) != 0)) {
      *(undefined4 *)(lVar2 + 4) = param_1[3];
    }
  }
  iVar3 = param_1[7];
  if ((((iVar3 == 0) && (param_1[8] == 0)) &&
      (((param_1[9] == 0 && ((param_1[10] == 0 && (param_1[0xb] == 0)))) &&
       ((param_1[0xc] == 0 && ((param_1[0xd] == 0 && (param_1[0xe] == 0)))))))) ||
     (iVar1 = *(int *)(lVar2 + 0xa4), iVar1 < 1)) {
LAB_001f24b0:
    iVar3 = param_1[4];
    if (iVar3 != 0) goto LAB_001f24b8;
LAB_001f2484:
    if ((param_1[5] != 0) || (param_1[6] != 0)) goto LAB_001f24b8;
  }
  else {
    if (((((iVar3 == 0) || (iVar1 != 0x3190a)) &&
         ((iVar1 != 0x318f9 || (iVar3 = param_1[8], iVar3 == 0)))) &&
        ((iVar1 != 0x318fa || (iVar3 = param_1[9], iVar3 == 0)))) &&
       (((iVar1 != 0x318fb || (iVar3 = param_1[10], iVar3 == 0)) &&
        ((((iVar1 != 0x31906 || (iVar3 = param_1[0xb], iVar3 == 0)) &&
          ((iVar1 != 0x318fc || (iVar3 = param_1[0xc], iVar3 == 0)))) &&
         ((iVar1 != 0x31907 || (iVar3 = param_1[0xd], iVar3 == 0)))))))) {
      if ((iVar1 == 0x318fd) && (param_1[0xe] != 0)) {
        *(undefined4 *)(lVar2 + 0xa4) = param_1[0xe];
      }
      goto LAB_001f24b0;
    }
    *(int *)(lVar2 + 0xa4) = iVar3;
    iVar3 = param_1[4];
    if (iVar3 == 0) goto LAB_001f2484;
LAB_001f24b8:
    iVar1 = *(int *)(lVar2 + 0x54);
    if (0 < iVar1) {
      if (((iVar3 != 0) && (iVar1 - 0x31ce5U < 8)) &&
         ((1 << (ulong)(iVar1 - 0x31ce5U & 0x1f) & 0x89U) != 0)) {
        *(int *)(lVar2 + 0x54) = iVar3;
      }
      if (((param_1[5] != 0) && (iVar1 - 0x31ce4U < 8)) &&
         ((1 << (ulong)(iVar1 - 0x31ce4U & 0x1f) & 0x89U) != 0)) {
        *(undefined4 *)(lVar2 + 0x54) = param_1[5];
      }
      if (((param_1[6] != 0) && (iVar1 - 0x31ce6U < 8)) &&
         ((1 << (ulong)(iVar1 - 0x31ce6U & 0x1f) & 0x89U) != 0)) {
        *(undefined4 *)(lVar2 + 0x54) = param_1[6];
      }
    }
  }
  iVar3 = param_1[0xf];
  if ((((((iVar3 != 0) || (param_1[0x10] != 0)) || (param_1[0x11] != 0)) ||
       ((param_1[0x12] != 0 || (param_1[0x13] != 0)))) || (param_1[0x14] != 0)) &&
     (iVar1 = *(int *)(lVar2 + 0x2c), 0 < iVar1)) {
    if ((iVar3 != 0) && (iVar1 == 0x31512)) {
      *(int *)(lVar2 + 0x2c) = iVar3;
      iVar1 = param_1[0x15];
      goto joined_r0x001f260c;
    }
    if ((((iVar1 == 0x31511) && (iVar4 = param_1[0x10], iVar4 != 0)) ||
        (((iVar1 == 0x31514 && (iVar4 = param_1[0x11], iVar4 != 0)) ||
         ((iVar1 == 0x31515 && (iVar4 = param_1[0x12], iVar4 != 0)))))) ||
       ((iVar1 == 0x31517 && (iVar4 = param_1[0x13], iVar4 != 0)))) {
      *(int *)(lVar2 + 0x2c) = iVar4;
      iVar1 = param_1[0x15];
      goto joined_r0x001f260c;
    }
    if ((iVar1 == 0x31516) && (param_1[0x14] != 0)) {
      *(undefined4 *)(lVar2 + 0x2c) = param_1[0x14];
    }
  }
  iVar1 = param_1[0x15];
joined_r0x001f260c:
  if ((iVar1 != 0) && (0 < *(int *)(lVar2 + 0x7c))) {
    *(int *)(lVar2 + 0x7c) = iVar1;
  }
  if (((((iVar3 != 0) || (param_1[0x10] != 0)) || (param_1[0x11] != 0)) ||
      (((param_1[0x12] != 0 || (param_1[0x13] != 0)) || (param_1[0x14] != 0)))) &&
     (iVar1 = *(int *)(lVar2 + 0x2c), 0 < iVar1)) {
    if (((((iVar3 != 0) && (iVar1 == 0x31512)) ||
         (((iVar1 == 0x31511 && (iVar3 = param_1[0x10], iVar3 != 0)) ||
          ((iVar1 == 0x31514 && (iVar3 = param_1[0x11], iVar3 != 0)))))) ||
        ((iVar1 == 0x31515 && (iVar3 = param_1[0x12], iVar3 != 0)))) ||
       (((iVar1 == 0x31517 && (iVar3 = param_1[0x13], iVar3 != 0)) ||
        ((iVar1 == 0x31516 && (iVar3 = param_1[0x14], iVar3 != 0)))))) {
      *(int *)(lVar2 + 0x2c) = iVar3;
    }
    iVar3 = param_1[0x16];
    if (((iVar3 != 0) || (param_1[0x17] != 0)) && (iVar1 = *(int *)(lVar2 + 0xcc), 0 < iVar1)) {
      if ((iVar3 != 0) && (iVar1 == 0x320cb)) {
        *(int *)(lVar2 + 0xcc) = iVar3;
        return;
      }
      if ((iVar1 == 0x31cee) && (param_1[0x17] != 0)) {
        *(undefined4 *)(lVar2 + 0xcc) = param_1[0x17];
      }
    }
  }
  return;
}


