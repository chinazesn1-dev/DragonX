// Recovered from libkentos.so by Ghidra 12.2
// address: 001fe6ac
// size: 184
// name: FUN_001fe6ac
// namespace: Global
// signature: undefined FUN_001fe6ac(void)
// generated: 2026-11-22 21:47:12


void FUN_001fe6ac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 *local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_001fe764(param_1,param_2,&local_58,auStack_60,param_3);
  puVar3 = (undefined8 *)*puVar2;
  if ((undefined8 *)*puVar2 == (undefined8 *)0x0) {
    FUN_001fea50(local_50,param_1,param_4);
    *local_50[0] = 0;
    local_50[0][1] = 0;
    local_50[0][2] = local_58;
    *puVar2 = local_50[0];
    puVar3 = local_50[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar3 = (undefined8 *)*puVar2;
    }
    FUN_001feccc(param_1[1],puVar3);
    param_1[2] = param_1[2] + 1;
    puVar3 = local_50[0];
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
}


