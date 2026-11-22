// Recovered from libkentos.so by Ghidra 12.2
// address: 001d9094
// size: 336
// name: FUN_001d9094
// namespace: Global
// signature: undefined FUN_001d9094(void)
// generated: 2026-11-22 21:43:19


ulong * FUN_001d9094(ulong *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x16;
    if (0x16 < param_3) {
LAB_001d90f0:
      if (-uVar3 - 0x12 < param_3 - uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(param_1);
      }
      if ((uVar2 & 1) == 0) {
        pbVar1 = (byte *)((long)param_1 + 1);
      }
      else {
        pbVar1 = (byte *)param_1[2];
      }
      if (uVar3 < 0x7fffffffffffffe7) {
        uVar2 = uVar3 * 2;
        if (uVar3 * 2 <= param_3) {
          uVar2 = param_3;
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
      memcpy(__dest,param_2,param_3);
      if (uVar3 != 0x16) {
        operator_delete(pbVar1);
      }
      param_1[1] = param_3;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar2 | 1;
      *(undefined1 *)((long)__dest + param_3) = 0;
      return param_1;
    }
  }
  else {
    uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    if (uVar3 < param_3) goto LAB_001d90f0;
  }
  if ((uVar2 & 1) == 0) {
    pbVar1 = (byte *)((long)param_1 + 1);
  }
  else {
    pbVar1 = (byte *)param_1[2];
  }
  if (param_3 != 0) {
    memmove(pbVar1,param_2,param_3);
  }
  pbVar1[param_3] = 0;
  if ((*param_1 & 1) == 0) {
    *(byte *)param_1 = (byte)((int)param_3 << 1);
  }
  else {
    param_1[1] = param_3;
  }
  return param_1;
}


