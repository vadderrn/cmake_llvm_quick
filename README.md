# cmake_llvm_quick
Template C/C++ project with CMake / LLVM Toolchain / Ninja / LLDB / GTEST / Clang-format.

## Preparation

### Windows
Reference to start: https://github.com/vadderrn/config#windows

Install `scoop`, `VS Build Tools` and `cmake`, `ninja`.
```powershell
scoop install llvm # installs: clang,clang++,lld,clang-format

# optional for lldb dependency
scoop bucket add versions
scoop install versions/python311
```

## Build and run
```bash
cmake -B build -G Ninja -DCMAKE_CXX_COMPILER=clang++ `
    -DCMAKE_BUILD_TYPE=Debug # or release
cmake --build build
cmake --install build --prefix ./out
```

## Debug using LLDB

Commands are in `.lldbinit` — auto-executed on launch:
```bash
lldb -s ./debug.lldb ./build/app/app.exe
```
