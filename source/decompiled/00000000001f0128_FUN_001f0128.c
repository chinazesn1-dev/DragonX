// Recovered from libkentos.so by Ghidra 12.2
// address: 001f0128
// size: 340
// name: FUN_001f0128
// namespace: Global
// signature: undefined FUN_001f0128(void)
// generated: 2026-11-22 21:46:51


void FUN_001f0128(ulong *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  logic_error *this;
  undefined2 *puVar3;
  undefined2 *puVar2;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = (long)param_3 - (long)param_2 >> 1;
  if (0x7fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  if (uVar9 < 0xb) {
    pbVar8 = (byte *)((long)param_1 + 2);
    *(byte *)param_1 = (byte)((long)param_3 - (long)param_2) & 0xfe;
  }
  else {
    if ((long)(uVar9 + 8) < 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001f0248 to 001f0253 has its CatchHandler @ 001f027c */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
    uVar10 = uVar9 + 8 & 0xfffffffffffffff8;
    pbVar8 = operator_new(uVar10 << 1);
    param_1[1] = uVar9;
    param_1[2] = (ulong)pbVar8;
    *param_1 = uVar10 | 1;
  }
  if (param_2 == param_3) goto LAB_001f021c;
  uVar9 = ((ulong)((long)param_3 + (-2 - (long)param_2)) >> 1) + 1;
  if (uVar9 < 0x10) {
    puVar2 = param_2;
    pbVar4 = pbVar8;
LAB_001f0208:
    do {
      puVar3 = puVar2 + 1;
      *(undefined2 *)pbVar4 = *puVar2;
      puVar2 = puVar3;
      pbVar4 = pbVar4 + 2;
    } while (param_3 != puVar3);
  }
  else {
    uVar5 = uVar9 & 0xfffffffffffffff0;
    pbVar6 = pbVar8 + 0x10;
    puVar2 = param_2 + uVar5;
    pbVar4 = pbVar8 + uVar5 * 2;
    puVar7 = (undefined8 *)(param_2 + 8);
    uVar10 = uVar5;
    do {
      puVar1 = puVar7 + -1;
      uVar11 = puVar7[-2];
      uVar13 = puVar7[1];
      uVar12 = *puVar7;
      uVar10 = uVar10 - 0x10;
      puVar7 = puVar7 + 4;
      *(undefined8 *)(pbVar6 + -8) = *puVar1;
      *(undefined8 *)(pbVar6 + -0x10) = uVar11;
      *(undefined8 *)(pbVar6 + 8) = uVar13;
      *(undefined8 *)pbVar6 = uVar12;
      pbVar6 = pbVar6 + 0x20;
    } while (uVar10 != 0);
    if (uVar9 != uVar5) goto LAB_001f0208;
  }
  pbVar8 = pbVar8 + uVar9 * 2;
LAB_001f021c:
  pbVar8[0] = 0;
  pbVar8[1] = 0;
  return;
}


