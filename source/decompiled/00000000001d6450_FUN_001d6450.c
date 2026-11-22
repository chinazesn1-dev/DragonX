// Recovered from libkentos.so by Ghidra 12.2
// address: 001d6450
// size: 32
// name: FUN_001d6450
// namespace: Global
// signature: undefined FUN_001d6450(void)
// generated: 2026-11-22 21:43:07


void FUN_001d6450(void)

{
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: ((ptr - sh.arena) & ((sh.arena_size >> list) - 1)) == 0",
              "crypto/mem_sec.c",0x10f);
}


