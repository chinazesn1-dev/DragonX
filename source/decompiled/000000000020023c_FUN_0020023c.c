// Recovered from libkentos.so by Ghidra 12.2
// address: 0020023c
// size: 628
// name: FUN_0020023c
// namespace: Global
// signature: undefined FUN_0020023c(void)
// generated: 2026-11-22 21:47:13


undefined1  [16] FUN_0020023c(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((1L << (param_1[5] - 1U & 0x3f) &
      *(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8))) == 0) {
    uVar9 = 0;
    lVar4 = 0;
    goto LAB_00200450;
  }
  local_60[0] = 0;
  local_58 = 0;
  if ((param_3 & 1) == 0) {
    local_50[0] = 5;
    local_4c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
    plVar3 = (long *)param_1[0x10];
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)__cxa_allocate_exception(8);
      *plVar3 = (long)(PTR_vtable_00758108 + 0x10);
                    /* try { // try from 0020049c to 002004af has its CatchHandler @ 002004b0 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar3,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
    }
                    /* try { // try from 002002dc to 00200427 has its CatchHandler @ 002004b0 */
    uVar6 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_4c,local_50,local_60);
    uVar9 = 0;
    lVar4 = 0;
    if ((uVar6 & 1) != 0) goto LAB_002002f8;
  }
  else {
LAB_002002f8:
    uVar9 = local_58;
    uVar2 = local_60[0];
    lVar4 = param_1[2];
    if (param_1[1] == lVar4) {
      local_60[0] = 0;
      local_58 = 0;
      puVar8 = (undefined1 *)*param_1;
      local_70 = *puVar8;
      *puVar8 = uVar2;
      local_68 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = uVar9;
      FUN_00204a08(&local_68);
      lVar4 = *param_1;
    }
    else {
      pcVar5 = *(char **)(lVar4 + -8);
      if (pcVar5 == (char *)0x0) {
LAB_00200414:
        uVar9 = 0;
        lVar4 = 0;
        goto LAB_00200440;
      }
      if (*pcVar5 == '\x02') {
        lVar4 = *(long *)(pcVar5 + 8);
        puVar8 = *(undefined1 **)(lVar4 + 8);
        if (puVar8 < *(undefined1 **)(lVar4 + 0x10)) {
          *puVar8 = local_60[0];
          *(undefined8 *)(puVar8 + 8) = local_58;
          local_60[0] = 0;
          local_58 = 0;
          *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 0x10;
        }
        else {
          FUN_001fde20(lVar4,local_60);
        }
        lVar4 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar6 = param_1[8] - 1;
        uVar7 = *(ulong *)(param_1[7] + (uVar6 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar6;
        if ((1L << (uVar6 & 0x3f) & uVar7) == 0) goto LAB_00200414;
        local_60[0] = 0;
        local_58 = 0;
        puVar8 = (undefined1 *)param_1[10];
        *puVar8 = uVar2;
        local_78 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uVar9;
        FUN_00204a08(&local_78);
        lVar4 = param_1[10];
      }
    }
    uVar9 = 1;
  }
LAB_00200440:
  FUN_00204a08(&local_58,local_60[0]);
LAB_00200450:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar10._8_8_ = lVar4;
  auVar10._0_8_ = uVar9;
  return auVar10;
}


