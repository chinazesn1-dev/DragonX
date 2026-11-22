// Recovered from libkentos.so by Ghidra 12.2
// address: 001fe1b0
// size: 924
// name: FUN_001fe1b0
// namespace: Global
// signature: undefined FUN_001fe1b0(void)
// generated: 2026-11-22 21:47:12


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fe1b0(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  void *pvVar11;
  undefined8 uVar12;
  size_t __n;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong local_88;
  size_t local_80;
  void *local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined5 uStack_67;
  undefined2 uStack_62;
  char cStack_60;
  undefined5 uStack_5f;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((byte *)*param_3 != param_2) {
    uVar12 = __cxa_allocate_exception(0x20);
    local_70 = 0;
    uStack_6f = 0;
    cStack_68 = '\0';
    uStack_67 = 0;
    uStack_62 = 0;
    cStack_60 = 0;
    uStack_5f = 0;
    uStack_5a = 0;
    uStack_59 = 0;
                    /* try { // try from 001fe36c to 001fe373 has its CatchHandler @ 001fe59c */
    pcVar18 = operator_new(0x30);
    uVar7 = s_iterator_does_not_fit_current_va_00485a64._24_8_;
    uVar6 = s_iterator_does_not_fit_current_va_00485a64._16_8_;
    uVar5 = s_iterator_does_not_fit_current_va_00485a64._8_8_;
    uVar4 = s_iterator_does_not_fit_current_va_00485a64._0_8_;
    uVar16 = _UNK_00479ca8;
    uVar9 = _DAT_00479ca0;
    cStack_60 = (char)pcVar18;
    uStack_5f = (undefined5)((ulong)pcVar18 >> 8);
    uStack_5a = (undefined1)((ulong)pcVar18 >> 0x30);
    uStack_59 = (undefined1)((ulong)pcVar18 >> 0x38);
    pcVar18[0x23] = '\0';
    pcVar18[0x22] = 'e';
    pcVar18[0x20] = 'l';
    pcVar18[0x21] = 'u';
    cStack_68 = (char)uVar16;
    uStack_67 = (undefined5)((ulong)uVar16 >> 8);
    uStack_62 = (undefined2)((ulong)uVar16 >> 0x30);
    local_70 = (undefined1)uVar9;
    uStack_6f = (undefined7)((ulong)uVar9 >> 8);
    *(undefined8 *)(pcVar18 + 8) = uVar5;
    *(undefined8 *)pcVar18 = uVar4;
    *(undefined8 *)(pcVar18 + 0x18) = uVar7;
    *(undefined8 *)(pcVar18 + 0x10) = uVar6;
                    /* try { // try from 001fe3ac to 001fe3d7 has its CatchHandler @ 001fe5a4 */
    FUN_001ff13c(uVar12,0xca,&local_70);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar12,&PTR_PTR_00743360,&LAB_001fdaa4);
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  bVar2 = *param_2;
  if (bVar2 != 2) {
    if (bVar2 == 1) {
      lVar8 = *(long *)(param_2 + 8);
      param_1[1] = lVar8 + 8;
      uVar9 = FUN_001ff6ec(lVar8,param_3[1]);
      param_1[1] = uVar9;
      goto LAB_001fe32c;
    }
    uVar14 = (uint)bVar2;
    param_1[3] = 1;
    if (5 < uVar14 - 3) {
      uVar9 = __cxa_allocate_exception(0x20);
      if ((ulong)(long)(char)*param_2 < 10) {
        pcVar18 = (&PTR_s_null_00676cda_0x18_007434f0)[(char)*param_2];
      }
      else {
        pcVar18 = "number";
      }
      local_88 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      __n = strlen(pcVar18);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 001fe498 to 001fe4cf has its CatchHandler @ 001fe568 */
                    /* WARNING: Subroutine does not return */
        FUN_001d91e4(&local_88);
      }
      if (__n < 0x17) {
        pvVar11 = (void *)((ulong)&local_88 | 1);
        local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
        if (__n == 0) goto LAB_001fe4f0;
      }
      else {
        uVar20 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar11 = operator_new(uVar20);
        local_88 = uVar20 | 1;
        local_80 = __n;
        local_78 = pvVar11;
      }
      memcpy(pvVar11,pcVar18,__n);
LAB_001fe4f0:
      *(undefined1 *)((long)pvVar11 + __n) = 0;
                    /* try { // try from 001fe4f4 to 001fe50b has its CatchHandler @ 001fe554 */
      puVar13 = (undefined8 *)FUN_0020480c(&local_88,0,"cannot use erase() with ",0x18);
      uVar16 = puVar13[2];
      cStack_60 = (char)uVar16;
      uStack_5f = (undefined5)((ulong)uVar16 >> 8);
      uStack_5a = (undefined1)((ulong)uVar16 >> 0x30);
      uStack_59 = (undefined1)((ulong)uVar16 >> 0x38);
      uVar16 = puVar13[1];
      cStack_68 = (char)uVar16;
      uStack_67 = (undefined5)((ulong)uVar16 >> 8);
      uStack_62 = (undefined2)((ulong)uVar16 >> 0x30);
      local_70 = (undefined1)*puVar13;
      uStack_6f = (undefined7)((ulong)*puVar13 >> 8);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
                    /* try { // try from 001fe528 to 001fe553 has its CatchHandler @ 001fe56c */
      FUN_001ff2c8(uVar9,0x133,&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar9,&PTR_PTR_00743380,&LAB_001fdaa4);
    }
    if (param_3[3] != 0) {
      uVar9 = __cxa_allocate_exception(0x20);
      uStack_59 = 0;
      local_70 = 0x2a;
      uStack_67._0_1_ = s_iterator_out_of_range_00485a88[8];
      uStack_67._1_1_ = s_iterator_out_of_range_00485a88[9];
      uStack_67._2_1_ = s_iterator_out_of_range_00485a88[10];
      uStack_67._3_1_ = s_iterator_out_of_range_00485a88[0xb];
      uStack_67._4_1_ = s_iterator_out_of_range_00485a88[0xc];
      uStack_6f = s_iterator_out_of_range_00485a88._0_7_;
      cStack_68 = s_iterator_out_of_range_00485a88[7];
      uStack_62 = s_iterator_out_of_range_00485a88._13_2_;
      cStack_60 = s_iterator_out_of_range_00485a88[0xf];
      uStack_5f._0_1_ = s_iterator_out_of_range_00485a88[0x10];
      uStack_5f._1_1_ = s_iterator_out_of_range_00485a88[0x11];
      uStack_5f._2_1_ = s_iterator_out_of_range_00485a88[0x12];
      uStack_5f._3_1_ = s_iterator_out_of_range_00485a88[0x13];
      uStack_5f._4_1_ = s_iterator_out_of_range_00485a88[0x14];
      uStack_5a = 0;
                    /* try { // try from 001fe444 to 001fe46f has its CatchHandler @ 001fe598 */
      FUN_001ff13c(uVar9,0xcd,&local_70);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar9,&PTR_PTR_00743360,&LAB_001fdaa4);
    }
    if (uVar14 == 8) {
      pbVar10 = *(byte **)(param_2 + 8);
      pvVar11 = *(void **)pbVar10;
      if (pvVar11 != (void *)0x0) {
        *(void **)(pbVar10 + 8) = pvVar11;
LAB_001fe318:
        operator_delete(pvVar11);
        pbVar10 = *(byte **)(param_2 + 8);
      }
LAB_001fe320:
      operator_delete(pbVar10);
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
    }
    else if (uVar14 == 3) {
      pbVar10 = *(byte **)(param_2 + 8);
      if ((*pbVar10 & 1) != 0) {
        pvVar11 = *(void **)(pbVar10 + 0x10);
        goto LAB_001fe318;
      }
      goto LAB_001fe320;
    }
    *param_2 = 0;
    goto LAB_001fe32c;
  }
  lVar8 = *(long *)(param_2 + 8);
  puVar15 = *(undefined1 **)(lVar8 + 8);
  param_1[2] = puVar15;
  puVar19 = (undefined1 *)param_3[2];
  puVar17 = puVar19 + 0x10;
  if (puVar17 == puVar15) {
    puVar21 = puVar19;
LAB_001fe2e4:
    do {
      puVar15 = puVar17 + -0x10;
      FUN_00204a08(puVar17 + -8,*puVar15);
      puVar17 = puVar15;
    } while (puVar21 != puVar15);
  }
  else {
    puVar17 = puVar19;
    do {
      puVar21 = puVar17 + 0x10;
      uVar1 = *puVar21;
      uVar16 = *(undefined8 *)(puVar17 + 0x18);
      *puVar21 = 0;
      local_70 = *puVar17;
      *(undefined8 *)(puVar17 + 0x18) = 0;
      *puVar17 = uVar1;
      uVar9 = *(undefined8 *)(puVar17 + 8);
      *(undefined8 *)(puVar17 + 8) = uVar16;
      cStack_68 = (char)uVar9;
      uStack_67 = (undefined5)((ulong)uVar9 >> 8);
      uStack_62 = (undefined2)((ulong)uVar9 >> 0x30);
      FUN_00204a08(&cStack_68);
      puVar17 = puVar21;
    } while (puVar15 + -0x10 != puVar21);
    puVar17 = *(undefined1 **)(lVar8 + 8);
    if (*(undefined1 **)(lVar8 + 8) != puVar21) goto LAB_001fe2e4;
  }
  *(undefined1 **)(lVar8 + 8) = puVar21;
  param_1[2] = puVar19;
LAB_001fe32c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


