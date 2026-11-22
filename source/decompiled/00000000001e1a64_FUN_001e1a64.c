// Recovered from libkentos.so by Ghidra 12.2
// address: 001e1a64
// size: 240
// name: FUN_001e1a64
// namespace: Global
// signature: undefined FUN_001e1a64(void)
// generated: 2026-11-22 21:45:49


void FUN_001e1a64(ulong *param_1,byte *param_2,char *param_3)

{
  size_t sVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    __n = (size_t)(*param_2 >> 1);
    sVar1 = strlen(param_3);
    param_2 = param_2 + 1;
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    sVar1 = strlen(param_3);
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = __n + sVar1;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  if (uVar2 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
  }
  else {
    uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  if (__n != 0) {
    memcpy(__dest,param_2,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 001e1afc to 001e1b53 has its CatchHandler @ 001e1b54 */
  FUN_001effa8(param_1,param_3,sVar1);
  return;
}


