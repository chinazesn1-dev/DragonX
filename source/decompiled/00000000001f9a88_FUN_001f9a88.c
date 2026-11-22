// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9a88
// size: 404
// name: FUN_001f9a88
// namespace: Global
// signature: undefined FUN_001f9a88(void)
// generated: 2026-11-22 21:47:04


int FUN_001f9a88(long *param_1)

{
  ios_base *this;
  undefined1 *puVar1;
  byte *pbVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  void *__src;
  size_t __n;
  void *__dest;
  ulong uVar6;
  
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\0') {
    plVar3 = (long *)param_1[1];
    pbVar2 = (byte *)plVar3[3];
    if (pbVar2 == (byte *)plVar3[4]) {
      uVar5 = (**(code **)(*plVar3 + 0x50))();
      if (uVar5 == 0xffffffff) {
        this = (ios_base *)(*param_1 + *(long *)(*(long *)*param_1 + -0x18));
        std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 2);
      }
    }
    else {
      plVar3[3] = (long)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    *(uint *)((long)param_1 + 0x14) = uVar5;
  }
  else {
    uVar5 = *(uint *)((long)param_1 + 0x14);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (uVar5 == 0xffffffff) {
    return -1;
  }
  puVar1 = (undefined1 *)param_1[8];
  if (puVar1 < (undefined1 *)param_1[9]) {
    *puVar1 = (char)uVar5;
    param_1[8] = param_1[8] + 1;
    goto LAB_001f9b98;
  }
  __src = (void *)param_1[7];
  __n = (long)puVar1 - (long)__src;
  uVar6 = __n + 1;
  if ((long)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001d9034();
  }
  uVar4 = param_1[9] - (long)__src;
  if (uVar4 < 0x3fffffffffffffff) {
    uVar4 = uVar4 * 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) goto LAB_001f9b54;
    __dest = (void *)0x0;
  }
  else {
    uVar6 = 0x7fffffffffffffff;
LAB_001f9b54:
    __dest = operator_new(uVar6);
  }
  *(undefined1 *)((long)__dest + __n) = (char)uVar5;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  param_1[7] = (long)__dest;
  param_1[8] = (long)((undefined1 *)((long)__dest + __n) + 1);
  param_1[9] = (long)__dest + uVar6;
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_001f9b98:
  if (*(int *)((long)param_1 + 0x14) == 10) {
    param_1[5] = 0;
    param_1[6] = param_1[6] + 1;
  }
  return *(int *)((long)param_1 + 0x14);
}


