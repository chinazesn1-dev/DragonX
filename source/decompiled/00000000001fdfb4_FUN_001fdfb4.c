// Recovered from libkentos.so by Ghidra 12.2
// address: 001fdfb4
// size: 304
// name: FUN_001fdfb4
// namespace: Global
// signature: undefined FUN_001fdfb4(void)
// generated: 2026-11-22 21:47:11


void FUN_001fdfb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  logic_error *this;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  uVar3 = ((long)__n >> 3) + 1;
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001d9034(param_1);
  }
  if ((ulong)(param_1[2] - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar2 = param_1[2] - (long)__src >> 2;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_001fe06c;
    }
    if (uVar3 >> 0x3d != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001fe028 to 001fe033 has its CatchHandler @ 001fe0e4 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
  }
  else {
    uVar3 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 3);
LAB_001fe06c:
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = puVar1 + 1;
  param_1[2] = (void *)((long)__dest + uVar3 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


