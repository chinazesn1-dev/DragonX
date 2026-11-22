// Recovered from libkentos.so by Ghidra 12.2
// address: 001f2740
// size: 612
// name: FUN_001f2740
// namespace: Global
// signature: undefined FUN_001f2740(void)
// generated: 2026-11-22 21:46:52


undefined4 FUN_001f2740(uint param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  void *pvVar11;
  void *local_100;
  ulong local_f8;
  void *local_f0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined4 **)(PTR_DAT_00758cd0 + 0x28);
  local_d8 = 0x1d01c9;
  local_d4 = *puVar4;
  uStack_d0 = 0x1d01ca;
  local_cc = *puVar4;
  uStack_c8 = 0x1dec29;
  local_c4 = puVar4[1];
  local_c0 = 0x1d1d21;
  local_bc = puVar4[2];
  local_b8 = 0x1d24f1;
  local_b4 = puVar4[2];
  uStack_b0 = 0x1d0999;
  local_ac = puVar4[3];
  uStack_a8 = 0x1d3491;
  local_a4 = puVar4[4];
  local_a0 = 0x1d3492;
  local_9c = puVar4[4];
  local_98 = 0x1d3493;
  local_94 = puVar4[4];
  local_90 = 0x1d3494;
  local_8c = puVar4[4];
  local_88 = 0x1d3879;
  local_84 = puVar4[4];
  local_80 = 0x1d387a;
  local_7c = puVar4[4];
  local_78 = 0x1d387b;
  local_74 = puVar4[4];
  uStack_70 = 0x1d387c;
  local_6c = puVar4[4];
  uStack_68 = 0x1d1939;
  local_64 = puVar4[5];
  uStack_60 = 0x1d193a;
  local_5c = puVar4[5];
  uStack_58 = 0x1d193b;
  local_54 = puVar4[5];
  uStack_50 = 0x1d193c;
  local_4c = puVar4[5];
  uStack_48 = 0x1d193d;
  local_44 = puVar4[5];
  uStack_40 = 0x1d193e;
  local_3c = puVar4[5];
  FUN_001f29a4(&local_100,&local_d8,0x14);
  pvVar3 = local_100;
  if (local_f8 != 0) {
    uVar5 = local_f8 - 1;
    uVar6 = (ulong)param_1;
    if ((uVar5 & local_f8) == 0) {
      uVar7 = uVar5 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (local_f8 <= uVar6) {
        uVar7 = 0;
        if (local_f8 != 0) {
          uVar7 = uVar6 / local_f8;
        }
        uVar7 = uVar6 - uVar7 * local_f8;
      }
    }
    plVar8 = *(long **)((long)local_100 + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          if (*(uint *)(plVar8 + 2) == param_1) {
            uVar10 = *(undefined4 *)((long)plVar8 + 0x14);
            goto joined_r0x001f2998;
          }
        }
        else {
          if ((uVar5 & local_f8) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (local_f8 <= uVar9) {
            uVar1 = 0;
            if (local_f8 != 0) {
              uVar1 = uVar9 / local_f8;
            }
            if (uVar9 - uVar1 * local_f8 == uVar7) goto LAB_001f2934;
            break;
          }
          if (uVar9 != uVar7) break;
        }
LAB_001f2934:
      }
    }
  }
  uVar10 = 0;
joined_r0x001f2998:
  while (local_f0 != (void *)0x0) {
    pvVar11 = *(void **)local_f0;
    local_100 = pvVar3;
    operator_delete(local_f0);
    pvVar3 = local_100;
    local_f0 = pvVar11;
  }
  local_100 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


