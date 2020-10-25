#ifndef CHIP8_EMU_COMPONENTS_STACK_HPP
#define CHIP8_EMU_COMPONENTS_STACK_HPP

#include "util/brief_int.hpp"

#include <array>
#include <optional>

namespace chip8 {
class Stack final {
  public:
    enum : u8 { DEPTH = 16 };

  private:
    std::array<u16, DEPTH> stack;
    u8 pointer;

  public:
    auto push(u16 val) -> bool;
    auto pop() -> std::optional<u16>;
    [[nodiscard]] auto stack_pointer() const -> u8;
    [[nodiscard]] auto is_full() const -> bool;
    [[nodiscard]] auto top() const -> u16 const*;
    [[nodiscard]] auto top() -> u16*;
    [[nodiscard]] auto peek(u8 idx) const -> u16 const*;
    [[nodiscard]] auto peek(u8 idx) -> u16*;
};
} // namespace chip8

#endif // CHIP8_EMU_COMPONENTS_STACK_HPP
