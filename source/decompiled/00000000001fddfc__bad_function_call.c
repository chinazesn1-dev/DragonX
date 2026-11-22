// Recovered from libkentos.so by Ghidra 12.2
// address: 001fddfc
// size: 36
// name: ~bad_function_call
// namespace: std::__ndk1::bad_function_call
// signature: undefined __thiscall ~bad_function_call(bad_function_call * this)
// generated: 2026-11-22 21:47:11


/* std::__ndk1::bad_function_call::~bad_function_call() */

void __thiscall std::__ndk1::bad_function_call::~bad_function_call(bad_function_call *this)

{
  bad_alloc::~bad_alloc((bad_alloc *)this);
  operator_delete(this);
  return;
}


