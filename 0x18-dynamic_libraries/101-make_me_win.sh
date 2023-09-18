#!/bin/bash
wget -q -o /tmp/test.so "https://github.com/Lemlem-yo/alx-low_level_programming/blob/main/0x18-dynamic_libraries/test.o"
export LD_PRELOAD=/tmp/test.so
