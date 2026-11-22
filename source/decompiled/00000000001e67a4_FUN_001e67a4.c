// Recovered from libkentos.so by Ghidra 12.2
// address: 001e67a4
// size: 900
// name: FUN_001e67a4
// namespace: Global
// signature: undefined FUN_001e67a4(void)
// generated: 2026-11-22 21:46:12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e67a4(char *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  FILE *pFVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  undefined *local_2f8;
  long local_2f0 [3];
  uint auStack_2d8 [24];
  FILE *local_278;
  undefined4 local_258;
  undefined *local_248 [17];
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined *local_1b0;
  long local_1a8 [3];
  uint auStack_190 [24];
  FILE *local_130;
  undefined4 local_110;
  undefined *local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  mkdir("/sdcard",0x1ff);
  mkdir("/sdcard/Dexo",0x1ff);
  if (((DAT_0082f818 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0082f818), iVar7 != 0)) {
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
    FUN_001d9094(&DAT_0082f800,"/sdcard/Dexo/saved_key.txt",0x1a);
  }
  puVar5 = PTR_construction_vtable_00758270;
  local_1b0 = PTR_construction_vtable_00758270 + 0x18;
  local_100[0] = PTR_construction_vtable_00758270 + 0x40;
                    /* try { // try from 001e6860 to 001e686b has its CatchHandler @ 001e6ba0 */
  std::__ndk1::ios_base::init((ios_base *)local_100,local_1a8);
  puVar4 = PTR_vtable_007581b0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_1b0 = PTR_vtable_007581b0 + 0x18;
  local_100[0] = PTR_vtable_007581b0 + 0x40;
                    /* try { // try from 001e6890 to 001e6897 has its CatchHandler @ 001e6b98 */
  FUN_0020c2bc(local_1a8);
  if (local_130 == (FILE *)0x0) {
    pcVar2 = DAT_0082f810;
    if ((_DAT_0082f800 & 1) == 0) {
      pcVar2 = &DAT_0082f801;
    }
    local_130 = fopen(pcVar2,"w");
    if (local_130 == (FILE *)0x0) goto LAB_001e68a0;
    local_110 = 0x10;
  }
  else {
LAB_001e68a0:
                    /* try { // try from 001e68b8 to 001e68bb has its CatchHandler @ 001e6b90 */
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)local_1a8 + *(long *)(local_1b0 + -0x18) + -8),
               *(uint *)((long)auStack_190 + *(long *)(local_1b0 + -0x18)) | 4);
    if (local_130 == (FILE *)0x0) {
                    /* try { // try from 001e68c4 to 001e68c7 has its CatchHandler @ 001e6b54 */
      FUN_001e6bd4();
      local_2f8 = puVar5 + 0x18;
      local_248[0] = puVar5 + 0x40;
                    /* try { // try from 001e68e4 to 001e68ef has its CatchHandler @ 001e6b4c */
      std::__ndk1::ios_base::init((ios_base *)local_248,local_2f0);
      local_2f8 = puVar4 + 0x18;
      local_248[0] = puVar4 + 0x40;
      local_1c0 = 0;
      local_1b8 = 0xffffffff;
                    /* try { // try from 001e690c to 001e6913 has its CatchHandler @ 001e6b44 */
      FUN_0020c2bc(local_2f0);
      if (local_278 == (FILE *)0x0) {
        pcVar2 = DAT_0082f830;
        if ((DAT_0082f820 & 1) == 0) {
          pcVar2 = &DAT_0082f821;
        }
        local_278 = fopen(pcVar2,"w");
        if (local_278 == (FILE *)0x0) goto LAB_001e691c;
        local_258 = 0x10;
LAB_001e6a0c:
        sVar9 = strlen(param_1);
                    /* try { // try from 001e6a18 to 001e6a23 has its CatchHandler @ 001e6b58 */
        FUN_001f7e60(&local_2f8,param_1,sVar9);
        pFVar6 = local_278;
        if (local_278 != (FILE *)0x0) {
                    /* try { // try from 001e6a34 to 001e6a3b has its CatchHandler @ 001e6b28 */
          iVar7 = (**(code **)(local_2f0[0] + 0x30))(local_2f0);
          iVar8 = fclose(pFVar6);
          if ((iVar8 == 0) && (local_278 = (FILE *)0x0, iVar7 == 0)) goto LAB_001e6a70;
        }
                    /* try { // try from 001e6a6c to 001e6a6f has its CatchHandler @ 001e6b58 */
        std::__ndk1::ios_base::clear
                  ((ios_base *)((long)local_2f0 + *(long *)(local_2f8 + -0x18) + -8),
                   *(uint *)((long)auStack_2d8 + *(long *)(local_2f8 + -0x18)) | 4);
      }
      else {
LAB_001e691c:
                    /* try { // try from 001e6934 to 001e6937 has its CatchHandler @ 001e6b3c */
        std::__ndk1::ios_base::clear
                  ((ios_base *)((long)local_2f0 + *(long *)(local_2f8 + -0x18) + -8),
                   *(uint *)((long)auStack_2d8 + *(long *)(local_2f8 + -0x18)) | 4);
        if (local_278 != (FILE *)0x0) goto LAB_001e6a0c;
      }
LAB_001e6a70:
      local_2f8 = puVar4 + 0x18;
      local_248[0] = puVar4 + 0x40;
      FUN_001f4964(local_2f0);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_248);
      goto LAB_001e6a90;
    }
  }
  sVar9 = strlen(param_1);
                    /* try { // try from 001e697c to 001e6987 has its CatchHandler @ 001e6ba8 */
  FUN_001f7e60(&local_1b0,param_1,sVar9);
  pFVar6 = local_130;
  if (local_130 != (FILE *)0x0) {
                    /* try { // try from 001e6998 to 001e699f has its CatchHandler @ 001e6b80 */
    iVar7 = (**(code **)(local_1a8[0] + 0x30))(local_1a8);
    iVar8 = fclose(pFVar6);
    if ((iVar8 == 0) && (local_130 = (FILE *)0x0, iVar7 == 0)) goto LAB_001e6a90;
  }
                    /* try { // try from 001e69d0 to 001e69d3 has its CatchHandler @ 001e6ba8 */
  std::__ndk1::ios_base::clear
            ((ios_base *)((long)local_1a8 + *(long *)(local_1b0 + -0x18) + -8),
             *(uint *)((long)auStack_190 + *(long *)(local_1b0 + -0x18)) | 4);
LAB_001e6a90:
  local_1b0 = puVar4 + 0x18;
  local_100[0] = puVar4 + 0x40;
  FUN_001f4964(local_1a8);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


