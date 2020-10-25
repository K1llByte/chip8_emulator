project(
    'chip8-emu',
    'cpp',
    version: '0.0.0',
    default_options: ['c_std=c18', 'cpp_std=c++2a'],
    license: 'GPL-3.0'
)

src = ['src/main.cpp']
include = include_directories('include')
sdl2dep = dependency('sdl2')

executable(
    'chip8-emu',
    src,
    include_directories: include,
    dependencies: sdl2dep
)
