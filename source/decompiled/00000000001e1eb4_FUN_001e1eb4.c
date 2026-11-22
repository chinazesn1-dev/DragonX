// Recovered from libkentos.so by Ghidra 12.2
// address: 001e1eb4
// size: 168
// name: FUN_001e1eb4
// namespace: Global
// signature: undefined FUN_001e1eb4(void)
// generated: 2026-11-22 21:45:49


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_001e1eb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_0082f6c0 == 0) {
    local_30 = operator_new(0x30);
    uVar6 = s_Class_ShadowTrackerExtra_STExtra_00482dc2._16_8_;
    uVar5 = s_Class_ShadowTrackerExtra_STExtra_00482dc2._8_8_;
    uVar4 = s_Class_ShadowTrackerExtra_STExtra_00482dc2._0_8_;
    uVar3 = CONCAT35(s_Class_ShadowTrackerExtra_STExtra_00482dc2._32_3_,
                     s_Class_ShadowTrackerExtra_STExtra_00482dc2._27_5_);
    uVar2 = CONCAT53(s_Class_ShadowTrackerExtra_STExtra_00482dc2._27_5_,
                     s_Class_ShadowTrackerExtra_STExtra_00482dc2._24_3_);
    uStack_38 = _UNK_00479908;
    local_40 = _DAT_00479900;
    *(undefined8 *)(local_30 + 0x23) = s_Class_ShadowTrackerExtra_STExtra_00482dc2._35_8_;
    *(undefined8 *)(local_30 + 0x1b) = uVar3;
    *(undefined8 *)(local_30 + 8) = uVar5;
    *(undefined8 *)local_30 = uVar4;
    *(undefined8 *)(local_30 + 0x18) = uVar2;
    *(undefined8 *)(local_30 + 0x10) = uVar6;
    local_30[0x2b] = '\0';
                    /* try { // try from 001e1f10 to 001e1f17 has its CatchHandler @ 001e1f5c */
    DAT_0082f6c0 = FUN_001ee58c(&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return DAT_0082f6c0;
}


