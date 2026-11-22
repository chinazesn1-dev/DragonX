// Recovered from libkentos.so by Ghidra 12.2
// address: 001f29a4
// size: 528
// name: FUN_001f29a4
// namespace: Global
// signature: undefined FUN_001f29a4(void)
// generated: 2026-11-22 21:46:52


void FUN_001f29a4(long *param_1,uint *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x27;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar11 = 0;
    uVar9 = 0;
    puVar2 = param_2 + param_3 * 2;
    plVar1 = param_1 + 2;
    do {
      uVar10 = (ulong)*param_2;
      if (uVar9 == 0) {
LAB_001f2a78:
                    /* try { // try from 001f2a78 to 001f2a7f has its CatchHandler @ 001f2bcc */
        plVar7 = operator_new(0x18);
        lVar5 = *(long *)param_2;
        *plVar7 = 0;
        plVar7[1] = uVar10;
        plVar7[2] = lVar5;
        if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(lVar11 + 1))) {
          if (uVar9 < 3) {
            uVar4 = 1;
          }
          else {
            uVar4 = (ulong)((uVar9 - 1 & uVar9) != 0);
          }
          uVar4 = uVar4 | uVar9 << 1;
          uVar9 = (ulong)((float)(lVar11 + 1) / *(float *)(param_1 + 4));
          if (uVar9 <= uVar4) {
            uVar9 = uVar4;
          }
                    /* try { // try from 001f2aec to 001f2af3 has its CatchHandler @ 001f2bb4 */
          FUN_001f2c00(param_1,uVar9);
          uVar9 = param_1[1];
          if ((uVar9 - 1 & uVar9) == 0) {
            uVar10 = uVar9 - 1 & uVar10;
          }
          else if (uVar9 <= uVar10) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar4 * uVar9;
          }
        }
        else {
          uVar10 = unaff_x27;
        }
        lVar11 = *param_1;
        plVar6 = *(long **)(lVar11 + uVar10 * 8);
        if (plVar6 == (long *)0x0) {
          *plVar7 = *plVar1;
          *plVar1 = (long)plVar7;
          *(long **)(lVar11 + uVar10 * 8) = plVar1;
          if (*plVar7 != 0) {
            uVar10 = *(ulong *)(*plVar7 + 8);
            if ((uVar9 - 1 & uVar9) == 0) {
              uVar10 = uVar10 & uVar9 - 1;
            }
            else if (uVar9 <= uVar10) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar4 * uVar9;
            }
            plVar6 = (long *)(*param_1 + uVar10 * 8);
            goto LAB_001f2b7c;
          }
        }
        else {
          *plVar7 = *plVar6;
LAB_001f2b7c:
          *plVar6 = (long)plVar7;
        }
        lVar11 = param_1[3] + 1;
        param_1[3] = lVar11;
      }
      else {
        uVar4 = uVar9 - 1;
        if ((uVar4 & uVar9) == 0) {
          unaff_x27 = uVar4 & uVar10;
        }
        else {
          unaff_x27 = uVar10;
          if (uVar9 <= uVar10) {
            uVar8 = 0;
            if (uVar9 != 0) {
              uVar8 = uVar10 / uVar9;
            }
            unaff_x27 = uVar10 - uVar8 * uVar9;
          }
        }
        plVar7 = *(long **)(*param_1 + unaff_x27 * 8);
        if (plVar7 == (long *)0x0) goto LAB_001f2a78;
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_001f2a78;
          uVar8 = plVar7[1];
          if (uVar8 != uVar10) {
            if ((uVar4 & uVar9) == 0) {
              uVar8 = uVar8 & uVar4;
            }
            else if (uVar9 <= uVar8) {
              uVar3 = 0;
              if (uVar9 != 0) {
                uVar3 = uVar8 / uVar9;
              }
              if (uVar8 - uVar3 * uVar9 == unaff_x27) goto LAB_001f2a68;
              goto LAB_001f2a78;
            }
            if (uVar8 != unaff_x27) goto LAB_001f2a78;
          }
LAB_001f2a68:
        } while (*(uint *)(plVar7 + 2) != *param_2);
      }
      param_2 = param_2 + 2;
    } while (param_2 != puVar2);
  }
  return;
}


