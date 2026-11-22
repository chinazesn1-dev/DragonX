// Recovered from libkentos.so by Ghidra 12.2
// address: 001e2f1c
// size: 704
// name: FUN_001e2f1c
// namespace: Global
// signature: undefined FUN_001e2f1c(void)
// generated: 2026-11-22 21:45:52


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e2f1c(long param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_50;
  long local_48;
  
  puVar2 = PTR_DAT_00758cd0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) goto LAB_001e312c;
  if ((PTR_DAT_00758cd0[4] == '\0') || (uVar4 = FUN_002204a0(param_1), (uVar4 & 1) == 0))
  goto LAB_001e312c;
  DAT_00820779 = puVar2[8];
  DAT_0082077a = puVar2[10];
  _DAT_00820774 = 0x101;
  if (((param_2 != (long *)0x0) &&
      (((DAT_00820779 != '\0' && (puVar2[4] != '\0')) && (lVar6 = *param_2, lVar6 != 0)))) &&
     (uVar4 = FUN_002204a0(lVar6), (uVar4 & 1) != 0)) {
    puVar5 = *(undefined1 **)(lVar6 + 0x1f50);
    if (puVar5 != &LAB_001f21ac) {
      DAT_0082f750 = puVar5;
      if (puVar5 == (undefined1 *)0x0) goto LAB_001e2ff0;
      local_50 = &LAB_001f21ac;
                    /* try { // try from 001e2fd8 to 001e2fe3 has its CatchHandler @ 001e31dc */
      FUN_002203e0(lVar6 + 0x1f50,&local_50,8);
    }
    DAT_0082f748 = 1;
  }
LAB_001e2ff0:
  if (((puVar2[5] != '\0') && (*(long *)(param_1 + 0x2768) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x2768) + 0x5e8) != 0)) {
                    /* try { // try from 001e3008 to 001e300b has its CatchHandler @ 001e3208 */
    FUN_00267254();
    iVar3 = FUN_001f02dc();
    if (0 < iVar3) {
      DAT_0082f710 = iVar3;
    }
  }
  if (((DAT_0082f720 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f720), iVar3 != 0)) {
    DAT_0082f718 = std::__ndk1::chrono::steady_clock::now();
    __cxa_guard_release(&DAT_0082f720);
  }
  if (((DAT_0082f730 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f730), iVar3 != 0)) {
    DAT_0082f728 = std::__ndk1::chrono::steady_clock::now();
    __cxa_guard_release(&DAT_0082f730);
  }
  if (((DAT_0082f740 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f740), iVar3 != 0)) {
    DAT_0082f738 = std::__ndk1::chrono::steady_clock::now();
    __cxa_guard_release(&DAT_0082f740);
  }
  lVar6 = std::__ndk1::chrono::steady_clock::now();
  if ((((puVar2[5] != '\0') && (*(long *)(param_1 + 0x2768) != 0)) &&
      (uVar4 = FUN_002204a0(), (uVar4 & 1) != 0)) &&
     ((lVar7 = *(long *)(*(long *)(param_1 + 0x2768) + 0x5e8), lVar7 != 0 &&
      (0x4795ce3f < lVar6 - DAT_0082f718)))) {
                    /* try { // try from 001e3098 to 001e30bf has its CatchHandler @ 001e31f0 */
    uVar4 = FUN_002204a0(lVar7);
    if (((uVar4 & 1) != 0) && (*(int *)(lVar7 + 0x830) - 8U < 0x38)) {
      FUN_001f0be4(lVar7,param_1);
    }
    DAT_0082f718 = lVar6;
  }
  if ((puVar2[6] != '\0') && (0x5977713f < lVar6 - DAT_0082f728)) {
                    /* try { // try from 001e30e8 to 001e30ef has its CatchHandler @ 001e3214 */
    FUN_001f0ca4(param_1);
    DAT_0082f728 = lVar6;
  }
  if (((puVar2[7] != '\0') && (*(long *)(param_1 + 0xec0) != 0)) &&
     (0x7744d63f < lVar6 - DAT_0082f738)) {
                    /* try { // try from 001e3120 to 001e3127 has its CatchHandler @ 001e31fc */
    FUN_001f0fd0(param_1);
    DAT_0082f738 = lVar6;
  }
LAB_001e312c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


