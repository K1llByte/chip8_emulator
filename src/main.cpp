#include <iostream>

#include "chip8.hpp"

namespace c8 = chip8;

int main(int /* argc */, char** /* argv */)
{
    std::cout << "Hello Chip8\n";

    const c8::opcode_t draw          = 0x1111;
    const c8::opcode_t clear_display = 0x00E0;

    c8::core_t microprocessor{};

    microprocessor.cycle();
}