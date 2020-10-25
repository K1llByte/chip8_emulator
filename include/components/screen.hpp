#ifndef CHIP8_EMU_COMPONENTS_SCREEN_HPP
#define CHIP8_EMU_COMPONENTS_SCREEN_HPP

#include "util/brief_int.hpp"

#include <array>

namespace chip8 {
class Screen final {
  public:
    enum class Pixel : bool { OFF, ON };
    enum : usize { HEIGHT = 32, WIDTH = 64 };

  private:
    std::array<Pixel, HEIGHT * WIDTH> screen;

  public:
    [[nodiscard]] auto at(usize y, usize x) const -> Pixel const&;
    [[nodiscard]] auto at(usize y, usize x) -> Pixel&;
    auto toggle_pixel(usize y, usize x) -> Pixel;
    auto clear() -> void;
};
} // namespace chip8

#endif // CHIP8_EMU_COMPONENTS_SCREEN_HPP
