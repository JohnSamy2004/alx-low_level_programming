#!/bin/bash
wget -P /tmp/libgiga.so https://github.com/JohnSamy2004/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
