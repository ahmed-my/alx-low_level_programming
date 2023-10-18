#!/bin/bash
gcc -shared -o program.so -fPIC my_program.c
export LD_PRELOAD=./program.so:$LD_LIBRARY_PATH
