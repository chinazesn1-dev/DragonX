// Recovered from libkentos.so by Ghidra 12.2
// address: 001f2ea8
// size: 1700
// name: FUN_001f2ea8
// namespace: Global
// signature: undefined FUN_001f2ea8(void)
// generated: 2026-11-22 21:46:53


/* WARNING: Removing unreachable block (ram,0x001f32a0) */

int FUN_001f2ea8(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong __n;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  size_t __n_00;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 *puVar15;
  long *__dest;
  ulong uVar16;
  long *plVar17;
  long *__s1;
  ulong uVar18;
  ulong local_88;
  ulong uStack_80;
  long *local_78;
  ulong local_70;
  ulong uStack_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((DAT_0082f798 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0082f798), iVar7 != 0)) {
    DAT_0082f758 = 0;
    DAT_0082f75a = 0;
    DAT_0082f788 = (undefined8 *)0x0;
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
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (long *)0x0;
  __n_00 = strlen(pcVar1);
  if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_70);
  }
  if (__n_00 < 0x17) {
    plVar17 = (long *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n_00 << 1));
    __s1 = plVar17;
    if (__n_00 != 0) goto LAB_001f2f60;
  }
  else {
    uVar16 = __n_00 + 0x10 & 0xfffffffffffffff0;
    plVar17 = operator_new(uVar16);
    local_70 = uVar16 | 1;
    __s1 = (long *)((ulong)&local_70 | 1);
    uStack_68 = __n_00;
    local_60 = plVar17;
LAB_001f2f60:
    memcpy(plVar17,pcVar1,__n_00);
  }
  *(undefined1 *)((long)plVar17 + __n_00) = 0;
  uVar18 = (ulong)((byte)local_70 >> 1);
  uVar16 = uVar18;
  plVar17 = __s1;
  if ((local_70 & 1) != 0) {
    uVar16 = uStack_68;
    plVar17 = local_60;
  }
  __n = uVar16 - 4;
  uVar13 = uVar16;
  if (3 < uVar16) {
    uVar13 = 4;
  }
  bVar8 = (byte)local_70 & 1;
  if (3 < (long)uVar13) {
    uVar3 = 0xfffffffffffffffb;
    if (0xfffffffffffffffb < ~uVar16) {
      uVar3 = ~uVar16;
    }
    lVar10 = uVar3 + 2;
    lVar12 = 0;
    puVar15 = (undefined1 *)((long)plVar17 + (-3 - uVar3));
    while (uVar13 != 3) {
      uVar13 = uVar13 - 1;
      if (*(char *)((long)plVar17 + uVar13) == '_') {
        lVar14 = 0;
        do {
          if (lVar14 == -3) {
            if ((lVar10 == -3) && (lVar12 != -4)) {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = (long *)0x0;
              if (uVar16 < 4) {
                    /* try { // try from 001f352c to 001f353b has its CatchHandler @ 001f3554 */
                    /* WARNING: Subroutine does not return */
                FUN_001f4080(&local_88);
              }
              if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                FUN_001d91e4(&local_88);
              }
              if (__n < 0x17) {
                __dest = (long *)((ulong)&local_88 | 1);
                local_88 = (ulong)(byte)((int)__n << 1);
                if (__n != 0) goto LAB_001f3094;
              }
              else {
                uVar16 = uVar16 + 0xc & 0xfffffffffffffff0;
                    /* try { // try from 001f307c to 001f3083 has its CatchHandler @ 001f3554 */
                __dest = operator_new(uVar16);
                local_88 = uVar16 | 1;
                uStack_80 = __n;
                local_78 = __dest;
LAB_001f3094:
                memcpy(__dest,(undefined1 *)((long)plVar17 + 4),__n);
              }
              *(undefined1 *)((long)__dest + __n) = 0;
              if ((local_70 & 1) == 0) {
                local_70 = local_70 & 0xffffffffffff0000;
              }
              else {
                *(undefined1 *)local_60 = 0;
                uStack_68 = 0;
              }
                    /* try { // try from 001f30c4 to 001f30cf has its CatchHandler @ 001f359c */
              FUN_00205068(&local_70,0);
              uStack_68 = uStack_80;
              local_70 = local_88;
              uVar16 = local_70;
              local_70._0_1_ = (byte)local_88;
              local_60 = local_78;
              bVar8 = (byte)local_70 & 1;
              uVar18 = (ulong)((byte)local_70 >> 1);
              local_70 = uVar16;
            }
            goto LAB_001f30f0;
          }
          pcVar2 = puVar15 + lVar14;
          pcVar1 = &DAT_00482ebb + lVar14;
          lVar14 = lVar14 + -1;
        } while (*pcVar2 == *pcVar1);
      }
      lVar12 = lVar12 + 1;
      lVar10 = lVar10 + 1;
      puVar15 = puVar15 + -1;
    }
  }
LAB_001f30f0:
  if (bVar8 != 0) {
    uVar18 = uStack_68;
  }
  switch(uVar18) {
  case 7:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    iVar7 = memcmp(__s1,"hat_res",7);
    if (iVar7 == 0) {
      iVar7 = DAT_0082f75c._4_4_;
    }
    else {
      iVar7 = memcmp(__s1,"top_res",7);
      if (iVar7 == 0) {
        iVar7 = DAT_0082f764._4_4_;
      }
      else {
        iVar7 = memcmp(__s1,"bag_res",7);
        if (iVar7 != 0) goto LAB_001f3270;
        iVar7 = (int)DAT_0082f774;
      }
    }
    break;
  case 8:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    if (*__s1 != 0x7365725f6b73616d) {
LAB_001f3270:
      bVar6 = false;
      puVar15 = (undefined1 *)((long)__s1 + 6);
LAB_001f3278:
      puVar15 = puVar15 + (-5 - (long)__s1);
      lVar10 = 0;
      lVar12 = 6;
      plVar17 = __s1;
      do {
        lVar12 = lVar12 + -1;
        if (*(char *)((long)__s1 + lVar12) == '_') {
          lVar14 = 0;
LAB_001f32cc:
          if (lVar14 != -5) goto code_r0x001f32d4;
          if ((lVar10 == 0) && (puVar15 != (undefined1 *)0xfffffffffffffffb)) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = (long *)0x0;
            if (bVar6) {
                    /* try { // try from 001f353c to 001f354b has its CatchHandler @ 001f354c */
                    /* WARNING: Subroutine does not return */
              FUN_001f4080(&local_88);
            }
            uVar16 = uVar18 - 6;
            if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_001d91e4(&local_88);
            }
            if (uVar16 < 0x17) {
              plVar17 = (long *)((ulong)&local_88 | 1);
              local_88 = (ulong)(byte)((int)uVar16 << 1);
              if (uVar16 != 0) goto LAB_001f338c;
            }
            else {
              uVar18 = uVar18 + 10 & 0xfffffffffffffff0;
                    /* try { // try from 001f3374 to 001f337b has its CatchHandler @ 001f354c */
              plVar17 = operator_new(uVar18);
              local_88 = uVar18 | 1;
              uStack_80 = uVar16;
              local_78 = plVar17;
LAB_001f338c:
              memcpy(plVar17,(undefined1 *)((long)__s1 + 6),uVar16);
            }
            *(undefined1 *)((long)plVar17 + uVar16) = 0;
                    /* try { // try from 001f33a0 to 001f33af has its CatchHandler @ 001f3570 */
            iVar7 = std::__ndk1::stoi((basic_string *)&local_88,(ulong *)0x0,10);
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if (DAT_0082f788 != (undefined8 *)0x0) {
              puVar9 = &DAT_0082f788;
              puVar11 = DAT_0082f788;
              do {
                if (iVar7 <= *(int *)((long)puVar11 + 0x1c)) {
                  puVar9 = puVar11;
                }
                puVar11 = (undefined8 *)puVar11[*(int *)((long)puVar11 + 0x1c) < iVar7];
              } while (puVar11 != (undefined8 *)0x0);
              if ((((undefined8 **)puVar9 == &DAT_0082f788) ||
                  (iVar7 < *(int *)((long)puVar9 + 0x1c))) ||
                 (iVar7 = *(int *)(puVar9 + 4), iVar7 < 1)) break;
              goto LAB_001f3418;
            }
          }
          break;
        }
LAB_001f32a4:
        puVar15 = puVar15 + 1;
        lVar10 = lVar10 + 1;
        plVar17 = (long *)((long)plVar17 + -1);
      } while (lVar12 != 5);
      goto LAB_001f3414;
    }
    iVar7 = (int)DAT_0082f764;
    break;
  case 9:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    iVar7 = memcmp(__s1,"pants_res",9);
    if (iVar7 == 0) {
      iVar7 = (int)DAT_0082f76c;
    }
    else {
      iVar7 = memcmp(__s1,"shoes_res",9);
      if (iVar7 != 0) goto LAB_001f3270;
      iVar7 = DAT_0082f76c._4_4_;
    }
    break;
  case 10:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    iVar7 = memcmp(__s1,"outfit_res",10);
    if (iVar7 == 0) {
      iVar7 = (int)DAT_0082f75c;
    }
    else {
      iVar7 = memcmp(__s1,"helmet_res",10);
      if (iVar7 != 0) goto LAB_001f3270;
      iVar7 = DAT_0082f774._4_4_;
    }
    break;
  case 0xb:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    iVar7 = memcmp(__s1,"vehicle_res",0xb);
    if (iVar7 != 0) goto LAB_001f3270;
    iVar7 = DAT_0082f77c;
    break;
  default:
    if (bVar8 != 0) {
      __s1 = local_60;
    }
    bVar6 = uVar18 < 6;
    uVar16 = uVar18;
    if (!bVar6) {
      uVar16 = 6;
    }
    if (5 < (long)uVar16) {
      puVar15 = (undefined1 *)((long)__s1 + uVar16);
      goto LAB_001f3278;
    }
LAB_001f3414:
    iVar7 = param_2;
LAB_001f3418:
    if ((local_70 & 1) == 0) goto LAB_001f3428;
    goto LAB_001f3420;
  }
  if (iVar7 < 1) {
    iVar7 = param_2;
  }
  if ((local_70 & 1) != 0) {
LAB_001f3420:
    operator_delete(local_60);
  }
LAB_001f3428:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
code_r0x001f32d4:
  lVar5 = lVar14 + 4;
  pcVar1 = &DAT_00482ec2 + lVar14;
  lVar14 = lVar14 + -1;
  if (*(char *)((long)plVar17 + lVar5) != *pcVar1) goto LAB_001f32a4;
  goto LAB_001f32cc;
}


