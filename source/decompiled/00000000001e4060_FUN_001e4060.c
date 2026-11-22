// Recovered from libkentos.so by Ghidra 12.2
// address: 001e4060
// size: 5084
// name: FUN_001e4060
// namespace: Global
// signature: undefined FUN_001e4060(void)
// generated: 2026-11-22 21:46:09


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e4060(ulong *param_1,byte *param_2)

{
  uint uVar1;
  int *piVar2;
  size_t sVar3;
  undefined1 *__s1;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  size_t sVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  time_t tVar20;
  uint uVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  ulong uVar27;
  int *piVar28;
  void *pvVar29;
  char *pcVar30;
  void *__dest;
  ulong local_1200;
  ulong uStack_11f8;
  undefined1 *local_11f0;
  undefined1 *local_11e8;
  char *local_11e0;
  ulong uStack_11d8;
  int *local_11d0;
  byte local_11c8 [8];
  ulong local_11c0;
  void *local_11b8;
  char *local_11b0;
  size_t sStack_11a8;
  char *local_11a0;
  undefined8 local_1198;
  char *local_1190;
  ulong uStack_1188;
  int *local_1180;
  undefined8 local_1178;
  ulong local_1170;
  ulong local_1168;
  void *local_1160;
  undefined1 local_1158 [8];
  undefined1 auStack_1150 [8];
  ulong local_1148;
  size_t local_1140;
  void *local_1138;
  void *local_1130;
  undefined8 uStack_1128;
  char *local_1120;
  ulong uStack_1118;
  int *local_1110;
  char *local_1100;
  ulong uStack_10f8;
  int *local_10f0;
  ulong local_10e8;
  size_t local_10e0;
  char *local_10d8;
  ulong local_10d0;
  size_t local_10c8;
  void *local_10c0;
  undefined8 local_10b8;
  long alStack_10b0 [4];
  long *local_1090;
  char *local_1078;
  ulong uStack_1070;
  int *local_1068;
  
  lVar5 = tpidr_el0;
  lVar25 = *(long *)(lVar5 + 0x28);
  if ((((DAT_0082f388 == 0) || (lVar22 = *(long *)(DAT_0082f388 + 0x18), lVar22 == 0)) ||
      (plVar26 = *(long **)(lVar22 + 8), plVar26 == (long *)0x0)) ||
     (lVar22 = *(long *)(lVar22 + 0x18), lVar22 == 0)) {
    uVar6 = CONCAT62(s_Internal_Error_00482a0a._8_6_,s_Internal_Error_00482a0a._6_2_);
    uVar16 = CONCAT26(s_Internal_Error_00482a0a._6_2_,s_Internal_Error_00482a0a._0_6_);
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0x1c;
    *(undefined8 *)((long)param_1 + 7) = uVar6;
    *(undefined8 *)((long)param_1 + 1) = uVar16;
    *(undefined1 *)((long)param_1 + 0xf) = 0;
    goto LAB_001e4138;
  }
  (**(code **)(*plVar26 + 0x20))(plVar26,&local_10b8,0);
  local_10d0 = 0;
  local_10c8 = 0;
  local_10c0 = (void *)0x0;
  sVar12 = strlen((char *)param_2);
  if (0xffffffffffffffef < sVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_10d0);
  }
  if (sVar12 < 0x17) {
    pvVar29 = (void *)((ulong)&local_10d0 | 1);
    local_10d0 = CONCAT71(local_10d0._1_7_,(char)((int)sVar12 << 1));
    if (sVar12 != 0) goto LAB_001e418c;
  }
  else {
    uVar17 = sVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar29 = operator_new(uVar17);
    local_10d0 = uVar17 | 1;
    local_10c8 = sVar12;
    local_10c0 = pvVar29;
LAB_001e418c:
    memcpy(pvVar29,param_2,sVar12);
  }
  *(undefined1 *)((long)pvVar29 + sVar12) = 0;
                    /* try { // try from 001e41a4 to 001e4207 has its CatchHandler @ 001e5798 */
  pcVar13 = (char *)FUN_001e3924(local_10b8,lVar22);
  sVar12 = strlen(pcVar13);
  FUN_001effa8(&local_10d0,pcVar13,sVar12);
  pcVar13 = (char *)FUN_001e3c44(local_10b8);
  sVar12 = strlen(pcVar13);
  FUN_001effa8(&local_10d0,pcVar13,sVar12);
  pcVar13 = (char *)FUN_001e3d50(local_10b8);
  sVar12 = strlen(pcVar13);
  FUN_001effa8(&local_10d0,pcVar13,sVar12);
  pvVar29 = (void *)((ulong)&local_10d0 | 1);
  if ((local_10d0 & 1) != 0) {
    pvVar29 = local_10c0;
  }
                    /* try { // try from 001e421c to 001e426b has its CatchHandler @ 001e5794 */
  pcVar13 = (char *)FUN_001e3e5c(local_10b8,pvVar29);
  local_10e8 = 0;
  local_10e0 = 0;
  local_10d8 = (char *)0x0;
  sVar12 = strlen(pcVar13);
  if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 001e5404 to 001e540b has its CatchHandler @ 001e5794 */
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_10e8);
  }
  if (sVar12 < 0x17) {
    pcVar30 = (char *)((ulong)&local_10e8 | 1);
    local_10e8 = CONCAT71(local_10e8._1_7_,(char)((int)sVar12 << 1));
    if (sVar12 != 0) goto LAB_001e427c;
  }
  else {
    uVar17 = sVar12 + 0x10 & 0xfffffffffffffff0;
    pcVar30 = operator_new(uVar17);
    local_10e8 = uVar17 | 1;
    local_10e0 = sVar12;
    local_10d8 = pcVar30;
LAB_001e427c:
    memcpy(pcVar30,pcVar13,sVar12);
  }
  pcVar30[sVar12] = '\0';
  local_1078 = (char *)0x0;
  uStack_1070 = 0;
  local_1068 = (int *)0x0;
  if (param_2 == (byte *)0x0) {
    uStack_10f8 = 0;
    local_10f0 = (int *)0x0;
    local_1100 = (char *)0x4742555008;
  }
  else {
    bVar4 = *param_2;
    pbVar19 = param_2;
    if (bVar4 == 0) {
      pcVar13 = (char *)0x0;
    }
    else {
      do {
        uVar21 = (uint)bVar4;
        if (0x19 < ((uVar21 & 0xffffffdf) - 0x41 & 0xff)) break;
        uVar1 = uVar21 - 0x20;
        if (uVar21 < 0x61) {
          uVar1 = uVar21;
        }
                    /* try { // try from 001e42d0 to 001e42d7 has its CatchHandler @ 001e57a8 */
        FUN_001f40e0(&local_1078,uVar1);
        bVar4 = pbVar19[1];
        pbVar19 = pbVar19 + 1;
      } while (bVar4 != 0);
      pcVar13 = (char *)((ulong)local_1078 & 0xff);
    }
    piVar2 = local_1068;
    uVar27 = uStack_1070;
    uVar17 = (ulong)pcVar13 >> 1;
    if (((ulong)pcVar13 & 1) != 0) {
      uVar17 = uStack_1070;
    }
    local_1100 = (char *)0x0;
    uStack_10f8 = 0;
    local_10f0 = (int *)0x0;
    if (uVar17 == 0) {
      local_1100 = (char *)0x4742555008;
    }
    else {
      if (((ulong)pcVar13 & 1) == 0) {
        local_10f0 = local_1068;
        uStack_10f8 = uStack_1070;
        local_1100 = local_1078;
        goto LAB_001e4370;
      }
      if (0xffffffffffffffef < uStack_1070) {
                    /* try { // try from 001e540c to 001e5413 has its CatchHandler @ 001e56fc */
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(&local_1100);
      }
      if (uStack_1070 < 0x17) {
        piVar28 = (int *)((ulong)&local_1100 | 1);
        local_1100 = (char *)(ulong)(byte)((int)uStack_1070 << 1);
        if (uStack_1070 != 0) goto LAB_001e44e8;
      }
      else {
        uVar17 = uStack_1070 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e44d0 to 001e44d7 has its CatchHandler @ 001e56fc */
        piVar28 = operator_new(uVar17);
        local_1100 = (char *)(uVar17 | 1);
        uStack_10f8 = uVar27;
        local_10f0 = piVar28;
LAB_001e44e8:
        memcpy(piVar28,piVar2,uVar27);
      }
      *(char *)((long)piVar28 + uVar27) = '\0';
      pcVar13 = local_1078;
    }
    if (((ulong)pcVar13 & 1) != 0) {
      operator_delete(local_1068);
    }
  }
LAB_001e4370:
                    /* try { // try from 001e4378 to 001e437f has its CatchHandler @ 001e5780 */
  (**(code **)(*plVar26 + 0x28))(plVar26);
  local_1120 = (char *)0x0;
  uStack_1118 = 0;
  local_1110 = (int *)0x0;
  uVar17 = (ulong)local_1100 >> 1 & 0x7f;
  if (((ulong)local_1100 & 1) != 0) {
    uVar17 = uStack_10f8;
  }
  if (uVar17 == 4) {
    piVar2 = (int *)((ulong)&local_1100 | 1);
    if (((ulong)local_1100 & 1) != 0) {
      piVar2 = local_10f0;
    }
    if (*piVar2 != 0x4f584544) goto LAB_001e43cc;
    local_1130 = malloc(1);
    uStack_1128 = 0;
                    /* try { // try from 001e4430 to 001e4433 has its CatchHandler @ 001e574c */
    lVar22 = FUN_0028f41c();
    if (lVar22 != 0) {
      if (((DAT_0082f7c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_0082f7c0), iVar11 != 0)) {
        DAT_0082f7b8 = 0x4d01464d;
        uRam000000000082f7a8 = _UNK_00479a28;
        _DAT_0082f7a0 = _DAT_00479a20;
        DAT_0082f7b0 = ram0x00479df0;
        DAT_0082f7bc = 0x2e;
        __cxa_atexit(&LAB_001f420c,&DAT_0082f7a0,&PTR_LOOP_00759000);
        __cxa_guard_release(&DAT_0082f7c0);
      }
                    /* try { // try from 001e444c to 001e4457 has its CatchHandler @ 001e5744 */
      FUN_00206088(&DAT_0082f7a0);
      local_1148 = 0;
      local_1140 = 0;
      local_1138 = (void *)0x0;
      sVar12 = strlen(&DAT_0082f7a0);
      if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 001e5414 to 001e541b has its CatchHandler @ 001e5744 */
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(&local_1148);
      }
      if (sVar12 < 0x17) {
        __dest = (void *)((ulong)&local_1148 | 1);
        local_1148 = CONCAT71(local_1148._1_7_,(char)((int)sVar12 << 1));
        pvVar29 = __dest;
        if (sVar12 != 0) goto LAB_001e4534;
      }
      else {
        uVar17 = sVar12 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e4514 to 001e451b has its CatchHandler @ 001e5744 */
        __dest = operator_new(uVar17);
        local_1148 = uVar17 | 1;
        pvVar29 = (void *)((ulong)&local_1148 | 1);
        local_1140 = sVar12;
        local_1138 = __dest;
LAB_001e4534:
        memcpy(__dest,&DAT_0082f7a0,sVar12);
      }
      *(undefined1 *)((long)__dest + sVar12) = 0;
      if ((local_1148 & 1) != 0) {
        pvVar29 = local_1138;
      }
                    /* try { // try from 001e455c to 001e4577 has its CatchHandler @ 001e5748 */
      FUN_0028f4d0(lVar22,0x2712,pvVar29);
      FUN_0028f4d0(lVar22,0x34,1);
                    /* try { // try from 001e4578 to 001e457f has its CatchHandler @ 001e5740 */
      puVar14 = operator_new__(6);
      *puVar14 = 0x70747468;
      *(undefined2 *)(puVar14 + 1) = 0x73;
                    /* try { // try from 001e4598 to 001e45a7 has its CatchHandler @ 001e570c */
      FUN_0028f4d0(lVar22,0x27fe,puVar14);
      *(undefined1 *)puVar14 = 0;
                    /* try { // try from 001e45ac to 001e45b3 has its CatchHandler @ 001e5708 */
      puVar15 = operator_new__(0x30);
      uVar7 = _UNK_00479a48;
      uVar6 = _DAT_00479a40;
      uVar16 = _DAT_00479a30;
      puVar15[1] = _UNK_00479a38;
      *puVar15 = uVar16;
      puVar15[3] = uVar7;
      puVar15[2] = uVar6;
      puVar15[4] = 0x6c72752d6d726f66;
      puVar15[5] = 0x6465646f636e65;
                    /* try { // try from 001e45f0 to 001e45fb has its CatchHandler @ 001e5704 */
      uVar16 = FUN_002954ac(0,puVar15);
      *(undefined1 *)puVar15 = 0;
                    /* try { // try from 001e4604 to 001e460f has its CatchHandler @ 001e5700 */
      FUN_0028f4d0(lVar22,0x2727,uVar16);
      piVar2 = (int *)((ulong)&local_1100 | 1);
      if (((ulong)local_1100 & 1) != 0) {
        piVar2 = local_10f0;
      }
      pcVar13 = (char *)((ulong)&local_10e8 | 1);
      if ((local_10e8 & 1) != 0) {
        pcVar13 = local_10d8;
      }
      snprintf((char *)&local_1078,0x1000,"game=%s&user_key=%s&serial=%s",(char *)piVar2,
               (char *)param_2,pcVar13);
                    /* try { // try from 001e4650 to 001e46cb has its CatchHandler @ 001e5760 */
      FUN_0028f4d0(lVar22,0x271f,&local_1078);
      FUN_0028f4d0(lVar22,0x4e2b,&LAB_001e57f4);
      FUN_0028f4d0(lVar22,0x2711,&local_1130);
      FUN_0028f4d0(lVar22,0x40,0);
      FUN_0028f4d0(lVar22,0x51,0);
      iVar11 = FUN_0028f564(lVar22);
      if (iVar11 == 0) {
        local_1090 = (long *)0x0;
                    /* try { // try from 001e46d4 to 001e46ef has its CatchHandler @ 001e55c0 */
        FUN_001e5870(local_1158,&local_1130,alStack_10b0,1,0);
        if (alStack_10b0 == local_1090) {
          pcVar23 = *(code **)(*local_1090 + 0x20);
LAB_001e4714:
          (*pcVar23)();
        }
        else if (local_1090 != (long *)0x0) {
          pcVar23 = *(code **)(*local_1090 + 0x28);
          goto LAB_001e4714;
        }
                    /* try { // try from 001e4718 to 001e471f has its CatchHandler @ 001e55b4 */
        puVar14 = operator_new__(7);
        *puVar14 = 0x74617473;
        *(undefined2 *)(puVar14 + 1) = 0x7375;
        *(undefined1 *)((long)puVar14 + 6) = 0;
                    /* try { // try from 001e473c to 001e4747 has its CatchHandler @ 001e55a4 */
        uVar16 = FUN_001e2220(local_1158,puVar14);
        local_1190 = (char *)CONCAT71(local_1190._1_7_,4);
        uStack_1188 = 1;
        uVar17 = FUN_00209cc4(uVar16,&local_1190);
        FUN_00204a08(&uStack_1188,(ulong)local_1190 & 0xff);
        *(undefined1 *)puVar14 = 0;
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 001e4830 to 001e4837 has its CatchHandler @ 001e5590 */
          puVar14 = operator_new__(7);
          *puVar14 = 0x73616572;
          *(undefined2 *)(puVar14 + 1) = 0x6e6f;
          *(undefined1 *)((long)puVar14 + 6) = 0;
                    /* try { // try from 001e4854 to 001e485f has its CatchHandler @ 001e5580 */
          uVar16 = FUN_001e2220(local_1158,puVar14);
          local_1190 = (char *)0x0;
          uStack_1188 = 0;
          local_1180 = (int *)0x0;
                    /* try { // try from 001e4868 to 001e486f has its CatchHandler @ 001e5558 */
          FUN_0020a0d4(uVar16,&local_1190);
          if (((ulong)local_1120 & 1) == 0) {
            local_1120 = (char *)((ulong)local_1120 & 0xffffffffffff0000);
          }
          else {
            *(char *)local_1110 = '\0';
            uStack_1118 = 0;
          }
                    /* try { // try from 001e488c to 001e4897 has its CatchHandler @ 001e553c */
          FUN_00205068(&local_1120,0);
          *(undefined1 *)puVar14 = 0;
          local_1110 = local_1180;
          uStack_1118 = uStack_1188;
          local_1120 = local_1190;
        }
        else {
                    /* try { // try from 001e4780 to 001e4787 has its CatchHandler @ 001e5594 */
          puVar14 = operator_new__(5);
          *puVar14 = 0x61746164;
          *(undefined1 *)(puVar14 + 1) = 0;
                    /* try { // try from 001e479c to 001e47a7 has its CatchHandler @ 001e5588 */
          uVar16 = FUN_001e2220(local_1158,puVar14);
                    /* try { // try from 001e47ac to 001e47b3 has its CatchHandler @ 001e5578 */
          puVar18 = operator_new__(6);
          *puVar18 = 0x656b6f74;
          *(undefined2 *)(puVar18 + 1) = 0x6e;
                    /* try { // try from 001e47cc to 001e47d7 has its CatchHandler @ 001e5540 */
          uVar16 = FUN_001e2220(uVar16,puVar18);
          local_1170 = 0;
          local_1168 = 0;
          local_1160 = (void *)0x0;
                    /* try { // try from 001e47e0 to 001e47e7 has its CatchHandler @ 001e5514 */
          FUN_0020a0d4(uVar16,&local_1170);
          *(undefined1 *)puVar18 = 0;
          *(undefined1 *)puVar14 = 0;
                    /* try { // try from 001e47f0 to 001e47ff has its CatchHandler @ 001e5598 */
          local_1190 = (char *)FUN_001e2220(local_1158,"data");
          uStack_1188 = 0;
          local_1180 = (int *)0x0;
          local_1178 = 0x8000000000000000;
          if (*local_1190 == '\x01') {
            uStack_1188 = *(long *)(local_1190 + 8) + 8;
                    /* try { // try from 001e48bc to 001e48c7 has its CatchHandler @ 001e5598 */
            uStack_1188 = FUN_0020a2cc(*(long *)(local_1190 + 8),"EXP");
          }
          else if (*local_1190 == '\x02') {
            local_1180 = *(int **)(*(long *)(local_1190 + 8) + 8);
          }
          else {
            local_1178 = 1;
          }
                    /* try { // try from 001e48d8 to 001e493b has its CatchHandler @ 001e55a0 */
          local_11b0 = (char *)FUN_001e2220(local_1158,"data");
          sStack_11a8 = 0;
          local_11a0 = (undefined1 *)0x0;
          local_1198 = 0x8000000000000000;
          if (*local_11b0 == '\x02') {
            local_11a0 = *(char **)(*(long *)(local_11b0 + 8) + 8);
          }
          else if (*local_11b0 == '\x01') {
            sStack_11a8 = *(long *)(local_11b0 + 8) + 8;
          }
          else {
            local_1198 = 1;
          }
          uVar17 = FUN_002055bc(&local_1190,&local_11b0);
          if ((uVar17 & 1) == 0) {
                    /* try { // try from 001e4940 to 001e4947 has its CatchHandler @ 001e5598 */
            pcVar13 = (char *)FUN_001e5a80(&local_1190);
            if (*pcVar13 == '\x03') {
                    /* try { // try from 001e4954 to 001e495b has its CatchHandler @ 001e547c */
              uVar16 = FUN_001e5a80(&local_1190);
              local_11b0 = (char *)0x0;
              sStack_11a8 = 0;
              local_11a0 = (undefined1 *)0x0;
                    /* try { // try from 001e4964 to 001e496b has its CatchHandler @ 001e5464 */
              FUN_0020a0d4(uVar16,&local_11b0);
              if (((ulong)_DAT_0082f188 & 1) == 0) {
                _DAT_0082f188 = (char *)((ulong)_DAT_0082f188 & 0xffffffffffff0000);
              }
              else {
                *DAT_0082f198 = 0;
                DAT_0082f190 = 0;
              }
                    /* try { // try from 001e49c8 to 001e49db has its CatchHandler @ 001e5460 */
              FUN_00205068(&DAT_0082f188,0);
            }
            else {
                    /* try { // try from 001e4980 to 001e499f has its CatchHandler @ 001e54d4 */
              uVar16 = FUN_001e5a80(&local_1190);
              FUN_001e5b94(&local_11b0,uVar16,0xffffffff,0x20,0,0);
              if (((ulong)_DAT_0082f188 & 1) == 0) {
                _DAT_0082f188 = (char *)((ulong)_DAT_0082f188 & 0xffffffffffff0000);
              }
              else {
                *DAT_0082f198 = 0;
                DAT_0082f190 = 0;
              }
                    /* try { // try from 001e49f4 to 001e4a07 has its CatchHandler @ 001e545c */
              FUN_00205068(&DAT_0082f188,0);
            }
            DAT_0082f198 = local_11a0;
            DAT_0082f190 = sStack_11a8;
            _DAT_0082f188 = local_11b0;
          }
                    /* try { // try from 001e4a18 to 001e4a6f has its CatchHandler @ 001e5624 */
          local_1190 = (char *)FUN_001e2220(local_1158,"data");
          uStack_1188 = 0;
          local_1180 = (int *)0x0;
          local_1178 = 0x8000000000000000;
          if (*local_1190 == '\x01') {
            uStack_1188 = *(long *)(local_1190 + 8) + 8;
            uStack_1188 = FUN_0020a2cc(*(long *)(local_1190 + 8),&DAT_00482a57);
          }
          else if (*local_1190 == '\x02') {
            local_1180 = *(int **)(*(long *)(local_1190 + 8) + 8);
          }
          else {
            local_1178 = 1;
          }
                    /* try { // try from 001e4a80 to 001e4ae3 has its CatchHandler @ 001e559c */
          local_11b0 = (char *)FUN_001e2220(local_1158,"data");
          sStack_11a8 = 0;
          local_11a0 = (char *)0x0;
          local_1198 = 0x8000000000000000;
          if (*local_11b0 == '\x02') {
            local_11a0 = *(char **)(*(long *)(local_11b0 + 8) + 8);
          }
          else if (*local_11b0 == '\x01') {
            sStack_11a8 = *(long *)(local_11b0 + 8) + 8;
          }
          else {
            local_1198 = 1;
          }
          uVar17 = FUN_002055bc(&local_1190,&local_11b0);
          pcVar13 = (char *)0x0;
          if ((uVar17 & 1) == 0) {
                    /* try { // try from 001e4aec to 001e4b23 has its CatchHandler @ 001e5624 */
            pbVar19 = (byte *)FUN_001e5a80(&local_1190);
            if (*pbVar19 - 5 < 3) {
              uVar16 = FUN_001e5a80(&local_1190);
              FUN_0020c090(uVar16,&local_11b0);
              pcVar13 = local_11b0;
            }
            else {
              pcVar30 = (char *)FUN_001e5a80(&local_1190);
              pcVar13 = (char *)0x0;
              if (*pcVar30 == '\x03') {
                    /* try { // try from 001e4b34 to 001e4b3b has its CatchHandler @ 001e5448 */
                uVar16 = FUN_001e5a80(&local_1190);
                local_11b0 = (char *)0x0;
                sStack_11a8 = 0;
                local_11a0 = (char *)0x0;
                    /* try { // try from 001e4b44 to 001e4b4b has its CatchHandler @ 001e5440 */
                FUN_0020a0d4(uVar16,&local_11b0);
                pcVar30 = local_11a0;
                if (((ulong)local_11b0 & 1) == 0) {
                  pcVar13 = (char *)atoll((char *)((ulong)&local_11b0 | 1));
                }
                else {
                  pcVar13 = (char *)atoll(local_11a0);
                  operator_delete(pcVar30);
                }
              }
            }
          }
                    /* try { // try from 001e4b80 to 001e4b87 has its CatchHandler @ 001e5510 */
          tVar20 = time((time_t *)0x0);
          piVar2 = local_10f0;
          uVar17 = uStack_10f8;
          if (tVar20 < (long)(pcVar13 + 0x1e)) {
            local_1190 = (char *)0x0;
            uStack_1188 = 0;
            local_1180 = (int *)0x0;
            if (((ulong)local_1100 & 1) == 0) {
              local_1180 = local_10f0;
              uStack_1188 = uStack_10f8;
              local_1190 = local_1100;
            }
            else {
              if (0xffffffffffffffef < uStack_10f8) {
                    /* try { // try from 001e542c to 001e5433 has its CatchHandler @ 001e5444 */
                    /* WARNING: Subroutine does not return */
                FUN_001d91e4(&local_1190);
              }
              if (uStack_10f8 < 0x17) {
                piVar28 = (int *)((ulong)&local_1190 | 1);
                local_1190 = (char *)(ulong)(byte)((int)uStack_10f8 << 1);
                if (uStack_10f8 != 0) goto LAB_001e4c08;
              }
              else {
                uVar27 = uStack_10f8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e4bf0 to 001e4bf7 has its CatchHandler @ 001e5444 */
                piVar28 = operator_new(uVar27);
                local_1190 = (char *)(uVar27 | 1);
                uStack_1188 = uVar17;
                local_1180 = piVar28;
LAB_001e4c08:
                memcpy(piVar28,piVar2,uVar17);
              }
              *(char *)((long)piVar28 + uVar17) = '\0';
            }
                    /* try { // try from 001e4c1c to 001e4c8f has its CatchHandler @ 001e5600 */
            FUN_001effa8(&local_1190,&DAT_00679f70,1);
            sVar12 = strlen((char *)param_2);
            FUN_001effa8(&local_1190,param_2,sVar12);
            FUN_001effa8(&local_1190,&DAT_00679f70,1);
            sVar12 = local_10e8 >> 1 & 0x7f;
            pcVar13 = (char *)((ulong)&local_10e8 | 1);
            if ((local_10e8 & 1) != 0) {
              sVar12 = local_10e0;
              pcVar13 = local_10d8;
            }
            FUN_001effa8(&local_1190,pcVar13,sVar12);
            FUN_001effa8(&local_1190,&DAT_00679f70,1);
            if (((DAT_0082f7f8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_0082f7f8), iVar11 != 0)) {
              uRam000000000082f7d8 = _UNK_00479a58;
              _DAT_0082f7d0 = _DAT_00479a50;
              uRam000000000082f7e8 = _UNK_00479a68;
              _DAT_0082f7e0 = _DAT_00479a60;
              DAT_0082f7f0 = 0x2e;
              __cxa_atexit(&LAB_001f421c,&DAT_0082f7d0,&PTR_LOOP_00759000);
              __cxa_guard_release(&DAT_0082f7f8);
            }
                    /* try { // try from 001e4ca0 to 001e4cff has its CatchHandler @ 001e54d8 */
            FUN_0020c28c(&DAT_0082f7d0);
            local_11b0 = (char *)0x0;
            sStack_11a8 = 0;
            local_11a0 = (char *)0x0;
            sVar12 = strlen(&DAT_0082f7d0);
            if (0xffffffffffffffef < sVar12) {
                    /* try { // try from 001e5424 to 001e542b has its CatchHandler @ 001e54d8 */
                    /* WARNING: Subroutine does not return */
              FUN_001d91e4(&local_11b0);
            }
            if (sVar12 < 0x17) {
              pcVar30 = (char *)((ulong)&local_11b0 | 1);
              local_11b0 = (char *)CONCAT71(local_11b0._1_7_,(char)((int)sVar12 << 1));
              pcVar13 = pcVar30;
              if (sVar12 != 0) goto LAB_001e4d18;
            }
            else {
              uVar17 = sVar12 + 0x10 & 0xfffffffffffffff0;
              pcVar30 = operator_new(uVar17);
              local_11b0 = (char *)(uVar17 | 1);
              pcVar13 = (char *)((ulong)&local_11b0 | 1);
              sStack_11a8 = sVar12;
              local_11a0 = pcVar30;
LAB_001e4d18:
              memcpy(pcVar30,&DAT_0082f7d0,sVar12);
            }
            pcVar30[sVar12] = '\0';
            if (((ulong)local_11b0 & 1) != 0) {
              pcVar13 = local_11a0;
            }
            sVar12 = strlen(pcVar13);
                    /* try { // try from 001e4d4c to 001e4d57 has its CatchHandler @ 001e54c0 */
            FUN_001effa8(&local_1190,pcVar13,sVar12);
            piVar2 = local_1180;
            uVar17 = uStack_1188;
            local_11e0 = (char *)0x0;
            uStack_11d8 = 0;
            local_11d0 = (int *)0x0;
            if (((ulong)local_1190 & 1) == 0) {
              local_11d0 = local_1180;
              uStack_11d8 = uStack_1188;
              local_11e0 = local_1190;
            }
            else {
              if (0xffffffffffffffef < uStack_1188) {
                    /* try { // try from 001e5434 to 001e543b has its CatchHandler @ 001e543c */
                    /* WARNING: Subroutine does not return */
                FUN_001d91e4(&local_11e0);
              }
              if (uStack_1188 < 0x17) {
                piVar28 = (int *)((ulong)&local_11e0 | 1);
                local_11e0 = (char *)(ulong)(byte)((int)uStack_1188 << 1);
                if (uStack_1188 != 0) goto LAB_001e4dcc;
              }
              else {
                uVar27 = uStack_1188 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e4db4 to 001e4dbb has its CatchHandler @ 001e543c */
                piVar28 = operator_new(uVar27);
                local_11e0 = (char *)(uVar27 | 1);
                uStack_11d8 = uVar17;
                local_11d0 = piVar28;
LAB_001e4dcc:
                memcpy(piVar28,piVar2,uVar17);
              }
              *(char *)((long)piVar28 + uVar17) = '\0';
            }
                    /* try { // try from 001e4de0 to 001e4deb has its CatchHandler @ 001e54a8 */
            FUN_002205d4(local_11c8,&local_11e0);
            if (((ulong)local_11e0 & 1) != 0) {
              operator_delete(local_11d0);
            }
            uVar17 = local_1170 >> 1 & 0x7f;
            pvVar29 = (void *)((ulong)&local_1170 | 1);
            if ((local_1170 & 1) != 0) {
              uVar17 = local_1168;
              pvVar29 = local_1160;
            }
                    /* try { // try from 001e4e1c to 001e4e5b has its CatchHandler @ 001e54dc */
            FUN_001d9094(&DAT_0082f170,pvVar29,uVar17);
            uVar17 = (ulong)(local_11c8[0] >> 1);
            pvVar29 = (void *)((ulong)local_11c8 | 1);
            if ((local_11c8[0] & 1) != 0) {
              uVar17 = local_11c0;
              pvVar29 = local_11b8;
            }
            FUN_001d9094(&DAT_0082f158,pvVar29,uVar17);
            sVar12 = (ulong)(DAT_0082f170 >> 1);
            if ((DAT_0082f170 & 1) != 0) {
              sVar12 = DAT_0082f178;
            }
            sVar3 = (ulong)(DAT_0082f158 >> 1);
            if ((DAT_0082f158 & 1) != 0) {
              sVar3 = DAT_0082f160;
            }
            bVar10 = false;
            if (sVar12 == sVar3) {
              __s1 = DAT_0082f180;
              if ((DAT_0082f170 & 1) == 0) {
                __s1 = &DAT_0082f171;
              }
              pcVar13 = DAT_0082f168;
              if ((DAT_0082f158 & 1) == 0) {
                pcVar13 = &DAT_0082f159;
              }
              if ((DAT_0082f170 & 1) == 0) {
                if (sVar12 != 0) {
                  lVar24 = -(ulong)(DAT_0082f170 >> 1);
                  pcVar30 = &DAT_0082f171;
                  do {
                    if (*pcVar30 != *pcVar13) {
                      bVar10 = false;
                      goto LAB_001e4efc;
                    }
                    pcVar30 = pcVar30 + 1;
                    lVar24 = lVar24 + 1;
                    pcVar13 = pcVar13 + 1;
                  } while (lVar24 != 0);
                }
              }
              else if (sVar12 != 0) {
                iVar11 = memcmp(__s1,pcVar13,sVar12);
                bVar10 = iVar11 == 0;
                goto LAB_001e4efc;
              }
              bVar10 = true;
            }
LAB_001e4efc:
            local_11e8 = local_1158;
                    /* try { // try from 001e4f0c to 001e4f1f has its CatchHandler @ 001e54a4 */
            DAT_0082f2c0 = bVar10;
            FUN_001e5e6c(&local_1200,&local_11e8,"FLOTING_TEST");
            if ((_DAT_0082f1a0 & 1) == 0) {
              _DAT_0082f1a0 = _DAT_0082f1a0 & 0xffffffffffff0000;
            }
            else {
              *DAT_0082f1b0 = 0;
              DAT_0082f1a8 = 0;
            }
                    /* try { // try from 001e4f48 to 001e4f5b has its CatchHandler @ 001e54a0 */
            FUN_00205068(&DAT_0082f1a0,0);
            DAT_0082f1b0 = local_11f0;
            DAT_0082f1a8 = uStack_11f8;
            _DAT_0082f1a0 = local_1200;
                    /* try { // try from 001e4f6c to 001e4f7f has its CatchHandler @ 001e549c */
            FUN_001e5e6c(&local_1200,&local_11e8,"MOD_STATUS");
            if ((_DAT_0082f1b8 & 1) == 0) {
              _DAT_0082f1b8 = _DAT_0082f1b8 & 0xffffffffffff0000;
            }
            else {
              *DAT_0082f1c8 = 0;
              DAT_0082f1c0 = 0;
            }
                    /* try { // try from 001e4fa8 to 001e4fbb has its CatchHandler @ 001e5498 */
            FUN_00205068(&DAT_0082f1b8,0);
            DAT_0082f1c0 = uStack_11f8;
            _DAT_0082f1b8 = local_1200;
            DAT_0082f1c8 = local_11f0;
            uVar17 = local_1200 >> 1 & 0x7f;
            if ((local_1200 & 1) != 0) {
              uVar17 = uStack_11f8;
            }
            if (uVar17 == 0) {
                    /* try { // try from 001e4fe4 to 001e4ff7 has its CatchHandler @ 001e5458 */
              FUN_001e5e6c(&local_1200,&local_11e8,"mod_status");
              if ((_DAT_0082f1b8 & 1) == 0) {
                _DAT_0082f1b8 = _DAT_0082f1b8 & 0xffffffffffff0000;
              }
              else {
                *DAT_0082f1c8 = 0;
                DAT_0082f1c0 = 0;
              }
                    /* try { // try from 001e5014 to 001e5027 has its CatchHandler @ 001e5454 */
              FUN_00205068(&DAT_0082f1b8,0);
            }
                    /* try { // try from 001e5038 to 001e504b has its CatchHandler @ 001e5494 */
            _DAT_0082f1b8 = local_1200;
            DAT_0082f1c0 = uStack_11f8;
            DAT_0082f1c8 = local_11f0;
            FUN_001e5e6c(&local_1200,&local_11e8,"MOD_NAME");
            if ((_DAT_0082f1d0 & 1) == 0) {
              _DAT_0082f1d0 = _DAT_0082f1d0 & 0xffffffffffff0000;
            }
            else {
              *DAT_0082f1e0 = 0;
              DAT_0082f1d8 = 0;
            }
                    /* try { // try from 001e5074 to 001e5087 has its CatchHandler @ 001e5490 */
            FUN_00205068(&DAT_0082f1d0,0);
            DAT_0082f1d8 = uStack_11f8;
            _DAT_0082f1d0 = local_1200;
            DAT_0082f1e0 = local_11f0;
            uVar17 = local_1200 >> 1 & 0x7f;
            if ((local_1200 & 1) != 0) {
              uVar17 = uStack_11f8;
            }
            if (uVar17 == 0) {
                    /* try { // try from 001e50b0 to 001e50c3 has its CatchHandler @ 001e5450 */
              FUN_001e5e6c(&local_1200,&local_11e8,"modname");
              if ((_DAT_0082f1d0 & 1) == 0) {
                _DAT_0082f1d0 = _DAT_0082f1d0 & 0xffffffffffff0000;
              }
              else {
                *DAT_0082f1e0 = 0;
                DAT_0082f1d8 = 0;
              }
                    /* try { // try from 001e50e0 to 001e50f3 has its CatchHandler @ 001e544c */
              FUN_00205068(&DAT_0082f1d0,0);
            }
                    /* try { // try from 001e5104 to 001e5117 has its CatchHandler @ 001e548c */
            _DAT_0082f1d0 = local_1200;
            DAT_0082f1d8 = uStack_11f8;
            DAT_0082f1e0 = local_11f0;
            FUN_001e5e6c(&local_1200,&local_11e8,"BHATIA_SLOT");
            if ((_DAT_0082f1e8 & 1) == 0) {
              _DAT_0082f1e8 = _DAT_0082f1e8 & 0xffffffffffff0000;
            }
            else {
              *DAT_0082f1f8 = 0;
              DAT_0082f1f0 = 0;
            }
                    /* try { // try from 001e5140 to 001e5153 has its CatchHandler @ 001e5488 */
            FUN_00205068(&DAT_0082f1e8,0);
            DAT_0082f1f8 = local_11f0;
            DAT_0082f1f0 = uStack_11f8;
            _DAT_0082f1e8 = local_1200;
                    /* try { // try from 001e5164 to 001e5177 has its CatchHandler @ 001e5484 */
            FUN_001e5e6c(&local_1200,&local_11e8,"BHATIA_EXP");
            if ((_DAT_0082f200 & 1) == 0) {
              _DAT_0082f200 = _DAT_0082f200 & 0xffffffffffff0000;
            }
            else {
              *DAT_0082f210 = 0;
              DAT_0082f208 = 0;
            }
                    /* try { // try from 001e51a0 to 001e51b3 has its CatchHandler @ 001e5480 */
            FUN_00205068(&DAT_0082f200,0);
            DAT_0082f210 = local_11f0;
            DAT_0082f208 = uStack_11f8;
            _DAT_0082f200 = local_1200;
            if ((local_11c8[0] & 1) != 0) {
              operator_delete(local_11b8);
            }
            if (((ulong)local_11b0 & 1) != 0) {
              operator_delete(local_11a0);
            }
            if (((ulong)local_1190 & 1) != 0) {
              operator_delete(local_1180);
            }
          }
          if ((local_1170 & 1) != 0) {
            operator_delete(local_1160);
          }
        }
        FUN_00204a08(auStack_1150,local_1158[0]);
      }
      else {
        pcVar13 = (char *)FUN_002940ec();
        sVar12 = strlen(pcVar13);
        FUN_001d9094(&local_1120,pcVar13,sVar12);
      }
      if ((local_1148 & 1) != 0) {
        operator_delete(local_1138);
      }
    }
                    /* try { // try from 001e5214 to 001e52ab has its CatchHandler @ 001e574c */
    FUN_0028f764(lVar22);
    piVar2 = local_1110;
    uVar17 = uStack_1118;
    cVar9 = DAT_0082f2c0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (cVar9 == '\0') {
      if (((ulong)local_1120 & 1) == 0) {
        param_1[2] = (ulong)local_1110;
        param_1[1] = uStack_1118;
        *param_1 = (ulong)local_1120;
      }
      else {
        if (0xffffffffffffffef < uStack_1118) {
                    /* try { // try from 001e541c to 001e5423 has its CatchHandler @ 001e574c */
                    /* WARNING: Subroutine does not return */
          FUN_001d91e4(param_1);
        }
        if (uStack_1118 < 0x17) {
          pvVar29 = (void *)((long)param_1 + 1);
          *(char *)param_1 = (char)((int)uStack_1118 << 1);
          if (uStack_1118 != 0) goto LAB_001e52bc;
        }
        else {
          uVar27 = uStack_1118 + 0x10 & 0xfffffffffffffff0;
          pvVar29 = operator_new(uVar27);
          param_1[1] = uVar17;
          param_1[2] = (ulong)pvVar29;
          *param_1 = uVar27 | 1;
LAB_001e52bc:
          memcpy(pvVar29,piVar2,uVar17);
        }
        *(undefined1 *)((long)pvVar29 + uVar17) = 0;
      }
    }
    else {
      *(undefined1 *)param_1 = 4;
      *(undefined2 *)((long)param_1 + 1) = 0x4b4f;
      *(undefined1 *)((long)param_1 + 3) = 0;
    }
    if (((ulong)local_1120 & 1) != 0) {
      operator_delete(local_1110);
    }
  }
  else {
LAB_001e43cc:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 001e43d4 to 001e43db has its CatchHandler @ 001e575c */
    pcVar13 = operator_new(0x20);
    uVar8 = s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._18_8_;
    uVar7 = s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._0_8_;
    uVar27 = _UNK_00479a18;
    uVar17 = ram0x00479a10;
    uVar6 = CONCAT26(s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._16_2_,
                     s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._10_6_);
    uVar16 = CONCAT62(s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._10_6_,
                      s_ONLY_DEXO_KEYS_ARE_ALLOWED_00482a1e._8_2_);
    param_1[2] = (ulong)pcVar13;
    param_1[1] = uVar27;
    *param_1 = uVar17;
    *(undefined8 *)(pcVar13 + 0x12) = uVar8;
    *(undefined8 *)(pcVar13 + 10) = uVar6;
    *(undefined8 *)(pcVar13 + 8) = uVar16;
    *(undefined8 *)pcVar13 = uVar7;
    pcVar13[0x1a] = '\0';
  }
  if (((ulong)local_1100 & 1) != 0) {
    operator_delete(local_10f0);
  }
  if ((local_10e8 & 1) != 0) {
    operator_delete(local_10d8);
  }
  if ((local_10d0 & 1) != 0) {
    operator_delete(local_10c0);
  }
LAB_001e4138:
  if (*(long *)(lVar5 + 0x28) != lVar25) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


