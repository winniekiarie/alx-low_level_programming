#!/bin/bash
wget -P /tmp https://github.com/winniekiarie/alx-low_level_programming/tree/6aa97fb6cc55901ad84d7d5ac76e5d62e57b7bee/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
