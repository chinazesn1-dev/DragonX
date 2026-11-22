// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4964
// size: 144
// name: FUN_001f4964
// namespace: Global
// signature: undefined FUN_001f4964(void)
// generated: 2026-11-22 21:46:55


void FUN_001f4964(long *param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = (FILE *)param_1[0xf];
  *param_1 = (long)(PTR_vtable_00758af8 + 0x10);
  if (__stream != (FILE *)0x0) {
                    /* try { // try from 001f4990 to 001f4997 has its CatchHandler @ 001f49f4 */
    FUN_001f4d98(param_1);
    iVar1 = fclose(__stream);
    if (iVar1 == 0) {
      param_1[0xf] = 0;
    }
  }
  if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
    operator_delete__((void *)param_1[8]);
  }
  if ((*(char *)((long)param_1 + 0xa1) != '\0') && ((void *)param_1[0xd] != (void *)0x0)) {
    operator_delete__((void *)param_1[0xd]);
  }
  *param_1 = (long)(PTR_vtable_00758f88 + 0x10);
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  return;
}


