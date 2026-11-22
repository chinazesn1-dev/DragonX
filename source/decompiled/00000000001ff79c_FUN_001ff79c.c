// Recovered from libkentos.so by Ghidra 12.2
// address: 001ff79c
// size: 1020
// name: FUN_001ff79c
// namespace: Global
// signature: undefined FUN_001ff79c(void)
// generated: 2026-11-22 21:47:13


void FUN_001ff79c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar3 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)param_2[1];
joined_r0x001ff7cc:
    if (plVar3 == (long *)0x0) {
      bVar5 = false;
      plVar4 = plVar6 + 2;
      goto LAB_001ff7f0;
    }
  }
  else {
    plVar4 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      plVar3 = (long *)plVar6[1];
      goto joined_r0x001ff7cc;
    }
  }
  plVar4 = plVar6 + 2;
  bVar5 = true;
  plVar3[2] = *plVar4;
LAB_001ff7f0:
  puVar9 = (undefined8 *)plVar6[2];
  plVar2 = (long *)*puVar9;
  if (plVar2 == plVar6) {
    *puVar9 = plVar3;
    if (plVar6 == param_1) {
      plVar2 = (long *)0x0;
      param_1 = plVar3;
    }
    else {
      plVar2 = (long *)puVar9[1];
    }
  }
  else {
    puVar9[1] = plVar3;
  }
  lVar8 = plVar6[3];
  plVar1 = param_1;
  if (plVar6 != param_2) {
    lVar10 = param_2[2];
    *plVar4 = lVar10;
    lVar7 = 0;
    if (*(long **)param_2[2] != param_2) {
      lVar7 = 8;
    }
    *(long **)(lVar10 + lVar7) = plVar6;
    lVar7 = *param_2;
    *plVar6 = lVar7;
    *(long **)(lVar7 + 0x10) = plVar6;
    lVar7 = param_2[1];
    plVar6[1] = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 0x10) = plVar6;
    }
    plVar1 = plVar6;
    if (param_1 != param_2) {
      plVar1 = param_1;
    }
    *(char *)(plVar6 + 3) = (char)param_2[3];
  }
  if (((char)lVar8 != '\0') && (plVar1 != (long *)0x0)) {
    if (!bVar5) {
      while( true ) {
        plVar6 = (long *)plVar2[2];
        plVar3 = plVar1;
        if ((long *)*plVar6 != plVar2) break;
        if ((char)plVar2[3] == '\0') {
          *(undefined1 *)(plVar2 + 3) = 1;
          *(undefined1 *)(plVar6 + 3) = 0;
          plVar4 = (long *)plVar2[1];
          *plVar6 = (long)plVar4;
          if (plVar4 != (long *)0x0) {
            plVar4[2] = (long)plVar6;
          }
          plVar2[2] = plVar6[2];
          puVar9 = (undefined8 *)plVar6[2];
          if ((long *)*puVar9 == plVar6) {
            *puVar9 = plVar2;
            plVar4 = (long *)*plVar6;
          }
          else {
            puVar9[1] = plVar2;
          }
          plVar2[1] = (long)plVar6;
          plVar6[2] = (long)plVar2;
          plVar3 = plVar2;
          if (plVar1 != plVar6) {
            plVar3 = plVar1;
          }
          lVar8 = *plVar4;
          if (lVar8 == 0) goto LAB_001ff914;
LAB_001ff90c:
          if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_001ff914;
          plVar3 = (long *)(lVar8 + 0x18);
LAB_001ffa74:
          plVar2 = plVar4 + 2;
          plVar1 = plVar4 + 3;
LAB_001ffae0:
          plVar2 = (long *)*plVar2;
          *(char *)plVar1 = (char)plVar2[3];
          *(undefined1 *)(plVar2 + 3) = 1;
          *(char *)plVar3 = '\x01';
          lVar8 = *plVar2;
          lVar7 = *(long *)(lVar8 + 8);
          *plVar2 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar2;
          }
          *(long *)(lVar8 + 0x10) = plVar2[2];
          lVar7 = 0;
          if (*(long **)plVar2[2] != plVar2) {
            lVar7 = 8;
          }
          *(long *)((long)plVar2[2] + lVar7) = lVar8;
          *(long **)(lVar8 + 8) = plVar2;
          plVar2[2] = lVar8;
          return;
        }
        lVar8 = *plVar2;
        plVar4 = plVar2;
        if (lVar8 != 0) goto LAB_001ff90c;
LAB_001ff914:
        plVar6 = (long *)plVar4[1];
        if ((plVar6 != (long *)0x0) && ((char)plVar6[3] == '\0')) {
          if (lVar8 != 0) {
            plVar3 = (long *)(lVar8 + 0x18);
            if (*(char *)plVar3 == '\0') goto LAB_001ffa74;
            plVar6 = (long *)plVar4[1];
          }
          plVar1 = plVar6 + 3;
          *(undefined1 *)plVar1 = 1;
          plVar3 = plVar4 + 3;
          *(char *)plVar3 = '\0';
          lVar8 = *plVar6;
          plVar4[1] = lVar8;
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar4;
          }
          plVar2 = plVar6 + 2;
          *plVar2 = plVar4[2];
          lVar8 = 0;
          if (*(long **)plVar4[2] != plVar4) {
            lVar8 = 8;
          }
          *(long **)((long)plVar4[2] + lVar8) = plVar6;
          *plVar6 = (long)plVar4;
          plVar4[2] = (long)plVar6;
          goto LAB_001ffae0;
        }
        plVar6 = (long *)plVar4[2];
        *(undefined1 *)(plVar4 + 3) = 0;
        if (plVar6 == plVar3) goto LAB_001ffa00;
LAB_001ff934:
        if ((char)plVar6[3] == '\0') goto LAB_001ffa00;
        plVar2 = (long *)((undefined8 *)plVar6[2])[*(long **)plVar6[2] == plVar6];
        plVar1 = plVar3;
      }
      if ((char)plVar2[3] == '\0') {
        *(undefined1 *)(plVar2 + 3) = 1;
        plVar3 = (long *)plVar6[1];
        *(undefined1 *)(plVar6 + 3) = 0;
        lVar8 = *plVar3;
        plVar6[1] = lVar8;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar6;
        }
        plVar3[2] = plVar6[2];
        lVar8 = 0;
        if (*(long **)plVar6[2] != plVar6) {
          lVar8 = 8;
        }
        *(long **)((long)plVar6[2] + lVar8) = plVar3;
        *plVar3 = (long)plVar6;
        plVar6[2] = (long)plVar3;
        plVar3 = plVar2;
        if (plVar1 != (long *)*plVar2) {
          plVar3 = plVar1;
        }
        plVar2 = (long *)((long *)*plVar2)[1];
        lVar8 = *plVar2;
        if (lVar8 != 0) goto LAB_001ff8d4;
LAB_001ff8dc:
        lVar7 = plVar2[1];
        if ((lVar7 == 0) || (*(char *)(lVar7 + 0x18) != '\0')) {
          plVar6 = (long *)plVar2[2];
          *(undefined1 *)(plVar2 + 3) = 0;
          if (plVar6 != plVar3) goto LAB_001ff934;
          plVar6 = plVar3;
LAB_001ffa00:
          *(undefined1 *)(plVar6 + 3) = 1;
          return;
        }
LAB_001ffa14:
        plVar3 = (long *)(lVar7 + 0x18);
        if (*(char *)plVar3 == '\0') {
          plVar6 = plVar2 + 2;
          plVar4 = plVar2 + 3;
          goto LAB_001ffb40;
        }
      }
      else {
        lVar8 = *plVar2;
        if (lVar8 == 0) goto LAB_001ff8dc;
LAB_001ff8d4:
        if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_001ff8dc;
        lVar7 = plVar2[1];
        if (lVar7 != 0) goto LAB_001ffa14;
      }
      plVar4 = (long *)(lVar8 + 0x18);
      *(undefined1 *)plVar4 = 1;
      plVar3 = plVar2 + 3;
      *(char *)plVar3 = '\0';
      lVar7 = *(long *)(lVar8 + 8);
      *plVar2 = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar2;
      }
      plVar6 = (long *)(lVar8 + 0x10);
      *plVar6 = plVar2[2];
      lVar7 = 0;
      if (*(long **)plVar2[2] != plVar2) {
        lVar7 = 8;
      }
      *(long *)((long)plVar2[2] + lVar7) = lVar8;
      *(long **)(lVar8 + 8) = plVar2;
      plVar2[2] = lVar8;
LAB_001ffb40:
      lVar8 = *plVar6;
      *(undefined1 *)plVar4 = *(undefined1 *)(lVar8 + 0x18);
      *(undefined1 *)(lVar8 + 0x18) = 1;
      *(char *)plVar3 = '\x01';
      plVar3 = *(long **)(lVar8 + 8);
      lVar7 = *plVar3;
      *(long *)(lVar8 + 8) = lVar7;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar8;
      }
      plVar3[2] = *(long *)(lVar8 + 0x10);
      lVar7 = 0;
      if (**(long **)(lVar8 + 0x10) != lVar8) {
        lVar7 = 8;
      }
      *(long **)((long)*(long **)(lVar8 + 0x10) + lVar7) = plVar3;
      *plVar3 = lVar8;
      *(long **)(lVar8 + 0x10) = plVar3;
      return;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
  }
  return;
}


