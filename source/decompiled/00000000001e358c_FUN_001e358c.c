// Recovered from libkentos.so by Ghidra 12.2
// address: 001e358c
// size: 700
// name: FUN_001e358c
// namespace: Global
// signature: undefined FUN_001e358c(void)
// generated: 2026-11-22 21:45:52


void FUN_001e358c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__s;
  size_t sVar8;
  long lVar9;
  long *plVar10;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((((DAT_0082f388 == 0) || (lVar9 = *(long *)(DAT_0082f388 + 0x18), lVar9 == 0)) ||
      (plVar10 = *(long **)(lVar9 + 8), plVar10 == (long *)0x0)) ||
     (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
                    /* try { // try from 001e35f0 to 001e35ff has its CatchHandler @ 001e3864 */
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_88,0);
                    /* try { // try from 001e360c to 001e3617 has its CatchHandler @ 001e3860 */
    uVar2 = (**(code **)(*local_88 + 0x30))(local_88,"android/content/Context");
                    /* try { // try from 001e3628 to 001e363f has its CatchHandler @ 001e385c */
    uVar3 = (**(code **)(*local_88 + 0x108))
                      (local_88,uVar2,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;");
                    /* try { // try from 001e3650 to 001e365b has its CatchHandler @ 001e3858 */
    uVar4 = (**(code **)(*local_88 + 0x538))(local_88,"clipboard");
                    /* try { // try from 001e3664 to 001e368b has its CatchHandler @ 001e3868 */
    uVar3 = FUN_001e3888(local_88,lVar9,uVar3,uVar4);
    (**(code **)(*local_88 + 0xb8))(local_88,uVar4);
                    /* try { // try from 001e3698 to 001e36a3 has its CatchHandler @ 001e3854 */
    uVar4 = (**(code **)(*local_88 + 0x30))(local_88,"android/content/ClipboardManager");
                    /* try { // try from 001e36b4 to 001e36cb has its CatchHandler @ 001e3850 */
    uVar5 = (**(code **)(*local_88 + 0x108))(local_88,uVar4,"getText","()Ljava/lang/CharSequence;");
                    /* try { // try from 001e36dc to 001e36e7 has its CatchHandler @ 001e384c */
    uVar6 = (**(code **)(*local_88 + 0x30))(local_88,"java/lang/CharSequence");
                    /* try { // try from 001e36f8 to 001e370f has its CatchHandler @ 001e3848 */
    uVar7 = (**(code **)(*local_88 + 0x108))(local_88,uVar6,"toString","()Ljava/lang/String;");
                    /* try { // try from 001e3718 to 001e37e7 has its CatchHandler @ 001e386c */
    lVar9 = FUN_001e3888(local_88,uVar3,uVar5);
    if (lVar9 != 0) {
      uVar5 = FUN_001e3888(local_88,lVar9,uVar7);
      __s = (char *)(**(code **)(*local_88 + 0x548))(local_88,uVar5,0);
      sVar8 = strlen(__s);
      FUN_001d9094(&local_80,__s,sVar8);
      (**(code **)(*local_88 + 0xb8))(local_88,uVar5);
      (**(code **)(*local_88 + 0xb8))(local_88,lVar9);
    }
    (**(code **)(*local_88 + 0xb8))(local_88,uVar6);
    (**(code **)(*local_88 + 0xb8))(local_88,uVar4);
    (**(code **)(*local_88 + 0xb8))(local_88,uVar3);
    (**(code **)(*local_88 + 0xb8))(local_88,uVar2);
                    /* try { // try from 001e37f0 to 001e37f7 has its CatchHandler @ 001e3864 */
    (**(code **)(*plVar10 + 0x28))(plVar10);
    param_1[2] = local_70;
    param_1[1] = uStack_78;
    *param_1 = local_80;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


