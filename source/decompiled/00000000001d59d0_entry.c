// Recovered from libkentos.so by Ghidra 12.2
// address: 001d59d0
// size: 208
// name: entry
// namespace: Global
// signature: undefined entry(void)
// generated: 2026-11-22 21:43:04


int entry(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x8b40) = 0;
  lVar4 = *(long *)(param_1 + 0x438);
  if ((((*(int *)(param_1 + 0x8b3c) != 10) && (iVar1 = *(int *)(param_2 + 0x1c4), iVar1 != 10)) &&
      ((lVar4 != 1 || (10 < iVar1)))) &&
     (((1 < lVar4 || (iVar3 = 0, lVar4 == 0)) && (iVar3 = 0, iVar1 != 0x14)))) {
    lVar4 = FUN_0029be40(param_2,"Expect:");
    if (lVar4 == 0) {
      iVar3 = FUN_0029cb9c(param_3,"Expect: 100-continue\r\n");
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x8b40) = 1;
      }
    }
    else {
      uVar2 = FUN_0029cc98(lVar4,"Expect:","100-continue");
      *(undefined1 *)(param_1 + 0x8b40) = uVar2;
    }
  }
  return iVar3;
}


