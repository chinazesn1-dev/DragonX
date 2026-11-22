// Recovered from libkentos.so by Ghidra 12.2
// address: 001d9400
// size: 400
// name: FUN_001d9400
// namespace: Global
// signature: undefined FUN_001d9400(void)
// generated: 2026-11-22 21:43:19


void FUN_001d9400(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[2] = 0;
  uVar4 = param_2[3] - param_2[2];
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* try { // try from 001d9578 to 001d957f has its CatchHandler @ 001d95bc */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1 + 2);
    }
                    /* try { // try from 001d9444 to 001d944b has its CatchHandler @ 001d95bc */
    pvVar1 = operator_new(uVar4);
    param_1[2] = pvVar1;
    param_1[3] = pvVar1;
    param_1[4] = (long)pvVar1 + uVar4;
    sVar2 = param_2[3] - (long)param_2[2];
    if (0 < (long)sVar2) {
      memcpy(pvVar1,(void *)param_2[2],sVar2);
      param_1[3] = (long)pvVar1 + sVar2;
    }
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar4 = param_2[6] - param_2[5];
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* try { // try from 001d9580 to 001d9587 has its CatchHandler @ 001d9594 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1 + 5);
    }
                    /* try { // try from 001d949c to 001d94a3 has its CatchHandler @ 001d9594 */
    pvVar1 = operator_new(uVar4);
    param_1[5] = pvVar1;
    param_1[6] = pvVar1;
    param_1[7] = (long)pvVar1 + uVar4;
    sVar2 = param_2[6] - (long)param_2[5];
    if (0 < (long)sVar2) {
      memcpy(pvVar1,(void *)param_2[5],sVar2);
      param_1[6] = (long)pvVar1 + sVar2;
    }
  }
  puVar3 = param_1 + 8;
  *puVar3 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    param_1[10] = param_2[10];
    uVar6 = param_2[8];
    param_1[9] = param_2[9];
    *puVar3 = uVar6;
    return;
  }
  uVar4 = param_2[9];
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 001d9588 to 001d958f has its CatchHandler @ 001d9590 */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(puVar3);
  }
  pvVar1 = (void *)param_2[10];
  if (uVar4 < 0x17) {
    __dest = (void *)((long)param_1 + 0x41);
    *(char *)puVar3 = (char)((int)uVar4 << 1);
    if (uVar4 == 0) goto LAB_001d955c;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001d9534 to 001d953b has its CatchHandler @ 001d9590 */
    __dest = operator_new(uVar5);
    param_1[9] = uVar4;
    param_1[10] = __dest;
    param_1[8] = uVar5 | 1;
  }
  memcpy(__dest,pvVar1,uVar4);
LAB_001d955c:
  *(undefined1 *)((long)__dest + uVar4) = 0;
  return;
}


