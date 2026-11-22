// Recovered from libkentos.so by Ghidra 12.2
// address: 001f90f4
// size: 268
// name: FUN_001f90f4
// namespace: Global
// signature: undefined FUN_001f90f4(void)
// generated: 2026-11-22 21:47:03


undefined8 FUN_001f90f4(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  
  iVar1 = FUN_001f9a88();
  if (iVar1 == 0x2a) {
    do {
      while (iVar1 = FUN_001f9a88(param_1), iVar1 == 0x2a) {
        iVar1 = FUN_001f9a88(param_1);
        if (iVar1 == 0x2f) {
          return 1;
        }
        lVar2 = *(long *)(param_1 + 0x28);
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        plVar4 = (long *)(param_1 + 0x28);
        if ((lVar2 != 0) ||
           (lVar2 = *(long *)(param_1 + 0x30), plVar4 = (long *)(param_1 + 0x30), lVar2 != 0)) {
          *plVar4 = lVar2 + -1;
        }
        if (*(int *)(param_1 + 0x14) != -1) {
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
        }
      }
    } while (1 < iVar1 + 1U);
    pcVar3 = "invalid comment; missing closing \'*/\'";
  }
  else {
    if (iVar1 == 0x2f) {
      do {
        do {
          iVar1 = FUN_001f9a88(param_1);
        } while (0xe < iVar1 + 1U);
      } while ((0x4803U >> (ulong)(iVar1 + 1U & 0x1f) & 1) == 0);
      return 1;
    }
    pcVar3 = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
  }
  *(char **)(param_1 + 0x68) = pcVar3;
  return 0;
}


