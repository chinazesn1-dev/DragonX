// Recovered from libkentos.so by Ghidra 12.2
// address: 001f5bd4
// size: 220
// name: FUN_001f5bd4
// namespace: Global
// signature: undefined FUN_001f5bd4(void)
// generated: 2026-11-22 21:46:56


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f5bd4(undefined1 param_1 [16],undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_70;
  undefined4 uStack_6c;
  float local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = DAT_00479ea0;
  FUN_00257bc0(&local_60);
  FUN_00233dd4();
  fVar4 = (float)FUN_0023348c();
  uVar3 = FUN_0023353c();
  local_68 = fVar4 + 1.0;
  uStack_64 = param_2;
  fVar5 = (float)FUN_00233478();
  local_70 = fVar4 + fVar5 + -1.0;
  uStack_58 = _UNK_00479c28;
  local_60 = _DAT_00479c20;
  uStack_6c = param_2;
  uVar2 = FUN_00221f20(&local_60);
  FUN_00248df8(0x3f800000,uVar3,&local_68,&local_70,uVar2);
  local_60 = DAT_00479ea8;
  FUN_00257bc0(&local_60);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


