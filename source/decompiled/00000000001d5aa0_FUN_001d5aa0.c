// Recovered from libkentos.so by Ghidra 12.2
// address: 001d5aa0
// size: 416
// name: FUN_001d5aa0
// namespace: Global
// signature: undefined FUN_001d5aa0(void)
// generated: 2026-11-22 21:43:04


undefined4 FUN_001d5aa0(uint param_1)

{
  if (param_1 == 0x2000) {
    return 0x1000;
  }
  if (param_1 < 0x2001) {
    if (param_1 == 0x40) {
      return 0x40;
    }
    if (param_1 < 0x41) {
      if (param_1 == 4) {
        return 4;
      }
      if (param_1 < 5) {
        if (param_1 - 1 < 2) {
          return 1;
        }
      }
      else {
        if (param_1 == 0x10) {
          return 0x10;
        }
        if (param_1 == 0x20) {
          return 0x20;
        }
        if (param_1 == 8) {
          return 4;
        }
      }
    }
    else {
      if (param_1 == 0x200) {
        return 0x200;
      }
      if (param_1 < 0x201) {
        if ((param_1 == 0x80) || (param_1 == 0x100)) {
          return 0x80;
        }
      }
      else {
        if (param_1 == 0x800) {
          return 0x800;
        }
        if (param_1 == 0x1000) {
          return 0x1000;
        }
        if (param_1 == 0x400) {
          return 0x400;
        }
      }
    }
  }
  else {
    if (param_1 == 0x100000) {
      return 0x100000;
    }
    if (param_1 < 0x100001) {
      if (param_1 == 0x10000) {
        return 0x10000;
      }
      if (param_1 < 0x10001) {
        if ((param_1 == 0x4000) || (param_1 == 0x8000)) {
          return 0x4000;
        }
      }
      else {
        if (param_1 == 0x40000) {
          return 0x40000;
        }
        if (param_1 == 0x80000) {
          return 0x80000;
        }
        if (param_1 == 0x20000) {
          return 0x10000;
        }
      }
    }
    else {
      if (param_1 == 0x1000000) {
        return 0x100000;
      }
      if (param_1 < 0x1000001) {
        if (param_1 == 0x400000) {
          return 0x400000;
        }
        if (param_1 == 0x800000) {
          return 0x80000;
        }
        if (param_1 == 0x200000) {
          return 0x200000;
        }
      }
      else {
        if ((param_1 == 0x4000000) || (param_1 == 0x8000000)) {
          return 0x4000000;
        }
        if (param_1 == 0x2000000) {
          return 0x2000000;
        }
      }
    }
  }
  return 0;
}


