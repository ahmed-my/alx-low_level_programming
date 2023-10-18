#!/bin/bash
wget -P /tmp https://github.com/ahmed-my/alx-low_level_programming/raw/master/0x18-dynamic_libraries/program.so
export LD_PRELOAD=/home/vagrant/alx-low_level_programming/0x18-dynamic_libraries/program.so
