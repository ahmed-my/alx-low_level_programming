#!/bin/bash
$ gcc -shared -o my_program.so -fPIC my_program.c
$ LD_PRELOAD=./my_program.so ./gm 9 8 10 24 75 9
