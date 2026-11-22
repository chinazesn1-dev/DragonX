// Recovered from libkentos.so by Ghidra 12.2
// address: 001e20a8
// size: 320
// name: FUN_001e20a8
// namespace: Global
// signature: undefined FUN_001e20a8(void)
// generated: 2026-11-22 21:45:50


void FUN_001e20a8(long *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_50;
  undefined7 uStack_4f;
  char cStack_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  if (cVar1 == '\x01') {
    pcVar3 = (char *)(param_1[1] + 0x38);
  }
  else if (cVar1 == '\x02') {
    pcVar3 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = __cxa_allocate_exception(0x20);
      uStack_3e = 0;
      local_50 = 0x20;
      uStack_47 = s_cannot_get_value_00485cd7._8_7_;
      cStack_40 = s_cannot_get_value_00485cd7[0xf];
      uStack_4f = s_cannot_get_value_00485cd7._0_7_;
      cStack_48 = s_cannot_get_value_00485cd7[7];
      uStack_3f = 0;
                    /* try { // try from 001e21bc to 001e21e7 has its CatchHandler @ 001e21f0 */
      FUN_001ff13c(uVar4,0xd6,&local_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar4,&PTR_PTR_00743360,&LAB_001fdaa4);
    }
    if (param_1[3] != 0) {
      uVar4 = __cxa_allocate_exception(0x20);
      uStack_3e = 0;
      local_50 = 0x20;
      uStack_47 = s_cannot_get_value_00485cd7._8_7_;
      cStack_40 = s_cannot_get_value_00485cd7[0xf];
      uStack_4f = s_cannot_get_value_00485cd7._0_7_;
      cStack_48 = s_cannot_get_value_00485cd7[7];
      uStack_3f = 0;
                    /* try { // try from 001e2124 to 001e214f has its CatchHandler @ 001e21ec */
      FUN_001ff13c(uVar4,0xd6,&local_50);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar4,&PTR_PTR_00743360,&LAB_001fdaa4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar3);
  }
  return;
}


