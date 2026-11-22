// Recovered from libkentos.so by Ghidra 12.2
// address: 001dc82c
// size: 592
// name: FUN_001dc82c
// namespace: Global
// signature: undefined FUN_001dc82c(void)
// generated: 2026-11-22 21:43:48


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dc82c(undefined8 *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  if (((DAT_0082f5c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0082f5c8), iVar3 != 0)) {
    uRam000000000082f5a8 = 0;
    _DAT_0082f5a0 = 0;
    uRam000000000082f5b8 = 0;
    _DAT_0082f5b0 = 0;
    DAT_0082f5c0 = 0x3f800000;
    __cxa_atexit(&LAB_001ee71c,&DAT_0082f5a0,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f5c8);
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  sVar4 = strlen(param_2);
  if (0xffffffffffffffef < sVar4) {
LAB_001dca70:
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_60);
  }
  if (sVar4 < 0x17) {
    pvVar8 = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 == 0) goto LAB_001dc8d8;
  }
  else {
    uVar10 = sVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar10);
    local_60 = uVar10 | 1;
    local_58 = sVar4;
    local_50 = pvVar8;
  }
  memcpy(pvVar8,param_2,sVar4);
LAB_001dc8d8:
  *(undefined1 *)((long)pvVar8 + sVar4) = 0;
                    /* try { // try from 001dc8dc to 001dc8eb has its CatchHandler @ 001dca80 */
  lVar5 = FUN_001eea98(&DAT_0082f5a0,&local_60);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (lVar5 == 0) {
    lVar5 = *(long *)PTR_DAT_00758230;
    iVar3 = *(int *)(lVar5 + 0x400);
    if (iVar3 != 0) {
      uVar10 = 0;
      do {
        if ((((long)uVar10 < (long)iVar3) &&
            (lVar7 = *(long *)(*(long *)(lVar5 + (uVar10 >> 0xe & 0x3ffff) * 8) +
                              (uVar10 & 0x3fff) * 8), lVar7 != 0)) &&
           (iVar2 = strcmp((char *)(lVar7 + 0xc),param_2), iVar2 == 0)) {
          *(int *)param_1 = (int)uVar10;
          local_60 = 0;
          local_58 = 0;
          local_50 = (void *)0x0;
          sVar4 = strlen(param_2);
          if (0xffffffffffffffef < sVar4) goto LAB_001dca70;
          if (sVar4 < 0x17) {
            pvVar8 = (void *)((ulong)&local_60 | 1);
            local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar4 << 1));
            if (sVar4 != 0) goto LAB_001dc9e8;
          }
          else {
            uVar9 = sVar4 + 0x10 & 0xfffffffffffffff0;
            pvVar8 = operator_new(uVar9);
            local_60 = uVar9 | 1;
            local_58 = sVar4;
            local_50 = pvVar8;
LAB_001dc9e8:
            memcpy(pvVar8,param_2,sVar4);
          }
          *(undefined1 *)((long)pvVar8 + sVar4) = 0;
                    /* try { // try from 001dc9fc to 001dca0b has its CatchHandler @ 001dca7c */
          puVar6 = (undefined4 *)FUN_001ee788(&DAT_0082f5a0,&local_60);
          *puVar6 = (int)uVar10;
          if ((local_60 & 1) != 0) {
            operator_delete(local_50);
          }
          break;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(long)iVar3);
    }
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + 0x28);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


