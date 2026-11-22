// Recovered from libkentos.so by Ghidra 12.2
// address: 001f5cb0
// size: 264
// name: FUN_001f5cb0
// namespace: Global
// signature: undefined FUN_001f5cb0(void)
// generated: 2026-11-22 21:46:56


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f5cb0(char *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  long local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = _UNK_00479a98;
  local_60 = _DAT_00479a90;
  FUN_00222794(0,&local_60);
  iVar2 = DAT_0082f904;
  if (DAT_0082f904 != 0) {
    lVar5 = 0;
    do {
      iVar3 = strcmp(*(char **)((long)&PTR_s_Aimbot_0048304b_7_00742740 + lVar5),param_1);
      if (iVar3 == 0) {
        if (iVar2 == 2) {
          puVar4 = (undefined8 *)((long)&PTR_s_Aimbot_0048304b_7_00742750 + lVar5);
        }
        else if (iVar2 == 1) {
          puVar4 = (undefined8 *)((long)&PTR_DAT_00742748 + lVar5);
        }
        else {
          puVar4 = (undefined8 *)((long)&PTR_DAT_00742758 + lVar5);
        }
        param_1 = (char *)*puVar4;
        break;
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != 0xbc0);
  }
  FUN_00256448(param_1,0);
  FUN_00222904(1);
  fVar6 = (float)FUN_00233fa4();
  if (0.0 < 20.0 - fVar6) {
    local_60 = (ulong)(uint)(20.0 - fVar6) << 0x20;
    FUN_00257bc0(&local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


