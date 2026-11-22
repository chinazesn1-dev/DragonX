// Recovered from libkentos.so by Ghidra 12.2
// address: 001f0fd0
// size: 468
// name: FUN_001f0fd0
// namespace: Global
// signature: undefined FUN_001f0fd0(void)
// generated: 2026-11-22 21:46:52


void FUN_001f0fd0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  int *piVar9;
  char acStack_68 [32];
  long local_48;
  
  puVar3 = PTR_DAT_00758cd0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((((param_1 != 0) && (PTR_DAT_00758cd0[7] != '\0')) &&
       (*(long *)(PTR_DAT_00758cd0 + 0x28) != 0)) &&
      ((lVar8 = *(long *)(param_1 + 0xec0), lVar8 != 0 &&
       (uVar6 = FUN_002204a0(lVar8), (uVar6 & 1) != 0)))) &&
     ((*(long *)(lVar8 + 0x1528) != 0 && (uVar6 = FUN_002204a0(), (uVar6 & 1) != 0)))) {
                    /* try { // try from 001f1038 to 001f1047 has its CatchHandler @ 001f11a0 */
    uVar6 = FUN_00267698(*(undefined8 *)(lVar8 + 0x1528));
    iVar4 = FUN_00267790(*(undefined8 *)(lVar8 + 0x1528));
    iVar5 = FUN_001f2740(uVar6 & 0xffffffff);
    if (iVar5 == 0) {
      snprintf(acStack_68,0x20,"%u",uVar6 & 0xffffffff);
      piVar9 = *(int **)(puVar3 + 0x28);
      iVar5 = piVar9[3];
      if (((((((iVar5 == 0) || (pcVar7 = strstr(acStack_68,"1903"), pcVar7 == (char *)0x0)) &&
             ((iVar5 = piVar9[1], iVar5 == 0 ||
              (pcVar7 = strstr(acStack_68,"1961"), pcVar7 == (char *)0x0)))) &&
            ((iVar5 = piVar9[2], iVar5 == 0 ||
             ((pcVar7 = strstr(acStack_68,"1908"), pcVar7 == (char *)0x0 &&
              (pcVar7 = strstr(acStack_68,"1910"), pcVar7 == (char *)0x0)))))) &&
           ((iVar5 = *piVar9, iVar5 == 0 ||
            (pcVar7 = strstr(acStack_68,"1901"), pcVar7 == (char *)0x0)))) &&
          ((iVar5 = piVar9[4], iVar5 == 0 ||
           ((pcVar7 = strstr(acStack_68,"1914"), pcVar7 == (char *)0x0 &&
            (pcVar7 = strstr(acStack_68,"1915"), pcVar7 == (char *)0x0)))))) &&
         (iVar1 = piVar9[5], iVar5 = iVar1, iVar1 != 0)) {
        pcVar7 = strstr(acStack_68,"1907");
        iVar5 = 0;
        if (pcVar7 != (char *)0x0) {
          iVar5 = iVar1;
        }
      }
    }
    if ((iVar5 != 0) && (iVar4 != iVar5)) {
                    /* try { // try from 001f106c to 001f1077 has its CatchHandler @ 001f119c */
      FUN_00267888(*(undefined8 *)(lVar8 + 0x1528),iVar5,1);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


