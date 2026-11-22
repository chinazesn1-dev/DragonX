// Recovered from libkentos.so by Ghidra 12.2
// address: 001f35a0
// size: 680
// name: FUN_001f35a0
// namespace: Global
// signature: undefined FUN_001f35a0(void)
// generated: 2026-11-22 21:46:54


/* WARNING: Removing unreachable block (ram,0x001f3760) */

void FUN_001f35a0(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [12];
  
  if (((param_1 != 0) && (999999 < param_3)) && (lVar7 = *(long *)(param_1 + 0x2768), lVar7 != 0)) {
                    /* try { // try from 001f35e8 to 001f35eb has its CatchHandler @ 001f386c */
    if (((*(long *)(lVar7 + 0x5e8) != 0) && (iVar1 = FUN_00267254(), iVar1 == param_2)) &&
       (lVar2 = *(long *)(lVar7 + 0x5e8), lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 0x830);
      if (0 < iVar1) {
        uVar4 = 7;
        if (iVar1 < 8) {
          uVar4 = 0xffffffff;
          lVar5 = 0;
          piVar3 = (int *)(*(long *)(lVar2 + 0x828) + 4);
          do {
            if (999999 < *piVar3) {
              uVar4 = (uint)lVar5;
              break;
            }
            lVar5 = lVar5 + 1;
            piVar3 = piVar3 + 10;
          } while (lVar5 < iVar1);
          if ((int)uVar4 < 1) {
            uVar4 = 0;
          }
        }
        if (((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) &&
           (piVar3 = (int *)(*(long *)(lVar2 + 0x828) + (ulong)uVar4 * 0x28 + 4), *piVar3 != param_3
           )) {
          *piVar3 = param_3;
                    /* try { // try from 001f3680 to 001f3683 has its CatchHandler @ 001f3860 */
          FUN_00267354();
        }
      }
    }
                    /* try { // try from 001f3684 to 001f368f has its CatchHandler @ 001f3870 */
    auVar9 = FUN_00266f3c(lVar7,0);
    if (0 < auVar9._8_4_) {
      lVar2 = 0;
      do {
        lVar5 = *(long *)(auVar9._0_8_ + lVar2 * 8);
                    /* try { // try from 001f36b0 to 001f36b7 has its CatchHandler @ 001f3874 */
        if ((lVar5 != 0) && (iVar1 = FUN_00267254(lVar5), iVar1 == param_2)) {
          iVar1 = *(int *)(lVar5 + 0x830);
          if (0 < iVar1) {
            uVar4 = 7;
            if (iVar1 < 8) {
              uVar4 = 0xffffffff;
              lVar6 = 0;
              piVar3 = (int *)(*(long *)(lVar5 + 0x828) + 4);
              do {
                if (999999 < *piVar3) {
                  uVar4 = (uint)lVar6;
                  break;
                }
                lVar6 = lVar6 + 1;
                piVar3 = piVar3 + 10;
              } while (lVar6 < iVar1);
              if (0 < (int)uVar4) goto LAB_001f3718;
              uVar4 = 0;
            }
            else {
LAB_001f3718:
              if ((int)uVar4 < 0) goto LAB_001f3748;
            }
            if (((int)uVar4 < iVar1) &&
               (piVar3 = (int *)(*(long *)(lVar5 + 0x828) + (ulong)uVar4 * 0x28 + 4),
               *piVar3 != param_3)) {
              *piVar3 = param_3;
                    /* try { // try from 001f3740 to 001f3747 has its CatchHandler @ 001f3764 */
              FUN_00267354(lVar5);
            }
          }
        }
LAB_001f3748:
        lVar2 = lVar2 + 1;
      } while (lVar2 < auVar9._8_4_);
    }
    uVar8 = 0;
    do {
                    /* try { // try from 001f3778 to 001f3793 has its CatchHandler @ 001f3878 */
      lVar2 = FUN_00266d3c(lVar7,uVar8);
      if ((lVar2 != 0) && (iVar1 = FUN_00267254(lVar2), iVar1 == param_2)) {
        iVar1 = *(int *)(lVar2 + 0x830);
        if (0 < iVar1) {
          uVar4 = 7;
          if (iVar1 < 8) {
            uVar4 = 0xffffffff;
            lVar5 = 0;
            piVar3 = (int *)(*(long *)(lVar2 + 0x828) + 4);
            do {
              if (999999 < *piVar3) {
                uVar4 = (uint)lVar5;
                break;
              }
              lVar5 = lVar5 + 1;
              piVar3 = piVar3 + 10;
            } while (lVar5 < iVar1);
            if ((int)uVar4 < 1) {
              uVar4 = 0;
            }
          }
          if (((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) &&
             (piVar3 = (int *)(*(long *)(lVar2 + 0x828) + (ulong)uVar4 * 0x28 + 4),
             *piVar3 != param_3)) {
            *piVar3 = param_3;
                    /* try { // try from 001f3820 to 001f3827 has its CatchHandler @ 001f3838 */
            FUN_00267354(lVar2);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0xb);
  }
  return;
}


