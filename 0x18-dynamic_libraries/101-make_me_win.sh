#!/bin/bash
gcc -shared -o my_program.so -fPIC my_program.c
export LD_PRELOAD=./my_program.so:$LD_LIBRARY_PATH
