// Recovered from libkentos.so by Ghidra 12.2
// address: 001effa8
// size: 384
// name: FUN_001effa8
// namespace: Global
// signature: undefined FUN_001effa8(void)
// generated: 2026-11-22 21:46:50


ulong * FUN_001effa8(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  undefined1 *puVar3;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = (byte)*param_1;
  if ((bVar2 & 1) == 0) {
    uVar4 = (ulong)(bVar2 >> 1);
    uVar6 = 0x16;
  }
  else {
    uVar4 = param_1[1];
    uVar6 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar6 - uVar4 < param_3) {
    uVar1 = uVar4 + param_3;
    if (-uVar6 - 0x12 < uVar1 - uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(param_1);
    }
    if ((bVar2 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
    else {
      __src = (void *)param_1[2];
    }
    if (uVar6 < 0x7fffffffffffffe7) {
      uVar5 = uVar6 << 1;
      if (uVar6 << 1 <= uVar1) {
        uVar5 = uVar1;
      }
      if (uVar5 < 0x17) {
        uVar5 = 0x17;
      }
      else {
        uVar5 = uVar5 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar5 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar5);
    if (uVar4 != 0) {
      memcpy(__dest,__src,uVar4);
    }
    memcpy((void *)((long)__dest + uVar4),param_2,param_3);
    if (uVar6 != 0x16) {
      operator_delete(__src);
    }
    *param_1 = uVar5 | 1;
    puVar3 = (undefined1 *)((long)__dest + uVar1);
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
  }
  else {
    if (param_3 == 0) {
      return param_1;
    }
    if ((bVar2 & 1) == 0) {
      uVar6 = (long)param_1 + 1;
    }
    else {
      uVar6 = param_1[2];
    }
    memcpy((void *)(uVar6 + uVar4),param_2,param_3);
    uVar4 = uVar4 + param_3;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar4 << 1);
      puVar3 = (undefined1 *)(uVar6 + uVar4);
    }
    else {
      param_1[1] = uVar4;
      puVar3 = (undefined1 *)(uVar6 + uVar4);
    }
  }
  *puVar3 = 0;
  return param_1;
}


