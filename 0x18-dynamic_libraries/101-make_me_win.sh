#!/bin/bash
$ gcc -shared -o my_program.so -fPIC my_program.c
$ LD_PRELOAD=./my_program.so ./gm n1 n2 n3 n4 n5 bonus
