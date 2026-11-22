// Recovered from libkentos.so by Ghidra 12.2
// address: 001fd78c
// size: 384
// name: FUN_001fd78c
// namespace: Global
// signature: undefined FUN_001fd78c(void)
// generated: 2026-11-22 21:47:10


undefined8 FUN_001fd78c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [4];
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*plVar6 == 0) {
    *(long **)(param_1 + 0x10) = plVar6;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  }
  else {
    local_40[0] = 3;
    local_3c = (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1;
    plVar6 = *(long **)(param_1 + 0x80);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)__cxa_allocate_exception(8);
      *plVar6 = (long)(PTR_vtable_00758108 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar6,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
    }
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_3c,local_40);
    if ((uVar3 & 1) == 0) {
      FUN_001fe0f8(local_50,param_1 + 0x98);
      puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = *puVar4;
      *puVar4 = local_50[0];
      uVar7 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = local_48;
      local_50[0] = uVar1;
      local_48 = uVar7;
      FUN_00204a08(&local_48);
      lVar9 = *(long *)(param_1 + 0x10);
      lVar8 = lVar9 + -8;
      *(long *)(param_1 + 0x10) = lVar8;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      if ((*(long *)(param_1 + 8) != lVar8) &&
         (pcVar5 = *(char **)(lVar9 + -0x10), *pcVar5 == '\x02')) {
        lVar9 = *(long *)(pcVar5 + 8);
        lVar8 = *(long *)(lVar9 + 8);
        puVar4 = (undefined1 *)(lVar8 + -0x10);
        FUN_00204a08(lVar8 + -8,*puVar4);
        *(undefined1 **)(lVar9 + 8) = puVar4;
      }
    }
    else {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


