#!/bin/bash
wget -P /tmp https://github.com/thecodeghinux/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
