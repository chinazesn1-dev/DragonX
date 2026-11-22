// Recovered from libkentos.so by Ghidra 12.2
// address: 001f5db8
// size: 756
// name: FUN_001f5db8
// namespace: Global
// signature: undefined FUN_001f5db8(void)
// generated: 2026-11-22 21:46:56


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_001f5db8(undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined8 param_5,
            char *param_6,float *param_7,int param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (0.0 < param_4) {
    local_90 = (ulong)(uint)param_4 << 0x20;
    FUN_00257bc0(&local_90);
  }
  iVar3 = DAT_0082f904;
  if (DAT_0082f904 != 0) {
    lVar7 = 0;
    do {
      iVar2 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar7),param_6);
      if (iVar2 == 0) {
        if (iVar3 == 2) {
          puVar5 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar7);
        }
        else if (iVar3 == 1) {
          puVar5 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar7);
        }
        else {
          puVar5 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar7);
        }
        param_6 = (char *)*puVar5;
        break;
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != 0xbc0);
  }
  FUN_00256448(param_6,0);
  fVar8 = (float)FUN_00233fa4();
  if (0.0 < 24.0 - fVar8) {
    local_90 = (ulong)(uint)(24.0 - fVar8) << 0x20;
    FUN_00257bc0(&local_90);
  }
  local_90 = DAT_00479eb0;
                    /* try { // try from 001f5ebc to 001f5fd7 has its CatchHandler @ 001f60c4 */
  FUN_00222ac0(0xb,&local_90);
  FUN_00222958(0x40000000,0xc);
  FUN_00222958(0x40000000,0xd);
  FUN_00222958(0x41400000,0x14);
  FUN_00222958(0x40000000,0x15);
  uStack_88 = _UNK_00479ad8;
  local_90 = _DAT_00479ad0;
  FUN_00222794(7,&local_90);
  uVar6 = _UNK_00479c38;
  lVar7 = _DAT_00479c30;
  uStack_88 = _UNK_00479c38;
  local_90 = _DAT_00479c30;
  FUN_00222794(8,&local_90);
  uStack_88 = uVar6;
  local_90 = lVar7;
  FUN_00222794(9,&local_90);
  uVar6 = _UNK_00479a98;
  lVar7 = _DAT_00479a90;
  uStack_88 = _UNK_00479a98;
  local_90 = _DAT_00479a90;
  FUN_00222794(5,&local_90);
  uStack_88 = uVar6;
  local_90 = lVar7;
  FUN_00222794(0x13,&local_90);
  uStack_88 = _UNK_00479b18;
  local_90 = _DAT_00479b10;
  FUN_00222794(0x14,&local_90);
  iVar3 = snprintf((char *)&local_90,8,"%%.%df",param_8);
                    /* try { // try from 001f5ff0 to 001f6003 has its CatchHandler @ 001f60b4 */
  FUN_00222150(DAT_0047a1d4,iVar3);
  FUN_00233774(param_5);
                    /* try { // try from 001f6004 to 001f605f has its CatchHandler @ 001f60b0 */
  uVar4 = FUN_0025c2b8(param_1,param_2,&DAT_0048452a,param_7,&local_90,0x10);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    uVar6 = 1;
    fVar8 = (float)param_1;
    fVar9 = (float)(int)((*param_7 - fVar8) / param_3) * param_3 + fVar8;
    fVar10 = (float)param_2;
    if (fVar9 <= (float)param_2) {
      fVar10 = fVar9;
    }
    if (fVar8 <= fVar9) {
      fVar8 = fVar10;
    }
    *param_7 = fVar8;
  }
  FUN_00233a84();
                    /* try { // try from 001f6060 to 001f606f has its CatchHandler @ 001f60ac */
  FUN_00222c2c(5);
  FUN_00222904(6);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


