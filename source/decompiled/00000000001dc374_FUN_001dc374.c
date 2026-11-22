// Recovered from libkentos.so by Ghidra 12.2
// address: 001dc374
// size: 392
// name: FUN_001dc374
// namespace: Global
// signature: undefined FUN_001dc374(void)
// generated: 2026-11-22 21:43:47


void FUN_001dc374(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 auStack_1f8 [464];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (((DAT_0082f400 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f400), iVar3 != 0)) {
    memcpy(auStack_1f8,&DAT_00742280,0x1d0);
                    /* try { // try from 001dc4b4 to 001dc4c7 has its CatchHandler @ 001dc4fc */
    FUN_001dc514(&DAT_0082f3d8,auStack_1f8,0x1d);
    __cxa_atexit(&LAB_001dc770,&DAT_0082f3d8,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f400);
  }
  if (DAT_0082f3e0 != 0) {
    uVar5 = (ulong)*(byte *)(param_1 + 0x70d);
    uVar6 = DAT_0082f3e0 - 1;
    if ((uVar6 & DAT_0082f3e0) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (DAT_0082f3e0 <= uVar5) {
        uVar7 = 0;
        if (DAT_0082f3e0 != 0) {
          uVar7 = uVar5 / DAT_0082f3e0;
        }
        uVar7 = uVar5 - uVar7 * DAT_0082f3e0;
      }
    }
    plVar8 = *(long **)(DAT_0082f3d8 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      pcVar4 = "Vehicle";
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if (*(uint *)(plVar8 + 2) == (uint)*(byte *)(param_1 + 0x70d)) {
            pcVar4 = (char *)plVar8[3];
            break;
          }
        }
        else {
          if ((uVar6 & DAT_0082f3e0) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (DAT_0082f3e0 <= uVar9) {
            uVar1 = 0;
            if (DAT_0082f3e0 != 0) {
              uVar1 = uVar9 / DAT_0082f3e0;
            }
            if (uVar9 - uVar1 * DAT_0082f3e0 == uVar7) goto LAB_001dc444;
            break;
          }
          if (uVar9 != uVar7) break;
        }
LAB_001dc444:
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      goto LAB_001dc458;
    }
  }
  pcVar4 = "Vehicle";
LAB_001dc458:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pcVar4);
  }
  return;
}


