// Recovered from libkentos.so by Ghidra 12.2
// address: 001e1b70
// size: 168
// name: FUN_001e1b70
// namespace: Global
// signature: undefined FUN_001e1b70(void)
// generated: 2026-11-22 21:45:49


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_001e1b70(void)

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
  if (DAT_0082f5d0 == 0) {
    local_30 = operator_new(0x40);
    uVar6 = s_Class_ShadowTrackerExtra_STExtra_00482d2c._40_8_;
    uVar5 = s_Class_ShadowTrackerExtra_STExtra_00482d2c._32_8_;
    uVar4 = s_Class_ShadowTrackerExtra_STExtra_00482d2c._24_8_;
    uVar3 = s_Class_ShadowTrackerExtra_STExtra_00482d2c._16_8_;
    uVar2 = s_Class_ShadowTrackerExtra_STExtra_00482d2c._0_8_;
    uStack_38 = _UNK_004798e8;
    local_40 = _DAT_004798e0;
    *(undefined8 *)(local_30 + 8) = s_Class_ShadowTrackerExtra_STExtra_00482d2c._8_8_;
    *(undefined8 *)local_30 = uVar2;
    *(undefined8 *)(local_30 + 0x18) = uVar4;
    *(undefined8 *)(local_30 + 0x10) = uVar3;
    *(undefined8 *)(local_30 + 0x28) = uVar6;
    *(undefined8 *)(local_30 + 0x20) = uVar5;
    local_30[0x30] = '\0';
                    /* try { // try from 001e1bcc to 001e1bd3 has its CatchHandler @ 001e1c18 */
    DAT_0082f5d0 = FUN_001ee58c(&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return DAT_0082f5d0;
}


