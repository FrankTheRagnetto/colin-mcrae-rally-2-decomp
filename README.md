# Colin McRae Rally 2.0 — matching decompilation (PS1)

C source for **Colin McRae Rally 2.0** (Codemasters, 2000; USA, SLUS-01222) that compiles back to the
**exact bytes** of the original game, function by function.

**No game data is in this repository**: no extracted assembly, no executables, no assets.
You need your own copy of the disc; the tools read it (read-only) and check every C file against it.

## Progress

| program | load address | functions | identical in C |
|---|---|---|---|
| `SLUS_012.22` | 0x80010000 | 660 (84 Sony) | **120** |
| `CMR2/BOOT.OVR` | 0x8005AD9C | 27 | **6** |
| `CMR2/INTRO.OVR` | 0x8005AD9C | 14 | **2** |
| `CMR2/SETUP.OVR` | 0x8005AD9C | 165 | **35** |
| `CMR2/FRONTEND.OVR` | 0x8005AD9C | 343 | **171** |
| `CMR2/GAME.OVR` | 0x8005AD9C | 1,022 | **249** |
| **total** | | **2,231** | **583** |

The five overlays have no header: each file is loaded whole at `0x8005AD9C`.
Disc used: track 1 sha1 `4d595880ebb6c6f7a2b63d9503b733f44b1ef230`.

## What's here

- `decomp/<PROGRAM>/` — one `<function>.c` per matched function, `matched.tsv` (name, size in words, flags), `m2c_macros.h`.
- `psxkit/`, `bin/psx-kit` — the toolkit: read the disc, split each program into assembly (splat),
  rebuild it and prove the rebuild is byte-identical, then compile each C file and compare word by word.

## Compiler

The game was built with **GCC 2.8.1 for PS1**, `-O2 -G0` (a few functions `-G8`), assembled through
[maspsx](https://github.com/mkst/maspsx) with `--dont-expand-li`.

## Check it yourself

Needs Linux, Python ≥ 3.11, `clang`/`llvm`, `git`, `curl`.

```bash
python3 -m venv .venv && .venv/bin/pip install -r requirements.txt

TC=~/.local/share/decompnet/toolchains
mkdir -p $TC/gcc-2.8.1-psx
curl -L https://github.com/decompals/old-gcc/releases/download/0.17/gcc-2.8.1-psx.tar.gz | tar xz -C $TC/gcc-2.8.1-psx
git clone https://github.com/mkst/maspsx $TC/maspsx

# split your disc (work folders hold game bytes: keep them OUTSIDE the repo)
CUE="/path/to/Colin McRae Rally 2.0 (USA) (En,Fr,Es).cue"
bin/psx-kit split "$CUE" --disc /SLUS_012.22 /tmp/cmr2_SLUS
for o in BOOT INTRO SETUP FRONTEND GAME; do
  bin/psx-kit split "$CUE" --disc /CMR2/$o.OVR --base 8005AD9C /tmp/cmr2_$o
done

# compile every C file and compare with the original
for p in SLUS BOOT INTRO SETUP FRONTEND GAME; do
  .venv/bin/python -m psxkit.batch /tmp/cmr2_$p decomp/$p /tmp/check-$p.tsv --cc 2.8.1
done
# expected: 120 + 6 + 2 + 35 + 171 + 249 = 583 MATCH
```

`split` exits 0 only if its own rebuild of each program has the same sha1 as the one on your disc,
so a different revision of the game is caught before any C is compared.
On the first `split` the toolkit downloads the public PsyQ signature list from
[ps1-recomp](https://github.com/PS1Recomp/ps1-recomp) into `.cache/` (ignored by git) to name Sony's library
functions; `--no-sony` skips it.

## How the C was written

Drafts by [m2c](https://github.com/matt-kempster/m2c), then automatic fixes, then
[decomp-permuter](https://github.com/simonlindholm/decomp-permuter), then rewriting by hand with AI assistants.
A piece enters `decomp/` only after it compiles to the identical words, and it contains no inline assembly and no `#pragma`.

## Not affiliated

Not affiliated with or endorsed by Codemasters, Electronic Arts or Sony. Colin McRae Rally is a trademark of its owners.
