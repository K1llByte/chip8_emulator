#ifndef CHIP8_HPP
#define CHIP8_HPP

#include <array>
#include <cstdint>

namespace chip8 
{
    using byte_t = uint8_t;
    using opcode_t = uint16_t;
    using v_registers_t = std::array<uint8_t,16>;

    const std::size_t MEMORY_SIZE = 4096;

    class core_t
    {
        private:
        
        uint8_t delay_timer;
        uint8_t sound_timer;
        v_registers_t registers;
        opcode_t pc;
        std::array<uint8_t,MEMORY_SIZE> memory;

        // Graphics Unit
        // Input (Handler) Unit

        public:
        
        core_t() = default;

        void initialize() noexcept;

        void cycle() noexcept;
    };
}

#endif // CHIP8_HPP