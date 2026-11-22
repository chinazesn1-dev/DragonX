// Recovered from libkentos.so by Ghidra 12.2
// address: 001fca6c
// size: 616
// name: FUN_001fca6c
// namespace: Global
// signature: undefined FUN_001fca6c(void)
// generated: 2026-11-22 21:47:10


void FUN_001fca6c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  
  puVar6 = (ulong *)*param_2;
  uVar4 = *(uint *)(param_2 + 1);
  uVar5 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar6) * 8) - (ulong)uVar4;
  if ((long)uVar5 < 1) {
    uVar4 = *(uint *)(param_4 + 1);
  }
  else {
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_4 + 1);
    }
    else {
      uVar9 = (ulong)(0x40 - uVar4);
      puVar3 = (uint *)(param_4 + 1);
      uVar1 = *puVar3;
      uVar8 = uVar5;
      if ((long)uVar9 <= (long)uVar5) {
        uVar8 = uVar9;
      }
      puVar12 = (ulong *)*param_4;
      uVar2 = (ulong)(0x40 - uVar1);
      uVar7 = 0xffffffffffffffffU >> (uVar9 - uVar8 & 0x3f) & -1L << ((ulong)uVar4 & 0x3f) & *puVar6
      ;
      uVar9 = uVar2;
      if (uVar8 <= uVar2) {
        uVar9 = uVar8;
      }
      uVar11 = uVar7 << ((ulong)(uVar1 - uVar4) & 0x3f);
      if (uVar1 < uVar4 || uVar1 - uVar4 == 0) {
        uVar11 = uVar7 >> ((ulong)(uVar4 - uVar1) & 0x3f);
      }
      lVar10 = uVar8 - uVar9;
      uVar4 = uVar1 + (int)uVar9 & 0x3f;
      uVar5 = uVar5 - uVar8;
      puVar6 = (ulong *)((long)puVar12 + (uVar9 + uVar1 >> 3 & 0x1ffffffffffffff8));
      *puVar12 = *puVar12 &
                 (0xffffffffffffffffU >> (uVar2 - uVar9 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f) ^
                 0xffffffffffffffff) | uVar11;
      *param_4 = (long)puVar6;
      *puVar3 = uVar4;
      if (0 < lVar10) {
        *puVar6 = uVar7 >> (uVar9 + *(uint *)(param_2 + 1) & 0x3f) |
                  *puVar6 & (0xffffffffffffffffU >> (0x40U - lVar10 & 0x3f) ^ 0xffffffffffffffff);
        uVar4 = (uint)lVar10;
        *puVar3 = uVar4;
      }
      puVar6 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar6;
    }
    uVar8 = (ulong)uVar4;
    uVar9 = -1L << (uVar8 & 0x3f);
    if (0x3f < (long)uVar5) {
      uVar2 = 0xffffffffffffff80;
      if (-0x80 < (long)~uVar5) {
        uVar2 = ~uVar5;
      }
      lVar10 = uVar5 + 0x40;
      do {
        puVar12 = (ulong *)*param_4;
        uVar7 = *puVar6;
        lVar10 = lVar10 + -0x40;
        puVar6 = puVar12 + 1;
        *puVar12 = *puVar12 & ~uVar9 | uVar7 << (uVar8 & 0x3f);
        *param_4 = (long)puVar6;
        *puVar6 = *puVar6 & uVar9 | uVar7 >> ((ulong)(0x40 - uVar4) & 0x3f);
        puVar6 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar6;
      } while (0x7f < lVar10);
      uVar5 = (uVar5 - 0x40) - (uVar5 + uVar2 + 0x40 & 0xffffffffffffffc0);
    }
    if (0 < (long)uVar5) {
      puVar12 = (ulong *)*param_4;
      uVar7 = (ulong)(0x40 - uVar4);
      uVar2 = uVar7;
      if ((long)uVar5 <= (long)uVar7) {
        uVar2 = uVar5;
      }
      uVar11 = *puVar6 & 0xffffffffffffffffU >> (0x40 - uVar5 & 0x3f);
      lVar10 = uVar5 - uVar2;
      uVar4 = uVar4 + (int)uVar2 & 0x3f;
      puVar6 = (ulong *)((long)puVar12 + (uVar2 + uVar8 >> 3 & 0x1ffffffffffffff8));
      *puVar12 = *puVar12 &
                 (0xffffffffffffffffU >> (uVar7 - uVar2 & 0x3f) & uVar9 ^ 0xffffffffffffffff) |
                 uVar11 << (uVar8 & 0x3f);
      *param_4 = (long)puVar6;
      *(uint *)(param_4 + 1) = uVar4;
      if (0 < lVar10) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (0x40U - lVar10 & 0x3f) ^ 0xffffffffffffffff) |
                  uVar11 >> (uVar2 & 0x3f);
        uVar4 = (uint)lVar10;
        *(uint *)(param_4 + 1) = uVar4;
      }
    }
  }
  lVar10 = *param_4;
  *(uint *)(param_1 + 1) = uVar4;
  *param_1 = lVar10;
  return;
}


