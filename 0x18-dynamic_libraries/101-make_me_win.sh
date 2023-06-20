#!/bin/bash
Wget -P /tmp/ https://github.com/Nawaritta/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_jackpot.so
export LD_PRELOAD=/tmp/lib_jackpot.so
