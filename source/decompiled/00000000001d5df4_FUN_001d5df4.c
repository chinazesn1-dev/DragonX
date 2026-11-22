// Recovered from libkentos.so by Ghidra 12.2
// address: 001d5df4
// size: 1628
// name: FUN_001d5df4
// namespace: Global
// signature: undefined FUN_001d5df4(void)
// generated: 2026-11-22 21:43:07


undefined8
FUN_001d5df4(long param_1,long param_2,undefined8 *param_3,undefined1 *param_4,undefined1 *param_5)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong local_10;
  
  bVar3 = false;
  cVar5 = FUN_001d5d64(param_1,*(undefined1 *)(param_2 + 0x309),*(undefined1 *)(param_2 + 0x316),
                       *(undefined8 *)(param_2 + 0x348));
  if ((*(ulong *)(param_1 + 0x8a90) & 0x28) != 0) {
    bVar3 = (*(uint *)(*(long *)(param_2 + 0x348) + 0x78) & 3) != 0;
  }
  bVar4 = false;
  if ((*(char *)(param_2 + 0x310) != '\0') && ((*(ulong *)(param_1 + 0x8ab0) & 0x28) != 0)) {
    bVar4 = (*(uint *)(*(long *)(param_2 + 0x348) + 0x78) & 3) != 0;
  }
  *param_4 = 0;
  *param_5 = 0;
  bVar6 = 0;
  if (cVar5 != '\0') {
    bVar6 = FUN_002964c0(param_1,param_2);
    bVar6 = bVar6 ^ 1;
  }
  piVar9 = (int *)FUN_00295e74(param_2,*(undefined8 *)(param_1 + 0x968));
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  iVar8 = *piVar9;
  if (iVar8 == 2) {
    uVar15 = 0;
    if (bVar6 != 0) goto LAB_001d5f2c;
  }
  else {
    uVar15 = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      uVar15 = *(ulong *)(*(long *)(param_1 + 0x60) + 0x138);
    }
    if (bVar6 != 0) {
      if (iVar8 < 1) {
        if (iVar8 == 0) {
          bVar6 = 0;
          if (*(char *)(param_1 + 0x783) != '\0') goto LAB_001d5f14;
        }
        else {
          bVar6 = 0;
        }
LAB_001d5f2c:
        if ((*piVar9 == 2) && (cVar5 = FUN_00291c94(*(undefined8 *)(param_1 + 0x60)), cVar5 == '\0')
           ) {
          bVar6 = 0;
        }
      }
      else if (iVar8 == 1) {
        cVar5 = FUN_00291c94(*(undefined8 *)(param_1 + 0x60));
        if (cVar5 != '\0') goto LAB_001d5f2c;
        bVar6 = 0;
      }
    }
  }
  puVar18 = (undefined8 *)**(undefined8 **)(piVar9 + 4);
  bVar2 = false;
  plVar16 = (long *)0x0;
  local_10 = uVar15;
LAB_001d5f94:
  if (puVar18 != (undefined8 *)0x0) {
    plVar17 = (long *)*puVar18;
    puVar18 = (undefined8 *)puVar18[2];
    if ((*(long *)(plVar17[0x79] + 0x18) + *(long *)(plVar17[0x78] + 0x18) != 0) ||
       ((char)plVar17[9] != '\0')) {
LAB_001d6008:
      uVar1 = ((long *)plVar17[0x79])[3] + ((undefined8 *)plVar17[0x78])[3];
      if (bVar6 == 0) {
        if ((uVar1 != 0) || ((char)plVar17[0xf] == '\0')) goto LAB_001d5f94;
        if (((int)plVar17[0x3e] == -1) || (*(char *)((long)plVar17 + 0x309) != '\0')) {
          if (*(char *)((long)plVar17 + 0x309) == '\0') {
            bVar2 = true;
          }
          goto LAB_001d5f94;
        }
      }
      else {
        cVar5 = *(char *)((long)plVar17 + 0x316);
        if (cVar5 != '\0') {
          if (*(char *)((long)plVar17 + 0x309) != '\0') goto LAB_001d5f94;
        }
        if (*(char *)((long)plVar17 + 0x323) == '\0') {
          plVar13 = *(long **)plVar17[0x78];
          lVar10 = 0;
          if (plVar13 != (long *)0x0) {
            lVar10 = *plVar13;
          }
          plVar13 = *(long **)plVar17[0x79];
          if (plVar13 == (long *)0x0) {
            if (lVar10 != 0) goto LAB_001d6058;
          }
          else {
            lVar14 = *plVar13;
            if (lVar10 == 0) {
              if (lVar14 == 0) goto LAB_001d60c8;
              cVar5 = FUN_001d5d64(lVar14,*(undefined1 *)((long)plVar17 + 0x309),cVar5,plVar17[0x69]
                                  );
            }
            else {
LAB_001d6058:
              cVar5 = FUN_001d5d64(lVar10,*(undefined1 *)((long)plVar17 + 0x309),cVar5,plVar17[0x69]
                                  );
            }
            if (cVar5 == '\0') goto LAB_001d5f94;
          }
        }
      }
LAB_001d60c8:
      lVar10 = *(long *)(param_2 + 0x348);
      uVar7 = *(uint *)(lVar10 + 0x7c);
      if (((uVar7 ^ *(uint *)(plVar17[0x69] + 0x7c)) & 1) != 0) {
        iVar8 = FUN_001d5aa0(*(undefined4 *)(plVar17[0x69] + 0x78));
        if (iVar8 != *(int *)(lVar10 + 0x78)) goto LAB_001d5f94;
        if ((char)plVar17[0x61] == '\0') goto LAB_001d5f94;
      }
      if ((uVar7 & 1) != 0) {
        if (*(short *)(param_1 + 0x450) != (short)plVar17[0xce]) goto LAB_001d5f94;
      }
      if ((*(char *)((long)plVar17 + 0x30d) == *(char *)(param_2 + 0x30d)) &&
         ((*(char *)((long)plVar17 + 0x30d) == '\0' ||
          ((((*(int *)(param_2 + 0x1c0) == (int)plVar17[0x38] &&
             (*(char *)(param_2 + 0x30e) == *(char *)((long)plVar17 + 0x30e))) &&
            (*(char *)(param_2 + 0x318) == (char)plVar17[99])) &&
           ((iVar8 = FUN_002adbec(*(undefined8 *)(param_2 + 0x100),plVar17[0x20]), iVar8 != 0 &&
            (*(long *)(param_2 + 0x110) == plVar17[0x22])))))))) {
        if (*(char *)(param_2 + 0x30b) == *(char *)((long)plVar17 + 0x30b)) {
          if (*(char *)(param_2 + 0x30c) == *(char *)((long)plVar17 + 0x30c)) {
            if (bVar6 == 0) {
              if ((char)plVar17[9] != '\0') goto LAB_001d5f94;
            }
            pcVar12 = *(char **)(param_2 + 0x678);
            if ((pcVar12 != (char *)0x0) || (*(short *)(param_2 + 0x680) != 0)) {
              if ((plVar17[0xd0] & 0xffffffff0000ffffU) !=
                  (*(ulong *)(param_2 + 0x680) & 0xffffffff0000ffff)) goto LAB_001d5f94;
              if ((char *)plVar17[0xcf] == (char *)0x0) goto LAB_001d5f94;
              if (pcVar12 == (char *)0x0) goto LAB_001d5f94;
              iVar8 = strcmp((char *)plVar17[0xcf],pcVar12);
              if (iVar8 != 0) goto LAB_001d5f94;
            }
            puVar11 = *(undefined8 **)(param_2 + 0x348);
            uVar7 = *(uint *)((long)puVar11 + 0x7c);
            if ((uVar7 >> 7 & 1) == 0) {
              iVar8 = strcmp(*(char **)(param_2 + 400),(char *)plVar17[0x32]);
              if (iVar8 != 0) goto LAB_001d5f94;
              iVar8 = strcmp(*(char **)(param_2 + 0x198),(char *)plVar17[0x33]);
              if (iVar8 != 0) goto LAB_001d5f94;
            }
            if (((*(char *)(param_2 + 0x30e) == '\0') || ((uVar7 & 1) != 0)) ||
               (*(char *)(param_2 + 0x318) != '\0')) {
              iVar8 = FUN_002adbec(*puVar11,*(undefined8 *)plVar17[0x69]);
              if (iVar8 == 0) {
                iVar8 = FUN_001d5aa0(*(undefined4 *)(plVar17[0x69] + 0x78));
                if (iVar8 != *(int *)(*(long *)(param_2 + 0x348) + 0x78)) goto LAB_001d5f94;
                if ((char)plVar17[0x61] == '\0') goto LAB_001d5f94;
              }
              if (((*(char *)(param_2 + 0x30b) != '\0') &&
                  (iVar8 = FUN_002adbec(*(undefined8 *)(param_2 + 0xe0),plVar17[0x1c]), iVar8 == 0))
                 || ((*(char *)(param_2 + 0x30c) != '\0' &&
                     (*(int *)(param_2 + 0x11c) != *(int *)((long)plVar17 + 0x11c)))))
              goto LAB_001d5f94;
              iVar8 = FUN_002adbec(*(undefined8 *)(param_2 + 0xc0),plVar17[0x18]);
              if (iVar8 == 0) goto LAB_001d5f94;
              if (*(int *)(param_2 + 0x118) != (int)plVar17[0x23]) goto LAB_001d5f94;
              if ((*(uint *)(*(long *)(param_2 + 0x348) + 0x7c) & 1) != 0) {
                cVar5 = FUN_00296978(param_2 + 0x278,plVar17 + 0x4f);
                if (cVar5 == '\0') goto LAB_001d5f94;
                if (*(int *)((long)plVar17 + 0x22c) != 2) {
                  bVar2 = true;
                  goto LAB_001d5f94;
                }
              }
            }
            if (bVar3) {
              iVar8 = strcmp(*(char **)(param_2 + 400),(char *)plVar17[0x32]);
              if (iVar8 != 0) goto LAB_001d5f94;
              iVar8 = strcmp(*(char **)(param_2 + 0x198),(char *)plVar17[0x33]);
            }
            else {
              iVar8 = (int)plVar17[0x7f];
            }
            if (iVar8 == 0) {
              if (bVar4) {
                if ((char *)plVar17[0x36] == (char *)0x0) goto LAB_001d5f94;
                pcVar12 = (char *)plVar17[0x37];
                if (pcVar12 == (char *)0x0) goto LAB_001d5f94;
                iVar8 = strcmp(*(char **)(param_2 + 0x1b0),(char *)plVar17[0x36]);
                if (iVar8 != 0) goto LAB_001d5f94;
                iVar8 = strcmp(*(char **)(param_2 + 0x1b8),pcVar12);
              }
              else {
                iVar8 = (int)plVar17[0x83];
              }
              if (iVar8 == 0) {
                if (bVar4 || bVar3) {
                  if (((!bVar3) || ((int)plVar17[0x7f] == 0)) &&
                     ((!bVar4 || ((int)plVar17[0x83] == 0)))) {
                    plVar16 = plVar17;
                    goto LAB_001d5f94;
                  }
                  *param_4 = 1;
                }
                else if ((bVar6 != 0) && (uVar1 != 0)) {
                  if (uVar15 <= uVar1) {
                    if (uVar15 != 0) goto LAB_001d5f94;
                  }
                  cVar5 = FUN_00296304(param_1,plVar17);
                  if (cVar5 != '\0') goto LAB_001d5f94;
                  if (uVar15 != 0) {
                    if (uVar1 < local_10) {
                      plVar16 = plVar17;
                      local_10 = uVar1;
                    }
                    goto LAB_001d5f94;
                  }
                }
                plVar16 = plVar17;
                goto LAB_001d6300;
              }
            }
          }
        }
      }
      goto LAB_001d5f94;
    }
    if ((*(uint *)(plVar17[0x69] + 0x78) >> 0x12 & 1) == 0) {
      uVar7 = FUN_002944d0((int)plVar17[0x3e],0xffffffff,0xffffffff,0);
    }
    else {
      uVar7 = FUN_002b89a0(plVar17);
      uVar7 = uVar7 & 0xff;
    }
    if (uVar7 == 0) goto LAB_001d6008;
    *plVar17 = param_1;
    FUN_002a3d84(plVar17,1);
    goto LAB_001d5f94;
  }
  if (plVar16 != (long *)0x0) {
LAB_001d6300:
    *param_3 = plVar16;
    return 1;
  }
  if ((!bVar2) || (*(char *)(param_1 + 0x783) == '\0')) {
    return 0;
  }
LAB_001d5f14:
  *param_5 = 1;
  return 0;
}


