// Recovered from libkentos.so by Ghidra 12.2
// address: 001f86dc
// size: 1140
// name: FUN_001f86dc
// namespace: Global
// signature: undefined FUN_001f86dc(void)
// generated: 2026-11-22 21:47:03


void FUN_001f86dc(long *param_1,ulong param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  code *pcVar6;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  char local_1d0;
  undefined8 local_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  long local_190;
  long lStack_188;
  long local_180;
  undefined **local_170;
  undefined4 local_168;
  underflow_error auStack_160 [16];
  undefined8 local_150;
  byte local_148 [16];
  void *local_138;
  long alStack_130 [4];
  long *local_110;
  char *local_100;
  void *local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8;
  char local_d7;
  char local_a8;
  char local_70;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)param_1[4];
  if (plVar3 == (long *)0x0) {
    local_d7 = (char)param_1[0x19];
    local_f8 = (void *)0x0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f0 = (void *)0x0;
    local_d8 = '\0';
                    /* try { // try from 001f8748 to 001f8763 has its CatchHandler @ 001f8c58 */
    local_100 = param_3;
    FUN_001fb958(param_1,&local_100);
    if ((param_2 & 1) != 0) {
      iVar2 = FUN_001f8e4c(param_1 + 7);
      *(int *)(param_1 + 6) = iVar2;
      if (iVar2 != 0xf) {
                    /* try { // try from 001f8770 to 001f877b has its CatchHandler @ 001f8bfc */
        FUN_001fae04(local_148,param_1 + 7);
        local_180 = param_1[0xd];
        lStack_188 = param_1[0xc];
        local_190 = param_1[0xb];
        uStack_1b8 = 0;
        local_1b0 = (void *)0x0;
        local_1c0 = 0x65756c61760a;
                    /* try { // try from 001f87b0 to 001f87c3 has its CatchHandler @ 001f8bb8 */
        FUN_001fb25c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 001f87c4 to 001f87d7 has its CatchHandler @ 001f8b98 */
        FUN_001faeec(&local_170,0x65,&local_190,local_1a8);
        local_d8 = '\x01';
        if (local_d7 != '\0') {
          puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
          *puVar4 = &PTR_LAB_007433d0;
          *(undefined4 *)(puVar4 + 1) = local_168;
          std::runtime_error::runtime_error
                    ((runtime_error *)(puVar4 + 2),(runtime_error *)auStack_160);
          *puVar4 = &PTR_LAB_00743468;
          puVar4[4] = local_150;
                    /* try { // try from 001f8b38 to 001f8b4f has its CatchHandler @ 001f8b50 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar4,&PTR_PTR_00743440,&LAB_001fdaa4);
        }
        local_170 = &PTR_LAB_007433d0;
        std::underflow_error::~underflow_error(auStack_160);
        std::bad_alloc::~bad_alloc((bad_alloc *)&local_170);
        if ((local_1a8[0] & 1) != 0) {
          operator_delete(local_198);
        }
        if ((local_1c0 & 1) != 0) {
          operator_delete(local_1b0);
        }
        if ((local_148[0] & 1) != 0) {
          operator_delete(local_138);
        }
      }
    }
    if (local_d8 != '\0') {
      *param_3 = '\t';
      local_1e8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      FUN_00204a08(&local_1e8);
    }
    if (local_f8 != (void *)0x0) {
      local_f0 = local_f8;
      operator_delete(local_f8);
    }
    goto LAB_001f8a14;
  }
  if (param_1 == plVar3) {
    local_110 = alStack_130;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_130);
  }
  else {
    local_110 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* try { // try from 001f888c to 001f889f has its CatchHandler @ 001f8c74 */
  FUN_001f9e08(&local_100,param_3,alStack_130,(char)param_1[0x19]);
  if (alStack_130 == local_110) {
    pcVar6 = *(code **)(*local_110 + 0x20);
LAB_001f88c4:
    (*pcVar6)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar6 = *(code **)(*local_110 + 0x28);
    goto LAB_001f88c4;
  }
                    /* try { // try from 001f88c8 to 001f88e3 has its CatchHandler @ 001f8cb4 */
  FUN_001f9fcc(param_1,&local_100);
  if ((param_2 & 1) != 0) {
    iVar2 = FUN_001f8e4c(param_1 + 7);
    *(int *)(param_1 + 6) = iVar2;
    if (iVar2 != 0xf) {
                    /* try { // try from 001f88f0 to 001f88fb has its CatchHandler @ 001f8c54 */
      FUN_001fae04(local_148,param_1 + 7);
      local_180 = param_1[0xd];
      lStack_188 = param_1[0xc];
      local_190 = param_1[0xb];
      uStack_1b8 = 0;
      local_1b0 = (void *)0x0;
      local_1c0 = 0x65756c61760a;
                    /* try { // try from 001f8930 to 001f8943 has its CatchHandler @ 001f8c20 */
      FUN_001fb25c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 001f8944 to 001f8957 has its CatchHandler @ 001f8c00 */
      FUN_001faeec(&local_170,0x65,&local_190,local_1a8);
      local_a8 = '\x01';
      if (local_70 != '\0') {
        puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
        *puVar4 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar4 + 1) = local_168;
        std::runtime_error::runtime_error
                  ((runtime_error *)(puVar4 + 2),(runtime_error *)auStack_160);
        *puVar4 = &PTR_LAB_00743468;
        puVar4[4] = local_150;
                    /* try { // try from 001f8ad4 to 001f8aeb has its CatchHandler @ 001f8b74 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&PTR_PTR_00743440,&LAB_001fdaa4);
      }
      local_170 = &PTR_LAB_007433d0;
      std::underflow_error::~underflow_error(auStack_160);
      std::bad_alloc::~bad_alloc((bad_alloc *)&local_170);
      if ((local_1a8[0] & 1) != 0) {
        operator_delete(local_198);
      }
      if ((local_1c0 & 1) != 0) {
        operator_delete(local_1b0);
      }
      if ((local_148[0] & 1) != 0) {
        operator_delete(local_138);
      }
    }
  }
  if (local_a8 == '\0') {
    if (*param_3 == '\t') {
      *param_3 = '\0';
      local_1d8 = *(undefined8 *)(param_3 + 8);
      puVar4 = &local_1d8;
      cVar5 = '\t';
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      local_1e0 = 9;
      goto LAB_001f8a08;
    }
  }
  else {
    local_1d0 = *param_3;
    *param_3 = '\t';
    local_1c8 = *(undefined8 *)(param_3 + 8);
    puVar4 = &local_1c8;
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    cVar5 = local_1d0;
LAB_001f8a08:
    FUN_00204a08(puVar4,cVar5);
  }
  FUN_001fb8d4(&local_100);
LAB_001f8a14:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


