// Recovered from libkentos.so by Ghidra 12.2
// address: 001e1c34
// size: 316
// name: FUN_001e1c34
// namespace: Global
// signature: undefined FUN_001e1c34(void)
// generated: 2026-11-22 21:45:49


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_001e1c34(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  void *local_48;
  long *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40 = operator_new(0x20);
  lVar4 = _UNK_004798f8;
  lVar3 = _DAT_004798f0;
  uStack_58 = 0;
  local_60 = (void *)0x0;
  local_48 = (void *)0x0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_30 = 0;
  local_38 = 0;
  *(undefined4 *)(local_40 + 3) = 0;
  *local_40 = (long)&PTR__facet_00742478;
  local_40[2] = lVar4;
  local_40[1] = lVar3;
  local_a0 = 0;
  local_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 001e1ca4 to 001e1caf has its CatchHandler @ 001e1db0 */
  FUN_001f0128(&local_a0,*param_1,*param_1 + (long)(int)param_1[1] * 2);
  uVar1 = local_a0 >> 1 & 0x7f;
  pvVar5 = (void *)((ulong)&local_a0 | 2);
  if ((local_a0 & 1) != 0) {
    uVar1 = local_98;
    pvVar5 = local_90;
  }
                    /* try { // try from 001e1cd0 to 001e1cdb has its CatchHandler @ 001e1d70 */
  FUN_001ef488(local_88,&local_70,pvVar5,(void *)((long)pvVar5 + uVar1 * 2));
  if ((local_88[0] & 1) == 0) {
    pvVar5 = (void *)((ulong)local_88 | 1);
  }
  else {
    operator_delete(local_78);
    pvVar5 = local_78;
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  if ((uStack_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar5;
}


