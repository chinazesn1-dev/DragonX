// Recovered from libkentos.so by Ghidra 12.2
// address: 001f4d98
// size: 532
// name: FUN_001f4d98
// namespace: Global
// signature: undefined FUN_001f4d98(void)
// generated: 2026-11-22 21:46:55


undefined8 FUN_001f4d98(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  bad_cast *this;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xf] != 0) {
    if ((long *)param_1[0x10] == (long *)0x0) {
      this = (bad_cast *)__cxa_allocate_exception(8);
      std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_00758fa8,PTR__bad_cast_00758bf0);
    }
    if ((*(uint *)((long)param_1 + 0x9c) >> 4 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x9c) >> 3 & 1) != 0) {
        local_50 = param_1[0x12];
        if (*(char *)((long)param_1 + 0xa2) == '\0') {
          iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
          lVar5 = param_1[10] - param_1[9];
          if (iVar3 < 1) {
            if (param_1[3] == param_1[4]) {
              bVar2 = false;
            }
            else {
              iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x40))
                                ((long *)param_1[0x10],&local_50,param_1[8],param_1[9],
                                 param_1[3] - param_1[2]);
              bVar2 = true;
              lVar5 = ((param_1[9] + lVar5) - (long)iVar3) - param_1[8];
            }
          }
          else {
            bVar2 = false;
            lVar5 = lVar5 + (param_1[4] - param_1[3]) * (long)iVar3;
          }
        }
        else {
          bVar2 = false;
          lVar5 = param_1[4] - param_1[3];
        }
        iVar3 = fseeko((FILE *)param_1[0xf],-lVar5,1);
        if (iVar3 != 0) goto LAB_001f4f28;
        if (bVar2) {
          param_1[0x11] = local_50;
        }
        *(undefined4 *)((long)param_1 + 0x9c) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[9] = param_1[8];
        param_1[10] = param_1[8];
      }
    }
    else {
      if (param_1[6] != param_1[5]) {
        uVar6 = 0xffffffff;
        iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
        if (iVar3 == -1) goto LAB_001f4f54;
      }
      do {
        iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x28))
                          ((long *)param_1[0x10],param_1 + 0x11,param_1[8],param_1[8] + param_1[0xc]
                           ,&local_50);
        __n = local_50 - param_1[8];
        sVar4 = fwrite((void *)param_1[8],1,__n,(FILE *)param_1[0xf]);
        if (sVar4 != __n) goto LAB_001f4f28;
      } while (iVar3 == 1);
      if ((iVar3 == 2) || (iVar3 = fflush((FILE *)param_1[0xf]), iVar3 != 0)) {
LAB_001f4f28:
        uVar6 = 0xffffffff;
        goto LAB_001f4f54;
      }
    }
  }
  uVar6 = 0;
LAB_001f4f54:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


