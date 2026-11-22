// Recovered from libkentos.so by Ghidra 12.2
// address: 001fea50
// size: 244
// name: FUN_001fea50
// namespace: Global
// signature: undefined FUN_001fea50(void)
// generated: 2026-11-22 21:47:12


void FUN_001fea50(undefined8 *param_1,long param_2,byte *param_3)

{
  void *pvVar1;
  void *__dest;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  
  pvVar1 = operator_new(0x48);
  *param_1 = pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = (undefined8 *)((long)pvVar1 + 0x20);
  *puVar2 = 0;
  *(undefined8 *)((long)pvVar1 + 0x28) = 0;
  *(undefined8 *)((long)pvVar1 + 0x30) = 0;
  if ((*param_3 & 1) == 0) {
    *(undefined8 *)((long)pvVar1 + 0x30) = *(undefined8 *)(param_3 + 0x10);
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_3 + 8);
    *puVar2 = uVar4;
    goto LAB_001feb10;
  }
  __n = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 001feb3c to 001feb43 has its CatchHandler @ 001feb44 */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(puVar2);
  }
  __src = *(void **)(param_3 + 0x10);
  if (__n < 0x17) {
    __dest = (void *)((long)pvVar1 + 0x21);
    *(char *)((long)pvVar1 + 0x20) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_001feafc;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001feae4 to 001feaeb has its CatchHandler @ 001feb44 */
    __dest = operator_new(uVar3);
    *(ulong *)((long)pvVar1 + 0x28) = __n;
    *(void **)((long)pvVar1 + 0x30) = __dest;
    *(ulong *)((long)pvVar1 + 0x20) = uVar3 | 1;
LAB_001feafc:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_001feb10:
                    /* try { // try from 001feb18 to 001feb1b has its CatchHandler @ 001feb4c */
  FUN_001fe0f8((long)pvVar1 + 0x38,param_3 + 0x18);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


