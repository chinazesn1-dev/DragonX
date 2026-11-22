// Recovered from libkentos.so by Ghidra 12.2
// address: 001d8efc
// size: 312
// name: FUN_001d8efc
// namespace: Global
// signature: undefined FUN_001d8efc(void)
// generated: 2026-11-22 21:43:16


void FUN_001d8efc(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong __n;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  
  uVar1 = param_1[2];
  pvVar5 = (void *)*param_1;
  __n = (long)param_3 - (long)param_2;
  if (uVar1 - (long)pvVar5 < __n) {
    if (pvVar5 != (void *)0x0) {
      param_1[1] = pvVar5;
      operator_delete(pvVar5);
      uVar1 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1);
    }
    if (uVar1 < 0x3fffffffffffffff) {
      uVar6 = __n;
      if (__n <= uVar1 << 1) {
        uVar6 = uVar1 << 1;
      }
    }
    else {
      uVar6 = 0x7fffffffffffffff;
    }
    pvVar5 = operator_new(uVar6);
    param_1[1] = pvVar5;
    *param_1 = pvVar5;
    param_1[2] = (long)pvVar5 + uVar6;
    memcpy(pvVar5,param_2,__n);
    lVar2 = (long)pvVar5 + __n;
  }
  else {
    plVar3 = param_1 + 1;
    uVar1 = *plVar3 - (long)pvVar5;
    __src = (void *)((long)param_2 + uVar1);
    if (__n <= uVar1) {
      __src = param_3;
    }
    sVar4 = (long)__src - (long)param_2;
    if (sVar4 != 0) {
      memmove(pvVar5,param_2,sVar4);
    }
    if (uVar1 < __n) {
      sVar4 = (long)param_3 - (long)__src;
      if ((long)sVar4 < 1) {
        return;
      }
      memcpy((void *)*plVar3,__src,sVar4);
      lVar2 = *plVar3 + sVar4;
    }
    else {
      lVar2 = (long)pvVar5 + sVar4;
    }
  }
  param_1[1] = lVar2;
  return;
}


