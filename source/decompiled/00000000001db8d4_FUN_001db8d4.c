// Recovered from libkentos.so by Ghidra 12.2
// address: 001db8d4
// size: 960
// name: FUN_001db8d4
// namespace: Global
// signature: undefined FUN_001db8d4(void)
// generated: 2026-11-22 21:43:46


void FUN_001db8d4(undefined8 *param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pbVar2 = (byte *)FUN_0047880c(&DAT_00820b50);
  if ((*pbVar2 & 1) == 0) {
    puVar4 = (undefined8 *)FUN_0047880c(&DAT_00820b30);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    __cxa_thread_atexit(&LAB_001dbcc4,puVar4,&PTR_LOOP_00759000);
    puVar10 = (undefined1 *)FUN_0047880c(&DAT_00820b50);
    *puVar10 = 1;
  }
  lVar3 = std::__ndk1::chrono::steady_clock::now();
  puVar4 = (undefined8 *)FUN_0047880c(&DAT_00820b30);
  pvVar12 = (void *)*puVar4;
  pvVar6 = (void *)puVar4[1];
  if ((pvVar12 == pvVar6) ||
     (plVar5 = (long *)FUN_0047880c(&DAT_00820b70), 0x1d < lVar3 / 1000000 - *plVar5)) {
    lVar7 = FUN_0047880c(&DAT_00820b30);
    *(void **)(lVar7 + 8) = pvVar12;
    lVar7 = FUN_001db70c();
    if (lVar7 == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      plVar5 = (long *)FUN_0047880c(&DAT_00820b30);
      pvVar12 = (void *)*plVar5;
      uVar11 = plVar5[1] - (long)pvVar12;
      if (uVar11 == 0) goto LAB_001dbbf4;
      uVar14 = (long)uVar11 >> 3;
      if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 001dbc74 to 001dbc7b has its CatchHandler @ 001dbca0 */
                    /* WARNING: Subroutine does not return */
        FUN_001d9034(param_1);
      }
                    /* try { // try from 001dbb4c to 001dbb53 has its CatchHandler @ 001dbca0 */
      pvVar6 = operator_new(uVar11);
    }
    else if (*(long *)(lVar7 + 0x30) == 0) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      plVar5 = (long *)FUN_0047880c(&DAT_00820b30);
      pvVar12 = (void *)*plVar5;
      uVar11 = plVar5[1] - (long)pvVar12;
      if (uVar11 == 0) goto LAB_001dbbf4;
      uVar14 = (long)uVar11 >> 3;
      if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 001dbc84 to 001dbc8b has its CatchHandler @ 001dbc98 */
                    /* WARNING: Subroutine does not return */
        FUN_001d9034(param_1);
      }
                    /* try { // try from 001dbb84 to 001dbb8b has its CatchHandler @ 001dbc98 */
      pvVar6 = operator_new(uVar11);
    }
    else {
      puVar4 = (undefined8 *)(*(code *)(DAT_0082f380 + 0xade5abc))();
      uVar17 = puVar4[1];
      uVar8 = *puVar4;
      puVar4 = (undefined8 *)FUN_0047880c(&DAT_00820b90);
      puVar4[1] = uVar17;
      *puVar4 = uVar8;
      iVar15 = *(int *)(puVar4 + 1);
      if (iVar15 < 1) {
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        plVar5 = (long *)FUN_0047880c(&DAT_00820b30);
        pvVar12 = (void *)*plVar5;
        uVar11 = plVar5[1] - (long)pvVar12;
        if (uVar11 == 0) goto LAB_001dbbf4;
        uVar14 = (long)uVar11 >> 3;
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 001dbc8c to 001dbc93 has its CatchHandler @ 001dbc94 */
                    /* WARNING: Subroutine does not return */
          FUN_001d9034(param_1);
        }
                    /* try { // try from 001dbbbc to 001dbbc3 has its CatchHandler @ 001dbc94 */
        pvVar6 = operator_new(uVar11);
      }
      else {
        uVar8 = FUN_0047880c(&DAT_00820b30);
        FUN_001dbcdc(uVar8,(long)iVar15);
        lVar7 = FUN_0047880c(&DAT_00820b90);
        iVar15 = *(int *)(lVar7 + 8);
        if (0 < iVar15) {
          lVar13 = 0;
          lVar7 = 0;
          do {
            plVar5 = (long *)FUN_0047880c(&DAT_00820b90);
            lVar16 = *(long *)(lVar13 + *plVar5);
            if (lVar16 != 0) {
              local_70 = lVar16;
              lVar9 = FUN_0047880c(&DAT_00820b30);
              if (*(long **)(lVar9 + 8) < *(long **)(lVar9 + 0x10)) {
                **(long **)(lVar9 + 8) = lVar16;
                lVar16 = FUN_0047880c(&DAT_00820b30);
                *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 8;
              }
              else {
                uVar8 = FUN_0047880c(&DAT_00820b30);
                FUN_002051d0(uVar8,&local_70);
                lVar16 = FUN_0047880c(&DAT_00820b90);
                iVar15 = *(int *)(lVar16 + 8);
              }
            }
            lVar7 = lVar7 + 1;
            lVar13 = lVar13 + 8;
          } while (lVar7 < iVar15);
        }
        plVar5 = (long *)FUN_0047880c(&DAT_00820b70);
        *plVar5 = lVar3 / 1000000;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        plVar5 = (long *)FUN_0047880c(&DAT_00820b30);
        pvVar12 = (void *)*plVar5;
        uVar11 = plVar5[1] - (long)pvVar12;
        if (uVar11 == 0) goto LAB_001dbbf4;
        uVar14 = (long)uVar11 >> 3;
        if (uVar14 >> 0x3d != 0) {
                    /* try { // try from 001dbc7c to 001dbc83 has its CatchHandler @ 001dbc9c */
                    /* WARNING: Subroutine does not return */
          FUN_001d9034(param_1);
        }
                    /* try { // try from 001dbb14 to 001dbb1b has its CatchHandler @ 001dbc9c */
        pvVar6 = operator_new(uVar11);
      }
    }
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + uVar14 * 8);
    if ((long)uVar11 < 1) goto LAB_001dbbf4;
    memcpy(pvVar6,pvVar12,uVar11);
    lVar3 = (long)pvVar6 + uVar11;
  }
  else {
    uVar11 = (long)pvVar6 - (long)pvVar12;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar11 == 0) goto LAB_001dbbf4;
    if ((ulong)((long)uVar11 >> 3) >> 0x3d != 0) {
                    /* try { // try from 001dbc6c to 001dbc73 has its CatchHandler @ 001dbca4 */
                    /* WARNING: Subroutine does not return */
      FUN_001d9034(param_1);
    }
                    /* try { // try from 001db988 to 001db98f has its CatchHandler @ 001dbca4 */
    pvVar6 = operator_new(uVar11);
    *param_1 = pvVar6;
    param_1[1] = pvVar6;
    param_1[2] = (void *)((long)pvVar6 + ((long)uVar11 >> 3) * 8);
    if ((long)uVar11 < 1) goto LAB_001dbbf4;
    memcpy(pvVar6,pvVar12,uVar11);
    lVar3 = (long)pvVar6 + uVar11;
  }
  param_1[1] = lVar3;
LAB_001dbbf4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


