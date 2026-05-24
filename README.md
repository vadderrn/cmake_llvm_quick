# cmake_llvm_quick

A modern C/C++ project template.

| Tool | Purpose | Tool | Purpose |
|------|---------|------|---------|
| CMake | Build system | GTest | Unit testing |
| LLVM/Clang | Compiler toolchain | LLDB | Debugger |
| Ninja | Fast parallel builds | Clang-format | Code formatting |
| GitHub Actions | CI | Git hooks | Pre-commit formatting |

## Preparation

### Windows
Start from here: https://github.com/vadderrn/config#windows

Install `scoop`, `VS Build Tools` and `cmake`, `ninja`.
```powershell
scoop install llvm # installs: clang,clang++,lld,clang-format

# optional for lldb dependency
scoop bucket add versions
scoop install versions/python311
```

### Linux (Ubuntu/Debian)
```bash
sudo apt install -y cmake ninja-build clang clang-format lldb
```

### macOS

```bash
# homebrew: https://brew.sh/
sh -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

brew install cmake ninja llvm # includes clang-format
```


## Build and run

```bash
cmake -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ `
    -DCMAKE_BUILD_TYPE=Debug # or release
cmake --build build
```

## Quick reference

| Command | Description |
|---------|-------------|
| `cmake --build build --target test` | Build & run tests |
| `cmake --install build --prefix ./out` | Install binaries |
| `./format.sh` | Format all sources |
| `clang-format -i file.cpp` | Format single file |
| `lldb -s ./debug.lldb ./build/app/app.exe` | Debug with `.lldbinit` |

## Pre-commit hook

Auto-formats staged `.cpp`/`.h` files before each commit:
```bash
git config core.hooksPath .githooks
```
