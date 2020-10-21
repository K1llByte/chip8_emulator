#!/bin/bash

[ ! -d build ] && meson setup build

cd build

meson compile

./chip8