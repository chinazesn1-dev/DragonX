// Recovered from libkentos.so by Ghidra 12.2
// address: 001f0ca4
// size: 792
// name: FUN_001f0ca4
// namespace: Global
// signature: undefined FUN_001f0ca4(void)
// generated: 2026-11-22 21:46:52


void FUN_001f0ca4(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_00758cd0;
  if (param_1 == 0) {
    return;
  }
  if (PTR_DAT_00758cd0[6] == '\0') {
    return;
  }
  if (*(long *)(PTR_DAT_00758cd0 + 0x18) == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x30e0);
  uVar7 = FUN_002204a0(lVar11);
  if ((uVar7 & 1) == 0) {
    return;
  }
  plVar1 = (long *)(lVar11 + 1000);
  uVar7 = FUN_002204a0(plVar1);
  if ((uVar7 & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar11 + 0x3f0);
  uVar7 = (ulong)uVar2;
  if (0x3d < uVar2 - 3) {
    return;
  }
  piVar8 = *(int **)(puVar6 + 0x18);
  iVar3 = piVar8[2];
  if (iVar3 == 0) {
    bVar5 = false;
    iVar3 = piVar8[3];
  }
  else {
    iVar4 = *(int *)*plVar1;
    if ((iVar4 == iVar3) || (iVar4 < 1)) {
      bVar5 = false;
      iVar3 = piVar8[3];
    }
    else {
      bVar5 = true;
      *(int *)*plVar1 = iVar3;
      iVar3 = piVar8[3];
    }
  }
  if (iVar3 != 0) {
    iVar4 = *(int *)(*plVar1 + 0x3c);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      bVar5 = true;
      *(int *)(*plVar1 + 0x3c) = iVar3;
    }
  }
  iVar3 = *piVar8;
  if ((iVar3 != 0) && (*(int *)(*plVar1 + 0x78) != iVar3)) {
    bVar5 = true;
    *(int *)(*plVar1 + 0x78) = iVar3;
  }
  if ((3 < (int)uVar2) && (iVar3 = piVar8[6], iVar3 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0xb4);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      bVar5 = true;
      *(int *)(*plVar1 + 0xb4) = iVar3;
    }
  }
  if ((4 < (int)uVar2) && (iVar3 = piVar8[7], iVar3 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0xf0);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      bVar5 = true;
      *(int *)(*plVar1 + 0xf0) = iVar3;
    }
  }
  if ((7 < (int)uVar2) && (iVar3 = piVar8[5], iVar3 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0x1a4);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      bVar5 = true;
      *(int *)(*plVar1 + 0x1a4) = iVar3;
    }
  }
  puVar9 = (undefined4 *)*plVar1;
  puVar10 = puVar9;
  do {
    switch(*puVar10) {
    case 0x7a509:
    case 0x7a50c:
    case 0x7a50f:
    case 0x7a512:
    case 0x7a56d:
    case 0x7a570:
      if (5 < (int)uVar2) {
        iVar3 = piVar8[0xe];
joined_r0x001f0e7c:
        if (((iVar3 != 0) && (puVar9[0x4b] != iVar3)) && (0 < (int)puVar9[0x4b])) {
          puVar9[0x4b] = iVar3;
LAB_001f0f2c:
          bVar5 = true;
        }
      }
      break;
    case 0x7a50a:
    case 0x7a50d:
    case 0x7a510:
    case 0x7a513:
    case 0x7a56e:
    case 0x7a571:
      if (5 < (int)uVar2) {
        iVar3 = piVar8[0x10];
        goto joined_r0x001f0e7c;
      }
      break;
    case 0x7a50b:
    case 0x7a50e:
    case 0x7a511:
    case 0x7a514:
    case 0x7a517:
    case 0x7a56f:
    case 0x7a572:
      if (5 < (int)uVar2) {
        iVar3 = piVar8[0x12];
        goto joined_r0x001f0e7c;
      }
      break;
    case 0x7a515:
    case 0x7a516:
    case 0x7a518:
    case 0x7a519:
    case 0x7a51a:
    case 0x7a51b:
    case 0x7a51c:
    case 0x7a51d:
    case 0x7a51e:
    case 0x7a51f:
    case 0x7a520:
    case 0x7a521:
    case 0x7a522:
    case 0x7a523:
    case 0x7a524:
    case 0x7a525:
    case 0x7a526:
    case 0x7a527:
    case 0x7a528:
    case 0x7a529:
    case 0x7a52a:
    case 0x7a52b:
    case 0x7a52c:
    case 0x7a52d:
    case 0x7a52e:
    case 0x7a52f:
    case 0x7a530:
    case 0x7a531:
    case 0x7a532:
    case 0x7a533:
    case 0x7a534:
    case 0x7a535:
    case 0x7a536:
    case 0x7a537:
    case 0x7a538:
    case 0x7a539:
    case 0x7a53a:
    case 0x7a53b:
    case 0x7a53c:
    case 0x7a53d:
    case 0x7a53e:
    case 0x7a53f:
    case 0x7a540:
    case 0x7a541:
    case 0x7a542:
    case 0x7a543:
    case 0x7a544:
    case 0x7a545:
    case 0x7a546:
    case 0x7a547:
    case 0x7a548:
    case 0x7a549:
    case 0x7a54a:
    case 0x7a54b:
    case 0x7a54c:
    case 0x7a54d:
    case 0x7a54e:
    case 0x7a54f:
    case 0x7a550:
    case 0x7a551:
    case 0x7a552:
    case 0x7a553:
    case 0x7a554:
    case 0x7a555:
    case 0x7a556:
    case 0x7a557:
    case 0x7a558:
    case 0x7a559:
    case 0x7a55a:
    case 0x7a55b:
    case 0x7a55c:
    case 0x7a55d:
    case 0x7a55e:
    case 0x7a55f:
    case 0x7a560:
    case 0x7a561:
    case 0x7a562:
    case 0x7a563:
    case 0x7a564:
    case 0x7a565:
    case 0x7a566:
    case 0x7a567:
    case 0x7a568:
    case 0x7a569:
    case 0x7a56a:
    case 0x7a56b:
    case 0x7a56c:
      break;
    default:
      switch(*puVar10) {
      case 0x7a8f1:
      case 0x7a8f4:
      case 0x7a958:
      case 0x7a95b:
      case 0x7a95e:
        if (6 < (int)uVar2) {
          iVar3 = piVar8[0xd];
joined_r0x001f0f10:
          if (((iVar3 != 0) && (puVar9[0x5a] != iVar3)) && (0 < (int)puVar9[0x5a])) {
            puVar9[0x5a] = iVar3;
            goto LAB_001f0f2c;
          }
        }
        break;
      case 0x7a8f2:
      case 0x7a8f5:
      case 0x7a959:
      case 0x7a95c:
      case 0x7a95f:
        if (6 < (int)uVar2) {
          iVar3 = piVar8[0xf];
          goto joined_r0x001f0f10;
        }
        break;
      case 0x7a8f3:
      case 0x7a95a:
      case 0x7a95d:
      case 0x7a960:
        if (6 < (int)uVar2) {
          iVar3 = piVar8[0x11];
          goto joined_r0x001f0f10;
        }
      }
    }
    uVar7 = uVar7 - 1;
    puVar10 = puVar10 + 0xf;
  } while (uVar7 != 0);
  if ((9 < (int)uVar2) && (iVar3 = piVar8[8], iVar3 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0x21c);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      bVar5 = true;
      *(int *)(*plVar1 + 0x21c) = iVar3;
    }
  }
  if ((0xd < (int)uVar2) && (iVar3 = piVar8[0x15], iVar3 != 0)) {
    iVar4 = *(int *)(*plVar1 + 0x30c);
    if ((iVar4 != iVar3) && (0 < iVar4)) {
      *(int *)(*plVar1 + 0x30c) = iVar3;
      goto LAB_001f0fa4;
    }
  }
  if (!bVar5) {
    return;
  }
LAB_001f0fa4:
                    /* try { // try from 001f0fa4 to 001f0fab has its CatchHandler @ 001f0fbc */
  FUN_00266c48(lVar11);
  return;
}


