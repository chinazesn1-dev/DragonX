// Recovered from libkentos.so by Ghidra 12.2
// address: 001e8780
// size: 892
// name: FUN_001e8780
// namespace: Global
// signature: undefined FUN_001e8780(void)
// generated: 2026-11-22 21:46:19


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001e8780(void)

{
  byte bVar1;
  int iVar2;
  char *__s2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if (((DAT_0082f8c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f8c8), iVar2 != 0)) {
    _DAT_0082f8c0 = DAT_00479e20;
    __cxa_atexit(&LAB_001f58bc,&DAT_0082f8c0,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f8c8);
  }
  uVar3 = (uint)DAT_0082f8c0;
  if (DAT_0082f8c7 != '\0') {
    uVar3 = uVar3 ^ 0x27;
    _DAT_0082f8c0 =
         CONCAT17(DAT_0082f8c7,
                  CONCAT16(DAT_0082f8c6,
                           CONCAT15(DAT_0082f8c5,CONCAT41((int)(_DAT_0082f8c0 >> 8),(char)uVar3))))
         ^ 0x2727272727272700;
  }
  if (uVar3 != 0) {
    uVar8 = 0x811c9dc5;
    uVar7 = 0x811c9dc5;
    pbVar6 = &DAT_0082f8c1;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uVar7 ^ uVar3) * 0x1000193;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)bVar1;
    } while (bVar1 != 0);
    if (uVar7 != 0x14fa23ed) {
      return 0;
    }
    if (((DAT_0082f8e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f8e8), iVar2 != 0)) {
      DAT_0082f8e0 = 0xd761c12;
      uRam000000000082f8d8 = _UNK_00479a88;
      _DAT_0082f8d0 = _DAT_00479a80;
      DAT_0082f8e4 = 0x5b6a;
      __cxa_atexit(&LAB_001f58c4,&DAT_0082f8d0,&PTR_LOOP_00759000);
      __cxa_guard_release(&DAT_0082f8e8);
    }
    FUN_001f58d0(&DAT_0082f8d0);
    if (DAT_0082f8d0 != 0) {
      uVar3 = 0x811c9dc5;
      pbVar6 = &DAT_0082f8d1;
      uVar7 = (uint)DAT_0082f8d0;
      do {
        bVar1 = *pbVar6;
        uVar3 = (uVar3 ^ uVar7) * 0x1000193;
        pbVar6 = pbVar6 + 1;
        uVar7 = (uint)bVar1;
      } while (bVar1 != 0);
      if (uVar3 == 0x523b34c2) {
        if (DAT_0082f2c0 == '\0') {
          return 0;
        }
        uVar9 = (ulong)(DAT_0082f158 >> 1);
        if ((DAT_0082f158 & 1) != 0) {
          uVar9 = DAT_0082f160;
        }
        if (uVar9 != 0x20) {
          return 0;
        }
        uVar9 = (ulong)(DAT_0082f170 >> 1);
        if ((DAT_0082f170 & 1) != 0) {
          uVar9 = DAT_0082f178;
        }
        if (uVar9 != 0x20) {
          return 0;
        }
        pbVar6 = DAT_0082f168;
        if ((DAT_0082f158 & 1) == 0) {
          pbVar6 = &DAT_0082f159;
        }
        __s2 = DAT_0082f180;
        if ((DAT_0082f170 & 1) == 0) {
          __s2 = &DAT_0082f171;
        }
        if ((DAT_0082f158 & 1) == 0) {
          lVar5 = -(ulong)(DAT_0082f158 >> 1);
          pcVar4 = &DAT_0082f159;
          do {
            if (*pcVar4 != *__s2) {
              return 0;
            }
            pcVar4 = pcVar4 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
        else {
          iVar2 = memcmp(pbVar6,__s2,0x20);
          if (iVar2 != 0) {
            return 0;
          }
        }
        uVar9 = 0;
        do {
          iVar2 = isxdigit((uint)pbVar6[uVar9]);
          if (iVar2 == 0) {
            return 0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x20);
        if (DAT_0082f8b8 != 0) {
          if (*pbVar6 == 0) {
            uVar3 = 0x9e766091;
          }
          else {
            uVar3 = 0x811c9dc5;
            uVar7 = (uint)*pbVar6;
            do {
              pbVar6 = pbVar6 + 1;
              uVar3 = (uVar3 ^ uVar7) * 0x1000193;
              uVar7 = (uint)*pbVar6;
            } while (*pbVar6 != 0);
            uVar3 = (uVar3 ^ 0x9e3779b9) + 0x7f4a7c15 | 1;
          }
          if (DAT_0082f8b8 != uVar3) {
            return 0;
          }
          if ((DAT_0082f8f0 != 0) && (DAT_0082f8f8 != '\0')) {
            lVar5 = 0;
            do {
              pbVar6 = (byte *)(DAT_0082f8f0 + lVar5);
              lVar5 = lVar5 + 1;
              uVar8 = (uVar8 ^ *pbVar6) * 0x1000193;
            } while (lVar5 != 0x40);
            if (uVar8 != DAT_0082f8fc) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


