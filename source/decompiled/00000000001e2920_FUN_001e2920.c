// Recovered from libkentos.so by Ghidra 12.2
// address: 001e2920
// size: 168
// name: FUN_001e2920
// namespace: Global
// signature: undefined FUN_001e2920(void)
// generated: 2026-11-22 21:45:51


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_001e2920(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_0082f6d8 == 0) {
    local_30 = operator_new(0x30);
    uVar5 = s_Class_ShadowTrackerExtra_PlayerT_00482e4a._16_8_;
    uVar4 = s_Class_ShadowTrackerExtra_PlayerT_00482e4a._8_8_;
    uVar3 = s_Class_ShadowTrackerExtra_PlayerT_00482e4a._0_8_;
    uVar2 = CONCAT26(s_Class_ShadowTrackerExtra_PlayerT_00482e4a._30_2_,
                     s_Class_ShadowTrackerExtra_PlayerT_00482e4a._24_6_);
    uStack_38 = _UNK_00479918;
    local_40 = _DAT_00479910;
    *(ulong *)(local_30 + 0x1e) =
         CONCAT62(s_Class_ShadowTrackerExtra_PlayerT_00482e4a._32_6_,
                  s_Class_ShadowTrackerExtra_PlayerT_00482e4a._30_2_);
    *(undefined8 *)(local_30 + 8) = uVar4;
    *(undefined8 *)local_30 = uVar3;
    *(undefined8 *)(local_30 + 0x18) = uVar2;
    *(undefined8 *)(local_30 + 0x10) = uVar5;
    local_30[0x26] = '\0';
                    /* try { // try from 001e297c to 001e2983 has its CatchHandler @ 001e29c8 */
    DAT_0082f6d8 = FUN_001ee58c(&local_40);
    if ((local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return DAT_0082f6d8;
}


