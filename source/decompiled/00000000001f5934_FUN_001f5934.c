// Recovered from libkentos.so by Ghidra 12.2
// address: 001f5934
// size: 672
// name: FUN_001f5934
// namespace: Global
// signature: undefined FUN_001f5934(void)
// generated: 2026-11-22 21:46:56


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001f5934(float param_1,char *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (0.0 < param_1) {
    local_90 = (ulong)(uint)param_1 << 0x20;
    FUN_00257bc0(&local_90);
  }
  iVar3 = DAT_0082f904;
  fVar2 = DAT_0047a160;
  if ((param_4 & 1) == 0) {
    fVar2 = DAT_0047a0d0;
  }
  fVar13 = DAT_0047a160;
  if (DAT_0082f904 != 0) {
    lVar10 = 0;
    do {
      iVar4 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar10),param_2);
      if (iVar4 == 0) {
        if (iVar3 == 2) {
          puVar9 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar10);
        }
        else if (iVar3 == 1) {
          puVar9 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar10);
        }
        else {
          puVar9 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar10);
        }
        param_2 = (char *)*puVar9;
        break;
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0xbc0);
  }
  fVar11 = (float)FUN_00223560(0xbf800000,param_2,0,0);
  fVar14 = fVar13;
  fVar12 = (float)FUN_00233dd4();
  FUN_002338e4(param_3);
  local_90 = CONCAT44(fVar2,fVar11 + DAT_0047a0e4);
  FUN_00257170("##row",&local_90,0);
  FUN_00233a84();
  uVar7 = FUN_00224b10(0);
  uVar5 = FUN_002317c0(0);
  if ((uVar5 & 1) != 0) {
    *param_3 = *param_3 ^ 1;
  }
  uVar8 = FUN_0023353c();
  fStack_94 = (fVar2 + -26.0) * 0.5 + fVar14;
  local_a0 = fVar12 + 26.0;
  fStack_9c = fStack_94 + 26.0;
  if (*param_3 == 0) {
    local_90 = _DAT_00479bf0;
    uStack_88 = _UNK_00479bf8;
  }
  else {
    local_90 = _DAT_00479a90;
    uStack_88 = _UNK_00479a98;
  }
  local_98 = fVar12;
  uVar6 = FUN_00221f20(&local_90);
  FUN_00249060(0x40800000,uVar8,&local_98,&local_a0,uVar6,0);
  if (*param_3 == 0) {
    if ((uVar7 & 1) == 0) {
      local_90 = _DAT_00479c00;
      uStack_88 = _UNK_00479c08;
    }
    else {
      local_90 = _DAT_00479c10;
      uStack_88 = _UNK_00479c18;
    }
  }
  else {
    local_90 = _DAT_00479b00;
    uStack_88 = _UNK_00479b08;
  }
  uVar6 = FUN_00221f20(&local_90);
  FUN_00248f7c(0x40800000,0x3f800000,uVar8,&local_98,&local_a0,uVar6,0);
  fStack_a4 = fVar14 + (fVar2 - fVar13) * 0.5;
  local_a8 = local_a0 + 16.0;
  uStack_88 = _UNK_00479aa8;
  local_90 = _DAT_00479aa0;
  uVar6 = FUN_00221f20(&local_90);
  FUN_00249be8(uVar8,&local_a8,uVar6,param_2,0);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


