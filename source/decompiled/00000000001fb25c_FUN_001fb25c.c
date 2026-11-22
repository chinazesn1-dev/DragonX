// Recovered from libkentos.so by Ghidra 12.2
// address: 001fb25c
// size: 1336
// name: FUN_001fb25c
// namespace: Global
// signature: undefined FUN_001fb25c(void)
// generated: 2026-11-22 21:47:07


/* WARNING: Type propagation algorithm not settling */

void FUN_001fb25c(undefined8 *param_1,long param_2,int param_3,byte *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  void *pvVar9;
  byte local_e0 [8];
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  size_t local_c0;
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  size_t sStack_88;
  void *local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = CONCAT53(s_syntax_error_00485b56._8_5_,s_syntax_error_00485b56._5_3_);
  uVar3 = CONCAT35(s_syntax_error_00485b56._5_3_,s_syntax_error_00485b56._0_5_);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)param_1 = 0x1a;
  *(undefined8 *)((long)param_1 + 6) = uVar4;
  *(undefined8 *)((long)param_1 + 1) = uVar3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  uVar8 = (ulong)(*param_4 >> 1);
  if ((*param_4 & 1) != 0) {
    uVar8 = *(ulong *)(param_4 + 8);
  }
  if (uVar8 != 0) {
                    /* try { // try from 001fb2d4 to 001fb2e7 has its CatchHandler @ 001fb8b4 */
    FUN_001f4530(&local_90,"while parsing ",param_4);
                    /* try { // try from 001fb2e8 to 001fb2fb has its CatchHandler @ 001fb894 */
    puVar5 = (ulong *)FUN_001effa8(&local_90," ",1);
    local_60 = (void *)puVar5[2];
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = local_70 >> 1 & 0x7f;
    pvVar9 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar8 = uStack_68;
      pvVar9 = local_60;
    }
                    /* try { // try from 001fb334 to 001fb33b has its CatchHandler @ 001fb874 */
    FUN_001effa8(param_1,pvVar9,uVar8);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
                    /* try { // try from 001fb35c to 001fb36f has its CatchHandler @ 001fb8b8 */
  FUN_001effa8(param_1,&DAT_0048285f,2);
  uVar1 = *(uint *)(param_2 + 0x30);
  if (uVar1 == 0xe) {
    pcVar7 = *(char **)(param_2 + 0xa0);
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    sVar6 = strlen(pcVar7);
    if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001fb784 to 001fb78b has its CatchHandler @ 001fb798 */
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_c8);
    }
    if (sVar6 < 0x17) {
      pvVar9 = (void *)((ulong)&local_c8 | 1);
      local_c8 = CONCAT71(local_c8._1_7_,(char)((int)sVar6 << 1));
      if (sVar6 != 0) goto LAB_001fb438;
    }
    else {
      uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001fb420 to 001fb427 has its CatchHandler @ 001fb798 */
      pvVar9 = operator_new(uVar8);
      local_c8 = uVar8 | 1;
      local_c0 = sVar6;
      local_b8 = pvVar9;
LAB_001fb438:
      memcpy(pvVar9,pcVar7,sVar6);
    }
    *(undefined1 *)((long)pvVar9 + sVar6) = 0;
                    /* try { // try from 001fb44c to 001fb45f has its CatchHandler @ 001fb84c */
    puVar5 = (ulong *)FUN_001effa8(&local_c8,"; last read: \'",0xe);
    local_a0 = (void *)puVar5[2];
    uStack_a8 = puVar5[1];
    local_b0 = *puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
                    /* try { // try from 001fb47c to 001fb48b has its CatchHandler @ 001fb838 */
    FUN_001fae04(local_e0,param_2 + 0x38);
    uVar8 = (ulong)(local_e0[0] >> 1);
    pvVar9 = (void *)((ulong)local_e0 | 1);
    if ((local_e0[0] & 1) != 0) {
      uVar8 = local_d8;
      pvVar9 = local_d0;
    }
                    /* try { // try from 001fb4a8 to 001fb4af has its CatchHandler @ 001fb808 */
    puVar5 = (ulong *)FUN_001effa8(&local_b0,pvVar9,uVar8);
    local_80 = (void *)puVar5[2];
    sStack_88 = puVar5[1];
    local_90 = *puVar5;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
                    /* try { // try from 001fb4c8 to 001fb4db has its CatchHandler @ 001fb7e8 */
    puVar5 = (ulong *)FUN_001effa8(&local_90,"\'",1);
    local_60 = (void *)puVar5[2];
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = local_70 >> 1 & 0x7f;
    pvVar9 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar8 = uStack_68;
      pvVar9 = local_60;
    }
                    /* try { // try from 001fb514 to 001fb51b has its CatchHandler @ 001fb7a4 */
    FUN_001effa8(param_1,pvVar9,uVar8);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if ((local_c8 & 1) != 0) {
      pvVar9 = local_b8;
LAB_001fb638:
      operator_delete(pvVar9);
    }
  }
  else {
    if (uVar1 < 0x11) {
      pcVar7 = (&PTR_s_<uninitialized>_00743540)[(int)uVar1];
    }
    else {
      pcVar7 = "unknown token";
    }
    local_90 = 0;
    sStack_88 = 0;
    local_80 = (void *)0x0;
    sVar6 = strlen(pcVar7);
    if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001fb78c to 001fb793 has its CatchHandler @ 001fb794 */
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_90);
    }
    if (sVar6 < 0x17) {
      pvVar9 = (void *)((ulong)&local_90 | 1);
      local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar6 << 1));
      if (sVar6 != 0) goto LAB_001fb568;
    }
    else {
      uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001fb550 to 001fb557 has its CatchHandler @ 001fb794 */
      pvVar9 = operator_new(uVar8);
      local_90 = uVar8 | 1;
      sStack_88 = sVar6;
      local_80 = pvVar9;
LAB_001fb568:
      memcpy(pvVar9,pcVar7,sVar6);
    }
    *(undefined1 *)((long)pvVar9 + sVar6) = 0;
                    /* try { // try from 001fb57c to 001fb593 has its CatchHandler @ 001fb848 */
    puVar5 = (ulong *)FUN_0020480c(&local_90,0,"unexpected ",0xb);
    local_60 = (void *)puVar5[2];
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = local_70 >> 1 & 0x7f;
    pvVar9 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar8 = uStack_68;
      pvVar9 = local_60;
    }
                    /* try { // try from 001fb5cc to 001fb5d3 has its CatchHandler @ 001fb7a0 */
    FUN_001effa8(param_1,pvVar9,uVar8);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_90 & 1) != 0) {
      pvVar9 = local_80;
      goto LAB_001fb638;
    }
  }
  if (param_3 == 0) goto LAB_001fb74c;
  if (param_3 - 1U < 0x10) {
    pcVar7 = (&PTR_s_true_literal_007435d0)[(int)(param_3 - 1U)];
  }
  else {
    pcVar7 = "unknown token";
  }
  local_90 = 0;
  sStack_88 = 0;
  local_80 = (void *)0x0;
  sVar6 = strlen(pcVar7);
  if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001fb77c to 001fb783 has its CatchHandler @ 001fb79c */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_90);
  }
  if (sVar6 < 0x17) {
    pvVar9 = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 != 0) goto LAB_001fb6c0;
  }
  else {
    uVar8 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001fb6a8 to 001fb6af has its CatchHandler @ 001fb79c */
    pvVar9 = operator_new(uVar8);
    local_90 = uVar8 | 1;
    sStack_88 = sVar6;
    local_80 = pvVar9;
LAB_001fb6c0:
    memcpy(pvVar9,pcVar7,sVar6);
  }
  *(undefined1 *)((long)pvVar9 + sVar6) = 0;
                    /* try { // try from 001fb6d4 to 001fb6eb has its CatchHandler @ 001fb864 */
  puVar5 = (ulong *)FUN_0020480c(&local_90,0,"; expected ",0xb);
  local_60 = (void *)puVar5[2];
  uStack_68 = puVar5[1];
  local_70 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar8 = local_70 >> 1 & 0x7f;
  pvVar9 = (void *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar8 = uStack_68;
    pvVar9 = local_60;
  }
                    /* try { // try from 001fb724 to 001fb72b has its CatchHandler @ 001fb860 */
  FUN_001effa8(param_1,pvVar9,uVar8);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
LAB_001fb74c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


