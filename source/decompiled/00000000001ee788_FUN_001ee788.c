// Recovered from libkentos.so by Ghidra 12.2
// address: 001ee788
// size: 744
// name: FUN_001ee788
// namespace: Global
// signature: undefined FUN_001ee788(void)
// generated: 2026-11-22 21:46:49


long * FUN_001ee788(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  void *__s1;
  long *plVar11;
  ulong uVar12;
  ulong unaff_x27;
  ulong uVar13;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 001ee7d4 to 001ee7db has its CatchHandler @ 001eea94 */
  uVar6 = FUN_001eec50(auStack_70,pbVar1,uVar6);
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar13 & uVar12) == 0) {
      unaff_x27 = uVar13 & uVar6;
    }
    else {
      unaff_x27 = uVar6;
      if (uVar12 <= uVar6) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = uVar6 / uVar12;
        }
        unaff_x27 = uVar6 - uVar8 * uVar12;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x27 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar7, plVar11 != (long *)0x0)) {
      __n = (ulong)(*param_2 >> 1);
      pbVar1 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        pbVar1 = *(byte **)(param_2 + 0x10);
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 != uVar6) {
          if ((uVar13 & uVar12) == 0) {
            uVar8 = uVar8 & uVar13;
          }
          else if (uVar12 <= uVar8) {
            uVar3 = 0;
            if (uVar12 != 0) {
              uVar3 = uVar8 / uVar12;
            }
            if (uVar8 - uVar3 * uVar12 == unaff_x27) goto LAB_001ee880;
            break;
          }
          if (uVar8 != unaff_x27) break;
        }
LAB_001ee880:
        bVar2 = *(byte *)(plVar11 + 2);
        uVar8 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar8 = plVar11[3];
        }
        if (uVar8 == __n) {
          __s1 = (void *)plVar11[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar11 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n == 0) goto LAB_001eea38;
            uVar8 = 0;
            while (*(byte *)((long)plVar11 + uVar8 + 0x11) == pbVar1[uVar8]) {
              uVar8 = uVar8 + 1;
              if (bVar2 >> 1 == uVar8) goto LAB_001eea38;
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(__s1,pbVar1,__n), iVar5 == 0)) goto LAB_001eea38;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = operator_new(0x30);
  plVar11[4] = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)param_2;
  plVar11[3] = *(long *)(param_2 + 8);
  plVar11[2] = lVar10;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(plVar11 + 5) = 0;
  *plVar11 = 0;
  plVar11[1] = uVar6;
  if ((uVar12 == 0) || (*(float *)(param_1 + 4) * (float)uVar12 < (float)(param_1[3] + 1))) {
    if (uVar12 < 3) {
      uVar13 = 1;
    }
    else {
      uVar13 = (ulong)((uVar12 - 1 & uVar12) != 0);
    }
    uVar13 = uVar13 | uVar12 << 1;
    uVar12 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
                    /* try { // try from 001ee984 to 001ee98b has its CatchHandler @ 001eea70 */
    FUN_001ef0e8(param_1,uVar12);
    uVar12 = param_1[1];
    if ((uVar12 - 1 & uVar12) == 0) {
      unaff_x27 = uVar12 - 1 & uVar6;
    }
    else if (uVar6 < uVar12) {
      unaff_x27 = uVar6;
    }
    else {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar6 / uVar12;
      }
      unaff_x27 = uVar6 - uVar13 * uVar12;
    }
  }
  lVar10 = *param_1;
  plVar9 = *(long **)(lVar10 + unaff_x27 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar11 = *plVar9;
    *plVar9 = (long)plVar11;
    *(long **)(lVar10 + unaff_x27 * 8) = plVar9;
    if (*plVar11 == 0) goto LAB_001eea2c;
    uVar6 = *(ulong *)(*plVar11 + 8);
    if ((uVar12 - 1 & uVar12) == 0) {
      uVar6 = uVar6 & uVar12 - 1;
    }
    else if (uVar12 <= uVar6) {
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar6 / uVar12;
      }
      uVar6 = uVar6 - uVar13 * uVar12;
    }
    plVar9 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar11 = *plVar9;
  }
  *plVar9 = (long)plVar11;
LAB_001eea2c:
  param_1[3] = param_1[3] + 1;
LAB_001eea38:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar11 + 5;
}


