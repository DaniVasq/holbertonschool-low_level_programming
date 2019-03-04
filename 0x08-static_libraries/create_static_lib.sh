#!/bin/bash
gcc -c *.c
ar -rc liball.a *.o
gcc main.c -L. -lholberton -o filename
