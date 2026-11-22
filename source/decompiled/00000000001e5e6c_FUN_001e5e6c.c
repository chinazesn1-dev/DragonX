// Recovered from libkentos.so by Ghidra 12.2
// address: 001e5e6c
// size: 336
// name: FUN_001e5e6c
// namespace: Global
// signature: undefined FUN_001e5e6c(void)
// generated: 2026-11-22 21:46:10


void FUN_001e5e6c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_3;
  local_60 = (char *)FUN_001e2220(*param_2,"data");
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x8000000000000000;
  if (*local_60 == '\x01') {
    local_58 = FUN_001f422c(*(undefined8 *)(local_60 + 8),&local_40);
  }
  else if (*local_60 == '\x02') {
    local_50 = *(undefined8 *)(*(long *)(local_60 + 8) + 8);
  }
  else {
    local_48 = 1;
  }
  local_80 = (char *)FUN_001e2220(*param_2,"data");
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x8000000000000000;
  if (*local_80 == '\x02') {
    local_70 = *(undefined8 *)(*(long *)(local_80 + 8) + 8);
  }
  else if (*local_80 == '\x01') {
    local_78 = *(long *)(local_80 + 8) + 8;
  }
  else {
    local_68 = 1;
  }
  uVar2 = FUN_002055bc(&local_60,&local_80);
  if ((uVar2 & 1) == 0) {
    pcVar3 = (char *)FUN_001e5a80(&local_60);
    if (*pcVar3 == '\x03') {
      uVar4 = FUN_001e5a80(&local_60);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
                    /* try { // try from 001e5f80 to 001e5f87 has its CatchHandler @ 001e5fbc */
      FUN_0020a0d4(uVar4,param_1);
      goto LAB_001e5f94;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_001e5f94:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


