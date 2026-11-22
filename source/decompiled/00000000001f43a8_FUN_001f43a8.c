// Recovered from libkentos.so by Ghidra 12.2
// address: 001f43a8
// size: 360
// name: FUN_001f43a8
// namespace: Global
// signature: undefined FUN_001f43a8(void)
// generated: 2026-11-22 21:46:55


void FUN_001f43a8(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  undefined7 uVar5;
  int iVar6;
  byte *pbVar7;
  byte local_60 [16];
  void *local_50;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (((DAT_0082f858 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f858), iVar6 != 0)) {
    DAT_0082f840 = 0;
    DAT_0082f841 = 0;
    uRam000000000082f842 = 0;
    DAT_0082f848._0_1_ = 0;
    DAT_0082f848._1_7_ = 0;
    DAT_0082f850 = (undefined1 *)0x0;
    __cxa_atexit(&LAB_001d9720,&DAT_0082f840,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f858);
  }
  uVar1 = (ulong)(DAT_0082f840 >> 1);
  if ((DAT_0082f840 & 1) != 0) {
    uVar1 = CONCAT71(DAT_0082f848._1_7_,(undefined1)DAT_0082f848);
  }
  if (uVar1 == 0) {
    FUN_001f462c();
    FUN_001f4530(local_60,"/data/data/",&DAT_0082f860);
                    /* try { // try from 001f4414 to 001f4427 has its CatchHandler @ 001f4514 */
    pbVar7 = (byte *)FUN_001effa8(local_60,"/files",6);
    puVar2 = *(undefined1 **)(pbVar7 + 0x10);
    bVar3 = *pbVar7;
    uStack_40 = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 8) >> 8);
    uStack_48 = (undefined7)*(undefined8 *)(pbVar7 + 1);
    local_41 = (undefined1)((ulong)*(undefined8 *)(pbVar7 + 1) >> 0x38);
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7[4] = 0;
    pbVar7[5] = 0;
    pbVar7[6] = 0;
    pbVar7[7] = 0;
    pbVar7[8] = 0;
    pbVar7[9] = 0;
    pbVar7[10] = 0;
    pbVar7[0xb] = 0;
    pbVar7[0xc] = 0;
    pbVar7[0xd] = 0;
    pbVar7[0xe] = 0;
    pbVar7[0xf] = 0;
    pbVar7[0x10] = 0;
    pbVar7[0x11] = 0;
    pbVar7[0x12] = 0;
    pbVar7[0x13] = 0;
    pbVar7[0x14] = 0;
    pbVar7[0x15] = 0;
    pbVar7[0x16] = 0;
    pbVar7[0x17] = 0;
    if ((DAT_0082f840 & 1) == 0) {
      DAT_0082f840 = 0;
      DAT_0082f841 = 0;
    }
    else {
      *DAT_0082f850 = 0;
      DAT_0082f848._0_1_ = 0;
      DAT_0082f848._1_7_ = 0;
    }
                    /* try { // try from 001f4464 to 001f4477 has its CatchHandler @ 001f4510 */
    FUN_00205068(&DAT_0082f840,0);
    uVar5 = uStack_48;
    uStack_48 = 0;
    DAT_0082f841 = (undefined1)uVar5;
    uRam000000000082f842 = (undefined6)((uint7)uVar5 >> 8);
    DAT_0082f848._0_1_ = local_41;
    DAT_0082f848._1_7_ = uStack_40;
    local_41 = 0;
    uStack_40 = 0;
    DAT_0082f840 = bVar3;
    DAT_0082f850 = puVar2;
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


