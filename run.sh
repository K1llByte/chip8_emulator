#!/bin/bash
build_dirname=build
exe=$build_dirname/chip8-emu

meson $build_dirname &&
meson compile -C $build_dirname &&
echo -e '\nOutput:' &&
./$exe "$@"
