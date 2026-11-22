// Recovered from libkentos.so by Ghidra 12.2
// address: 001db70c
// size: 428
// name: FUN_001db70c
// namespace: Global
// signature: undefined FUN_001db70c(void)
// generated: 2026-11-22 21:43:45


void FUN_001db70c(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (DAT_0082f3c0 == 0) {
    uVar9 = *(undefined8 *)(*(long *)PTR_DAT_007584e8 + 0x18);
    DAT_0082f3c8 = *(long *)(*(long *)PTR_DAT_007584e8 + 0x10);
    DAT_0082f3d4 = (int)((ulong)uVar9 >> 0x20);
    bVar1 = 0 < DAT_0082f3d4;
    uRam000000000082f3d0 = uVar9;
    if (bVar1) {
      lVar7 = 0;
      lVar5 = 0;
      pcVar8 = (char *)((ulong)&local_80 | 1);
      do {
        uVar3 = s_Class_Engine_Engine_00482ce8._8_8_;
        uVar9 = s_Class_Engine_Engine_00482ce8._0_8_;
        lVar6 = *(long *)(DAT_0082f3c8 + lVar7);
        if (lVar6 != 0) {
          if (DAT_0082f570 == 0) {
            uStack_78 = 0;
            local_80 = 0x26;
            pcVar8[0x12] = 'e';
            pcVar8[0x10] = 'i';
            pcVar8[0x11] = 'n';
            *(undefined8 *)(pcVar8 + 8) = uVar3;
            *(undefined8 *)pcVar8 = uVar9;
            local_70 = (void *)0x0;
                    /* try { // try from 001db808 to 001db813 has its CatchHandler @ 001db8b8 */
            DAT_0082f570 = FUN_001ee58c(&local_80);
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          uVar4 = FUN_00265b4c(lVar6,DAT_0082f570);
          if (((uVar4 & 1) != 0) && (*(long *)(lVar6 + 0x810) != 0)) {
            DAT_0082f3b8 = *(long *)(*(long *)(lVar6 + 0x810) + 0x78);
            DAT_0082f3c0 = (int)lVar5;
            goto joined_r0x001db86c;
          }
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar5 < DAT_0082f3d4);
    }
  }
  else {
    lVar5 = *(long *)(DAT_0082f3c8 + (long)DAT_0082f3c0 * 0x18);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x810), lVar5 != 0)) {
      DAT_0082f3b8 = *(long *)(lVar5 + 0x78);
joined_r0x001db86c:
      if ((DAT_0082f3b8 == 0) || (lVar5 = DAT_0082f3b8, *(long *)(DAT_0082f3b8 + 0x38) == 0)) {
        lVar5 = 0;
        DAT_0082f390 = 0;
        DAT_0082f398 = 0;
      }
      goto LAB_001db884;
    }
  }
  lVar5 = 0;
LAB_001db884:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}


