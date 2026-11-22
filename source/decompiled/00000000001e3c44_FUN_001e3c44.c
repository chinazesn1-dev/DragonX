// Recovered from libkentos.so by Ghidra 12.2
// address: 001e3c44
// size: 240
// name: FUN_001e3c44
// namespace: Global
// signature: undefined FUN_001e3c44(void)
// generated: 2026-11-22 21:45:53


void FUN_001e3c44(long *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  pcVar2 = operator_new__(0x11);
  uVar1 = s_android_content_getContentResolv_00479920._168_8_;
  uVar5 = s_android_content_getContentResolv_00479920._160_8_;
  pcVar2[0x10] = '\0';
  *(undefined8 *)(pcVar2 + 8) = uVar1;
  *(undefined8 *)pcVar2 = uVar5;
                    /* try { // try from 001e3c7c to 001e3c87 has its CatchHandler @ 001e3d48 */
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1,pcVar2);
  *pcVar2 = '\0';
  puVar4 = operator_new__(6);
  *puVar4 = 0x45444f4d;
  *(undefined2 *)(puVar4 + 1) = 0x4c;
                    /* try { // try from 001e3cb0 to 001e3cb7 has its CatchHandler @ 001e3d40 */
  pcVar2 = operator_new__(0x13);
  uVar1 = s_android_content_getContentResolv_00479920._184_8_;
  uVar5 = s_android_content_getContentResolv_00479920._176_8_;
  pcVar2[0x10] = 'g';
  pcVar2[0x11] = ';';
  pcVar2[0x12] = '\0';
  *(undefined8 *)(pcVar2 + 8) = uVar1;
  *(undefined8 *)pcVar2 = uVar5;
                    /* try { // try from 001e3cdc to 001e3cef has its CatchHandler @ 001e3d34 */
  uVar5 = (**(code **)(*param_1 + 0x480))(param_1,uVar3,puVar4,pcVar2);
  *pcVar2 = '\0';
  *(undefined1 *)puVar4 = 0;
  uVar5 = (**(code **)(*param_1 + 0x488))(param_1,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x001e3d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x548))(param_1,uVar5,0);
  return;
}


