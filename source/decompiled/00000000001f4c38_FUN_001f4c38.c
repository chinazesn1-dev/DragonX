// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4c38
// size: 236
// name: FUN_001f4c38
// namespace: Global
// signature: undefined FUN_001f4c38(void)
// generated: 2026-11-22 21:46:55


undefined1  [16] FUN_001f4c38(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bad_cast *this;
  __off_t _Var3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((long *)param_1[0x10] == (long *)0x0) {
    this = (bad_cast *)__cxa_allocate_exception(8);
    std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_00758fa8,PTR__bad_cast_00758bf0);
  }
  iVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if ((param_1[0xf] != 0) && ((param_2 == 0 || (0 < iVar1)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    _Var3 = -1;
    if (iVar2 != 0) {
      lVar4 = 0;
      goto LAB_001f4ccc;
    }
    lVar4 = 0;
    if (2 < param_3) goto LAB_001f4ccc;
    _Var3 = iVar1 * param_2;
    if (iVar1 < 1) {
      _Var3 = 0;
    }
    iVar1 = fseeko((FILE *)param_1[0xf],_Var3,param_3);
    if (iVar1 == 0) {
      _Var3 = ftello((FILE *)param_1[0xf]);
      lVar4 = param_1[0x11];
      goto LAB_001f4ccc;
    }
  }
  lVar4 = 0;
  _Var3 = -1;
LAB_001f4ccc:
  auVar5._8_8_ = _Var3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}


