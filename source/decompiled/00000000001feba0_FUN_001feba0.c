// Recovered from libkentos.so by Ghidra 12.2
// address: 001feba0
// size: 300
// name: FUN_001feba0
// namespace: Global
// signature: undefined FUN_001feba0(void)
// generated: 2026-11-22 21:47:12


long * FUN_001feba0(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    *param_2 = plVar6;
    return plVar6;
  }
  __s1 = *(byte **)(param_3 + 0x10);
  plVar6 = (long *)(param_1 + 8);
  uVar3 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) == 0) {
    __s1 = param_3 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_3 + 8);
  }
  do {
    bVar2 = *(byte *)(plVar7 + 4);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = plVar7[5];
    }
    __n = uVar1;
    if (uVar3 <= uVar1) {
      __n = uVar3;
    }
    if (__n == 0) {
LAB_001fec3c:
      if (uVar1 <= uVar3) {
        if (__n != 0) {
          __s2 = (void *)plVar7[6];
          if ((bVar2 & 1) == 0) {
            __s2 = (void *)((long)plVar7 + 0x21);
          }
          goto LAB_001fec64;
        }
LAB_001fec80:
        if (uVar1 < uVar3) goto LAB_001fec88;
LAB_001fec94:
        *param_2 = plVar7;
        return plVar6;
      }
LAB_001fec44:
      plVar5 = (long *)*plVar7;
      if (plVar5 == (long *)0x0) {
        *param_2 = plVar7;
        return plVar7;
      }
      plVar6 = plVar7;
    }
    else {
      __s2 = (void *)plVar7[6];
      if ((bVar2 & 1) == 0) {
        __s2 = (void *)((long)plVar7 + 0x21);
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) goto LAB_001fec3c;
      if (iVar4 < 0) goto LAB_001fec44;
LAB_001fec64:
      iVar4 = memcmp(__s2,__s1,__n);
      if (iVar4 == 0) goto LAB_001fec80;
      if (-1 < iVar4) goto LAB_001fec94;
LAB_001fec88:
      plVar6 = plVar7 + 1;
      plVar5 = (long *)*plVar6;
      if (plVar5 == (long *)0x0) goto LAB_001fec94;
    }
    plVar7 = plVar5;
  } while( true );
}


