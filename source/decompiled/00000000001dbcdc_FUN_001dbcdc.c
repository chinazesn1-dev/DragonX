// Recovered from libkentos.so by Ghidra 12.2
// address: 001dbcdc
// size: 232
// name: FUN_001dbcdc
// namespace: Global
// signature: undefined FUN_001dbcdc(void)
// generated: 2026-11-22 21:43:46


void FUN_001dbcdc(undefined8 *param_1,ulong param_2)

{
  void *__dest;
  logic_error *this;
  void *__src;
  size_t __n;
  
  __src = (void *)*param_1;
  if ((ulong)(param_1[2] - (long)__src >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001dbd90 to 001dbd9b has its CatchHandler @ 001dbdc4 */
      std::logic_error::logic_error
                (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
    }
    __n = param_1[1] - (long)__src;
    __dest = operator_new(param_2 * 8);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = (long)__dest + __n;
    param_1[2] = (void *)((long)__dest + param_2 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


