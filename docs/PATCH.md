# Login bypass: technical notes

## Render dispatcher

`libkentos.so` contains a render callback that is installed on the game's
`eglSwapBuffers(display, surface)`. The relevant dispatch block is at virtual
address `0x0ec850`:

```asm
0x0ec870  adrp x8, 0x72f000
0x0ec874  ldrb w8, [x8,#0x564]   ; DAT_0082f564: logged-in flag (Ghidra base 0x100000)
0x0ec878  cbz  w8, 0x0ec8b0      ; zero -> draw the login window
0x0ec87c  adrp x20, 0x72f000
0x0ec880  ldrb w8, [x20,#0x4a0]  ; DAT_0082f4a0: menu-open flag
0x0ec884  cmp  w8, #1
0x0ec888  b.ne 0x0ec8c0          ; not open -> draw the floating logo button
0x0ec88c  bl   0x0e8780          ; licence check
0x0ec890  tbz  w0,#0,0x0ec8e8
...
0x0ec8a0  bl   0x0e8780          ; licence check (second gate)
0x0ec8a8  bl   0x0e8afc          ; draw the menu
0x0ec8b0  ...                    ; login window path
0x0ec8b8  bl   0x0e7354          ; draw DEXO LOGIN
```

## Patch 1: skip login

`0x0ec878` is changed from `cbz w8, 0x0ec8b0` (`c8 01 00 34`) to `nop`
(`1f 20 03 d5`). Execution falls through to the existing menu/logo dispatcher.
The floating `LogoBtn` (`FUN_001e6478`) is untouched and still opens the menu by
setting `DAT_0082f4a0 = 1`.

## Patch 2: licence check

`FUN_001e8780` verifies FNV-1a hashes of licence strings and compares two
32-byte key fingerprints. Its entry is replaced with:

```asm
0x0e8780  mov w0, #1
0x0e8784  ret
```

All four call sites (`0x0e875c`, `0x0e8b48`, `0x0ec88c`, `0x0ec8a0`) now receive
success, including the extra checks inside the menu itself.

## Data addresses

Ghidra loads the ELF with an image base of `0x100000`. A Ghidra data address
such as `DAT_0082f564` therefore corresponds to ELF virtual address `0x72f564`.

## Loader behaviour

The cracked loader (`classes5.dex` in `CRACK_DEXOv2_GL4.7.apks`) builds its URL
from Base64 fragments:

```text
https://github.com/chinazesn1-dev/DragonX/releases/latest/download/
```

It probes the release assets with `HEAD`, follows the redirect to the release
asset host, and compares `Content-Length`, `ETag` and `Last-Modified` with the
values stored in the `dexo_online_v2` preferences. Making the patched file
16 bytes longer than the old one guarantees that the size comparison forces a
download.
