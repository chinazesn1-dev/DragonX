// Recovered from libkentos.so by Ghidra 12.2
// address: 001f60e4
// size: 1496
// name: FUN_001f60e4
// namespace: Global
// signature: undefined FUN_001f60e4(void)
// generated: 2026-11-22 21:46:57


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_001f60e4(float param_1,undefined8 param_2,uint *param_3,long param_4,int param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  size_t __n;
  void *pvVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [12];
  byte local_f0 [8];
  ulong local_e8;
  void *local_e0;
  ulong local_d8;
  size_t local_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (0.0 < param_1) {
    local_a0 = (ulong)(uint)param_1 << 0x20;
    FUN_00257bc0(&local_a0);
  }
  local_a0 = DAT_00479eb8;
                    /* try { // try from 001f614c to 001f6327 has its CatchHandler @ 001f66d0 */
  FUN_00222ac0(0xb,&local_a0);
  FUN_00222958(0x40000000,0xc);
  FUN_00222958(0x40000000,0xd);
  FUN_00222958(0x40000000,10);
  FUN_00222958(0x40000000,9);
  local_a0 = NEON_fmov(0x40400000,4);
  FUN_00222ac0(2,&local_a0);
  local_a0 = DAT_00479ec0;
  FUN_00222ac0(0x18,&local_a0);
  uVar3 = _UNK_00479ad8;
  uVar2 = _DAT_00479ad0;
  uStack_98 = _UNK_00479ad8;
  local_a0 = _DAT_00479ad0;
  FUN_00222794(7,&local_a0);
  uVar4 = _UNK_00479c38;
  uVar7 = _DAT_00479c30;
  uStack_98 = _UNK_00479c38;
  local_a0 = _DAT_00479c30;
  FUN_00222794(8,&local_a0);
  uStack_98 = uVar4;
  local_a0 = uVar7;
  FUN_00222794(9,&local_a0);
  uStack_98 = uVar3;
  local_a0 = uVar2;
  FUN_00222794(0x15,&local_a0);
  uStack_98 = uVar4;
  local_a0 = uVar7;
  FUN_00222794(0x16,&local_a0);
  uStack_98 = _UNK_00479a98;
  local_a0 = _DAT_00479a90;
  FUN_00222794(5,&local_a0);
  uStack_98 = _UNK_00479c48;
  local_a0 = _DAT_00479c40;
  FUN_00222794(4,&local_a0);
  uStack_98 = _UNK_00479c58;
  local_a0 = _DAT_00479c50;
  FUN_00222794(0x18,&local_a0);
  uStack_98 = _UNK_00479c68;
  local_a0 = _DAT_00479c60;
  FUN_00222794(0x19,&local_a0);
  uStack_98 = _UNK_00479c78;
  local_a0 = _DAT_00479c70;
  FUN_00222794(0x1a,&local_a0);
                    /* try { // try from 001f6328 to 001f63cf has its CatchHandler @ 001f66c8 */
  FUN_00222150(DAT_0047a1d4);
  FUN_00233774(param_2);
  iVar5 = DAT_0082f904;
  pcVar13 = *(char **)(param_4 + (long)(int)*param_3 * 8);
  if (((param_6 & 1) != 0) && (DAT_0082f904 != 0)) {
    lVar12 = 0;
    do {
      iVar6 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar12),pcVar13);
      if (iVar6 == 0) {
        if (iVar5 == 2) {
          puVar11 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar12);
        }
        else if (iVar5 == 1) {
          puVar11 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar12);
        }
        else {
          puVar11 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar12);
        }
        pcVar13 = (char *)*puVar11;
        break;
      }
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != 0xbc0);
  }
  uVar7 = FUN_00257c4c(&DAT_0048452e,pcVar13,0);
  uVar2 = DAT_00479ec8;
  uVar15 = 0;
  if ((uVar7 & 1) != 0) {
    if (param_5 < 1) {
      uVar15 = 0;
    }
    else {
      uVar7 = 0;
      uVar15 = 0;
      do {
        iVar5 = DAT_0082f904;
        pcVar13 = *(char **)(param_4 + uVar7 * 8);
        if (((param_6 & 1) != 0) && (DAT_0082f904 != 0)) {
          lVar12 = 0;
          do {
            iVar6 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar12),pcVar13);
            if (iVar6 == 0) {
              if (iVar5 == 2) {
                puVar11 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar12);
              }
              else if (iVar5 == 1) {
                puVar11 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar12);
              }
              else {
                puVar11 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar12);
              }
              pcVar13 = (char *)*puVar11;
              break;
            }
            lVar12 = lVar12 + 0x20;
          } while (lVar12 != 0xbc0);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = (void *)0x0;
        __n = strlen(pcVar13);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 001f66b0 to 001f66b7 has its CatchHandler @ 001f66bc */
                    /* WARNING: Subroutine does not return */
          FUN_001d91e4(&local_d8);
        }
        if (__n < 0x17) {
          local_d8 = CONCAT71(local_d8._1_7_,(char)((int)__n << 1));
          pvVar8 = (void *)((ulong)&local_d8 | 1);
          if (__n != 0) goto LAB_001f6544;
        }
        else {
          uVar14 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001f6510 to 001f6517 has its CatchHandler @ 001f66dc */
          pvVar8 = operator_new(uVar14);
          local_d8 = uVar14 | 1;
          local_d0 = __n;
          local_c8 = pvVar8;
LAB_001f6544:
          memcpy(pvVar8,pcVar13,__n);
        }
        *(undefined1 *)((long)pvVar8 + __n) = 0;
                    /* try { // try from 001f6558 to 001f656b has its CatchHandler @ 001f674c */
        auVar16 = FUN_001effa8(&local_d8,&DAT_00484532,3);
        puVar9 = auVar16._0_8_;
        local_b0 = (void *)puVar9[2];
        uStack_b8 = puVar9[1];
        local_c0 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
                    /* try { // try from 001f6584 to 001f658f has its CatchHandler @ 001f672c */
        std::__ndk1::to_string((__ndk1 *)(uVar7 & 0xffffffff),auVar16._8_4_);
        uVar14 = (ulong)(local_f0[0] >> 1);
        pvVar8 = (void *)((ulong)local_f0 | 1);
        if ((local_f0[0] & 1) != 0) {
          uVar14 = local_e8;
          pvVar8 = local_e0;
        }
                    /* try { // try from 001f65a8 to 001f65af has its CatchHandler @ 001f66f8 */
        puVar9 = (ulong *)FUN_001effa8(&local_c0,pvVar8,uVar14);
        local_90 = (void *)puVar9[2];
        uStack_98 = puVar9[1];
        local_a0 = *puVar9;
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        if ((local_f0[0] & 1) != 0) {
          operator_delete(local_e0);
        }
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8 & 1) != 0) {
          operator_delete(local_c8);
        }
        uVar14 = (ulong)*param_3;
        local_c0 = uVar2;
        pvVar8 = (void *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          pvVar8 = local_90;
        }
                    /* try { // try from 001f660c to 001f6617 has its CatchHandler @ 001f66e4 */
        uVar10 = FUN_002582ac(pvVar8,uVar7 == uVar14,0,&local_c0);
        if ((uVar10 & 1) != 0) {
          if (uVar7 != uVar14) {
            uVar15 = 1;
          }
          *param_3 = (uint)uVar7;
        }
        if (uVar7 == uVar14) {
                    /* try { // try from 001f6630 to 001f6633 has its CatchHandler @ 001f66d8 */
          FUN_002335b4();
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)param_5);
    }
                    /* try { // try from 001f6658 to 001f6667 has its CatchHandler @ 001f66c8 */
    thunk_FUN_00234da0();
  }
  FUN_00233a84();
                    /* try { // try from 001f6668 to 001f6677 has its CatchHandler @ 001f66c4 */
  FUN_00222c2c(7);
  FUN_00222904(10);
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}


