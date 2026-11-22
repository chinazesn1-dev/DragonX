// Recovered from libkentos.so by Ghidra 12.2
// address: 001d84c8
// size: 96
// name: _INIT_0
// namespace: Global
// signature: undefined _INIT_0(void)
// generated: 2026-11-22 21:43:14


void _INIT_0(void)

{
  long lVar1;
  int iVar2;
  pthread_t local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pthread_create(&local_30,(pthread_attr_t *)0x0,(__start_routine *)&LAB_001d8294,(void *)0x0);
  iVar2 = pthread_detach(local_30);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


