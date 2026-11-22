// Recovered from libkentos.so by Ghidra 12.2
// address: 001e7354
// size: 1816
// name: FUN_001e7354
// namespace: Global
// signature: undefined FUN_001e7354(void)
// generated: 2026-11-22 21:46:15


void FUN_001e7354(undefined1 *param_1)

{
  short *psVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  short *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (DAT_0082f4b0 != 0) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898 = 0;
      DAT_0082f8a0._0_5_ = 0;
      DAT_0082f888 = 0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._5_3_ = 0;
      DAT_0082f8a8 = 0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    DAT_0082f880 = 0;
    DAT_0082f8ac = 0;
    DAT_0082f888 = 0;
    DAT_0082f890 = 0;
    DAT_0082f898 = DAT_0082f898 & 0xffffffff00000000;
  }
  if ((DAT_0082f4b4 & 1) == 0) {
    FUN_001e6d28(&local_80);
    uVar7 = (ulong)((byte)local_80 >> 1);
    if ((local_80 & 1) != 0) {
      uVar7 = local_78;
    }
    if (3 < uVar7) {
      psVar1 = (short *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        psVar1 = local_70;
      }
      strncpy(&DAT_0082f4b5,(char *)psVar1,0x7f);
    }
    DAT_0082f4b4 = 1;
    if (((byte)local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  fVar16 = 0.5;
  uVar14 = NEON_scvtf(CONCAT44(DAT_0082f2a8,DAT_0082f2a4),4);
  local_80 = CONCAT44((float)((ulong)uVar14 >> 0x20) * 0.5,(float)uVar14 * 0.5);
  local_88 = 0x3f0000003f000000;
  FUN_002334b4(&local_80,1,&local_88);
  local_80 = DAT_00479df8;
  FUN_0022af84(&local_80,0);
  FUN_0022afb0("##Login",0,0xab);
  uVar14 = FUN_0023353c();
  fVar12 = (float)FUN_0023348c();
  local_88._0_4_ = fVar12;
  local_88._4_4_ = fVar16;
  fVar17 = fVar16;
  fVar13 = (float)FUN_002334a0();
  local_80 = CONCAT44(fVar17 + fVar16,fVar13 + fVar12);
  FUN_00249060(0x41800000,uVar14,&local_88,&local_80,0xaf261d17,0);
  local_80 = CONCAT44(fVar17 + local_88._4_4_,fVar13 + (float)local_88);
  FUN_00248f7c(0x41800000,0x3fc00000,uVar14,&local_88,&local_80,0x19ffffff,0);
  FUN_00233578(DAT_0047a190);
  fVar12 = (float)FUN_00223560(0xbf800000,"DEXO LOGIN",0,0);
  uVar18 = NEON_fmov(0x41d00000,4);
  local_80 = CONCAT44(local_88._4_4_ + (float)((ulong)uVar18 >> 0x20),
                      (float)local_88 + (fVar13 - fVar12) * 0.5);
  FUN_00249be8(uVar14,&local_80,0xebffffff,"DEXO LOGIN",0);
  FUN_00233578(0x3f800000);
  FUN_00233578(DAT_0047a194);
  fVar12 = (float)FUN_00223560(0xbf800000,"Enter your license key",0,0);
  local_80 = CONCAT44(local_88._4_4_ + DAT_0047a198,(float)local_88 + (fVar13 - fVar12) * 0.5);
  FUN_00249be8(uVar14,&local_80,0x8cffffff,"Enter your license key",0);
  FUN_00233578(0x3f800000);
  if (DAT_0082f4b0 == 2) {
    *param_1 = 1;
    DAT_0082f4a0 = 0;
  }
  else if (DAT_0082f4b0 == 1) {
    FUN_001e6178(fVar13 * 0.5 + (float)local_88,fVar17 * DAT_0047a19c + local_88._4_4_,0x41f00000,
                 0x40800000,0xc8ffffff);
    fVar12 = (float)FUN_00223560(0xbf800000,"Authenticating...",0,0);
    local_80 = CONCAT44(fVar17 * DAT_0047a1a0 + local_88._4_4_,
                        (float)local_88 + (fVar13 - fVar12) * 0.5);
    FUN_00249be8(uVar14,&local_80,0xb4ffffff,"Authenticating...",0);
    dVar15 = (double)FUN_002261a0();
    if (2.0 < dVar15 - (double)DAT_0082f538) {
      FUN_001e4060(&local_80,&DAT_0082f4b5);
      bVar5 = false;
      uVar7 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar7 = local_78;
      }
      if (uVar7 == 2) {
        psVar1 = (short *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          psVar1 = local_70;
        }
        bVar5 = *psVar1 == 0x4b4f;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (bVar5) {
        pbVar11 = DAT_0082f168;
        if ((DAT_0082f158 & 1) == 0) {
          pbVar11 = &DAT_0082f159;
        }
        DAT_0082f8b8 = 0x9e766091;
        if ((pbVar11 != (byte *)0x0) && (*pbVar11 != 0)) {
          uVar10 = 0x811c9dc5;
          uVar9 = (uint)*pbVar11;
          do {
            pbVar11 = pbVar11 + 1;
            uVar10 = (uVar10 ^ uVar9) * 0x1000193;
            uVar9 = (uint)*pbVar11;
          } while (*pbVar11 != 0);
          DAT_0082f8b8 = (uVar10 ^ 0x9e3779b9) + 0x7f4a7c15 | 1;
        }
        FUN_001e67a4(&DAT_0082f4b5);
        DAT_0082f4b0 = 2;
      }
      else {
        FUN_001e7280();
        memset(&DAT_0082f4b5,0,0x80);
        DAT_0082f4b0 = 0;
        PTR_DAT_00820650 = s_Your_Key_Invalid___Expired_00482b71;
        DAT_00820658 = 0xff5046f0;
        DAT_0082f498 = 1;
        dVar15 = (double)FUN_002261a0();
        DAT_0082f49c = (float)dVar15 + 3.0;
      }
    }
  }
  else if (DAT_0082f4b0 == 0) {
    FUN_002225f4(7,0x12ffffff);
    FUN_002225f4(0,0xffffffff);
    FUN_00222958(0x41000000,0xc);
    FUN_00222958(0x3f800000,0xd);
    FUN_002225f4(5,0x1effffff);
    local_80 = DAT_00479e00;
    FUN_00233e2c(&local_80);
    uVar4 = DAT_0047a1a4;
    uVar3 = DAT_0047a0a0;
    FUN_001e7a6c(DAT_0047a0a0,DAT_0047a1a4,"##key",&DAT_0082f4b5,0x80,"Paste License Key...");
    FUN_00222904(3);
    FUN_00222c2c(2);
    local_80 = DAT_00479e08;
    FUN_00233e2c(&local_80);
    uVar7 = FUN_001e62f0(uVar3,DAT_0047a0d0,"PASTE KEY",0x12ffffff,0x28ffffff,0xdcffffff);
    if ((uVar7 & 1) != 0) {
      FUN_001e358c(&local_80);
      psVar1 = (short *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        psVar1 = local_70;
      }
      strncpy(&DAT_0082f4b5,(char *)psVar1,0x7f);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    local_80 = DAT_00479e10;
    FUN_00233e2c(&local_80);
    uVar7 = FUN_001e62f0(uVar3,DAT_0047a160,"ACTIVATE",0x14ffffff,0x3cffffff,0xffffffff);
    if (((uVar7 & 1) != 0) && (sVar8 = strlen(&DAT_0082f4b5), 3 < sVar8)) {
      DAT_0082f4b0 = 1;
      dVar15 = (double)FUN_002261a0();
      DAT_0082f538 = (float)dVar15;
    }
    local_80 = DAT_00479e18;
    FUN_00233e2c(&local_80);
    uVar7 = FUN_001e62f0(uVar3,uVar4,"GET KEY  (Telegram)",0x28cc8800,0x78cc8800,0xe6ffc878);
    if ((uVar7 & 1) != 0) {
      FUN_001e3394("https://t.me/DEXOVIP");
    }
  }
  FUN_00230a1c();
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


