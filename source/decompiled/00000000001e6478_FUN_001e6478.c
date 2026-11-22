// Recovered from libkentos.so by Ghidra 12.2
// address: 001e6478
// size: 812
// name: FUN_001e6478
// namespace: Global
// signature: undefined FUN_001e6478(void)
// generated: 2026-11-22 21:46:11


void FUN_001e6478(undefined1 param_1 [16],undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_0082f4a0 & 1) != 0) goto LAB_001e6744;
  local_50 = 0;
  FUN_002334b4(&DAT_0082f2c8,1,&local_50);
  local_50 = 0x42dc000042dc0000;
  FUN_0022af84(&local_50,0);
  FUN_0022afb0("LogoBtn",0,0x1af);
  uVar3 = FUN_0023353c();
  uVar6 = FUN_0023348c();
  local_50 = CONCAT44(param_2,uVar6);
  lVar4 = FUN_00226170();
  if (((DAT_0082f4a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0082f4a8), iVar2 != 0)) {
    DAT_0082fc80 = 0.0;
    DAT_0082fc84 = 0.0;
    __cxa_guard_release(&DAT_0082f4a8);
  }
  uVar5 = FUN_002333a4(0x20);
  if (((uVar5 & 1) == 0) || (uVar5 = FUN_00230b80(0), (uVar5 & 1) == 0)) {
LAB_001e656c:
    if (DAT_0082f4a1 == 1) goto LAB_001e657c;
  }
  else {
    if ((DAT_0082f4a1 & 1) == 0) {
      DAT_0082f4a1 = 1;
      DAT_0082fc80 = *(float *)(lVar4 + 0x120) - (float)DAT_0082f2c8;
      DAT_0082fc84 = *(float *)(lVar4 + 0x124) - DAT_0082f2c8._4_4_;
      goto LAB_001e656c;
    }
LAB_001e657c:
    uVar5 = FUN_00231618(0xbf800000,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_00230b80(0);
      if ((uVar5 & 1) == 0) {
        DAT_0082f4a1 = 0;
      }
    }
    else {
      DAT_0082f2c8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x120) >> 0x20) - DAT_0082fc84,
                              (float)*(undefined8 *)(lVar4 + 0x120) - DAT_0082fc80);
    }
  }
  fVar7 = (float)DAT_0082f2c8;
  if ((float)DAT_0082f2c8 < 0.0) {
    fVar7 = 0.0;
    DAT_0082f2c8 = DAT_0082f2c8 & 0xffffffff00000000;
  }
  fVar8 = DAT_0082f2c8._4_4_;
  if (DAT_0082f2c8._4_4_ < 0.0) {
    fVar8 = 0.0;
    DAT_0082f2c8 = DAT_0082f2c8 & 0xffffffff;
  }
  fVar10 = *(float *)(lVar4 + 8) + DAT_0047a188;
  if (fVar10 < fVar7) {
    DAT_0082f2c8 = CONCAT44(DAT_0082f2c8._4_4_,fVar10);
  }
  fVar7 = *(float *)(lVar4 + 0xc) + DAT_0047a188;
  if (fVar7 < fVar8) {
    DAT_0082f2c8 = CONCAT44(fVar7,(float)DAT_0082f2c8);
  }
  if (DAT_0082f368 != 0) {
    fVar7 = DAT_00820648 * DAT_0047a148;
    uVar5 = FUN_002333a4(0);
    if (((uVar5 & 1) != 0) || (DAT_0082f4a1 == 1)) {
      local_58 = CONCAT44((float)((ulong)local_50 >> 0x20) + 55.0,(float)local_50 + 55.0);
      FUN_00249470(DAT_0047a18c,uVar3,&local_58,0x14ffffff,0);
    }
    uVar9 = NEON_fmov(0x3f800000,4);
    local_58 = CONCAT44((float)((ulong)local_50 >> 0x20) + 110.0,(float)local_50 + 110.0);
    local_60 = 0;
    local_68 = uVar9;
    FUN_00249ca0(uVar3,DAT_0082f368,&local_50,&local_58,&local_60,&local_68,
                 (int)fVar7 << 0x18 | 0xffffff);
    fVar8 = (float)uVar9;
  }
  local_58 = 0;
  FUN_00233e2c(&local_58);
  local_58 = 0x42dc000042dc0000;
  uVar5 = FUN_00257170("##logoClickAct",&local_58,0);
  if ((((uVar5 & 1) != 0) && (fVar7 = (float)FUN_0023165c(0xbf800000,0), fVar7 < 5.0)) &&
     (FUN_0023165c(0xbf800000,0), fVar8 < 5.0)) {
    DAT_0082f4a0 = 1;
  }
  FUN_00230a1c();
LAB_001e6744:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


