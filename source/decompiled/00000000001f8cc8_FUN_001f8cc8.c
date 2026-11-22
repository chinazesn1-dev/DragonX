// Recovered from libkentos.so by Ghidra 12.2
// address: 001f8cc8
// size: 240
// name: FUN_001f8cc8
// namespace: Global
// signature: undefined FUN_001f8cc8(void)
// generated: 2026-11-22 21:47:03


void FUN_001f8cc8(long param_1,undefined8 *param_2,long *param_3,byte param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  lconv *plVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else if (param_3 == plVar4) {
    *(long *)(param_1 + 0x20) = param_1;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],param_1);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x40) = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *(byte *)(param_1 + 0x48) = param_5 & 1;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 0;
  memset((void *)(param_1 + 0x58),0,0x48);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined1 **)(param_1 + 0xa0) = &DAT_00673b44;
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* try { // try from 001f8d74 to 001f8d77 has its CatchHandler @ 001f8e48 */
  plVar3 = localeconv();
  if ((byte *)plVar3->decimal_point == (byte *)0x0) {
    uVar5 = 0x2e;
  }
  else {
    uVar5 = (uint)(byte)*plVar3->decimal_point;
  }
  *(uint *)(param_1 + 0xc0) = uVar5;
  *(byte *)(param_1 + 200) = param_4 & 1;
                    /* try { // try from 001f8d9c to 001f8da3 has its CatchHandler @ 001f8db8 */
  uVar1 = FUN_001f8e4c(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}


