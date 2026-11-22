// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff13c
// size: 308
// name: FUN_001ff13c
// namespace: Global
// signature: undefined FUN_001ff13c(void)
// generated: 2026-11-22 21:47:12


void FUN_001ff13c(undefined8 *param_1,undefined4 param_2,byte *param_3)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong *puVar5;
  byte local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined7 uStack_77;
  char cStack_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  byte local_68 [16];
  void *local_58;
  ulong local_50;
  ulong uStack_48;
  char *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uStack_6e = 0;
  local_80 = 0x20;
  uStack_77 = s_invalid_iterator_00485ab7._8_7_;
  cStack_70 = s_invalid_iterator_00485ab7[0xf];
  uStack_7f = s_invalid_iterator_00485ab7._0_7_;
  cStack_78 = s_invalid_iterator_00485ab7[7];
  uStack_6f = 0;
                    /* try { // try from 001ff18c to 001ff19b has its CatchHandler @ 001ff2ac */
  FUN_001ff45c(local_68,&local_80,param_2);
  uVar2 = *(ulong *)(param_3 + 8);
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar3 = param_3 + 1;
    uVar2 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 001ff1b4 to 001ff1bb has its CatchHandler @ 001ff28c */
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
    operator_delete((void *)CONCAT62(uStack_6e,CONCAT11(uStack_6f,cStack_70)));
  }
  pcVar1 = (char *)((ulong)&local_50 | 1);
  if ((local_50 & 1) != 0) {
    pcVar1 = local_40;
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_007433d0;
                    /* try { // try from 001ff224 to 001ff227 has its CatchHandler @ 001ff270 */
  std::runtime_error::runtime_error((runtime_error *)(param_1 + 2),pcVar1);
  *param_1 = &PTR_LAB_007433a8;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


