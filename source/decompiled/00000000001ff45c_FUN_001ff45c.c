// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff45c
// size: 356
// name: FUN_001ff45c
// namespace: Global
// signature: undefined FUN_001ff45c(void)
// generated: 2026-11-22 21:47:12


/* WARNING: Type propagation algorithm not settling */

void FUN_001ff45c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  byte local_a0 [8];
  ulong local_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  ulong local_50;
  ulong uStack_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_001f4530(local_88,"[json.exception.",param_2);
                    /* try { // try from 001ff498 to 001ff4ab has its CatchHandler @ 001ff640 */
  auVar7 = FUN_001effa8(local_88,".",1);
  puVar4 = auVar7._0_8_;
  local_60 = (void *)puVar4[2];
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
                    /* try { // try from 001ff4c4 to 001ff4d3 has its CatchHandler @ 001ff620 */
  std::__ndk1::to_string((__ndk1 *)(ulong)param_3,auVar7._8_4_);
  uVar1 = (ulong)(local_a0[0] >> 1);
  pvVar3 = (void *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    uVar1 = local_98;
    pvVar3 = local_90;
  }
                    /* try { // try from 001ff4f0 to 001ff4f7 has its CatchHandler @ 001ff600 */
  puVar4 = (ulong *)FUN_001effa8(&local_70,pvVar3,uVar1);
  local_40 = (void *)puVar4[2];
  uStack_48 = puVar4[1];
  local_50 = *puVar4;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
                    /* try { // try from 001ff510 to 001ff523 has its CatchHandler @ 001ff5c0 */
  puVar5 = (undefined8 *)FUN_001effa8(&local_50,"] ",2);
  param_1[2] = puVar5[2];
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


