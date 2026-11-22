// Recovered from libkentos.so by Ghidra 12.2
// address: 001ffbd4
// size: 228
// name: FUN_001ffbd4
// namespace: Global
// signature: undefined FUN_001ffbd4(void)
// generated: 2026-11-22 21:47:13


void FUN_001ffbd4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  void *__dest;
  byte *pbVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  
  pvVar1 = operator_new(0x48);
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  pbVar2 = (byte *)*param_4;
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  if ((*pbVar2 & 1) == 0) {
    *(undefined8 *)((long)pvVar1 + 0x30) = *(undefined8 *)(pbVar2 + 0x10);
    uVar4 = *(undefined8 *)pbVar2;
    *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(pbVar2 + 8);
    *(undefined8 *)((long)pvVar1 + 0x20) = uVar4;
    goto LAB_001ffc90;
  }
  __n = *(ulong *)(pbVar2 + 8);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001ffcb4 to 001ffcb7 has its CatchHandler @ 001ffcb8 */
    FUN_001d91e4();
  }
  __src = *(void **)(pbVar2 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x21);
    *(char *)((long)pvVar1 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_001ffc7c;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001ffc64 to 001ffc6b has its CatchHandler @ 001ffcb8 */
    __dest = operator_new(uVar3);
    *(ulong *)((long)pvVar1 + 0x28) = __n;
    *(void **)((long)pvVar1 + 0x30) = __dest;
    *(ulong *)((long)pvVar1 + 0x20) = uVar3 | 1;
LAB_001ffc7c:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_001ffc90:
  *(undefined1 *)((long)pvVar1 + 0x38) = 0;
  *(undefined8 *)((long)pvVar1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


