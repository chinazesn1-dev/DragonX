// Recovered from libkentos.so by Ghidra 12.2
// address: 001feedc
// size: 140
// name: FUN_001feedc
// namespace: Global
// signature: undefined FUN_001feedc(void)
// generated: 2026-11-22 21:47:12


void FUN_001feedc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = param_2[1] - *param_2;
  if (uVar3 != 0) {
    if ((ulong)((long)uVar3 >> 4) >> 0x3c != 0) {
                    /* try { // try from 001fef60 to 001fef67 has its CatchHandler @ 001fef68 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1);
    }
                    /* try { // try from 001fef14 to 001fef17 has its CatchHandler @ 001fef68 */
    pvVar4 = operator_new(uVar3);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (void *)((long)pvVar4 + ((long)uVar3 >> 4) * 0x10);
    lVar2 = param_2[1];
    for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
                    /* try { // try from 001fef30 to 001fef37 has its CatchHandler @ 001fef6c */
      FUN_001fe0f8(pvVar4,lVar1);
      pvVar4 = (void *)(param_1[1] + 0x10);
      param_1[1] = pvVar4;
    }
  }
  return;
}


