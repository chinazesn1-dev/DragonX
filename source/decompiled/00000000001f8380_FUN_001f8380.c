// Recovered from libkentos.so by Ghidra 12.2
// address: 001f8380
// size: 336
// name: FUN_001f8380
// namespace: Global
// signature: undefined FUN_001f8380(void)
// generated: 2026-11-22 21:47:02


long * FUN_001f8380(long *param_1,undefined8 param_2)

{
  ios_base *piVar1;
  long lVar2;
  code *pcVar3;
  long *local_150;
  undefined8 local_148;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long *local_d8;
  void *local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_148 = *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
  local_120 = (long *)0x0;
                    /* try { // try from 001f83c4 to 001f83db has its CatchHandler @ 001f8564 */
  local_150 = param_1;
  FUN_001f85c0(alStack_110,&local_150,alStack_140,1,0);
                    /* try { // try from 001f83dc to 001f83eb has its CatchHandler @ 001f84d8 */
  FUN_001f86dc(alStack_110,0,param_2);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_a0 != (void *)0x0) {
    local_98 = local_a0;
    operator_delete(local_a0);
  }
  if (local_d8 != (long *)0x0) {
    piVar1 = (ios_base *)((long)local_d8 + *(long *)(*local_d8 + -0x18));
                    /* try { // try from 001f8428 to 001f842b has its CatchHandler @ 001f84d4 */
    std::__ndk1::ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) & 2);
  }
  if (alStack_110 == local_f0) {
    pcVar3 = *(code **)(*local_f0 + 0x20);
LAB_001f8454:
    (*pcVar3)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar3 = *(code **)(*local_f0 + 0x28);
    goto LAB_001f8454;
  }
  if (alStack_140 == local_120) {
    pcVar3 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_001f8484;
    pcVar3 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar3)();
LAB_001f8484:
  if (local_150 != (long *)0x0) {
    piVar1 = (ios_base *)((long)local_150 + *(long *)(*local_150 + -0x18));
                    /* try { // try from 001f84a0 to 001f84a3 has its CatchHandler @ 001f84d0 */
    std::__ndk1::ios_base::clear(piVar1,*(uint *)(piVar1 + 0x20) & 2);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


