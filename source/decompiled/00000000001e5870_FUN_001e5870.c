// Recovered from libkentos.so by Ghidra 12.2
// address: 001e5870
// size: 368
// name: FUN_001e5870
// namespace: Global
// signature: undefined FUN_001e5870(void)
// generated: 2026-11-22 21:46:09


void FUN_001e5870(undefined1 *param_1,undefined8 *param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  size_t sVar2;
  long *plVar3;
  code *pcVar4;
  char *__s;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  void *local_c0;
  void *local_b8;
  byte local_a8;
  void *local_98;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  plVar3 = (long *)param_3[4];
  if (plVar3 == (long *)0x0) {
    local_140 = (long *)0x0;
  }
  else if (param_3 == plVar3) {
    local_140 = alStack_160;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_160);
  }
  else {
                    /* try { // try from 001e58d8 to 001e590b has its CatchHandler @ 001e59e0 */
    local_140 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
                    /* try { // try from 001e5910 to 001e5927 has its CatchHandler @ 001e5a3c */
  FUN_002060f4(alStack_130,__s,__s + sVar2,alStack_160,param_4 & 1,param_5 & 1);
                    /* try { // try from 001e5928 to 001e5937 has its CatchHandler @ 001e59e8 */
  FUN_00206208(alStack_130,1,param_1);
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (local_c0 != (void *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (alStack_130 == local_110) {
    pcVar4 = *(code **)(*local_110 + 0x20);
LAB_001e5980:
    (*pcVar4)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar4 = *(code **)(*local_110 + 0x28);
    goto LAB_001e5980;
  }
  if (alStack_160 == local_140) {
    pcVar4 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_001e59b0;
    pcVar4 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar4)();
LAB_001e59b0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


