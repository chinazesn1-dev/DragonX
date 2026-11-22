// Recovered from libkentos.so by Ghidra 12.2
// address: 001ee238
// size: 368
// name: FUN_001ee238
// namespace: Global
// signature: undefined FUN_001ee238(void)
// generated: 2026-11-22 21:46:48


void FUN_001ee238(undefined1 *param_1,byte *param_2,long *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  void *local_c0;
  void *local_b8;
  byte local_a8;
  void *local_98;
  long local_58;
  
  local_140 = alStack_160;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  plVar4 = (long *)param_3[4];
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  if (plVar4 == (long *)0x0) {
    local_140 = (long *)0x0;
  }
  else if (param_3 == plVar4) {
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_160);
  }
  else {
                    /* try { // try from 001ee2a8 to 001ee2d3 has its CatchHandler @ 001ee3a8 */
    local_140 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
                    /* try { // try from 001ee2d8 to 001ee2ef has its CatchHandler @ 001ee404 */
  FUN_0020c5f0(alStack_130,pbVar2,pbVar2 + uVar1,alStack_160,param_4 & 1,param_5 & 1);
                    /* try { // try from 001ee2f0 to 001ee2ff has its CatchHandler @ 001ee3b0 */
  FUN_0020c704(alStack_130,1,param_1);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (local_c0 != (void *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (alStack_130 == local_110) {
    pcVar5 = *(code **)(*local_110 + 0x20);
LAB_001ee348:
    (*pcVar5)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar5 = *(code **)(*local_110 + 0x28);
    goto LAB_001ee348;
  }
  if (alStack_160 == local_140) {
    pcVar5 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_001ee378;
    pcVar5 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar5)();
LAB_001ee378:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


