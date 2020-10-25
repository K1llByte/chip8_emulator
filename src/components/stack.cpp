#include "components/stack.hpp"

namespace chip8 {
auto Stack::push(u16 const val) -> bool {
    if (pointer < Stack::DEPTH) {
        stack[pointer] = val;
        return true;
    }
    return false;
}

auto Stack::pop() -> std::optional<u16> {
    if (pointer > 0) {
        return { stack[--pointer] };
    }
    return {};
}

[[nodiscard]]
auto Stack::stack_pointer() const -> u8 {
    return pointer;
}

[[nodiscard]]
auto Stack::is_full() const -> bool {
    return pointer == Stack::DEPTH;
}

[[nodiscard]]
auto Stack::top() const -> u16 const* {
    return pointer > 0 ? stack.data() + pointer - 1 : nullptr;
}

[[nodiscard]]
auto Stack::top() -> u16* {
    return pointer > 0 ? stack.data() + pointer - 1 : nullptr;
}

[[nodiscard]]
auto Stack::peek(u8 const idx) const -> u16 const* {
    return idx < pointer ? stack.data() + pointer : nullptr;
}

[[nodiscard]]
auto Stack::peek(u8 const idx) -> u16* {
    return idx < pointer ? stack.data() + pointer : nullptr;
}
} // namespace chip8
