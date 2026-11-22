// Recovered from libkentos.so by Ghidra 12.2
// address: 001dbdd8
// size: 1148
// name: FUN_001dbdd8
// namespace: Global
// signature: undefined FUN_001dbdd8(void)
// generated: 2026-11-22 21:43:47


ulong FUN_001dbdd8(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  double __x;
  float fVar21;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  ulong *local_b0;
  ulong *local_a8;
  long local_98;
  
  lVar4 = tpidr_el0;
  local_98 = *(long *)(lVar4 + 0x28);
  FUN_001db8d4(&local_b0);
  uVar8 = DAT_0082f398;
  lVar7 = DAT_0082f390;
  fVar6 = DAT_0047a0ec;
  dVar5 = DAT_00479d70;
  if (DAT_0082f390 == 0) {
    uVar13 = 0;
  }
  else if (local_b0 == local_a8) {
    uVar13 = 0;
  }
  else {
    uVar14 = 0;
    puVar15 = local_b0;
    fVar21 = DAT_0047a0e8;
    do {
      uVar16 = *puVar15;
                    /* try { // try from 001dbfcc to 001dc077 has its CatchHandler @ 001dc294 */
      uVar10 = FUN_002204a0(uVar16);
      uVar13 = uVar14;
      if (((((uVar10 & 1) != 0) &&
           (uVar10 = FUN_002204a0(*(undefined8 *)(uVar16 + 0x10)), (uVar10 & 1) != 0)) &&
          (0 < *(int *)(uVar16 + 0xc))) &&
         ((0 < *(int *)(uVar16 + 0x18) && (((uint)uVar16 & 7 | 4) == 4)))) {
        puVar12 = DAT_0082f3a0;
        if (DAT_0082f3a0 != DAT_0082f3a8) {
          do {
            if ((*puVar12 <= uVar16) && (uVar16 <= puVar12[1])) goto LAB_001dc1f0;
            puVar12 = puVar12 + 2;
          } while (puVar12 != DAT_0082f3a8);
          puVar12 = DAT_0082f3a0;
          do {
            if ((*puVar12 <= *(ulong *)(uVar16 + 0x10)) && (*(ulong *)(uVar16 + 0x10) <= puVar12[1])
               ) goto LAB_001dc1f0;
            puVar12 = puVar12 + 2;
          } while (puVar12 != DAT_0082f3a8);
        }
        uVar11 = FUN_001dc2b0();
        uVar10 = FUN_00265b4c(uVar16,uVar11);
                    /* try { // try from 001dc07c to 001dc087 has its CatchHandler @ 001dc290 */
        if ((((((uVar10 & 1) != 0) &&
              (fVar17 = (float)FUN_00265f04(lVar7,uVar16), fVar17 / fVar6 <= DAT_008206a4)) &&
             (*(int *)(uVar16 + 0x990) != *(int *)(lVar7 + 0x990))) &&
            ((*(int *)(uVar16 + 0x9a8) != *(int *)(lVar7 + 0x9a8) &&
             ((*(byte *)(uVar16 + 0xe8c) & 1) == 0)))) &&
           ((DAT_0082073a == '\0' && DAT_0082076d == '\0' || (*(float *)(uVar16 + 0xe70) != 0.0))))
        {
          fVar17 = DAT_008206a4;
          if (DAT_0082073b != '\0' || DAT_0082076f != '\0') {
            local_c0 = 0;
            local_b8 = 0.0;
                    /* try { // try from 001dc0f8 to 001dc10b has its CatchHandler @ 001dc28c */
            uVar10 = FUN_00266010(uVar8,uVar16,&local_c0,1);
            if ((uVar10 & 1) == 0) goto LAB_001dc1f0;
          }
          if ((DAT_0082073a == '\0' && DAT_0082076e == '\0') || (*(char *)(uVar16 + 0xa69) == '\0'))
          {
            if (((DAT_0082f588 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_0082f588), iVar9 != 0)) {
                    /* try { // try from 001dbf70 to 001dbf83 has its CatchHandler @ 001dc264 */
              FUN_001dc82c(&DAT_0082f580,"Root");
              __cxa_guard_release(&DAT_0082f588);
            }
            local_d0 = 0;
            local_c8 = 0.0;
                    /* try { // try from 001dc140 to 001dc153 has its CatchHandler @ 001dc284 */
            uVar18 = FUN_00267448(uVar16,&DAT_0082f580,&local_d0);
            local_c0 = CONCAT44(fVar17,uVar18);
            local_b8 = param_3;
            if (((DAT_0082f598 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_0082f598), iVar9 != 0)) {
                    /* try { // try from 001dbfa4 to 001dbfb7 has its CatchHandler @ 001dc254 */
              FUN_001dc82c(&DAT_0082f590,"Head");
              __cxa_guard_release(&DAT_0082f598);
            }
            local_e0 = 0;
            local_d8 = 0;
                    /* try { // try from 001dc174 to 001dc187 has its CatchHandler @ 001dc280 */
            uVar18 = FUN_00267448(uVar16,&DAT_0082f590,&local_e0);
            local_d0 = CONCAT44(fVar17,uVar18);
            local_e8 = 0;
            local_e0 = 0;
                    /* try { // try from 001dc194 to 001dc1bf has its CatchHandler @ 001dc288 */
            local_c8 = param_3;
            uVar10 = FUN_00266308(uVar8,&local_c0,1,&local_e0);
            if (((uVar10 & 1) != 0) &&
               (uVar10 = FUN_00266308(uVar8,&local_d0,1,&local_e8), (uVar10 & 1) != 0)) {
              param_3 = ABS(local_e8._4_4_ - local_e0._4_4_);
              fVar17 = (float)local_e8 + (float)((double)param_3 * dVar5) * 0.5;
              if (0.0 <= fVar17) {
                param_3 = param_3 * 0.5;
                fVar19 = local_e8._4_4_ + param_3;
                if (((0.0 <= fVar19) && (param_3 = (float)DAT_0082f2a4, fVar17 <= param_3)) &&
                   (param_3 = (float)DAT_0082f2a8, fVar19 <= param_3)) {
                  iVar9 = DAT_0082f2a4;
                  if (DAT_0082f2a4 < 0) {
                    iVar9 = DAT_0082f2a4 + 1;
                  }
                  iVar1 = DAT_0082f2a8;
                  if (DAT_0082f2a8 < 0) {
                    iVar1 = DAT_0082f2a8 + 1;
                  }
                  if ((DAT_0082075c == 0.0) ||
                     (param_3 = DAT_0082075c * 0.5, iVar2 = (int)fVar17 - (iVar9 >> 1),
                     iVar3 = (int)fVar19 - (iVar1 >> 1),
                     (uint)(iVar2 * iVar2 + iVar3 * iVar3) <= (uint)((int)param_3 * (int)param_3)))
                  {
                    param_3 = (float)(iVar9 >> 1);
                    dVar20 = (double)(fVar19 - (float)(iVar1 >> 1));
                    __x = (double)(fVar17 - param_3) * (double)(fVar17 - param_3) + dVar20 * dVar20;
                    dVar20 = SQRT(__x);
                    if (NAN(dVar20)) {
                      dVar20 = sqrt(__x);
                    }
                    uVar13 = uVar16;
                    fVar17 = (float)dVar20;
                    if (fVar21 <= (float)dVar20) {
                      uVar13 = uVar14;
                      fVar17 = fVar21;
                    }
                    fVar21 = fVar17;
                  }
                }
              }
            }
          }
        }
      }
LAB_001dc1f0:
      puVar15 = puVar15 + 1;
      uVar14 = uVar13;
    } while (puVar15 != local_a8);
  }
  if (local_b0 != (ulong *)0x0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar4 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}


