#!/usr/bin/env python3
"""Differential Unicorn test for the login-gate patch."""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

from unicorn import UC_HOOK_CODE
from unicorn.arm64_const import (
    UC_ARM64_REG_PC,
    UC_ARM64_REG_SP,
    UC_ARM64_REG_X0,
    UC_ARM64_REG_X28,
    UC_ARM64_REG_X30,
)

from unicorn_probe import BASE, SENTINEL, STACK_BASE, STACK_SIZE, Arm64Probe

ORIGINAL = Path(r"C:\Users\user\Desktop\libs\libkentos.so")
PATCHED = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(
    r"C:\Users\user\Desktop\libs\recovered\build\patched\libkentos.so")

GATE = 0xEC870
GATE_END = 0xEC8EC
LOGIN = 0xE7354
FLOATING = 0xE6478
MENU = 0xE8AFC
LICENCE = 0xE8780
F564 = 0x72F564
F4A0 = 0x72F4A0
SCRATCH = 0x72FF00


def run_gate(elf: Path, logged_in: int, menu_open: int) -> dict:
    probe = Arm64Probe(str(elf))
    calls: list[int] = []

    def stop_call(uc, address, size, _user):
        if address in (BASE + LOGIN, BASE + FLOATING, BASE + MENU):
            calls.append(address - BASE)
            uc.reg_write(UC_ARM64_REG_PC, uc.reg_read(UC_ARM64_REG_X30))

    probe.uc.hook_add(UC_HOOK_CODE, stop_call)
    probe.uc.mem_write(BASE + F564, bytes([logged_in]))
    probe.uc.mem_write(BASE + F4A0, bytes([menu_open]))
    probe.uc.mem_write(BASE + SCRATCH, b"\x01")
    probe.uc.reg_write(UC_ARM64_REG_SP, STACK_BASE + STACK_SIZE - 0x400)
    probe.uc.reg_write(UC_ARM64_REG_X28, BASE + SCRATCH)
    probe.uc.reg_write(UC_ARM64_REG_X30, BASE + GATE_END)
    error = None
    try:
        probe.uc.emu_start(BASE + GATE, BASE + GATE_END, timeout=5_000_000, count=200_000)
    except Exception as exc:  # noqa: BLE001
        error = str(exc)
    return {
        "logged_in": logged_in,
        "menu_open": menu_open,
        "calls": [hex(x) for x in calls],
        "login_called": LOGIN in calls,
        "floating_called": FLOATING in calls,
        "menu_called": MENU in calls,
        "error": error,
    }


def run_licence(elf: Path) -> dict:
    probe = Arm64Probe(str(elf))
    probe.uc.reg_write(UC_ARM64_REG_SP, STACK_BASE + STACK_SIZE - 0x400)
    probe.uc.reg_write(UC_ARM64_REG_X30, SENTINEL)
    error = None
    try:
        probe.uc.emu_start(BASE + LICENCE, SENTINEL, timeout=5_000_000, count=100_000)
        value = probe.uc.reg_read(UC_ARM64_REG_X0)
    except Exception as exc:  # noqa: BLE001
        error = str(exc)
        value = None
    return {"x0": value, "error": error}


def main() -> int:
    original = run_gate(ORIGINAL, logged_in=0, menu_open=0)
    patched_gate = run_gate(PATCHED, logged_in=0, menu_open=0)
    patched_menu = run_gate(PATCHED, logged_in=0, menu_open=1)
    original_licence = run_licence(ORIGINAL)
    patched_licence = run_licence(PATCHED)

    for name, value in (
        ("original_gate", original),
        ("patched_gate", patched_gate),
        ("patched_menu", patched_menu),
        ("original_licence", original_licence),
        ("patched_licence", patched_licence),
    ):
        print(f"{name}: {value}")

    ok = (
        original["login_called"]
        and not patched_gate["login_called"]
        and patched_gate["floating_called"]
        and not patched_menu["login_called"]
        and patched_menu["menu_called"]
        and patched_licence["x0"] == 1
        and patched_gate["error"] is None
        and patched_menu["error"] is None
        and patched_licence["error"] is None
    )
    print("GATE_TEST_OK" if ok else "GATE_TEST_FAILED")
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
