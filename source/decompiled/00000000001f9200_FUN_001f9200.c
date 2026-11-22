// Recovered from libkentos.so by Ghidra 12.2
// address: 001f9200
// size: 1256
// name: FUN_001f9200
// namespace: Global
// signature: undefined FUN_001f9200(void)
// generated: 2026-11-22 21:47:04


undefined8 FUN_001f9200(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  FUN_001f9c1c();
  lVar1 = param_1 + 0x50;
LAB_001f923c:
  uVar2 = FUN_001f9a88(param_1);
  pcVar6 = "invalid string: missing closing quote";
  switch(uVar2) {
  case 0:
    pcVar6 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    goto switchD_001f925c_caseD_ffffffff;
  case 1:
    pcVar6 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    goto switchD_001f925c_caseD_ffffffff;
  case 2:
    pcVar6 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    goto switchD_001f925c_caseD_ffffffff;
  case 3:
    pcVar6 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    goto switchD_001f925c_caseD_ffffffff;
  case 4:
    pcVar6 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    goto switchD_001f925c_caseD_ffffffff;
  case 5:
    pcVar6 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    goto switchD_001f925c_caseD_ffffffff;
  case 6:
    pcVar6 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    goto switchD_001f925c_caseD_ffffffff;
  case 7:
    pcVar6 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    goto switchD_001f925c_caseD_ffffffff;
  case 8:
    pcVar6 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    goto switchD_001f925c_caseD_ffffffff;
  case 9:
    pcVar6 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    goto switchD_001f925c_caseD_ffffffff;
  case 10:
    pcVar6 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_001f925c_caseD_ffffffff;
  case 0xb:
    pcVar6 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    goto switchD_001f925c_caseD_ffffffff;
  case 0xc:
    pcVar6 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    goto switchD_001f925c_caseD_ffffffff;
  case 0xd:
    pcVar6 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    goto switchD_001f925c_caseD_ffffffff;
  case 0xe:
    pcVar6 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    goto switchD_001f925c_caseD_ffffffff;
  case 0xf:
    pcVar6 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x10:
    pcVar6 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x11:
    pcVar6 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x12:
    pcVar6 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x13:
    pcVar6 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x14:
    pcVar6 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x15:
    pcVar6 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x16:
    pcVar6 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x17:
    pcVar6 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x18:
    pcVar6 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x19:
    pcVar6 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1a:
    pcVar6 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1b:
    pcVar6 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1c:
    pcVar6 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1d:
    pcVar6 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1e:
    pcVar6 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x1f:
    pcVar6 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    goto switchD_001f925c_caseD_ffffffff;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar3 = *(uint *)(param_1 + 0x14);
    goto LAB_001f9234;
  case 0x22:
    return 4;
  case 0x5c:
    uVar2 = FUN_001f9a88(param_1);
    pcVar6 = "invalid string: forbidden character after backslash";
    switch(uVar2) {
    case 0x22:
      uVar3 = 0x22;
      break;
    default:
      goto switchD_001f925c_caseD_ffffffff;
    case 0x2f:
      uVar3 = 0x2f;
      break;
    case 0x5c:
      uVar3 = 0x5c;
      break;
    case 0x62:
      uVar3 = 8;
      break;
    case 0x66:
      uVar3 = 0xc;
      break;
    case 0x6e:
      uVar3 = 10;
      break;
    case 0x72:
      uVar3 = 0xd;
      break;
    case 0x74:
      uVar3 = 9;
      break;
    case 0x75:
      uVar3 = FUN_001f9ce0(param_1);
      if (uVar3 == 0xffffffff) {
LAB_001f96c4:
        pcVar6 = "invalid string: \'\\u\' must be followed by 4 hex digits";
        goto switchD_001f925c_caseD_ffffffff;
      }
      if ((uVar3 & 0xfffffc00) == 0xd800) {
        iVar4 = FUN_001f9a88(param_1);
        if ((iVar4 == 0x5c) && (iVar4 = FUN_001f9a88(param_1), iVar4 == 0x75)) {
          uVar5 = FUN_001f9ce0(param_1);
          if (uVar5 == 0xffffffff) goto LAB_001f96c4;
          if (uVar5 >> 10 == 0x37) {
            uVar3 = uVar5 + uVar3 * 0x400 + 0xfca02400;
            goto joined_r0x001f9464;
          }
        }
        pcVar6 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        goto switchD_001f925c_caseD_ffffffff;
      }
      if ((uVar3 & 0xfffffc00) == 0xdc00) {
        pcVar6 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        goto switchD_001f925c_caseD_ffffffff;
      }
joined_r0x001f9464:
      if ((int)uVar3 < 0x80) {
        FUN_001f40e0(lVar1,uVar3);
      }
      else {
        if ((int)uVar3 < 0x800) {
          FUN_001f40e0(lVar1,uVar3 >> 6 | 0xffffffc0);
          uVar3 = uVar3 & 0x3f | 0xffffff80;
          break;
        }
        if ((int)uVar3 < 0x10000) {
          FUN_001f40e0(lVar1,uVar3 >> 0xc | 0xffffffe0);
        }
        else {
          FUN_001f40e0(lVar1,uVar3 >> 0x12 | 0xfffffff0);
          FUN_001f40e0(lVar1,uVar3 >> 0xc & 0x3f | 0xffffff80);
        }
        FUN_001f40e0(lVar1,uVar3 >> 6 & 0x3f | 0xffffff80);
        FUN_001f40e0(lVar1,uVar3 & 0x3f | 0xffffff80);
      }
      goto LAB_001f923c;
    }
LAB_001f9234:
    FUN_001f40e0(lVar1,uVar3);
    goto LAB_001f923c;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    uVar5 = *(uint *)(param_1 + 0x14);
    goto LAB_001f9294;
  case 0xe0:
    FUN_001f40e0(lVar1,*(undefined4 *)(param_1 + 0x14));
    FUN_001f9a88(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
    if ((uVar5 & 0xffffffe0) == 0xa0) goto LAB_001f9294;
    break;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    uVar5 = *(uint *)(param_1 + 0x14);
    goto LAB_001f9274;
  case 0xed:
    FUN_001f40e0(lVar1,*(undefined4 *)(param_1 + 0x14));
    FUN_001f9a88(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar3 = uVar5 & 0xffffffe0;
    goto joined_r0x001f9360;
  case 0xf0:
    FUN_001f40e0(lVar1,*(undefined4 *)(param_1 + 0x14));
    FUN_001f9a88(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
    if (uVar5 - 0x90 < 0x30) goto LAB_001f9274;
    break;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    FUN_001f40e0(lVar1,*(undefined4 *)(param_1 + 0x14));
    FUN_001f9a88(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar3 = uVar5 & 0xffffffc0;
    goto joined_r0x001f93b0;
  case 0xf4:
    FUN_001f40e0(lVar1,*(undefined4 *)(param_1 + 0x14));
    FUN_001f9a88(param_1);
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar3 = uVar5 & 0xfffffff0;
joined_r0x001f93b0:
    if (uVar3 == 0x80) {
LAB_001f9274:
      FUN_001f40e0(lVar1,uVar5);
      FUN_001f9a88(param_1);
      uVar5 = *(uint *)(param_1 + 0x14);
      uVar3 = uVar5 & 0xffffffc0;
joined_r0x001f9360:
      if (uVar3 == 0x80) {
LAB_001f9294:
        FUN_001f40e0(lVar1,uVar5);
        FUN_001f9a88(param_1);
        uVar3 = *(uint *)(param_1 + 0x14);
        if ((uVar3 & 0xffffffc0) == 0x80) goto LAB_001f9234;
      }
    }
    break;
  case 0xffffffff:
    goto switchD_001f925c_caseD_ffffffff;
  }
  pcVar6 = "invalid string: ill-formed UTF-8 byte";
switchD_001f925c_caseD_ffffffff:
  *(char **)(param_1 + 0x68) = pcVar6;
  return 0xe;
}


