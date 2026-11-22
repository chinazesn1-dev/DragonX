// Recovered from libkentos.so by Ghidra 12.2
// address: 001db5e4
// size: 272
// name: FUN_001db5e4
// namespace: Global
// signature: undefined FUN_001db5e4(void)
// generated: 2026-11-22 21:43:45


void FUN_001db5e4(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *__ptr;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __ptr = (void *)FUN_00236f44(param_2,param_3,param_1 + 2,(long)param_1 + 0x14,0,0);
  if (__ptr == (void *)0x0) {
    perror(&DAT_004826f5);
  }
  glGenTextures(1,&local_3c);
  glBindTexture(0xde1,local_3c);
  glTexParameteri(0xde1,0x2801,0x2601);
  glTexParameteri(0xde1,0x2800,0x2601);
  glTexParameteri(0xde1,0x2802,0x812f);
  glTexParameteri(0xde1,0x2803,0x812f);
  glPixelStorei(0xcf2,0);
  glTexImage2D(0xde1,0,0x1908,(int)param_1[2],*(undefined4 *)((long)param_1 + 0x14),0,0x1908,0x1401,
               __ptr);
  free(__ptr);
  *param_1 = (ulong)local_3c;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


