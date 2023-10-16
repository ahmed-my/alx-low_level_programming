#!/bin/bash
$ gcc -shared -o mymalloc.so -fPIC my_program.c
$ LD_PRELOAD=./mymalloc.so ./gm
