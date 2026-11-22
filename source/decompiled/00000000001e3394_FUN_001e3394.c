// Recovered from libkentos.so by Ghidra 12.2
// address: 001e3394
// size: 348
// name: FUN_001e3394
// namespace: Global
// signature: undefined FUN_001e3394(void)
// generated: 2026-11-22 21:45:52


void FUN_001e3394(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar7 = *(long **)(*(long *)(DAT_0082f388 + 0x18) + 8);
  local_50 = (long *)0x0;
  uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_50,0x10006);
  if ((int)uVar3 != -1) {
    iVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_50,0);
    if (iVar2 == 0) {
      lVar4 = (**(code **)(*local_50 + 0xf8))
                        (local_50,*(undefined8 *)(*(long *)(DAT_0082f388 + 0x18) + 0x18));
      if (lVar4 == 0) {
        uVar3 = 0xfffffffd;
      }
      else {
        lVar4 = (**(code **)(*local_50 + 0x108))
                          (local_50,lVar4,"AndroidThunkJava_LaunchURL","(Ljava/lang/String;)V");
        if (lVar4 == 0) {
          uVar3 = 0xfffffffc;
        }
        else {
          uVar5 = (**(code **)(*local_50 + 0x538))(local_50,param_1);
          FUN_001e34f0(local_50,*(undefined8 *)(*(long *)(DAT_0082f388 + 0x18) + 0x18),lVar4,uVar5);
          iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          uVar6 = 0;
          if (iVar2 != 0) {
            uVar6 = 0xfffffffb;
          }
          uVar3 = (ulong)uVar6;
        }
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


