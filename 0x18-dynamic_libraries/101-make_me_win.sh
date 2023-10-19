#!/bin/bash
gcc -fPIC my_program.c -shared -o my_program.so
export LD_PRELOAD="$PWD/my_program.so"
