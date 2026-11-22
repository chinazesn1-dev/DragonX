// Recovered from libkentos.so by Ghidra 12.2
// address: 001db470
// size: 232
// name: FUN_001db470
// namespace: Global
// signature: undefined FUN_001db470(void)
// generated: 2026-11-22 21:43:45


void FUN_001db470(ulong *param_1)

{
  int iVar1;
  long lVar2;
  tm *ptVar3;
  size_t __n;
  void *__dest;
  char *__s;
  ulong uVar4;
  time_t local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = time((time_t *)0x0);
  ptVar3 = localtime(&local_50);
  iVar1 = ptVar3->tm_wday;
  *param_1 = 0;
  param_1[1] = 0;
  __s = (&PTR_s_Sunday__00742248)[iVar1];
  param_1[2] = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_001db520;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_001db520:
  *(undefined1 *)((long)__dest + __n) = 0;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


