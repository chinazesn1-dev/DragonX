// Recovered from libkentos.so by Ghidra 12.2
// address: 001efc54
// size: 824
// name: FUN_001efc54
// namespace: Global
// signature: undefined FUN_001efc54(void)
// generated: 2026-11-22 21:46:50


ulong * FUN_001efc54(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  void *__dest;
  undefined1 *puVar7;
  undefined1 *puVar6;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  void *__src;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_80;
  ulong local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar12 = (ulong)(bVar1 >> 1);
    uVar14 = 0x16;
    uVar8 = (ulong)bVar1;
  }
  else {
    uVar8 = *param_1;
    uVar12 = param_1[1];
    uVar14 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  uVar4 = (long)param_3 - (long)param_2;
  if (uVar4 == 0) goto LAB_001eff44;
  if ((bVar1 & 1) == 0) {
    puVar5 = (undefined1 *)((long)param_1 + 1);
    uVar9 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar9 = param_1[1];
    puVar5 = (undefined1 *)param_1[2];
  }
  if ((puVar5 <= param_2) && (param_2 < puVar5 + uVar9)) {
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined1 *)0x0;
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(&local_80);
    }
    if (uVar4 < 0x17) {
      local_80 = (ulong)(byte)((int)uVar4 << 1);
      puVar5 = (undefined1 *)((ulong)&local_80 | 1);
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      puVar5 = operator_new(uVar8);
      local_80 = uVar8 | 1;
      local_70 = puVar5;
      local_78 = uVar4;
    }
    if (param_2 != param_3) {
      if (uVar4 < 0x20) {
        puVar7 = param_2;
        puVar13 = puVar5;
LAB_001efdc4:
        do {
          puVar6 = puVar7 + 1;
          *puVar13 = *puVar7;
          puVar7 = puVar6;
          puVar13 = puVar13 + 1;
        } while (param_3 != puVar6);
      }
      else {
        uVar12 = uVar4 & 0xffffffffffffffe0;
        puVar10 = (undefined8 *)(puVar5 + 0x10);
        puVar7 = param_2 + uVar12;
        puVar13 = puVar5 + uVar12;
        puVar11 = (undefined8 *)(param_2 + 0x10);
        uVar8 = uVar12;
        do {
          puVar3 = puVar11 + -1;
          uVar15 = puVar11[-2];
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar8 = uVar8 - 0x20;
          puVar11 = puVar11 + 4;
          puVar10[-1] = *puVar3;
          puVar10[-2] = uVar15;
          puVar10[1] = uVar17;
          *puVar10 = uVar16;
          puVar10 = puVar10 + 4;
        } while (uVar8 != 0);
        if (uVar4 != uVar12) goto LAB_001efdc4;
      }
      puVar5 = puVar5 + uVar4;
    }
    *puVar5 = 0;
    uVar8 = local_80 >> 1 & 0x7f;
    puVar5 = (undefined1 *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar8 = local_78;
      puVar5 = local_70;
    }
                    /* try { // try from 001efdfc to 001efe03 has its CatchHandler @ 001eff8c */
    FUN_001effa8(param_1,puVar5,uVar8);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    goto LAB_001eff44;
  }
  if (uVar14 - uVar12 < uVar4) {
    uVar8 = uVar12 + uVar4;
    if (-uVar14 - 0x11 < uVar8 - uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_001d91e4(param_1);
    }
    if ((bVar1 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
    else {
      __src = (void *)param_1[2];
    }
    if (uVar14 < 0x7fffffffffffffe7) {
      uVar9 = uVar14 << 1;
      if (uVar14 << 1 <= uVar8) {
        uVar9 = uVar8;
      }
      if (uVar9 < 0x17) {
        uVar8 = 0x17;
      }
      else {
        uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar8 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar8);
    if (uVar12 != 0) {
      memcpy(__dest,__src,uVar12);
    }
    if (uVar14 != 0x16) {
      operator_delete(__src);
    }
    uVar8 = uVar8 | 1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar8;
  }
  if ((uVar8 & 1) == 0) {
    uVar8 = (long)param_1 + 1;
  }
  else {
    uVar8 = param_1[2];
  }
  puVar5 = (undefined1 *)(uVar8 + uVar12);
  if (param_2 != param_3) {
    puVar7 = param_2;
    if ((uVar4 < 0x20) ||
       ((puVar5 < param_3 && (param_2 < param_3 + uVar8 + (uVar12 - (long)param_2))))) {
LAB_001eff10:
      do {
        puVar13 = puVar7 + 1;
        *puVar5 = *puVar7;
        puVar5 = puVar5 + 1;
        puVar7 = puVar13;
      } while (param_3 != puVar13);
    }
    else {
      uVar9 = uVar4 & 0xffffffffffffffe0;
      puVar10 = (undefined8 *)(param_2 + 0x10);
      puVar11 = (undefined8 *)(uVar8 + uVar12 + 0x10);
      uVar14 = uVar9;
      do {
        puVar3 = puVar10 + -1;
        uVar15 = puVar10[-2];
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar14 = uVar14 - 0x20;
        puVar11[-1] = *puVar3;
        puVar11[-2] = uVar15;
        puVar11[1] = uVar17;
        *puVar11 = uVar16;
        puVar11 = puVar11 + 4;
      } while (uVar14 != 0);
      puVar5 = puVar5 + uVar9;
      puVar7 = param_2 + uVar9;
      if (uVar4 != uVar9) goto LAB_001eff10;
    }
    puVar5 = param_3 + uVar8 + (uVar12 - (long)param_2);
  }
  *puVar5 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)((int)(uVar12 + uVar4) << 1);
  }
  else {
    param_1[1] = uVar12 + uVar4;
  }
LAB_001eff44:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


