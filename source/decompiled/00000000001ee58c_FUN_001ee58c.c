// Recovered from libkentos.so by Ghidra 12.2
// address: 001ee58c
// size: 400
// name: FUN_001ee58c
// namespace: Global
// signature: undefined FUN_001ee58c(void)
// generated: 2026-11-22 21:46:49


long FUN_001ee58c(byte *param_1)

{
  size_t __n;
  size_t sVar1;
  byte *__s1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  byte *__s2;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  byte local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  puVar5 = PTR_DAT_007584e8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)PTR_DAT_007584e8;
  if (0 < *(int *)(lVar7 + 0x1c)) {
    lVar10 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar10 * 0x18);
      if (lVar7 != 0) {
        FUN_0026586c(local_80,lVar7);
        pbVar9 = local_70;
        bVar2 = *param_1;
        __n = (ulong)(local_80[0] >> 1);
        if ((local_80[0] & 1) != 0) {
          __n = local_78;
        }
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 8);
        }
        bVar4 = false;
        if (__n == sVar1) {
          __s1 = (byte *)((ulong)local_80 | 1);
          if ((local_80[0] & 1) != 0) {
            __s1 = local_70;
          }
          __s2 = param_1 + 1;
          if ((bVar2 & 1) != 0) {
            __s2 = *(byte **)(param_1 + 0x10);
          }
          if ((local_80[0] & 1) != 0) {
            if (__n == 0) {
              operator_delete(local_70);
            }
            else {
              iVar6 = memcmp(__s1,__s2,__n);
              operator_delete(pbVar9);
              if (iVar6 != 0) goto LAB_001ee6c0;
            }
            goto LAB_001ee6d8;
          }
          if (__n == 0) goto LAB_001ee6d8;
          lVar8 = -(ulong)(local_80[0] >> 1);
          pbVar9 = (byte *)((ulong)local_80 | 1);
          do {
            if (*pbVar9 != *__s2) {
              bVar4 = false;
              goto joined_r0x001ee6b0;
            }
            pbVar9 = pbVar9 + 1;
            lVar8 = lVar8 + 1;
            __s2 = __s2 + 1;
          } while (lVar8 != 0);
          bVar4 = true;
        }
joined_r0x001ee6b0:
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if (bVar4) goto LAB_001ee6d8;
      }
LAB_001ee6c0:
      lVar7 = *(long *)puVar5;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar7 + 0x1c));
  }
  lVar7 = 0;
LAB_001ee6d8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}


