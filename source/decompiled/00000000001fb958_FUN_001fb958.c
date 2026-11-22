// Recovered from libkentos.so by Ghidra 12.2
// address: 001fb958
// size: 3288
// name: FUN_001fb958
// namespace: Global
// signature: undefined FUN_001fb958(void)
// generated: 2026-11-22 21:47:10


undefined8 FUN_001fb958(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  double dVar11;
  byte local_128;
  undefined4 uStack_127;
  undefined2 uStack_123;
  char cStack_121;
  char cStack_120;
  undefined2 uStack_11f;
  char cStack_11d;
  undefined4 uStack_11c;
  char cStack_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  runtime_error arStack_c8 [16];
  undefined8 local_b8;
  byte local_b0 [16];
  void *local_a0;
  void *local_98;
  ulong local_90;
  long local_88;
  long local_80;
  
  dVar4 = DAT_00479ed8;
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x88;
  lVar2 = param_1 + 0x38;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = 0;
LAB_001fb9d8:
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
    FUN_002018fc(param_2,&local_d8);
    break;
  case 2:
    local_d8 = (undefined **)((ulong)local_d8._1_7_ << 8);
    FUN_002018fc(param_2,&local_d8);
    break;
  case 3:
    local_d8 = (undefined **)0x0;
    FUN_00201bc0(param_2,&local_d8);
    break;
  case 4:
    FUN_00202120(param_2,lVar1);
    break;
  case 5:
    local_d8 = *(undefined ***)(param_1 + 0xb0);
    FUN_00202444(param_2,&local_d8);
    break;
  case 6:
    local_d8 = *(undefined ***)(param_1 + 0xa8);
                    /* try { // try from 001fbac0 to 001fbacb has its CatchHandler @ 001fc7b8 */
    FUN_00201e5c(param_2,&local_d8);
    break;
  case 7:
    dVar11 = ABS((double)*(undefined ***)(param_1 + 0xb8));
    if ((dVar4 <= dVar11) && (dVar11 == dVar4)) {
                    /* try { // try from 001fc2a8 to 001fc2b3 has its CatchHandler @ 001fc6ec */
      FUN_001fae04(local_b0,lVar2);
                    /* try { // try from 001fc2b4 to 001fc2bf has its CatchHandler @ 001fc6dc */
      FUN_001fae04(&local_128,lVar2);
                    /* try { // try from 001fc2c0 to 001fc2d7 has its CatchHandler @ 001fc6d8 */
      puVar9 = (ulong *)FUN_0020480c(&local_128,0,"number overflow parsing \'",0x19);
      local_100 = (void *)puVar9[2];
      uStack_108 = puVar9[1];
      local_110 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
                    /* try { // try from 001fc2f0 to 001fc303 has its CatchHandler @ 001fc6d4 */
      puVar9 = (ulong *)FUN_001effa8(&local_110,"\'",1);
      local_e0 = (void *)puVar9[2];
      uStack_e8 = puVar9[1];
      local_f0 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
                    /* try { // try from 001fc31c to 001fc32b has its CatchHandler @ 001fc6b4 */
      FUN_001fd90c(&local_d8,0x196,&local_f0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x20);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_d0;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
        *puVar8 = &PTR_LAB_00743420;
                    /* try { // try from 001fc618 to 001fc62f has its CatchHandler @ 001fc630 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743300,&LAB_001fdaa4);
      }
      local_d8 = &PTR_LAB_007433d0;
      std::underflow_error::~underflow_error((underflow_error *)arStack_c8);
      std::bad_alloc::~bad_alloc((bad_alloc *)&local_d8);
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      goto joined_r0x001fc374;
    }
                    /* try { // try from 001fbaa8 to 001fbab3 has its CatchHandler @ 001fc7b0 */
    local_d8 = *(undefined ***)(param_1 + 0xb8);
    FUN_00201638(param_2,&local_d8);
    break;
  case 8:
    local_b0[0] = 2;
    local_d8 = (undefined **)FUN_00201114(param_2,local_b0);
    if (*(double **)(param_2 + 0x10) < *(double **)(param_2 + 0x18)) {
      **(double **)(param_2 + 0x10) = (double)local_d8;
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 8;
    }
    else {
      FUN_0020133c(param_2 + 8,&local_d8);
    }
    iVar5 = FUN_001f8e4c(lVar2);
    *(int *)(param_1 + 0x30) = iVar5;
    if (iVar5 != 10) {
      if (local_90 == local_88 * 0x40) {
        if ((long)(local_90 + 1) < 0) {
                    /* try { // try from 001fc564 to 001fc56b has its CatchHandler @ 001fc694 */
                    /* WARNING: Subroutine does not return */
          FUN_001d9034(&local_98);
        }
        if (local_90 < 0x3fffffffffffffff) {
          uVar7 = local_90 + 0x40 & 0xffffffffffffffc0;
          if (uVar7 <= (ulong)(local_88 << 7)) {
            uVar7 = local_88 << 7;
          }
        }
        else {
          uVar7 = 0x7fffffffffffffff;
        }
                    /* try { // try from 001fbcc0 to 001fbcc7 has its CatchHandler @ 001fc7ac */
        FUN_001fc7d0(&local_98,uVar7);
      }
      uVar7 = local_90 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)local_98 + uVar7) =
           *(ulong *)((long)local_98 + uVar7) | 1L << (local_90 & 0x3f);
      local_90 = local_90 + 1;
      goto LAB_001fb9d8;
    }
LAB_001fbc70:
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
    break;
  case 9:
    local_b0[0] = 1;
    local_d8 = (undefined **)FUN_00201114(param_2,local_b0);
    if (*(double **)(param_2 + 0x10) < *(double **)(param_2 + 0x18)) {
      **(double **)(param_2 + 0x10) = (double)local_d8;
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 8;
    }
    else {
      FUN_0020133c(param_2 + 8,&local_d8);
    }
    iVar5 = FUN_001f8e4c(lVar2);
    *(int *)(param_1 + 0x30) = iVar5;
    if (iVar5 == 0xb) goto LAB_001fbc70;
    if (iVar5 == 4) {
      uVar7 = FUN_00201038(param_2,lVar1);
      if ((uVar7 & 1) == 0) goto LAB_001fbf20;
      iVar5 = FUN_001f8e4c(lVar2);
      *(int *)(param_1 + 0x30) = iVar5;
      if (iVar5 == 0xc) goto code_r0x001fbc1c;
                    /* try { // try from 001fc480 to 001fc48b has its CatchHandler @ 001fc6a4 */
      FUN_001fae04(local_b0,lVar2);
      local_e0 = *(void **)(param_1 + 0x68);
      uStack_e8 = *(ulong *)(param_1 + 0x60);
      local_f0 = *(ulong *)(param_1 + 0x58);
      uStack_116 = 0;
      local_128 = 0x20;
      uStack_11f = s_object_separator_00485a14._8_2_;
      cStack_11d = s_object_separator_00485a14[10];
      uStack_11c = s_object_separator_00485a14._11_4_;
      cStack_118 = s_object_separator_00485a14[0xf];
      uStack_127 = s_object_separator_00485a14._0_4_;
      uStack_123 = s_object_separator_00485a14._4_2_;
      cStack_121 = s_object_separator_00485a14[6];
      cStack_120 = s_object_separator_00485a14[7];
      uStack_117 = 0;
                    /* try { // try from 001fc4c0 to 001fc4d3 has its CatchHandler @ 001fc6a0 */
      FUN_001fb25c(&local_110,param_1,0xc,&local_128);
                    /* try { // try from 001fc4d4 to 001fc4e7 has its CatchHandler @ 001fc69c */
      FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_d0;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
        *puVar8 = &PTR_LAB_00743468;
        puVar8[4] = local_b8;
                    /* try { // try from 001fc544 to 001fc55b has its CatchHandler @ 001fc654 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
      }
    }
    else {
                    /* try { // try from 001fc39c to 001fc3a7 has its CatchHandler @ 001fc6b0 */
      FUN_001fae04(local_b0,lVar2);
      local_e0 = *(void **)(param_1 + 0x68);
      uStack_e8 = *(ulong *)(param_1 + 0x60);
      local_f0 = *(ulong *)(param_1 + 0x58);
      uStack_11c = 0;
      cStack_118 = '\0';
      uStack_117 = 0;
      uStack_116 = 0;
      local_128 = 0x14;
      uStack_11f = 0x7965;
      uStack_127 = s_object_key_00485a09._0_4_;
      uStack_123 = s_object_key_00485a09._4_2_;
      cStack_121 = s_object_key_00485a09[6];
      cStack_120 = s_object_key_00485a09[7];
      cStack_11d = '\0';
                    /* try { // try from 001fc3e4 to 001fc3f7 has its CatchHandler @ 001fc6ac */
      FUN_001fb25c(&local_110,param_1,4,&local_128);
                    /* try { // try from 001fc3f8 to 001fc40b has its CatchHandler @ 001fc6a8 */
      FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_d0;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
        *puVar8 = &PTR_LAB_00743468;
        puVar8[4] = local_b8;
                    /* try { // try from 001fc468 to 001fc47f has its CatchHandler @ 001fc658 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
      }
    }
    goto LAB_001fbedc;
  default:
                    /* try { // try from 001fbd88 to 001fbd93 has its CatchHandler @ 001fc7a4 */
    FUN_001fae04(local_b0,lVar2);
    local_e0 = *(void **)(param_1 + 0x68);
    uStack_e8 = *(ulong *)(param_1 + 0x60);
    local_f0 = *(ulong *)(param_1 + 0x58);
    cStack_121 = '\0';
    cStack_120 = '\0';
    uStack_11f = 0;
    cStack_11d = '\0';
    uStack_11c = 0;
    cStack_118 = '\0';
    uStack_117 = 0;
    uStack_116 = 0;
    local_128 = 10;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
                    /* try { // try from 001fbdc8 to 001fbddb has its CatchHandler @ 001fc770 */
    FUN_001fb25c(&local_110,param_1,0x10,&local_128);
                    /* try { // try from 001fbddc to 001fbdef has its CatchHandler @ 001fc740 */
    FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
    *(undefined1 *)(param_2 + 0x28) = 1;
    if (*(char *)(param_2 + 0x29) != '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
      *puVar8 = &PTR_LAB_007433d0;
      *(undefined4 *)(puVar8 + 1) = local_d0;
      std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
      *puVar8 = &PTR_LAB_00743468;
      puVar8[4] = local_b8;
                    /* try { // try from 001fbe4c to 001fbe63 has its CatchHandler @ 001fc670 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
    }
LAB_001fbedc:
    local_d8 = &PTR_LAB_007433d0;
    std::underflow_error::~underflow_error((underflow_error *)arStack_c8);
    std::bad_alloc::~bad_alloc((bad_alloc *)&local_d8);
joined_r0x001fc374:
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_128 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_116,CONCAT11(uStack_117,cStack_118)));
    }
    if ((local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
LAB_001fbf20:
    uVar10 = 0;
joined_r0x001fbf28:
    if (local_98 != (void *)0x0) {
      operator_delete(local_98);
    }
    if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  case 0xe:
                    /* try { // try from 001fbe64 to 001fbe6f has its CatchHandler @ 001fc7a0 */
    FUN_001fae04(local_b0,lVar2);
    local_e0 = *(void **)(param_1 + 0x68);
    uStack_e8 = *(ulong *)(param_1 + 0x60);
    local_f0 = *(ulong *)(param_1 + 0x58);
    cStack_121 = '\0';
    cStack_120 = '\0';
    uStack_11f = 0;
    cStack_11d = '\0';
    uStack_11c = 0;
    cStack_118 = '\0';
    uStack_117 = 0;
    uStack_116 = 0;
    local_128 = 10;
    uStack_127 = 0x756c6176;
    uStack_123 = 0x65;
                    /* try { // try from 001fbea4 to 001fbeb7 has its CatchHandler @ 001fc76c */
    FUN_001fb25c(&local_110,param_1,0,&local_128);
                    /* try { // try from 001fbeb8 to 001fbecb has its CatchHandler @ 001fc720 */
    FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
    *(undefined1 *)(param_2 + 0x28) = 1;
    if (*(char *)(param_2 + 0x29) != '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
      *puVar8 = &PTR_LAB_007433d0;
      *(undefined4 *)(puVar8 + 1) = local_d0;
      std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
      *puVar8 = &PTR_LAB_00743468;
      puVar8[4] = local_b8;
                    /* try { // try from 001fc5bc to 001fc5d3 has its CatchHandler @ 001fc66c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
    }
    goto LAB_001fbedc;
  }
  if (local_90 != 0) {
    do {
      if ((*(ulong *)((long)local_98 + (local_90 - 1 >> 3 & 0x1ffffffffffffff8)) &
          1L << (local_90 - 1 & 0x3f)) == 0) {
        iVar5 = FUN_001f8e4c(lVar2);
        *(int *)(param_1 + 0x30) = iVar5;
        if (iVar5 == 0xd) {
                    /* try { // try from 001fbb54 to 001fbc63 has its CatchHandler @ 001fc7b8 */
          iVar5 = FUN_001f8e4c(lVar2);
          *(int *)(param_1 + 0x30) = iVar5;
          if (iVar5 != 4) {
                    /* try { // try from 001fc0e8 to 001fc0f3 has its CatchHandler @ 001fc704 */
            FUN_001fae04(local_b0,lVar2);
            local_e0 = *(void **)(param_1 + 0x68);
            uStack_e8 = *(ulong *)(param_1 + 0x60);
            local_f0 = *(ulong *)(param_1 + 0x58);
            uStack_11c = 0;
            cStack_118 = '\0';
            uStack_117 = 0;
            uStack_116 = 0;
            local_128 = 0x14;
            uStack_11f = 0x7965;
            uStack_127 = s_object_key_00485a09._0_4_;
            uStack_123 = s_object_key_00485a09._4_2_;
            cStack_121 = s_object_key_00485a09[6];
            cStack_120 = s_object_key_00485a09[7];
            cStack_11d = '\0';
                    /* try { // try from 001fc130 to 001fc143 has its CatchHandler @ 001fc700 */
            FUN_001fb25c(&local_110,param_1,4,&local_128);
                    /* try { // try from 001fc144 to 001fc157 has its CatchHandler @ 001fc6fc */
            FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
            *(undefined1 *)(param_2 + 0x28) = 1;
            if (*(char *)(param_2 + 0x29) != '\0') {
              puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
              *puVar8 = &PTR_LAB_007433d0;
              *(undefined4 *)(puVar8 + 1) = local_d0;
              std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
              *puVar8 = &PTR_LAB_00743468;
              puVar8[4] = local_b8;
                    /* try { // try from 001fc1b4 to 001fc1cb has its CatchHandler @ 001fc660 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
            }
            goto LAB_001fbedc;
          }
          uVar7 = FUN_00201038(param_2,lVar1);
          if ((uVar7 & 1) == 0) goto LAB_001fbf20;
          iVar5 = FUN_001f8e4c(lVar2);
          *(int *)(param_1 + 0x30) = iVar5;
          if (iVar5 != 0xc) {
                    /* try { // try from 001fc1cc to 001fc1d7 has its CatchHandler @ 001fc6f8 */
            FUN_001fae04(local_b0,lVar2);
            local_e0 = *(void **)(param_1 + 0x68);
            uStack_e8 = *(ulong *)(param_1 + 0x60);
            local_f0 = *(ulong *)(param_1 + 0x58);
            uStack_116 = 0;
            local_128 = 0x20;
            uStack_11f = s_object_separator_00485a14._8_2_;
            cStack_11d = s_object_separator_00485a14[10];
            uStack_11c = s_object_separator_00485a14._11_4_;
            cStack_118 = s_object_separator_00485a14[0xf];
            uStack_127 = s_object_separator_00485a14._0_4_;
            uStack_123 = s_object_separator_00485a14._4_2_;
            cStack_121 = s_object_separator_00485a14[6];
            cStack_120 = s_object_separator_00485a14[7];
            uStack_117 = 0;
                    /* try { // try from 001fc20c to 001fc21f has its CatchHandler @ 001fc6f4 */
            FUN_001fb25c(&local_110,param_1,0xc,&local_128);
                    /* try { // try from 001fc220 to 001fc233 has its CatchHandler @ 001fc6f0 */
            FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
            *(undefined1 *)(param_2 + 0x28) = 1;
            if (*(char *)(param_2 + 0x29) != '\0') {
              puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
              *puVar8 = &PTR_LAB_007433d0;
              *(undefined4 *)(puVar8 + 1) = local_d0;
              std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
              *puVar8 = &PTR_LAB_00743468;
              puVar8[4] = local_b8;
                    /* try { // try from 001fc290 to 001fc2a7 has its CatchHandler @ 001fc65c */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
            }
            goto LAB_001fbedc;
          }
          uVar6 = FUN_001f8e4c(lVar2);
          *(undefined4 *)(param_1 + 0x30) = uVar6;
          goto LAB_001fb9d8;
        }
        if (iVar5 != 0xb) {
                    /* try { // try from 001fc00c to 001fc017 has its CatchHandler @ 001fc710 */
          FUN_001fae04(local_b0,lVar2);
          local_e0 = *(void **)(param_1 + 0x68);
          uStack_e8 = *(ulong *)(param_1 + 0x60);
          local_f0 = *(ulong *)(param_1 + 0x58);
          cStack_120 = '\0';
          uStack_11f = 0;
          cStack_11d = '\0';
          uStack_11c = 0;
          cStack_118 = '\0';
          uStack_117 = 0;
          uStack_116 = 0;
          local_128 = 0xc;
          uStack_123 = 0x7463;
          uStack_127 = 0x656a626f;
          cStack_121 = '\0';
                    /* try { // try from 001fc04c to 001fc05f has its CatchHandler @ 001fc70c */
          FUN_001fb25c(&local_110,param_1,0xb,&local_128);
                    /* try { // try from 001fc060 to 001fc073 has its CatchHandler @ 001fc708 */
          FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
          *(undefined1 *)(param_2 + 0x28) = 1;
          if (*(char *)(param_2 + 0x29) != '\0') {
            puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
            *puVar8 = &PTR_LAB_007433d0;
            *(undefined4 *)(puVar8 + 1) = local_d0;
            std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
            *puVar8 = &PTR_LAB_00743468;
            puVar8[4] = local_b8;
                    /* try { // try from 001fc0d0 to 001fc0e7 has its CatchHandler @ 001fc664 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
          }
          goto LAB_001fbedc;
        }
      }
      else {
                    /* try { // try from 001fbaf8 to 001fbb1f has its CatchHandler @ 001fc7b4 */
        iVar5 = FUN_001f8e4c(lVar2);
        *(int *)(param_1 + 0x30) = iVar5;
        if (iVar5 == 0xd) goto LAB_001fb9cc;
        if (iVar5 != 10) {
                    /* try { // try from 001fbf30 to 001fbf3b has its CatchHandler @ 001fc71c */
          FUN_001fae04(local_b0,lVar2);
          local_e0 = *(void **)(param_1 + 0x68);
          uStack_e8 = *(ulong *)(param_1 + 0x60);
          local_f0 = *(ulong *)(param_1 + 0x58);
          cStack_121 = '\0';
          cStack_120 = '\0';
          uStack_11f = 0;
          cStack_11d = '\0';
          uStack_11c = 0;
          cStack_118 = '\0';
          uStack_117 = 0;
          uStack_116 = 0;
          local_128 = 10;
          uStack_127 = 0x61727261;
          uStack_123 = 0x79;
                    /* try { // try from 001fbf70 to 001fbf83 has its CatchHandler @ 001fc718 */
          FUN_001fb25c(&local_110,param_1,10,&local_128);
                    /* try { // try from 001fbf84 to 001fbf97 has its CatchHandler @ 001fc714 */
          FUN_001faeec(&local_d8,0x65,&local_f0,&local_110);
          *(undefined1 *)(param_2 + 0x28) = 1;
          if (*(char *)(param_2 + 0x29) != '\0') {
            puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
            *puVar8 = &PTR_LAB_007433d0;
            *(undefined4 *)(puVar8 + 1) = local_d0;
            std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_c8);
            *puVar8 = &PTR_LAB_00743468;
            puVar8[4] = local_b8;
                    /* try { // try from 001fbff4 to 001fc00b has its CatchHandler @ 001fc668 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
          }
          goto LAB_001fbedc;
        }
      }
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
      local_90 = local_90 - 1;
      if (local_90 == 0) break;
    } while( true );
  }
  uVar10 = 1;
  goto joined_r0x001fbf28;
code_r0x001fbc1c:
  if (local_90 == local_88 * 0x40) {
    if ((long)(local_90 + 1) < 0) {
                    /* try { // try from 001fc55c to 001fc563 has its CatchHandler @ 001fc698 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(&local_98);
    }
    if (local_90 < 0x3fffffffffffffff) {
      uVar7 = local_90 + 0x40 & 0xffffffffffffffc0;
      if (uVar7 <= (ulong)(local_88 << 7)) {
        uVar7 = local_88 << 7;
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
                    /* try { // try from 001fbcfc to 001fbd03 has its CatchHandler @ 001fc7a8 */
    FUN_001fc7d0(&local_98,uVar7);
  }
  uVar7 = local_90 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)((long)local_98 + uVar7) =
       *(ulong *)((long)local_98 + uVar7) & (1L << (local_90 & 0x3f) ^ 0xffffffffffffffffU);
  local_90 = local_90 + 1;
                    /* try { // try from 001fbd30 to 001fbd37 has its CatchHandler @ 001fc7b8 */
  uVar6 = FUN_001f8e4c(lVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  goto LAB_001fb9d8;
LAB_001fb9cc:
                    /* try { // try from 001fb9cc to 001fba87 has its CatchHandler @ 001fc7b8 */
  uVar6 = FUN_001f8e4c(lVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  goto LAB_001fb9d8;
}


