// Recovered from libkentos.so by Ghidra 12.2
// address: 001e2220
// size: 700
// name: FUN_001e2220
// namespace: Global
// signature: undefined FUN_001e2220(void)
// generated: 2026-11-22 21:45:50


undefined8 * FUN_001e2220(char *param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  char *__s;
  void *pvVar8;
  ulong uVar9;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  size_t sStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    puVar2 = operator_new(0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = puVar2 + 1;
    *(undefined8 **)(param_1 + 8) = puVar2;
  }
  else if (*param_1 != '\x01') {
    uVar5 = __cxa_allocate_exception(0x20);
    if ((ulong)(long)*param_1 < 10) {
      __s = (&PTR_s_null_00676cda_0x18_007434f0)[*param_1];
    }
    else {
      __s = "number";
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = (void *)0x0;
    sVar3 = strlen(__s);
    if (0xffffffffffffffef < sVar3) {
                    /* try { // try from 001e2420 to 001e2457 has its CatchHandler @ 001e24f0 */
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_78);
    }
    if (sVar3 < 0x17) {
      pvVar8 = (void *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar3 << 1));
      if (sVar3 == 0) goto LAB_001e2478;
    }
    else {
      uVar9 = sVar3 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar9);
      local_78 = uVar9 | 1;
      local_70 = sVar3;
      local_68 = pvVar8;
    }
    memcpy(pvVar8,__s,sVar3);
LAB_001e2478:
    *(undefined1 *)((long)pvVar8 + sVar3) = 0;
                    /* try { // try from 001e247c to 001e2493 has its CatchHandler @ 001e24dc */
    puVar6 = (ulong *)FUN_0020480c(&local_78,0,"cannot use operator[] with a string argument with ",
                                   0x32);
    local_50 = (void *)puVar6[2];
    sStack_58 = puVar6[1];
    local_60 = *puVar6;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
                    /* try { // try from 001e24b0 to 001e24db has its CatchHandler @ 001e24f8 */
    FUN_001ff2c8(uVar5,0x131,&local_60);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar5,&PTR_PTR_00743380,&LAB_001fdaa4);
  }
  plVar7 = *(long **)(param_1 + 8);
  local_60 = 0;
  sStack_58 = 0;
  local_50 = (void *)0x0;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(&local_60);
  }
  if (sVar3 < 0x17) {
    pvVar8 = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_001e22f4;
  }
  else {
    uVar9 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar8 = operator_new(uVar9);
    local_60 = uVar9 | 1;
    sStack_58 = sVar3;
    local_50 = pvVar8;
  }
  memcpy(pvVar8,param_2,sVar3);
LAB_001e22f4:
  *(undefined1 *)((long)pvVar8 + sVar3) = 0;
  puVar4 = (undefined8 *)FUN_001feba0(plVar7,&local_78,&local_60);
  puVar2 = (undefined8 *)*puVar4;
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 001e2350 to 001e2357 has its CatchHandler @ 001e2538 */
    puVar2 = operator_new(0x48);
    pvVar8 = local_50;
    sVar3 = sStack_58;
    uVar9 = local_60;
    sStack_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    puVar2[6] = pvVar8;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[5] = sVar3;
    puVar2[4] = uVar9;
    puVar2[2] = local_78;
    *puVar4 = puVar2;
    if (*(long *)*plVar7 == 0) {
      puVar4 = puVar2;
    }
    else {
      *plVar7 = *(long *)*plVar7;
      puVar4 = (undefined8 *)*puVar4;
    }
    FUN_001feccc(plVar7[1],puVar4);
    plVar7[2] = plVar7[2] + 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar2 + 7;
}


