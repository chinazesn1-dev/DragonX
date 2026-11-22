// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff2c8
// size: 316
// name: FUN_001ff2c8
// namespace: Global
// signature: undefined FUN_001ff2c8(void)
// generated: 2026-11-22 21:47:12


void FUN_001ff2c8(undefined8 *param_1,undefined4 param_2,byte *param_3)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong *puVar5;
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined4 uStack_74;
  void *local_70;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uStack_74 = 0;
  local_80 = 0x14;
  local_70 = (void *)0x0;
  local_77 = 0x726f;
  uStack_7f = s_type_error_00485ad9._0_7_;
  cStack_78 = s_type_error_00485ad9[7];
  local_75 = 0;
                    /* try { // try from 001ff320 to 001ff32f has its CatchHandler @ 001ff440 */
  FUN_001ff45c(local_68,&local_80,param_2);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 001ff348 to 001ff34f has its CatchHandler @ 001ff420 */
  puVar5 = (ulong *)FUN_001effa8(local_68,pbVar3,uVar2);
  local_40 = (char *)puVar5[2];
  uStack_48 = puVar5[1];
  local_50 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  pcVar1 = (char *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pcVar1 = local_40;
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_007433d0;
                    /* try { // try from 001ff3b8 to 001ff3bb has its CatchHandler @ 001ff404 */
  std::runtime_error::runtime_error((runtime_error *)(param_1 + 2),pcVar1);
  *param_1 = &PTR_LAB_007433f8;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


