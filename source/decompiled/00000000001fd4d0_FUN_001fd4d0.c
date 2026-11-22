// Recovered from libkentos.so by Ghidra 12.2
// address: 001fd4d0
// size: 608
// name: FUN_001fd4d0
// namespace: Global
// signature: undefined FUN_001fd4d0(void)
// generated: 2026-11-22 21:47:10


undefined8 FUN_001fd4d0(long param_1,__ndk1 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88[0] = 2;
  local_70 = CONCAT44(local_70._4_4_,
                      (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3));
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)__cxa_allocate_exception(8);
    *plVar2 = (long)(PTR_vtable_00758108 + 0x10);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(plVar2,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
  }
  uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_70,local_88,param_1 + 0x98);
  uVar5 = *(ulong *)(param_1 + 0x28);
  if (uVar5 == *(long *)(param_1 + 0x30) * 0x40) {
    if ((long)(uVar5 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1 + 0x20);
    }
    if (uVar5 < 0x3fffffffffffffff) {
      uVar6 = *(long *)(param_1 + 0x30) << 7;
      uVar5 = uVar5 + 0x40 & 0xffffffffffffffc0;
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
    }
    FUN_001fc7d0(param_1 + 0x20,uVar5);
    uVar5 = *(ulong *)(param_1 + 0x28);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = uVar5 >> 6;
  *(ulong *)(param_1 + 0x28) = uVar5 + 1;
  uVar5 = 1L << (uVar5 & 0x3f);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(ulong *)(lVar7 + uVar6 * 8) & (uVar5 ^ 0xffffffffffffffff);
  }
  else {
    uVar5 = *(ulong *)(lVar7 + uVar6 * 8) | uVar5;
  }
  *(ulong *)(lVar7 + uVar6 * 8) = uVar5;
  local_70 = CONCAT71(local_70._1_7_,2);
  local_58 = FUN_001fdad8(param_1,&local_70,1);
  if (*(undefined8 **)(param_1 + 0x10) == *(undefined8 **)(param_1 + 0x18)) {
    FUN_001fdfb4((long *)(param_1 + 8),local_58 + 8);
    lVar7 = *(long *)(param_1 + 0x10);
  }
  else {
    **(undefined8 **)(param_1 + 0x10) = local_58._8_8_;
    lVar7 = *(long *)(param_1 + 0x10) + 8;
    *(long *)(param_1 + 0x10) = lVar7;
  }
  if ((param_2 != (__ndk1 *)0xffffffffffffffff) && (*(char **)(lVar7 + -8) != (char *)0x0)) {
    uVar5 = (ulong)**(char **)(lVar7 + -8);
    if (uVar5 < 3) {
      if (*(__ndk1 **)(&DAT_004a4f60 + uVar5 * 8) < param_2) goto LAB_001fd6b8;
    }
    else if ((__ndk1 *)0x1 < param_2) {
LAB_001fd6b8:
      auVar8 = __cxa_allocate_exception(0x20);
                    /* try { // try from 001fd6c4 to 001fd6cf has its CatchHandler @ 001fd744 */
      std::__ndk1::to_string(param_2,auVar8._8_8_);
                    /* try { // try from 001fd6d0 to 001fd6e7 has its CatchHandler @ 001fd730 */
      puVar4 = (undefined8 *)FUN_0020480c(local_88,0,"excessive array size: ",0x16);
      local_60 = puVar4[2];
      uStack_68 = puVar4[1];
      local_70 = *puVar4;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
                    /* try { // try from 001fd704 to 001fd72f has its CatchHandler @ 001fd74c */
      FUN_001fd90c(auVar8._0_8_,0x198,&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(auVar8._0_8_,&PTR_PTR_00743300,&LAB_001fdaa4);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


