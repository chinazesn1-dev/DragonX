// Recovered from libkentos.so by Ghidra 12.2
// address: 001fcf8c
// size: 720
// name: FUN_001fcf8c
// namespace: Global
// signature: undefined FUN_001fcf8c(void)
// generated: 2026-11-22 21:47:10


undefined8 FUN_001fcf8c(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *local_b8;
  long *local_b0;
  long lStack_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long *local_70;
  long lStack_68;
  long local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
    local_98 = (char *)CONCAT71(local_98._1_7_,1);
    local_78 = (byte *)CONCAT44(local_78._4_4_,
                                (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >>
                                     3) + -1);
    plVar5 = *(long **)(param_1 + 0x80);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)__cxa_allocate_exception(8);
      *plVar5 = (long)(PTR_vtable_00758108 + 0x10);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar5,PTR_typeinfo_00758d20,PTR__bad_alloc_00758f40);
    }
    uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_78,&local_98);
    if ((uVar6 & 1) == 0) {
      FUN_001fe0f8(local_58,param_1 + 0x98);
      puVar8 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar2 = *puVar8;
      *puVar8 = local_58[0];
      uVar11 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = local_50;
      local_58[0] = uVar2;
      local_50 = uVar11;
      FUN_00204a08(&local_50);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar9 = lVar1 + -8;
  *(long *)(param_1 + 0x10) = lVar9;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  if ((*(long *)(param_1 + 8) != lVar9) &&
     (pbVar12 = *(byte **)(lVar1 + -0x10), pbVar12 != (byte *)0x0)) {
    bVar3 = *pbVar12;
    if (bVar3 - 1 < 2) {
      local_70 = (long *)0x0;
      lStack_68 = 0;
      local_60 = -0x8000000000000000;
      local_78 = pbVar12;
      if (bVar3 == 2) {
        lStack_68 = **(long **)(pbVar12 + 8);
      }
      else if (bVar3 == 1) {
        local_70 = (long *)**(long **)(pbVar12 + 8);
      }
      else if (bVar3 == 0) {
        local_60 = 1;
      }
      else {
        local_60 = 0;
      }
      while( true ) {
        local_98 = *(char **)(lVar9 + -8);
        local_90 = 0;
        local_88 = 0;
        local_80 = 0x8000000000000000;
        if (*local_98 == '\x02') {
          local_88 = *(undefined8 *)(*(long *)(local_98 + 8) + 8);
        }
        else if (*local_98 == '\x01') {
          local_90 = *(long *)(local_98 + 8) + 8;
        }
        else {
          local_80 = 1;
        }
        uVar6 = FUN_002055bc(&local_78,&local_98);
        if ((uVar6 & 1) != 0) goto LAB_001fd200;
        pcVar7 = (char *)FUN_001e5a80(&local_78);
        if (*pcVar7 == '\t') break;
        if (*local_78 == 2) {
          lStack_68 = lStack_68 + 0x10;
          lVar9 = *(long *)(param_1 + 0x10);
        }
        else if (*local_78 == 1) {
          plVar5 = (long *)local_70[1];
          if ((long *)local_70[1] == (long *)0x0) {
            while( true ) {
              plVar10 = (long *)local_70[2];
              if ((long *)*plVar10 == local_70) break;
              local_70 = (long *)local_70[2];
            }
          }
          else {
            do {
              plVar10 = plVar5;
              plVar5 = (long *)*plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
          }
          lVar9 = *(long *)(param_1 + 0x10);
          local_70 = plVar10;
        }
        else {
          local_60 = local_60 + 1;
          lVar9 = *(long *)(param_1 + 0x10);
        }
      }
      local_b8 = local_78;
      lStack_a8 = lStack_68;
      local_b0 = local_70;
      local_a0 = local_60;
      FUN_001fe1b0(&local_98,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),&local_b8);
    }
  }
LAB_001fd200:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


