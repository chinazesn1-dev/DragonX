// Recovered from libkentos.so by Ghidra 12.2
// address: 001faeec
// size: 620
// name: FUN_001faeec
// namespace: Global
// signature: undefined FUN_001faeec(void)
// generated: 2026-11-22 21:47:07


/* WARNING: Type propagation algorithm not settling */

void FUN_001faeec(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,byte *param_4)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  void *pvVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  byte local_118 [8];
  ulong local_110;
  void *local_108;
  byte local_100;
  undefined7 uStack_ff;
  char cStack_f8;
  undefined4 local_f7;
  undefined3 uStack_f3;
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  uStack_f3 = 0;
  local_100 = 0x16;
  local_f0 = (void *)0x0;
  local_f7 = 0x726f72;
  uStack_ff = s_parse_error_00485b2a._0_7_;
  cStack_f8 = s_parse_error_00485b2a[7];
                    /* try { // try from 001faf50 to 001faf5f has its CatchHandler @ 001fb240 */
  FUN_001ff45c(local_e8,&local_100,param_2);
                    /* try { // try from 001faf60 to 001faf73 has its CatchHandler @ 001fb220 */
  puVar6 = (ulong *)FUN_001effa8(local_e8,"parse error",0xb);
  local_c0 = (void *)puVar6[2];
  uStack_c8 = puVar6[1];
  local_d0 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
                    /* try { // try from 001faf8c to 001faf9b has its CatchHandler @ 001fb200 */
  FUN_00200cd4(local_118,param_3);
  uVar2 = (ulong)(local_118[0] >> 1);
  pvVar5 = (void *)((ulong)local_118 | 1);
  if ((local_118[0] & 1) != 0) {
    uVar2 = local_110;
    pvVar5 = local_108;
  }
                    /* try { // try from 001fafb8 to 001fafbf has its CatchHandler @ 001fb1e0 */
  puVar6 = (ulong *)FUN_001effa8(&local_d0,pvVar5,uVar2);
  local_a0 = (void *)puVar6[2];
  uStack_a8 = puVar6[1];
  local_b0 = *puVar6;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
                    /* try { // try from 001fafd8 to 001fafeb has its CatchHandler @ 001fb1c0 */
  puVar6 = (ulong *)FUN_001effa8(&local_b0,&DAT_00485d75,2);
  local_80 = (void *)puVar6[2];
  uStack_88 = puVar6[1];
  local_90 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  uVar2 = *(ulong *)(param_4 + 8);
  pbVar3 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar3 = param_4 + 1;
    uVar2 = (ulong)(*param_4 >> 1);
  }
                    /* try { // try from 001fb020 to 001fb027 has its CatchHandler @ 001fb174 */
  puVar6 = (ulong *)FUN_001effa8(&local_90,pbVar3,uVar2);
  local_60 = (char *)puVar6[2];
  uStack_68 = puVar6[1];
  local_70 = *puVar6;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_118[0] & 1) != 0) {
    operator_delete(local_108);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  uVar8 = *param_3;
  pcVar1 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar1 = local_60;
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_007433d0;
                    /* try { // try from 001fb0ac to 001fb0af has its CatchHandler @ 001fb158 */
  std::runtime_error::runtime_error((runtime_error *)(param_1 + 2),pcVar1);
  *param_1 = &PTR_LAB_00743468;
  param_1[4] = uVar8;
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


