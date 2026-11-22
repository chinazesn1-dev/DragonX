// Recovered from libkentos.so by Ghidra 12.2
// address: 001fefb0
// size: 200
// name: FUN_001fefb0
// namespace: Global
// signature: undefined FUN_001fefb0(void)
// generated: 2026-11-22 21:47:12


ulong * FUN_001fefb0(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((*param_1 & 1) == 0) {
    puVar1[2] = param_1[2];
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    return puVar1;
  }
  uVar2 = param_1[1];
  if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 001ff070 to 001ff077 has its CatchHandler @ 001ff078 */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(puVar1);
  }
  __src = (void *)param_1[2];
  if (uVar2 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar2 << 1);
    if (uVar2 == 0) goto LAB_001ff054;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001ff02c to 001ff033 has its CatchHandler @ 001ff078 */
    __dest = operator_new(uVar3);
    puVar1[1] = uVar2;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar3 | 1;
  }
  memcpy(__dest,__src,uVar2);
LAB_001ff054:
  *(undefined1 *)((long)__dest + uVar2) = 0;
  return puVar1;
}


