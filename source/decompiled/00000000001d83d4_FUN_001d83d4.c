// Recovered from libkentos.so by Ghidra 12.2
// address: 001d83d4
// size: 244
// name: FUN_001d83d4
// namespace: Global
// signature: undefined FUN_001d83d4(void)
// generated: 2026-11-22 21:59:23


void FUN_001d83d4(void)

{
  long lVar1;
  int iVar2;
  undefined8 uStack_68;
  
  while (DAT_0082f040 == 0) {
    usleep(200000);
  }
  iVar2 = 0;
  if (DAT_0082f040 != 0) goto LAB_001d8468;
  do {
    do {
      if ((DAT_0082f048 != 0) && (iVar2 = iVar2 + 1, iVar2 % 10 == 0)) {
        uStack_68 = 0;
        FUN_00221000(DAT_0082f048,"glDrawElements",FUN_001d83d0,&uStack_68);
      }
      usleep(200000);
    } while (DAT_0082f040 == 0);
LAB_001d8468:
    lVar1 = DAT_0082f040;
    *(undefined1 *)(DAT_0082f040 + 0x8a3138) = 1;
    *(undefined1 *)(lVar1 + 0x8a3228) = 1;
    *(undefined1 *)(lVar1 + 0x8a3229) = 1;
    *(undefined1 *)(lVar1 + 0x8a322a) = 1;
    *(undefined1 *)(lVar1 + 0x8a322b) = 1;
  } while( true );
}


