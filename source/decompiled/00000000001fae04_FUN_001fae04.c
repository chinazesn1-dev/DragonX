// Recovered from libkentos.so by Ghidra 12.2
// address: 001fae04
// size: 200
// name: FUN_001fae04
// namespace: Global
// signature: undefined FUN_001fae04(void)
// generated: 2026-11-22 21:47:06


void FUN_001fae04(undefined8 *param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pbVar2 = *(byte **)(param_2 + 0x40);
  for (pbVar1 = *(byte **)(param_2 + 0x38); pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    if (bVar3 < 0x20) {
      local_50 = 0;
      local_58 = 0;
      snprintf((char *)&local_58,9,"<U+%.4X>",(uint)bVar3);
      sVar5 = strlen((char *)&local_58);
                    /* try { // try from 001fae78 to 001fae83 has its CatchHandler @ 001faecc */
      FUN_001effa8(param_1,&local_58,sVar5);
    }
    else {
                    /* try { // try from 001fae88 to 001fae93 has its CatchHandler @ 001faed0 */
      FUN_001f40e0(param_1,(uint)bVar3);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


