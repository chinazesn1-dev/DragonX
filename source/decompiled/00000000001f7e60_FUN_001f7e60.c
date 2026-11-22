// Recovered from libkentos.so by Ghidra 12.2
// address: 001f7e60
// size: 328
// name: FUN_001f7e60
// namespace: Global
// signature: undefined FUN_001f7e60(void)
// generated: 2026-11-22 21:47:02


long * FUN_001f7e60(long *param_1,long param_2,long param_3)

{
  ios_base *this;
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 local_70 [8];
  long *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = 0;
  plVar6 = (long *)(*param_1 + -0x18);
  local_68 = param_1;
  if (*(int *)((long)param_1 + *plVar6 + 0x20) == 0) {
    if (*(long *)((long)param_1 + *plVar6 + 0x88) != 0) {
                    /* try { // try from 001f7eb8 to 001f7ebb has its CatchHandler @ 001f7fac */
      FUN_001f825c();
      plVar6 = (long *)(*param_1 + -0x18);
    }
    local_70[0] = 1;
    lVar5 = (long)param_1 + *plVar6;
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar2 = *(uint *)(lVar5 + 8);
    if (*(int *)(lVar5 + 0x90) == -1) {
                    /* try { // try from 001f7ee8 to 001f7ef3 has its CatchHandler @ 001f7fc4 */
      std::__ndk1::ios_base::getloc();
                    /* try { // try from 001f7ef4 to 001f7f13 has its CatchHandler @ 001f7fb4 */
      plVar6 = (long *)std::__ndk1::locale::use_facet(alStack_60,(id *)PTR_id_007584b0);
      uVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x20);
      std::__ndk1::locale::~locale(alStack_60);
      *(uint *)(lVar5 + 0x90) = uVar4 & 0xff;
    }
    lVar1 = param_2 + param_3;
    if ((uVar2 & 0xb0) != 0x20) {
      lVar1 = param_2;
    }
                    /* try { // try from 001f7f3c to 001f7f4b has its CatchHandler @ 001f7fc4 */
    lVar5 = FUN_001f8004(uVar7,param_2,lVar1,param_2 + param_3,lVar5);
    if (lVar5 == 0) {
      this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
                    /* try { // try from 001f7f68 to 001f7f6b has its CatchHandler @ 001f7fa8 */
      std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 5);
    }
  }
  FUN_001f81bc(local_70);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


