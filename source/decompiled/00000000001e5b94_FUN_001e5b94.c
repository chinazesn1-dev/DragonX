// Recovered from libkentos.so by Ghidra 12.2
// address: 001e5b94
// size: 536
// name: FUN_001e5b94
// namespace: Global
// signature: undefined FUN_001e5b94(void)
// generated: 2026-11-22 21:46:10


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e5b94(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  __shared_weak_count *p_Var4;
  void *__s;
  long lVar5;
  __shared_weak_count *p_Var6;
  __shared_weak_count *local_2f0;
  __shared_weak_count *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  lconv *local_2a0;
  char local_298;
  char local_297;
  undefined1 auStack_296 [512];
  undefined1 local_96;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* try { // try from 001e5be0 to 001e5be7 has its CatchHandler @ 001e5de4 */
  p_Var4 = operator_new(0x28);
  *(undefined8 *)(p_Var4 + 0x10) = 0;
  p_Var6 = p_Var4 + 8;
  *(long *)p_Var6 = 0;
  *(undefined ***)p_Var4 = &PTR_LAB_00743490;
  local_2f0 = p_Var4 + 0x18;
  *(undefined ***)local_2f0 = &PTR_LAB_007434c8;
  *(undefined8 **)(p_Var4 + 0x20) = param_1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
    if (bVar2) {
      *(long *)p_Var6 = *(long *)p_Var6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2e8 = p_Var4;
                    /* try { // try from 001e5c44 to 001e5c47 has its CatchHandler @ 001e5df4 */
  local_2a0 = localeconv();
  local_298 = '\0';
  if (local_2a0->thousands_sep != (char *)0x0) {
    local_298 = *local_2a0->thousands_sep;
  }
  local_297 = '\0';
  if (local_2a0->decimal_point != (char *)0x0) {
    local_297 = *local_2a0->decimal_point;
  }
  memset(auStack_296,0,0x200);
  local_96 = (undefined1)param_4;
  local_80 = (void *)0x0;
  uStack_88 = 0;
  local_90 = 0;
                    /* try { // try from 001e5c90 to 001e5c97 has its CatchHandler @ 001e5df4 */
  __s = operator_new(0x210);
  uStack_88 = _UNK_00479a78;
  local_90 = _DAT_00479a70;
  local_80 = __s;
  memset(__s,param_4,0x200);
  *(undefined1 *)((long)__s + 0x200) = 0;
  do {
    lVar5 = *(long *)p_Var6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
    if (bVar2) {
      *(long *)p_Var6 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_78 = param_6;
  if (lVar5 == 0) {
    (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
  }
  if (param_3 < 0) {
                    /* try { // try from 001e5d88 to 001e5da3 has its CatchHandler @ 001e5dac */
    FUN_0020a444(&local_2f0,param_2,0,param_5 & 1,0,0);
  }
  else {
                    /* try { // try from 001e5cd8 to 001e5cf3 has its CatchHandler @ 001e5dac */
    FUN_0020a444(&local_2f0,param_2,1,param_5 & 1,param_3,0);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  p_Var4 = local_2e8;
  if (local_2e8 != (__shared_weak_count *)0x0) {
    p_Var6 = local_2e8 + 8;
    do {
      lVar5 = *(long *)p_Var6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
      if (bVar2) {
        *(long *)p_Var6 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)local_2e8 + 0x10))(local_2e8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


