// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9e08
// size: 300
// name: FUN_001f9e08
// namespace: Global
// signature: undefined FUN_001f9e08(void)
// generated: 2026-11-22 21:47:04


void FUN_001f9e08(undefined8 *param_1,undefined8 param_2,long *param_3,byte param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  *param_1 = param_2;
  memset(param_1 + 1,0,0x51);
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    param_1[0x10] = 0;
  }
  else if (param_3 == plVar1) {
    param_1[0x10] = param_1 + 0xc;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],param_1 + 0xc);
  }
  else {
                    /* try { // try from 001f9e60 to 001f9e8b has its CatchHandler @ 001f9f98 */
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[0x10] = uVar2;
  }
  param_1[0x14] = 0;
  uVar3 = param_1[5];
  *(byte *)(param_1 + 0x12) = param_4 & 1;
  *(undefined1 *)(param_1 + 0x13) = 9;
  if (uVar3 == param_1[6] * 0x40) {
    if ((long)(uVar3 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1 + 4);
    }
    if (uVar3 < 0x3fffffffffffffff) {
      uVar4 = param_1[6] << 7;
      uVar3 = uVar3 + 0x40 & 0xffffffffffffffc0;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
                    /* try { // try from 001f9ee0 to 001f9f33 has its CatchHandler @ 001f9f34 */
    FUN_001fc7d0(param_1 + 4,uVar3);
    uVar3 = param_1[5];
  }
  param_1[5] = uVar3 + 1;
  uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1[4] + uVar4) = *(ulong *)(param_1[4] + uVar4) | 1L << (uVar3 & 0x3f);
  return;
}


