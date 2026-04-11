#!/usr/bin/bash

find . -type f \( -name "*.hpp" -or -name "*.cpp" \) -exec clang-format -i {} \;
