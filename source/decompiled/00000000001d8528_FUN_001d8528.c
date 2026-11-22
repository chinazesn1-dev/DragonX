// Recovered from libkentos.so by Ghidra 12.2
// address: 001d8528
// size: 2436
// name: FUN_001d8528
// namespace: Global
// signature: undefined FUN_001d8528(void)
// generated: 2026-11-22 21:43:15


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d8528(void)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  ulong local_120;
  size_t local_118;
  void *local_110;
  ulong local_108;
  size_t local_100;
  void *local_f8;
  char local_f0;
  undefined7 uStack_ef;
  byte bStack_e8;
  char cStack_e7;
  undefined6 uStack_e6;
  byte bStack_e0;
  char cStack_df;
  char cStack_de;
  char cStack_dd;
  char cStack_dc;
  char cStack_db;
  char cStack_da;
  char cStack_d9;
  char cStack_d8;
  char cStack_d7;
  char cStack_d6;
  char cStack_d5;
  undefined4 uStack_d4;
  char cStack_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  char local_b8;
  undefined7 uStack_b7;
  char cStack_b0;
  char cStack_af;
  undefined6 uStack_ae;
  char cStack_a8;
  undefined1 uStack_a7;
  undefined8 local_a6;
  undefined2 local_9e;
  undefined1 local_9c;
  undefined1 local_98;
  undefined7 uStack_97;
  char cStack_90;
  char cStack_8f;
  undefined7 uStack_8e;
  undefined1 uStack_87;
  undefined1 local_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  local_98 = 0x6c;
  bVar7 = (byte)((ulong)DAT_00478c30 >> 8);
  bVar8 = (byte)((ulong)DAT_00478c30 >> 0x10);
  bVar14 = (byte)((ulong)_DAT_00478b70 >> 8);
  bVar9 = (byte)((ulong)DAT_00478c30 >> 0x18);
  bVar15 = (byte)((ulong)_DAT_00478b70 >> 0x10);
  bVar10 = (byte)((ulong)DAT_00478c30 >> 0x20);
  bVar16 = (byte)((ulong)_DAT_00478b70 >> 0x18);
  bVar11 = (byte)((ulong)DAT_00478c30 >> 0x28);
  bVar17 = (byte)((ulong)_DAT_00478b70 >> 0x20);
  bVar12 = (byte)((ulong)DAT_00478c30 >> 0x30);
  bVar18 = (byte)((ulong)_DAT_00478b70 >> 0x28);
  bVar13 = (byte)((ulong)DAT_00478c30 >> 0x38);
  bVar19 = (byte)((ulong)_DAT_00478b70 >> 0x30);
  bVar20 = (byte)((ulong)_DAT_00478b70 >> 0x38);
  bVar21 = (byte)((ulong)DAT_00478c38 >> 8);
  bVar22 = (byte)((ulong)DAT_00478c38 >> 0x10);
  bVar28 = (byte)((ulong)_DAT_00478b80 >> 8);
  bVar23 = (byte)((ulong)DAT_00478c38 >> 0x18);
  bVar29 = (byte)((ulong)_DAT_00478b80 >> 0x10);
  bVar24 = (byte)((ulong)DAT_00478c38 >> 0x20);
  bVar30 = (byte)((ulong)_DAT_00478b80 >> 0x18);
  bVar25 = (byte)((ulong)DAT_00478c38 >> 0x28);
  bVar31 = (byte)((ulong)_DAT_00478b80 >> 0x20);
  bVar26 = (byte)((ulong)DAT_00478c38 >> 0x30);
  bVar32 = (byte)((ulong)_DAT_00478b80 >> 0x28);
  bVar27 = (byte)((ulong)DAT_00478c38 >> 0x38);
  bVar33 = (byte)((ulong)_DAT_00478b80 >> 0x30);
  bVar34 = (byte)((ulong)_DAT_00478b80 >> 0x38);
  cStack_b0 = bVar34 + (bVar34 & 0x30) * -2;
  uStack_97 = CONCAT16(bVar13 + bVar19 + (bVar13 & bVar19) * -2 + 'N',
                       CONCAT15(bVar12 + bVar18 + (bVar12 & bVar18) * -2 + 'N',
                                CONCAT14(bVar11 + bVar17 + (bVar11 & bVar17) * -2 + 'N',
                                         CONCAT13(bVar10 + bVar16 + (bVar10 & bVar16) * -2 + 'N',
                                                  CONCAT12(bVar9 + bVar15 + (bVar9 & bVar15) * -2 +
                                                           'N',CONCAT11(bVar8 + bVar14 +
                                                                        (bVar8 & bVar14) * -2 + 'N',
                                                                        bVar7 + (byte)_DAT_00478b70
                                                                        + (bVar7 & (byte)
                                                  _DAT_00478b70) * -2 + 'N'))))));
  cStack_90 = bVar20 + (bVar20 & 0x67) * -2 + -0x4b;
  cStack_8f = (byte)_UNK_00478b78 + ((byte)_UNK_00478b78 & 0xf5) * -2 + 'C';
  uStack_8e = (undefined7)
              (CONCAT17((char)((ulong)_UNK_00478b78 >> 0x38) + 'N',
                        CONCAT16((char)((ulong)_UNK_00478b78 >> 0x30) + 'N',
                                 CONCAT15((char)((ulong)_UNK_00478b78 >> 0x28) + 'N',
                                          CONCAT14((char)((ulong)_UNK_00478b78 >> 0x20) + 'N',
                                                   CONCAT13((char)((ulong)_UNK_00478b78 >> 0x18) +
                                                            'N',CONCAT12((char)((ulong)_UNK_00478b78
                                                                               >> 0x10) + 'N',
                                                                         CONCAT11((char)((ulong)
                                                  _UNK_00478b78 >> 8) + 'N',cStack_8f))))))) >> 8);
  uStack_87 = 0x9d;
  uStack_a7 = 0x31;
  local_86 = 0x9e;
  uStack_85 = 0x9f;
  uStack_84 = 0xa0;
  uStack_83 = 0xa1;
  uStack_82 = 0xa2;
  uStack_81 = 0xa3;
  uStack_80 = 0xa4;
  uStack_7f = 0xa5;
  local_a6 = 0x3938373635343332;
  local_7e = 0xa6;
  local_7d = 0xa7;
  local_7c = 0xa8;
  local_7b = 0xa9;
  local_9e = 0x3b3a;
  local_7a = 0xaa;
  uStack_b7 = CONCAT16(bVar27 + bVar33 + (bVar27 & bVar33) * -2 + -0x30,
                       CONCAT15(bVar26 + bVar32 + (bVar26 & bVar32) * -2 + -0x30,
                                CONCAT14(bVar25 + bVar31 + (bVar25 & bVar31) * -2 + -0x30,
                                         CONCAT13(bVar24 + bVar30 + (bVar24 & bVar30) * -2 + -0x30,
                                                  CONCAT12(bVar23 + bVar29 + (bVar23 & bVar29) * -2
                                                           + -0x30,CONCAT11(bVar22 + bVar28 +
                                                                            (bVar22 & bVar28) * -2 +
                                                                            -0x30,bVar21 + (byte)
                                                  _DAT_00478b80 +
                                                  (bVar21 & (byte)_DAT_00478b80) * -2 + -0x30))))));
  cStack_af = (byte)_UNK_00478b88 + ((byte)_UNK_00478b88 & 0x69) * -2 + '9';
  cStack_a8 = (char)((ulong)_UNK_00478b88 >> 0x38) + -0x30;
  local_b8 = '0';
  uStack_ae = (undefined6)
              (CONCAT16((char)((ulong)_UNK_00478b88 >> 0x30) + -0x30,
                        CONCAT15((char)((ulong)_UNK_00478b88 >> 0x28) + -0x30,
                                 CONCAT14((char)((ulong)_UNK_00478b88 >> 0x20) + -0x30,
                                          CONCAT13((char)((ulong)_UNK_00478b88 >> 0x18) + -0x30,
                                                   CONCAT12((char)((ulong)_UNK_00478b88 >> 0x10) +
                                                            -0x30,CONCAT11((char)((ulong)
                                                  _UNK_00478b88 >> 8) + -0x30,cStack_af)))))) >> 8);
  local_79 = 0xab;
  local_9c = 0x3c;
  uVar2 = strtoul(&local_b8,(char **)0x0,0x10);
  bStack_e8 = (byte)_UNK_00478b98;
  bStack_e0 = (byte)DAT_00478c40;
  bVar7 = (byte)((ulong)_DAT_00478b90 >> 8);
  bVar8 = (byte)((ulong)_DAT_00478b90 >> 0x10);
  bVar21 = (byte)((ulong)_DAT_00478ba0 >> 8);
  bVar9 = (byte)((ulong)_DAT_00478b90 >> 0x18);
  bVar22 = (byte)((ulong)_DAT_00478ba0 >> 0x10);
  bVar10 = (byte)((ulong)_DAT_00478b90 >> 0x20);
  bVar23 = (byte)((ulong)_DAT_00478ba0 >> 0x18);
  bVar11 = (byte)((ulong)_DAT_00478b90 >> 0x28);
  bVar24 = (byte)((ulong)_DAT_00478ba0 >> 0x20);
  bVar12 = (byte)((ulong)_DAT_00478b90 >> 0x30);
  bVar25 = (byte)((ulong)_DAT_00478ba0 >> 0x28);
  bVar13 = (byte)((ulong)_DAT_00478b90 >> 0x38);
  bVar26 = (byte)((ulong)_DAT_00478ba0 >> 0x30);
  bVar27 = (byte)((ulong)_DAT_00478ba0 >> 0x38);
  bVar14 = (byte)((ulong)_UNK_00478b98 >> 8);
  bVar15 = (byte)((ulong)_UNK_00478b98 >> 0x10);
  bVar28 = (byte)((ulong)_UNK_00478ba8 >> 8);
  bVar16 = (byte)((ulong)_UNK_00478b98 >> 0x18);
  bVar29 = (byte)((ulong)_UNK_00478ba8 >> 0x10);
  bVar17 = (byte)((ulong)_UNK_00478b98 >> 0x20);
  bVar30 = (byte)((ulong)_UNK_00478ba8 >> 0x18);
  bVar18 = (byte)((ulong)_UNK_00478b98 >> 0x28);
  bVar31 = (byte)((ulong)_UNK_00478ba8 >> 0x20);
  bVar19 = (byte)((ulong)_UNK_00478b98 >> 0x30);
  bVar32 = (byte)((ulong)_UNK_00478ba8 >> 0x28);
  bVar20 = (byte)((ulong)_UNK_00478b98 >> 0x38);
  bVar33 = (byte)((ulong)_UNK_00478ba8 >> 0x30);
  bVar34 = (byte)((ulong)_UNK_00478ba8 >> 0x38);
  local_cf = 0x3d;
  uStack_ef = CONCAT16(bVar13 + bVar26 + (bVar13 & bVar26) * -2 + -10,
                       CONCAT15(bVar12 + bVar25 + (bVar12 & bVar25) * -2 + -10,
                                CONCAT14(bVar11 + bVar24 + (bVar11 & bVar24) * -2 + -10,
                                         CONCAT13(bVar10 + bVar23 + (bVar10 & bVar23) * -2 + -10,
                                                  CONCAT12(bVar9 + bVar22 + (bVar9 & bVar22) * -2 +
                                                           -10,CONCAT11(bVar8 + bVar21 +
                                                                        (bVar8 & bVar21) * -2 + -10,
                                                                        bVar7 + (byte)_DAT_00478ba0
                                                                        + (bVar7 & (byte)
                                                  _DAT_00478ba0) * -2 + -10))))));
  bStack_e8 = bStack_e8 + bVar27 + (bStack_e8 & bVar27) * -2 + -10;
  cStack_e7 = bVar14 + (byte)_UNK_00478ba8 + (bVar14 & (byte)_UNK_00478ba8) * -2 + -10;
  bStack_e0 = bStack_e0 + bVar34 + (bStack_e0 & bVar34) * -2 + -10;
  uStack_e6 = (undefined6)
              (CONCAT16(bVar20 + bVar33 + (bVar20 & bVar33) * -2 + -10,
                        CONCAT15(bVar19 + bVar32 + (bVar19 & bVar32) * -2 + -10,
                                 CONCAT14(bVar18 + bVar31 + (bVar18 & bVar31) * -2 + -10,
                                          CONCAT13(bVar17 + bVar30 + (bVar17 & bVar30) * -2 + -10,
                                                   CONCAT12(bVar16 + bVar29 + (bVar16 & bVar29) * -2
                                                            + -10,CONCAT11(bVar15 + bVar28 +
                                                                           (bVar15 & bVar28) * -2 +
                                                                           -10,cStack_e7)))))) >> 8)
  ;
  local_ce = 0x3e;
  local_cd = 0x3f;
  bVar7 = (byte)((ulong)DAT_00478c40 >> 8);
  bVar8 = (byte)((ulong)DAT_00478c40 >> 0x10);
  bVar14 = (byte)((ulong)_DAT_00478bb0 >> 8);
  bVar9 = (byte)((ulong)DAT_00478c40 >> 0x18);
  bVar15 = (byte)((ulong)_DAT_00478bb0 >> 0x10);
  bVar10 = (byte)((ulong)DAT_00478c40 >> 0x20);
  bVar16 = (byte)((ulong)_DAT_00478bb0 >> 0x18);
  bVar11 = (byte)((ulong)DAT_00478c40 >> 0x28);
  bVar17 = (byte)((ulong)_DAT_00478bb0 >> 0x20);
  bVar12 = (byte)((ulong)DAT_00478c40 >> 0x30);
  bVar18 = (byte)((ulong)_DAT_00478bb0 >> 0x28);
  bVar13 = (byte)((ulong)DAT_00478c40 >> 0x38);
  bVar19 = (byte)((ulong)_DAT_00478bb0 >> 0x30);
  local_cc = 0x40;
  local_cb = 0x41;
  cStack_df = bVar7 + (byte)_DAT_00478bb0 + (bVar7 & (byte)_DAT_00478bb0) * -2 + -10;
  cStack_de = bVar8 + bVar14 + (bVar8 & bVar14) * -2 + -10;
  cStack_dd = bVar9 + bVar15 + (bVar9 & bVar15) * -2 + -10;
  cStack_dc = bVar10 + bVar16 + (bVar10 & bVar16) * -2 + -10;
  cStack_db = bVar11 + bVar17 + (bVar11 & bVar17) * -2 + -10;
  cStack_da = bVar12 + bVar18 + (bVar12 & bVar18) * -2 + -10;
  cStack_d9 = bVar13 + bVar19 + (bVar13 & bVar19) * -2 + -10;
  cStack_d8 = (char)((ulong)_DAT_00478bb0 >> 0x38) + -10;
  cStack_d7 = (char)_UNK_00478bb8 + -10;
  cStack_d6 = (char)((ulong)_UNK_00478bb8 >> 8) + -10;
  cStack_d5 = (char)((ulong)_UNK_00478bb8 >> 0x10) + -10;
  uStack_d4 = CONCAT13((char)((ulong)_UNK_00478bb8 >> 0x30) + -10,
                       CONCAT12((char)((ulong)_UNK_00478bb8 >> 0x28) + -10,
                                CONCAT11((char)((ulong)_UNK_00478bb8 >> 0x20) + -10,
                                         (char)((ulong)_UNK_00478bb8 >> 0x18) + -10)));
  cStack_d0 = (char)((ulong)_UNK_00478bb8 >> 0x38) + -10;
  local_f0 = '0';
  local_ca = 0x42;
  local_108 = 0;
  local_100 = 0;
  local_c9 = 0x43;
  local_f8 = (void *)0x0;
  uStack_c8 = 0x44;
  uStack_c7 = 0x45;
  uStack_c6 = 0x46;
  uStack_c5 = 0x47;
  uStack_c4 = 0x48;
  uStack_c3 = 0x49;
  uStack_c2 = 0x4a;
  sVar3 = strlen(&local_f0);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_108);
  }
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_108 | 1);
    local_108 = CONCAT71(local_108._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_001d8b44;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_108 = uVar6 | 1;
    local_100 = sVar3;
    local_f8 = pvVar5;
LAB_001d8b44:
    memcpy(pvVar5,&local_f0,sVar3);
  }
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
                    /* try { // try from 001d8b58 to 001d8b6b has its CatchHandler @ 001d8ec0 */
  FUN_001d7a28(&local_98,uVar2,&local_108,1);
  if ((local_108 & 1) != 0) {
    operator_delete(local_f8);
  }
  local_f0 = '0';
  bVar7 = (byte)((ulong)DAT_00478c50 >> 8);
  bVar8 = (byte)((ulong)DAT_00478c50 >> 0x10);
  bVar14 = (byte)((ulong)_DAT_00478bd0 >> 8);
  bVar9 = (byte)((ulong)DAT_00478c50 >> 0x18);
  bVar15 = (byte)((ulong)_DAT_00478bd0 >> 0x10);
  bVar10 = (byte)((ulong)DAT_00478c50 >> 0x20);
  bVar16 = (byte)((ulong)_DAT_00478bd0 >> 0x18);
  bVar11 = (byte)((ulong)DAT_00478c50 >> 0x28);
  bVar17 = (byte)((ulong)_DAT_00478bd0 >> 0x20);
  bVar12 = (byte)((ulong)DAT_00478c50 >> 0x30);
  bVar18 = (byte)((ulong)_DAT_00478bd0 >> 0x28);
  bVar13 = (byte)((ulong)DAT_00478c50 >> 0x38);
  bVar19 = (byte)((ulong)_DAT_00478bd0 >> 0x30);
  bVar20 = (byte)((ulong)_DAT_00478bd0 >> 0x38);
  uStack_ef = CONCAT16(bVar13 + bVar19 + (bVar13 & bVar19) * -2 + -0xd,
                       CONCAT15(bVar12 + bVar18 + (bVar12 & bVar18) * -2 + -0xd,
                                CONCAT14(bVar11 + bVar17 + (bVar11 & bVar17) * -2 + -0xd,
                                         CONCAT13(bVar10 + bVar16 + (bVar10 & bVar16) * -2 + -0xd,
                                                  CONCAT12(bVar9 + bVar15 + (bVar9 & bVar15) * -2 +
                                                           -0xd,CONCAT11(bVar8 + bVar14 +
                                                                         (bVar8 & bVar14) * -2 +
                                                                         -0xd,bVar7 + (byte)
                                                  _DAT_00478bd0 + (bVar7 & (byte)_DAT_00478bd0) * -2
                                                  + -0xd))))));
  bStack_e8 = bVar20 + (bVar20 & 0x16) * -2 + '\t';
  cStack_e7 = (byte)_UNK_00478bd8 + ((byte)_UNK_00478bd8 & 0x59) * -2 + 'L';
  bStack_e0 = (char)((ulong)_UNK_00478bd8 >> 0x38) + -0xd;
  uStack_e6 = (undefined6)
              (CONCAT16((char)((ulong)_UNK_00478bd8 >> 0x30) + -0xd,
                        CONCAT15((char)((ulong)_UNK_00478bd8 >> 0x28) + -0xd,
                                 CONCAT14((char)((ulong)_UNK_00478bd8 >> 0x20) + -0xd,
                                          CONCAT13((char)((ulong)_UNK_00478bd8 >> 0x18) + -0xd,
                                                   CONCAT12((char)((ulong)_UNK_00478bd8 >> 0x10) +
                                                            -0xd,CONCAT11((char)((ulong)
                                                  _UNK_00478bd8 >> 8) + -0xd,cStack_e7)))))) >> 8);
  cStack_df = 0x4f;
  cStack_de = 0x50;
  local_98 = 0x6c;
  cStack_dd = 0x51;
  cStack_dc = 0x52;
  bVar14 = (byte)((ulong)DAT_00478c48 >> 8);
  bVar7 = (byte)((ulong)_DAT_00478bc0 >> 8);
  bVar15 = (byte)((ulong)DAT_00478c48 >> 0x10);
  bVar8 = (byte)((ulong)_DAT_00478bc0 >> 0x10);
  bVar16 = (byte)((ulong)DAT_00478c48 >> 0x18);
  bVar9 = (byte)((ulong)_DAT_00478bc0 >> 0x18);
  bVar17 = (byte)((ulong)DAT_00478c48 >> 0x20);
  bVar10 = (byte)((ulong)_DAT_00478bc0 >> 0x20);
  bVar18 = (byte)((ulong)DAT_00478c48 >> 0x28);
  bVar11 = (byte)((ulong)_DAT_00478bc0 >> 0x28);
  bVar19 = (byte)((ulong)DAT_00478c48 >> 0x30);
  bVar12 = (byte)((ulong)_DAT_00478bc0 >> 0x30);
  bVar20 = (byte)((ulong)DAT_00478c48 >> 0x38);
  bVar13 = (byte)((ulong)_DAT_00478bc0 >> 0x38);
  cStack_db = 0x53;
  uStack_97 = CONCAT16(bVar20 + bVar12 + (bVar20 & bVar12) * -2 + 'C',
                       CONCAT15(bVar19 + bVar11 + (bVar19 & bVar11) * -2 + 'C',
                                CONCAT14(bVar18 + bVar10 + (bVar18 & bVar10) * -2 + 'C',
                                         CONCAT13(bVar17 + bVar9 + (bVar17 & bVar9) * -2 + 'C',
                                                  CONCAT12(bVar16 + bVar8 + (bVar16 & bVar8) * -2 +
                                                           'C',CONCAT11(bVar15 + bVar7 +
                                                                        (bVar15 & bVar7) * -2 + 'C',
                                                                        bVar14 + (byte)_DAT_00478bc0
                                                                        + (bVar14 & (byte)
                                                  _DAT_00478bc0) * -2 + 'C'))))));
  cStack_90 = bVar13 + (bVar13 & 0xf) * -2 + 'R';
  cStack_8f = (byte)_UNK_00478bc8 + ((byte)_UNK_00478bc8 & 0x99) * -2 + -0x24;
  uStack_8e = (undefined7)
              (CONCAT17((char)((ulong)_UNK_00478bc8 >> 0x38) + 'C',
                        CONCAT16((char)((ulong)_UNK_00478bc8 >> 0x30) + 'C',
                                 CONCAT15((char)((ulong)_UNK_00478bc8 >> 0x28) + 'C',
                                          CONCAT14((char)((ulong)_UNK_00478bc8 >> 0x20) + 'C',
                                                   CONCAT13((char)((ulong)_UNK_00478bc8 >> 0x18) +
                                                            'C',CONCAT12((char)((ulong)_UNK_00478bc8
                                                                               >> 0x10) + 'C',
                                                                         CONCAT11((char)((ulong)
                                                  _UNK_00478bc8 >> 8) + 'C',cStack_8f))))))) >> 8);
  cStack_da = 0x54;
  cStack_d9 = 0x55;
  uStack_87 = 0x6f;
  cStack_d8 = 0x56;
  cStack_d7 = 0x57;
  local_86 = 0x70;
  cStack_d6 = 0x58;
  uStack_85 = 0x71;
  cStack_d5 = 0x59;
  uVar2 = strtoul(&local_f0,(char **)0x0,0x10);
  local_118 = 0;
  local_110 = (void *)0x0;
  local_b8 = s_1F_20_03_lx__lx_00478c58[0];
  uStack_b7 = s_1F_20_03_lx__lx_00478c58._1_7_;
  cStack_b0 = 0x20;
  cStack_af = 0x44;
  uStack_ae = 0x939291900035;
  local_120 = 0;
  sVar3 = strlen(&local_b8);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_120);
  }
  if (sVar3 < 0x17) {
    pvVar5 = (void *)((ulong)&local_120 | 1);
    local_120 = CONCAT71(local_120._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_001d8e40;
  }
  else {
    uVar6 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = operator_new(uVar6);
    local_120 = uVar6 | 1;
    local_118 = sVar3;
    local_110 = pvVar5;
  }
  memcpy(pvVar5,&local_b8,sVar3);
LAB_001d8e40:
  *(undefined1 *)((long)pvVar5 + sVar3) = 0;
                    /* try { // try from 001d8e44 to 001d8e57 has its CatchHandler @ 001d8eac */
  FUN_001d7a28(&local_98,uVar2,&local_120,1);
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


