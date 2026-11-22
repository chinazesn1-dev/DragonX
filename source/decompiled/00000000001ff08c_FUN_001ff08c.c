// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff08c
// size: 136
// name: FUN_001ff08c
// namespace: Global
// signature: undefined FUN_001ff08c(void)
// generated: 2026-11-22 21:47:12


undefined8 * FUN_001ff08c(undefined8 *param_1)

{
  void *__src;
  ulong __n;
  undefined8 *puVar1;
  void *__dest;
  
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 001ff10c to 001ff113 has its CatchHandler @ 001ff114 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(puVar1);
    }
                    /* try { // try from 001ff0c8 to 001ff0cf has its CatchHandler @ 001ff114 */
    __dest = operator_new(__n);
    *puVar1 = __dest;
    puVar1[1] = __dest;
    puVar1[2] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    puVar1[1] = (long)__dest + __n;
  }
  *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 3);
  return puVar1;
}


