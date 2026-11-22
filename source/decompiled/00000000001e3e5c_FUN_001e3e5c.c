// Recovered from libkentos.so by Ghidra 12.2
// address: 001e3e5c
// size: 476
// name: FUN_001e3e5c
// namespace: Global
// signature: undefined FUN_001e3e5c(void)
// generated: 2026-11-22 21:45:53


void FUN_001e3e5c(long *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pcVar1 = operator_new__(0xf);
  uVar7 = s__getStrinandroid_getPackajava_ut_00479dc7._25_8_;
  pcVar1[8] = 'l';
  pcVar1[9] = '/';
  pcVar1[10] = 'U';
  pcVar1[0xb] = 'U';
  pcVar1[0xc] = 'I';
  pcVar1[0xd] = 'D';
  *(undefined8 *)pcVar1 = uVar7;
  pcVar1[0xe] = '\0';
                    /* try { // try from 001e3eb4 to 001e3ebf has its CatchHandler @ 001e4058 */
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,pcVar1);
  *pcVar1 = '\0';
  sVar3 = strlen(param_2);
  uVar4 = (**(code **)(*param_1 + 0x580))(param_1,sVar3 & 0xffffffff);
  (**(code **)(*param_1 + 0x680))(param_1,uVar4,0,sVar3 & 0xffffffff,param_2);
  pcVar1 = operator_new__(0x12);
  uVar8 = s_android_content_getContentResolv_00479920._216_8_;
  uVar7 = s_android_content_getContentResolv_00479920._208_8_;
  pcVar1[0x10] = 's';
  pcVar1[0x11] = '\0';
  *(undefined8 *)(pcVar1 + 8) = uVar8;
  *(undefined8 *)pcVar1 = uVar7;
                    /* try { // try from 001e3f2c to 001e3f33 has its CatchHandler @ 001e4050 */
  pcVar5 = operator_new__(0x15);
  uVar8 = s_android_content_getContentResolv_00479920._232_8_;
  uVar7 = s_android_content_getContentResolv_00479920._224_8_;
  pcVar5[0x10] = 'U';
  pcVar5[0x11] = 'I';
  pcVar5[0x12] = 'D';
  pcVar5[0x13] = ';';
  *(undefined8 *)(pcVar5 + 8) = uVar8;
  *(undefined8 *)pcVar5 = uVar7;
  pcVar5[0x14] = '\0';
                    /* try { // try from 001e3f5c to 001e3f6f has its CatchHandler @ 001e4044 */
  uVar6 = (**(code **)(*param_1 + 0x388))(param_1,uVar2,pcVar1,pcVar5);
  *pcVar5 = '\0';
  *pcVar1 = '\0';
  pcVar1 = operator_new__(9);
  uVar7 = s__getStrinandroid_getPackajava_ut_00479dc7._33_8_;
  pcVar1[8] = '\0';
  *(undefined8 *)pcVar1 = uVar7;
                    /* try { // try from 001e3f98 to 001e3f9f has its CatchHandler @ 001e403c */
  pcVar5 = operator_new__(0x15);
  uVar8 = s_android_content_getContentResolv_00479920._200_8_;
  uVar7 = s_android_content_getContentResolv_00479920._192_8_;
  pcVar5[0x10] = 'i';
  pcVar5[0x11] = 'n';
  pcVar5[0x12] = 'g';
  pcVar5[0x13] = ';';
  *(undefined8 *)(pcVar5 + 8) = uVar8;
  *(undefined8 *)pcVar5 = uVar7;
  pcVar5[0x14] = '\0';
                    /* try { // try from 001e3fc8 to 001e3fdb has its CatchHandler @ 001e4038 */
  uVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar2,pcVar1,pcVar5);
  *pcVar5 = '\0';
  *pcVar1 = '\0';
  uVar8 = FUN_001e3ba8(param_1,uVar2,uVar6,uVar4);
  uVar7 = FUN_001e3888(param_1,uVar8,uVar7);
                    /* WARNING: Could not recover jumptable at 0x001e4034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x548))(param_1,uVar7,0);
  return;
}


