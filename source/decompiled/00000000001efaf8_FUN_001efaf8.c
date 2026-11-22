// Recovered from libkentos.so by Ghidra 12.2
// address: 001efaf8
// size: 348
// name: FUN_001efaf8
// namespace: Global
// signature: undefined FUN_001efaf8(void)
// generated: 2026-11-22 21:46:50


ulong * FUN_001efaf8(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  ulong uVar5;
  
  if (param_2 != 0) {
    bVar2 = (byte)*param_1;
    if ((bVar2 & 1) == 0) {
      uVar4 = (ulong)(bVar2 >> 1);
      uVar5 = 0x16;
      uVar3 = (ulong)bVar2;
    }
    else {
      uVar3 = *param_1;
      uVar4 = param_1[1];
      uVar5 = (uVar3 & 0xfffffffffffffffe) - 1;
    }
    if (uVar5 - uVar4 < param_2) {
      uVar3 = uVar4 + param_2;
      if (-uVar5 - 0x11 < uVar3 - uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(param_1);
      }
      if ((bVar2 & 1) == 0) {
        __src = (void *)((long)param_1 + 1);
      }
      else {
        __src = (void *)param_1[2];
      }
      if (uVar5 < 0x7fffffffffffffe7) {
        uVar1 = uVar5 << 1;
        if (uVar5 << 1 <= uVar3) {
          uVar1 = uVar3;
        }
        if (uVar1 < 0x17) {
          uVar3 = 0x17;
        }
        else {
          uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
        }
      }
      else {
        uVar3 = 0xffffffffffffffef;
      }
      __dest = operator_new(uVar3);
      if (uVar4 != 0) {
        memcpy(__dest,__src,uVar4);
      }
      if (uVar5 != 0x16) {
        operator_delete(__src);
      }
      uVar3 = uVar3 | 1;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar3;
    }
    if ((uVar3 & 1) == 0) {
      uVar3 = (long)param_1 + 1;
    }
    else {
      uVar3 = param_1[2];
    }
    memset((void *)(uVar3 + uVar4),param_3,param_2);
    uVar4 = uVar4 + param_2;
    if ((*param_1 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      param_1[1] = uVar4;
    }
    *(undefined1 *)(uVar3 + uVar4) = 0;
  }
  return param_1;
}


