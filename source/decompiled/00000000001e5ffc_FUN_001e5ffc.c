// Recovered from libkentos.so by Ghidra 12.2
// address: 001e5ffc
// size: 380
// name: FUN_001e5ffc
// namespace: Global
// signature: undefined FUN_001e5ffc(void)
// generated: 2026-11-22 21:46:10


void FUN_001e5ffc(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_s3;
  undefined8 local_60;
  float local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0082f498 != '\x01') || (dVar7 = (double)FUN_002261a0(), (double)DAT_0082f49c <= dVar7)) {
    DAT_0082f498 = '\0';
  }
  else {
    lVar2 = FUN_00226170();
    fVar8 = 0.5;
    local_60 = CONCAT44(0x42c80000,*(float *)(lVar2 + 8) * 0.5);
    local_50 = 0x3f0000003f000000;
    FUN_002334b4(&local_60,1,&local_50);
    FUN_0022afb0("##Toast",0,0xeb);
    uVar3 = FUN_0023353c();
    fVar4 = (float)FUN_0023348c();
    local_50 = CONCAT44(fVar8,fVar4);
    fVar10 = fVar8;
    fVar5 = (float)FUN_002334a0();
    local_60 = CONCAT44(fVar10 + fVar8,fVar5 + fVar4);
    FUN_00249060(0x41200000,uVar3,&local_50,&local_60,0xf0231a14,0);
    local_60 = CONCAT44(fVar10 + (float)((ulong)local_50 >> 0x20),fVar5 + (float)local_50);
    uVar9 = 0x3fc00000;
    FUN_00248f7c(0x41200000,uVar3,&local_50,&local_60,0x28ffffff,0);
    uVar6 = FUN_00221ee4(param_2);
    local_60 = CONCAT44(uVar9,uVar6);
    local_58 = fVar10;
    uStack_54 = in_s3;
    FUN_002565d8(&local_60,"%s",param_1);
    FUN_00230a1c();
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


