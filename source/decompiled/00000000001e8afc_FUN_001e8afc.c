// Recovered from libkentos.so by Ghidra 12.2
// address: 001e8afc
// size: 2784
// name: FUN_001e8afc
// namespace: Global
// signature: undefined FUN_001e8afc(void)
// generated: 2026-11-22 21:46:48


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8afc(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  float fVar11;
  char *pcVar12;
  int *piVar13;
  ulong *puVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  size_t *psVar23;
  void *pvVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined1 (*pauVar27) [16];
  undefined8 *puVar28;
  undefined8 uVar29;
  size_t *psVar30;
  uint uVar31;
  long lVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  ulong uVar35;
  char *pcVar36;
  int *piVar37;
  undefined8 *puVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  undefined1 auVar49 [12];
  undefined4 uStack_1fc;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  void *pvStack_1e8;
  byte bStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined6 uStack_1d6;
  void *pvStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  void *pvStack_1b8;
  char *local_1b0;
  ulong local_1a8;
  void *local_1a0;
  undefined8 uStack_198;
  char *local_190;
  size_t *local_188;
  void *local_180;
  long lStack_178;
  undefined1 *local_170;
  ulong *puStack_168;
  char *local_160;
  undefined8 uStack_158;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  int *local_130;
  ulong uStack_128;
  long local_b8;
  
  lVar4 = tpidr_el0;
  local_b8 = *(long *)(lVar4 + 0x28);
  if ((DAT_0082f4a0 & 1) == 0) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0082f8b0), iVar18 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898 = 0;
      DAT_0082f8a0._0_5_ = 0;
      DAT_0082f888 = 0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._5_3_ = 0;
      DAT_0082f8a8 = 0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    DAT_0082f880 = 0;
    DAT_0082f8ac = 0;
    DAT_0082f898 = DAT_0082f898 & 0xffffffff00000000;
    DAT_0082f888 = 0;
    DAT_0082f890 = 0;
    goto LAB_001e97c0;
  }
  uVar19 = FUN_001e8780();
  fVar48 = DAT_00820a90;
  if ((uVar19 & 1) == 0) {
    DAT_0082f4a0 = 0;
    goto LAB_001e97c0;
  }
  lVar20 = FUN_00226170();
  local_140 = (ulong *)DAT_00479e28;
  FUN_0022af84(&local_140,1);
  fVar46 = 0.5;
  local_140 = (ulong *)CONCAT44((float)((ulong)*(undefined8 *)(lVar20 + 8) >> 0x20) * 0.5,
                                (float)*(undefined8 *)(lVar20 + 8) * 0.5);
  local_170 = (undefined1 *)0x3f0000003f000000;
  FUN_002334b4(&local_140,4,&local_170);
  local_140 = (ulong *)0x0;
                    /* try { // try from 001e8ba0 to 001e8c73 has its CatchHandler @ 001eb228 */
  FUN_00222ac0(2,&local_140);
  FUN_00222958(3);
  FUN_00222958(ZEXT816(0x3f800000),4);
  local_140 = (ulong *)0x0;
  FUN_00222ac0(0xe,&local_140);
  fVar11 = DAT_0047a0ec;
  fVar48 = fVar48 / DAT_0047a0ec;
  local_140 = (ulong *)0x3d9898993d989899;
  uStack_138 = (ulong *)CONCAT44(fVar48,0x3d989899);
  FUN_00222794(2,&local_140);
  uVar6 = _UNK_00479a98;
  uVar29 = _DAT_00479a90;
  uStack_138 = (ulong *)_UNK_00479a98;
  local_140 = (ulong *)_DAT_00479a90;
  FUN_00222794(5,&local_140);
  uStack_138 = _UNK_00479aa8;
  local_140 = (ulong *)_DAT_00479aa0;
  FUN_00222794(0,&local_140);
                    /* try { // try from 001e8c74 to 001e8c87 has its CatchHandler @ 001eb20c */
  uVar19 = FUN_0022afb0("##inflexible",0,0x13b);
  if ((uVar19 & 1) == 0) {
                    /* try { // try from 001e97ac to 001e97af has its CatchHandler @ 001eb20c */
    FUN_00230a1c();
  }
  else {
                    /* try { // try from 001e8c8c to 001e8c8f has its CatchHandler @ 001eb204 */
    uVar21 = FUN_0023353c();
                    /* try { // try from 001e8c94 to 001e8c9f has its CatchHandler @ 001eb404 */
    fVar39 = (float)FUN_0023348c();
    if (((DAT_0082f8c8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0082f8c8), iVar18 != 0)) {
      _DAT_0082f8c0 = DAT_00479e20;
      __cxa_atexit(&LAB_001f58bc,&DAT_0082f8c0,&PTR_LOOP_00759000);
      __cxa_guard_release(&DAT_0082f8c8);
    }
    if (DAT_0082f8c7 != '\0') {
      _DAT_0082f8c0 = _DAT_0082f8c0 ^ 0x2727272727272727;
    }
                    /* try { // try from 001e8d20 to 001e8d23 has its CatchHandler @ 001eb200 */
    uVar22 = FUN_00233558();
                    /* try { // try from 001e8d28 to 001e8d4b has its CatchHandler @ 001eb1fc */
    fVar45 = DAT_0047a100;
    fVar40 = (float)FUN_002515a4(ZEXT816(0x41b80000),DAT_0047a100,0,uVar22,&DAT_0082f8c0,0,0);
    uVar8 = _UNK_00479ab8;
    uVar7 = _DAT_00479ab0;
    local_170 = (undefined1 *)
                CONCAT44((fVar46 + (float)((ulong)DAT_00479e30 >> 0x20)) - fVar45 * 0.5,
                         (fVar39 + (float)DAT_00479e30) - fVar40 * 0.5);
    uVar47 = 0;
    iVar18 = -2;
    do {
      fVar46 = (float)iVar18;
      local_190 = (char *)CONCAT44((float)((ulong)local_170 >> 0x20) + -2.0,
                                   SUB84(local_170,0) + fVar46);
      uStack_138 = (ulong *)uVar8;
      local_140 = (ulong *)uVar7;
                    /* try { // try from 001e8db4 to 001e8e87 has its CatchHandler @ 001eb5b4 */
      uVar15 = FUN_00221f20(&local_140);
      auVar44._8_8_ = uVar47;
      auVar44._0_8_ = 0x41b80000;
      FUN_00249528(auVar44,0,uVar21,uVar22,&local_190,uVar15,&DAT_0082f8c0,0,0);
      if (iVar18 != 0) {
        local_190 = (char *)CONCAT44((float)((ulong)local_170 >> 0x20) + 0.0,
                                     SUB84(local_170,0) + fVar46);
        uStack_138 = (ulong *)uVar8;
        local_140 = (ulong *)uVar7;
        uVar15 = FUN_00221f20(&local_140);
        auVar42._8_8_ = uVar47;
        auVar42._0_8_ = 0x41b80000;
        FUN_00249528(auVar42,0,uVar21,uVar22,&local_190,uVar15,&DAT_0082f8c0,0,0);
      }
      local_190 = (char *)CONCAT44((float)((ulong)local_170 >> 0x20) + 2.0,
                                   SUB84(local_170,0) + fVar46);
      uStack_138 = (ulong *)uVar8;
      local_140 = (ulong *)uVar7;
      uVar15 = FUN_00221f20(&local_140);
      auVar43._8_8_ = uVar47;
      auVar43._0_8_ = 0x41b80000;
      FUN_00249528(auVar43,0,uVar21,uVar22,&local_190,uVar15,&DAT_0082f8c0,0,0);
      bVar1 = iVar18 < 1;
      iVar18 = iVar18 + 2;
    } while (bVar1);
    auVar44 = NEON_fmov(0x3f800000,4);
    uStack_138 = auVar44._8_8_;
    local_140 = auVar44._0_8_;
                    /* try { // try from 001e8e9c to 001e8ecf has its CatchHandler @ 001eb1dc */
    uVar15 = FUN_00221f20(&local_140);
    FUN_00249528(ZEXT816(0x41b80000),0,uVar21,uVar22,&local_170,uVar15,&DAT_0082f8c0,0,0);
                    /* try { // try from 001e8ed0 to 001e8f7b has its CatchHandler @ 001eb1e0 */
    FUN_00222958(ZEXT816(0x41100000),0xc);
    FUN_00222958(0xd);
    uStack_138 = (ulong *)_UNK_00479ac8;
    local_140 = (ulong *)_DAT_00479ac0;
    FUN_00222794(0x15,&local_140);
    uVar7 = _UNK_00479ad8;
    uVar21 = _DAT_00479ad0;
    uStack_138 = (ulong *)_UNK_00479ad8;
    local_140 = (ulong *)_DAT_00479ad0;
    FUN_00222794(0x16,&local_140);
    uStack_138 = (ulong *)uVar7;
    local_140 = (ulong *)uVar21;
    FUN_00222794(0x17,&local_140);
    uStack_138 = (ulong *)_UNK_00479ae8;
    local_140 = (ulong *)_DAT_00479ae0;
    FUN_00222794(5,&local_140);
    local_140 = (ulong *)DAT_00479e38;
                    /* try { // try from 001e8f88 to 001e8f8f has its CatchHandler @ 001eb1c8 */
    FUN_00233e2c(&local_140);
    local_140 = (ulong *)DAT_00479e40;
                    /* try { // try from 001e8f9c to 001e8fab has its CatchHandler @ 001eb1c4 */
    uVar19 = FUN_00257168(&DAT_004d7663,&local_140);
    if ((uVar19 & 1) != 0) {
      DAT_0082f4a0 = 0;
    }
                    /* try { // try from 001e8fb4 to 001e8fc3 has its CatchHandler @ 001eb1d8 */
    FUN_00222c2c(2);
    FUN_00222904(4);
    fVar46 = DAT_0047a1ac;
    puVar9 = DAT_00479e58;
    uVar7 = _UNK_00479af8;
    uVar21 = _DAT_00479af0;
    uVar19 = 0;
    do {
      uVar35 = (ulong)DAT_0082f900;
                    /* try { // try from 001e902c to 001e910f has its CatchHandler @ 001eb598 */
      FUN_00222958(0xc);
      FUN_00222958(0xd);
      uVar15 = *(undefined4 *)(&DAT_00479e48 + (ulong)(uVar19 == uVar35) * 4);
      local_140 = (ulong *)CONCAT44(uVar15,uVar15);
      uStack_138 = (ulong *)CONCAT44(0x3f800000,uVar15);
      FUN_00222794(0x15,&local_140);
      uVar15 = *(undefined4 *)(&DAT_00479e50 + (ulong)(uVar19 == uVar35) * 4);
      local_140 = (ulong *)CONCAT44(uVar15,uVar15);
      uStack_138 = (ulong *)CONCAT44(0x3f800000,uVar15);
      FUN_00222794(0x16,&local_140);
      uStack_138 = (ulong *)uVar7;
      local_140 = (ulong *)uVar21;
      FUN_00222794(0x17,&local_140);
      uVar31 = 0x3f800000;
      if (uVar19 != uVar35) {
        uVar31 = 0;
      }
      local_140 = (ulong *)(ulong)uVar31;
      uStack_138 = (ulong *)((ulong)uVar31 << 0x20);
      FUN_00222794(5,&local_140);
      local_140 = (ulong *)CONCAT44(0x42c00000,(float)(int)(uint)uVar19 * fVar46 + 30.0);
                    /* try { // try from 001e912c to 001e9133 has its CatchHandler @ 001eb584 */
      FUN_00233e2c(&local_140);
      iVar18 = DAT_0082f904;
      pcVar36 = (&PTR_s_Aimbot_0048304b_7_00742710)[uVar19];
      if (DAT_0082f904 != 0) {
        lVar20 = 0;
        do {
          iVar16 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar20),pcVar36);
          if (iVar16 == 0) {
            if (iVar18 == 2) {
              puVar28 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar20);
            }
            else if (iVar18 == 1) {
              puVar28 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar20);
            }
            else {
              puVar28 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar20);
            }
            pcVar36 = (char *)*puVar28;
            break;
          }
          lVar20 = lVar20 + 0x20;
        } while (lVar20 != 0xbc0);
      }
      local_190 = (char *)0x0;
      local_188 = (size_t *)0x0;
      local_180 = (void *)0x0;
      psVar23 = (size_t *)strlen(pcVar36);
      if ((size_t *)0xffffffffffffffef < psVar23) {
                    /* try { // try from 001eb104 to 001eb10b has its CatchHandler @ 001eb12c */
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(&local_190);
      }
      if (psVar23 < (size_t *)0x17) {
        local_190 = (char *)CONCAT71(local_190._1_7_,(char)((int)psVar23 << 1));
        pvVar24 = (void *)((ulong)&local_190 | 1);
        if (psVar23 != (size_t *)0x0) goto LAB_001e91f4;
      }
      else {
                    /* try { // try from 001e91d8 to 001e91df has its CatchHandler @ 001eb4fc */
        pvVar24 = operator_new((ulong)(psVar23 + 2) & 0xfffffffffffffff0);
        local_190 = (char *)((ulong)(psVar23 + 2) & 0xfffffffffffffff0 | 1);
        local_188 = psVar23;
        local_180 = pvVar24;
LAB_001e91f4:
        memcpy(pvVar24,pcVar36,(size_t)psVar23);
      }
      *(undefined1 *)((long)pvVar24 + (long)psVar23) = 0;
                    /* try { // try from 001e9208 to 001e921b has its CatchHandler @ 001eb56c */
      auVar49 = FUN_001effa8(&local_190,"###tab",6);
      puVar25 = auVar49._0_8_;
      local_160 = (char *)puVar25[2];
      local_170 = (undefined1 *)*puVar25;
      puStack_168 = (ulong *)puVar25[1];
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[2] = 0;
                    /* try { // try from 001e9234 to 001e923f has its CatchHandler @ 001eb54c */
      std::__ndk1::to_string((__ndk1 *)(uVar19 & 0xffffffff),auVar49._8_4_);
      uVar35 = (ulong)local_1b0 >> 1 & 0x7f;
      pvVar24 = (void *)((ulong)&local_1b0 | 1);
      if (((ulong)local_1b0 & 1) != 0) {
        uVar35 = local_1a8;
        pvVar24 = local_1a0;
      }
                    /* try { // try from 001e9258 to 001e925f has its CatchHandler @ 001eb518 */
      puVar25 = (ulong *)FUN_001effa8(&local_170,pvVar24,uVar35);
      local_130 = (int *)puVar25[2];
      local_140 = (ulong *)*puVar25;
      uStack_138 = (ulong *)puVar25[1];
      puVar25[1] = 0;
      puVar25[2] = 0;
      *puVar25 = 0;
      if (((ulong)local_1b0 & 1) != 0) {
        operator_delete(local_1a0);
      }
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      if (((ulong)local_190 & 1) != 0) {
        operator_delete(local_180);
      }
      local_170 = puVar9;
      piVar37 = (int *)((ulong)&local_140 | 1);
      if (((ulong)local_140 & 1) != 0) {
        piVar37 = local_130;
      }
                    /* try { // try from 001e92c4 to 001e92cb has its CatchHandler @ 001eb500 */
      uVar35 = FUN_00257168(piVar37,&local_170);
      if ((uVar35 & 1) != 0) {
        DAT_0082f900 = (uint)uVar19;
      }
      if (((ulong)local_140 & 1) != 0) {
        operator_delete(local_130);
      }
                    /* try { // try from 001e92e4 to 001e92f3 has its CatchHandler @ 001eb594 */
      FUN_00222c2c(2);
      FUN_00222904(4);
      uVar19 = uVar19 + 1;
    } while (uVar19 < 6);
    local_140 = (ulong *)DAT_00479e60;
                    /* try { // try from 001e930c to 001e942b has its CatchHandler @ 001eb3fc */
    FUN_00222ac0(2,&local_140);
    FUN_00222958(8);
    FUN_00222958(7);
    FUN_00222958(0x12);
    FUN_00222958(0x13);
    local_140 = (ulong *)0x3db8b8b93db8b8b9;
    uStack_138 = (ulong *)CONCAT44(fVar48,0x3db8b8b9);
    FUN_00222794(3,&local_140);
    uStack_138 = (ulong *)uVar6;
    local_140 = (ulong *)uVar29;
    FUN_00222794(5,&local_140);
    local_140 = (ulong *)0x0;
    uStack_138 = (ulong *)0x0;
    FUN_00222794(0xe,&local_140);
    uStack_138 = (ulong *)uVar6;
    local_140 = (ulong *)uVar29;
    FUN_00222794(0xf,&local_140);
    uStack_138 = (ulong *)_UNK_00479b08;
    local_140 = (ulong *)_DAT_00479b00;
    FUN_00222794(0x10,&local_140);
    uStack_138 = _UNK_00479b18;
    local_140 = (ulong *)_DAT_00479b10;
    FUN_00222794(0x11,&local_140);
    local_140 = (ulong *)DAT_00479e68;
                    /* try { // try from 001e9438 to 001e943f has its CatchHandler @ 001eb1c0 */
    FUN_00233e2c(&local_140);
    local_140 = (ulong *)DAT_00479e70;
                    /* try { // try from 001e944c to 001e9463 has its CatchHandler @ 001eb1bc */
    uVar19 = FUN_00231b5c("##box",&local_140,1,0);
    if ((uVar19 & 1) != 0) {
      switch(DAT_0082f900) {
      case 0:
        FUN_001f5934("Enable Aimbot",&DAT_0082067c,0);
        DAT_008206a4 = 0x43480000;
        DAT_0082074c = 1;
        DAT_00820748 = 4;
        DAT_00820750 = 0x3f99999a;
        FUN_001f5934("Ignore Knocked",&DAT_0082076d,0);
        FUN_001f5934("Ignore Bots",&DAT_0082076e,0);
        FUN_001f5934("Visible Check",&DAT_0082076f,0);
        if (DAT_0082067c != '\0') {
          DAT_008209ac = 0;
          DAT_0082067d = '\0';
        }
        FUN_001f5bd4();
        FUN_001f5cb0("BULLET TRACK");
        FUN_001f5934("Bullet Track",&DAT_0082067d,0);
        DAT_008206a4 = 0x43960000;
        FUN_001f5934("Ignore Knocked BT",&DAT_008209bc,0);
        FUN_001f5934("Visible Check BT",&DAT_008209be,0);
        FUN_001f5bd4();
        FUN_001f5cb0("AIM SETTINGS");
        FUN_001f5934("Show FOV",&DAT_00820a94,0);
        uVar15 = DAT_0047a128;
        FUN_001f5db8(ZEXT816(0),DAT_0047a11c,DAT_0047a128,0x40c00000,&DAT_00484507,"FOV",
                     &DAT_0082075c,1);
        uVar19 = FUN_001f60e4(&DAT_0048450b,&DAT_0082f908,&PTR_s_Head_00542d11_0x47_00820a98,6,1);
        if ((uVar19 & 1) != 0) {
          DAT_00820744 = DAT_0082f908;
        }
        FUN_001f60e4("mode",&DAT_0082f90c,&PTR_s_Aim_Look_00820ac8,3,1);
        uVar19 = FUN_001f5db8(ZEXT816(0x3f800000),0x41f00000,uVar15,0x41200000,"smooth","Smooth",
                              &DAT_00820ae0,1);
        if ((uVar19 & 1) != 0) {
          DAT_00820768 = DAT_00820ae0;
        }
        FUN_001f5db8(ZEXT816(0),DAT_0047a1b8,0x3f800000,0x41200000,"adist","Aim Distance",
                     &DAT_00820ae4,0);
        FUN_001f5934("Recoil Control",&DAT_0082076c,1);
        if (DAT_0082067d != '\0') {
          DAT_00820740 = 0;
          DAT_0082067c = '\0';
        }
        break;
      case 1:
        FUN_001f5934("Enable ESP",&DAT_008206e4,0);
        uVar19 = FUN_001f5934("Show Bots",&DAT_0082f560,0);
        if ((uVar19 & 1) != 0) {
          DAT_008206ca = DAT_0082f560 ^ 1;
        }
        FUN_001f5bd4();
        FUN_001f5cb0("PLAYER ESP");
        FUN_001f5934("Line",&DAT_008206bd,0);
        FUN_001f5934("Box",&DAT_008206c6,0);
        FUN_001f5934("Skeleton",&DAT_008206d6,0);
        FUN_001f5934("Health",&DAT_008206bf,0);
        FUN_001f5934("Name",&DAT_008206c0,0);
        FUN_001f5934("Distance",&DAT_008206c1,0);
        FUN_001f5934("Team ID",&DAT_008206c2,0);
        FUN_001f5934("Alert 360",&DAT_008206cb,0);
        FUN_001f5934("Grenade Warn",&DAT_008206ce,0);
        FUN_001f5db8(ZEXT816(0),DAT_0047a11c,0x3f800000,0x40c00000,"edist","ESP Distance",0x820ae8,0
                    );
        FUN_001f5bd4();
        FUN_001f5cb0("ITEMS");
        FUN_001f5934("Vehicles",&DAT_008206cf,0);
        if (DAT_0082f2b0 != '\0') {
          if (DAT_0082f2b0 == '\x02') {
            if (*DAT_0082f2b8 != DAT_0082f2b8[1]) goto code_r0x001ea02c;
          }
          else if ((DAT_0082f2b0 != '\x01') || (DAT_0082f2b8[2] != 0)) {
code_r0x001ea02c:
            if (((bRam000000000082f928 & 1) == 0) &&
               (iVar18 = __cxa_guard_acquire(0x82f928), iVar18 != 0)) {
              puRam000000000082f910 = (ulong *)0x0;
              puRam000000000082f918 = (ulong *)0x0;
              puRam000000000082f920 = (ulong *)0x0;
              __cxa_atexit(&LAB_001f6784,0x82f910,&PTR_LOOP_00759000);
              __cxa_guard_release(0x82f928);
            }
            if (puRam000000000082f910 == puRam000000000082f918) {
              local_140 = (ulong *)&DAT_0082f2b0;
              uStack_138 = (ulong *)0x0;
              local_130 = (int *)0x0;
              uStack_128 = 0x8000000000000000;
              if (DAT_0082f2b0 == '\x02') {
                local_130 = (int *)*DAT_0082f2b8;
                puStack_168 = (ulong *)0x0;
                uStack_158 = 0x8000000000000000;
                local_160 = (char *)DAT_0082f2b8[1];
              }
              else if (DAT_0082f2b0 == '\x01') {
                puStack_168 = DAT_0082f2b8 + 1;
                uStack_138 = (ulong *)*DAT_0082f2b8;
                uStack_158 = _UNK_004798d8;
                local_160 = _DAT_004798d0;
              }
              else {
                uStack_128 = (ulong)(DAT_0082f2b0 == '\0');
                local_160 = (char *)0x0;
                puStack_168 = (ulong *)0x0;
                uStack_158 = 1;
              }
              local_170 = &DAT_0082f2b0;
              while (uVar19 = FUN_002055bc(&local_140,&local_170), (uVar19 & 1) == 0) {
                pcVar36 = (char *)FUN_001e20a8(&local_140);
                if ((*pcVar36 == '\x01') &&
                   (lVar20 = FUN_001f67fc(*(undefined8 *)(pcVar36 + 8),"Category"),
                   *(long *)(pcVar36 + 8) + 8 != lVar20)) {
                  local_1b0 = (char *)FUN_001e2220(pcVar36,"Items");
                  local_188 = (size_t *)0x0;
                  local_180 = (void *)0x0;
                  lStack_178 = -0x8000000000000000;
                  cVar3 = *local_1b0;
                  if (cVar3 == '\x02') {
                    local_180 = (void *)**(long **)(local_1b0 + 8);
                  }
                  else if (cVar3 == '\x01') {
                    local_188 = (size_t *)**(size_t **)(local_1b0 + 8);
                  }
                  else if (cVar3 == '\0') {
                    lStack_178 = 1;
                  }
                  else {
                    lStack_178 = 0;
                  }
                  local_1a8 = 0;
                  local_1a0 = (void *)0x0;
                  uStack_198 = 0x8000000000000000;
                  local_190 = local_1b0;
                  if (*local_1b0 == '\x02') {
                    local_1a0 = *(void **)(*(long *)(local_1b0 + 8) + 8);
                  }
                  else if (*local_1b0 == '\x01') {
                    local_1a8 = *(long *)(local_1b0 + 8) + 8;
                  }
                  else {
                    uStack_198 = 1;
                  }
                  while (uVar19 = FUN_002055bc(&local_190,&local_1b0), (uVar19 & 1) == 0) {
                    pcVar36 = (char *)FUN_001e20a8(&local_190);
                    if ((*pcVar36 == '\x01') &&
                       (lVar20 = FUN_00205704(*(undefined8 *)(pcVar36 + 8),"itemId"),
                       *(long *)(pcVar36 + 8) + 8 != lVar20)) {
                      uStack_1d6 = 0;
                      bStack_1e0 = 0x10;
                      pvStack_1d0 = (void *)0x0;
                      uStack_1df = 0x6d614e6d657469;
                      uStack_1d8 = 0x65;
                      uStack_1d7 = 0;
                      uStack_1f0 = 0;
                      pvStack_1e8 = (void *)0x0;
                      uStack_1f8 = 0x6d65744908;
                      FUN_001e255c(&uStack_1c8,pcVar36,&bStack_1e0,&uStack_1f8);
                      uVar29 = FUN_001e2220(pcVar36,"itemId");
                      FUN_0020587c(uVar29,&uStack_144);
                      puVar25 = puRam000000000082f918;
                      uStack_1fc = uStack_144;
                      if (puRam000000000082f918 < puRam000000000082f920) {
                        puRam000000000082f918[2] = (ulong)pvStack_1b8;
                        puVar25[1] = uStack_1c0;
                        *puVar25 = uStack_1c8;
                        uStack_1c0 = 0;
                        pvStack_1b8 = (void *)0x0;
                        uStack_1c8 = 0;
                        *(undefined4 *)(puVar25 + 3) = uStack_144;
                        puRam000000000082f918 = puRam000000000082f918 + 4;
                      }
                      else {
                        FUN_001f6974(0x82f910,&uStack_1c8,&uStack_1fc);
                        if ((uStack_1c8 & 1) != 0) {
                          operator_delete(pvStack_1b8);
                        }
                      }
                      if ((uStack_1f8 & 1) != 0) {
                        operator_delete(pvStack_1e8);
                      }
                      if ((bStack_1e0 & 1) != 0) {
                        operator_delete(pvStack_1d0);
                      }
                    }
                    if (*local_190 == '\x02') {
                      local_180 = (void *)((long)local_180 + 0x10);
                    }
                    else if (*local_190 == '\x01') {
                      psVar23 = (size_t *)local_188[1];
                      if ((size_t *)local_188[1] == (size_t *)0x0) {
                        while( true ) {
                          psVar30 = (size_t *)local_188[2];
                          if ((size_t *)*psVar30 == local_188) break;
                          local_188 = (size_t *)local_188[2];
                        }
                      }
                      else {
                        do {
                          psVar30 = psVar23;
                          psVar23 = (size_t *)*psVar30;
                        } while ((size_t *)*psVar30 != (size_t *)0x0);
                      }
                      local_188 = psVar30;
                    }
                    else {
                      lStack_178 = lStack_178 + 1;
                    }
                  }
                }
                if (*(char *)local_140 == '\x02') {
                  local_130 = local_130 + 4;
                }
                else if (*(char *)local_140 == '\x01') {
                  puVar25 = (ulong *)uStack_138[1];
                  if ((ulong *)uStack_138[1] == (ulong *)0x0) {
                    while( true ) {
                      puVar26 = (ulong *)uStack_138[2];
                      if ((ulong *)*puVar26 == uStack_138) break;
                      uStack_138 = (ulong *)uStack_138[2];
                    }
                  }
                  else {
                    do {
                      puVar26 = puVar25;
                      puVar25 = (ulong *)*puVar26;
                    } while ((ulong *)*puVar26 != (ulong *)0x0);
                  }
                  uStack_138 = puVar26;
                }
                else {
                  uStack_128 = uStack_128 + 1;
                }
              }
            }
            puVar26 = puRam000000000082f918;
            puVar25 = puRam000000000082f910;
            if (puRam000000000082f910 != puRam000000000082f918) {
LAB_001eb2b4:
              if ((*puVar25 & 1) == 0) {
                pbVar33 = (byte *)((long)puVar25 + 1);
              }
              else {
                pbVar33 = (byte *)puVar25[2];
              }
              puVar28 = &DAT_0082f0f0;
              if (DAT_0082f0f0 != (undefined8 *)0x0) {
                puVar38 = &DAT_0082f0f0;
                puVar28 = DAT_0082f0f0;
                do {
                  if ((int)puVar25[3] < *(int *)((long)puVar28 + 0x1c)) {
                    puVar38 = puVar28;
                    if ((undefined8 *)*puVar28 == (undefined8 *)0x0) {
                      puVar34 = (undefined8 *)*puVar28;
                      goto joined_r0x001eb31c;
                    }
                    puVar34 = (undefined8 *)*puVar28;
                  }
                  else {
                    if ((int)puVar25[3] <= *(int *)((long)puVar28 + 0x1c)) goto LAB_001eb314;
                    puVar38 = puVar28 + 1;
                    puVar34 = (undefined8 *)*puVar38;
                    if ((undefined8 *)*puVar38 == (undefined8 *)0x0) goto LAB_001eb314;
                  }
                  puVar28 = puVar34;
                } while( true );
              }
              puVar38 = &DAT_0082f0f0;
              goto LAB_001eb344;
            }
          }
        }
        break;
      case 2:
        FUN_001f5934("Small Crosshair",&DAT_008206d2,0);
        FUN_001f5934("165 FPS Unlock",&DAT_00820864,0);
        if ((DAT_00820864 != '\0') && (cRam000000000082f934 != '\0')) {
          lVar20 = func_0x00267ae8();
          if (lVar20 == 0) {
            FUN_00267998();
          }
          else {
            bRam000000000082f935 =
                 func_0x00267b1c(lVar20,
                                 "pcall(function()\n  pcall(function()\n    if type(console) == \"table\" and console.command then\n      console.command(\"t.MaxFPS 165\")\n      console.command(\"r.FrameRateLimit 165\")\n    end\n  end)\n  pcall(function()\n    local gs = require(\"client.logic.setting.logic_setting_graphics\")\n    if gs then\n      pcall(function()\n        if gs.SetFPS then gs.SetFPS(8) end\n        if gs.SetFPSFineTuneSwitch then gs.SetFPSFineTuneSwitch(true) end\n        if gs.SetFPSFineTuneNum then gs.SetFPSFineTuneNum(165) end\n        if gs.FPSFineTuneSwitch ~= nil then gs.FPSFineTuneSwitch = true end\n        if gs.FPSFineTuneNum ~= nil then gs.FPSFineTuneNum = 165 end\n      end)\n    end\n  end)\n  pcall(function()\n    if type(ExecuteConsoleCommand) == \"function\" then\n      ExecuteConsoleCommand(\"t.MaxFPS 165\")\n      ExecuteConsoleCommand(\"r.FrameRateLimit 165\")\n    end\n  end)\nend)\n"
                                 ,&UNK_0048453f);
            bRam000000000082f935 = bRam000000000082f935 & 1;
          }
        }
        FUN_001f5bd4();
        FUN_001f5cb0(&DAT_00483894);
        FUN_001f5934("iPad View",&DAT_00820707,0);
        FUN_001f60e4("view",0x82f930,0x820af0,3,1);
        FUN_001f5db8(_UNK_0047a1b0,_UNK_0047a1b4,DAT_0047a128,0x41200000,&UNK_0048453c,"View Width",
                     &DAT_00820670,1);
        FUN_001f5db8(ZEXT816(0x3f000000),0x40000000,DAT_0047a0c8,0x41200000,"cs","Crosshair Size",
                     0x820b08,2);
        break;
      case 3:
        FUN_001f5934("Show FPS",&DAT_0082f2c4,0);
        FUN_001f5bd4();
        FUN_001f5cb0(&DAT_00483a61);
        uVar31 = FUN_001f5934("Save Config",0x820b0c,0);
        if ((cRam0000000000820b0c != '\0') && (((uVar31 ^ 1) & 1) == 0)) {
          FUN_001f6b34();
        }
        lVar20 = DAT_00479e90;
        local_140 = (ulong *)DAT_00479e90;
        FUN_00257bc0(&local_140);
        iVar18 = DAT_0082f904;
        if (DAT_0082f904 == 0) {
          pcVar36 = "Language";
        }
        else {
          lVar32 = 0;
          pcVar36 = "Language";
          do {
            iVar16 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar32),"Language")
            ;
            if (iVar16 == 0) {
              if (iVar18 == 2) {
                puVar28 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar32);
              }
              else if (iVar18 == 1) {
                puVar28 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar32);
              }
              else {
                puVar28 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar32);
              }
              pcVar36 = (char *)*puVar28;
              break;
            }
            lVar32 = lVar32 + 0x20;
          } while (lVar32 != 0xbc0);
        }
        FUN_00256448(pcVar36,0);
        fVar48 = (float)FUN_00233fa4();
        if (0.0 < 24.0 - fVar48) {
          local_140 = (ulong *)((ulong)(uint)(24.0 - fVar48) << 0x20);
          FUN_00257bc0(&local_140);
        }
        uVar19 = FUN_001f60e4(&DAT_004848a6,&DAT_0082f938,&PTR_s_English_00820b10,4,0);
        if ((uVar19 & 1) != 0) {
          DAT_0082f904 = DAT_0082f938;
          DAT_008209cc = DAT_0082f938;
          if (cRam0000000000820b0c != '\0') {
            FUN_001f6b34();
          }
        }
        FUN_001f5db8(DAT_0047a15c,fVar11,0x3f800000,0x41200000,"opacity","Menu Opacity",
                     &DAT_00820a90,0);
        FUN_001f5db8(DAT_0047a128,0x3f800000,DAT_0047a0dc,0x41200000,"logoa","Icon Opacity",
                     &DAT_00820648,2);
        local_140 = (ulong *)lVar20;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Save Config Now");
        if ((uVar19 & 1) != 0) {
          FUN_001f6b34();
          iVar18 = DAT_0082f904;
          if (DAT_0082f904 == 0) {
            pcVar36 = "Config Saved Successfully!";
          }
          else {
            lVar32 = 0;
            pcVar36 = "Config Saved Successfully!";
            do {
              iVar16 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar32),
                              "Config Saved Successfully!");
              if (iVar16 == 0) {
                if (iVar18 == 2) {
                  puVar28 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar32);
                }
                else if (iVar18 == 1) {
                  puVar28 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar32);
                }
                else {
                  puVar28 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar32);
                }
                pcVar36 = (char *)*puVar28;
                break;
              }
              lVar32 = lVar32 + 0x20;
            } while (lVar32 != 0xbc0);
          }
          uStack_138 = _UNK_00479b38;
          local_140 = (ulong *)_DAT_00479b30;
          PTR_DAT_00820650 = pcVar36;
          DAT_00820658 = FUN_00221f20(&local_140);
          DAT_0082f498 = 1;
          dVar41 = (double)FUN_002261a0();
          DAT_0082f49c = (float)dVar41 + 2.5;
        }
        FUN_001f5bd4();
        FUN_001f5cb0("ACCOUNT");
        local_140 = DAT_00479e80;
        FUN_00257bc0(&local_140);
        uStack_138 = _UNK_00479b48;
        local_140 = (ulong *)_DAT_00479b40;
        FUN_00222794(0,&local_140);
        iVar18 = DAT_0082f904;
        if (DAT_0082f904 == 0) {
          pcVar36 = "Removes the saved login ID";
        }
        else {
          lVar32 = 0;
          pcVar36 = "Removes the saved login ID";
          do {
            iVar16 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar32),
                            "Removes the saved login ID");
            if (iVar16 == 0) {
              if (iVar18 == 2) {
                puVar28 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar32);
              }
              else if (iVar18 == 1) {
                puVar28 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar32);
              }
              else {
                puVar28 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar32);
              }
              pcVar36 = (char *)*puVar28;
              break;
            }
            lVar32 = lVar32 + 0x20;
          } while (lVar32 != 0xbc0);
        }
        FUN_00256448(pcVar36,0);
        FUN_00222904(1);
        local_140 = (ulong *)lVar20;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Login Clear");
        if ((uVar19 & 1) != 0) {
          FUN_001f462c();
          FUN_001f4530(&local_170,"rm -rf /data/data/",&DAT_0082f860);
          pauVar27 = (undefined1 (*) [16])FUN_001effa8(&local_170,"/databases",10);
          local_130 = *(int **)pauVar27[1];
          uStack_138 = SUB168(*pauVar27,8);
          local_140 = SUB168(*pauVar27,0);
          *(undefined8 *)(*pauVar27 + 8) = 0;
          *(undefined8 *)pauVar27[1] = 0;
          *(undefined8 *)*pauVar27 = 0;
          if (((ulong)local_170 & 1) != 0) {
            operator_delete(local_160);
          }
          FUN_001f462c();
          FUN_001f4530(&local_190,"rm -rf /storage/emulated/0/Android/data/",&DAT_0082f860);
          puVar28 = (undefined8 *)
                    FUN_001effa8(&local_190,
                                 "/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/SaveGames/logininfoFile.json"
                                 ,0x57);
          local_160 = (char *)puVar28[2];
          local_170 = (undefined1 *)*puVar28;
          puStack_168 = (ulong *)puVar28[1];
          puVar28[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          if (((ulong)local_190 & 1) != 0) {
            operator_delete(local_180);
          }
          piVar13 = local_130;
          uVar19 = (ulong)local_140 & 1;
          piVar37 = (int *)((ulong)&local_140 | 1);
          if (((ulong)local_140 & 1) != 0) {
            piVar37 = local_130;
          }
          system((char *)piVar37);
          pcVar12 = local_160;
          puVar9 = local_170;
          pcVar36 = (char *)((ulong)&local_170 | 1);
          if (((ulong)local_170 & 1) != 0) {
            pcVar36 = local_160;
          }
          iVar18 = system(pcVar36);
          PTR_DAT_00820650 = s_Success___Login_Data_Cleared__00484958;
          DAT_00820658 = 0xff8cdc64;
          DAT_0082f498 = 1;
          dVar41 = (double)FUN_002261a0(iVar18);
          DAT_0082f49c = (float)dVar41 + 3.0;
          if (((ulong)puVar9 & 1) != 0) {
            operator_delete(pcVar12);
          }
          if (uVar19 != 0) {
            operator_delete(piVar13);
          }
        }
        break;
      case 4:
        FUN_001f5cb0("LUA SKIN HACK (KENTOS)");
        lVar20 = DAT_00479e90;
        local_140 = (ulong *)DAT_00479e90;
        FUN_00257bc0(&local_140);
        puVar25 = _UNK_00479b28;
        puVar9 = _DAT_00479b20;
        uStack_138 = _UNK_00479b28;
        local_140 = (ulong *)_DAT_00479b20;
        if (((DAT_0082f798 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0082f798), iVar18 != 0))
        {
          DAT_0082f758 = 0;
          DAT_0082f75a = '\0';
          DAT_0082f788 = 0;
          DAT_0082f790 = 0;
          DAT_0082f774 = 0;
          DAT_0082f76c = 0;
          DAT_0082f764 = 0;
          DAT_0082f75c = 0;
          DAT_0082f77c = 0;
          DAT_0082f780 = &DAT_0082f788;
          __cxa_atexit(&LAB_001f4028,&DAT_0082f758,&PTR_LOOP_00759000);
          __cxa_guard_release(&DAT_0082f798);
        }
        pcVar36 = "Status: WAITING INJECT (ENTER LOBBY)";
        if (DAT_0082f75a != '\0') {
          pcVar36 = "Status: LUA INJECTED & RUNNING";
        }
        FUN_002565d8(&local_140,"%s",pcVar36);
        local_140 = (ulong *)lVar20;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Force Inject Lua Now");
        if ((uVar19 & 1) != 0) {
          FUN_00268740();
          FUN_00267998();
          uStack_138 = puVar25;
          local_140 = (ulong *)puVar9;
          PTR_DAT_00820650 = s_Lua_Inject_Triggered__00484c0f;
          DAT_00820658 = FUN_00221f20(&local_140);
          DAT_0082f498 = 1;
          dVar41 = (double)FUN_002261a0();
          DAT_0082f49c = (float)dVar41 + 2.5;
        }
        local_140 = (ulong *)lVar20;
        FUN_00257bc0(&local_140);
        FUN_00256794("KENTOS skin system: ON (auto).");
        FUN_00256794(&DAT_00484c44);
        break;
      case 5:
        FUN_001f5cb0("AUTO FEEDBACK");
        FUN_001f5934("Auto Feedback",PTR_DAT_007586b8,0);
        FUN_00256794("Top-5 / win / end of match -> screenshot to your RF server.");
        func_0x0026be5c(&local_170);
        pcVar36 = (char *)((ulong)&local_170 | 1);
        if (((ulong)local_170 & 1) != 0) {
          pcVar36 = local_160;
        }
        snprintf((char *)&local_140,0x80,"Status: %s",pcVar36);
        if (((ulong)local_170 & 1) != 0) {
          operator_delete(local_160);
        }
        puVar25 = _UNK_00479b28;
        puVar9 = _DAT_00479b20;
        puStack_168 = _UNK_00479b28;
        local_170 = _DAT_00479b20;
        FUN_002565d8(&local_170,"%s",&local_140);
        uVar15 = func_0x0026bf48();
        uVar17 = func_0x0026bf84();
        FUN_00256794("Sent: %d   Failed: %d",uVar15,uVar17);
        func_0x0026bfc0(&local_140);
        piVar37 = (int *)((ulong)&local_140 | 1);
        if (((ulong)local_140 & 1) != 0) {
          piVar37 = local_130;
        }
        FUN_00256794("%s",piVar37);
        if (((ulong)local_140 & 1) != 0) {
          operator_delete(local_130);
        }
        puVar10 = DAT_00479e78;
        local_140 = (ulong *)DAT_00479e78;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Send Screenshot Now");
        if ((uVar19 & 1) != 0) {
          FUN_0026c110();
          uStack_138 = puVar25;
          local_140 = (ulong *)puVar9;
          PTR_DAT_00820650 = s_Screenshot_queued_00484d1e;
          DAT_00820658 = FUN_00221f20(&local_140);
          DAT_0082f498 = 1;
          dVar41 = (double)FUN_002261a0();
          DAT_0082f49c = (float)dVar41 + 2.0;
        }
        FUN_001f5bd4();
        FUN_001f5cb0("FEEDBACK");
        FUN_00256794("Write a review about the game / panel and send it to support.");
        auVar44 = FUN_00231b1c();
        uVar15 = DAT_0047a1a4;
        FUN_001e7a6c(auVar44,DAT_0047a1a4,"##dexo_feedback",&DAT_0082f93c,0x200,"Your review...");
        local_140 = (ulong *)puVar10;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Send Feedback");
        if ((uVar19 & 1) != 0) {
          local_140 = (ulong *)0x0;
          uStack_138 = (ulong *)0x0;
          local_130 = (int *)0x0;
          puVar26 = (ulong *)strlen(&DAT_0082f93c);
          if ((ulong *)0xffffffffffffffef < puVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_001d91e4(&local_140);
          }
          if (puVar26 < (ulong *)0x17) {
            piVar37 = (int *)((ulong)&local_140 | 1);
            local_140 = (ulong *)CONCAT71(local_140._1_7_,(char)((int)puVar26 << 1));
            if (puVar26 != (ulong *)0x0) goto LAB_001ea0c0;
          }
          else {
            piVar37 = operator_new((ulong)(puVar26 + 2) & 0xfffffffffffffff0);
            local_140 = (ulong *)((ulong)(puVar26 + 2) & 0xfffffffffffffff0 | 1);
            uStack_138 = puVar26;
            local_130 = piVar37;
LAB_001ea0c0:
            memcpy(piVar37,&DAT_0082f93c,(size_t)puVar26);
          }
          *(char *)((long)piVar37 + (long)puVar26) = '\0';
          uVar19 = FUN_00269898(&local_140);
          if (((ulong)local_140 & 1) != 0) {
            operator_delete(local_130);
          }
          if ((uVar19 & 1) != 0) {
            DAT_0082f93c = 0;
          }
        }
        FUN_0026963c(&local_140);
        puVar26 = (ulong *)(ulong)((byte)local_140 >> 1);
        if (((ulong)local_140 & 1) != 0) {
          puVar26 = uStack_138;
        }
        uVar19 = (ulong)local_140 & 1;
        if (puVar26 == (ulong *)0x2) {
          piVar37 = (int *)((ulong)&local_140 | 1);
          if (((ulong)local_140 & 1) != 0) {
            piVar37 = local_130;
          }
          if ((short)*piVar37 != 0x6b6f) goto LAB_001ea1d8;
LAB_001ea2ec:
          piVar37 = (int *)&DAT_00484db3;
          goto LAB_001ea2f4;
        }
        if (puVar26 == (ulong *)0x4) {
          piVar37 = (int *)((ulong)&local_140 | 1);
          if (((ulong)local_140 & 1) != 0) {
            piVar37 = local_130;
          }
          if (*piVar37 == 0x746e6573) goto LAB_001ea2ec;
          if (*piVar37 != 0x656c6469) goto LAB_001ea1d8;
LAB_001ea314:
          if (((byte)local_140 & 1) != 0) {
            piVar37 = local_130;
            goto LAB_001ea31c;
          }
        }
        else {
          if (puVar26 == (ulong *)0x7) {
            piVar37 = (int *)((ulong)&local_140 | 1);
            if (((ulong)local_140 & 1) != 0) {
              piVar37 = local_130;
            }
            iVar18 = memcmp(piVar37,"sending",7);
            if (iVar18 == 0) {
              piVar37 = (int *)"Sending...";
              goto LAB_001ea2f4;
            }
          }
LAB_001ea1d8:
          if (uVar19 == 0) {
            piVar37 = (int *)((ulong)&local_140 | 1);
LAB_001ea2f4:
            puStack_168 = puVar25;
            local_170 = puVar9;
            FUN_002565d8(&local_170,"%s",piVar37);
            goto LAB_001ea314;
          }
          piVar37 = local_130;
          if (local_130 != (int *)0x0) goto LAB_001ea2f4;
          piVar37 = (int *)0x0;
LAB_001ea31c:
          operator_delete(piVar37);
        }
        FUN_001f5bd4();
        FUN_001f5cb0("ONLINE CHAT");
        pcVar36 = "Keyboard: EN";
        if (DAT_0082fc04 != 0) {
          pcVar36 = "Keyboard: RU";
        }
        uVar19 = FUN_001f7b30(pcVar36);
        if ((uVar19 & 1) != 0) {
          DAT_0082fc04 = DAT_0082fc04 ^ 1;
        }
        FUN_00269ef4(1);
        uVar19 = FUN_00269600();
        FUN_00268b24(&local_170);
        pcVar36 = (char *)((ulong)&local_170 | 1);
        if (((ulong)local_170 & 1) != 0) {
          pcVar36 = local_160;
        }
        snprintf((char *)&local_140,0x60,"Online: %d    You: %s",uVar19 & 0xffffffff,pcVar36);
        if (((ulong)local_170 & 1) != 0) {
          operator_delete(local_160);
        }
        puStack_168 = puVar25;
        local_170 = puVar9;
        FUN_002565d8(&local_170,"%s",&local_140);
        puVar25 = DAT_00479e80;
        local_140 = DAT_00479e80;
        FUN_00257bc0(&local_140);
        FUN_00269728(&local_140);
        local_170 = (undefined1 *)0x0;
        puStack_168 = (ulong *)0x0;
        uVar35 = ((long)uStack_138 - (long)local_140 >> 4) * -0x5555555555555555;
        uVar19 = uVar35 - 0x28;
        if (uVar35 < 0x28 || uVar19 == 0) {
          uVar19 = 0;
        }
        local_160 = (char *)0x0;
        if (uVar19 < uVar35) {
          uVar31 = 0;
          lVar20 = uVar19 * 0x30 + 0x780;
          while( true ) {
            uVar19 = uVar19 + 1;
            puVar26 = (ulong *)(ulong)(uVar31 >> 1);
            if ((uVar31 & 1) != 0) {
              puVar26 = puStack_168;
            }
            if (puVar26 != (ulong *)0x0) {
              FUN_001f40e0(&local_170,10);
            }
            FUN_001e1a64(&local_1b0,(long)local_140 + lVar20 + -0x780,&DAT_00485d75);
            bVar2 = *(byte *)((long)local_140 + lVar20 + -0x768);
            uVar35 = (ulong)(bVar2 >> 1);
            lVar32 = (long)local_140 + lVar20 + -0x767;
            if ((bVar2 & 1) != 0) {
              uVar35 = *(ulong *)((long)local_140 + lVar20 + -0x760);
              lVar32 = *(long *)((long)local_140 + lVar20 + -0x758);
            }
            pauVar27 = (undefined1 (*) [16])FUN_001effa8(&local_1b0,lVar32,uVar35);
            local_180 = *(void **)pauVar27[1];
            auVar44 = *pauVar27;
            local_188 = auVar44._8_8_;
            *(undefined8 *)(*pauVar27 + 8) = 0;
            *(undefined8 *)pauVar27[1] = 0;
            *(undefined8 *)*pauVar27 = 0;
            local_190._0_1_ = auVar44[0];
            psVar23 = (size_t *)(ulong)((byte)local_190 >> 1);
            pvVar24 = (void *)((ulong)&local_190 | 1);
            if (((byte)local_190 & 1) != 0) {
              psVar23 = local_188;
              pvVar24 = local_180;
            }
            local_190 = auVar44._0_8_;
            FUN_001effa8(&local_170,pvVar24,psVar23);
            if (((ulong)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
            if (((ulong)local_1b0 & 1) != 0) {
              operator_delete(local_1a0);
            }
            if ((ulong)(((long)uStack_138 - (long)local_140 >> 4) * -0x5555555555555555) <= uVar19)
            break;
            uVar31 = (uint)(byte)local_170;
            lVar20 = lVar20 + 0x30;
          }
        }
        local_190 = DAT_00479e88;
        FUN_00231b5c("##dexo_chatlog",&local_190,1,0);
        puVar26 = (ulong *)((ulong)local_170 >> 1 & 0x7f);
        if (((ulong)local_170 & 1) != 0) {
          puVar26 = puStack_168;
        }
        if (puVar26 == (ulong *)0x0) {
          FUN_00256448("No messages yet",0);
        }
        else {
          pcVar36 = (char *)((ulong)&local_170 | 1);
          if (((ulong)local_170 & 1) != 0) {
            pcVar36 = local_160;
          }
          FUN_00256448(pcVar36,0);
        }
        FUN_00231c24();
        if (((ulong)local_170 & 1) != 0) {
          operator_delete(local_160);
        }
        puVar26 = local_140;
        puVar14 = uStack_138;
        if (local_140 != (ulong *)0x0) {
          while (puVar5 = puVar14, puVar5 != puVar26) {
            if ((puVar5[-3] & 1) != 0) {
              operator_delete((void *)puVar5[-1]);
            }
            puVar14 = puVar5 + -6;
            if ((puVar5[-6] & 1) != 0) {
              operator_delete((void *)puVar5[-4]);
            }
          }
          uStack_138 = puVar26;
          operator_delete(local_140);
        }
        local_140 = puVar25;
        FUN_00257bc0(&local_140);
        auVar44 = FUN_00231b1c();
        FUN_001e7a6c(auVar44,uVar15,"##dexo_chat_in",&DAT_0082fb3c,200,"Message...");
        local_140 = (ulong *)puVar10;
        FUN_00257bc0(&local_140);
        uVar19 = FUN_001f7b30("Send Message");
        if ((uVar19 & 1) != 0) {
          local_140 = (ulong *)0x0;
          uStack_138 = (ulong *)0x0;
          local_130 = (int *)0x0;
          puVar25 = (ulong *)strlen(&DAT_0082fb3c);
          if ((ulong *)0xffffffffffffffef < puVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_001d91e4(&local_140);
          }
          if (puVar25 < (ulong *)0x17) {
            piVar37 = (int *)((ulong)&local_140 | 1);
            local_140 = (ulong *)CONCAT71(local_140._1_7_,(char)((int)puVar25 << 1));
            if (puVar25 != (ulong *)0x0) goto LAB_001ea740;
          }
          else {
            piVar37 = operator_new((ulong)(puVar25 + 2) & 0xfffffffffffffff0);
            local_140 = (ulong *)((ulong)(puVar25 + 2) & 0xfffffffffffffff0 | 1);
            uStack_138 = puVar25;
            local_130 = piVar37;
LAB_001ea740:
            memcpy(piVar37,&DAT_0082fb3c,(size_t)puVar25);
          }
          *(char *)((long)piVar37 + (long)puVar25) = '\0';
          uVar19 = FUN_00269bfc(&local_140);
          if (((ulong)local_140 & 1) != 0) {
            operator_delete(local_130);
          }
          if ((uVar19 & 1) != 0) {
            DAT_0082fb3c = 0;
          }
        }
      }
LAB_001eb3b8:
      local_140 = (ulong *)DAT_00479e98;
                    /* try { // try from 001eb3cc to 001eb3df has its CatchHandler @ 001eb3fc */
      FUN_00257bc0(&local_140);
    }
    FUN_00231c24();
                    /* try { // try from 001eb3e0 to 001eb3ef has its CatchHandler @ 001eb3f8 */
    FUN_00222c2c(5);
    FUN_00222904(6);
                    /* try { // try from 001eb3f0 to 001eb3f3 has its CatchHandler @ 001eb404 */
    FUN_00230a1c();
  }
                    /* try { // try from 001e97b0 to 001e97bf has its CatchHandler @ 001eb208 */
  FUN_00222c2c(4);
  FUN_00222904(3);
LAB_001e97c0:
  if (*(long *)(lVar4 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001eb314:
  puVar34 = (undefined8 *)*puVar38;
joined_r0x001eb31c:
  if (puVar34 == (undefined8 *)0x0) {
LAB_001eb344:
    puVar34 = operator_new(0x28);
    uVar19 = puVar25[3];
    *(undefined1 *)(puVar34 + 4) = 0;
    *puVar34 = 0;
    puVar34[1] = 0;
    puVar34[2] = puVar28;
    *(int *)((long)puVar34 + 0x1c) = (int)uVar19;
    *puVar38 = puVar34;
    if ((long *)*DAT_0082f0e8 == (long *)0x0) {
      puVar28 = puVar34;
    }
    else {
      puVar28 = (undefined8 *)*puVar38;
      DAT_0082f0e8 = (long *)*DAT_0082f0e8;
    }
    FUN_001feccc(DAT_0082f0f0,puVar28);
    DAT_0082f0f8 = DAT_0082f0f8 + 1;
  }
  FUN_001f5934(pbVar33,puVar34 + 4,0);
  puVar25 = puVar25 + 4;
  if (puVar25 == puVar26) goto LAB_001eb3b8;
  goto LAB_001eb2b4;
}


