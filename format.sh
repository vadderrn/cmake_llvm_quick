#!/bin/sh
find . \( -name '*.cpp' -o -name '*.h' -o -name '*.hpp' -o -name '*.c' \) \
    -not -path './build/*' -not -path './.cache/*' \
    -exec clang-format -i -style=file {} +
