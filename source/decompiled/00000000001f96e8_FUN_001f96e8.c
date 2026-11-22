// Recovered from libkentos.so by Ghidra 12.2
// address: 001f96e8
// size: 928
// name: FUN_001f96e8
// namespace: Global
// signature: undefined FUN_001f96e8(void)
// generated: 2026-11-22 21:47:04


void FUN_001f96e8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  double dVar12;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_001f9c1c();
  iVar4 = *(int *)(param_1 + 0x14);
  if (8 < iVar4 - 0x31U) {
    if (iVar4 == 0x30) {
      FUN_001f40e0(param_1 + 0x50);
      iVar4 = 5;
LAB_001f99e4:
      iVar3 = FUN_001f9a88(param_1);
      if ((iVar3 != 0x65) && (iVar3 != 0x45)) {
        if (iVar3 != 0x2e) goto LAB_001f9818;
        uVar1 = *(undefined4 *)(param_1 + 0x88);
        goto LAB_001f98c4;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x14);
LAB_001f97b8:
      FUN_001f40e0(param_1 + 0x50,uVar1);
      iVar4 = FUN_001f9a88(param_1);
      if (iVar4 - 0x30U < 10) {
        uVar1 = *(undefined4 *)(param_1 + 0x14);
LAB_001f97d8:
        FUN_001f40e0(param_1 + 0x50,uVar1);
        iVar4 = FUN_001f9a88(param_1);
        if (iVar4 - 0x30U < 10) {
          do {
            FUN_001f40e0(param_1 + 0x50,*(undefined4 *)(param_1 + 0x14));
            iVar4 = FUN_001f9a88(param_1);
          } while (iVar4 - 0x30U < 10);
        }
        goto LAB_001f9814;
      }
      if ((iVar4 == 0x2d) || (iVar4 == 0x2b)) {
        FUN_001f40e0(param_1 + 0x50,*(undefined4 *)(param_1 + 0x14));
        iVar4 = FUN_001f9a88(param_1);
        if (iVar4 - 0x30U < 10) {
          uVar1 = *(undefined4 *)(param_1 + 0x14);
          goto LAB_001f97d8;
        }
        pcVar9 = "invalid number; expected digit after exponent sign";
      }
      else {
        pcVar9 = "invalid number; expected \'+\', \'-\', or digit after exponent";
      }
    }
    else {
      if (iVar4 == 0x2d) {
        FUN_001f40e0(param_1 + 0x50);
      }
      iVar4 = FUN_001f9a88(param_1);
      if (iVar4 - 0x31U < 9) {
        FUN_001f40e0(param_1 + 0x50,*(undefined4 *)(param_1 + 0x14));
        iVar4 = 6;
        goto LAB_001f9784;
      }
      if (iVar4 == 0x30) {
        FUN_001f40e0(param_1 + 0x50,*(undefined4 *)(param_1 + 0x14));
        iVar4 = 6;
        goto LAB_001f99e4;
      }
      pcVar9 = "invalid number; expected digit after \'-\'";
    }
LAB_001f9a58:
    *(char **)(param_1 + 0x68) = pcVar9;
    uVar7 = 0xe;
    goto LAB_001f9a60;
  }
  FUN_001f40e0(param_1 + 0x50);
  iVar4 = 5;
LAB_001f9784:
  while( true ) {
    iVar3 = FUN_001f9a88(param_1);
    if (9 < iVar3 - 0x30U) break;
    FUN_001f40e0(param_1 + 0x50,*(undefined4 *)(param_1 + 0x14));
  }
  if (iVar3 == 0x2e) {
    uVar1 = *(undefined4 *)(param_1 + 0x88);
LAB_001f98c4:
    FUN_001f40e0(param_1 + 0x50,uVar1);
    iVar4 = FUN_001f9a88(param_1);
    if (9 < iVar4 - 0x30U) {
      pcVar9 = "invalid number; expected digit after \'.\'";
      goto LAB_001f9a58;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    while( true ) {
      FUN_001f40e0(param_1 + 0x50,uVar1);
      iVar4 = FUN_001f9a88(param_1);
      if (9 < iVar4 - 0x30U) break;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    if ((iVar4 == 0x45) || (iVar4 == 0x65)) goto LAB_001f97b0;
LAB_001f9814:
    iVar4 = 7;
  }
  else if ((iVar3 == 0x45) || (iVar3 == 0x65)) {
LAB_001f97b0:
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    goto LAB_001f97b8;
  }
LAB_001f9818:
  plVar10 = (long *)(param_1 + 0x28);
  lVar11 = *plVar10;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar11 == 0) {
    plVar10 = (long *)(param_1 + 0x30);
    lVar11 = *plVar10;
    if (lVar11 != 0) goto LAB_001f9844;
  }
  else {
LAB_001f9844:
    *plVar10 = lVar11 + -1;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  local_40 = (char *)0x0;
  piVar5 = (int *)__errno();
  *piVar5 = 0;
  if (iVar4 == 5) {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      pcVar9 = (char *)(param_1 + 0x51);
    }
    else {
      pcVar9 = *(char **)(param_1 + 0x60);
    }
    uVar8 = strtoull(pcVar9,&local_40,10);
    if (*piVar5 == 0) {
      *(ulonglong *)(param_1 + 0x78) = uVar8;
      uVar7 = 5;
      goto LAB_001f9a60;
    }
LAB_001f9998:
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) goto LAB_001f99a0;
LAB_001f99a8:
    pcVar9 = *(char **)(param_1 + 0x60);
  }
  else {
    if (iVar4 == 6) {
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        pcVar9 = (char *)(param_1 + 0x51);
      }
      else {
        pcVar9 = *(char **)(param_1 + 0x60);
      }
      lVar6 = strtoll(pcVar9,&local_40,10);
      if (*piVar5 == 0) {
        *(longlong *)(param_1 + 0x70) = lVar6;
        uVar7 = 6;
        goto LAB_001f9a60;
      }
      goto LAB_001f9998;
    }
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) goto LAB_001f99a8;
LAB_001f99a0:
    pcVar9 = (char *)(param_1 + 0x51);
  }
  dVar12 = strtod(pcVar9,&local_40);
  uVar7 = 7;
  *(double *)(param_1 + 0x80) = dVar12;
LAB_001f9a60:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


