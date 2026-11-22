// Recovered from libkentos.so by Ghidra 12.2
// address: 001ef0e8
// size: 872
// name: FUN_001ef0e8
// namespace: Global
// signature: undefined FUN_001ef0e8(void)
// generated: 2026-11-22 21:46:49


void FUN_001ef0e8(long *param_1,ulong param_2)

{
  size_t sVar1;
  size_t __n;
  char *__s1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  void *pvVar10;
  logic_error *this;
  void *pvVar11;
  long *plVar12;
  char *__s2;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 - 1 & param_2) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar13 = param_1[1];
  if (param_2 <= uVar13) {
    if (param_2 < uVar13) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar13 < 3 || (uVar13 - 1 & uVar13) != 0) {
        uVar9 = std::__ndk1::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (0x40U - LZCOUNT(uVar9 - 1) & 0x3f);
      }
      if (uVar9 <= param_2) {
        uVar9 = param_2;
      }
      if (uVar9 < uVar13) goto LAB_001ef138;
    }
    return;
  }
  uVar9 = param_2;
LAB_001ef138:
  if (uVar9 == 0) {
    pvVar10 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    param_1[1] = 0;
  }
  else {
    if (uVar9 >> 0x3d != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001ef41c to 001ef427 has its CatchHandler @ 001ef450 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
    pvVar10 = operator_new(uVar9 << 3);
    pvVar11 = (void *)*param_1;
    *param_1 = (long)pvVar10;
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
    uVar13 = 0;
    param_1[1] = uVar9;
    do {
      *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
    } while (uVar9 != uVar13);
    plVar15 = (long *)param_1[2];
    if (plVar15 != (long *)0x0) {
      uVar13 = plVar15[1];
      uVar17 = uVar9 - 1;
      if ((uVar17 & uVar9) == 0) {
        uVar13 = uVar13 & uVar17;
      }
      else if (uVar9 <= uVar13) {
        uVar18 = 0;
        if (uVar9 != 0) {
          uVar18 = uVar13 / uVar9;
        }
        uVar13 = uVar13 - uVar18 * uVar9;
      }
      *(long **)(*param_1 + uVar13 * 8) = param_1 + 2;
      for (plVar16 = (long *)*plVar15; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar18 = plVar16[1];
        if ((uVar17 & uVar9) == 0) {
          uVar18 = uVar18 & uVar17;
          if (uVar18 != uVar13) goto LAB_001ef2d0;
LAB_001ef2bc:
          uVar18 = uVar13;
        }
        else {
          if (uVar9 <= uVar18) {
            uVar4 = 0;
            if (uVar9 != 0) {
              uVar4 = uVar18 / uVar9;
            }
            uVar18 = uVar18 - uVar4 * uVar9;
          }
          if (uVar18 == uVar13) goto LAB_001ef2bc;
LAB_001ef2d0:
          if (*(long *)(*param_1 + uVar18 * 8) == 0) {
            *(long **)(*param_1 + uVar18 * 8) = plVar15;
          }
          else {
            plVar14 = plVar16;
            if ((long *)*plVar16 != (long *)0x0) {
              bVar3 = *(byte *)(plVar16 + 2);
              __n = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                __n = plVar16[3];
              }
              plVar7 = (long *)*plVar16;
              do {
                plVar12 = plVar7;
                bVar2 = *(byte *)(plVar12 + 2);
                sVar1 = (ulong)(bVar2 >> 1);
                if ((bVar2 & 1) != 0) {
                  sVar1 = plVar12[3];
                }
                if (__n != sVar1) break;
                __s2 = (char *)plVar12[4];
                __s1 = (char *)((long)plVar16 + 0x11);
                if ((bVar3 & 1) != 0) {
                  __s1 = (char *)plVar16[4];
                }
                if ((bVar2 & 1) == 0) {
                  __s2 = (char *)((long)plVar12 + 0x11);
                }
                pcVar5 = (char *)((long)plVar16 + 0x11);
                sVar1 = -(ulong)(bVar3 >> 1);
                sVar6 = __n;
                if ((bVar3 & 1) == 0) {
                  while (sVar6 != 0) {
                    if (*pcVar5 != *__s2) goto LAB_001ef3b0;
                    __s2 = __s2 + 1;
                    sVar1 = sVar1 + 1;
                    pcVar5 = pcVar5 + 1;
                    sVar6 = sVar1;
                  }
                }
                else if ((__n != 0) && (iVar8 = memcmp(__s1,__s2,__n), iVar8 != 0)) break;
                plVar7 = (long *)*plVar12;
                plVar14 = plVar12;
              } while ((long *)*plVar12 != (long *)0x0);
            }
LAB_001ef3b0:
            *plVar15 = *plVar14;
            *plVar14 = **(long **)(*param_1 + uVar18 * 8);
            **(long **)(*param_1 + uVar18 * 8) = (long)plVar16;
            uVar18 = uVar13;
            plVar16 = plVar15;
          }
        }
        plVar15 = plVar16;
        uVar13 = uVar18;
      }
    }
  }
  return;
}


