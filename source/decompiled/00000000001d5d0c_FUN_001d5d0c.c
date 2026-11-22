// Recovered from libkentos.so by Ghidra 12.2
// address: 001d5d0c
// size: 88
// name: FUN_001d5d0c
// namespace: Global
// signature: undefined FUN_001d5d0c(void)
// generated: 2026-11-22 21:43:05


void FUN_001d5d0c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  *param_2 = pcVar3;
  sVar2 = strlen(pcVar3);
  if ((sVar2 != 0) && (pcVar3[sVar2 - 1] == '.')) {
    pcVar3[sVar2 - 1] = '\0';
  }
  pcVar3 = (char *)*param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') {
      return;
    }
  } while (-1 < cVar1);
  return;
}


