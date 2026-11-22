// Recovered from libkentos.so by Ghidra 12.2
// address: 001f0be4
// size: 180
// name: FUN_001f0be4
// namespace: Global
// signature: undefined FUN_001f0be4(void)
// generated: 2026-11-22 21:46:51


void FUN_001f0be4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((param_1 != 0) && (param_2 != 0)) && (uVar3 = FUN_002204a0(param_1), (uVar3 & 1) != 0)) &&
     ((uVar3 = FUN_002204a0(param_2), (uVar3 & 1) != 0 && (*(long *)(param_1 + 0xf0) == param_2))))
  {
    FUN_00267254(param_1);
    iVar2 = FUN_001f02dc();
    if (0 < iVar2) {
      DAT_0082f710 = iVar2;
      FUN_001d97bc(auStack_98);
                    /* try { // try from 001f0c5c to 001f0c6f has its CatchHandler @ 001f0c98 */
      FUN_001f22b8(auStack_98,param_1);
      FUN_00267354(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


