// Recovered from libkentos.so by Ghidra 12.2
// address: 001f2c00
// size: 660
// name: FUN_001f2c00
// namespace: Global
// signature: undefined FUN_001f2c00(void)
// generated: 2026-11-22 21:46:52


void FUN_001f2c00(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  logic_error *this;
  void *pvVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 - 1 & param_2) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar11 = param_1[1];
  if (param_2 <= uVar11) {
    if (param_2 < uVar11) {
      uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar11 < 3 || (uVar11 - 1 & uVar11) != 0) {
        uVar2 = std::__ndk1::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << (0x40U - LZCOUNT(uVar2 - 1) & 0x3f);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < uVar11) goto LAB_001f2c50;
    }
    return;
  }
  uVar2 = param_2;
LAB_001f2c50:
  if (uVar2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    param_1[1] = 0;
  }
  else {
    if (uVar2 >> 0x3d != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001f2e60 to 001f2e6b has its CatchHandler @ 001f2e94 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
    pvVar3 = operator_new(uVar2 << 3);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar11 = 0;
    param_1[1] = uVar2;
    do {
      *(undefined8 *)(*param_1 + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar11 = plVar5[1];
      uVar6 = uVar2 - 1;
      if ((uVar6 & uVar2) == 0) {
        uVar11 = uVar11 & uVar6;
      }
      else if (uVar2 <= uVar11) {
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar11 / uVar2;
        }
        uVar11 = uVar11 - uVar8 * uVar2;
      }
      *(long **)(*param_1 + uVar11 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar5; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        while( true ) {
          uVar8 = plVar7[1];
          if ((uVar6 & uVar2) == 0) {
            uVar8 = uVar8 & uVar6;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 == uVar11) break;
          plVar10 = plVar7;
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar5;
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
            uVar11 = uVar8;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar5 = plVar7;
      }
    }
  }
  return;
}


