// Recovered from libkentos.so by Ghidra 12.2
// address: 001f6974
// size: 428
// name: FUN_001f6974
// namespace: Global
// signature: undefined FUN_001f6974(void)
// generated: 2026-11-22 21:46:58


void FUN_001f6974(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  logic_error *this;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar10 = param_1[1] - *param_1 >> 5;
  uVar11 = lVar10 + 1;
  if (uVar11 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001d9034(param_1);
  }
  lVar5 = param_1[2] - *param_1;
  if ((ulong)(lVar5 >> 5) < 0x3ffffffffffffff) {
    uVar6 = lVar5 >> 4;
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_001f6a28;
    }
    if (uVar11 >> 0x3b != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001f69e8 to 001f69f3 has its CatchHandler @ 001f6b20 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
  }
  else {
    uVar11 = 0x7ffffffffffffff;
  }
  pvVar3 = operator_new(uVar11 << 5);
LAB_001f6a28:
  puVar7 = (undefined8 *)((long)pvVar3 + lVar10 * 0x20);
  puVar2 = puVar7 + 4;
  puVar7[2] = param_2[2];
  uVar12 = *param_2;
  puVar7[1] = param_2[1];
  *puVar7 = uVar12;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(puVar7 + 3) = *param_3;
  pbVar4 = (byte *)*param_1;
  pbVar8 = (byte *)param_1[1];
  if (pbVar8 == pbVar4) {
    pbVar8 = pbVar4;
  }
  else {
    pbVar9 = pbVar8 + (-0x20 - (long)pbVar4);
    puVar7 = puVar7 + -1;
    do {
      puVar7[-1] = *(undefined8 *)(pbVar8 + -0x10);
      uVar12 = *(undefined8 *)(pbVar8 + -0x20);
      puVar7[-2] = *(undefined8 *)(pbVar8 + -0x18);
      puVar7[-3] = uVar12;
      pbVar1 = pbVar8 + -8;
      pbVar8[-0x18] = 0;
      pbVar8[-0x17] = 0;
      pbVar8[-0x16] = 0;
      pbVar8[-0x15] = 0;
      pbVar8[-0x14] = 0;
      pbVar8[-0x13] = 0;
      pbVar8[-0x12] = 0;
      pbVar8[-0x11] = 0;
      pbVar8[-0x10] = 0;
      pbVar8[-0xf] = 0;
      pbVar8[-0xe] = 0;
      pbVar8[-0xd] = 0;
      pbVar8[-0xc] = 0;
      pbVar8[-0xb] = 0;
      pbVar8[-10] = 0;
      pbVar8[-9] = 0;
      pbVar8[-0x20] = 0;
      pbVar8[-0x1f] = 0;
      pbVar8[-0x1e] = 0;
      pbVar8[-0x1d] = 0;
      pbVar8[-0x1c] = 0;
      pbVar8[-0x1b] = 0;
      pbVar8[-0x1a] = 0;
      pbVar8[-0x19] = 0;
      pbVar8 = pbVar8 + -0x20;
      *(undefined4 *)puVar7 = *(undefined4 *)pbVar1;
      puVar7 = puVar7 + -4;
    } while (pbVar4 != pbVar8);
    pbVar4 = (byte *)param_1[1];
    puVar7 = (undefined8 *)((long)pvVar3 + ((lVar10 + -1) - ((ulong)pbVar9 >> 5)) * 0x20);
    pbVar8 = (byte *)*param_1;
  }
  *param_1 = (long)puVar7;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)((long)pvVar3 + uVar11 * 0x20);
  if (pbVar4 != pbVar8) {
    do {
      pbVar9 = pbVar4 + -0x20;
      if ((*pbVar9 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
      pbVar4 = pbVar9;
    } while (pbVar8 != pbVar9);
  }
  if (pbVar8 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar8);
  return;
}


