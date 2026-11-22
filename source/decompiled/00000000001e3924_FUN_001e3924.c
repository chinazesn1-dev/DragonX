// Recovered from libkentos.so by Ghidra 12.2
// address: 001e3924
// size: 580
// name: FUN_001e3924
// namespace: Global
// signature: undefined FUN_001e3924(void)
// generated: 2026-11-22 21:45:53


void FUN_001e3924(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pcVar4 = operator_new__(0x18);
  uVar11 = s_android_content_getContentResolv_00479920._0_8_;
  *(undefined8 *)(pcVar4 + 8) = s_android_content_getContentResolv_00479920._8_8_;
  *(undefined8 *)pcVar4 = uVar11;
  pcVar4[0x10] = 'C';
  pcVar4[0x11] = 'o';
  pcVar4[0x12] = 'n';
  pcVar4[0x13] = 't';
  pcVar4[0x14] = 'e';
  pcVar4[0x15] = 'x';
  pcVar4[0x16] = 't';
  pcVar4[0x17] = '\0';
                    /* try { // try from 001e3978 to 001e3983 has its CatchHandler @ 001e3b98 */
  uVar5 = (**(code **)(*param_1 + 0x30))(param_1,pcVar4);
  *pcVar4 = '\0';
  pcVar4 = operator_new__(0x13);
  uVar9 = s_android_content_getContentResolv_00479920._24_8_;
  uVar11 = s_android_content_getContentResolv_00479920._16_8_;
  pcVar4[0x10] = 'e';
  pcVar4[0x11] = 'r';
  *(undefined8 *)(pcVar4 + 8) = uVar9;
  *(undefined8 *)pcVar4 = uVar11;
  pcVar4[0x12] = '\0';
                    /* try { // try from 001e39b0 to 001e39b7 has its CatchHandler @ 001e3b90 */
  pcVar6 = operator_new__(0x24);
  uVar1 = s_android_content_getContentResolv_00479920._56_8_;
  uVar10 = s_android_content_getContentResolv_00479920._48_8_;
  uVar9 = s_android_content_getContentResolv_00479920._40_8_;
  uVar11 = s_android_content_getContentResolv_00479920._32_8_;
  pcVar6[0x20] = 'e';
  pcVar6[0x21] = 'r';
  pcVar6[0x22] = ';';
  pcVar6[0x23] = '\0';
  *(undefined8 *)(pcVar6 + 8) = uVar9;
  *(undefined8 *)pcVar6 = uVar11;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  *(undefined8 *)(pcVar6 + 0x10) = uVar10;
                    /* try { // try from 001e39e4 to 001e39f7 has its CatchHandler @ 001e3b84 */
  uVar7 = (**(code **)(*param_1 + 0x108))(param_1,uVar5,pcVar4,pcVar6);
  *pcVar6 = '\0';
  *pcVar4 = '\0';
  pcVar4 = operator_new__(0x21);
  uVar1 = s_android_content_getContentResolv_00479920._88_8_;
  uVar10 = s_android_content_getContentResolv_00479920._80_8_;
  uVar9 = s_android_content_getContentResolv_00479920._72_8_;
  uVar11 = s_android_content_getContentResolv_00479920._64_8_;
  pcVar4[0x20] = '\0';
  *(undefined8 *)(pcVar4 + 8) = uVar9;
  *(undefined8 *)pcVar4 = uVar11;
  *(undefined8 *)(pcVar4 + 0x18) = uVar1;
  *(undefined8 *)(pcVar4 + 0x10) = uVar10;
                    /* try { // try from 001e3a30 to 001e3a3b has its CatchHandler @ 001e3b7c */
  uVar8 = (**(code **)(*param_1 + 0x30))(param_1,pcVar4);
  *pcVar4 = '\0';
  pcVar4 = operator_new__(10);
  uVar11 = s__getStrinandroid_getPackajava_ut_00479dc7._1_8_;
  pcVar4[8] = 'g';
  pcVar4[9] = '\0';
  *(undefined8 *)pcVar4 = uVar11;
                    /* try { // try from 001e3a64 to 001e3a6b has its CatchHandler @ 001e3b74 */
  pcVar6 = operator_new__(0x48);
  uVar3 = s_android_content_getContentResolv_00479920._152_8_;
  uVar2 = s_android_content_getContentResolv_00479920._144_8_;
  uVar5 = s_android_content_getContentResolv_00479920._136_8_;
  uVar1 = s_android_content_getContentResolv_00479920._128_8_;
  uVar10 = s_android_content_getContentResolv_00479920._120_8_;
  uVar9 = s_android_content_getContentResolv_00479920._112_8_;
  uVar11 = s_android_content_getContentResolv_00479920._96_8_;
  *(undefined8 *)(pcVar6 + 8) = s_android_content_getContentResolv_00479920._104_8_;
  *(undefined8 *)pcVar6 = uVar11;
  *(undefined8 *)(pcVar6 + 0x18) = uVar10;
  *(undefined8 *)(pcVar6 + 0x10) = uVar9;
  *(undefined8 *)(pcVar6 + 0x28) = uVar5;
  *(undefined8 *)(pcVar6 + 0x20) = uVar1;
  *(undefined8 *)(pcVar6 + 0x38) = uVar3;
  *(undefined8 *)(pcVar6 + 0x30) = uVar2;
  pcVar6[0x40] = 'S';
  pcVar6[0x41] = 't';
  pcVar6[0x42] = 'r';
  pcVar6[0x43] = 'i';
  pcVar6[0x44] = 'n';
  pcVar6[0x45] = 'g';
  pcVar6[0x46] = ';';
  pcVar6[0x47] = '\0';
                    /* try { // try from 001e3ab4 to 001e3ac7 has its CatchHandler @ 001e3b68 */
  uVar9 = (**(code **)(*param_1 + 0x388))(param_1,uVar8,pcVar4,pcVar6);
  *pcVar6 = '\0';
  *pcVar4 = '\0';
  uVar10 = FUN_001e3888(param_1,param_2,uVar7);
  pcVar4 = operator_new__(0xb);
  uVar11 = s__getStrinandroid_getPackajava_ut_00479dc7._9_8_;
  pcVar4[8] = 'i';
  pcVar4[9] = 'd';
  pcVar4[10] = '\0';
  *(undefined8 *)pcVar4 = uVar11;
                    /* try { // try from 001e3b14 to 001e3b3b has its CatchHandler @ 001e3ba0 */
  uVar11 = (**(code **)(*param_1 + 0x538))(param_1,pcVar4);
  uVar11 = FUN_001e3ba8(param_1,uVar8,uVar9,uVar10,uVar11);
  *pcVar4 = '\0';
                    /* WARNING: Could not recover jumptable at 0x001e3b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x548))(param_1,uVar11,0);
  return;
}


