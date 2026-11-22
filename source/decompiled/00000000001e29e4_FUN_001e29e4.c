// Recovered from libkentos.so by Ghidra 12.2
// address: 001e29e4
// size: 1248
// name: FUN_001e29e4
// namespace: Global
// signature: undefined FUN_001e29e4(void)
// generated: 2026-11-22 21:45:52


void FUN_001e29e4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  
  if (PTR_DAT_00758cd0[4] == '\0') {
    return;
  }
  if (PTR_DAT_00758cd0[10] == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar5 = FUN_002204a0(param_1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x5f8) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x5f8) != param_2) {
    return;
  }
  if (*(long *)(param_1 + 0x5f0) == 0) {
    return;
  }
  if (((DAT_0082f708 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0082f708), iVar4 != 0)) {
    DAT_0082f6e8 = 0;
    DAT_0082f6e0 = 0;
    DAT_0082f6f8 = 0;
    DAT_0082f6f0 = (long *)0x0;
    DAT_0082f700 = 1.0;
    __cxa_atexit(&LAB_001f0290,&DAT_0082f6e0,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f708);
    uVar6 = *(uint *)(param_1 + 0x664);
    uVar3 = DAT_0082f710;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x664);
    uVar3 = DAT_0082f710;
  }
  if (uVar6 == 0) {
    uVar6 = *(uint *)(*(long *)(param_1 + 0x5f0) + 0x990);
    if (uVar6 == 0) {
      uVar6 = (uint)*(long *)(param_1 + 0x5f0);
    }
  }
  uVar5 = (ulong)uVar6;
  if (DAT_0082f6e8 != 0) {
    uVar7 = DAT_0082f6e8 - 1;
    if ((uVar7 & DAT_0082f6e8) == 0) {
      uVar9 = uVar7 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (DAT_0082f6e8 <= uVar5) {
        uVar9 = 0;
        if (DAT_0082f6e8 != 0) {
          uVar9 = uVar5 / DAT_0082f6e8;
        }
        uVar9 = uVar5 - uVar9 * DAT_0082f6e8;
      }
    }
    plVar11 = *(long **)(DAT_0082f6e0 + uVar9 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_001e2b0c;
            uVar12 = plVar11[1];
            if (uVar12 != uVar5) break;
            if (*(uint *)(plVar11 + 2) == uVar6) {
              DAT_0082f710 = uVar3;
              return;
            }
          }
          if ((uVar7 & DAT_0082f6e8) == 0) break;
          if (DAT_0082f6e8 <= uVar12) {
            uVar10 = 0;
            if (DAT_0082f6e8 != 0) {
              uVar10 = uVar12 / DAT_0082f6e8;
            }
            uVar12 = uVar12 - uVar10 * DAT_0082f6e8;
          }
          if (uVar12 != uVar9) goto LAB_001e2b0c;
        }
      } while ((uVar12 & uVar7) == uVar9);
    }
  }
LAB_001e2b0c:
  DAT_0082f710 = uVar3;
  if ((int)uVar3 < 1) {
    if (*(long *)(param_2 + 0x2768) == 0) {
      return;
    }
    if (*(long *)(*(long *)(param_2 + 0x2768) + 0x5e8) == 0) {
      return;
    }
                    /* try { // try from 001e2bd4 to 001e2bd7 has its CatchHandler @ 001e2ee8 */
    FUN_00267254();
    uVar3 = FUN_001f02dc();
    if ((int)uVar3 < 1) {
      return;
    }
  }
  uVar7 = (ulong)uVar3;
  uVar9 = FUN_002204a0((undefined8 *)(param_1 + 0x718));
  if (((uVar9 & 1) == 0) || (plVar11 = *(long **)(param_1 + 0x718), plVar11 == (long *)0x0)) {
                    /* try { // try from 001e2b8c to 001e2b97 has its CatchHandler @ 001e2f00 */
    FUN_0026714c(param_1,uVar7);
    uVar9 = DAT_0082f6e8;
    if (DAT_0082f6e8 != 0) {
      uVar12 = DAT_0082f6e8 - 1;
      if ((uVar12 & DAT_0082f6e8) == 0) {
        uVar7 = uVar12 & uVar5;
      }
      else {
        uVar7 = uVar5;
        if (DAT_0082f6e8 <= uVar5) {
          uVar7 = 0;
          if (DAT_0082f6e8 != 0) {
            uVar7 = uVar5 / DAT_0082f6e8;
          }
          uVar7 = uVar5 - uVar7 * DAT_0082f6e8;
        }
      }
      plVar11 = *(long **)(DAT_0082f6e0 + uVar7 * 8);
      if (plVar11 != (long *)0x0) {
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if (uVar10 != uVar5) {
            if ((uVar12 & DAT_0082f6e8) == 0) {
              uVar10 = uVar10 & uVar12;
            }
            else if (DAT_0082f6e8 <= uVar10) {
              uVar1 = 0;
              if (DAT_0082f6e8 != 0) {
                uVar1 = uVar10 / DAT_0082f6e8;
              }
              if (uVar10 - uVar1 * DAT_0082f6e8 == uVar7) goto LAB_001e2c44;
              break;
            }
            if (uVar10 != uVar7) break;
          }
LAB_001e2c44:
          if (*(uint *)(plVar11 + 2) == uVar6) {
            return;
          }
        }
      }
    }
                    /* try { // try from 001e2c54 to 001e2c5b has its CatchHandler @ 001e2f00 */
    plVar11 = operator_new(0x18);
    fVar2 = DAT_0082f700;
    lVar13 = DAT_0082f6f8;
    *(uint *)(plVar11 + 2) = uVar6;
    *plVar11 = 0;
    plVar11[1] = uVar5;
    if ((uVar9 == 0) || (fVar2 * (float)uVar9 < (float)(lVar13 + 1))) {
      if (uVar9 < 3) {
        uVar7 = 1;
      }
      else {
        uVar7 = (ulong)((uVar9 - 1 & uVar9) != 0);
      }
      uVar7 = uVar7 | uVar9 << 1;
      uVar9 = (ulong)((float)(lVar13 + 1) / fVar2);
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
                    /* try { // try from 001e2cc0 to 001e2ccf has its CatchHandler @ 001e2eec */
      FUN_001f093c(&DAT_0082f6e0,uVar9);
      goto LAB_001e2e18;
    }
  }
  else {
    lVar13 = *plVar11;
    if (((lVar13 != 0) && (uVar9 = FUN_002204a0(lVar13), (uVar9 & 1) != 0)) &&
       (*(code **)(lVar13 + 0x5c8) != (code *)0x0)) {
                    /* try { // try from 001e2b50 to 001e2b5f has its CatchHandler @ 001e2d8c */
      (**(code **)(lVar13 + 0x5c8))(plVar11,uVar7,1);
    }
    uVar9 = DAT_0082f6e8;
    if (DAT_0082f6e8 != 0) {
      uVar12 = DAT_0082f6e8 - 1;
      if ((uVar12 & DAT_0082f6e8) == 0) {
        uVar7 = uVar12 & uVar5;
      }
      else {
        uVar7 = uVar5;
        if (DAT_0082f6e8 <= uVar5) {
          uVar7 = 0;
          if (DAT_0082f6e8 != 0) {
            uVar7 = uVar5 / DAT_0082f6e8;
          }
          uVar7 = uVar5 - uVar7 * DAT_0082f6e8;
        }
      }
      plVar11 = *(long **)(DAT_0082f6e0 + uVar7 * 8);
      if (plVar11 != (long *)0x0) {
        while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
          uVar10 = plVar11[1];
          if (uVar10 != uVar5) {
            if ((uVar12 & DAT_0082f6e8) == 0) {
              uVar10 = uVar10 & uVar12;
            }
            else if (DAT_0082f6e8 <= uVar10) {
              uVar1 = 0;
              if (DAT_0082f6e8 != 0) {
                uVar1 = uVar10 / DAT_0082f6e8;
              }
              if (uVar10 - uVar1 * DAT_0082f6e8 == uVar7) goto LAB_001e2d28;
              break;
            }
            if (uVar10 != uVar7) break;
          }
LAB_001e2d28:
          if (*(uint *)(plVar11 + 2) == uVar6) {
            return;
          }
        }
      }
    }
    plVar11 = operator_new(0x18);
    fVar2 = DAT_0082f700;
    lVar13 = DAT_0082f6f8;
    *(uint *)(plVar11 + 2) = uVar6;
    *plVar11 = 0;
    plVar11[1] = uVar5;
    if ((uVar9 == 0) || (fVar2 * (float)uVar9 < (float)(lVar13 + 1))) {
      if (uVar9 < 3) {
        uVar7 = 1;
      }
      else {
        uVar7 = (ulong)((uVar9 - 1 & uVar9) != 0);
      }
      uVar7 = uVar7 | uVar9 << 1;
      uVar9 = (ulong)((float)(lVar13 + 1) / fVar2);
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
                    /* try { // try from 001e2e08 to 001e2e17 has its CatchHandler @ 001e2ed4 */
      FUN_001f093c(&DAT_0082f6e0,uVar9);
LAB_001e2e18:
      uVar9 = DAT_0082f6e8;
      if ((DAT_0082f6e8 - 1 & DAT_0082f6e8) == 0) {
        uVar7 = DAT_0082f6e8 - 1 & uVar5;
      }
      else if (uVar5 < DAT_0082f6e8) {
        uVar7 = uVar5;
      }
      else {
        uVar7 = 0;
        if (DAT_0082f6e8 != 0) {
          uVar7 = uVar5 / DAT_0082f6e8;
        }
        uVar7 = uVar5 - uVar7 * DAT_0082f6e8;
      }
    }
  }
  lVar13 = DAT_0082f6e0;
  plVar8 = *(long **)(DAT_0082f6e0 + uVar7 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar11 = (long)DAT_0082f6f0;
    DAT_0082f6f0 = plVar11;
    *(long ***)(lVar13 + uVar7 * 8) = &DAT_0082f6f0;
    if (*plVar11 == 0) goto LAB_001e2eb4;
    uVar5 = *(ulong *)(*plVar11 + 8);
    if ((uVar9 - 1 & uVar9) == 0) {
      uVar5 = uVar5 & uVar9 - 1;
    }
    else if (uVar9 <= uVar5) {
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = uVar5 / uVar9;
      }
      uVar5 = uVar5 - uVar7 * uVar9;
    }
    plVar8 = (long *)(DAT_0082f6e0 + uVar5 * 8);
  }
  else {
    *plVar11 = *plVar8;
  }
  *plVar8 = (long)plVar11;
LAB_001e2eb4:
  DAT_0082f6f8 = DAT_0082f6f8 + 1;
  return;
}


