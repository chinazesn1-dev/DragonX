// Recovered from libkentos.so by Ghidra 12.2
// address: 001f42f0
// size: 180
// name: FUN_001f42f0
// namespace: Global
// signature: undefined FUN_001f42f0(void)
// generated: 2026-11-22 21:46:55


long FUN_001f42f0(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  uint uVar3;
  size_t sVar4;
  void *__s1;
  char *__s;
  
  if (param_3 != 0) {
    __s = (char *)*param_2;
    sVar4 = strlen(__s);
    do {
      bVar2 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      if (sVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001f43a0 to 001f43a3 has its CatchHandler @ 001f43a4 */
        FUN_001f4080();
      }
      __n = sVar4;
      if (uVar1 <= sVar4) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_001f4368:
        uVar3 = (uint)(sVar4 < uVar1);
        if (uVar1 < sVar4) {
          uVar3 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar3 = memcmp(__s1,__s,__n);
        if (uVar3 == 0) goto LAB_001f4368;
      }
      if ((int)uVar3 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar3 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}


