// Recovered from libkentos.so by Ghidra 12.2
// address: 001f462c
// size: 480
// name: FUN_001f462c
// namespace: Global
// signature: undefined FUN_001f462c(void)
// generated: 2026-11-22 21:46:55


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f462c(void *param_1)

{
  undefined *__s;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  FILE *__stream;
  size_t sVar6;
  ulong uVar7;
  char acStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_0082f878 & 1) == 0) &&
     (param_1 = (void *)__cxa_guard_acquire(&DAT_0082f878), (int)param_1 != 0)) {
    _DAT_0082f860 = 0;
    DAT_0082f868 = 0;
    DAT_0082f870 = (undefined *)0x0;
    __cxa_atexit(&LAB_001d9720,&DAT_0082f860,&PTR_LOOP_00759000);
    param_1 = (void *)__cxa_guard_release(&DAT_0082f878);
  }
  uVar2 = _DAT_0082f860 >> 1 & 0x7f;
  if ((_DAT_0082f860 & 1) != 0) {
    uVar2 = DAT_0082f868;
  }
  if (uVar2 == 0) {
    __stream = fopen("/proc/self/cmdline","r");
    param_1 = (void *)0x0;
    if (__stream != (FILE *)0x0) {
      memset(acStack_158,0,0x100);
      sVar6 = fread(acStack_158,1,0xff,__stream);
      uVar5 = fclose(__stream);
      param_1 = (void *)(ulong)uVar5;
      if (sVar6 != 0) {
        sVar6 = strlen(acStack_158);
        param_1 = (void *)FUN_001d9094(&DAT_0082f860,acStack_158,sVar6);
      }
      puVar4 = DAT_0082f870;
      uVar3 = _DAT_0082f860;
      uVar2 = _DAT_0082f860 >> 1 & 0x7f;
      if ((_DAT_0082f860 & 1) == 0) {
        __s = &DAT_0082f861;
      }
      else {
        __s = DAT_0082f870;
        uVar2 = DAT_0082f868;
      }
      if (((uVar2 != 0) && (param_1 = memchr(__s,0x3a,uVar2), param_1 != (void *)0x0)) &&
         (uVar7 = (long)param_1 - (long)__s, uVar7 != 0xffffffffffffffff)) {
        if (uVar7 < uVar2 || uVar7 - uVar2 == 0) {
          if ((uVar3 & 1) == 0) {
            (&DAT_0082f861)[uVar7] = 0;
            _DAT_0082f860 = CONCAT71(_DAT_0082f861,(char)((int)uVar7 << 1));
          }
          else {
            puVar4[uVar7] = 0;
            DAT_0082f868 = uVar7;
          }
        }
        else {
          param_1 = (void *)FUN_001efaf8(&DAT_0082f860,uVar7 - uVar2,0);
        }
      }
    }
    uVar2 = _DAT_0082f860 >> 1 & 0x7f;
    if ((_DAT_0082f860 & 1) != 0) {
      uVar2 = DAT_0082f868;
    }
    if (uVar2 == 0) {
      param_1 = (void *)FUN_001d9094(&DAT_0082f860,"com.pubg.imobile",0x10);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


