#include "components/screen.hpp"

namespace {
auto constexpr to_1d(usize const y, usize const x) noexcept -> usize {
    return y * chip8::Screen::WIDTH + x;
}
} // namespace

namespace chip8 {
auto Screen::at(usize const y, usize const x) const -> Pixel const& {
    return screen[to_1d(y, x)];
}

auto Screen::at(usize const y, usize const x) -> Pixel& {
    return screen[to_1d(y, x)];
}

auto Screen::toggle_pixel(usize const y, usize const x) -> Pixel {
    auto& p = at(y, x);
    p = static_cast<Pixel>(!static_cast<bool>(p));
    return p;
}

auto Screen::clear() -> void {
    screen.fill(Pixel::OFF);
}
} // namespace chip8
