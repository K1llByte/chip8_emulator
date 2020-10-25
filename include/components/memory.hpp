#ifndef CHIP8_EMU_COMPONENTS_MEMORY_HPP
#define CHIP8_EMU_COMPONENTS_MEMORY_HPP

#include "util/brief_int.hpp"
#include "util/byte_suffixes.hpp"

#include <array>
#include <cstddef>

namespace chip8 {

class Memory final {
  public:
    enum : usize { SIZE = 4_KiB };

  private:
    std::array<std::byte, SIZE> memory;

  public:
    [[nodiscard]] auto operator[](usize idx) const -> std::byte const&;
    [[nodiscard]] auto operator[](usize idx) -> std::byte&;
    auto zero_out() -> void;
};
} // namespace chip8

#endif // CHIP8_EMU_COMPONENTS_MEMORY_HPP
