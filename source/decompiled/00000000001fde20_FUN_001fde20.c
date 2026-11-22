// Recovered from libkentos.so by Ghidra 12.2
// address: 001fde20
// size: 384
// name: FUN_001fde20
// namespace: Global
// signature: undefined FUN_001fde20(void)
// generated: 2026-11-22 21:47:11


void FUN_001fde20(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  logic_error *this;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar9;
  undefined1 *puVar8;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = param_1[1] - *param_1 >> 4;
  uVar12 = lVar11 + 1;
  if (uVar12 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001d9034(param_1);
  }
  lVar6 = param_1[2] - *param_1;
  if ((ulong)(lVar6 >> 4) < 0x7ffffffffffffff) {
    uVar7 = lVar6 >> 3;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_001fdecc;
    }
    if (uVar12 >> 0x3c != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001fde8c to 001fde97 has its CatchHandler @ 001fdfa0 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
  }
  else {
    uVar12 = 0xfffffffffffffff;
  }
  pvVar5 = operator_new(uVar12 << 4);
LAB_001fdecc:
  puVar1 = (undefined1 *)((long)pvVar5 + lVar11 * 0x10);
  *puVar1 = *param_2;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  puVar3 = (undefined1 *)*param_1;
  puVar4 = (undefined1 *)param_1[1];
  pvVar2 = (void *)((long)pvVar5 + uVar12 * 0x10);
  if (puVar4 == puVar3) {
    *param_1 = (long)puVar1;
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = (long)pvVar2;
  }
  else {
    lVar6 = -0x10 - (long)puVar3;
    puVar9 = puVar4;
    puVar10 = (undefined8 *)(puVar1 + -8);
    do {
      puVar8 = puVar9 + -0x10;
      *(undefined1 *)(puVar10 + -1) = *puVar8;
      *puVar10 = *(undefined8 *)(puVar9 + -8);
      *puVar8 = 0;
      *(undefined8 *)(puVar9 + -8) = 0;
      puVar9 = puVar8;
      puVar10 = puVar10 + -2;
    } while (puVar3 != puVar8);
    puVar3 = (undefined1 *)*param_1;
    *param_1 = (long)((long)pvVar5 + ((lVar11 + -1) - ((ulong)(puVar4 + lVar6) >> 4)) * 0x10);
    param_1[1] = (long)(puVar1 + 0x10);
    param_1[2] = (long)pvVar2;
    for (puVar9 = (undefined1 *)param_1[1]; puVar9 != puVar3; puVar9 = puVar9 + -0x10) {
      FUN_00204a08(puVar9 + -8,puVar9[-0x10]);
    }
  }
  if (puVar3 == (undefined1 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}


