// Recovered from libkentos.so by Ghidra 12.2
// address: 001d9244
// size: 372
// name: FUN_001d9244
// namespace: Global
// signature: undefined FUN_001d9244(void)
// generated: 2026-11-22 21:43:19


void FUN_001d9244(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  uVar9 = 0x2e8ba2e8ba2e8ba;
  uVar1 = lVar3 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_001d9034(param_1);
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  if ((ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3) < 0x1745d1745d1745d) {
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_001d92f0;
    }
  }
  pvVar2 = operator_new(uVar9 * 0x58);
LAB_001d92f0:
  pvVar6 = (void *)((long)pvVar2 + lVar3 * 8);
                    /* try { // try from 001d92f8 to 001d9303 has its CatchHandler @ 001d93b8 */
  FUN_001d9400(pvVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar8 = (void *)param_1[1];
  lVar3 = (long)pvVar6 + 0x58;
  if (pvVar8 == pvVar7) {
    pvVar8 = pvVar7;
  }
  else {
    do {
      pvVar8 = (void *)((long)pvVar8 + -0x58);
                    /* try { // try from 001d931c to 001d9323 has its CatchHandler @ 001d93cc */
      FUN_001d9400((long)pvVar6 + -0x58,pvVar8);
      pvVar6 = (void *)((long)pvVar6 + -0x58);
    } while (pvVar7 != pvVar8);
    pvVar7 = (void *)*param_1;
    pvVar8 = (void *)param_1[1];
  }
  *param_1 = (long)pvVar6;
  param_1[1] = lVar3;
  param_1[2] = (long)((long)pvVar2 + uVar9 * 0x58);
  while (pvVar8 != pvVar7) {
    pvVar8 = (void *)((long)pvVar8 + -0x58);
    FUN_0021f4b4(pvVar8);
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar7);
  return;
}


