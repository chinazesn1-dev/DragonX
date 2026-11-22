// Recovered from libkentos.so by Ghidra 12.2
// address: 001e6178
// size: 376
// name: FUN_001e6178
// namespace: Global
// signature: undefined FUN_001e6178(void)
// generated: 2026-11-22 21:46:10


void FUN_001e6178(float param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  void *__dest;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  
  lVar5 = FUN_0023353c();
  dVar11 = (double)FUN_002261a0();
  fVar4 = DAT_0047a180;
  fVar3 = DAT_0047a17c;
  fVar9 = (float)dVar11 * DAT_0047a178;
  iVar8 = 0;
  *(undefined4 *)(lVar5 + 0x78) = 0;
  do {
    fVar12 = fVar9 * 2.5 + ((float)iVar8 / fVar3) * fVar4;
    fVar10 = cosf(fVar12);
    fVar12 = sinf(fVar12);
    iVar6 = *(int *)(lVar5 + 0x78);
    if (iVar6 == *(int *)(lVar5 + 0x7c)) {
      if (iVar6 == 0) {
        uVar7 = 8;
      }
      else {
        iVar2 = iVar6;
        if (iVar6 < 0) {
          iVar2 = iVar6 + 1;
        }
        uVar7 = iVar6 + (iVar2 >> 1);
      }
      if ((int)uVar7 <= (int)(iVar6 + 1U)) {
        uVar7 = iVar6 + 1U;
      }
      if (iVar6 < (int)uVar7) {
        __dest = (void *)FUN_00221770(-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar7 << 3);
        if (*(void **)(lVar5 + 0x80) != (void *)0x0) {
          memcpy(__dest,*(void **)(lVar5 + 0x80),(long)*(int *)(lVar5 + 0x78) << 3);
          FUN_0022179c(*(undefined8 *)(lVar5 + 0x80));
        }
        iVar6 = *(int *)(lVar5 + 0x78);
        *(void **)(lVar5 + 0x80) = __dest;
        *(uint *)(lVar5 + 0x7c) = uVar7;
      }
    }
    iVar8 = iVar8 + 1;
    pfVar1 = (float *)(*(long *)(lVar5 + 0x80) + (long)iVar6 * 8);
    *pfVar1 = param_1 + fVar10 * param_3;
    pfVar1[1] = param_2 + fVar12 * param_3;
    iVar6 = *(int *)(lVar5 + 0x78) + 1;
    *(int *)(lVar5 + 0x78) = iVar6;
  } while (iVar8 != 0x3d);
  FUN_002470a8(param_4,lVar5,*(undefined8 *)(lVar5 + 0x80),iVar6,param_5,0);
  *(undefined4 *)(lVar5 + 0x78) = 0;
  return;
}


