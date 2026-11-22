// Recovered from libkentos.so by Ghidra 12.2
// address: 001dc514
// size: 528
// name: FUN_001dc514
// namespace: Global
// signature: undefined FUN_001dc514(void)
// generated: 2026-11-22 21:43:48


void FUN_001dc514(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x27;
  long lVar11;
  long lVar12;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar10 = 0;
    uVar8 = 0;
    plVar2 = param_2 + param_3 * 2;
    plVar1 = param_1 + 2;
    do {
      uVar9 = (ulong)(int)*param_2;
      if (uVar8 == 0) {
LAB_001dc5e8:
                    /* try { // try from 001dc5e8 to 001dc5ef has its CatchHandler @ 001dc73c */
        plVar6 = operator_new(0x20);
        lVar12 = param_2[1];
        lVar11 = *param_2;
        *plVar6 = 0;
        plVar6[1] = uVar9;
        plVar6[3] = lVar12;
        plVar6[2] = lVar11;
        if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(lVar10 + 1))) {
          if (uVar8 < 3) {
            uVar4 = 1;
          }
          else {
            uVar4 = (ulong)((uVar8 - 1 & uVar8) != 0);
          }
          uVar4 = uVar4 | uVar8 << 1;
          uVar8 = (ulong)((float)(lVar10 + 1) / *(float *)(param_1 + 4));
          if (uVar8 <= uVar4) {
            uVar8 = uVar4;
          }
                    /* try { // try from 001dc654 to 001dc65b has its CatchHandler @ 001dc724 */
          FUN_00205314(param_1,uVar8);
          uVar8 = param_1[1];
          if ((uVar8 - 1 & uVar8) == 0) {
            unaff_x27 = uVar8 - 1 & uVar9;
          }
          else if (uVar9 < uVar8) {
            unaff_x27 = uVar9;
          }
          else {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar9 / uVar8;
            }
            unaff_x27 = uVar9 - uVar4 * uVar8;
          }
        }
        lVar10 = *param_1;
        plVar5 = *(long **)(lVar10 + unaff_x27 * 8);
        if (plVar5 == (long *)0x0) {
          *plVar6 = *plVar1;
          *plVar1 = (long)plVar6;
          *(long **)(lVar10 + unaff_x27 * 8) = plVar1;
          if (*plVar6 != 0) {
            uVar9 = *(ulong *)(*plVar6 + 8);
            if ((uVar8 - 1 & uVar8) == 0) {
              uVar9 = uVar9 & uVar8 - 1;
            }
            else if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            plVar5 = (long *)(*param_1 + uVar9 * 8);
            goto LAB_001dc6ec;
          }
        }
        else {
          *plVar6 = *plVar5;
LAB_001dc6ec:
          *plVar5 = (long)plVar6;
        }
        lVar10 = param_1[3] + 1;
        param_1[3] = lVar10;
      }
      else {
        uVar4 = uVar8 - 1;
        if ((uVar4 & uVar8) == 0) {
          unaff_x27 = uVar4 & uVar9;
        }
        else {
          unaff_x27 = uVar9;
          if (uVar8 <= uVar9) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar9 / uVar8;
            }
            unaff_x27 = uVar9 - uVar7 * uVar8;
          }
        }
        plVar6 = *(long **)(*param_1 + unaff_x27 * 8);
        if (plVar6 == (long *)0x0) goto LAB_001dc5e8;
        do {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_001dc5e8;
          uVar7 = plVar6[1];
          if (uVar7 != uVar9) {
            if ((uVar4 & uVar8) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar8 <= uVar7) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar7 / uVar8;
              }
              if (uVar7 - uVar3 * uVar8 == unaff_x27) goto LAB_001dc5d8;
              goto LAB_001dc5e8;
            }
            if (uVar7 != unaff_x27) goto LAB_001dc5e8;
          }
LAB_001dc5d8:
        } while (*(int *)(plVar6 + 2) != (int)*param_2);
      }
      param_2 = param_2 + 2;
    } while (param_2 != plVar2);
  }
  return;
}


