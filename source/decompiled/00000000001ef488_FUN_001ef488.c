// Recovered from libkentos.so by Ghidra 12.2
// address: 001ef488
// size: 1564
// name: FUN_001ef488
// namespace: Global
// signature: undefined FUN_001ef488(void)
// generated: 2026-11-22 21:46:50


void FUN_001ef488(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  runtime_error *this;
  ulong uVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  long local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  param_2[8] = 0;
  if (param_2[6] != 0) {
    uVar9 = param_4 - param_3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (0xffffffffffffffef < uVar9) goto LAB_001efa58;
    if (uVar9 < 0x17) {
      pvVar11 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar9 << 1);
      if (uVar9 != 0) goto LAB_001ef51c;
    }
    else {
      uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar8);
      param_1[1] = uVar9;
      param_1[2] = (ulong)pvVar11;
      *param_1 = uVar8 | 1;
LAB_001ef51c:
      memset(pvVar11,0,uVar9);
    }
    *(undefined1 *)((long)pvVar11 + uVar9) = 0;
    if (param_3 == param_4) {
      local_60 = param_2[7];
LAB_001ef570:
      bVar1 = (byte)*param_1;
joined_r0x001ef7a8:
      uVar9 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
LAB_001ef578:
        uVar8 = uVar9 >> 1;
        uVar6 = 0x16;
        lVar10 = 0x16 - uVar8;
        if (!(uVar8 < 0x17 && lVar10 != 0)) goto LAB_001ef588;
LAB_001ef7c0:
                    /* try { // try from 001ef7c0 to 001ef7cb has its CatchHandler @ 001efac0 */
        FUN_001efaf8(param_1,lVar10,0);
      }
      else {
LAB_001ef7ac:
        uVar8 = param_1[1];
        uVar6 = (*param_1 & 0xfffffffffffffffe) - 1;
        lVar10 = uVar6 - uVar8;
        if (!(uVar6 < uVar8 || lVar10 == 0)) goto LAB_001ef7c0;
LAB_001ef588:
        if ((uVar9 & 1) == 0) {
          *(undefined1 *)((long)param_1 + uVar6 + 1) = 0;
          *(char *)param_1 = (char)((int)uVar6 << 1);
        }
        else {
          *(undefined1 *)(param_1[2] + uVar6) = 0;
          param_1[1] = uVar6;
        }
      }
      uVar9 = (long)param_1 + 1;
      bVar4 = ((byte)*param_1 & 1) != 0;
      uVar6 = uVar9;
      if (bVar4) {
        uVar6 = param_1[2];
      }
      lVar10 = uVar6 + uVar8;
      uVar8 = (ulong)(byte)((byte)*param_1 >> 1);
      if (bVar4) {
        uVar8 = param_1[1];
      }
      lVar7 = lVar10 + uVar8;
      do {
                    /* try { // try from 001ef800 to 001ef813 has its CatchHandler @ 001efad4 */
        while (iVar5 = (**(code **)(*(long *)param_2[6] + 0x28))
                                 ((long *)param_2[6],&local_60,lVar10,lVar7,&local_68), iVar5 == 1)
        {
          bVar1 = (byte)*param_1;
          bVar4 = (bVar1 & 1) != 0;
          uVar8 = uVar9;
          if (bVar4) {
            uVar8 = param_1[2];
          }
          lVar10 = local_68 - uVar8;
          uVar8 = (ulong)(bVar1 >> 1);
          if (bVar4) {
            uVar8 = param_1[1];
          }
          uVar6 = lVar10 * 2;
          if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
            if ((bVar1 & 1) == 0) {
              *(undefined1 *)((long)param_1 + uVar6 + 1) = 0;
              *(char *)param_1 = (char)((int)lVar10 << 2);
            }
            else {
              *(undefined1 *)(param_1[2] + uVar6) = 0;
              param_1[1] = uVar6;
            }
          }
          else {
                    /* try { // try from 001ef860 to 001ef86b has its CatchHandler @ 001efac8 */
            FUN_001efaf8(param_1,uVar6 - uVar8,0);
          }
          uVar8 = (ulong)(byte)((byte)*param_1 >> 1);
          uVar6 = uVar9;
          if (((byte)*param_1 & 1) != 0) {
            uVar8 = param_1[1];
            uVar6 = param_1[2];
          }
          lVar10 = uVar6 + lVar10;
          lVar7 = uVar6 + uVar8;
        }
        if (iVar5 == 0) {
          bVar1 = (byte)*param_1;
          uVar6 = param_1[2];
          uVar8 = (ulong)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            uVar8 = param_1[1];
            uVar9 = uVar6;
          }
          uVar9 = local_68 - uVar9;
          if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
            if ((bVar1 & 1) == 0) {
LAB_001efa18:
              *(undefined1 *)((long)param_1 + uVar9 + 1) = 0;
              *(char *)param_1 = (char)((int)uVar9 << 1);
            }
            else {
LAB_001efa2c:
              *(undefined1 *)(uVar6 + uVar9) = 0;
              param_1[1] = uVar9;
            }
          }
          else {
                    /* try { // try from 001ef9e4 to 001efa0f has its CatchHandler @ 001efab8 */
            FUN_001efaf8(param_1,uVar9 - uVar8,0);
          }
          goto LAB_001ef96c;
        }
        if (iVar5 == 3) {
          bVar1 = (byte)*param_1;
          if ((bVar1 & 1) == 0) {
            uVar9 = lVar10 - uVar9;
            lVar10 = uVar9 - (bVar1 >> 1);
            if (bVar1 >> 1 <= uVar9 && lVar10 != 0) goto LAB_001efa04;
          }
          else {
            uVar9 = lVar10 - param_1[2];
            lVar10 = uVar9 - param_1[1];
            if (param_1[1] <= uVar9 && lVar10 != 0) {
LAB_001efa04:
              FUN_001efaf8(param_1,lVar10,0);
              goto LAB_001ef96c;
            }
          }
          if ((bVar1 & 1) != 0) {
            uVar6 = param_1[2];
            goto LAB_001efa2c;
          }
          goto LAB_001efa18;
        }
      } while (iVar5 == 1);
      if (iVar5 == 0) goto LAB_001ef96c;
    }
    else {
      bVar1 = (byte)*param_1;
      if ((bVar1 & 1) == 0) {
        uVar9 = 0x16;
        lVar10 = 0x16 - (ulong)(bVar1 >> 1);
        if (!((ulong)(bVar1 >> 1) < 0x17 && lVar10 != 0)) goto LAB_001ef550;
LAB_001ef5b4:
                    /* try { // try from 001ef5b4 to 001ef5bf has its CatchHandler @ 001efac4 */
        FUN_001efaf8(param_1,lVar10,0);
      }
      else {
        uVar9 = (*param_1 & 0xfffffffffffffffe) - 1;
        lVar10 = uVar9 - param_1[1];
        if (!(uVar9 < param_1[1] || lVar10 == 0)) goto LAB_001ef5b4;
LAB_001ef550:
        if ((bVar1 & 1) == 0) {
          *(undefined1 *)((long)param_1 + uVar9 + 1) = 0;
          *(char *)param_1 = (char)((int)uVar9 << 1);
        }
        else {
          *(undefined1 *)(param_1[2] + uVar9) = 0;
          param_1[1] = uVar9;
        }
      }
      local_60 = param_2[7];
      uVar6 = param_1[1];
      uVar8 = param_1[2];
      uVar9 = (long)param_1 + 1;
      if (((byte)*param_1 & 1) == 0) {
        uVar8 = (long)param_1 + 1;
        uVar6 = (ulong)(byte)((byte)*param_1 >> 1);
      }
      lVar10 = uVar8 + uVar6;
      do {
                    /* try { // try from 001ef604 to 001ef61f has its CatchHandler @ 001efad0 */
        iVar5 = (**(code **)(*(long *)param_2[6] + 0x18))
                          ((long *)param_2[6],&local_60,param_3,param_4,&local_68,uVar8,lVar10,
                           &local_70);
        param_2[8] = param_2[8] + ((long)(local_68 - param_3) >> 1);
        if (param_3 == local_68) break;
        if (iVar5 != 1) {
          if (iVar5 == 0) {
            bVar1 = (byte)*param_1;
            uVar8 = (ulong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              uVar8 = param_1[1];
              uVar9 = param_1[2];
            }
            uVar9 = local_70 - uVar9;
            if (uVar8 <= uVar9 && uVar9 - uVar8 != 0) {
                    /* try { // try from 001ef734 to 001ef77f has its CatchHandler @ 001efabc */
              FUN_001efaf8(param_1,uVar9 - uVar8,0);
              goto LAB_001ef570;
            }
            if ((bVar1 & 1) == 0) {
              *(undefined1 *)((long)param_1 + uVar9 + 1) = 0;
              *(char *)param_1 = (char)((int)uVar9 << 1);
              uVar9 = (ulong)(byte)*param_1;
              if (((byte)*param_1 & 1) != 0) goto LAB_001ef7ac;
              goto LAB_001ef578;
            }
            *(undefined1 *)(param_1[2] + uVar9) = 0;
            param_1[1] = uVar9;
            bVar1 = (byte)*param_1;
            goto joined_r0x001ef7a8;
          }
          if (iVar5 == 3) {
            bVar1 = (byte)*param_1;
            if ((bVar1 & 1) == 0) {
              uVar8 = uVar8 - uVar9;
              lVar10 = uVar8 - (bVar1 >> 1);
              if (!(bVar1 >> 1 <= uVar8 && lVar10 != 0)) goto LAB_001ef784;
LAB_001ef774:
              FUN_001efaf8(param_1,lVar10,0);
            }
            else {
              uVar8 = uVar8 - param_1[2];
              lVar10 = uVar8 - param_1[1];
              if (!(uVar8 < param_1[1] || lVar10 == 0)) goto LAB_001ef774;
LAB_001ef784:
              if ((bVar1 & 1) == 0) {
                *(undefined1 *)((long)param_1 + uVar8 + 1) = 0;
                *(char *)param_1 = (char)((int)uVar8 << 1);
              }
              else {
                *(undefined1 *)(param_1[2] + uVar8) = 0;
                param_1[1] = uVar8;
              }
            }
                    /* try { // try from 001efa44 to 001efa53 has its CatchHandler @ 001efabc */
            FUN_001efc54(param_1,param_3,param_4);
            goto LAB_001ef570;
          }
          break;
        }
        bVar1 = (byte)*param_1;
        bVar4 = (bVar1 & 1) != 0;
        uVar8 = uVar9;
        if (bVar4) {
          uVar8 = param_1[2];
        }
        lVar10 = local_70 - uVar8;
        uVar8 = (ulong)(bVar1 >> 1);
        if (bVar4) {
          uVar8 = param_1[1];
        }
        uVar6 = lVar10 * 2;
        if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
          if ((bVar1 & 1) == 0) {
            *(undefined1 *)((long)param_1 + uVar6 + 1) = 0;
            *(char *)param_1 = (char)((int)lVar10 << 2);
          }
          else {
            *(undefined1 *)(param_1[2] + uVar6) = 0;
            param_1[1] = uVar6;
          }
        }
        else {
                    /* try { // try from 001ef670 to 001ef67b has its CatchHandler @ 001efacc */
          FUN_001efaf8(param_1,uVar6 - uVar8,0);
        }
        uVar6 = (ulong)(byte)((byte)*param_1 >> 1);
        uVar3 = uVar9;
        if (((byte)*param_1 & 1) != 0) {
          uVar6 = param_1[1];
          uVar3 = param_1[2];
        }
        uVar8 = uVar3 + lVar10;
        lVar10 = uVar3 + uVar6;
        param_3 = local_68;
      } while (local_68 < param_4);
    }
    if ((*param_1 & 1) != 0) {
      operator_delete((void *)param_1[2]);
    }
  }
  bVar1 = (byte)*param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_001efa64;
  }
  else if (param_2[1] == 0) {
LAB_001efa64:
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001efa70 to 001efa7b has its CatchHandler @ 001efaa4 */
    std::runtime_error::runtime_error(this,"wstring_convert: to_bytes error");
    *(undefined **)this = PTR_vtable_007586f0 + 0x10;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,PTR_typeinfo_007586c8,PTR__underflow_error_007589f8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((bVar1 & 1) == 0) {
    param_1[2] = param_2[2];
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    goto LAB_001ef96c;
  }
  uVar9 = param_2[1];
  if (0xffffffffffffffef < uVar9) {
LAB_001efa58:
                    /* WARNING: Subroutine does not return */
    FUN_001d91e4(param_1);
  }
  pvVar11 = (void *)param_2[2];
  if (uVar9 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar9 << 1);
    if (uVar9 != 0) goto LAB_001ef958;
  }
  else {
    uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    param_1[1] = uVar9;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar8 | 1;
LAB_001ef958:
    memcpy(__dest,pvVar11,uVar9);
  }
  *(undefined1 *)((long)__dest + uVar9) = 0;
LAB_001ef96c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


