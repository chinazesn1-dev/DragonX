// Recovered from libkentos.so by Ghidra 12.2
// address: 001fe764
// size: 748
// name: FUN_001fe764
// namespace: Global
// signature: undefined FUN_001fe764(void)
// generated: 2026-11-22 21:47:12


long * FUN_001fe764(undefined8 *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_1 + 1 == param_2) {
LAB_001fe818:
    plVar13 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      if (plVar13 == (long *)0x0) {
        plVar12 = param_2;
        do {
          plVar9 = (long *)plVar12[2];
          bVar6 = (long *)*plVar9 == plVar12;
          plVar12 = plVar9;
        } while (bVar6);
      }
      else {
        plVar12 = plVar13;
        do {
          plVar9 = plVar12;
          plVar12 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      bVar4 = *(byte *)(plVar9 + 4);
      bVar5 = *param_5;
      uVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar2 = *(ulong *)(param_5 + 8);
      }
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar3 = uVar2;
      if (uVar1 <= uVar2) {
        sVar3 = uVar1;
      }
      if (sVar3 != 0) {
        pvVar10 = (void *)plVar9[6];
        pbVar8 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar10 = (void *)((long)plVar9 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar8 = param_5 + 1;
        }
        iVar7 = memcmp(pvVar10,pbVar8,sVar3);
        if (iVar7 != 0) {
          if (-1 < iVar7) goto LAB_001fe908;
          goto LAB_001fe938;
        }
      }
      if (uVar2 <= uVar1) goto LAB_001fe908;
    }
LAB_001fe938:
    if (plVar13 != (long *)0x0) {
      *param_3 = (long)plVar9;
      return plVar9 + 1;
    }
    param_4 = param_2;
LAB_001fe954:
    *param_3 = (long)param_2;
  }
  else {
    bVar4 = *(byte *)(param_2 + 4);
    bVar5 = *param_5;
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = param_2[5];
    }
    uVar1 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    sVar3 = uVar2;
    if (uVar1 <= uVar2) {
      sVar3 = uVar1;
    }
    if (sVar3 == 0) {
LAB_001fe810:
      if (uVar1 < uVar2) goto LAB_001fe818;
      if (sVar3 != 0) {
        pvVar10 = (void *)param_2[6];
        pbVar8 = *(byte **)(param_5 + 0x10);
        if ((bVar4 & 1) == 0) {
          pvVar10 = (void *)((long)param_2 + 0x21);
        }
        if ((bVar5 & 1) == 0) {
          pbVar8 = param_5 + 1;
        }
        goto LAB_001fe864;
      }
LAB_001fe95c:
      if (uVar2 < uVar1) {
LAB_001fe964:
        plVar9 = (long *)param_2[1];
        if (plVar9 == (long *)0x0) {
          plVar9 = param_2 + 2;
          plVar13 = (long *)*plVar9;
          if ((long *)*plVar13 != param_2) {
            do {
              lVar11 = *plVar9;
              plVar9 = (long *)(lVar11 + 0x10);
              plVar13 = (long *)*plVar9;
            } while (*plVar13 != lVar11);
          }
        }
        else {
          do {
            plVar13 = plVar9;
            plVar9 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        if (plVar13 != param_1 + 1) {
          bVar4 = *(byte *)(plVar13 + 4);
          uVar2 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar2 = plVar13[5];
          }
          sVar3 = uVar2;
          if (uVar1 <= uVar2) {
            sVar3 = uVar1;
          }
          if (sVar3 != 0) {
            pbVar8 = *(byte **)(param_5 + 0x10);
            pvVar10 = (void *)plVar13[6];
            if ((bVar5 & 1) == 0) {
              pbVar8 = param_5 + 1;
            }
            if ((bVar4 & 1) == 0) {
              pvVar10 = (void *)((long)plVar13 + 0x21);
            }
            iVar7 = memcmp(pbVar8,pvVar10,sVar3);
            if (iVar7 != 0) {
              if (-1 < iVar7) goto LAB_001fe908;
              goto LAB_001fea10;
            }
          }
          if (uVar2 <= uVar1) {
LAB_001fe908:
            plVar9 = (long *)FUN_001feba0(param_1,param_3,param_5);
            return plVar9;
          }
        }
LAB_001fea10:
        if (param_2[1] != 0) {
          *param_3 = (long)plVar13;
          return plVar13;
        }
        param_4 = param_2 + 1;
        goto LAB_001fe954;
      }
    }
    else {
      pbVar8 = *(byte **)(param_5 + 0x10);
      pvVar10 = (void *)param_2[6];
      if ((bVar5 & 1) == 0) {
        pbVar8 = param_5 + 1;
      }
      if ((bVar4 & 1) == 0) {
        pvVar10 = (void *)((long)param_2 + 0x21);
      }
      iVar7 = memcmp(pbVar8,pvVar10,sVar3);
      if (iVar7 == 0) goto LAB_001fe810;
      if (iVar7 < 0) goto LAB_001fe818;
LAB_001fe864:
      iVar7 = memcmp(pvVar10,pbVar8,sVar3);
      if (iVar7 == 0) goto LAB_001fe95c;
      if (iVar7 < 0) goto LAB_001fe964;
    }
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
  }
  return param_4;
}


