// Recovered from libkentos.so by Ghidra 12.2
// address: 001e255c
// size: 648
// name: FUN_001e255c
// namespace: Global
// signature: undefined FUN_001e255c(void)
// generated: 2026-11-22 21:45:51


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e255c(ulong *param_1,char *param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  size_t __n;
  undefined8 *puVar4;
  void *__dest;
  void *pvVar5;
  char *__s;
  ulong uVar6;
  char *local_90;
  size_t local_88;
  void *local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_2 != '\x01') {
    uVar3 = __cxa_allocate_exception(0x20);
    if ((ulong)(long)*param_2 < 10) {
      __s = (&PTR_s_null_00676cda_0x18_007434f0)[*param_2];
    }
    else {
      __s = "number";
    }
    local_90 = (char *)0x0;
    local_88 = 0;
    local_80 = (void *)0x0;
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 001e2720 to 001e2727 has its CatchHandler @ 001e27f8 */
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_90);
    }
    if (__n < 0x17) {
      pvVar5 = (void *)((ulong)&local_90 | 1);
      local_90 = (char *)CONCAT71(local_90._1_7_,(char)((int)__n << 1));
      if (__n == 0) goto LAB_001e2780;
    }
    else {
      uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 001e2758 to 001e275f has its CatchHandler @ 001e27f8 */
      pvVar5 = operator_new(uVar2);
      local_90 = (char *)(uVar2 | 1);
      local_88 = __n;
      local_80 = pvVar5;
    }
    memcpy(pvVar5,__s,__n);
LAB_001e2780:
    *(undefined1 *)((long)pvVar5 + __n) = 0;
                    /* try { // try from 001e2784 to 001e279b has its CatchHandler @ 001e27e4 */
    puVar4 = (undefined8 *)FUN_0020480c(&local_90,0,"cannot use value() with ",0x18);
    local_60 = puVar4[2];
    uStack_68 = puVar4[1];
    local_70 = (char *)*puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
                    /* try { // try from 001e27b8 to 001e27e3 has its CatchHandler @ 001e2800 */
    FUN_001ff2c8(uVar3,0x132,&local_70);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar3,&PTR_PTR_00743380,&LAB_001fdaa4);
  }
  uStack_58 = _UNK_004798d8;
  local_60 = _DAT_004798d0;
  local_70 = param_2;
  uStack_68 = FUN_00205b8c(*(undefined8 *)(param_2 + 8));
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0x8000000000000000;
  if (*param_2 == '\x02') {
    local_80 = *(void **)(*(long *)(param_2 + 8) + 8);
  }
  else if (*param_2 == '\x01') {
    local_88 = *(long *)(param_2 + 8) + 8;
  }
  else {
    local_78 = 1;
  }
  local_90 = param_2;
  uVar2 = FUN_00205c98(&local_70,&local_90);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00205a78(&local_70);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
                    /* try { // try from 001e2640 to 001e2647 has its CatchHandler @ 001e2840 */
    FUN_0020a0d4(uVar3,param_1);
    goto LAB_001e26a8;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_4 & 1) == 0) {
    param_1[2] = param_4[2];
    uVar2 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar2;
    goto LAB_001e26a8;
  }
  uVar2 = param_4[1];
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  pvVar5 = (void *)param_4[2];
  if (uVar2 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_001e2694;
  }
  else {
    uVar6 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    param_1[1] = uVar2;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
LAB_001e2694:
    memcpy(__dest,pvVar5,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_001e26a8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


