// Recovered from libkentos.so by Ghidra 12.2
// address: 001fe0f8
// size: 164
// name: FUN_001fe0f8
// namespace: Global
// signature: undefined FUN_001fe0f8(void)
// generated: 2026-11-22 21:47:11


void FUN_001fe0f8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = uVar1;
  switch(uVar1) {
  case 1:
    pvVar2 = (void *)FUN_001fe5d8(*(undefined8 *)(param_2 + 8));
    break;
  case 2:
    uVar3 = *(undefined8 *)(param_2 + 8);
    pvVar2 = operator_new(0x18);
                    /* try { // try from 001fe180 to 001fe187 has its CatchHandler @ 001fe19c */
    FUN_001feedc(pvVar2,uVar3);
    break;
  case 3:
    pvVar2 = (void *)FUN_001fefb0(*(undefined8 *)(param_2 + 8));
    break;
  case 4:
    pvVar2 = (void *)(ulong)(byte)param_2[8];
    break;
  case 5:
  case 6:
  case 7:
    pvVar2 = *(void **)(param_2 + 8);
    break;
  case 8:
    pvVar2 = (void *)FUN_001ff08c(*(undefined8 *)(param_2 + 8));
    break;
  default:
    goto switchD_001fe134_default;
  }
  *(void **)(param_1 + 8) = pvVar2;
switchD_001fe134_default:
  return;
}


