// Recovered from libkentos.so by Ghidra 12.2
// address: 001e3220
// size: 360
// name: FUN_001e3220
// namespace: Global
// signature: undefined FUN_001e3220(void)
// generated: 2026-11-22 21:45:52


void FUN_001e3220(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char acStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    if (((DAT_0082f798 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f798), iVar3 != 0)) {
      DAT_0082f758 = 0;
      DAT_0082f75a = 0;
      DAT_0082f788 = 0;
      DAT_0082f790 = 0;
      DAT_0082f774 = 0;
      DAT_0082f76c = 0;
      DAT_0082f764 = 0;
      DAT_0082f75c = 0;
      DAT_0082f77c = 0;
      DAT_0082f780 = &DAT_0082f788;
      __cxa_atexit(&LAB_001f4028,&DAT_0082f758,&PTR_LOOP_00759000);
      __cxa_guard_release(&DAT_0082f798);
    }
    if ((char)DAT_0082f758 != '\0') {
      lVar4 = 0;
      do {
        iVar3 = *(int *)((long)&DAT_004a44d8 + lVar4);
        snprintf(acStack_68,0x20,"lua_wskin_%d",iVar3);
                    /* try { // try from 001e3294 to 001e32b7 has its CatchHandler @ 001e3360 */
        iVar2 = FUN_001f2ea8(acStack_68,0);
        if (0 < iVar2) {
          FUN_001f35a0(param_1,iVar3,iVar2);
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != 0xe8);
                    /* try { // try from 001e32c4 to 001e32ef has its CatchHandler @ 001e335c */
      iVar3 = FUN_001f2ea8("lua_vehicle_res",0);
      if (0 < iVar3) {
        FUN_001f3898(param_1);
      }
      FUN_001f3a4c(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


