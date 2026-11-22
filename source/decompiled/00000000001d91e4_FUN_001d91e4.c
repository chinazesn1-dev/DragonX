// Recovered from libkentos.so by Ghidra 12.2
// address: 001d91e4
// size: 76
// name: FUN_001d91e4
// namespace: Global
// signature: noreturn undefined FUN_001d91e4(void)
// generated: 2026-11-22 21:43:19


void FUN_001d91e4(void)

{
  logic_error *this;
  
  this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001d91fc to 001d9207 has its CatchHandler @ 001d9230 */
  std::logic_error::logic_error(this,"basic_string");
  *(undefined **)this = PTR_vtable_00758568 + 0x10;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_00758ce8,PTR__invalid_argument_00758ae0);
}


