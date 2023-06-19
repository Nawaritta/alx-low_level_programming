#!/bin/bash
gcc -c *.c -Wall -fPIC
gcc *.o -shared -o libdynamic.so
rm *.o
