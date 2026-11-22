// Recovered from libkentos.so by Ghidra 12.2
// address: 001dca9c
// size: 788
// name: FUN_001dca9c
// namespace: Global
// signature: undefined FUN_001dca9c(void)
// generated: 2026-11-22 21:43:48


void FUN_001dca9c(float param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
                 long param_6,undefined4 param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  float __x_00;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  long local_78;
  
  fVar7 = DAT_0047a108;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  param_4 = param_4 * DAT_0047a094;
  __x = param_4 + DAT_0047a104;
  __x_00 = DAT_0047a108 - param_4;
  local_80 = param_1;
  local_7c = param_2;
  FUN_00248538(param_3,__x,__x_00,param_6,&local_80,0x3c);
  FUN_002470a8(param_5,param_6,*(undefined8 *)(param_6 + 0x80),*(undefined4 *)(param_6 + 0x78),
               param_7,0);
  fVar7 = param_4 + fVar7;
  param_4 = DAT_0047a10c - param_4;
  *(undefined4 *)(param_6 + 0x78) = 0;
  FUN_00248538(param_3,fVar7,param_6,&local_80,0x3c);
  FUN_002470a8(param_5,param_6,*(undefined8 *)(param_6 + 0x80),*(undefined4 *)(param_6 + 0x78),
               param_7,0);
  fVar2 = local_80;
  *(undefined4 *)(param_6 + 0x78) = 0;
  fVar9 = (float)param_3 + -6.0;
  fVar8 = (float)param_3 + 6.0;
  fVar3 = cosf(__x);
  fVar5 = local_7c;
  fVar4 = sinf(__x);
  fVar6 = local_80;
  fStack_84 = fVar5 + fVar9 * fVar4;
  local_88 = fVar2 + fVar9 * fVar3;
  fVar5 = cosf(__x);
  fVar2 = local_7c;
  fVar3 = sinf(__x);
  fStack_8c = fVar2 + fVar8 * fVar3;
  local_90 = fVar6 + fVar8 * fVar5;
  FUN_00248df8(0x3fc00000,param_6,&local_88,&local_90,param_7);
  fVar2 = local_80;
  fVar3 = cosf(__x_00);
  fVar5 = local_7c;
  fVar4 = sinf(__x_00);
  fVar6 = local_80;
  fStack_84 = fVar5 + fVar9 * fVar4;
  local_88 = fVar2 + fVar9 * fVar3;
  fVar5 = cosf(__x_00);
  fVar2 = local_7c;
  fVar3 = sinf(__x_00);
  fStack_8c = fVar2 + fVar8 * fVar3;
  local_90 = fVar6 + fVar8 * fVar5;
  FUN_00248df8(0x3fc00000,param_6,&local_88,&local_90,param_7);
  fVar2 = local_80;
  fVar3 = cosf(fVar7);
  fVar5 = local_7c;
  fVar4 = sinf(fVar7);
  fVar6 = local_80;
  fStack_84 = fVar5 + fVar9 * fVar4;
  local_88 = fVar2 + fVar9 * fVar3;
  fVar5 = cosf(fVar7);
  fVar2 = local_7c;
  fVar7 = sinf(fVar7);
  fStack_8c = fVar2 + fVar8 * fVar7;
  local_90 = fVar6 + fVar8 * fVar5;
  FUN_00248df8(0x3fc00000,param_6,&local_88,&local_90,param_7);
  fVar7 = local_80;
  fVar5 = cosf(param_4);
  fVar6 = local_7c;
  fVar3 = sinf(param_4);
  fVar2 = local_80;
  fStack_84 = fVar6 + fVar9 * fVar3;
  local_88 = fVar7 + fVar9 * fVar5;
  fVar6 = cosf(param_4);
  fVar7 = local_7c;
  fVar5 = sinf(param_4);
  fStack_8c = fVar7 + fVar8 * fVar5;
  local_90 = fVar2 + fVar8 * fVar6;
  FUN_00248df8(0x3fc00000,param_6,&local_88,&local_90,param_7);
  FUN_00249470(0x40200000,param_6,&local_80,param_7,0xc);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


