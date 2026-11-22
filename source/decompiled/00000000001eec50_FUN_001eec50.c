// Recovered from libkentos.so by Ghidra 12.2
// address: 001eec50
// size: 1176
// name: FUN_001eec50
// namespace: Global
// signature: undefined FUN_001eec50(void)
// generated: 2026-11-22 21:46:49


ulong FUN_001eec50(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar15 = param_2[3];
      uVar11 = *param_2 + (lVar14 + param_3) * -0x3c5a37a36834ced9;
      uVar6 = uVar11 + param_2[1];
      uVar5 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      uVar9 = uVar6 + param_2[2];
      lVar10 = *(long *)((long)param_2 + (param_3 - 8)) + uVar15;
      uVar12 = lVar10 + uVar5;
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar5;
      uVar13 = uVar8 + lVar14;
      lVar14 = (uVar6 >> 7 | uVar6 << 0x39) + (uVar11 >> 0x25 | uVar11 * 0x8000000) +
               (uVar11 + uVar15 >> 0x34 | (uVar11 + uVar15) * 0x1000) +
               (uVar9 >> 0x1f | uVar9 << 0x21);
      uVar6 = (uVar13 + lVar10 + lVar14) * -0x3c5a37a36834ced9 +
              (uVar9 + uVar15 + (uVar5 >> 0x25 | uVar5 * 0x8000000) + (uVar8 >> 7 | uVar8 << 0x39) +
               (uVar12 >> 0x34 | uVar12 * 0x1000) + (uVar13 >> 0x1f | uVar13 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar6 = lVar14 + (uVar6 ^ uVar6 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar14 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar1 = *(long *)((long)param_2 + (param_3 - 0x28));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x38));
    uVar13 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar10 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
    uVar11 = (uVar13 ^ lVar14 + param_3) * -0x622015f714c7d297;
    uVar6 = lVar10 + lVar2 + lVar14;
    lVar7 = *(long *)((long)param_2 + (param_3 - 8));
    uVar5 = lVar2 + lVar4;
    lVar14 = uVar5 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar9 = lVar14 + uVar13 + lVar4;
    uVar12 = lVar14 + lVar1 + lVar7;
    puVar3 = param_2 + 4;
    uVar15 = *param_2;
    uVar8 = uVar9 + lVar7;
    uVar9 = (uVar9 >> 0x2c | uVar9 * 0x100000) + lVar14 + (uVar12 >> 0x15 | uVar12 << 0x2b);
    uVar12 = uVar6 + lVar1;
    lVar14 = uVar15 + lVar1 * -0x4b6d499041670d8d;
    uVar13 = (uVar11 ^ uVar13 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    uVar11 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    uVar13 = lVar1 + lVar10 + uVar11;
    uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar10 + (uVar13 >> 0x15 | uVar13 << 0x2b);
    lVar10 = -(param_3 - 1 & 0xffffffffffffffc0);
    while( true ) {
      lVar10 = lVar10 + 0x40;
      lVar7 = uVar15 + uVar6 * -0x4b6d499041670d8d;
      lVar1 = lVar14 + uVar12 + uVar5;
      lVar14 = (uVar11 + uVar8 >> 0x21 | (uVar11 + uVar8) * 0x80000000) * -0x4b6d499041670d8d;
      lVar2 = lVar14 + uVar9 + *puVar3;
      uVar6 = uVar5 + uVar6 + puVar3[2];
      uVar5 = puVar3[1] + uVar12 + (uVar6 >> 0x2a | uVar6 * 0x400000) * -0x4b6d499041670d8d;
      lVar4 = lVar7 + uVar8;
      uVar13 = lVar2 + puVar3[1] + puVar3[2];
      uVar6 = lVar1 + puVar3[-3];
      uVar15 = lVar7 + puVar3[-3] + puVar3[-2];
      uVar12 = uVar15 + puVar3[-1];
      uVar11 = (uVar6 >> 0x25 | uVar6 * 0x8000000) * -0x4b6d499041670d8d ^ uVar9;
      uVar8 = uVar13 + puVar3[3];
      uVar6 = lVar4 + puVar3[-1] + uVar11;
      uVar9 = uVar5 + puVar3[-2] + lVar2 + puVar3[3];
      uVar6 = (uVar15 >> 0x2c | uVar15 * 0x100000) + lVar7 + (uVar6 >> 0x15 | uVar6 << 0x2b);
      uVar9 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar2 + (uVar9 >> 0x15 | uVar9 << 0x2b);
      if (lVar10 == 0) break;
      uVar15 = puVar3[4];
      puVar3 = puVar3 + 8;
    }
    uVar13 = (uVar8 ^ uVar12) * -0x622015f714c7d297;
    uVar12 = (uVar9 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar13 ^ uVar8 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = (uVar12 ^ uVar9 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar9 = lVar14 + (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar9 ^ uVar11 + (uVar5 ^ uVar5 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar9 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  if (0x10 < param_3) {
    lVar10 = *(long *)((long)param_2 + (param_3 - 8));
    uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar5 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    uVar6 = *param_2 * -0x4b6d499041670d8d + param_3 + lVar10 * 0x651e95c4d06fbfb1 +
            (uVar6 >> 0x14 | uVar6 << 0x2c);
    uVar5 = ((uVar5 >> 0x2b | uVar5 * 0x200000) +
             *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
             (lVar10 * -0x41befec400000000 | (ulong)(lVar10 * -0x651e95c4d06fbfb1) >> 0x1e) ^ uVar6)
            * -0x622015f714c7d297;
    uVar6 = (uVar5 ^ uVar6 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  if (8 < param_3) {
    uVar5 = *(ulong *)((long)param_2 + (param_3 - 8));
    uVar6 = uVar5 + param_3;
    uVar9 = uVar6 << ((ulong)(0x40 - (int)param_3) & 0x3f) | uVar6 >> (param_3 & 0x3f);
    uVar6 = (uVar9 ^ *param_2) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar9 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar5;
  }
  if (3 < param_3) {
    uVar6 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    uVar5 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar5 ^ uVar6 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar6 = 0x9ae16a3b2f90404f;
  if (param_3 != 0) {
    uVar6 = (ulong)((int)param_3 + (uint)*(byte *)((long)param_2 + (param_3 - 1)) * 4) *
            -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
            -0x651e95c4d06fbfb1;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar6;
}


