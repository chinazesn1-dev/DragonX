// Recovered from libkentos.so by Ghidra 12.2
// address: 001f7b30
// size: 688
// name: FUN_001f7b30
// namespace: Global
// signature: undefined FUN_001f7b30(void)
// generated: 2026-11-22 21:47:02


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001f7b30(char *param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  char *__s;
  void *pvVar10;
  ulong uVar11;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 001f7b58 to 001f7bff has its CatchHandler @ 001f7e40 */
  FUN_00222958(0x40000000,0xc);
  FUN_00222958(0x40000000,0xd);
  uStack_58 = _UNK_00479c88;
  local_60 = _DAT_00479c80;
  FUN_00222794(0x15,&local_60);
  uStack_58 = _UNK_00479c98;
  local_60 = _DAT_00479c90;
  FUN_00222794(0x16,&local_60);
  uVar2 = _UNK_00479a98;
  uVar11 = _DAT_00479a90;
  uStack_58 = _UNK_00479a98;
  local_60 = _DAT_00479a90;
  FUN_00222794(0x17,&local_60);
  uStack_58 = uVar2;
  local_60 = uVar11;
  FUN_00222794(5,&local_60);
  iVar3 = DAT_0082f904;
  __s = param_1;
  if (DAT_0082f904 != 0) {
    lVar9 = 0;
    do {
      iVar4 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar9),param_1);
      if (iVar4 == 0) {
        if (iVar3 == 2) {
          puVar8 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar9);
        }
        else if (iVar3 == 1) {
          puVar8 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar9);
        }
        else {
          puVar8 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar9);
        }
        __s = (char *)*puVar8;
        break;
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != 0xbc0);
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  sVar6 = strlen(__s);
  if (0xffffffffffffffef < sVar6) {
                    /* try { // try from 001f7dd4 to 001f7ddb has its CatchHandler @ 001f7de0 */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_98);
  }
  if (sVar6 < 0x17) {
    pvVar10 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar6 << 1));
    if (sVar6 == 0) goto LAB_001f7cd8;
  }
  else {
    uVar11 = sVar6 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001f7cb0 to 001f7cb7 has its CatchHandler @ 001f7de0 */
    pvVar10 = operator_new(uVar11);
    local_98 = uVar11 | 1;
    local_90 = sVar6;
    local_88 = pvVar10;
  }
  memcpy(pvVar10,__s,sVar6);
LAB_001f7cd8:
  *(undefined1 *)((long)pvVar10 + sVar6) = 0;
                    /* try { // try from 001f7cdc to 001f7cef has its CatchHandler @ 001f7e1c */
  puVar7 = (ulong *)FUN_001effa8(&local_98,"###act_",7);
  local_70 = (void *)puVar7[2];
  uStack_78 = puVar7[1];
  local_80 = *puVar7;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  sVar6 = strlen(param_1);
                    /* try { // try from 001f7d14 to 001f7d1f has its CatchHandler @ 001f7dfc */
  puVar7 = (ulong *)FUN_001effa8(&local_80,param_1,sVar6);
  local_50 = (void *)puVar7[2];
  uStack_58 = puVar7[1];
  local_60 = *puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  pvVar10 = (void *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pvVar10 = local_50;
  }
  local_80 = DAT_00479ed0;
                    /* try { // try from 001f7d7c to 001f7d83 has its CatchHandler @ 001f7de8 */
  uVar5 = FUN_00257168(pvVar10,&local_80);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 001f7d98 to 001f7da7 has its CatchHandler @ 001f7e3c */
  FUN_00222c2c(2);
  FUN_00222904(4);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5 & 1;
}


