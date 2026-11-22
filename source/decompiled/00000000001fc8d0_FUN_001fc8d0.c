// Recovered from libkentos.so by Ghidra 12.2
// address: 001fc8d0
// size: 412
// name: FUN_001fc8d0
// namespace: Global
// signature: undefined FUN_001fc8d0(void)
// generated: 2026-11-22 21:47:10


void FUN_001fc8d0(long *param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *__dest;
  ulong *puVar7;
  ulong *__src;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *local_98;
  uint local_90;
  ulong *local_88;
  uint local_80;
  long local_78;
  uint local_70;
  ulong *local_68;
  uint local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar7 = (ulong *)*param_2;
  uVar8 = *(uint *)(param_2 + 1);
  uVar9 = (ulong)uVar8;
  lVar4 = *param_3;
  uVar2 = *(uint *)(param_3 + 1);
  uVar6 = param_1[1];
  uVar10 = (uVar2 - uVar9) + (lVar4 - (long)puVar7) * 8;
  param_1[1] = uVar10 + uVar6;
  uVar1 = (uint)uVar6 & 0x3f;
  __dest = (ulong *)(*param_1 + (uVar6 >> 3 & 0x1ffffffffffffff8));
  if (uVar8 == uVar1) {
    if (0 < (long)uVar10) {
      __src = puVar7;
      if (uVar8 != 0) {
        uVar5 = (ulong)(0x40 - uVar8);
        uVar6 = uVar10;
        if ((long)uVar5 <= (long)uVar10) {
          uVar6 = uVar5;
        }
        __src = puVar7 + 1;
        uVar10 = uVar10 - uVar6;
        lVar4 = uVar6 + uVar9;
        uVar6 = 0xffffffffffffffffU >> (uVar5 - uVar6 & 0x3f) & -1L << (uVar9 & 0x3f);
        lVar11 = lVar4 + 0x3f;
        if (-1 < lVar4) {
          lVar11 = lVar4;
        }
        *__dest = *__dest & (uVar6 ^ 0xffffffffffffffff) | *puVar7 & uVar6;
        __dest = __dest + (lVar11 >> 6);
        uVar8 = (int)lVar4 + (int)(lVar11 >> 6) * -0x40;
      }
      uVar6 = uVar10 + 0x3f;
      if (-1 < (long)uVar10) {
        uVar6 = uVar10;
      }
      lVar11 = (long)uVar6 >> 6;
      memmove(__dest,__src,lVar11 * 8);
      lVar4 = (long)uVar10 % 0x40;
      __dest = __dest + lVar11;
      if (0 < lVar4) {
        uVar10 = 0xffffffffffffffff >> (0x40U - lVar4 & 0x3f);
        uVar8 = (uint)lVar4;
        *__dest = *__dest & (uVar10 ^ 0xffffffffffffffff) | __src[lVar11] & uVar10;
      }
    }
    local_98 = __dest;
    local_90 = uVar8;
  }
  else {
    local_88 = __dest;
    local_80 = uVar1;
    local_78 = lVar4;
    local_70 = uVar2;
    local_68 = puVar7;
    local_60 = uVar8;
    FUN_001fca6c(&local_98,&local_68,&local_78,&local_88);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


