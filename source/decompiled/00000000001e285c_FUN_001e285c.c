// Recovered from libkentos.so by Ghidra 12.2
// address: 001e285c
// size: 168
// name: FUN_001e285c
// namespace: Global
// signature: undefined FUN_001e285c(void)
// generated: 2026-11-22 21:45:51


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_001e285c(void)

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
  if (DAT_0082f6d0 == 0) {
    local_30 = operator_new(0x30);
    uVar6 = s_Class_ShadowTrackerExtra_PickUpL_00482e1a._16_8_;
    uVar5 = s_Class_ShadowTrackerExtra_PickUpL_00482e1a._8_8_;
    uVar4 = s_Class_ShadowTrackerExtra_PickUpL_00482e1a._0_8_;
    uVar3 = CONCAT71(s_Class_ShadowTrackerExtra_PickUpL_00482e1a._32_7_,
                     s_Class_ShadowTrackerExtra_PickUpL_00482e1a[0x1f]);
    uVar2 = CONCAT17(s_Class_ShadowTrackerExtra_PickUpL_00482e1a[0x1f],
                     s_Class_ShadowTrackerExtra_PickUpL_00482e1a._24_7_);
    uStack_38 = _UNK_004798c8;
    local_40 = _DAT_004798c0;
    *(undefined8 *)(local_30 + 0x27) = s_Class_ShadowTrackerExtra_PickUpL_00482e1a._39_8_;
    *(undefined8 *)(local_30 + 0x1f) = uVar3;
    *(undefined8 *)(local_30 + 8) = uVar5;
    *(undefined8 *)local_30 = uVar4;
    *(undefined8 *)(local_30 + 0x18) = uVar2;
    *(undefined8 *)(local_30 + 0x10) = uVar6;
    local_30[0x2f] = '\0';
                    /* try { // try from 001e28b8 to 001e28bf has its CatchHandler @ 001e2904 */
    DAT_0082f6d0 = FUN_001ee58c(&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return DAT_0082f6d0;
}


