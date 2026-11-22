// Recovered from libkentos.so by Ghidra 12.2
// address: 001e6d28
// size: 1072
// name: FUN_001e6d28
// namespace: Global
// signature: undefined FUN_001e6d28(void)
// generated: 2026-11-22 21:46:13


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e6d28(byte *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  FILE *pFVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  locale alStack_318 [8];
  undefined *local_310;
  undefined8 uStack_308;
  long local_300 [2];
  uint auStack_2f0 [26];
  FILE *local_288;
  undefined4 local_268;
  undefined *local_258 [17];
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0 [2];
  uint auStack_1a0 [26];
  FILE *local_138;
  undefined4 local_118;
  undefined *local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (((DAT_0082f818 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0082f818), iVar9 != 0)) {
    _DAT_0082f800 = 0;
    DAT_0082f808 = 0;
    DAT_0082f810 = (char *)0x0;
    __cxa_atexit(&LAB_001d9720,&DAT_0082f800,&PTR_LOOP_00759000);
    __cxa_guard_release(&DAT_0082f818);
  }
  uVar1 = _DAT_0082f800 >> 1 & 0x7f;
  if ((_DAT_0082f800 & 1) != 0) {
    uVar1 = DAT_0082f808;
  }
  if (uVar1 == 0) {
                    /* try { // try from 001e6d90 to 001e6da7 has its CatchHandler @ 001e7188 */
    FUN_001d9094(&DAT_0082f800,"/sdcard/Dexo/saved_key.txt",0x1a);
  }
  puVar4 = PTR_construction_vtable_00758038;
  local_1c0 = PTR_construction_vtable_00758038 + 0x18;
  local_108[0] = PTR_construction_vtable_00758038 + 0x40;
  uStack_1b8 = 0;
                    /* try { // try from 001e6dd4 to 001e6ddf has its CatchHandler @ 001e71f0 */
  std::__ndk1::ios_base::init((ios_base *)local_108,local_1b0);
  puVar5 = PTR_vtable_00758558;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_1c0 = PTR_vtable_00758558 + 0x18;
  local_108[0] = PTR_vtable_00758558 + 0x40;
                    /* try { // try from 001e6e04 to 001e6e0b has its CatchHandler @ 001e71e8 */
  FUN_0020c2bc(local_1b0);
  if (local_138 == (FILE *)0x0) {
    pcVar2 = DAT_0082f810;
    if ((_DAT_0082f800 & 1) == 0) {
      pcVar2 = &DAT_0082f801;
    }
    local_138 = fopen(pcVar2,"r");
    if (local_138 == (FILE *)0x0) goto LAB_001e6e14;
    local_118 = 8;
LAB_001e6e68:
                    /* try { // try from 001e6e78 to 001e6e7f has its CatchHandler @ 001e7208 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 001e6e80 to 001e6e9f has its CatchHandler @ 001e71f8 */
    plVar11 = (long *)std::__ndk1::locale::use_facet((locale *)&local_310,(id *)PTR_id_007584b0);
    uVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_310);
                    /* try { // try from 001e6eac to 001e6ebb has its CatchHandler @ 001e7208 */
    FUN_0020c414(&local_1c0,param_1,uVar8);
    pFVar6 = local_138;
    if (local_138 != (FILE *)0x0) {
                    /* try { // try from 001e6ecc to 001e6ed3 has its CatchHandler @ 001e7198 */
      iVar9 = (**(code **)(local_1b0[0] + 0x30))(local_1b0);
      iVar10 = fclose(pFVar6);
      if ((iVar10 == 0) && (local_138 = (FILE *)0x0, iVar9 == 0)) goto LAB_001e6f08;
    }
                    /* try { // try from 001e6f04 to 001e6f07 has its CatchHandler @ 001e7208 */
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)local_1b0 + *(long *)(local_1c0 + -0x18) + -0x10),
               *(uint *)((long)auStack_1a0 + *(long *)(local_1c0 + -0x18)) | 4);
  }
  else {
LAB_001e6e14:
                    /* try { // try from 001e6e2c to 001e6e2f has its CatchHandler @ 001e71b8 */
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)local_1b0 + *(long *)(local_1c0 + -0x18) + -0x10),
               *(uint *)((long)auStack_1a0 + *(long *)(local_1c0 + -0x18)) | 4);
    if (local_138 != (FILE *)0x0) goto LAB_001e6e68;
  }
LAB_001e6f08:
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) goto LAB_001e70c0;
                    /* try { // try from 001e6f20 to 001e6f23 has its CatchHandler @ 001e7184 */
  FUN_001e6bd4();
  local_310 = puVar4 + 0x18;
  local_258[0] = puVar4 + 0x40;
  uStack_308 = 0;
                    /* try { // try from 001e6f48 to 001e6f53 has its CatchHandler @ 001e717c */
  std::__ndk1::ios_base::init((ios_base *)local_258,local_300);
  local_310 = puVar5 + 0x18;
  local_258[0] = puVar5 + 0x40;
  local_1d0 = 0;
  local_1c8 = 0xffffffff;
                    /* try { // try from 001e6f70 to 001e6f77 has its CatchHandler @ 001e7174 */
  FUN_0020c2bc(local_300);
  if (local_288 == (FILE *)0x0) {
    pcVar2 = DAT_0082f830;
    if ((DAT_0082f820 & 1) == 0) {
      pcVar2 = &DAT_0082f821;
    }
    local_288 = fopen(pcVar2,"r");
    if (local_288 == (FILE *)0x0) goto LAB_001e6f80;
    local_268 = 8;
LAB_001e6fdc:
                    /* try { // try from 001e6fec to 001e6ff3 has its CatchHandler @ 001e71c0 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 001e6ff4 to 001e7013 has its CatchHandler @ 001e71a8 */
    plVar11 = (long *)std::__ndk1::locale::use_facet(alStack_318,(id *)PTR_id_007584b0);
    uVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale(alStack_318);
                    /* try { // try from 001e7020 to 001e702f has its CatchHandler @ 001e71c0 */
    FUN_0020c414(&local_310,param_1,uVar8);
    pFVar6 = local_288;
    if (local_288 == (FILE *)0x0) {
LAB_001e7060:
                    /* try { // try from 001e7078 to 001e709f has its CatchHandler @ 001e71c0 */
      std::__ndk1::ios_base::clear
                ((ios_base *)(alStack_318 + *(long *)(local_310 + -0x18) + 8),
                 *(uint *)((long)auStack_2f0 + *(long *)(local_310 + -0x18)) | 4);
    }
    else {
                    /* try { // try from 001e7040 to 001e7047 has its CatchHandler @ 001e7158 */
      iVar9 = (**(code **)(local_300[0] + 0x30))(local_300);
      iVar10 = fclose(pFVar6);
      if ((iVar10 != 0) || (local_288 = (FILE *)0x0, iVar9 != 0)) goto LAB_001e7060;
    }
    bVar7 = (*param_1 & 1) != 0;
    uVar1 = (ulong)(*param_1 >> 1);
    if (bVar7) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar1 != 0) {
      pbVar12 = *(byte **)(param_1 + 0x10);
      if (!bVar7) {
        pbVar12 = param_1 + 1;
      }
      FUN_001e67a4(pbVar12);
    }
  }
  else {
LAB_001e6f80:
                    /* try { // try from 001e6f98 to 001e6f9b has its CatchHandler @ 001e716c */
    std::__ndk1::ios_base::clear
              ((ios_base *)(alStack_318 + *(long *)(local_310 + -0x18) + 8),
               *(uint *)((long)auStack_2f0 + *(long *)(local_310 + -0x18)) | 4);
    if (local_288 != (FILE *)0x0) goto LAB_001e6fdc;
  }
  local_310 = puVar5 + 0x18;
  local_258[0] = puVar5 + 0x40;
  FUN_001f4964(local_300);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_258);
LAB_001e70c0:
  local_1c0 = puVar5 + 0x18;
  local_108[0] = puVar5 + 0x40;
  FUN_001f4964(local_1b0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


