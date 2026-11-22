// Recovered from libkentos.so by Ghidra 12.2
// address: 001fd25c
// size: 580
// name: FUN_001fd25c
// namespace: Global
// signature: undefined FUN_001fd25c(void)
// generated: 2026-11-22 21:47:10


undefined8 FUN_001fd25c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_88[0] = 3;
  local_80 = FUN_001fefb0(param_2);
  local_68 = 4;
  local_60 = (undefined4)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3);
  plVar3 = *(long **)(param_1 + 0x80);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)__cxa_allocate_exception(8);
    *plVar3 = (long)(PTR_vtable_00758108 + 0x10);
                    /* try { // try from 001fd484 to 001fd497 has its CatchHandler @ 001fd4b8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar3,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
  }
                    /* try { // try from 001fd2cc to 001fd36f has its CatchHandler @ 001fd4b8 */
  uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_60,&local_68,local_88);
  uVar6 = *(ulong *)(param_1 + 0x40);
  if (uVar6 == *(long *)(param_1 + 0x48) * 0x40) {
    if ((long)(uVar6 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001fd49c to 001fd49f has its CatchHandler @ 001fd4b8 */
      FUN_001d9034(param_1 + 0x38);
    }
    if (uVar6 < 0x3fffffffffffffff) {
      uVar8 = *(long *)(param_1 + 0x48) << 7;
      uVar6 = uVar6 + 0x40 & 0xffffffffffffffc0;
      if (uVar6 <= uVar8) {
        uVar6 = uVar8;
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
    }
    FUN_001fc7d0(param_1 + 0x38,uVar6);
    uVar6 = *(ulong *)(param_1 + 0x40);
  }
  lVar9 = *(long *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x40) = uVar6 + 1;
  uVar8 = 1L << (uVar6 & 0x3f);
  lVar10 = (uVar6 >> 6) * 8;
  if ((uVar4 & 1) == 0) {
    *(ulong *)(lVar9 + lVar10) = *(ulong *)(lVar9 + lVar10) & (uVar8 ^ 0xffffffffffffffff);
  }
  else {
    *(ulong *)(lVar9 + lVar10) = *(ulong *)(lVar9 + lVar10) | uVar8;
    if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
      FUN_001fe0f8(local_98,param_1 + 0x98);
      plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8);
      local_70 = param_2;
      plVar3 = (long *)FUN_001feba0(plVar12,&local_68,param_2);
      lVar9 = *plVar3;
      if (lVar9 == 0) {
                    /* try { // try from 001fd39c to 001fd3b7 has its CatchHandler @ 001fd4a0 */
        FUN_001ffbd4(&local_60,plVar12,&DAT_004a44d4,&local_70,auStack_78);
        puVar5 = (undefined8 *)CONCAT44(uStack_5c,local_60);
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = CONCAT71(uStack_67,local_68);
        *plVar3 = (long)puVar5;
        if (*(long *)*plVar12 != 0) {
          *plVar12 = *(long *)*plVar12;
          puVar5 = (undefined8 *)*plVar3;
        }
        FUN_001feccc(plVar12[1],puVar5);
        plVar12[2] = plVar12[2] + 1;
        lVar9 = CONCAT44(uStack_5c,local_60);
      }
      puVar7 = (undefined1 *)(lVar9 + 0x38);
      uVar1 = *puVar7;
      *puVar7 = local_98[0];
      uVar11 = *(undefined8 *)(lVar9 + 0x40);
      *(undefined8 *)(lVar9 + 0x40) = local_90;
      *(undefined1 **)(param_1 + 0x50) = puVar7;
      local_98[0] = uVar1;
      local_90 = uVar11;
      FUN_00204a08(&local_90);
    }
  }
  FUN_00204a08(&local_80,local_88[0]);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


