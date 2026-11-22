// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4080
// size: 76
// name: FUN_001f4080
// namespace: Global
// signature: noreturn undefined FUN_001f4080(void)
// generated: 2026-11-22 21:46:55


void FUN_001f4080(void)

{
  logic_error *this;
  
  this = (logic_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001f4098 to 001f40a3 has its CatchHandler @ 001f40cc */
  std::logic_error::logic_error(this,"basic_string");
  *(undefined **)this = PTR_vtable_00758f90 + 0x10;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_00758220,PTR__invalid_argument_00758120);
}


