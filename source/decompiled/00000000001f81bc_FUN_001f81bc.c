// Recovered from libkentos.so by Ghidra 12.2
// address: 001f81bc
// size: 144
// name: FUN_001f81bc
// namespace: Global
// signature: undefined FUN_001f81bc(void)
// generated: 2026-11-22 21:47:02


void FUN_001f81bc(long param_1)

{
  ios_base *this;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
                    /* try { // try from 001f8218 to 001f823f has its CatchHandler @ 001f824c */
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = std::uncaught_exception(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    this = (ios_base *)((long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18))
    ;
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
  }
  return;
}


