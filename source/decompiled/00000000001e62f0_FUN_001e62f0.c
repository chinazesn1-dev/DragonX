// Recovered from libkentos.so by Ghidra 12.2
// address: 001e62f0
// size: 392
// name: FUN_001e62f0
// namespace: Global
// signature: undefined FUN_001e62f0(void)
// generated: 2026-11-22 21:46:10


uint FUN_001e62f0(float param_1,float param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar7 = param_2;
  fVar6 = (float)FUN_00233dd4();
  local_70 = fVar6;
  fStack_6c = fVar7;
  uVar3 = FUN_0023353c();
  local_78 = param_1;
  if (param_1 <= 0.0) {
    local_78 = (float)FUN_00231b1c();
  }
  fStack_74 = param_2;
  uVar2 = FUN_00257170(param_3,&local_78,0);
  uVar4 = FUN_00231718();
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00224b10(0);
    uVar5 = 0x19ffffff;
    if ((uVar4 & 1) == 0) {
      uVar5 = param_4;
    }
    fVar6 = local_70;
    fVar7 = fStack_6c;
  }
  else {
    uVar5 = 0x23ffffff;
  }
  local_80 = CONCAT44(fVar7 + fStack_74,fVar6 + local_78);
  FUN_00249060(0x41000000,uVar3,&local_70,&local_80,uVar5,0);
  local_80 = CONCAT44(fStack_6c + fStack_74,local_70 + local_78);
  fVar6 = DAT_0047a184;
  FUN_00248f7c(0x41000000,uVar3,&local_70,&local_80,param_5,0);
  fVar7 = (float)FUN_00223560(0xbf800000,param_3,0,0);
  local_80 = CONCAT44(fStack_6c + (fStack_74 - fVar6) * 0.5,local_70 + (local_78 - fVar7) * 0.5);
  FUN_00249be8(uVar3,&local_80,param_6,param_3,0);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


