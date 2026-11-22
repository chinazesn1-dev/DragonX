// Recovered from libkentos.so by Ghidra 12.2
// address: 001d8294
// size: 316
// name: FUN_001d8294
// namespace: Global
// signature: undefined FUN_001d8294(void)
// generated: 2026-11-22 21:56:50


undefined8 FUN_001d8294(void)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  pthread_t pStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_001d76c0("libBangjo.so");
  while ((uVar4 & 1) == 0) {
    sleep(1);
    uVar4 = FUN_001d76c0("libBangjo.so");
  }
  sleep(2);
  lVar5 = FUN_001d73ac("libBangjo.so");
  iVar2 = 0;
  if (lVar5 != 0) {
    uStack_30 = 0;
    DAT_0082f040 = lVar5;
    iVar2 = FUN_00220a4c(&uStack_30,
                         "Function ShadowTrackerExtra.STExtraPlayerController.RunOnNextFrameEvent" +
                         lVar5 + 0x35);
    if (iVar2 == 0) {
      DAT_0082f048 = uStack_30;
      uVar3 = FUN_00221000(uStack_30,"glDrawElements",&LAB_001d83d0,&DAT_0082f050);
      __android_log_print(4,"KENTOS","plthook glDrawElements rc=%d",uVar3);
    }
    else {
      uVar6 = FUN_002212f8();
      __android_log_print(4,"KENTOS","plthook_open rc=%d (%s)",iVar2,uVar6);
    }
    pthread_create(&pStack_38,(pthread_attr_t *)0x0,(__start_routine *)&LAB_001d83d4,(void *)0x0);
    iVar2 = pthread_detach(pStack_38);
  }
  if (*(long *)(lVar1 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return 0;
}


