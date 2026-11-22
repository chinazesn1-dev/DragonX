// Recovered from libkentos.so by Ghidra 12.2
// address: 001f8e4c
// size: 680
// name: FUN_001f8e4c
// namespace: Global
// signature: undefined FUN_001f8e4c(void)
// generated: 2026-11-22 21:47:03


undefined8 FUN_001f8e4c(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar3 = FUN_001f9a88(param_1);
    if (iVar3 != 0xef) {
      plVar7 = (long *)(param_1 + 0x28);
      lVar8 = *plVar7;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      if (lVar8 == 0) {
        plVar7 = (long *)(param_1 + 0x30);
        lVar8 = *plVar7;
        if (lVar8 != 0) goto LAB_001f8ed4;
      }
      else {
LAB_001f8ed4:
        *plVar7 = lVar8 + -1;
      }
      if (*(int *)(param_1 + 0x14) != -1) {
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      }
      goto LAB_001f8f00;
    }
    iVar3 = FUN_001f9a88(param_1);
    if ((iVar3 == 0xbb) && (iVar3 = FUN_001f9a88(param_1), iVar3 == 0xbf)) goto LAB_001f8f00;
    pcVar6 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
    goto LAB_001f8ea0;
  }
LAB_001f8f00:
  do {
    FUN_001f9a88(param_1);
    uVar1 = *(uint *)(param_1 + 0x14);
    if (0x20 < uVar1) break;
  } while ((1L << ((ulong)uVar1 & 0x3f) & 0x100002600U) != 0);
  cVar2 = *(char *)(param_1 + 0x10);
  while ((cVar2 != '\0' && (uVar1 == 0x2f))) {
    uVar4 = FUN_001f90f4(param_1);
    if ((uVar4 & 1) == 0) goto LAB_001f8fb0;
    do {
      FUN_001f9a88(param_1);
      uVar1 = *(uint *)(param_1 + 0x14);
      if (0x20 < uVar1) break;
    } while ((1L << ((ulong)uVar1 & 0x3f) & 0x100002600U) != 0);
    cVar2 = *(char *)(param_1 + 0x10);
  }
  uVar5 = 8;
  switch(uVar1) {
  default:
    goto switchD_001f8f98_caseD_1;
  case 0x22:
    uVar5 = FUN_001f9200(param_1);
    return uVar5;
  case 0x2c:
    uVar5 = 0xd;
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar5 = FUN_001f96e8(param_1);
    return uVar5;
  case 0x3a:
    uVar5 = 0xc;
    break;
  case 0x5b:
    break;
  case 0x5d:
    uVar5 = 10;
    break;
  case 0x66:
    cVar2 = FUN_001f9a88(param_1);
    if (((cVar2 == 'a') && (cVar2 = FUN_001f9a88(param_1), cVar2 == 'l')) &&
       ((cVar2 = FUN_001f9a88(param_1), cVar2 == 's' &&
        (cVar2 = FUN_001f9a88(param_1), cVar2 == 'e')))) {
      return 2;
    }
    goto switchD_001f8f98_caseD_1;
  case 0x6e:
    cVar2 = FUN_001f9a88(param_1);
    if (((cVar2 == 'u') && (cVar2 = FUN_001f9a88(param_1), cVar2 == 'l')) &&
       (cVar2 = FUN_001f9a88(param_1), cVar2 == 'l')) {
      return 3;
    }
    goto switchD_001f8f98_caseD_1;
  case 0x74:
    cVar2 = FUN_001f9a88(param_1);
    if (((cVar2 == 'r') && (cVar2 = FUN_001f9a88(param_1), cVar2 == 'u')) &&
       (cVar2 = FUN_001f9a88(param_1), cVar2 == 'e')) {
      return 1;
    }
switchD_001f8f98_caseD_1:
    pcVar6 = "invalid literal";
LAB_001f8ea0:
    *(char **)(param_1 + 0x68) = pcVar6;
LAB_001f8fb0:
    uVar5 = 0xe;
    break;
  case 0x7b:
    uVar5 = 9;
    break;
  case 0x7d:
    uVar5 = 0xb;
    break;
  case 0xffffffff:
  case 0:
    uVar5 = 0xf;
  }
  return uVar5;
}


