// Recovered from libkentos.so by Ghidra 12.2
// address: 001eea98
// size: 436
// name: FUN_001eea98
// namespace: Global
// signature: undefined FUN_001eea98(void)
// generated: 2026-11-22 21:46:49


long * FUN_001eea98(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  void *__s1;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 001eeae4 to 001eeaeb has its CatchHandler @ 001eec4c */
  uVar6 = FUN_001eec50(auStack_70,pbVar1,uVar6);
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - 1;
    if ((uVar13 & uVar12) == 0) {
      uVar14 = uVar13 & uVar6;
    }
    else {
      uVar14 = uVar6;
      if (uVar12 <= uVar6) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = uVar6 / uVar12;
        }
        uVar14 = uVar6 - uVar14 * uVar12;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar14 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        __n = (ulong)(*param_2 >> 1);
        pbVar1 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          __n = *(size_t *)(param_2 + 8);
          pbVar1 = *(byte **)(param_2 + 0x10);
        }
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar6) {
            bVar2 = *(byte *)(plVar7 + 2);
            uVar8 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar8 = plVar7[3];
            }
            if (uVar8 == __n) {
              __s1 = (void *)plVar7[4];
              if ((bVar2 & 1) == 0) {
                __s1 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar2 & 1) == 0) {
                if (__n == 0) break;
                pbVar9 = (byte *)((long)plVar7 + 0x11);
                lVar10 = -(ulong)(bVar2 >> 1);
                pbVar11 = pbVar1;
                while (*pbVar9 == *pbVar11) {
                  pbVar9 = pbVar9 + 1;
                  lVar10 = lVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                  if (lVar10 == 0) goto LAB_001eec14;
                }
              }
              else if ((__n == 0) || (iVar5 = memcmp(__s1,pbVar1,__n), iVar5 == 0)) break;
            }
          }
          else {
            if ((uVar13 & uVar12) == 0) {
              uVar8 = uVar8 & uVar13;
            }
            else if (uVar12 <= uVar8) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar8 / uVar12;
              }
              if (uVar8 - uVar3 * uVar12 == uVar14) goto LAB_001eebec;
              goto LAB_001eec10;
            }
            if (uVar8 != uVar14) goto LAB_001eec10;
          }
LAB_001eebec:
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_001eec14;
    }
  }
LAB_001eec10:
  plVar7 = (long *)0x0;
LAB_001eec14:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}


