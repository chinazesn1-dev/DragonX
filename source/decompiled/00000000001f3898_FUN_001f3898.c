// Recovered from libkentos.so by Ghidra 12.2
// address: 001f3898
// size: 420
// name: FUN_001f3898
// namespace: Global
// signature: undefined FUN_001f3898(void)
// generated: 2026-11-22 21:46:54


void FUN_001f3898(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int param3;
  int iVar3;
  int iVar4;
  long lVar5;
  char acStack_88 [32];
  char acStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((param_1 == 0) || (0xc34 < param_2 - 1900000U >> 5)) ||
      (lVar5 = *(long *)(param_1 + 0xec0), lVar5 == 0)) || (*(long *)(lVar5 + 0x1528) == 0))
  goto LAB_001f3a10;
                    /* try { // try from 001f38ec to 001f38f3 has its CatchHandler @ 001f3a3c */
  param3 = FUN_0026704c(lVar5);
                    /* try { // try from 001f38fc to 001f3a0f has its CatchHandler @ 001f3a40 */
  iVar3 = FUN_00267698(*(undefined8 *)(lVar5 + 0x1528));
  iVar4 = param3;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  if (iVar4 < 1) {
LAB_001f396c:
    if ((param3 < 1) || (param3 == param_2)) goto LAB_001f3a10;
    snprintf(acStack_68,0x20,"%d",param3);
    snprintf(acStack_88,0x20,"%d",param_2);
    iVar4 = strncmp(acStack_68,acStack_88,4);
    if (iVar4 == 0) {
      bVar2 = false;
    }
    else {
      iVar4 = strncmp(acStack_68,acStack_88,5);
      bVar2 = iVar4 != 0;
    }
    if ((param3 == param_2) || (bVar2)) goto LAB_001f3a10;
  }
  else {
    if (iVar4 != param_2) {
      snprintf(acStack_68,0x20,"%d",iVar4);
      snprintf(acStack_88,0x20,"%d",param_2);
      iVar4 = strncmp(acStack_68,acStack_88,4);
      if ((iVar4 != 0) && (iVar4 = strncmp(acStack_68,acStack_88,5), iVar4 != 0)) goto LAB_001f396c;
    }
    if (param3 == param_2) goto LAB_001f3a10;
  }
  FUN_00267888(*(undefined8 *)(lVar5 + 0x1528),param_2,1);
LAB_001f3a10:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


