// Recovered from libkentos.so by Ghidra 12.2
// address: 001d5d64
// size: 144
// name: FUN_001d5d64
// namespace: Global
// signature: undefined FUN_001d5d64(void)
// generated: 2026-11-22 21:43:05


bool FUN_001d5d64(long param_1,char param_2,char param_3,long param_4)

{
  char cVar1;
  
  if (((*(uint *)(param_4 + 0x78) & 3) != 0) && ((param_3 == '\0' || (param_2 == '\0')))) {
    cVar1 = FUN_00291c94(*(undefined8 *)(param_1 + 0x60),1);
    if ((cVar1 != '\0') &&
       ((*(long *)(param_1 + 0x438) != 1 && ((*(uint *)(param_1 + 0x430) & 0xfffffffb) == 1)))) {
      return (bool)cVar1;
    }
    cVar1 = FUN_00291c94(*(undefined8 *)(param_1 + 0x60),2);
    if (cVar1 != '\0') {
      return 2 < *(long *)(param_1 + 0x438);
    }
  }
  return false;
}


