// Recovered from libkentos.so by Ghidra 12.2
// address: 001fe5d8
// size: 180
// name: FUN_001fe5d8
// namespace: Global
// signature: undefined FUN_001fe5d8(void)
// generated: 2026-11-22 21:47:12


undefined8 * FUN_001fe5d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar1 = operator_new(0x18);
  puVar4 = puVar1 + 1;
  *puVar4 = 0;
  puVar1[2] = 0;
  *puVar1 = puVar4;
  plVar5 = (long *)*param_1;
  while (plVar5 != param_1 + 1) {
                    /* try { // try from 001fe620 to 001fe62f has its CatchHandler @ 001fe68c */
    FUN_001fe6ac(puVar1,puVar4,plVar5 + 4,plVar5 + 4);
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      if (*(long **)*plVar2 == plVar5) {
        plVar5 = (long *)*plVar2;
      }
      else {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return puVar1;
}


