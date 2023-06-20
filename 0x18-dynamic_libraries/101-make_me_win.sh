#!/bin/bash
Wget -P $PWD https://github.com/Nawaritta/alx-low_level_programming/tree/master/0x18-dynamic_libraries/lib_jackpot.so 
export LD_PRELOAD=/$PWD/lib_jackpot.so
