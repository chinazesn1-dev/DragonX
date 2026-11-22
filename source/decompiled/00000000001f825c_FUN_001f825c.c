// Recovered from libkentos.so by Ghidra 12.2
// address: 001f825c
// size: 208
// name: FUN_001f825c
// namespace: Global
// signature: undefined FUN_001f825c(void)
// generated: 2026-11-22 21:47:02


long * FUN_001f825c(long *param_1)

{
  ios_base *this;
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined1 local_38 [8];
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(*param_1 + -0x18);
  if (*(long *)((long)param_1 + *plVar3 + 0x28) != 0) {
    local_38[0] = 0;
    local_30 = param_1;
    if (*(int *)((long)param_1 + *plVar3 + 0x20) == 0) {
      if (*(long *)((long)param_1 + *plVar3 + 0x88) != 0) {
                    /* try { // try from 001f82b0 to 001f82b3 has its CatchHandler @ 001f832c */
        FUN_001f825c();
        plVar3 = (long *)(*param_1 + -0x18);
      }
      local_38[0] = 1;
                    /* try { // try from 001f82d8 to 001f82fb has its CatchHandler @ 001f8338 */
      iVar2 = (**(code **)(**(long **)((long)param_1 + *plVar3 + 0x28) + 0x30))();
      if (iVar2 == -1) {
        this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
        std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
      }
    }
    FUN_001f81bc(local_38);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


