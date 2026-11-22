// Recovered from libkentos.so by Ghidra 12.2
// address: 001f6b34
// size: 3584
// name: FUN_001f6b34
// namespace: Global
// signature: undefined FUN_001f6b34(void)
// generated: 2026-11-22 21:47:01


void FUN_001f6b34(void)

{
  char *pcVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  FILE *__stream;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  byte local_428 [8];
  ulong local_420;
  char *local_418;
  undefined1 local_410;
  ulong local_408;
  undefined1 local_400;
  double local_3f8;
  undefined1 local_3f0;
  long local_3e8;
  undefined1 local_3e0;
  ulong local_3d8;
  undefined1 local_3d0;
  ulong local_3c8;
  undefined1 local_3c0;
  ulong local_3b8;
  undefined1 local_3b0;
  ulong local_3a8;
  undefined1 local_3a0;
  ulong local_398;
  undefined1 local_390;
  ulong local_388;
  undefined1 local_380;
  double local_378;
  undefined1 local_370;
  ulong local_368;
  undefined1 local_360;
  ulong local_358;
  undefined1 local_350;
  ulong local_348;
  undefined1 local_340;
  ulong local_338;
  undefined1 local_330;
  ulong local_328;
  undefined1 local_320;
  ulong local_318;
  undefined1 local_310;
  ulong local_308;
  undefined1 local_300;
  ulong local_2f8;
  undefined1 local_2f0;
  ulong local_2e8;
  undefined1 local_2e0;
  ulong local_2d8;
  undefined1 local_2d0;
  ulong local_2c8;
  undefined1 local_2c0;
  ulong local_2b8;
  undefined1 local_2b0;
  ulong local_2a8;
  undefined1 local_2a0;
  ulong local_298;
  undefined1 local_290;
  ulong local_288;
  undefined1 local_280;
  ulong local_278;
  undefined1 local_270;
  ulong local_268;
  undefined1 local_260;
  ulong local_258;
  undefined1 local_250;
  ulong local_248;
  undefined1 local_240;
  ulong local_238;
  undefined1 local_230;
  ulong local_228;
  undefined1 local_220;
  ulong local_218;
  undefined1 local_210;
  double local_208;
  undefined1 local_200;
  double local_1f8;
  undefined1 local_1f0;
  double local_1e8;
  undefined1 local_1e0;
  long local_1d8;
  undefined1 local_1d0;
  ulong local_1c8;
  undefined1 local_1c0;
  ulong local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined *local_1a0;
  long local_198 [3];
  uint auStack_180 [24];
  FILE *local_120;
  undefined4 local_100;
  undefined *local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_1b8 = (ulong)DAT_0082067c;
  local_1b0[0] = 0;
  local_1a8 = 0;
  local_1c0 = 4;
                    /* try { // try from 001f6b84 to 001f6b93 has its CatchHandler @ 001f7af8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Enable");
  uVar2 = *puVar7;
  *puVar7 = local_1c0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_1b8;
  local_1c0 = uVar2;
  local_1b8 = uVar8;
  FUN_00204a08(&local_1b8);
  local_1c8 = (ulong)DAT_00820740;
  local_1d0 = 4;
                    /* try { // try from 001f6bd0 to 001f6bdf has its CatchHandler @ 001f7af0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Active");
  uVar2 = *puVar7;
  *puVar7 = local_1d0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_1c8;
  local_1d0 = uVar2;
  local_1c8 = uVar8;
  FUN_00204a08(&local_1c8);
  local_1d8 = (long)DAT_00820744;
  local_1e0 = 5;
                    /* try { // try from 001f6c20 to 001f6c2f has its CatchHandler @ 001f7ae8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Target");
  uVar2 = *puVar7;
  *puVar7 = local_1e0;
  lVar9 = *(long *)(puVar7 + 8);
  *(long *)(puVar7 + 8) = local_1d8;
  local_1e0 = uVar2;
  local_1d8 = lVar9;
  FUN_00204a08(&local_1d8);
  local_1e8 = (double)DAT_00820768;
  local_1f0 = 7;
                    /* try { // try from 001f6c74 to 001f6c83 has its CatchHandler @ 001f7ae0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Smooth");
  uVar2 = *puVar7;
  *puVar7 = local_1f0;
  dVar10 = *(double *)(puVar7 + 8);
  *(double *)(puVar7 + 8) = local_1e8;
  local_1f0 = uVar2;
  local_1e8 = dVar10;
  FUN_00204a08(&local_1e8);
  local_200 = 7;
  local_1f8 = (double)DAT_0082075c;
                    /* try { // try from 001f6cc4 to 001f6cd3 has its CatchHandler @ 001f7ad8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Cross");
  uVar2 = *puVar7;
  *puVar7 = local_200;
  dVar10 = *(double *)(puVar7 + 8);
  *(double *)(puVar7 + 8) = local_1f8;
  local_200 = uVar2;
  local_1f8 = dVar10;
  FUN_00204a08(&local_1f8);
  local_208 = (double)DAT_008206a4;
  local_210 = 7;
                    /* try { // try from 001f6d18 to 001f6d27 has its CatchHandler @ 001f7ad0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_Meter");
  uVar2 = *puVar7;
  *puVar7 = local_210;
  dVar10 = *(double *)(puVar7 + 8);
  *(double *)(puVar7 + 8) = local_208;
  local_210 = uVar2;
  local_208 = dVar10;
  FUN_00204a08(&local_208);
  local_218 = (ulong)DAT_0082076d;
  local_220 = 4;
                    /* try { // try from 001f6d68 to 001f6d77 has its CatchHandler @ 001f7ac8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_IgnoreKnocked");
  uVar2 = *puVar7;
  *puVar7 = local_220;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_218;
  local_220 = uVar2;
  local_218 = uVar8;
  FUN_00204a08(&local_218);
  local_228 = (ulong)DAT_0082076e;
  local_230 = 4;
                    /* try { // try from 001f6db4 to 001f6dc3 has its CatchHandler @ 001f7ac0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_IgnoreBots");
  uVar2 = *puVar7;
  *puVar7 = local_230;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_228;
  local_230 = uVar2;
  local_228 = uVar8;
  FUN_00204a08(&local_228);
  local_238 = (ulong)DAT_0082076f;
  local_240 = 4;
                    /* try { // try from 001f6e04 to 001f6e13 has its CatchHandler @ 001f7ab8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_VisCheck");
  uVar2 = *puVar7;
  *puVar7 = local_240;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_238;
  local_240 = uVar2;
  local_238 = uVar8;
  FUN_00204a08(&local_238);
  local_248 = (ulong)DAT_0082076c;
  local_250 = 4;
                    /* try { // try from 001f6e50 to 001f6e5f has its CatchHandler @ 001f7ab0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Aimbot_RecoilHold");
  uVar2 = *puVar7;
  *puVar7 = local_250;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_248;
  local_250 = uVar2;
  local_248 = uVar8;
  FUN_00204a08(&local_248);
  local_258 = (ulong)DAT_0082067d;
  local_260 = 4;
                    /* try { // try from 001f6ea0 to 001f6eaf has its CatchHandler @ 001f7aa8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"BT_Enable");
  uVar2 = *puVar7;
  *puVar7 = local_260;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_258;
  local_260 = uVar2;
  local_258 = uVar8;
  FUN_00204a08(&local_258);
  local_268 = (ulong)DAT_008209ac;
  local_270 = 4;
                    /* try { // try from 001f6eec to 001f6efb has its CatchHandler @ 001f7aa0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"BT_Active");
  uVar2 = *puVar7;
  *puVar7 = local_270;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_268;
  local_270 = uVar2;
  local_268 = uVar8;
  FUN_00204a08(&local_268);
  local_278 = (ulong)DAT_008209bc;
  local_280 = 4;
                    /* try { // try from 001f6f3c to 001f6f4b has its CatchHandler @ 001f7a98 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"BT_IgnoreKnocked");
  uVar2 = *puVar7;
  *puVar7 = local_280;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_278;
  local_280 = uVar2;
  local_278 = uVar8;
  FUN_00204a08(&local_278);
  local_288 = (ulong)DAT_008209be;
  local_290 = 4;
                    /* try { // try from 001f6f88 to 001f6f97 has its CatchHandler @ 001f7a90 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"BT_VisCheck");
  uVar2 = *puVar7;
  *puVar7 = local_290;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_288;
  local_290 = uVar2;
  local_288 = uVar8;
  FUN_00204a08(&local_288);
  local_298 = (ulong)DAT_008206bd;
  local_2a0 = 4;
                    /* try { // try from 001f6fd8 to 001f6fe7 has its CatchHandler @ 001f7a88 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Line");
  uVar2 = *puVar7;
  *puVar7 = local_2a0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_298;
  local_2a0 = uVar2;
  local_298 = uVar8;
  FUN_00204a08(&local_298);
  local_2a8 = (ulong)DAT_008206c6;
  local_2b0 = 4;
                    /* try { // try from 001f7024 to 001f7033 has its CatchHandler @ 001f7a80 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Box");
  uVar2 = *puVar7;
  *puVar7 = local_2b0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2a8;
  local_2b0 = uVar2;
  local_2a8 = uVar8;
  FUN_00204a08(&local_2a8);
  local_2b8 = (ulong)DAT_008206d6;
  local_2c0 = 4;
                    /* try { // try from 001f7074 to 001f7083 has its CatchHandler @ 001f7a78 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Skeleton");
  uVar2 = *puVar7;
  *puVar7 = local_2c0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2b8;
  local_2c0 = uVar2;
  local_2b8 = uVar8;
  FUN_00204a08(&local_2b8);
  local_2c8 = (ulong)DAT_008206bf;
  local_2d0 = 4;
                    /* try { // try from 001f70c0 to 001f70cf has its CatchHandler @ 001f7a70 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Health");
  uVar2 = *puVar7;
  *puVar7 = local_2d0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2c8;
  local_2d0 = uVar2;
  local_2c8 = uVar8;
  FUN_00204a08(&local_2c8);
  local_2d8 = (ulong)DAT_008206c0;
  local_2e0 = 4;
                    /* try { // try from 001f7110 to 001f711f has its CatchHandler @ 001f7a68 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Name");
  uVar2 = *puVar7;
  *puVar7 = local_2e0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2d8;
  local_2e0 = uVar2;
  local_2d8 = uVar8;
  FUN_00204a08(&local_2d8);
  local_2e8 = (ulong)DAT_008206c1;
  local_2f0 = 4;
                    /* try { // try from 001f715c to 001f716b has its CatchHandler @ 001f7a60 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Distance");
  uVar2 = *puVar7;
  *puVar7 = local_2f0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2e8;
  local_2f0 = uVar2;
  local_2e8 = uVar8;
  FUN_00204a08(&local_2e8);
  local_2f8 = (ulong)DAT_008206c2;
  local_300 = 4;
                    /* try { // try from 001f71ac to 001f71bb has its CatchHandler @ 001f7a58 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_TeamID");
  uVar2 = *puVar7;
  *puVar7 = local_300;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_2f8;
  local_300 = uVar2;
  local_2f8 = uVar8;
  FUN_00204a08(&local_2f8);
  local_308 = (ulong)DAT_008206cf;
  local_310 = 4;
                    /* try { // try from 001f71f8 to 001f7207 has its CatchHandler @ 001f7a50 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Vehicle");
  uVar2 = *puVar7;
  *puVar7 = local_310;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_308;
  local_310 = uVar2;
  local_308 = uVar8;
  FUN_00204a08(&local_308);
  local_318 = (ulong)DAT_008206ce;
  local_320 = 4;
                    /* try { // try from 001f7248 to 001f7257 has its CatchHandler @ 001f7a48 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Grenade");
  uVar2 = *puVar7;
  *puVar7 = local_320;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_318;
  local_320 = uVar2;
  local_318 = uVar8;
  FUN_00204a08(&local_318);
  local_328 = (ulong)DAT_008206cb;
  local_330 = 4;
                    /* try { // try from 001f7294 to 001f72a3 has its CatchHandler @ 001f7a40 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Alert");
  uVar2 = *puVar7;
  *puVar7 = local_330;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_328;
  local_330 = uVar2;
  local_328 = uVar8;
  FUN_00204a08(&local_328);
  local_338 = (ulong)DAT_008206e4;
  local_340 = 4;
                    /* try { // try from 001f72e4 to 001f72f3 has its CatchHandler @ 001f7a38 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_Enable");
  uVar2 = *puVar7;
  *puVar7 = local_340;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_338;
  local_340 = uVar2;
  local_338 = uVar8;
  FUN_00204a08(&local_338);
  local_350 = 4;
  local_348 = (ulong)(DAT_008206ca ^ 1);
                    /* try { // try from 001f7338 to 001f7347 has its CatchHandler @ 001f7a30 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"ESP_ShowBots");
  uVar2 = *puVar7;
  *puVar7 = local_350;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_348;
  local_350 = uVar2;
  local_348 = uVar8;
  FUN_00204a08(&local_348);
  local_358 = (ulong)DAT_008206d2;
  local_360 = 4;
                    /* try { // try from 001f7388 to 001f7397 has its CatchHandler @ 001f7a28 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Mem_Cross");
  uVar2 = *puVar7;
  *puVar7 = local_360;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_358;
  local_360 = uVar2;
  local_358 = uVar8;
  FUN_00204a08(&local_358);
  local_368 = (ulong)DAT_00820707;
  local_370 = 4;
                    /* try { // try from 001f73d4 to 001f73e3 has its CatchHandler @ 001f7a20 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Mem_IPad");
  uVar2 = *puVar7;
  *puVar7 = local_370;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_368;
  local_370 = uVar2;
  local_368 = uVar8;
  FUN_00204a08(&local_368);
  local_378 = (double)DAT_00820670;
  local_380 = 7;
                    /* try { // try from 001f7428 to 001f7437 has its CatchHandler @ 001f7a18 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Mem_Ipads");
  uVar2 = *puVar7;
  *puVar7 = local_380;
  dVar10 = *(double *)(puVar7 + 8);
  *(double *)(puVar7 + 8) = local_378;
  local_380 = uVar2;
  local_378 = dVar10;
  FUN_00204a08(&local_378);
  local_388 = (ulong)DAT_00820864;
  local_390 = 4;
                    /* try { // try from 001f7478 to 001f7487 has its CatchHandler @ 001f7a10 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Mem_Fps165");
  uVar2 = *puVar7;
  *puVar7 = local_390;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_388;
  local_390 = uVar2;
  local_388 = uVar8;
  FUN_00204a08(&local_388);
  puVar4 = PTR_DAT_00758cd0;
  local_3a0 = 4;
  local_398 = (ulong)(byte)PTR_DAT_00758cd0[4];
                    /* try { // try from 001f74cc to 001f74db has its CatchHandler @ 001f7a08 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Skin_Enable");
  uVar2 = *puVar7;
  *puVar7 = local_3a0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_398;
  local_3a0 = uVar2;
  local_398 = uVar8;
  FUN_00204a08(&local_398);
  local_3a8 = (ulong)(byte)puVar4[10];
  local_3b0 = 4;
                    /* try { // try from 001f751c to 001f752b has its CatchHandler @ 001f7a00 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Skin_Deadbox");
  uVar2 = *puVar7;
  *puVar7 = local_3b0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_3a8;
  local_3b0 = uVar2;
  local_3a8 = uVar8;
  FUN_00204a08(&local_3a8);
  local_3b8 = (ulong)(byte)puVar4[8];
  local_3c0 = 4;
                    /* try { // try from 001f7568 to 001f7577 has its CatchHandler @ 001f79f8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Skin_KillMsg");
  uVar2 = *puVar7;
  *puVar7 = local_3c0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_3b8;
  local_3c0 = uVar2;
  local_3b8 = uVar8;
  FUN_00204a08(&local_3b8);
  local_3c8 = (ulong)(byte)DAT_00820776;
  local_3d0 = 4;
                    /* try { // try from 001f75b8 to 001f75c7 has its CatchHandler @ 001f79f0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Skin_Lua");
  uVar2 = *puVar7;
  *puVar7 = local_3d0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_3c8;
  local_3d0 = uVar2;
  local_3c8 = uVar8;
  FUN_00204a08(&local_3c8);
  local_3d8 = (ulong)DAT_00820776._1_1_;
  local_3e0 = 4;
                    /* try { // try from 001f7604 to 001f7613 has its CatchHandler @ 001f79e8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Skin_BangJo");
  uVar2 = *puVar7;
  *puVar7 = local_3e0;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_3d8;
  local_3e0 = uVar2;
  local_3d8 = uVar8;
  FUN_00204a08(&local_3d8);
  local_3e8 = (long)DAT_0082f904;
  local_3f0 = 5;
  DAT_008209cc = DAT_0082f904;
                    /* try { // try from 001f765c to 001f766b has its CatchHandler @ 001f79e0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Settings_Lang");
  uVar2 = *puVar7;
  *puVar7 = local_3f0;
  lVar9 = *(long *)(puVar7 + 8);
  *(long *)(puVar7 + 8) = local_3e8;
  local_3f0 = uVar2;
  local_3e8 = lVar9;
  FUN_00204a08(&local_3e8);
  local_3f8 = (double)DAT_00820a90;
  local_400 = 7;
                    /* try { // try from 001f76b4 to 001f76c3 has its CatchHandler @ 001f79d8 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Settings_Opacity");
  uVar2 = *puVar7;
  *puVar7 = local_400;
  dVar10 = *(double *)(puVar7 + 8);
  *(double *)(puVar7 + 8) = local_3f8;
  local_400 = uVar2;
  local_3f8 = dVar10;
  FUN_00204a08(&local_3f8);
  local_408 = (ulong)DAT_0082f2c4;
  local_410 = 4;
                    /* try { // try from 001f7708 to 001f7717 has its CatchHandler @ 001f79d0 */
  puVar7 = (undefined1 *)FUN_001e2220(local_1b0,"Settings_Fps");
  uVar2 = *puVar7;
  *puVar7 = local_410;
  uVar8 = *(ulong *)(puVar7 + 8);
  *(ulong *)(puVar7 + 8) = local_408;
  local_410 = uVar2;
  local_408 = uVar8;
  FUN_00204a08(&local_408);
                    /* try { // try from 001f7740 to 001f775b has its CatchHandler @ 001f7b28 */
  FUN_001f43a8();
  FUN_001e1a64(local_428,&DAT_0082f840,"/cheat_config.json");
  local_1a0 = PTR_construction_vtable_00758270 + 0x18;
  local_f0[0] = PTR_construction_vtable_00758270 + 0x40;
                    /* try { // try from 001f7780 to 001f778b has its CatchHandler @ 001f79ac */
  std::__ndk1::ios_base::init((ios_base *)local_f0,local_198);
  puVar4 = PTR_vtable_007581b0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_1a0 = PTR_vtable_007581b0 + 0x18;
  local_f0[0] = PTR_vtable_007581b0 + 0x40;
                    /* try { // try from 001f77b0 to 001f77b7 has its CatchHandler @ 001f79a8 */
  FUN_0020c2bc(local_198);
  if (local_120 == (FILE *)0x0) {
    pcVar1 = (char *)((ulong)local_428 | 1);
    if ((local_428[0] & 1) != 0) {
      pcVar1 = local_418;
    }
    local_120 = fopen(pcVar1,"w");
    if (local_120 == (FILE *)0x0) goto LAB_001f77c0;
    local_100 = 0x10;
  }
  else {
LAB_001f77c0:
                    /* try { // try from 001f77d8 to 001f77db has its CatchHandler @ 001f7994 */
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)local_198 + *(long *)(local_1a0 + -0x18) + -8),
               *(uint *)((long)auStack_180 + *(long *)(local_1a0 + -0x18)) | 4);
  }
  if ((local_428[0] & 1) != 0) {
    operator_delete(local_418);
  }
  if (local_120 != (FILE *)0x0) {
                    /* try { // try from 001f77f4 to 001f7813 has its CatchHandler @ 001f7968 */
    FUN_001e5b94(local_428,local_1b0,4,0x20,0,0);
    uVar8 = (ulong)(local_428[0] >> 1);
    pcVar1 = (char *)((ulong)local_428 | 1);
    if ((local_428[0] & 1) != 0) {
      uVar8 = local_420;
      pcVar1 = local_418;
    }
                    /* try { // try from 001f7830 to 001f7837 has its CatchHandler @ 001f794c */
    FUN_001f7e60(&local_1a0,pcVar1,uVar8);
    if ((local_428[0] & 1) != 0) {
      operator_delete(local_418);
    }
    __stream = local_120;
    if (local_120 != (FILE *)0x0) {
                    /* try { // try from 001f7858 to 001f785f has its CatchHandler @ 001f7934 */
      iVar5 = (**(code **)(local_198[0] + 0x30))(local_198);
      iVar6 = fclose(__stream);
      if ((iVar6 == 0) && (local_120 = (FILE *)0x0, iVar5 == 0)) goto LAB_001f7894;
    }
                    /* try { // try from 001f7890 to 001f7893 has its CatchHandler @ 001f7948 */
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)local_198 + *(long *)(local_1a0 + -0x18) + -8),
               *(uint *)((long)auStack_180 + *(long *)(local_1a0 + -0x18)) | 4);
  }
LAB_001f7894:
  local_1a0 = puVar4 + 0x18;
  local_f0[0] = puVar4 + 0x40;
  FUN_001f4964(local_198);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_f0);
  FUN_00204a08(&local_1a8,local_1b0[0]);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


