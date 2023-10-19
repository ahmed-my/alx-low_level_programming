#!/bin/bash
gcc -shared -o my_program.so -fPIC my_program.c
export LD_PRELOAD="$PWD/my_program.so"
