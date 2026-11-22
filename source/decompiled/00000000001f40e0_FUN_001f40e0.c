// Recovered from libkentos.so by Ghidra 12.2
// address: 001f40e0
// size: 300
// name: FUN_001f40e0
// namespace: Global
// signature: undefined FUN_001f40e0(void)
// generated: 2026-11-22 21:46:55


void FUN_001f40e0(ulong *param_1,undefined1 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    __n = 0x16;
    if (uVar3 == 0x16) goto LAB_001f4138;
LAB_001f411c:
    if ((bVar1 & 1) == 0) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)uVar3 * '\x02' + '\x02';
      goto LAB_001f41e0;
    }
    __dest = (void *)param_1[2];
  }
  else {
    uVar3 = param_1[1];
    __n = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar3 != __n) goto LAB_001f411c;
LAB_001f4138:
    if (__n == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(param_1);
    }
    if ((bVar1 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
    else {
      __src = (void *)param_1[2];
    }
    if (__n < 0x7fffffffffffffe7) {
      uVar2 = __n << 1;
      if (uVar2 <= __n + 1) {
        uVar2 = __n + 1;
      }
      if (uVar2 < 0x17) {
        uVar2 = 0x17;
      }
      else {
        uVar2 = uVar2 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar2 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar2);
    memcpy(__dest,__src,__n);
    if (__n != 0x16) {
      operator_delete(__src);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  param_1[1] = uVar3 + 1;
LAB_001f41e0:
  *(undefined1 *)((long)__dest + uVar3) = param_2;
  ((undefined1 *)((long)__dest + uVar3))[1] = 0;
  return;
}


