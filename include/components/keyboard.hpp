#ifndef CHIP8_EMU_COMPONENTS_KEYBOARD_HPP
#define CHIP8_EMU_COMPONENTS_KEYBOARD_HPP

#include "util/brief_int.hpp"

#include <array>

namespace chip8 {
class Keyboard final {
  public:
    enum class Key {};
    enum : usize { KEY_COUNT = 16 };

  private:
    std::array<Key, KEY_COUNT> keyboard;
};
} // namespace chip8

#endif // CHIP8_EMU_COMPONENTS_KEYBOARD_HPP
