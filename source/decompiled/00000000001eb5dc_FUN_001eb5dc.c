// Recovered from libkentos.so by Ghidra 12.2
// address: 001eb5dc
// size: 9988
// name: FUN_001eb5dc
// namespace: Global
// signature: undefined FUN_001eb5dc(void)
// generated: 2026-11-22 21:54:49


/* WARNING: Removing unreachable block (ram,0x001ec758) */
/* WARNING: Removing unreachable block (ram,0x001ec974) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001eb5dc(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined *puVar17;
  byte bVar18;
  uint uVar19;
  FILE *__stream;
  bool bVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  void *pvVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  size_t sVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  float *pfVar36;
  float *pfVar37;
  uint uVar38;
  ulong uVar39;
  long *plVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  char *pcVar44;
  float fVar45;
  float *__dest;
  float *pfVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  double dVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  byte abStack_3c8 [8];
  long lStack_3c0;
  char *pcStack_3b8;
  undefined4 uStack_3ac;
  ulong auStack_3a8 [2];
  undefined4 uStack_394;
  float fStack_320;
  float fStack_31c;
  undefined1 uStack_314;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 uStack_278;
  undefined1 uStack_250;
  undefined8 uStack_210;
  undefined *puStack_208;
  long alStack_200 [2];
  uint auStack_1f0 [26];
  FILE *pFStack_188;
  undefined4 uStack_168;
  undefined *apuStack_158 [17];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  
  lVar9 = tpidr_el0;
  lVar33 = *(long *)(lVar9 + 0x28);
  eglQuerySurface(param_1,param_2,0x3057,&DAT_0082f2a4);
  eglQuerySurface(param_1,param_2,0x3056,&DAT_0082f2a8);
  if (((DAT_0082f2a4 < 1) || (DAT_0082f2a8 < 1)) || (DAT_0082f388 == 0)) goto LAB_001ed968;
  DAT_00820638 = ANativeWindow_getWidth(*(undefined8 *)(DAT_0082f388 + 0x48));
  DAT_0082063c = ANativeWindow_getHeight(*(undefined8 *)(DAT_0082f388 + 0x48));
  iVar21 = AConfiguration_getDensity(*(undefined8 *)(DAT_0082f388 + 0x20));
  DAT_00820640 = (float)iVar21;
  if (DAT_0082f2a0 == '\0') {
    FUN_00225128(0);
    FUN_002633d4(0);
    FUN_00264530("#version 300 es");
    lVar25 = FUN_00226170();
    *(undefined1 *)(lVar25 + 0xc5) = 1;
    *(undefined8 *)(lVar25 + 0x18) = 0;
    FUN_0024a474(&uStack_298);
    FUN_0024a474(&fStack_320);
    uStack_314 = 0;
    uStack_250 = 1;
    uStack_278 = 1;
    if (((DAT_0082f558 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f558), iVar21 != 0)) {
      DAT_0082f548 = 0;
      DAT_0082f550 = 0;
      __cxa_atexit(FUN_001ede2c,&DAT_0082f548,&PTR_LOOP_00759000);
      __cxa_guard_release(&DAT_0082f558);
    }
    puStack_208 = (void *)0x0;
    uStack_210 = (undefined *)0x0;
                    /* try { // try from 001eb728 to 001eb72f has its CatchHandler @ 001edda0 */
    pvVar26 = (void *)FUN_00221770(0x2000);
    if (puStack_208 != (void *)0x0) {
      memcpy(pvVar26,puStack_208,(long)(int)(float)uStack_210 << 2);
                    /* try { // try from 001eb750 to 001eb753 has its CatchHandler @ 001edda0 */
      FUN_0022179c(puStack_208);
    }
    uStack_210 = (undefined *)0x80000000800;
    puStack_208 = pvVar26;
    memset(pvVar26,0,0x2000);
                    /* try { // try from 001eb774 to 001eb7bb has its CatchHandler @ 001ede0c */
    uVar27 = FUN_0024aa40(*(undefined8 *)(lVar25 + 0xa0));
    FUN_00250e38(&uStack_210,uVar27);
    uVar27 = FUN_00250e2c(*(undefined8 *)(lVar25 + 0xa0));
    FUN_00250e38(&uStack_210,uVar27);
    FUN_00250e38(&uStack_210,&DAT_00485e34);
    FUN_00250e90(&uStack_210,&DAT_0082f548);
    if (puStack_208 != (void *)0x0) {
                    /* try { // try from 001eb7c4 to 001eb7c7 has its CatchHandler @ 001edd60 */
      FUN_0022179c();
    }
    FUN_0024ab8c(0x41b00000,*(undefined8 *)(lVar25 + 0xa0),&DAT_008115dd,0xf054,&fStack_320,
                 DAT_0082f550);
    FUN_0024ac74(0x41a00000,*(undefined8 *)(lVar25 + 0xa0),&DAT_00485e3c,0x1e695,&uStack_298,
                 &DAT_00485e2e);
    FUN_0024a474(auStack_3a8);
    uStack_394 = 0x41800000;
    FUN_0024a92c(*(undefined8 *)(lVar25 + 0xa0),auStack_3a8);
    *(undefined4 *)(lVar25 + 0xa8) = 0x3f800000;
    memset(&DAT_00820660,0,0x430);
    puVar28 = operator_new__(0x10);
    uVar27 = _DAT_00479b50;
    DAT_008209e0 = puVar28;
    puVar28[1] = _UNK_00479b58;
    *puVar28 = uVar27;
    puVar28 = operator_new__(0x10);
    bVar18 = DAT_0082f560;
    uVar27 = _DAT_00479b60;
    DAT_008209e8 = puVar28;
    puVar28[1] = _UNK_00479b68;
    *puVar28 = uVar27;
    DAT_008206ca = bVar18 ^ 1;
    DAT_008206e4 = 1;
    FUN_001db5e4(&uStack_210,&PNG_00759010,0xb85cd);
    DAT_00820774 = 1;
    DAT_0082f378 = alStack_200[0];
    pvRam000000000082f370 = puStack_208;
    DAT_0082f368 = uStack_210;
    DAT_00820776 = 0x101;
                    /* try { // try from 001eb8d4 to 001eb8ef has its CatchHandler @ 001eddbc */
    FUN_001f43a8();
    FUN_001e1a64(abStack_3c8,&DAT_0082f840,"/cheat_config.json");
    apuStack_158[0] = PTR_construction_vtable_00758038 + 0x40;
    uStack_210 = PTR_construction_vtable_00758038 + 0x18;
    puStack_208 = (undefined *)0x0;
                    /* try { // try from 001eb91c to 001eb927 has its CatchHandler @ 001edd7c */
    std::__ndk1::ios_base::init((ios_base *)apuStack_158,alStack_200);
    puVar17 = PTR_vtable_00758558;
    uStack_d0 = 0;
    uStack_c8 = 0xffffffff;
    uStack_210 = PTR_vtable_00758558 + 0x18;
    apuStack_158[0] = PTR_vtable_00758558 + 0x40;
                    /* try { // try from 001eb94c to 001eb953 has its CatchHandler @ 001edd78 */
    FUN_0020c2bc(alStack_200);
    if (pFStack_188 == (FILE *)0x0) {
      pcVar44 = (char *)((ulong)abStack_3c8 | 1);
      if ((abStack_3c8[0] & 1) != 0) {
        pcVar44 = pcStack_3b8;
      }
      pFStack_188 = fopen(pcVar44,"r");
      if (pFStack_188 == (FILE *)0x0) goto LAB_001eb95c;
      uStack_168 = 8;
    }
    else {
LAB_001eb95c:
                    /* try { // try from 001eb974 to 001eb977 has its CatchHandler @ 001edd64 */
      std::__ndk1::ios_base::clear
                ((ios_base *)((long)alStack_200 + *(long *)(uStack_210 + -0x18) + -0x10),
                 *(uint *)((long)auStack_1f0 + *(long *)(uStack_210 + -0x18)) | 4);
    }
    if ((abStack_3c8[0] & 1) != 0) {
      operator_delete(pcStack_3b8);
    }
    if (pFStack_188 == (FILE *)0x0) {
      uStack_210 = puVar17 + 0x18;
      apuStack_158[0] = puVar17 + 0x40;
      FUN_001f4964(alStack_200);
      std::__ndk1::ios_base::~ios_base((ios_base *)apuStack_158);
    }
    else {
      abStack_3c8[0] = 0;
      lStack_3c0 = 0;
                    /* try { // try from 001eb99c to 001eb9a7 has its CatchHandler @ 001eddc8 */
      FUN_001f8380(&uStack_210,abStack_3c8);
      __stream = pFStack_188;
      if (pFStack_188 == (FILE *)0x0) {
LAB_001eb9d8:
                    /* try { // try from 001eb9f0 to 001ec57b has its CatchHandler @ 001eddc8 */
        std::__ndk1::ios_base::clear
                  ((ios_base *)((long)alStack_200 + *(long *)(uStack_210 + -0x18) + -0x10),
                   *(uint *)((long)auStack_1f0 + *(long *)(uStack_210 + -0x18)) | 4);
      }
      else {
                    /* try { // try from 001eb9b8 to 001eb9bf has its CatchHandler @ 001edd34 */
        iVar21 = (**(code **)(alStack_200[0] + 0x30))(alStack_200);
        iVar22 = fclose(__stream);
        if ((iVar22 != 0) || (pFStack_188 = (FILE *)0x0, iVar21 != 0)) goto LAB_001eb9d8;
      }
      if (abStack_3c8[0] == 1) {
        lVar25 = FUN_00202708(lStack_3c0,"Aimbot_Enable");
        if (lStack_3c0 + 8 != lVar25) {
          uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Enable");
          FUN_00202880(uVar27,&uStack_3ac);
          DAT_0082067c = (byte)uStack_3ac;
        }
        if (abStack_3c8[0] == 1) {
          lVar25 = FUN_00202708(lStack_3c0,"Aimbot_Active");
          if (lStack_3c0 + 8 != lVar25) {
            uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Active");
            FUN_00202880(uVar27,&uStack_3ac);
            DAT_00820740 = (byte)uStack_3ac;
          }
          if (abStack_3c8[0] == 1) {
            lVar25 = FUN_00202708(lStack_3c0,"Aimbot_Target");
            if (lStack_3c0 + 8 != lVar25) {
              uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Target");
              FUN_0020587c(uVar27,&uStack_3ac);
              DAT_00820744 = uStack_3ac;
              DAT_0082f908 = uStack_3ac;
            }
            if (abStack_3c8[0] == 1) {
              lVar25 = FUN_00202708(lStack_3c0,"Aimbot_Smooth");
              if (lStack_3c0 + 8 != lVar25) {
                uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Smooth");
                FUN_00202a50(uVar27,&uStack_3ac);
                DAT_00820768 = uStack_3ac;
                DAT_00820ae0 = uStack_3ac;
              }
              if (abStack_3c8[0] == 1) {
                lVar25 = FUN_00202c6c(lStack_3c0,"Aimbot_Cross");
                if (lStack_3c0 + 8 != lVar25) {
                  uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Cross");
                  FUN_00202a50(uVar27,&uStack_3ac);
                  DAT_0082075c = uStack_3ac;
                }
                if (abStack_3c8[0] == 1) {
                  lVar25 = FUN_00202c6c(lStack_3c0,"Aimbot_Meter");
                  if (lStack_3c0 + 8 != lVar25) {
                    uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_Meter");
                    FUN_00202a50(uVar27,&uStack_3ac);
                    DAT_008206a4 = uStack_3ac;
                  }
                  if (abStack_3c8[0] == 1) {
                    lVar25 = FUN_00202de4(lStack_3c0,"Aimbot_IgnoreKnocked");
                    if (lStack_3c0 + 8 != lVar25) {
                      uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_IgnoreKnocked");
                      FUN_00202880(uVar27,&uStack_3ac);
                      DAT_0082076d = (byte)uStack_3ac;
                    }
                    if (abStack_3c8[0] == 1) {
                      lVar25 = FUN_00202f5c(lStack_3c0,"Aimbot_IgnoreBots");
                      if (lStack_3c0 + 8 != lVar25) {
                        uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_IgnoreBots");
                        FUN_00202880(uVar27,&uStack_3ac);
                        DAT_0082076e = (byte)uStack_3ac;
                      }
                      if (abStack_3c8[0] == 1) {
                        lVar25 = FUN_002030d4(lStack_3c0,"Aimbot_VisCheck");
                        if (lStack_3c0 + 8 != lVar25) {
                          uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_VisCheck");
                          FUN_00202880(uVar27,&uStack_3ac);
                          DAT_0082076f = (byte)uStack_3ac;
                        }
                        if (abStack_3c8[0] == 1) {
                          lVar25 = FUN_00202f5c(lStack_3c0,"Aimbot_RecoilHold");
                          if (lStack_3c0 + 8 != lVar25) {
                            uVar27 = FUN_001e2220(abStack_3c8,"Aimbot_RecoilHold");
                            FUN_00202880(uVar27,&uStack_3ac);
                            DAT_0082076c = (byte)uStack_3ac;
                          }
                          if (abStack_3c8[0] == 1) {
                            lVar25 = FUN_0020324c(lStack_3c0,"BT_Enable");
                            if (lStack_3c0 + 8 != lVar25) {
                              uVar27 = FUN_001e2220(abStack_3c8,"BT_Enable");
                              FUN_00202880(uVar27,&uStack_3ac);
                              DAT_0082067d = (byte)uStack_3ac;
                            }
                            if (abStack_3c8[0] == 1) {
                              lVar25 = FUN_0020324c(lStack_3c0,"BT_Active");
                              if (lStack_3c0 + 8 != lVar25) {
                                uVar27 = FUN_001e2220(abStack_3c8,"BT_Active");
                                FUN_00202880(uVar27,&uStack_3ac);
                                DAT_008209ac = (byte)uStack_3ac;
                              }
                              if (abStack_3c8[0] == 1) {
                                lVar25 = FUN_002033c4(lStack_3c0,"BT_IgnoreKnocked");
                                if (lStack_3c0 + 8 != lVar25) {
                                  uVar27 = FUN_001e2220(abStack_3c8,"BT_IgnoreKnocked");
                                  FUN_00202880(uVar27,&uStack_3ac);
                                  DAT_008209bc = (byte)uStack_3ac;
                                }
                                if (abStack_3c8[0] == 1) {
                                  lVar25 = FUN_0020353c(lStack_3c0,"BT_VisCheck");
                                  if (lStack_3c0 + 8 != lVar25) {
                                    uVar27 = FUN_001e2220(abStack_3c8,"BT_VisCheck");
                                    FUN_00202880(uVar27,&uStack_3ac);
                                    DAT_008209be = (byte)uStack_3ac;
                                  }
                                  if (abStack_3c8[0] == 1) {
                                    lVar25 = FUN_001f67fc(lStack_3c0,"ESP_Line");
                                    if (lStack_3c0 + 8 != lVar25) {
                                      uVar27 = FUN_001e2220(abStack_3c8,"ESP_Line");
                                      FUN_00202880(uVar27,&uStack_3ac);
                                      DAT_008206bd = (byte)uStack_3ac;
                                    }
                                    if (abStack_3c8[0] == 1) {
                                      lVar25 = FUN_002036b4(lStack_3c0,"ESP_Box");
                                      if (lStack_3c0 + 8 != lVar25) {
                                        uVar27 = FUN_001e2220(abStack_3c8,"ESP_Box");
                                        FUN_00202880(uVar27,&uStack_3ac);
                                        DAT_008206c6 = (byte)uStack_3ac;
                                      }
                                      if (abStack_3c8[0] == 1) {
                                        lVar25 = FUN_00202c6c(lStack_3c0,"ESP_Skeleton");
                                        if (lStack_3c0 + 8 != lVar25) {
                                          uVar27 = FUN_001e2220(abStack_3c8,"ESP_Skeleton");
                                          FUN_00202880(uVar27,&uStack_3ac);
                                          DAT_008206d6 = (byte)uStack_3ac;
                                        }
                                        if (abStack_3c8[0] == 1) {
                                          lVar25 = FUN_0020382c(lStack_3c0,"ESP_Health");
                                          if (lStack_3c0 + 8 != lVar25) {
                                            uVar27 = FUN_001e2220(abStack_3c8,"ESP_Health");
                                            FUN_00202880(uVar27,&uStack_3ac);
                                            DAT_008206bf = (byte)uStack_3ac;
                                          }
                                          if (abStack_3c8[0] == 1) {
                                            lVar25 = FUN_001f67fc(lStack_3c0,"ESP_Name");
                                            if (lStack_3c0 + 8 != lVar25) {
                                              uVar27 = FUN_001e2220(abStack_3c8,"ESP_Name");
                                              FUN_00202880(uVar27,&uStack_3ac);
                                              DAT_008206c0 = (byte)uStack_3ac;
                                            }
                                            if (abStack_3c8[0] == 1) {
                                              lVar25 = FUN_00202c6c(lStack_3c0,"ESP_Distance");
                                              if (lStack_3c0 + 8 != lVar25) {
                                                uVar27 = FUN_001e2220(abStack_3c8,"ESP_Distance");
                                                FUN_00202880(uVar27,&uStack_3ac);
                                                DAT_008206c1 = (byte)uStack_3ac;
                                              }
                                              if (abStack_3c8[0] == 1) {
                                                lVar25 = FUN_0020382c(lStack_3c0,"ESP_TeamID");
                                                if (lStack_3c0 + 8 != lVar25) {
                                                  uVar27 = FUN_001e2220(abStack_3c8,"ESP_TeamID");
                                                  FUN_00202880(uVar27,&uStack_3ac);
                                                  DAT_008206c2 = (byte)uStack_3ac;
                                                }
                                                if (abStack_3c8[0] == 1) {
                                                  lVar25 = FUN_0020353c(lStack_3c0,"ESP_Vehicle");
                                                  if (lStack_3c0 + 8 != lVar25) {
                                                    uVar27 = FUN_001e2220(abStack_3c8,"ESP_Vehicle")
                                                    ;
                                                    FUN_00202880(uVar27,&uStack_3ac);
                                                    DAT_008206cf = (byte)uStack_3ac;
                                                  }
                                                  if (abStack_3c8[0] == 1) {
                                                    lVar25 = FUN_0020353c(lStack_3c0,"ESP_Grenade");
                                                    if (lStack_3c0 + 8 != lVar25) {
                                                      uVar27 = FUN_001e2220(abStack_3c8,
                                                                            "ESP_Grenade");
                                                      FUN_00202880(uVar27,&uStack_3ac);
                                                      DAT_008206ce = (byte)uStack_3ac;
                                                    }
                                                    if (abStack_3c8[0] == 1) {
                                                      lVar25 = FUN_0020324c(lStack_3c0,"ESP_Alert");
                                                      if (lStack_3c0 + 8 != lVar25) {
                                                        uVar27 = FUN_001e2220(abStack_3c8,
                                                                              "ESP_Alert");
                                                        FUN_00202880(uVar27,&uStack_3ac);
                                                        DAT_008206cb = (byte)uStack_3ac;
                                                      }
                                                      if (abStack_3c8[0] == 1) {
                                                        lVar25 = FUN_0020382c(lStack_3c0,
                                                                              "ESP_Enable");
                                                        if (lStack_3c0 + 8 != lVar25) {
                                                          uVar27 = FUN_001e2220(abStack_3c8,
                                                                                "ESP_Enable");
                                                          FUN_00202880(uVar27,&uStack_3ac);
                                                          DAT_008206e4 = (byte)uStack_3ac;
                                                        }
                                                        if (abStack_3c8[0] == 1) {
                                                          lVar25 = FUN_00202c6c(lStack_3c0,
                                                                                "ESP_ShowBots");
                                                          if (lStack_3c0 + 8 != lVar25) {
                                                            uVar27 = FUN_001e2220(abStack_3c8,
                                                                                  "ESP_ShowBots");
                                                            FUN_00202880(uVar27,&uStack_3ac);
                                                            DAT_0082f560 = (byte)uStack_3ac;
                                                            DAT_008206ca = (byte)uStack_3ac ^ 1;
                                                          }
                                                          if (abStack_3c8[0] == 1) {
                                                            lVar25 = FUN_0020324c(lStack_3c0,
                                                                                  "Mem_Cross");
                                                            if (lStack_3c0 + 8 != lVar25) {
                                                              uVar27 = FUN_001e2220(abStack_3c8,
                                                                                    "Mem_Cross");
                                                              FUN_00202880(uVar27,&uStack_3ac);
                                                              DAT_008206d2 = (byte)uStack_3ac;
                                                            }
                                                            if (abStack_3c8[0] == 1) {
                                                              lVar25 = FUN_001f67fc(lStack_3c0,
                                                                                    "Mem_IPad");
                                                              if (lStack_3c0 + 8 != lVar25) {
                                                                uVar27 = FUN_001e2220(abStack_3c8,
                                                                                      "Mem_IPad");
                                                                FUN_00202880(uVar27,&uStack_3ac);
                                                                DAT_00820707 = (byte)uStack_3ac;
                                                              }
                                                              if (abStack_3c8[0] == 1) {
                                                                lVar25 = FUN_0020324c(lStack_3c0,
                                                                                      "Mem_Ipads");
                                                                if (lStack_3c0 + 8 != lVar25) {
                                                                  uVar27 = FUN_001e2220(abStack_3c8,
                                                                                        "Mem_Ipads")
                                                                  ;
                                                                  FUN_00202a50(uVar27,&uStack_3ac);
                                                                  DAT_00820670 = uStack_3ac;
                                                                }
                                                                if (abStack_3c8[0] == 1) {
                                                                  lVar25 = FUN_0020382c(lStack_3c0,
                                                                                        "Mem_Fps165"
                                                                                       );
                                                                  if (lStack_3c0 + 8 != lVar25) {
                                                                    uVar27 = FUN_001e2220(
                                                  abStack_3c8,"Mem_Fps165");
                                                  FUN_00202880(uVar27,&uStack_3ac);
                                                  DAT_00820864 = (byte)uStack_3ac;
                                                  }
                                                  if (abStack_3c8[0] == 1) {
                                                    lVar25 = FUN_0020353c(lStack_3c0,"Skin_Enable");
                                                    if (lStack_3c0 + 8 != lVar25) {
                                                      uVar27 = FUN_001e2220(abStack_3c8,
                                                                            "Skin_Enable");
                                                      FUN_00202880(uVar27,&uStack_3ac);
                                                      PTR_DAT_00758cd0[4] = (byte)uStack_3ac;
                                                    }
                                                    if (abStack_3c8[0] == 1) {
                                                      lVar25 = FUN_00202c6c(lStack_3c0,
                                                                            "Skin_Deadbox");
                                                      if (lStack_3c0 + 8 != lVar25) {
                                                        uVar27 = FUN_001e2220(abStack_3c8,
                                                                              "Skin_Deadbox");
                                                        FUN_00202880(uVar27,&uStack_3ac);
                                                        PTR_DAT_00758cd0[10] = (byte)uStack_3ac;
                                                      }
                                                      if (abStack_3c8[0] == 1) {
                                                        lVar25 = FUN_00202c6c(lStack_3c0,
                                                                              "Skin_KillMsg");
                                                        if (lStack_3c0 + 8 != lVar25) {
                                                          uVar27 = FUN_001e2220(abStack_3c8,
                                                                                "Skin_KillMsg");
                                                          FUN_00202880(uVar27,&uStack_3ac);
                                                          PTR_DAT_00758cd0[8] = (byte)uStack_3ac;
                                                        }
                                                        if (abStack_3c8[0] == 1) {
                                                          lVar25 = FUN_001f67fc(lStack_3c0,
                                                                                "Skin_Lua");
                                                          if (lStack_3c0 + 8 != lVar25) {
                                                            uVar27 = FUN_001e2220(abStack_3c8,
                                                                                  "Skin_Lua");
                                                            FUN_00202880(uVar27,&uStack_3ac);
                                                            DAT_00820776 = CONCAT11(DAT_00820776.
                                                                                    _1_1_,(byte)
                                                  uStack_3ac);
                                                  }
                                                  if (abStack_3c8[0] == 1) {
                                                    lVar25 = FUN_0020353c(lStack_3c0,"Skin_BangJo");
                                                    if (lStack_3c0 + 8 != lVar25) {
                                                      uVar27 = FUN_001e2220(abStack_3c8,
                                                                            "Skin_BangJo");
                                                      FUN_00202880(uVar27,&uStack_3ac);
                                                      DAT_00820776 = CONCAT11((byte)uStack_3ac,
                                                                              (undefined1)
                                                                              DAT_00820776);
                                                    }
                                                    if (abStack_3c8[0] == 1) {
                                                      lVar25 = FUN_00202708(lStack_3c0,
                                                                            "Settings_Lang");
                                                      if (lStack_3c0 + 8 != lVar25) {
                                                        uVar27 = FUN_001e2220(abStack_3c8,
                                                                              "Settings_Lang");
                                                        FUN_0020587c(uVar27,&uStack_3ac);
                                                        DAT_0082f904 = uStack_3ac;
                                                        DAT_0082f938 = uStack_3ac;
                                                        DAT_008209cc = uStack_3ac;
                                                      }
                                                      if (abStack_3c8[0] == 1) {
                                                        lVar25 = FUN_002033c4(lStack_3c0,
                                                                              "Settings_Opacity");
                                                        if (lStack_3c0 + 8 != lVar25) {
                                                          uVar27 = FUN_001e2220(abStack_3c8,
                                                                                "Settings_Opacity");
                                                          FUN_00202a50(uVar27,&uStack_3ac);
                                                          DAT_00820a90 = uStack_3ac;
                                                        }
                                                        if ((abStack_3c8[0] == 1) &&
                                                           (lVar25 = FUN_00202c6c(lStack_3c0,
                                                                                  "Settings_Fps"),
                                                           lStack_3c0 + 8 != lVar25)) {
                                                          uVar27 = FUN_001e2220(abStack_3c8,
                                                                                "Settings_Fps");
                                                          FUN_00202880(uVar27,&uStack_3ac);
                                                          DAT_0082f2c4 = (byte)uStack_3ac;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_00204a08(&lStack_3c0,abStack_3c8[0]);
      uStack_210 = puVar17 + 0x18;
      apuStack_158[0] = puVar17 + 0x40;
      FUN_001f4964(alStack_200);
      std::__ndk1::ios_base::~ios_base((ios_base *)apuStack_158);
      DAT_00820774 = 1;
      DAT_00820776 = 0x101;
    }
    DAT_0082f8f0 = &LAB_001e8740;
    lVar25 = 0;
    DAT_0082f8fc = 0x811c9dc5;
    DAT_0082f8f8 = 1;
    do {
      pbVar1 = &LAB_001e8740 + lVar25;
      lVar25 = lVar25 + 1;
      DAT_0082f8fc = (DAT_0082f8fc ^ *pbVar1) * 0x1000193;
    } while (lVar25 != 0x40);
    DAT_0082f2a0 = '\x01';
  }
  lVar25 = FUN_00226170();
  fVar56 = (float)DAT_0082f2a8;
  *(float *)(lVar25 + 8) = (float)DAT_0082f2a4;
  *(float *)(lVar25 + 0xc) = fVar56;
  FUN_00264650();
  FUN_00263464(DAT_0082f2a4,DAT_0082f2a8);
  FUN_002270e4();
  lVar25 = FUN_00226170();
  DAT_0082fc05 = 0;
  if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
    DAT_0082f880 = 0;
    DAT_0082f898 = 0;
    DAT_0082f8a0._0_4_ = 0.0;
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f8a0._4_4_ = 0.0;
    DAT_0082f8a8 = 0.0;
    DAT_0082f8ac = '\0';
    __cxa_guard_release(&DAT_0082f8b0);
  }
  if (DAT_0082f880 == 0) {
LAB_001ec840:
    DAT_0082fc06 = '\0';
    DAT_0082fc07 = '\0';
  }
  else {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898 = 0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = '\0';
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if (DAT_0082f888 == (char *)0x0) goto LAB_001ec840;
    if (DAT_0082fc06 == '\x01') {
      fVar47 = *(float *)(lVar25 + 0xc);
      fVar56 = DAT_0047a160;
      if (DAT_0047a160 <= fVar47 * DAT_0047a1bc) {
        fVar56 = fVar47 * DAT_0047a1bc;
      }
      if (((*(float *)(lVar25 + 0x120) < 0.0) ||
          (*(float *)(lVar25 + 8) < *(float *)(lVar25 + 0x120))) ||
         (*(float *)(lVar25 + 0x124) < fVar47 - (fVar56 * 5.0 + fVar56 * DAT_0047a128 * 6.0))) {
        cVar7 = *(char *)(lVar25 + 0x418);
      }
      else {
        cVar7 = *(char *)(lVar25 + 0x418);
        if (*(float *)(lVar25 + 0x124) <= fVar47) {
          if (*(char *)(lVar25 + 0x41d) != '\0' || cVar7 != '\0') {
            DAT_0082fc05 = 1;
            DAT_0082f478 = *(undefined8 *)(lVar25 + 0x120);
            *(undefined1 *)(lVar25 + 0x418) = 0;
            *(undefined1 *)(lVar25 + 0x41d) = 0;
          }
          goto LAB_001ec850;
        }
      }
      if (cVar7 != '\0') {
        if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0))
        {
          DAT_0082f880 = 0;
          DAT_0082f898 = 0;
          DAT_0082f8a0._0_4_ = 0.0;
          DAT_0082f888 = (char *)0x0;
          DAT_0082f890 = 0;
          DAT_0082f8a0._4_4_ = 0.0;
          DAT_0082f8a8 = 0.0;
          DAT_0082f8ac = '\0';
          __cxa_guard_release(&DAT_0082f8b0);
        }
        if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0))
        {
          DAT_0082f880 = 0;
          DAT_0082f898 = 0;
          DAT_0082f8a0._0_4_ = 0.0;
          DAT_0082f888 = (char *)0x0;
          DAT_0082f890 = 0;
          DAT_0082f8a0._4_4_ = 0.0;
          DAT_0082f8a8 = 0.0;
          DAT_0082f8ac = '\0';
          __cxa_guard_release(&DAT_0082f8b0);
        }
        if (DAT_0082f880 != 0) {
          uVar29 = DAT_0082f898;
          if ((DAT_0082f8b0 & 1) == 0) {
            iVar21 = __cxa_guard_acquire(&DAT_0082f8b0);
            uVar29 = DAT_0082f898;
            if (iVar21 != 0) {
              DAT_0082f880 = 0;
              DAT_0082f898 = 0;
              DAT_0082f8a0._0_4_ = 0.0;
              DAT_0082f888 = (char *)0x0;
              DAT_0082f890 = 0;
              DAT_0082f8a0._4_4_ = 0.0;
              DAT_0082f8a8 = 0.0;
              DAT_0082f8ac = '\0';
              __cxa_guard_release(&DAT_0082f8b0);
              uVar29 = DAT_0082f898;
            }
          }
          DAT_0082f898 = uVar29;
          if ((DAT_0082f888 != (char *)0x0) && (DAT_0082f8ac != '\0')) {
            DAT_0082f898._4_4_ = (float)(uVar29 >> 0x20);
            bVar20 = DAT_0082f898._4_4_ <= *(float *)(lVar25 + 0x120);
            if ((bVar20) &&
               (((*(float *)(lVar25 + 0x120) <= DAT_0082f8a0._4_4_ &&
                 ((float)DAT_0082f8a0 <= *(float *)(lVar25 + 0x124))) &&
                (*(float *)(lVar25 + 0x124) <= DAT_0082f8a8)))) goto LAB_001ec850;
          }
        }
        if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0))
        {
          DAT_0082f880 = 0;
          DAT_0082f898 = 0;
          DAT_0082f8a0._0_4_ = 0.0;
          DAT_0082f888 = (char *)0x0;
          DAT_0082f890 = 0;
          DAT_0082f8a0._4_4_ = 0.0;
          DAT_0082f8a8 = 0.0;
          DAT_0082f8ac = 0;
          __cxa_guard_release(&DAT_0082f8b0);
        }
        DAT_0082f880 = 0;
        DAT_0082f8ac = '\0';
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f898 = DAT_0082f898 & 0xffffffff00000000;
        DAT_0082fc06 = '\0';
        DAT_0082fc07 = '\0';
      }
    }
  }
LAB_001ec850:
  FUN_0022629c();
  FUN_001dcdb0();
  uVar27 = FUN_001db70c();
  FUN_0026c9c4(uVar27,DAT_0082f398,DAT_0082f390);
  if (DAT_0082f564 == '\0') {
    FUN_001e7354(&DAT_0082f564);
  }
  else if (DAT_0082f4a0 == '\x01') {
    uVar29 = FUN_001e8780();
    if ((uVar29 & 1) == 0) {
LAB_001ec8e8:
      DAT_0082f4a0 = '\0';
    }
    else if (DAT_0082f4a0 == '\x01') {
      uVar29 = FUN_001e8780();
      if ((uVar29 & 1) == 0) goto LAB_001ec8e8;
      FUN_001e8afc();
    }
  }
  else {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898 = 0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    DAT_0082f880 = 0;
    DAT_0082f8ac = '\0';
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f898 = DAT_0082f898 & 0xffffffff00000000;
    FUN_001e6478();
  }
  if (DAT_0082f498 == '\x01') {
    FUN_001e5ffc(PTR_DAT_00820650,DAT_00820658);
  }
  if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
    DAT_0082f880 = 0;
    DAT_0082f898 = 0;
    DAT_0082f8a0._0_4_ = 0.0;
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f8a0._4_4_ = 0.0;
    DAT_0082f8a8 = 0.0;
    DAT_0082f8ac = '\0';
    __cxa_guard_release(&DAT_0082f8b0);
  }
  if (DAT_0082f880 != 0) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898 = 0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = '\0';
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if (DAT_0082f888 != (char *)0x0) {
      lVar25 = FUN_00226170();
      DAT_0082fc06 = '\x01';
      fVar47 = *(float *)(lVar25 + 0xc) * DAT_0047a1bc;
      fVar56 = DAT_0047a160;
      if (DAT_0047a160 <= fVar47) {
        fVar56 = fVar47;
      }
      fVar61 = fVar56 * DAT_0047a128;
      fVar59 = *(float *)(lVar25 + 0xc) - (fVar56 * 5.0 + fVar61 * 6.0);
      uVar27 = FUN_00224ea0();
      uVar30 = FUN_00233558();
      fVar47 = (float)FUN_00233568();
      fVar48 = *(float *)(lVar25 + 8);
      uStack_210 = (undefined *)((ulong)(uint)fVar59 << 0x20);
      FUN_00249060(0,uVar27,&uStack_210,(float *)(lVar25 + 8),0xeb0e0c0c,0);
      DAT_0082f488 = DAT_0082f480;
      if (((DAT_0082fc28 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082fc28), iVar21 != 0)) {
        DAT_0082fc10 = 0;
        DAT_0082fc18 = (long *)0x0;
        DAT_0082fc20 = (long *)0x0;
        __cxa_atexit(&LAB_00203b90,&DAT_0082fc10,&PTR_LOOP_00759000);
        __cxa_guard_release(&DAT_0082fc28);
      }
      if (((DAT_0082fc48 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082fc48), iVar21 != 0)) {
        DAT_0082fc30 = 0;
        DAT_0082fc38 = (undefined8 *)0x0;
        DAT_0082fc40 = (undefined8 *)0x0;
        __cxa_atexit(&LAB_00203b90,&DAT_0082fc30,&PTR_LOOP_00759000);
        __cxa_guard_release(&DAT_0082fc48);
      }
      if ((DAT_0082fc50 & 1) == 0) {
        DAT_0082fc50 = 1;
        FUN_00203c08(&uStack_210);
        plVar5 = DAT_0082fc18;
        if (DAT_0082fc18 < DAT_0082fc20) {
          DAT_0082fc18[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[1] = (long)puStack_208;
          *plVar5 = (long)uStack_210;
          plVar5[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc18 = DAT_0082fc18 + 3;
        }
        else {
                    /* try { // try from 001eca84 to 001eca93 has its CatchHandler @ 001edd1c */
          FUN_0020468c(&DAT_0082fc10,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        FUN_00203ed0(&uStack_210,"qwertyuiop",10);
        plVar5 = DAT_0082fc18;
        if (DAT_0082fc18 < DAT_0082fc20) {
          DAT_0082fc18[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[1] = (long)puStack_208;
          *plVar5 = (long)uStack_210;
          plVar5[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc18 = DAT_0082fc18 + 3;
        }
        else {
                    /* try { // try from 001ecaf8 to 001ecb07 has its CatchHandler @ 001edd18 */
          FUN_0020468c(&DAT_0082fc10,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        FUN_00203ed0(&uStack_210,"asdfghjkl",9);
        plVar5 = DAT_0082fc18;
        if (DAT_0082fc18 < DAT_0082fc20) {
          DAT_0082fc18[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[1] = (long)puStack_208;
          *plVar5 = (long)uStack_210;
          plVar5[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc18 = DAT_0082fc18 + 3;
        }
        else {
                    /* try { // try from 001ecb6c to 001ecb7b has its CatchHandler @ 001edd14 */
          FUN_0020468c(&DAT_0082fc10,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        FUN_00203ed0(&uStack_210,"zxcvbnm",7);
        plVar5 = DAT_0082fc18;
        if (DAT_0082fc18 < DAT_0082fc20) {
          DAT_0082fc18[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[1] = (long)puStack_208;
          *plVar5 = (long)uStack_210;
          plVar5[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc18 = DAT_0082fc18 + 3;
        }
        else {
                    /* try { // try from 001ecbe0 to 001ecbef has its CatchHandler @ 001edd10 */
          FUN_0020468c(&DAT_0082fc10,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        FUN_00204084(&uStack_210,0);
        plVar5 = DAT_0082fc18;
        if (DAT_0082fc18 < DAT_0082fc20) {
          DAT_0082fc18[1] = 0;
          plVar5[2] = 0;
          *plVar5 = 0;
          plVar5[1] = (long)puStack_208;
          *plVar5 = (long)uStack_210;
          plVar5[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc18 = DAT_0082fc18 + 3;
        }
        else {
                    /* try { // try from 001ecc4c to 001ecc5b has its CatchHandler @ 001edd0c */
          FUN_0020468c(&DAT_0082fc10,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        FUN_00203c08(&uStack_210);
        puVar28 = DAT_0082fc38;
        if (DAT_0082fc38 < DAT_0082fc40) {
          DAT_0082fc38[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          puVar28[1] = puStack_208;
          *puVar28 = uStack_210;
          puVar28[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc38 = DAT_0082fc38 + 3;
        }
        else {
                    /* try { // try from 001eccbc to 001ecccb has its CatchHandler @ 001edd08 */
          FUN_0020468c(&DAT_0082fc30,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        puVar31 = operator_new(0x30);
        uVar15 = _UNK_00479b98;
        uVar14 = _DAT_00479b90;
        uVar13 = _UNK_00479b88;
        uVar12 = _DAT_00479b80;
        uVar11 = _DAT_00479b70;
        puStack_290 = puVar31 + 6;
        puVar31[1] = _UNK_00479b78;
        *puVar31 = uVar11;
        puVar31[3] = uVar13;
        puVar31[2] = uVar12;
        puVar31[5] = uVar15;
        puVar31[4] = uVar14;
                    /* try { // try from 001ecd14 to 001ecd1f has its CatchHandler @ 001edd4c */
        uStack_298 = puVar31;
        puStack_288 = puStack_290;
        FUN_002044dc(&uStack_210,&uStack_298);
        puVar28 = DAT_0082fc38;
        if (DAT_0082fc38 < DAT_0082fc40) {
          DAT_0082fc38[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          puVar28[1] = puStack_208;
          *puVar28 = uStack_210;
          puVar28[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc38 = DAT_0082fc38 + 3;
        }
        else {
                    /* try { // try from 001ecd60 to 001ecd6f has its CatchHandler @ 001edcec */
          FUN_0020468c(&DAT_0082fc30,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        operator_delete(puVar31);
        puVar31 = operator_new(0x2c);
        uVar14 = _UNK_00479bb8;
        uVar13 = _DAT_00479bb0;
        uVar12 = _UNK_00479ba8;
        uVar11 = _DAT_00479ba0;
        puStack_290 = (undefined8 *)((long)puVar31 + 0x2c);
        puVar31[4] = 0x43600000434;
        *(undefined4 *)(puVar31 + 5) = 0x44d;
        puVar31[1] = uVar12;
        *puVar31 = uVar11;
        puVar31[3] = uVar14;
        puVar31[2] = uVar13;
                    /* try { // try from 001ecdc8 to 001ecdd3 has its CatchHandler @ 001edd48 */
        uStack_298 = puVar31;
        puStack_288 = puStack_290;
        FUN_002044dc(&uStack_210,&uStack_298);
        puVar28 = DAT_0082fc38;
        if (DAT_0082fc38 < DAT_0082fc40) {
          DAT_0082fc38[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          puVar28[1] = puStack_208;
          *puVar28 = uStack_210;
          puVar28[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc38 = DAT_0082fc38 + 3;
        }
        else {
                    /* try { // try from 001ece14 to 001ece23 has its CatchHandler @ 001edce8 */
          FUN_0020468c(&DAT_0082fc30,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        operator_delete(puVar31);
        puVar31 = operator_new(0x28);
        uVar14 = _UNK_00479bd8;
        uVar13 = _DAT_00479bd0;
        uVar12 = _UNK_00479bc8;
        uVar11 = _DAT_00479bc0;
        puStack_290 = puVar31 + 5;
        puVar31[4] = 0x4510000044e;
        puVar31[1] = uVar12;
        *puVar31 = uVar11;
        puVar31[3] = uVar14;
        puVar31[2] = uVar13;
                    /* try { // try from 001ece74 to 001ece7f has its CatchHandler @ 001edd44 */
        uStack_298 = puVar31;
        puStack_288 = puStack_290;
        FUN_002044dc(&uStack_210,&uStack_298);
        puVar28 = DAT_0082fc38;
        if (DAT_0082fc38 < DAT_0082fc40) {
          DAT_0082fc38[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          puVar28[1] = puStack_208;
          *puVar28 = uStack_210;
          puVar28[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc38 = DAT_0082fc38 + 3;
        }
        else {
                    /* try { // try from 001ecec0 to 001ececf has its CatchHandler @ 001edce4 */
          FUN_0020468c(&DAT_0082fc30,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
        operator_delete(puVar31);
        FUN_00204084(&uStack_210,1);
        puVar28 = DAT_0082fc38;
        if (DAT_0082fc38 < DAT_0082fc40) {
          DAT_0082fc38[1] = 0;
          puVar28[2] = 0;
          *puVar28 = 0;
          puVar28[1] = puStack_208;
          *puVar28 = uStack_210;
          puVar28[2] = alStack_200[0];
          puStack_208 = (undefined *)0x0;
          uStack_210 = (undefined *)0x0;
          alStack_200[0] = 0;
          DAT_0082fc38 = DAT_0082fc38 + 3;
        }
        else {
                    /* try { // try from 001ecf34 to 001ecf43 has its CatchHandler @ 001edce0 */
          FUN_0020468c(&DAT_0082fc30,&uStack_210);
          if (uStack_210 != (undefined *)0x0) {
            puStack_208 = uStack_210;
            operator_delete(uStack_210);
          }
        }
      }
      fVar16 = DAT_0047a100;
      plVar5 = &DAT_0082fc10;
      if (DAT_0082fc04 != 0) {
        plVar5 = &DAT_0082fc30;
      }
      plVar40 = (long *)*plVar5;
      plVar5 = (long *)plVar5[1];
      if (plVar40 != plVar5) {
        fVar49 = fVar56 + fVar61 * 0.5;
        fVar50 = fVar61 * DAT_0047a184;
        fVar51 = fVar61 * DAT_0047a1c4;
        fVar59 = fVar61 + fVar59;
        fVar52 = fVar61 * DAT_0047a1c8;
        do {
          pfVar37 = (float *)*plVar40;
          pfVar6 = (float *)plVar40[1];
          fVar53 = 0.0;
          if (pfVar37 != pfVar6) {
            fVar53 = 0.0;
            pfVar34 = pfVar37;
            do {
              pfVar36 = pfVar34 + 5;
              pfVar34 = pfVar34 + 6;
              fVar53 = fVar53 + *pfVar36;
            } while (pfVar6 != pfVar34);
          }
          if (pfVar37 != pfVar6) {
            lVar35 = (long)pfVar6 - (long)pfVar37;
            fVar64 = fVar59 - fVar61 * 0.25;
            fVar58 = fVar61;
            do {
              auStack_3a8[0] = 0;
              fVar62 = *pfVar37;
              fVar63 = ((fVar48 - fVar61 * ((float)(ulong)((lVar35 >> 3) * -0x5555555555555555) +
                                           1.0)) / fVar53) * pfVar37[5] +
                       fVar61 * (pfVar37[5] + -1.0);
              if (fVar62 == 0.0) {
                fVar60 = pfVar37[4];
                pcVar44 = *(char **)(pfVar37 + 2);
                fVar45 = fVar60;
              }
              else {
                fVar54 = fVar62;
                if (DAT_0082fc08 == 0) {
                  if (fVar62 == 4.48416e-44) {
                    fVar54 = 4.48416e-44;
                    pcVar44 = "SPACE";
                  }
                  else {
LAB_001ed170:
                    if ((uint)fVar62 < 0x80) goto LAB_001ed17c;
                    if ((uint)fVar62 < 0x800) {
                      uVar29 = (ulong)(uint)fVar62;
                      goto LAB_001ed194;
                    }
                    pcVar44 = (char *)auStack_3a8;
                    auStack_3a8[0] =
                         (ulong)(CONCAT12(SUB41(fVar62,0),
                                          CONCAT11((char)((uint)fVar62 >> 6),
                                                   (char)((uint)fVar62 >> 0xc))) & 0xff3fff | 0x80e0
                                ) & 0xffffffffff3fffff | 0x800000;
                  }
                }
                else if ((int)fVar62 - 0x61U < 0x1a) {
                  fVar54 = (float)((int)fVar62 - 0x20);
LAB_001ed17c:
                  pcVar44 = (char *)auStack_3a8;
                  auStack_3a8[0] = (ulong)SUB41(fVar54,0);
                }
                else {
                  if ((int)fVar62 - 0x430U < 0x20) {
                    uVar29 = (ulong)((int)fVar62 - 0x20);
                  }
                  else {
                    if (fVar62 == 4.48416e-44) {
                      pcVar44 = "SPACE";
                      goto LAB_001ed1b0;
                    }
                    if (fVar62 != 1.54843e-42) goto LAB_001ed170;
                    uVar29 = 0x401;
                  }
LAB_001ed194:
                  pcVar44 = (char *)auStack_3a8;
                  auStack_3a8[0] =
                       (ulong)(CONCAT11((char)uVar29,(char)(uVar29 >> 6)) & 0x3fff | 0x80c0);
                  fVar54 = (float)uVar29;
                }
LAB_001ed1b0:
                fVar60 = pfVar37[4];
                fVar45 = -NAN;
                if (fVar62 != 4.48416e-44) {
                  fVar45 = fVar54;
                }
              }
              uVar2 = 0xff2a2a2a;
              if (fVar60 == -NAN && DAT_0082fc08 != 0) {
                uVar2 = 0xff1e1e5a;
              }
              uVar3 = 0xff28461e;
              if (fVar60 != -NAN) {
                uVar3 = uVar2;
              }
              uVar2 = 0xff28283c;
              if (fVar60 != -NAN) {
                uVar2 = uVar3;
              }
              uVar3 = 0xff4b2d28;
              if (fVar60 != -NAN) {
                uVar3 = uVar2;
              }
              uStack_298 = (undefined8 *)CONCAT44(fVar56 + fVar59,fVar58 + fVar63);
              uStack_210 = (undefined *)CONCAT44(fVar59,fVar58);
              FUN_00249060(0x40c00000,uVar27,&uStack_210,&uStack_298,uVar3,0);
              FUN_00248f7c(0x40c00000,0x3fc00000,uVar27,&uStack_210,&uStack_298,0xff5a5a5a,0);
              fVar60 = fVar16;
              fVar54 = (float)FUN_002515a4(fVar47,fVar16,0,uVar30,pcVar44,0,0);
              fVar57 = fVar63 - fVar50;
              fVar62 = fVar47;
              if ((0.0 < fVar57) && (fVar57 < fVar54)) {
                fVar62 = fVar47 * (fVar57 / fVar54);
                fVar60 = fVar16;
                fVar54 = (float)FUN_002515a4(fVar62,fVar16,0,uVar30,pcVar44,0,0);
              }
              fStack_320 = (fVar63 - fVar54) * 0.5 + (float)uStack_210;
              fStack_31c = (fVar56 - fVar60) * 0.5 + uStack_210._4_4_;
              FUN_00249528(fVar62,0,uVar27,uVar30,&fStack_320,0xfff0f0f0,pcVar44,0,0);
              pfVar36 = DAT_0082f488;
              pfVar34 = DAT_0082f480;
              fVar62 = *pfVar37;
              fVar60 = fVar58 - fVar51;
              fVar54 = fVar52 + fVar63;
              if (DAT_0082f488 < DAT_0082f490) {
                *DAT_0082f488 = fVar60;
                pfVar36[1] = fVar64;
                pfVar36[4] = fVar45;
                pfVar36[5] = fVar62;
                pfVar36[2] = fVar54;
                pfVar36[3] = fVar49;
                DAT_0082f488 = DAT_0082f488 + 6;
              }
              else {
                sVar32 = (long)DAT_0082f488 - (long)DAT_0082f480;
                uVar29 = ((long)sVar32 >> 3) * -0x5555555555555555 + 1;
                if (0xaaaaaaaaaaaaaaa < uVar29) {
                    /* WARNING: Subroutine does not return */
                  FUN_001d9034(&DAT_0082f480);
                }
                lVar41 = (long)DAT_0082f490 - (long)DAT_0082f480 >> 3;
                uVar43 = 0xaaaaaaaaaaaaaaa;
                if ((ulong)(lVar41 * -0x5555555555555555) < 0x555555555555555) {
                  uVar39 = lVar41 * 0x5555555555555556;
                  uVar43 = uVar29;
                  if (uVar29 <= uVar39) {
                    uVar43 = uVar39;
                  }
                  if (uVar43 != 0) goto LAB_001ed3d4;
                  pvVar26 = (void *)0x0;
                }
                else {
LAB_001ed3d4:
                  pvVar26 = operator_new(uVar43 * 0x18);
                }
                pfVar36 = (float *)((long)pvVar26 + ((long)sVar32 >> 3) * 8);
                *pfVar36 = fVar60;
                pfVar36[1] = fVar64;
                lVar41 = SUB168(SEXT816((long)sVar32) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                pfVar46 = (float *)((long)pvVar26 + uVar43 * 0x18);
                pfVar36[4] = fVar45;
                pfVar36[5] = fVar62;
                __dest = pfVar36 + ((lVar41 >> 2) - (lVar41 >> 0x3f)) * 6;
                pfVar36[2] = fVar54;
                pfVar36[3] = fVar49;
                if (0 < (long)sVar32) {
                  memcpy(__dest,pfVar34,sVar32);
                }
                DAT_0082f480 = __dest;
                DAT_0082f488 = pfVar36 + 6;
                DAT_0082f490 = pfVar46;
                if (pfVar34 != (float *)0x0) {
                  operator_delete(pfVar34);
                }
              }
              pfVar37 = pfVar37 + 6;
              fVar58 = fVar58 + fVar61 + fVar63;
            } while (pfVar6 != pfVar37);
          }
          plVar40 = plVar40 + 3;
          fVar59 = fVar56 + fVar61 + fVar59;
        } while (plVar40 != plVar5);
      }
      if ((DAT_0082fc05 & 1) != 0) {
        if (DAT_0082f480 != DAT_0082f488) {
          pfVar37 = DAT_0082f480;
          do {
            if ((((*pfVar37 <= (float)DAT_0082f478) &&
                 ((float)DAT_0082f478 <= *pfVar37 + pfVar37[2])) &&
                (pfVar37[1] <= DAT_0082f478._4_4_)) &&
               (DAT_0082f478._4_4_ <= pfVar37[1] + pfVar37[3])) {
              DAT_0082fc05 = 0;
              switch(pfVar37[4]) {
              case -NAN:
                DAT_0082fc04 = DAT_0082fc04 ^ 1;
                goto LAB_001ed51c;
              case -NAN:
                if (((DAT_0082f8b0 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
                  DAT_0082f880 = 0;
                  DAT_0082f898 = 0;
                  DAT_0082f8a0._0_4_ = 0.0;
                  DAT_0082f888 = (char *)0x0;
                  DAT_0082f890 = 0;
                  DAT_0082f8a0._4_4_ = 0.0;
                  DAT_0082f8a8 = 0.0;
                  DAT_0082f8ac = 0;
                  __cxa_guard_release(&DAT_0082f8b0);
                }
                DAT_0082f880 = 0;
                DAT_0082f8ac = '\0';
                DAT_0082f888 = (char *)0x0;
                DAT_0082f890 = 0;
                DAT_0082f898 = DAT_0082f898 & 0xffffffff00000000;
                DAT_0082fc06 = '\0';
                DAT_0082fc07 = '\0';
                goto LAB_001ed940;
              case -NAN:
                if (((DAT_0082f8b0 & 1) == 0) &&
                   (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
                  DAT_0082f880 = 0;
                  DAT_0082f898 = 0;
                  DAT_0082f8a0._0_4_ = 0.0;
                  DAT_0082f888 = (char *)0x0;
                  DAT_0082f890 = 0;
                  DAT_0082f8a0._4_4_ = 0.0;
                  DAT_0082f8a8 = 0.0;
                  DAT_0082f8ac = '\0';
                  __cxa_guard_release(&DAT_0082f8b0);
                }
                pcVar44 = DAT_0082f888;
                if (DAT_0082f888 != (char *)0x0) {
                  iVar21 = (int)DAT_0082f890;
                  if (1 < (int)DAT_0082f890) {
                    sVar32 = strlen(DAT_0082f888);
                    iVar22 = 0;
                    if (-1 < DAT_0082f890) {
                      iVar22 = DAT_0082f890._4_4_;
                    }
                    iVar24 = (int)sVar32;
                    iVar4 = iVar24;
                    if (iVar22 <= iVar24) {
                      iVar4 = iVar22;
                    }
                    if ((DAT_0082f890 < 0) || (iVar24 < iVar22)) {
                      DAT_0082f890 = CONCAT44(iVar4,(int)DAT_0082f890);
                    }
                    if (iVar24 + 1 < iVar21) {
                      memmove(pcVar44 + iVar4 + 1,pcVar44 + iVar4,(long)((iVar24 + 1) - iVar4));
                      DAT_0082f888[(int)DAT_0082f890._4_4_] = ' ';
                      DAT_0082f890 = CONCAT44(DAT_0082f890._4_4_ + 1,(int)DAT_0082f890);
                    }
                  }
                }
                goto LAB_001ed51c;
              case -NAN:
                DAT_0082fc08 = DAT_0082fc08 ^ 1;
                goto LAB_001ed51c;
              case -NAN:
                goto switchD_001ed674_caseD_ffffffff;
              default:
                if (0 < (int)pfVar37[4]) {
                  FUN_002039a4();
                }
                goto LAB_001ed51c;
              }
            }
            pfVar37 = pfVar37 + 6;
          } while (DAT_0082f488 != pfVar37);
        }
        DAT_0082fc05 = 0;
      }
      goto LAB_001ed51c;
    }
  }
  DAT_0082fc06 = '\0';
  DAT_0082fc07 = '\0';
  goto LAB_001ed940;
switchD_001ed674_caseD_ffffffff:
  if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
    DAT_0082f880 = 0;
    DAT_0082f898 = 0;
    DAT_0082f8a0._0_4_ = 0.0;
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f8a0._4_4_ = 0.0;
    DAT_0082f8a8 = 0.0;
    DAT_0082f8ac = '\0';
    __cxa_guard_release(&DAT_0082f8b0);
  }
  pcVar44 = DAT_0082f888;
  if (DAT_0082f888 != (char *)0x0) {
    sVar32 = strlen(DAT_0082f888);
    uVar19 = DAT_0082f890._4_4_;
    uVar23 = (uint)sVar32;
    uVar38 = DAT_0082f890._4_4_;
    if ((int)uVar23 < (int)DAT_0082f890._4_4_) {
      DAT_0082f890 = CONCAT44(uVar23,(int)DAT_0082f890);
      uVar38 = uVar23;
    }
    if (0 < (int)uVar38) {
      uVar8 = ~uVar23;
      lVar35 = (long)(int)uVar38;
      if ((int)uVar8 < (int)~uVar19) {
        uVar8 = ~uVar19;
      }
      lVar41 = lVar35 << 0x20;
      lVar42 = lVar35;
      iVar21 = -2 - uVar8;
      do {
        iVar22 = iVar21;
        lVar41 = lVar41 + -0x100000000;
        if (lVar42 < 2) break;
        lVar10 = lVar42 + -1;
        lVar42 = lVar42 + -1;
        iVar21 = iVar22 + -1;
      } while ((pcVar44[lVar10] & 0xc0U) == 0x80);
      memmove(pcVar44 + (lVar41 >> 0x20),pcVar44 + lVar35,(long)(int)((uVar23 + 1) - uVar38));
      DAT_0082f890 = CONCAT44(iVar22,(int)DAT_0082f890);
    }
  }
  DAT_0082fc07 = '\x01';
  dVar55 = (double)FUN_002261a0();
  DAT_0082fc0c = (float)dVar55 + DAT_0047a1cc;
LAB_001ed51c:
  if (DAT_0082fc07 == '\x01') {
    dVar55 = (double)FUN_002261a0();
    if (*(char *)(lVar25 + 0x128) == '\0') {
      DAT_0082fc07 = '\0';
    }
    else if (DAT_0082fc0c <= (float)dVar55) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0082f8b0), iVar21 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898 = 0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = '\0';
        __cxa_guard_release(&DAT_0082f8b0);
      }
      pcVar44 = DAT_0082f888;
      if (DAT_0082f888 != (char *)0x0) {
        sVar32 = strlen(DAT_0082f888);
        uVar19 = DAT_0082f890._4_4_;
        uVar23 = (uint)sVar32;
        uVar38 = DAT_0082f890._4_4_;
        if ((int)uVar23 < (int)DAT_0082f890._4_4_) {
          DAT_0082f890 = CONCAT44(uVar23,(int)DAT_0082f890);
          uVar38 = uVar23;
        }
        if (0 < (int)uVar38) {
          uVar8 = ~uVar23;
          lVar25 = (long)(int)uVar38;
          if ((int)uVar8 < (int)~uVar19) {
            uVar8 = ~uVar19;
          }
          lVar35 = lVar25 << 0x20;
          lVar41 = lVar25;
          iVar21 = -2 - uVar8;
          do {
            iVar22 = iVar21;
            lVar35 = lVar35 + -0x100000000;
            if (lVar41 < 2) break;
            lVar42 = lVar41 + -1;
            lVar41 = lVar41 + -1;
            iVar21 = iVar22 + -1;
          } while ((pcVar44[lVar42] & 0xc0U) == 0x80);
          memmove(pcVar44 + (lVar35 >> 0x20),pcVar44 + lVar25,(long)(int)((uVar23 + 1) - uVar38));
          DAT_0082f890 = CONCAT44(iVar22,(int)DAT_0082f890);
        }
      }
      DAT_0082fc0c = (float)dVar55 + DAT_0047a1d0;
    }
  }
LAB_001ed940:
  FUN_00230db4();
  FUN_00226180();
  FUN_00264a10();
  FUN_0026d910(DAT_0082f2a4,DAT_0082f2a8);
LAB_001ed968:
  (*DAT_0082f540)(param_1,param_2);
  if (*(long *)(lVar9 + 0x28) != lVar33) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


