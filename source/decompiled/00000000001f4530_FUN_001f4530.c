// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4530
// size: 224
// name: FUN_001f4530
// namespace: Global
// signature: undefined FUN_001f4530(void)
// generated: 2026-11-22 21:46:55


void FUN_001f4530(ulong *param_1,char *param_2,byte *param_3)

{
  ulong uVar1;
  byte bVar2;
  size_t __n;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __n = strlen(param_2);
  bVar2 = *param_3;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  uVar4 = uVar1 + __n;
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  if (uVar4 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar4 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  if (__n != 0) {
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  pbVar3 = *(byte **)(param_3 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar3 = param_3 + 1;
  }
                    /* try { // try from 001f45bc to 001f460f has its CatchHandler @ 001f4610 */
  FUN_001effa8(param_1,pbVar3,uVar1);
  return;
}


