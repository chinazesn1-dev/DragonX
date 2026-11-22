// Recovered from libkentos.so by Ghidra 12.2
// address: 001f85c0
// size: 224
// name: FUN_001f85c0
// namespace: Global
// signature: undefined FUN_001f85c0(void)
// generated: 2026-11-22 21:47:02


void FUN_001f85c0(undefined8 param_1,undefined8 param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  local_60 = alStack_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (param_3 == plVar2) {
                    /* try { // try from 001f8628 to 001f862f has its CatchHandler @ 001f86a0 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_80);
  }
  else {
    param_3[4] = 0;
    local_60 = plVar2;
  }
                    /* try { // try from 001f8630 to 001f864b has its CatchHandler @ 001f86a4 */
  FUN_001f8cc8(param_1,param_2,alStack_80,param_4 & 1,param_5 & 1);
  if (alStack_80 == local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_001f8674;
    pcVar3 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar3)();
LAB_001f8674:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


