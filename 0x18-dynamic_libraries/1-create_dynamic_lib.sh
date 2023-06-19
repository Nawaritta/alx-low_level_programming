#!/bin/bash
gcc -c *.c -Wall -fPIC
gcc *.o -shared -o liball.so
rm *.o
