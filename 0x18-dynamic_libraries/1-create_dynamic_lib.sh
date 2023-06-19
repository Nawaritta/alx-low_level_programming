#!/bin/bash
gcc -c *c -Wall -fpic
gcc *.o -shared -o libdynamic.so
