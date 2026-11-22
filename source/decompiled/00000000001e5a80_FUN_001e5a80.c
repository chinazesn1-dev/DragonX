// Recovered from libkentos.so by Ghidra 12.2
// address: 001e5a80
// size: 224
// name: FUN_001e5a80
// namespace: Global
// signature: undefined FUN_001e5a80(void)
// generated: 2026-11-22 21:46:09


void FUN_001e5a80(long *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_50;
  undefined7 uStack_4f;
  char cStack_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar3 = __cxa_allocate_exception(0x20);
    uStack_3e = 0;
    local_50 = 0x20;
    uStack_47 = s_cannot_get_value_00485cd7._8_7_;
    cStack_40 = s_cannot_get_value_00485cd7[0xf];
    uStack_4f = s_cannot_get_value_00485cd7._0_7_;
    cStack_48 = s_cannot_get_value_00485cd7[7];
    uStack_3f = 0;
                    /* try { // try from 001e5b34 to 001e5b5f has its CatchHandler @ 001e5b60 */
    FUN_001ff13c(uVar3,0xd6,&local_50);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar3,&PTR_PTR_00743360,&LAB_001fdaa4);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar2);
  }
  return;
}


