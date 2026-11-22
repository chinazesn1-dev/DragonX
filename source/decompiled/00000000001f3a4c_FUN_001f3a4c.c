// Recovered from libkentos.so by Ghidra 12.2
// address: 001f3a4c
// size: 1456
// name: FUN_001f3a4c
// namespace: Global
// signature: undefined FUN_001f3a4c(void)
// generated: 2026-11-22 21:46:54


void FUN_001f3a4c(long param_1)

{
  bool bVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint param3;
  uint param3_00;
  uint uVar13;
  size_t sVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  char acStack_88 [6];
  byte local_82;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((((param_1 == 0) || (lVar15 = *(long *)(param_1 + 0x30e0), lVar15 == 0)) ||
      (plVar2 = (long *)(lVar15 + 1000), plVar2 == (long *)0x0)) ||
     (uVar16 = (ulong)*(uint *)(lVar15 + 0x3f0), 0x3d < *(uint *)(lVar15 + 0x3f0) - 3))
  goto LAB_001f3fc8;
                    /* try { // try from 001f3aa0 to 001f3aaf has its CatchHandler @ 001f401c */
  uVar7 = FUN_001f2ea8("lua_outfit_res",0);
                    /* try { // try from 001f3ab4 to 001f3ac3 has its CatchHandler @ 001f4018 */
  uVar8 = FUN_001f2ea8("lua_hat_res",0);
                    /* try { // try from 001f3ac8 to 001f3adb has its CatchHandler @ 001f4014 */
  uVar9 = FUN_001f2ea8("lua_mask_res",0);
                    /* try { // try from 001f3adc to 001f3aeb has its CatchHandler @ 001f4010 */
  uVar10 = FUN_001f2ea8("lua_top_res",0);
                    /* try { // try from 001f3af0 to 001f3b03 has its CatchHandler @ 001f400c */
  uVar11 = FUN_001f2ea8("lua_pants_res",0);
                    /* try { // try from 001f3b04 to 001f3b17 has its CatchHandler @ 001f4008 */
  uVar12 = FUN_001f2ea8("lua_shoes_res",0);
                    /* try { // try from 001f3b18 to 001f3b2b has its CatchHandler @ 001f4004 */
  param3 = FUN_001f2ea8("lua_bag_res",0);
                    /* try { // try from 001f3b2c to 001f3b3b has its CatchHandler @ 001f4000 */
  param3_00 = FUN_001f2ea8("lua_helmet_res",0);
  if ((int)uVar7 < 1) {
    bVar5 = false;
  }
  else {
    bVar5 = uVar7 - 0x157048 < 3000 || uVar7 - 0x62638 < 2000;
  }
  if ((int)uVar8 < 1) {
    bVar17 = false;
LAB_001f3c68:
    bVar1 = 1999 < uVar9 - 0x156878;
LAB_001f3c7c:
    bVar6 = true;
    if (((int)uVar8 < 1) || (!bVar17)) goto LAB_001f3cc0;
    uVar13 = *(uint *)*plVar2;
    if (((int)uVar13 < 1) || (uVar13 == uVar8)) {
      bVar6 = false;
      goto LAB_001f3cc0;
    }
    bVar6 = false;
    bVar17 = true;
    *(uint *)*plVar2 = uVar8;
    bVar1 = (bool)((int)uVar9 < 1 | bVar1);
  }
  else {
    bVar17 = true;
    if ((uVar8 - 0x156490 < 1000) || (uVar8 + 0xfd947e40 < 100000)) goto LAB_001f3c68;
    bVar17 = uVar8 - 1400000 < 2000 && 1999 < uVar8 - 0x7a508;
    bVar1 = 1999 < uVar9 - 0x156878;
    if ((bVar17) || ((int)uVar8 < 1)) goto LAB_001f3c7c;
    bVar6 = true;
    if ((2999 < uVar8 - 0x157048) && (1999 < uVar8 - 0x62638)) {
      bVar17 = (int)uVar8 < 10000000 && ((int)uVar8 < 1 || 1999 < uVar8 - 0x156878);
      goto LAB_001f3c7c;
    }
LAB_001f3cc0:
    bVar17 = false;
    bVar1 = (bool)((int)uVar9 < 1 | bVar1);
  }
  if (!bVar1) {
    uVar13 = *(uint *)(*plVar2 + 0x3c);
    if ((0 < (int)uVar13) && (uVar13 != uVar9)) {
      bVar17 = true;
      *(uint *)(*plVar2 + 0x3c) = uVar9;
    }
  }
  if (!bVar5) {
    uVar7 = uVar10;
  }
  lVar15 = 0;
  do {
    puVar3 = (uint *)(*plVar2 + lVar15);
    uVar10 = puVar3[2];
    switch(uVar10) {
    case 1:
      if (*puVar3 != uVar8 && !bVar6) {
        *puVar3 = uVar8;
LAB_001f3fac:
        bVar17 = true;
      }
      break;
    case 2:
      if (!bVar1 && *puVar3 != uVar9) {
        *puVar3 = uVar9;
        goto LAB_001f3fac;
      }
      break;
    case 3:
      if ((0 < (int)uVar7) && (*puVar3 != uVar7)) {
        *puVar3 = uVar7;
        goto LAB_001f3fac;
      }
      break;
    case 4:
      uVar10 = *puVar3;
      if (bVar5) {
LAB_001f3ecc:
        if (uVar10 != 0) {
          *puVar3 = 0;
          goto LAB_001f3fac;
        }
      }
      else if ((0 < (int)uVar11) && (uVar10 != uVar11)) {
        *puVar3 = uVar11;
        goto LAB_001f3fac;
      }
      break;
    default:
      if (((int)param3 < 1) || (uVar10 != 8)) {
        if (((uVar10 == 9 && 0 < (int)param3_00) &&
             (100000 < (int)param3_00 ||
             (param3_00 - 0x7a8f0 < 1000 || param3_00 + 0xa6794c80 < 1000000))) &&
           (uVar10 = *puVar3, 0 < (int)uVar10)) {
          snprintf(acStack_88,0x20,"%d",param3_00);
          sVar14 = strlen(acStack_88);
          uVar13 = param3_00;
          if (sVar14 == 10) {
            uVar10 = uVar10 % 10;
            local_82 = 0x33;
            if (uVar10 - 1 < 3) {
              local_82 = (byte)uVar10 | 0x30;
            }
            uVar13 = atoi(acStack_88);
          }
          uVar10 = *puVar3;
          goto LAB_001f3f7c;
        }
      }
      else if ((100000 < (int)param3 || (param3 - 0x7a508 < 1000 || param3 + 0xa6888ec0 < 1000000))
              && (uVar10 = *puVar3, 0 < (int)uVar10)) {
        snprintf(acStack_88,0x20,"%d",param3);
        sVar14 = strlen(acStack_88);
        uVar13 = param3;
        if (sVar14 == 10) {
          uVar10 = uVar10 % 10;
          local_82 = 0x33;
          if (uVar10 - 1 < 3) {
            local_82 = (byte)uVar10 | 0x30;
          }
          uVar13 = atoi(acStack_88);
        }
        uVar10 = *puVar3;
LAB_001f3f7c:
        if (uVar10 != uVar13) {
          *puVar3 = uVar13;
          goto LAB_001f3fac;
        }
      }
      break;
    case 6:
      uVar10 = *puVar3;
      if (bVar5) goto LAB_001f3ecc;
      if ((0 < (int)uVar12) && (uVar10 != uVar12)) {
        *puVar3 = uVar12;
        goto LAB_001f3fac;
      }
    }
    uVar16 = uVar16 - 1;
    lVar15 = lVar15 + 0x3c;
  } while (uVar16 != 0);
  if (bVar17) {
                    /* try { // try from 001f3fc4 to 001f3fc7 has its CatchHandler @ 001f3ffc */
    FUN_00266c48(*(undefined8 *)(param_1 + 0x30e0));
  }
LAB_001f3fc8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


