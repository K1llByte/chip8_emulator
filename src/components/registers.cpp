#include "components/registers.hpp"

namespace chip8 {
auto Registers::operator[](Register const reg) const -> std::byte const& {
    return registers[static_cast<usize>(reg)];
}

auto Registers::operator[](Register const reg) -> std::byte& {
    return registers[static_cast<usize>(reg)];
}
} // namespace chip8
