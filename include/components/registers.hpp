#ifndef CHIP8_EMU_COMPONENTS_REGISTERS_HPP
#define CHIP8_EMU_COMPONENTS_REGISTERS_HPP

#include "util/brief_int.hpp"

#include <array>
#include <cstddef>

namespace chip8 {
class Registers final {
  public:
    enum class Register : usize {
        V0, V1, V2, V3, V4, V5, V6, V7,
        V8, V9, VA, VB, VC, VD, VE, VF,
    };
    enum : usize { REGISTER_COUNT = 16 };

  private:
    std::array<std::byte, REGISTER_COUNT> registers;

  public:
    [[nodiscard]] auto operator[](Register reg) const -> std::byte const&;
    [[nodiscard]] auto operator[](Register reg) -> std::byte&;
};
} // namespace chip8

#endif // CHIP8_EMU_COMPONENTS_REGISTERS_HPP
