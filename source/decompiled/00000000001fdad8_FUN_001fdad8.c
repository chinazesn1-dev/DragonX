// Recovered from libkentos.so by Ghidra 12.2
// address: 001fdad8
// size: 780
// name: FUN_001fdad8
// namespace: Global
// signature: undefined FUN_001fdad8(void)
// generated: 2026-11-22 21:47:11


undefined1  [16] FUN_001fdad8(long *param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
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
  undefined8 *local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((1L << (param_1[5] - 1U & 0x3f) &
      *(ulong *)(param_1[4] + (param_1[5] - 1U >> 3 & 0x1ffffffffffffff8))) == 0) {
    uVar10 = 0;
    lVar5 = 0;
    goto LAB_001fdd84;
  }
  local_60[0] = *param_2;
  switch(local_60[0]) {
  default:
    local_58 = (undefined8 *)0x0;
    break;
  case 1:
    local_58 = operator_new(0x18);
    local_58[1] = 0;
    local_58[2] = 0;
    *local_58 = local_58 + 1;
    break;
  case 2:
    local_58 = operator_new(0x18);
    goto LAB_001fdbd4;
  case 3:
    local_58 = (undefined8 *)FUN_00200f74(&DAT_00673b44);
    goto joined_r0x001fdb9c;
  case 4:
    local_58 = (undefined8 *)((ulong)local_58 & 0xffffffffffffff00);
joined_r0x001fdb9c:
    if ((param_3 & 1) == 0) goto LAB_001fdbe4;
    goto LAB_001fdc30;
  case 8:
    local_58 = operator_new(0x20);
    *(undefined2 *)(local_58 + 3) = 0;
LAB_001fdbd4:
    local_58[1] = 0;
    local_58[2] = 0;
    *local_58 = 0;
  }
  if ((param_3 & 1) == 0) {
LAB_001fdbe4:
    local_50[0] = 5;
    local_4c = (undefined4)((ulong)(param_1[2] - param_1[1]) >> 3);
    plVar4 = (long *)param_1[0x10];
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)__cxa_allocate_exception(8);
      *plVar4 = (long)(PTR_vtable_00758108 + 0x10);
                    /* try { // try from 001fddd0 to 001fdde3 has its CatchHandler @ 001fdde4 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar4,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
    }
                    /* try { // try from 001fdc14 to 001fdd5f has its CatchHandler @ 001fdde4 */
    uVar7 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_4c,local_50,local_60);
    uVar10 = 0;
    lVar5 = 0;
    if ((uVar7 & 1) != 0) goto LAB_001fdc30;
  }
  else {
LAB_001fdc30:
    puVar3 = local_58;
    uVar2 = local_60[0];
    lVar5 = param_1[2];
    if (param_1[1] == lVar5) {
      local_60[0] = 0;
      local_58 = (undefined8 *)0x0;
      puVar9 = (undefined1 *)*param_1;
      local_70 = *puVar9;
      *puVar9 = uVar2;
      local_68 = *(undefined8 *)(puVar9 + 8);
      *(undefined8 **)(puVar9 + 8) = puVar3;
      FUN_00204a08(&local_68);
      lVar5 = *param_1;
    }
    else {
      pcVar6 = *(char **)(lVar5 + -8);
      if (pcVar6 == (char *)0x0) {
LAB_001fdd4c:
        uVar10 = 0;
        lVar5 = 0;
        goto LAB_001fdd78;
      }
      if (*pcVar6 == '\x02') {
        lVar5 = *(long *)(pcVar6 + 8);
        puVar9 = *(undefined1 **)(lVar5 + 8);
        if (puVar9 < *(undefined1 **)(lVar5 + 0x10)) {
          *puVar9 = local_60[0];
          *(undefined8 **)(puVar9 + 8) = local_58;
          local_60[0] = 0;
          local_58 = (undefined8 *)0x0;
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
        if ((1L << (uVar7 & 0x3f) & uVar8) == 0) goto LAB_001fdd4c;
        local_60[0] = 0;
        local_58 = (undefined8 *)0x0;
        puVar9 = (undefined1 *)param_1[10];
        *puVar9 = uVar2;
        local_78 = *(undefined8 *)(puVar9 + 8);
        *(undefined8 **)(puVar9 + 8) = puVar3;
        FUN_00204a08(&local_78);
        lVar5 = param_1[10];
      }
    }
    uVar10 = 1;
  }
LAB_001fdd78:
  FUN_00204a08(&local_58,local_60[0]);
LAB_001fdd84:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar11._8_8_ = lVar5;
  auVar11._0_8_ = uVar10;
  return auVar11;
}


