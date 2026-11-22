// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9fcc
// size: 3224
// name: FUN_001f9fcc
// namespace: Global
// signature: undefined FUN_001f9fcc(void)
// generated: 2026-11-22 21:47:06


undefined8 FUN_001f9fcc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  double dVar11;
  byte local_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  char cStack_111;
  char cStack_110;
  undefined2 uStack_10f;
  char cStack_10d;
  undefined4 uStack_10c;
  char cStack_108;
  undefined1 uStack_107;
  undefined6 uStack_106;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined **local_c0;
  undefined4 local_b8;
  runtime_error arStack_b0 [16];
  undefined8 local_a0;
  byte local_98 [16];
  void *local_88;
  void *local_80;
  ulong local_78;
  long local_70;
  long local_68;
  
  dVar4 = DAT_00479ed8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x88;
  lVar2 = param_1 + 0x38;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
LAB_001fa044:
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    local_c0 = (undefined **)CONCAT71(local_c0._1_7_,1);
    FUN_001fffa4(param_2,&local_c0,0);
    break;
  case 2:
    local_c0 = (undefined **)((ulong)local_c0._1_7_ << 8);
    FUN_001fffa4(param_2,&local_c0,0);
    break;
  case 3:
    local_c0 = (undefined **)0x0;
    FUN_0020023c(param_2,&local_c0,0);
    break;
  case 4:
    FUN_00200760(param_2,lVar1,0);
    break;
  case 5:
    local_c0 = *(undefined ***)(param_1 + 0xb0);
    FUN_00200a00(param_2,&local_c0,0);
    break;
  case 6:
    local_c0 = *(undefined ***)(param_1 + 0xa8);
                    /* try { // try from 001fa140 to 001fa17f has its CatchHandler @ 001fadec */
    FUN_002004cc(param_2,&local_c0,0);
    break;
  case 7:
    dVar11 = ABS((double)*(undefined ***)(param_1 + 0xb8));
    if ((dVar4 <= dVar11) && (dVar11 == dVar4)) {
                    /* try { // try from 001fa8dc to 001fa8e7 has its CatchHandler @ 001fad20 */
      FUN_001fae04(local_98,lVar2);
                    /* try { // try from 001fa8e8 to 001fa8f3 has its CatchHandler @ 001fad10 */
      FUN_001fae04(&local_118,lVar2);
                    /* try { // try from 001fa8f4 to 001fa90b has its CatchHandler @ 001fad0c */
      puVar9 = (ulong *)FUN_0020480c(&local_118,0,"number overflow parsing \'",0x19);
      local_f0 = (void *)puVar9[2];
      uStack_f8 = puVar9[1];
      local_100 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
                    /* try { // try from 001fa924 to 001fa937 has its CatchHandler @ 001fad08 */
      puVar9 = (ulong *)FUN_001effa8(&local_100,"\'",1);
      local_d0 = (void *)puVar9[2];
      uStack_d8 = puVar9[1];
      local_e0 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
                    /* try { // try from 001fa950 to 001fa95f has its CatchHandler @ 001face8 */
      FUN_001fd90c(&local_c0,0x196,&local_e0);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x20);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_b8;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
        *puVar8 = &PTR_LAB_00743420;
                    /* try { // try from 001fac4c to 001fac63 has its CatchHandler @ 001fac64 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743300,&LAB_001fdaa4);
      }
      local_c0 = &PTR_LAB_007433d0;
      std::underflow_error::~underflow_error((underflow_error *)arStack_b0);
      std::bad_alloc::~bad_alloc((bad_alloc *)&local_c0);
      if ((local_e0 & 1) != 0) {
        operator_delete(local_d0);
      }
      goto joined_r0x001fa9a8;
    }
                    /* try { // try from 001fa124 to 001fa133 has its CatchHandler @ 001fade4 */
    local_c0 = *(undefined ***)(param_1 + 0xb8);
    FUN_001ffd0c(param_2,&local_c0,0);
    break;
  case 8:
    uVar7 = FUN_001fd4d0(param_2,0xffffffffffffffff);
    if ((uVar7 & 1) == 0) goto LAB_001fa554;
    iVar6 = FUN_001f8e4c(lVar2);
    *(int *)(param_1 + 0x30) = iVar6;
    if (iVar6 != 10) {
      if (local_78 == local_70 * 0x40) {
        if ((long)(local_78 + 1) < 0) {
                    /* try { // try from 001fab98 to 001fab9f has its CatchHandler @ 001facc8 */
                    /* WARNING: Subroutine does not return */
          FUN_001d9034(&local_80);
        }
        if (local_78 < 0x3fffffffffffffff) {
          uVar7 = local_78 + 0x40 & 0xffffffffffffffc0;
          if (uVar7 <= (ulong)(local_70 << 7)) {
            uVar7 = local_70 << 7;
          }
        }
        else {
          uVar7 = 0x7fffffffffffffff;
        }
                    /* try { // try from 001fa2f4 to 001fa2fb has its CatchHandler @ 001fade0 */
        FUN_001fc7d0(&local_80,uVar7);
      }
      uVar7 = local_78 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)local_80 + uVar7) =
           *(ulong *)((long)local_80 + uVar7) | 1L << (local_78 & 0x3f);
      local_78 = local_78 + 1;
      goto LAB_001fa044;
    }
    uVar7 = FUN_001fd78c(param_2);
LAB_001fa180:
    if ((uVar7 & 1) == 0) goto LAB_001fa554;
    break;
  case 9:
    uVar7 = FUN_001fccd4(param_2,0xffffffffffffffff);
    if ((uVar7 & 1) == 0) goto LAB_001fa554;
    iVar6 = FUN_001f8e4c(lVar2);
    *(int *)(param_1 + 0x30) = iVar6;
    if (iVar6 == 0xb) {
      uVar7 = FUN_001fcf8c(param_2);
      goto LAB_001fa180;
    }
    if (iVar6 == 4) {
      uVar7 = FUN_001fd25c(param_2,lVar1);
      if ((uVar7 & 1) == 0) goto LAB_001fa554;
      iVar6 = FUN_001f8e4c(lVar2);
      *(int *)(param_1 + 0x30) = iVar6;
      if (iVar6 == 0xc) goto code_r0x001fa288;
                    /* try { // try from 001faab4 to 001faabf has its CatchHandler @ 001facd8 */
      FUN_001fae04(local_98,lVar2);
      local_d0 = *(void **)(param_1 + 0x68);
      uStack_d8 = *(ulong *)(param_1 + 0x60);
      local_e0 = *(ulong *)(param_1 + 0x58);
      uStack_106 = 0;
      local_118 = 0x20;
      uStack_10f = s_object_separator_00485a14._8_2_;
      cStack_10d = s_object_separator_00485a14[10];
      uStack_10c = s_object_separator_00485a14._11_4_;
      cStack_108 = s_object_separator_00485a14[0xf];
      uStack_117 = s_object_separator_00485a14._0_4_;
      uStack_113 = s_object_separator_00485a14._4_2_;
      cStack_111 = s_object_separator_00485a14[6];
      cStack_110 = s_object_separator_00485a14[7];
      uStack_107 = 0;
                    /* try { // try from 001faaf4 to 001fab07 has its CatchHandler @ 001facd4 */
      FUN_001fb25c(&local_100,param_1,0xc,&local_118);
                    /* try { // try from 001fab08 to 001fab1b has its CatchHandler @ 001facd0 */
      FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_b8;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
        *puVar8 = &PTR_LAB_00743468;
        puVar8[4] = local_a0;
                    /* try { // try from 001fab78 to 001fab8f has its CatchHandler @ 001fac88 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
      }
    }
    else {
                    /* try { // try from 001fa9d0 to 001fa9db has its CatchHandler @ 001face4 */
      FUN_001fae04(local_98,lVar2);
      local_d0 = *(void **)(param_1 + 0x68);
      uStack_d8 = *(ulong *)(param_1 + 0x60);
      local_e0 = *(ulong *)(param_1 + 0x58);
      uStack_10c = 0;
      cStack_108 = '\0';
      uStack_107 = 0;
      uStack_106 = 0;
      local_118 = 0x14;
      uStack_10f = 0x7965;
      uStack_117 = s_object_key_00485a09._0_4_;
      uStack_113 = s_object_key_00485a09._4_2_;
      cStack_111 = s_object_key_00485a09[6];
      cStack_110 = s_object_key_00485a09[7];
      cStack_10d = '\0';
                    /* try { // try from 001faa18 to 001faa2b has its CatchHandler @ 001face0 */
      FUN_001fb25c(&local_100,param_1,4,&local_118);
                    /* try { // try from 001faa2c to 001faa3f has its CatchHandler @ 001facdc */
      FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
        puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
        *puVar8 = &PTR_LAB_007433d0;
        *(undefined4 *)(puVar8 + 1) = local_b8;
        std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
        *puVar8 = &PTR_LAB_00743468;
        puVar8[4] = local_a0;
                    /* try { // try from 001faa9c to 001faab3 has its CatchHandler @ 001fac8c */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
      }
    }
    goto LAB_001fa510;
  default:
                    /* try { // try from 001fa3bc to 001fa3c7 has its CatchHandler @ 001fadd8 */
    FUN_001fae04(local_98,lVar2);
    local_d0 = *(void **)(param_1 + 0x68);
    uStack_d8 = *(ulong *)(param_1 + 0x60);
    local_e0 = *(ulong *)(param_1 + 0x58);
    cStack_111 = '\0';
    cStack_110 = '\0';
    uStack_10f = 0;
    cStack_10d = '\0';
    uStack_10c = 0;
    cStack_108 = '\0';
    uStack_107 = 0;
    uStack_106 = 0;
    local_118 = 10;
    uStack_117 = 0x756c6176;
    uStack_113 = 0x65;
                    /* try { // try from 001fa3fc to 001fa40f has its CatchHandler @ 001fada4 */
    FUN_001fb25c(&local_100,param_1,0x10,&local_118);
                    /* try { // try from 001fa410 to 001fa423 has its CatchHandler @ 001fad74 */
    FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x90) != '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
      *puVar8 = &PTR_LAB_007433d0;
      *(undefined4 *)(puVar8 + 1) = local_b8;
      std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
      *puVar8 = &PTR_LAB_00743468;
      puVar8[4] = local_a0;
                    /* try { // try from 001fa480 to 001fa497 has its CatchHandler @ 001faca4 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
    }
LAB_001fa510:
    local_c0 = &PTR_LAB_007433d0;
    std::underflow_error::~underflow_error((underflow_error *)arStack_b0);
    std::bad_alloc::~bad_alloc((bad_alloc *)&local_c0);
joined_r0x001fa9a8:
    if ((local_100 & 1) != 0) {
      operator_delete(local_f0);
    }
    if ((local_118 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_106,CONCAT11(uStack_107,cStack_108)));
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
LAB_001fa554:
    uVar10 = 0;
joined_r0x001fa55c:
    if (local_80 != (void *)0x0) {
      operator_delete(local_80);
    }
    if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  case 0xe:
                    /* try { // try from 001fa498 to 001fa4a3 has its CatchHandler @ 001fadd4 */
    FUN_001fae04(local_98,lVar2);
    local_d0 = *(void **)(param_1 + 0x68);
    uStack_d8 = *(ulong *)(param_1 + 0x60);
    local_e0 = *(ulong *)(param_1 + 0x58);
    cStack_111 = '\0';
    cStack_110 = '\0';
    uStack_10f = 0;
    cStack_10d = '\0';
    uStack_10c = 0;
    cStack_108 = '\0';
    uStack_107 = 0;
    uStack_106 = 0;
    local_118 = 10;
    uStack_117 = 0x756c6176;
    uStack_113 = 0x65;
                    /* try { // try from 001fa4d8 to 001fa4eb has its CatchHandler @ 001fada0 */
    FUN_001fb25c(&local_100,param_1,0,&local_118);
                    /* try { // try from 001fa4ec to 001fa4ff has its CatchHandler @ 001fad54 */
    FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x90) != '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
      *puVar8 = &PTR_LAB_007433d0;
      *(undefined4 *)(puVar8 + 1) = local_b8;
      std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
      *puVar8 = &PTR_LAB_00743468;
      puVar8[4] = local_a0;
                    /* try { // try from 001fabf0 to 001fac07 has its CatchHandler @ 001faca0 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
    }
    goto LAB_001fa510;
  }
  if (local_78 != 0) {
    do {
      if ((*(ulong *)((long)local_80 + (local_78 - 1 >> 3 & 0x1ffffffffffffff8)) &
          1L << (local_78 - 1 & 0x3f)) == 0) {
        iVar6 = FUN_001f8e4c(lVar2);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) {
                    /* try { // try from 001fa214 to 001fa27b has its CatchHandler @ 001fadec */
          iVar6 = FUN_001f8e4c(lVar2);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 != 4) {
                    /* try { // try from 001fa71c to 001fa727 has its CatchHandler @ 001fad38 */
            FUN_001fae04(local_98,lVar2);
            local_d0 = *(void **)(param_1 + 0x68);
            uStack_d8 = *(ulong *)(param_1 + 0x60);
            local_e0 = *(ulong *)(param_1 + 0x58);
            uStack_10c = 0;
            cStack_108 = '\0';
            uStack_107 = 0;
            uStack_106 = 0;
            local_118 = 0x14;
            uStack_10f = 0x7965;
            uStack_117 = s_object_key_00485a09._0_4_;
            uStack_113 = s_object_key_00485a09._4_2_;
            cStack_111 = s_object_key_00485a09[6];
            cStack_110 = s_object_key_00485a09[7];
            cStack_10d = '\0';
                    /* try { // try from 001fa764 to 001fa777 has its CatchHandler @ 001fad34 */
            FUN_001fb25c(&local_100,param_1,4,&local_118);
                    /* try { // try from 001fa778 to 001fa78b has its CatchHandler @ 001fad30 */
            FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
            *(undefined1 *)(param_2 + 0x58) = 1;
            if (*(char *)(param_2 + 0x90) != '\0') {
              puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
              *puVar8 = &PTR_LAB_007433d0;
              *(undefined4 *)(puVar8 + 1) = local_b8;
              std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
              *puVar8 = &PTR_LAB_00743468;
              puVar8[4] = local_a0;
                    /* try { // try from 001fa7e8 to 001fa7ff has its CatchHandler @ 001fac94 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
            }
            goto LAB_001fa510;
          }
          uVar7 = FUN_001fd25c(param_2,lVar1);
          if ((uVar7 & 1) == 0) goto LAB_001fa554;
          iVar6 = FUN_001f8e4c(lVar2);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 != 0xc) {
                    /* try { // try from 001fa800 to 001fa80b has its CatchHandler @ 001fad2c */
            FUN_001fae04(local_98,lVar2);
            local_d0 = *(void **)(param_1 + 0x68);
            uStack_d8 = *(ulong *)(param_1 + 0x60);
            local_e0 = *(ulong *)(param_1 + 0x58);
            uStack_106 = 0;
            local_118 = 0x20;
            uStack_10f = s_object_separator_00485a14._8_2_;
            cStack_10d = s_object_separator_00485a14[10];
            uStack_10c = s_object_separator_00485a14._11_4_;
            cStack_108 = s_object_separator_00485a14[0xf];
            uStack_117 = s_object_separator_00485a14._0_4_;
            uStack_113 = s_object_separator_00485a14._4_2_;
            cStack_111 = s_object_separator_00485a14[6];
            cStack_110 = s_object_separator_00485a14[7];
            uStack_107 = 0;
                    /* try { // try from 001fa840 to 001fa853 has its CatchHandler @ 001fad28 */
            FUN_001fb25c(&local_100,param_1,0xc,&local_118);
                    /* try { // try from 001fa854 to 001fa867 has its CatchHandler @ 001fad24 */
            FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
            *(undefined1 *)(param_2 + 0x58) = 1;
            if (*(char *)(param_2 + 0x90) != '\0') {
              puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
              *puVar8 = &PTR_LAB_007433d0;
              *(undefined4 *)(puVar8 + 1) = local_b8;
              std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
              *puVar8 = &PTR_LAB_00743468;
              puVar8[4] = local_a0;
                    /* try { // try from 001fa8c4 to 001fa8db has its CatchHandler @ 001fac90 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
            }
            goto LAB_001fa510;
          }
          uVar5 = FUN_001f8e4c(lVar2);
          *(undefined4 *)(param_1 + 0x30) = uVar5;
          goto LAB_001fa044;
        }
        if (iVar6 != 0xb) {
                    /* try { // try from 001fa640 to 001fa64b has its CatchHandler @ 001fad44 */
          FUN_001fae04(local_98,lVar2);
          local_d0 = *(void **)(param_1 + 0x68);
          uStack_d8 = *(ulong *)(param_1 + 0x60);
          local_e0 = *(ulong *)(param_1 + 0x58);
          cStack_110 = '\0';
          uStack_10f = 0;
          cStack_10d = '\0';
          uStack_10c = 0;
          cStack_108 = '\0';
          uStack_107 = 0;
          uStack_106 = 0;
          local_118 = 0xc;
          uStack_113 = 0x7463;
          uStack_117 = 0x656a626f;
          cStack_111 = '\0';
                    /* try { // try from 001fa680 to 001fa693 has its CatchHandler @ 001fad40 */
          FUN_001fb25c(&local_100,param_1,0xb,&local_118);
                    /* try { // try from 001fa694 to 001fa6a7 has its CatchHandler @ 001fad3c */
          FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
          *(undefined1 *)(param_2 + 0x58) = 1;
          if (*(char *)(param_2 + 0x90) != '\0') {
            puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
            *puVar8 = &PTR_LAB_007433d0;
            *(undefined4 *)(puVar8 + 1) = local_b8;
            std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
            *puVar8 = &PTR_LAB_00743468;
            puVar8[4] = local_a0;
                    /* try { // try from 001fa704 to 001fa71b has its CatchHandler @ 001fac98 */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
          }
          goto LAB_001fa510;
        }
        uVar7 = FUN_001fcf8c(param_2);
      }
      else {
                    /* try { // try from 001fa1b0 to 001fa20f has its CatchHandler @ 001fade8 */
        iVar6 = FUN_001f8e4c(lVar2);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) goto LAB_001fa038;
        if (iVar6 != 10) {
                    /* try { // try from 001fa564 to 001fa56f has its CatchHandler @ 001fad50 */
          FUN_001fae04(local_98,lVar2);
          local_d0 = *(void **)(param_1 + 0x68);
          uStack_d8 = *(ulong *)(param_1 + 0x60);
          local_e0 = *(ulong *)(param_1 + 0x58);
          cStack_111 = '\0';
          cStack_110 = '\0';
          uStack_10f = 0;
          cStack_10d = '\0';
          uStack_10c = 0;
          cStack_108 = '\0';
          uStack_107 = 0;
          uStack_106 = 0;
          local_118 = 10;
          uStack_117 = 0x61727261;
          uStack_113 = 0x79;
                    /* try { // try from 001fa5a4 to 001fa5b7 has its CatchHandler @ 001fad4c */
          FUN_001fb25c(&local_100,param_1,10,&local_118);
                    /* try { // try from 001fa5b8 to 001fa5cb has its CatchHandler @ 001fad48 */
          FUN_001faeec(&local_c0,0x65,&local_e0,&local_100);
          *(undefined1 *)(param_2 + 0x58) = 1;
          if (*(char *)(param_2 + 0x90) != '\0') {
            puVar8 = (undefined8 *)__cxa_allocate_exception(0x28);
            *puVar8 = &PTR_LAB_007433d0;
            *(undefined4 *)(puVar8 + 1) = local_b8;
            std::runtime_error::runtime_error((runtime_error *)(puVar8 + 2),arStack_b0);
            *puVar8 = &PTR_LAB_00743468;
            puVar8[4] = local_a0;
                    /* try { // try from 001fa628 to 001fa63f has its CatchHandler @ 001fac9c */
                    /* WARNING: Subroutine does not return */
            __cxa_throw(puVar8,&PTR_PTR_00743440,&LAB_001fdaa4);
          }
          goto LAB_001fa510;
        }
        uVar7 = FUN_001fd78c(param_2);
      }
      if ((uVar7 & 1) == 0) goto LAB_001fa554;
      local_78 = local_78 - 1;
      if (local_78 == 0) break;
    } while( true );
  }
  uVar10 = 1;
  goto joined_r0x001fa55c;
code_r0x001fa288:
  if (local_78 == local_70 * 0x40) {
    if ((long)(local_78 + 1) < 0) {
                    /* try { // try from 001fab90 to 001fab97 has its CatchHandler @ 001faccc */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(&local_80);
    }
    if (local_78 < 0x3fffffffffffffff) {
      uVar7 = local_78 + 0x40 & 0xffffffffffffffc0;
      if (uVar7 <= (ulong)(local_70 << 7)) {
        uVar7 = local_70 << 7;
      }
    }
    else {
      uVar7 = 0x7fffffffffffffff;
    }
                    /* try { // try from 001fa330 to 001fa337 has its CatchHandler @ 001faddc */
    FUN_001fc7d0(&local_80,uVar7);
  }
  uVar7 = local_78 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)((long)local_80 + uVar7) =
       *(ulong *)((long)local_80 + uVar7) & (1L << (local_78 & 0x3f) ^ 0xffffffffffffffffU);
  local_78 = local_78 + 1;
                    /* try { // try from 001fa364 to 001fa36b has its CatchHandler @ 001fadec */
  uVar5 = FUN_001f8e4c(lVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  goto LAB_001fa044;
LAB_001fa038:
                    /* try { // try from 001fa038 to 001fa103 has its CatchHandler @ 001fadec */
  uVar5 = FUN_001f8e4c(lVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  goto LAB_001fa044;
}


