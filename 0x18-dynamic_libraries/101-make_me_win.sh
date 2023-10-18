#!/bin/bash
gcc -shared -o program.so -fPIC my_program.c
LD_PRELOAD=./program.so ./my_program
