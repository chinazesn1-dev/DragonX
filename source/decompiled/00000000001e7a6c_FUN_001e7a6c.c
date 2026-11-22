// Recovered from libkentos.so by Ghidra 12.2
// address: 001e7a6c
// size: 3284
// name: FUN_001e7a6c
// namespace: Global
// signature: undefined FUN_001e7a6c(void)
// generated: 2026-11-22 21:46:18


/* WARNING: Type propagation algorithm not settling */

int FUN_001e7a6c(float param_1,float param_2,undefined8 param_3,char *param_4,int param_5,
                char *param_6)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  iVar5 = 0;
  if ((param_4 == (char *)0x0) || (param_5 < 2)) goto LAB_001e81f4;
  fVar21 = param_2;
  lVar9 = FUN_00226170();
  if (param_1 <= 0.0) {
    param_1 = (float)FUN_00231b1c();
  }
  if (param_1 <= DAT_0047a15c) {
    param_1 = DAT_0047a15c;
  }
  local_a0 = (float)FUN_00233dd4();
  local_a8 = param_1;
  fStack_a4 = param_2;
  fStack_9c = fVar21;
  iVar5 = FUN_00233aa0(param_3);
  uVar10 = FUN_00257170(param_3,&local_a8,0);
  sVar11 = strlen(param_4);
  if (param_5 <= (int)sVar11) {
    sVar11 = (long)param_5 - 1;
    param_4[sVar11] = '\0';
  }
  if (((DAT_0082f8b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0082f8b0), iVar8 != 0)) {
    DAT_0082f880 = 0;
    DAT_0082f898._0_4_ = 0.0;
    DAT_0082f898._4_4_ = 0.0;
    DAT_0082f8a0._0_4_ = 0.0;
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f8a0._4_4_ = 0.0;
    DAT_0082f8a8 = 0.0;
    DAT_0082f8ac = 0;
    __cxa_guard_release(&DAT_0082f8b0);
  }
  bVar4 = false;
  iVar8 = (int)sVar11;
  if (DAT_0082f880 == iVar5) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    bVar4 = DAT_0082f888 == param_4;
  }
  if ((uVar10 & 1) != 0) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
      if (!bVar4) goto LAB_001e7c6c;
LAB_001e7b9c:
      DAT_0082f890 = CONCAT44(DAT_0082f890._4_4_,param_5);
    }
    else {
      if (bVar4) goto LAB_001e7b9c;
LAB_001e7c6c:
      DAT_0082f880 = iVar5;
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f888 = param_4;
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f890 = CONCAT44(DAT_0082f890._4_4_,param_5);
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f890 = CONCAT44(iVar8,(undefined4)DAT_0082f890);
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f898._0_4_ = 0.0;
    }
    uVar16 = FUN_00233568();
    uVar15 = FUN_00233558();
    fVar21 = local_a0;
    fVar22 = *(float *)(lVar9 + 0x120);
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    uVar3 = DAT_0047a100;
    if (iVar8 < 1) {
      iVar6 = 0;
    }
    else {
      uVar10 = 0;
      fVar22 = (fVar22 - (fVar21 + 10.0)) + (float)DAT_0082f898;
      fVar21 = DAT_0047a1a8;
      iVar7 = 0;
      do {
        fVar18 = 0.0;
        iVar14 = (int)uVar10;
        if (iVar14 != 0) {
          fVar18 = (float)FUN_002515a4(uVar16,uVar3,0,uVar15,param_4,param_4 + uVar10,0);
        }
        bVar1 = param_4[uVar10];
        fVar18 = ABS(fVar18 - fVar22);
        iVar6 = iVar14;
        if (fVar21 <= fVar18) {
          iVar6 = iVar7;
          fVar18 = fVar21;
        }
        fVar21 = fVar18;
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            iVar17 = 2;
          }
          else if ((bVar1 & 0xf0) == 0xe0) {
            iVar17 = 3;
          }
          else {
            iVar17 = 4;
            if ((bVar1 & 0xf8) != 0xf0) {
              iVar17 = 1;
            }
          }
        }
        else {
          iVar17 = 1;
        }
        uVar10 = (ulong)(uint)(iVar17 + iVar14);
        iVar7 = iVar6;
      } while (iVar17 + iVar14 < iVar8);
      if (0 < iVar8) {
        fVar18 = (float)FUN_002515a4(uVar16,uVar3,0,uVar15,param_4,param_4 + iVar8,0);
        if (ABS(fVar18 - fVar22) < fVar21) {
          iVar6 = iVar8;
        }
      }
    }
    if (((DAT_0082f8b0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0082f8b0), iVar7 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    DAT_0082f890 = CONCAT44(iVar6,(undefined4)DAT_0082f890);
  }
  if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
    DAT_0082f880 = 0;
    DAT_0082f898._0_4_ = 0.0;
    DAT_0082f898._4_4_ = 0.0;
    DAT_0082f8a0._0_4_ = 0.0;
    DAT_0082f888 = (char *)0x0;
    DAT_0082f890 = 0;
    DAT_0082f8a0._4_4_ = 0.0;
    DAT_0082f8a8 = 0.0;
    DAT_0082f8ac = 0;
    __cxa_guard_release(&DAT_0082f8b0);
  }
  uVar15 = 0x28ffffff;
  uVar16 = 0x10ffffff;
  if (DAT_0082f880 == iVar5) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    iVar5 = 0;
    if (DAT_0082f888 == param_4) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f890 = CONCAT44(DAT_0082f890._4_4_,param_5);
      if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      if (iVar8 < DAT_0082f890._4_4_) {
        if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
          DAT_0082f880 = 0;
          DAT_0082f898._0_4_ = 0.0;
          DAT_0082f898._4_4_ = 0.0;
          DAT_0082f8a0._0_4_ = 0.0;
          DAT_0082f888 = (char *)0x0;
          DAT_0082f890 = 0;
          DAT_0082f8a0._4_4_ = 0.0;
          DAT_0082f8a8 = 0.0;
          DAT_0082f8ac = 0;
          __cxa_guard_release(&DAT_0082f8b0);
        }
        DAT_0082f890 = CONCAT44(iVar8,(undefined4)DAT_0082f890);
      }
      if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f898._4_4_ = local_a0;
      DAT_0082f8a0._0_4_ = fStack_9c;
      fVar21 = local_a8 + local_a0;
      fVar22 = fStack_a4 + *(float *)((ulong)&local_a0 | 4);
      if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f8a0._4_4_ = fVar21;
      DAT_0082f8a8 = fVar22;
      if (((DAT_0082f8b0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0082f8b0), iVar5 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      iVar5 = 1;
      uVar15 = 0x78ffffff;
      uVar16 = 0x1affffff;
      DAT_0082f8ac = 1;
    }
  }
  else {
    iVar5 = 0;
  }
  uVar12 = FUN_0023353c();
  local_b0 = CONCAT44(fStack_9c + fStack_a4,local_a0 + local_a8);
  FUN_00249060(0x41000000,uVar12,&local_a0,&local_b0,uVar16,0);
  local_b0 = CONCAT44(fStack_9c + fStack_a4,local_a0 + local_a8);
  FUN_00248f7c(0x41000000,DAT_0047a184,uVar12,&local_a0,&local_b0,uVar15,0);
  uVar16 = FUN_00233568();
  uVar15 = FUN_00233558();
  fVar22 = fStack_9c;
  fVar21 = local_a8;
  fVar20 = fStack_a4 - (float)uVar16;
  fVar18 = 0.0;
  if (iVar5 != 0) {
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if (DAT_0082f890._4_4_ < 1) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = (float)FUN_002515a4(uVar16,DAT_0047a100,0,uVar15,param_4,param_4 + DAT_0082f890._4_4_
                                   ,0);
    }
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if (fVar21 + -20.0 < fVar18 - (float)DAT_0082f898) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f898._0_4_ = fVar18 - (fVar21 + -20.0);
    }
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if (fVar18 < (float)DAT_0082f898) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f898._0_4_ = fVar18;
    }
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    if ((float)DAT_0082f898 < 0.0) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
        DAT_0082f898._0_4_ = 0.0;
      }
      else {
        DAT_0082f898._0_4_ = 0.0;
      }
    }
    if (iVar8 == 0) {
      if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      DAT_0082f898._0_4_ = 0.0;
    }
    if (((DAT_0082f8b0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0082f8b0), iVar6 != 0)) {
      DAT_0082f880 = 0;
      DAT_0082f898._0_4_ = 0.0;
      DAT_0082f898._4_4_ = 0.0;
      DAT_0082f8a0._0_4_ = 0.0;
      DAT_0082f888 = (char *)0x0;
      DAT_0082f890 = 0;
      DAT_0082f8a0._4_4_ = 0.0;
      DAT_0082f8a8 = 0.0;
      DAT_0082f8ac = 0;
      __cxa_guard_release(&DAT_0082f8b0);
    }
    fVar18 = (float)DAT_0082f898;
  }
  FUN_00246a48(local_a0 + 10.0,fStack_9c + 2.0,local_a0 + local_a8 + -10.0,
               fStack_9c + fStack_a4 + -2.0,uVar12,1);
  if (iVar8 < 1) {
    if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
      uVar13 = 0x64ffffff;
      fVar21 = local_a0 + 10.0;
      goto LAB_001e80ec;
    }
  }
  else {
    uVar13 = 0xfff0f0f0;
    fVar21 = (local_a0 + 10.0) - fVar18;
    param_6 = param_4;
LAB_001e80ec:
    local_b0 = CONCAT44(fVar22 + fVar20 * 0.5,fVar21);
    FUN_00249528(uVar16,0,uVar12,uVar15,&local_b0,uVar13,param_6,0,0);
  }
  if (iVar5 != 0) {
    dVar19 = (double)FUN_002261a0();
    fVar21 = fmodf((float)dVar19,1.0);
    if (fVar21 < DAT_0047a19c) {
      fVar21 = local_a0 + 10.0;
      if (((DAT_0082f8b0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0082f8b0), iVar8 != 0)) {
        DAT_0082f880 = 0;
        DAT_0082f898._0_4_ = 0.0;
        DAT_0082f898._4_4_ = 0.0;
        DAT_0082f8a0._0_4_ = 0.0;
        DAT_0082f888 = (char *)0x0;
        DAT_0082f890 = 0;
        DAT_0082f8a0._4_4_ = 0.0;
        DAT_0082f8a8 = 0.0;
        DAT_0082f8ac = 0;
        __cxa_guard_release(&DAT_0082f8b0);
      }
      if (DAT_0082f890._4_4_ < 1) {
        local_b8 = 0.0;
      }
      else {
        local_b8 = (float)FUN_002515a4(uVar16,DAT_0047a100,0,uVar15,param_4,
                                       param_4 + DAT_0082f890._4_4_,0);
      }
      local_b8 = (fVar21 - fVar18) + local_b8;
      fStack_b4 = fStack_9c + fStack_a4 + -7.0;
      local_b0 = CONCAT44(fStack_9c + 7.0,local_b8);
      FUN_00248df8(DAT_0047a12c,uVar12,&local_b0,&local_b8,0xebffffff);
    }
  }
  FUN_00246be0(uVar12);
LAB_001e81f4:
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


