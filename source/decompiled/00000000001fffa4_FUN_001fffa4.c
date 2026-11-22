// Recovered from libkentos.so by Ghidra 12.2
// address: 001fffa4
// size: 640
// name: FUN_001fffa4
// namespace: Global
// signature: undefined FUN_001fffa4(void)
// generated: 2026-11-22 21:47:13


undefined1  [16] FUN_001fffa4(long *param_1,byte *param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  ulong local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((1L << (param_1[5] - 1U & 0x3f) &
      *(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8))) == 0) {
    uVar10 = 0;
    lVar5 = 0;
    goto LAB_002001c4;
  }
  local_58 = (ulong)*param_2;
  local_60[0] = 4;
  if ((param_3 & 1) == 0) {
    local_50[0] = 5;
    local_4c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
    plVar3 = (long *)param_1[0x10];
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)__cxa_allocate_exception(8);
      *plVar3 = (long)(PTR_vtable_00758108 + 0x10);
                    /* try { // try from 00200210 to 00200223 has its CatchHandler @ 00200224 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar3,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
    }
                    /* try { // try from 00200054 to 0020019f has its CatchHandler @ 00200224 */
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_4c,local_50,local_60);
    uVar10 = 0;
    lVar5 = 0;
    if ((uVar4 & 1) != 0) goto LAB_00200070;
  }
  else {
LAB_00200070:
    uVar4 = local_58;
    uVar2 = local_60[0];
    lVar5 = param_1[2];
    if (param_1[1] == lVar5) {
      local_60[0] = 0;
      local_58 = 0;
      puVar9 = (undefined1 *)*param_1;
      local_70 = *puVar9;
      *puVar9 = uVar2;
      local_68 = *(undefined8 *)(puVar9 + 8);
      *(ulong *)(puVar9 + 8) = uVar4;
      FUN_00204a08(&local_68);
      lVar5 = *param_1;
    }
    else {
      pcVar6 = *(char **)(lVar5 + -8);
      if (pcVar6 == (char *)0x0) {
LAB_0020018c:
        uVar10 = 0;
        lVar5 = 0;
        goto LAB_002001b8;
      }
      if (*pcVar6 == '\x02') {
        lVar5 = *(long *)(pcVar6 + 8);
        puVar9 = *(undefined1 **)(lVar5 + 8);
        if (puVar9 < *(undefined1 **)(lVar5 + 0x10)) {
          *puVar9 = local_60[0];
          *(ulong *)(puVar9 + 8) = local_58;
          local_60[0] = 0;
          local_58 = 0;
          *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 0x10;
        }
        else {
          FUN_001fde20(lVar5,local_60);
        }
        lVar5 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar7 = param_1[8] - 1;
        uVar8 = *(ulong *)(param_1[7] + (uVar7 >> 3 & 0x1ffffffffffffff8));
        param_1[8] = uVar7;
        if ((1L << (uVar7 & 0x3f) & uVar8) == 0) goto LAB_0020018c;
        local_60[0] = 0;
        local_58 = 0;
        puVar9 = (undefined1 *)param_1[10];
        *puVar9 = uVar2;
        local_78 = *(undefined8 *)(puVar9 + 8);
        *(ulong *)(puVar9 + 8) = uVar4;
        FUN_00204a08(&local_78);
        lVar5 = param_1[10];
      }
    }
    uVar10 = 1;
  }
LAB_002001b8:
  FUN_00204a08(&local_58,local_60[0]);
LAB_002001c4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = uVar10;
  return auVar11;
}


