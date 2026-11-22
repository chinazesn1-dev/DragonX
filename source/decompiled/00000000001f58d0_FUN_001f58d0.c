// Recovered from libkentos.so by Ghidra 12.2
// address: 001f58d0
// size: 100
// name: FUN_001f58d0
// namespace: Global
// signature: undefined FUN_001f58d0(void)
// generated: 2026-11-22 21:46:55


void FUN_001f58d0(ulong *param_1)

{
  if (*(byte *)((long)param_1 + 0x15) != 0) {
    *(byte *)(param_1 + 2) = (byte)param_1[2] ^ 0x5b;
    *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) ^ 0x5b;
    *(byte *)((long)param_1 + 0x12) = *(byte *)((long)param_1 + 0x12) ^ 0x5b;
    param_1[1] = param_1[1] ^ 0x5b5b5b5b5b5b5b5b;
    *param_1 = *param_1 ^ 0x5b5b5b5b5b5b5b5b;
    *(byte *)((long)param_1 + 0x13) = *(byte *)((long)param_1 + 0x13) ^ 0x5b;
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) ^ 0x5b;
    *(byte *)((long)param_1 + 0x15) = *(byte *)((long)param_1 + 0x15) ^ 0x5b;
  }
  return;
}


