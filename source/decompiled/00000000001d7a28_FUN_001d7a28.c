// Recovered from libkentos.so by Ghidra 12.2
// address: 001d7a28
// size: 2092
// name: FUN_001d7a28
// namespace: Global
// signature: undefined FUN_001d7a28(void)
// generated: 2026-11-22 21:43:14


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d7a28(undefined8 param_1,long param_2,ulong *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *__src;
  void *__dest;
  ulong uVar9;
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
  char cVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  long local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  byte bStack_c8;
  undefined7 uStack_c7;
  byte bStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte local_b0;
  undefined7 uStack_af;
  byte bStack_a8;
  undefined7 uStack_a7;
  byte local_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  char cStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined6 uStack_77;
  undefined2 uStack_71;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uStack_148 = 0;
  local_140 = (void *)0x0;
  local_150 = 0;
  local_d8 = param_2;
  if ((*param_3 & 1) == 0) {
    local_140 = (void *)param_3[2];
    uStack_148 = param_3[1];
    local_150 = *param_3;
  }
  else {
    uVar2 = param_3[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_150);
    }
    __src = (void *)param_3[2];
    if (uVar2 < 0x17) {
      __dest = (void *)((ulong)&local_150 | 1);
      local_150 = (ulong)(byte)((int)uVar2 << 1);
      if (uVar2 != 0) goto LAB_001d7ad8;
    }
    else {
      uVar9 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar9);
      local_150 = uVar9 | 1;
      uStack_148 = uVar2;
      local_140 = __dest;
LAB_001d7ad8:
      memcpy(__dest,__src,uVar2);
    }
    *(undefined1 *)((long)__dest + uVar2) = 0;
  }
                    /* try { // try from 001d7aec to 001d7b03 has its CatchHandler @ 001d8264 */
  FUN_0021f518(&local_130,param_1,param_2,&local_150,1);
  if ((local_150 & 1) != 0) {
    operator_delete(local_140);
  }
  lVar4 = DAT_0082f008;
  plVar7 = DAT_0082f020;
  if (DAT_0082f020 == DAT_0082f028) {
LAB_001d7b50:
    if (plVar7 != DAT_0082f028) {
      plVar7 = DAT_0082f020;
      if (DAT_0082f020 != DAT_0082f028) {
        do {
          if (*plVar7 == local_d8) goto LAB_001d7bf8;
          plVar7 = plVar7 + 1;
        } while (DAT_0082f028 != plVar7);
        plVar7 = DAT_0082f028;
      }
LAB_001d7bf8:
      lVar8 = (long)plVar7 - (long)DAT_0082f020 >> 3;
      puVar5 = (undefined8 *)(DAT_0082f008 + lVar8 * 0x58);
      uStack_128 = puVar5[1];
      local_130 = *puVar5;
      if (&local_130 != puVar5) {
        lVar6 = DAT_0082f008 + lVar8 * 0x58;
                    /* try { // try from 001d7c34 to 001d7c7b has its CatchHandler @ 001d8260 */
        FUN_001d8efc(auStack_120,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
        lVar6 = lVar4 + lVar8 * 0x58;
        FUN_001d8efc(auStack_108,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30));
        lVar4 = lVar4 + lVar8 * 0x58;
        uVar2 = (ulong)(*(byte *)(lVar4 + 0x40) >> 1);
        lVar8 = lVar4 + 0x41;
        if ((*(byte *)(lVar4 + 0x40) & 1) != 0) {
          uVar2 = *(ulong *)(lVar4 + 0x48);
          lVar8 = *(long *)(lVar4 + 0x50);
        }
        FUN_001d9094(auStack_f0,lVar8,uVar2);
      }
      goto LAB_001d7c7c;
    }
  }
  else {
    do {
      if (*plVar7 == local_d8) goto LAB_001d7b50;
      plVar7 = plVar7 + 1;
    } while (DAT_0082f028 != plVar7);
  }
  if (DAT_0082f010 == DAT_0082f018) {
    FUN_001d9244(&DAT_0082f008,&local_130);
  }
  else {
                    /* try { // try from 001d7b9c to 001d7bef has its CatchHandler @ 001d8280 */
    FUN_001d9400(DAT_0082f010,&local_130);
    DAT_0082f010 = DAT_0082f010 + 0x58;
  }
  if (DAT_0082f028 == DAT_0082f030) {
    FUN_001d95dc(&DAT_0082f020,&local_d8);
  }
  else {
    *DAT_0082f028 = local_d8;
    DAT_0082f028 = DAT_0082f028 + 1;
  }
LAB_001d7c7c:
                    /* try { // try from 001d7c7c to 001d7c97 has its CatchHandler @ 001d8280 */
  uVar2 = FUN_0021f678(&local_130);
  if ((uVar2 & 1) == 0) {
    local_80 = 0x50;
    bStack_c8 = (byte)_UNK_004789e8;
    bStack_b8 = (byte)_UNK_004789f8;
    bStack_c0 = (byte)_DAT_004789f0;
    bStack_a8 = (byte)_UNK_00478a08;
    local_b0 = (byte)_DAT_00478a00;
    local_d0 = 0x46;
    bVar10 = (byte)_DAT_004789d0;
    bVar26 = (byte)((ulong)DAT_00478be0 >> 8);
    bVar11 = (byte)((ulong)_DAT_004789d0 >> 8);
    bVar27 = (byte)((ulong)DAT_00478be0 >> 0x10);
    bVar12 = (byte)((ulong)_DAT_004789d0 >> 0x10);
    bVar28 = (byte)((ulong)DAT_00478be0 >> 0x18);
    bVar13 = (byte)((ulong)_DAT_004789d0 >> 0x18);
    bVar29 = (byte)((ulong)DAT_00478be0 >> 0x20);
    bVar14 = (byte)((ulong)_DAT_004789d0 >> 0x20);
    bVar30 = (byte)((ulong)DAT_00478be0 >> 0x28);
    bVar15 = (byte)((ulong)_DAT_004789d0 >> 0x28);
    bVar31 = (byte)((ulong)DAT_00478be0 >> 0x30);
    bVar16 = (byte)((ulong)_DAT_004789d0 >> 0x30);
    bVar32 = (byte)((ulong)DAT_00478be0 >> 0x38);
    bVar17 = (byte)((ulong)_DAT_004789d0 >> 0x38);
    bVar18 = (byte)_UNK_004789d8;
    bVar19 = (byte)((ulong)_UNK_004789d8 >> 8);
    bVar20 = (byte)((ulong)_UNK_004789d8 >> 0x10);
    bVar21 = (byte)((ulong)_UNK_004789d8 >> 0x18);
    bVar22 = (byte)((ulong)_UNK_004789d8 >> 0x20);
    bVar23 = (byte)((ulong)_UNK_004789d8 >> 0x28);
    bVar24 = (byte)((ulong)_UNK_004789d8 >> 0x30);
    cVar25 = (char)((ulong)_UNK_004789d8 >> 0x38);
    bVar33 = (byte)((ulong)_DAT_004789e0 >> 8);
    bVar34 = (byte)((ulong)_DAT_004789e0 >> 0x10);
    bVar75 = (byte)((ulong)_DAT_00478a10 >> 8);
    bVar35 = (byte)((ulong)_DAT_004789e0 >> 0x18);
    bVar76 = (byte)((ulong)_DAT_00478a10 >> 0x10);
    bVar36 = (byte)((ulong)_DAT_004789e0 >> 0x20);
    bVar77 = (byte)((ulong)_DAT_00478a10 >> 0x18);
    bVar37 = (byte)((ulong)_DAT_004789e0 >> 0x28);
    bVar78 = (byte)((ulong)_DAT_00478a10 >> 0x20);
    bVar38 = (byte)((ulong)_DAT_004789e0 >> 0x30);
    bVar79 = (byte)((ulong)_DAT_00478a10 >> 0x28);
    bVar39 = (byte)((ulong)_DAT_004789e0 >> 0x38);
    bVar80 = (byte)((ulong)_DAT_00478a10 >> 0x30);
    bVar81 = (byte)((ulong)_DAT_00478a10 >> 0x38);
    bVar40 = (byte)((ulong)_UNK_004789e8 >> 8);
    bVar41 = (byte)((ulong)_UNK_004789e8 >> 0x10);
    bVar82 = (byte)((ulong)_UNK_00478a18 >> 8);
    bVar42 = (byte)((ulong)_UNK_004789e8 >> 0x18);
    bVar83 = (byte)((ulong)_UNK_00478a18 >> 0x10);
    bVar43 = (byte)((ulong)_UNK_004789e8 >> 0x20);
    bVar84 = (byte)((ulong)_UNK_00478a18 >> 0x18);
    bVar44 = (byte)((ulong)_UNK_004789e8 >> 0x28);
    bVar85 = (byte)((ulong)_UNK_00478a18 >> 0x20);
    bVar45 = (byte)((ulong)_UNK_004789e8 >> 0x30);
    bVar86 = (byte)((ulong)_UNK_00478a18 >> 0x28);
    bVar46 = (byte)((ulong)_UNK_004789e8 >> 0x38);
    bVar87 = (byte)((ulong)_UNK_00478a18 >> 0x30);
    bVar88 = (byte)((ulong)_UNK_00478a18 >> 0x38);
    bVar47 = (byte)((ulong)_DAT_004789f0 >> 8);
    bVar48 = (byte)((ulong)_DAT_004789f0 >> 0x10);
    bVar89 = (byte)((ulong)_DAT_00478a20 >> 8);
    bVar49 = (byte)((ulong)_DAT_004789f0 >> 0x18);
    bVar90 = (byte)((ulong)_DAT_00478a20 >> 0x10);
    bVar50 = (byte)((ulong)_DAT_004789f0 >> 0x20);
    bVar91 = (byte)((ulong)_DAT_00478a20 >> 0x18);
    bVar51 = (byte)((ulong)_DAT_004789f0 >> 0x28);
    bVar92 = (byte)((ulong)_DAT_00478a20 >> 0x20);
    bVar52 = (byte)((ulong)_DAT_004789f0 >> 0x30);
    bVar93 = (byte)((ulong)_DAT_00478a20 >> 0x28);
    bVar53 = (byte)((ulong)_DAT_004789f0 >> 0x38);
    bVar94 = (byte)((ulong)_DAT_00478a20 >> 0x30);
    bVar95 = (byte)((ulong)_DAT_00478a20 >> 0x38);
    bVar54 = (byte)((ulong)_UNK_004789f8 >> 8);
    bVar55 = (byte)((ulong)_UNK_004789f8 >> 0x10);
    bVar96 = (byte)((ulong)_UNK_00478a28 >> 8);
    bVar56 = (byte)((ulong)_UNK_004789f8 >> 0x18);
    bVar97 = (byte)((ulong)_UNK_00478a28 >> 0x10);
    bVar57 = (byte)((ulong)_UNK_004789f8 >> 0x20);
    bVar98 = (byte)((ulong)_UNK_00478a28 >> 0x18);
    bVar58 = (byte)((ulong)_UNK_004789f8 >> 0x28);
    bVar99 = (byte)((ulong)_UNK_00478a28 >> 0x20);
    bVar59 = (byte)((ulong)_UNK_004789f8 >> 0x30);
    bVar100 = (byte)((ulong)_UNK_00478a28 >> 0x28);
    bVar60 = (byte)((ulong)_UNK_004789f8 >> 0x38);
    bVar101 = (byte)((ulong)_UNK_00478a28 >> 0x30);
    bVar102 = (byte)((ulong)_UNK_00478a28 >> 0x38);
    bVar61 = (byte)((ulong)_DAT_00478a00 >> 8);
    bVar62 = (byte)((ulong)_DAT_00478a00 >> 0x10);
    bVar63 = (byte)((ulong)_DAT_00478a00 >> 0x18);
    bVar64 = (byte)((ulong)_DAT_00478a00 >> 0x20);
    bVar65 = (byte)((ulong)_DAT_00478a00 >> 0x28);
    bVar66 = (byte)((ulong)_DAT_00478a00 >> 0x30);
    bVar67 = (byte)((ulong)_DAT_00478a00 >> 0x38);
    bVar68 = (byte)((ulong)_UNK_00478a08 >> 8);
    bVar69 = (byte)((ulong)_UNK_00478a08 >> 0x10);
    bVar70 = (byte)((ulong)_UNK_00478a08 >> 0x18);
    bVar71 = (byte)((ulong)_UNK_00478a08 >> 0x20);
    bVar72 = (byte)((ulong)_UNK_00478a08 >> 0x28);
    bVar73 = (byte)((ulong)_UNK_00478a08 >> 0x30);
    bVar74 = (byte)((ulong)_UNK_00478a08 >> 0x38);
    uStack_7f = CONCAT16(bVar32 + bVar16 + (bVar32 & bVar16) * -2 + '>',
                         CONCAT15(bVar31 + bVar15 + (bVar31 & bVar15) * -2 + '>',
                                  CONCAT14(bVar30 + bVar14 + (bVar30 & bVar14) * -2 + '>',
                                           CONCAT13(bVar29 + bVar13 + (bVar29 & bVar13) * -2 + '>',
                                                    CONCAT12(bVar28 + bVar12 +
                                                             (bVar28 & bVar12) * -2 + '>',
                                                             CONCAT11(bVar27 + bVar11 +
                                                                      (bVar27 & bVar11) * -2 + '>',
                                                                      bVar26 + bVar10 +
                                                                      (bVar26 & bVar10) * -2 + '>'))
                                                   ))));
    cStack_78 = bVar17 + (bVar17 & 0x74) * -2 + -0x4e;
    uStack_77 = CONCAT15(bVar23 + 0x3e,
                         CONCAT14(bVar22 + 0x3e,
                                  CONCAT13(bVar21 + 0x3e,
                                           CONCAT12(bVar20 + 0x3e,
                                                    CONCAT11(bVar19 + 0x3e,bVar18 + 0x3e)))));
    uStack_cf = CONCAT16(bVar39 + bVar80 + (bVar39 & bVar80) * -2 + '\x1e',
                         CONCAT15(bVar38 + bVar79 + (bVar38 & bVar79) * -2 + '\x1e',
                                  CONCAT14(bVar37 + bVar78 + (bVar37 & bVar78) * -2 + '\x1e',
                                           CONCAT13(bVar36 + bVar77 + (bVar36 & bVar77) * -2 +
                                                    '\x1e',CONCAT12(bVar35 + bVar76 +
                                                                    (bVar35 & bVar76) * -2 + '\x1e',
                                                                    CONCAT11(bVar34 + bVar75 +
                                                                             (bVar34 & bVar75) * -2
                                                                             + '\x1e',bVar33 + (byte
                                                  )_DAT_00478a10 +
                                                  (bVar33 & (byte)_DAT_00478a10) * -2 + '\x1e'))))))
    ;
    bStack_c8 = bStack_c8 + bVar81 + (bStack_c8 & bVar81) * -2 + '\x1e';
    uStack_c7 = CONCAT16(bVar46 + bVar87 + (bVar46 & bVar87) * -2 + '\x1e',
                         CONCAT15(bVar45 + bVar86 + (bVar45 & bVar86) * -2 + '\x1e',
                                  CONCAT14(bVar44 + bVar85 + (bVar44 & bVar85) * -2 + '\x1e',
                                           CONCAT13(bVar43 + bVar84 + (bVar43 & bVar84) * -2 +
                                                    '\x1e',CONCAT12(bVar42 + bVar83 +
                                                                    (bVar42 & bVar83) * -2 + '\x1e',
                                                                    CONCAT11(bVar41 + bVar82 +
                                                                             (bVar41 & bVar82) * -2
                                                                             + '\x1e',bVar40 + (byte
                                                  )_UNK_00478a18 +
                                                  (bVar40 & (byte)_UNK_00478a18) * -2 + '\x1e'))))))
    ;
    bStack_c0 = bStack_c0 + bVar88 + (bStack_c0 & bVar88) * -2 + '\x1e';
    uStack_bf = CONCAT16(bVar53 + bVar94 + (bVar53 & bVar94) * -2 + '\x1e',
                         CONCAT15(bVar52 + bVar93 + (bVar52 & bVar93) * -2 + '\x1e',
                                  CONCAT14(bVar51 + bVar92 + (bVar51 & bVar92) * -2 + '\x1e',
                                           CONCAT13(bVar50 + bVar91 + (bVar50 & bVar91) * -2 +
                                                    '\x1e',CONCAT12(bVar49 + bVar90 +
                                                                    (bVar49 & bVar90) * -2 + '\x1e',
                                                                    CONCAT11(bVar48 + bVar89 +
                                                                             (bVar48 & bVar89) * -2
                                                                             + '\x1e',bVar47 + (byte
                                                  )_DAT_00478a20 +
                                                  (bVar47 & (byte)_DAT_00478a20) * -2 + '\x1e'))))))
    ;
    bStack_b8 = bStack_b8 + bVar95 + (bStack_b8 & bVar95) * -2 + '\x1e';
    uStack_b7 = CONCAT16(bVar60 + bVar101 + (bVar60 & bVar101) * -2 + '\x1e',
                         CONCAT15(bVar59 + bVar100 + (bVar59 & bVar100) * -2 + '\x1e',
                                  CONCAT14(bVar58 + bVar99 + (bVar58 & bVar99) * -2 + '\x1e',
                                           CONCAT13(bVar57 + bVar98 + (bVar57 & bVar98) * -2 +
                                                    '\x1e',CONCAT12(bVar56 + bVar97 +
                                                                    (bVar56 & bVar97) * -2 + '\x1e',
                                                                    CONCAT11(bVar55 + bVar96 +
                                                                             (bVar55 & bVar96) * -2
                                                                             + '\x1e',bVar54 + (byte
                                                  )_UNK_00478a28 +
                                                  (bVar54 & (byte)_UNK_00478a28) * -2 + '\x1e'))))))
    ;
    local_b0 = local_b0 + bVar102 + (local_b0 & bVar102) * -2 + '\x1e';
    uStack_af = CONCAT16(bVar67 + bVar16 + (bVar67 & bVar16) * -2 + '\x1e',
                         CONCAT15(bVar66 + bVar15 + (bVar66 & bVar15) * -2 + '\x1e',
                                  CONCAT14(bVar65 + bVar14 + (bVar65 & bVar14) * -2 + '\x1e',
                                           CONCAT13(bVar64 + bVar13 + (bVar64 & bVar13) * -2 +
                                                    '\x1e',CONCAT12(bVar63 + bVar12 +
                                                                    (bVar63 & bVar12) * -2 + '\x1e',
                                                                    CONCAT11(bVar62 + bVar11 +
                                                                             (bVar62 & bVar11) * -2
                                                                             + '\x1e',bVar61 + 
                                                  bVar10 + (bVar61 & bVar10) * -2 + '\x1e'))))));
    bStack_a8 = bStack_a8 + bVar17 + (bStack_a8 & bVar17) * -2 + '\x1e';
    uStack_a7 = CONCAT16(bVar74 + bVar24 + (bVar74 & bVar24) * -2 + '\x1e',
                         CONCAT15(bVar73 + bVar23 + (bVar73 & bVar23) * -2 + '\x1e',
                                  CONCAT14(bVar72 + bVar22 + (bVar72 & bVar22) * -2 + '\x1e',
                                           CONCAT13(bVar71 + bVar21 + (bVar71 & bVar21) * -2 +
                                                    '\x1e',CONCAT12(bVar70 + bVar20 +
                                                                    (bVar70 & bVar20) * -2 + '\x1e',
                                                                    CONCAT11(bVar69 + bVar19 +
                                                                             (bVar69 & bVar19) * -2
                                                                             + '\x1e',bVar68 + 
                                                  bVar18 + (bVar68 & bVar18) * -2 + '\x1e'))))));
    local_a0 = cVar25 + '\x1e';
    uStack_71 = (undefined2)(CONCAT17(cVar25 + '>',CONCAT16(bVar24 + 0x3e,uStack_77)) >> 0x30);
    bStack_9f = -0x23;
    uStack_6f = 0xfd;
    bStack_9e = -0x22;
    bStack_9d = -0x21;
    uStack_6e = 0xfe;
    bStack_9c = -0x20;
    bStack_9b = -0x1f;
    uStack_6d = 0xff;
    bStack_9a = -0x1e;
    uStack_6c = 0;
    bStack_99 = -0x1d;
                    /* try { // try from 001d8010 to 001d801f has its CatchHandler @ 001d825c */
    __android_log_print(6,&local_80,&local_d0,local_d8);
  }
  else if ((param_4 & 1) == 0) {
                    /* try { // try from 001d8058 to 001d805f has its CatchHandler @ 001d8280 */
    uVar2 = FUN_0021f6bc(&local_130);
    if ((uVar2 & 1) == 0) {
      local_a0 = (byte)DAT_00478bf0;
      bStack_9f = (byte)((ulong)DAT_00478bf0 >> 8);
      bStack_9e = (byte)((ulong)DAT_00478bf0 >> 0x10);
      bStack_9d = (byte)((ulong)DAT_00478bf0 >> 0x18);
      bStack_9c = (byte)((ulong)DAT_00478bf0 >> 0x20);
      bStack_9b = (byte)((ulong)DAT_00478bf0 >> 0x28);
      bStack_9a = (byte)((ulong)DAT_00478bf0 >> 0x30);
      bStack_99 = (byte)((ulong)DAT_00478bf0 >> 0x38);
      local_80 = 0x50;
      bStack_c8 = (byte)_UNK_00478a48;
      uStack_c7 = (undefined7)((ulong)_UNK_00478a48 >> 8);
      local_d0 = (undefined1)_DAT_00478a40;
      uStack_cf = (undefined7)((ulong)_DAT_00478a40 >> 8);
      bStack_b8 = (byte)_UNK_00478a58;
      uStack_b7 = (undefined7)((ulong)_UNK_00478a58 >> 8);
      bStack_c0 = (byte)_DAT_00478a50;
      uStack_bf = (undefined7)((ulong)_DAT_00478a50 >> 8);
      bVar17 = (byte)((ulong)DAT_00478be8 >> 8);
      bVar10 = (byte)((ulong)_DAT_00478a30 >> 8);
      bVar18 = (byte)((ulong)DAT_00478be8 >> 0x10);
      bVar11 = (byte)((ulong)_DAT_00478a30 >> 0x10);
      bVar19 = (byte)((ulong)DAT_00478be8 >> 0x18);
      bVar12 = (byte)((ulong)_DAT_00478a30 >> 0x18);
      bVar20 = (byte)((ulong)DAT_00478be8 >> 0x20);
      bVar13 = (byte)((ulong)_DAT_00478a30 >> 0x20);
      bVar21 = (byte)((ulong)DAT_00478be8 >> 0x28);
      bVar14 = (byte)((ulong)_DAT_00478a30 >> 0x28);
      bVar22 = (byte)((ulong)DAT_00478be8 >> 0x30);
      bVar15 = (byte)((ulong)_DAT_00478a30 >> 0x30);
      bVar23 = (byte)((ulong)DAT_00478be8 >> 0x38);
      bVar16 = (byte)((ulong)_DAT_00478a30 >> 0x38);
      uStack_7f = CONCAT16(bVar23 + bVar15 + (bVar23 & bVar15) * -2 + '\"',
                           CONCAT15(bVar22 + bVar14 + (bVar22 & bVar14) * -2 + '\"',
                                    CONCAT14(bVar21 + bVar13 + (bVar21 & bVar13) * -2 + '\"',
                                             CONCAT13(bVar20 + bVar12 + (bVar20 & bVar12) * -2 +
                                                      '\"',CONCAT12(bVar19 + bVar11 +
                                                                    (bVar19 & bVar11) * -2 + '\"',
                                                                    CONCAT11(bVar18 + bVar10 +
                                                                             (bVar18 & bVar10) * -2
                                                                             + '\"',bVar17 + (byte)
                                                  _DAT_00478a30 +
                                                  (bVar17 & (byte)_DAT_00478a30) * -2 + '\"'))))));
      cStack_78 = bVar16 + (bVar16 & 100) * -2 + -0x7a;
      uStack_77 = CONCAT15((char)((ulong)_UNK_00478a38 >> 0x28) + '\"',
                           CONCAT14((char)((ulong)_UNK_00478a38 >> 0x20) + '\"',
                                    CONCAT13((char)((ulong)_UNK_00478a38 >> 0x18) + '\"',
                                             CONCAT12((char)((ulong)_UNK_00478a38 >> 0x10) + '\"',
                                                      CONCAT11((char)((ulong)_UNK_00478a38 >> 8) +
                                                               '\"',(char)_UNK_00478a38 + '\"')))));
      uStack_71 = (undefined2)
                  (CONCAT17((char)((ulong)_UNK_00478a38 >> 0x38) + '\"',
                            CONCAT16((char)((ulong)_UNK_00478a38 >> 0x30) + '\"',uStack_77)) >> 0x30
                  );
      uStack_90 = 0x62;
      uStack_6f = 0xe5;
      uStack_6e = 0xe6;
      uStack_8f = 99;
      uStack_6d = 0xe7;
      bStack_a8 = (byte)_UNK_00478a68;
      uStack_a7 = (undefined7)((ulong)_UNK_00478a68 >> 8);
      local_b0 = (byte)_DAT_00478a60;
      uStack_af = (undefined7)((ulong)_DAT_00478a60 >> 8);
      uStack_6c = 0xe8;
      local_8e = 100;
      uStack_6b = 0xe9;
      bVar10 = (byte)((ulong)_DAT_00478a70 >> 8);
      bVar11 = (byte)((ulong)_DAT_00478a70 >> 0x10);
      bVar12 = (byte)((ulong)_DAT_00478a70 >> 0x18);
      bVar13 = (byte)((ulong)_DAT_00478a70 >> 0x20);
      bVar14 = (byte)((ulong)_DAT_00478a70 >> 0x28);
      bVar15 = (byte)((ulong)_DAT_00478a70 >> 0x30);
      bVar16 = (byte)((ulong)_DAT_00478a70 >> 0x38);
      local_a0 = local_a0 + (byte)_DAT_00478a70 + (local_a0 & (byte)_DAT_00478a70) * -2 + '}';
      bStack_9f = bStack_9f + bVar10 + (bStack_9f & bVar10) * -2 + '}';
      bStack_9e = bStack_9e + bVar11 + (bStack_9e & bVar11) * -2 + '}';
      bStack_9d = bStack_9d + bVar12 + (bStack_9d & bVar12) * -2 + '}';
      bStack_9c = bStack_9c + bVar13 + (bStack_9c & bVar13) * -2 + '}';
      bStack_9b = bStack_9b + bVar14 + (bStack_9b & bVar14) * -2 + '}';
      bStack_9a = bStack_9a + bVar15 + (bStack_9a & bVar15) * -2 + '}';
      bStack_99 = bStack_99 + bVar16 + (bStack_99 & bVar16) * -2 + '}';
      cStack_98 = (byte)_UNK_00478a78 + ((byte)_UNK_00478a78 & 0x5e) * -2 + -0x25;
      uStack_97 = (undefined7)
                  (CONCAT17((char)((ulong)_UNK_00478a78 >> 0x38) + '}',
                            CONCAT16((char)((ulong)_UNK_00478a78 >> 0x30) + '}',
                                     CONCAT15((char)((ulong)_UNK_00478a78 >> 0x28) + '}',
                                              CONCAT14((char)((ulong)_UNK_00478a78 >> 0x20) + '}',
                                                       CONCAT13((char)((ulong)_UNK_00478a78 >> 0x18)
                                                                + '}',CONCAT12((char)((ulong)
                                                  _UNK_00478a78 >> 0x10) + '}',
                                                  CONCAT11((char)((ulong)_UNK_00478a78 >> 8) + '}',
                                                           cStack_98))))))) >> 8);
      uStack_6a = 0xea;
      local_8d = 0x65;
                    /* try { // try from 001d8234 to 001d8243 has its CatchHandler @ 001d8254 */
      __android_log_print(6,&local_80,&local_d0,local_d8);
    }
  }
  else {
    uVar2 = FUN_0021f728(&local_130);
    if ((uVar2 & 1) == 0) {
      local_a0 = (byte)DAT_00478c00;
      bStack_9f = (byte)((ulong)DAT_00478c00 >> 8);
      bStack_9e = (byte)((ulong)DAT_00478c00 >> 0x10);
      bStack_9d = (byte)((ulong)DAT_00478c00 >> 0x18);
      bStack_9c = (byte)((ulong)DAT_00478c00 >> 0x20);
      bStack_9b = (byte)((ulong)DAT_00478c00 >> 0x28);
      bStack_9a = (byte)((ulong)DAT_00478c00 >> 0x30);
      bStack_99 = (byte)((ulong)DAT_00478c00 >> 0x38);
      local_80 = 0x50;
      bStack_c8 = (byte)_UNK_00478a48;
      uStack_c7 = (undefined7)((ulong)_UNK_00478a48 >> 8);
      local_d0 = (undefined1)_DAT_00478a40;
      uStack_cf = (undefined7)((ulong)_DAT_00478a40 >> 8);
      bStack_b8 = (byte)_UNK_00478a98;
      uStack_b7 = (undefined7)((ulong)_UNK_00478a98 >> 8);
      bStack_c0 = (byte)_DAT_00478a90;
      uStack_bf = (undefined7)((ulong)_DAT_00478a90 >> 8);
      bVar17 = (byte)((ulong)DAT_00478bf8 >> 8);
      bVar10 = (byte)((ulong)_DAT_00478a80 >> 8);
      bVar18 = (byte)((ulong)DAT_00478bf8 >> 0x10);
      bVar11 = (byte)((ulong)_DAT_00478a80 >> 0x10);
      bVar19 = (byte)((ulong)DAT_00478bf8 >> 0x18);
      bVar12 = (byte)((ulong)_DAT_00478a80 >> 0x18);
      bVar20 = (byte)((ulong)DAT_00478bf8 >> 0x20);
      bVar13 = (byte)((ulong)_DAT_00478a80 >> 0x20);
      bVar21 = (byte)((ulong)DAT_00478bf8 >> 0x28);
      bVar14 = (byte)((ulong)_DAT_00478a80 >> 0x28);
      bVar22 = (byte)((ulong)DAT_00478bf8 >> 0x30);
      bVar15 = (byte)((ulong)_DAT_00478a80 >> 0x30);
      bVar23 = (byte)((ulong)DAT_00478bf8 >> 0x38);
      bVar16 = (byte)((ulong)_DAT_00478a80 >> 0x38);
      uStack_7f = CONCAT16(bVar23 + bVar15 + (bVar23 & bVar15) * -2 + -0x61,
                           CONCAT15(bVar22 + bVar14 + (bVar22 & bVar14) * -2 + -0x61,
                                    CONCAT14(bVar21 + bVar13 + (bVar21 & bVar13) * -2 + -0x61,
                                             CONCAT13(bVar20 + bVar12 + (bVar20 & bVar12) * -2 +
                                                      -0x61,CONCAT12(bVar19 + bVar11 +
                                                                     (bVar19 & bVar11) * -2 + -0x61,
                                                                     CONCAT11(bVar18 + bVar10 +
                                                                              (bVar18 & bVar10) * -2
                                                                              + -0x61,bVar17 + (byte
                                                  )_DAT_00478a80 +
                                                  (bVar17 & (byte)_DAT_00478a80) * -2 + -0x61))))));
      cStack_78 = bVar16 + (bVar16 & 0x3e) * -2 + -0x23;
      uStack_77 = CONCAT15((char)((ulong)_UNK_00478a88 >> 0x28) + -0x61,
                           CONCAT14((char)((ulong)_UNK_00478a88 >> 0x20) + -0x61,
                                    CONCAT13((char)((ulong)_UNK_00478a88 >> 0x18) + -0x61,
                                             CONCAT12((char)((ulong)_UNK_00478a88 >> 0x10) + -0x61,
                                                      CONCAT11((char)((ulong)_UNK_00478a88 >> 8) +
                                                               -0x61,(char)_UNK_00478a88 + -0x61))))
                          );
      uStack_71 = (undefined2)
                  (CONCAT17((char)((ulong)_UNK_00478a88 >> 0x38) + -0x61,
                            CONCAT16((char)((ulong)_UNK_00478a88 >> 0x30) + -0x61,uStack_77)) >>
                  0x30);
      bStack_a8 = (byte)_UNK_00478aa8;
      uStack_a7 = (undefined7)((ulong)_UNK_00478aa8 >> 8);
      local_b0 = (byte)_DAT_00478aa0;
      uStack_af = (undefined7)((ulong)_DAT_00478aa0 >> 8);
      uStack_6f = 7;
      uStack_6e = 8;
      uStack_90 = 0x6a;
      uStack_6d = 9;
      bVar10 = (byte)((ulong)_DAT_00478ab0 >> 8);
      bVar11 = (byte)((ulong)_DAT_00478ab0 >> 0x10);
      bVar12 = (byte)((ulong)_DAT_00478ab0 >> 0x18);
      bVar13 = (byte)((ulong)_DAT_00478ab0 >> 0x20);
      bVar14 = (byte)((ulong)_DAT_00478ab0 >> 0x28);
      bVar15 = (byte)((ulong)_DAT_00478ab0 >> 0x30);
      bVar16 = (byte)((ulong)_DAT_00478ab0 >> 0x38);
      local_a0 = local_a0 + (byte)_DAT_00478ab0 + (local_a0 & (byte)_DAT_00478ab0) * -2 + '1';
      bStack_9f = bStack_9f + bVar10 + (bStack_9f & bVar10) * -2 + '1';
      bStack_9e = bStack_9e + bVar11 + (bStack_9e & bVar11) * -2 + '1';
      bStack_9d = bStack_9d + bVar12 + (bStack_9d & bVar12) * -2 + '1';
      bStack_9c = bStack_9c + bVar13 + (bStack_9c & bVar13) * -2 + '1';
      bStack_9b = bStack_9b + bVar14 + (bStack_9b & bVar14) * -2 + '1';
      bStack_9a = bStack_9a + bVar15 + (bStack_9a & bVar15) * -2 + '1';
      bStack_99 = bStack_99 + bVar16 + (bStack_99 & bVar16) * -2 + '1';
      cStack_98 = (char)_UNK_00478ab8 + '1';
      uStack_97 = (undefined7)
                  (CONCAT17((char)((ulong)_UNK_00478ab8 >> 0x38) + '1',
                            CONCAT16((char)((ulong)_UNK_00478ab8 >> 0x30) + '1',
                                     CONCAT15((char)((ulong)_UNK_00478ab8 >> 0x28) + '1',
                                              CONCAT14((char)((ulong)_UNK_00478ab8 >> 0x20) + '1',
                                                       CONCAT13((char)((ulong)_UNK_00478ab8 >> 0x18)
                                                                + '1',CONCAT12((char)((ulong)
                                                  _UNK_00478ab8 >> 0x10) + '1',
                                                  CONCAT11((char)((ulong)_UNK_00478ab8 >> 8) + '1',
                                                           cStack_98))))))) >> 8);
      uStack_6c = 10;
      uStack_8f = 0x6b;
                    /* try { // try from 001d7df0 to 001d7dff has its CatchHandler @ 001d8258 */
      __android_log_print(6,&local_80,&local_d0,local_d8);
    }
  }
  FUN_0021f4b4(&local_130);
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


