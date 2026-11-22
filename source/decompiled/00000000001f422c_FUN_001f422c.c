// Recovered from libkentos.so by Ghidra 12.2
// address: 001f422c
// size: 192
// name: FUN_001f422c
// namespace: Global
// signature: undefined FUN_001f422c(void)
// generated: 2026-11-22 21:46:55


undefined8 * FUN_001f422c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  void *__s1;
  undefined8 *puVar6;
  char *__s;
  
  puVar6 = (undefined8 *)(param_1 + 8);
  puVar4 = (undefined8 *)FUN_001f42f0(param_1,param_2,*puVar6,puVar6);
  if (puVar6 == puVar4) {
    return puVar6;
  }
  __s = (char *)*param_2;
  sVar5 = strlen(__s);
  bVar2 = *(byte *)(puVar4 + 4);
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = puVar4[5];
  }
  if (sVar5 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001f42e8 to 001f42eb has its CatchHandler @ 001f42ec */
    FUN_001f4080();
  }
  __n = sVar5;
  if (uVar1 <= sVar5) {
    __n = uVar1;
  }
  if (__n != 0) {
    __s1 = (void *)puVar4[6];
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)((long)puVar4 + 0x21);
    }
    uVar3 = memcmp(__s1,__s,__n);
    if (uVar3 != 0) goto LAB_001f42c4;
  }
  uVar3 = (uint)(sVar5 < uVar1);
  if (uVar1 < sVar5) {
    return puVar4;
  }
LAB_001f42c4:
  if ((int)uVar3 < 1) {
    return puVar4;
  }
  return puVar6;
}


