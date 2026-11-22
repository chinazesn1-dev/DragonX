// Recovered from libkentos.so by Ghidra 12.2
// address: 001fc7d0
// size: 228
// name: FUN_001fc7d0
// namespace: Global
// signature: undefined FUN_001fc7d0(void)
// generated: 2026-11-22 21:47:10


void FUN_001fc7d0(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  void *local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((ulong)(param_1[2] << 6) < param_2) {
    local_70 = (void *)0x0;
    lStack_68 = 0;
    local_60 = 0;
    if ((long)param_2 < 0) {
                    /* try { // try from 001fc8ac to 001fc8b3 has its CatchHandler @ 001fc8b4 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(&local_70);
    }
    lVar1 = (param_2 - 1 >> 6) + 1;
                    /* try { // try from 001fc820 to 001fc85b has its CatchHandler @ 001fc8b4 */
    local_70 = operator_new(lVar1 * 8);
    lStack_68 = 0;
    local_48 = *param_1;
    local_40 = 0;
    local_50 = (uint)param_1[1] & 0x3f;
    lStack_58 = local_48 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_60 = lVar1;
    FUN_001fc8d0(&local_70,&local_48,&lStack_58);
    pvVar2 = (void *)*param_1;
    lVar1 = param_1[1];
    param_1[1] = lStack_68;
    *param_1 = (long)local_70;
    lVar4 = param_1[2];
    param_1[2] = local_60;
    local_70 = pvVar2;
    lStack_68 = lVar1;
    local_60 = lVar4;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


