#include "components/memory.hpp"

namespace chip8 {
[[nodiscard]]
auto Memory::operator[](usize const idx) const -> std::byte const& {
    return memory[idx];
}

[[nodiscard]]
auto Memory::operator[](usize const idx) -> std::byte& {
    return memory[idx];
}

auto Memory::zero_out() -> void {
    memory.fill(0_B);
}
} // namespace chip8
