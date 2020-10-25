#ifndef CHIP8_EMU_VM_HPP
#define CHIP8_EMU_VM_HPP

#include "components/keyboard.hpp"
#include "components/memory.hpp"
#include "components/registers.hpp"
#include "components/screen.hpp"
#include "components/stack.hpp"
#include "util/brief_int.hpp"

namespace chip8 {
class VM final {
  public:
    using opcode_t = u16;

    Registers registers;
    usize index_register;
    u8 delay_timer;
    u8 sound_timer;
    u16 program_counter;
    Stack stack;
    Memory memory;
    Screen screen;
    Keyboard keyboard;
};
} // namespace chip8

#endif // CHIP8_EMU_VM_HPP
