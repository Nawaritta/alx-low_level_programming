#!/bin/bash
Wget -P $PWD https://github.com/Nawaritta/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libjackpot.so 
export LD_PRELOAD=/$PWD/libjackpot.so
