#include "chip8.hpp"

#include <functional>
#include <iostream>


inline static void opcode_0() // 3 instructions
{
    std::cout << "ok found\n";
}
inline static void opcode_1() // 1 instructions
{

}
inline static void opcode_2() // 1 instructions
{

}
inline static void opcode_3() // 1 instructions
{

}
inline static void opcode_4() // 1 instructions
{

}
inline static void opcode_5() // 1 instructions
{

}
inline static void opcode_6() // 1 instructions
{

}
inline static void opcode_7() // 1 instructions
{

}
inline static void opcode_8() // 9 instructions
{

}
inline static void opcode_9() // 1 instructions
{

}
inline static void opcode_A() // 1 instructions
{

}
inline static void opcode_B() // 1 instructions
{

}
inline static void opcode_C() // 1 instructions
{

}
inline static void opcode_D() // 1 instructions
{

}
inline static void opcode_E() // 2 instructions
{

}
inline static void opcode_F() // 9 instructions
{

}


void chip8::core_t::cycle() noexcept
{
    // Fetch instruction
    chip8::opcode_t current_instruction{ memory[pc] << 8 | memory[pc+1] };
    
    // Decode instruction
    static const std::array<std::function<void(void)>,16> indexed_switch_case{
        opcode_0,
        opcode_1,
        opcode_2,
        opcode_3,
        opcode_4,
        opcode_5,
        opcode_6,
        opcode_7,
        opcode_8,
        opcode_9,
        opcode_A,
        opcode_B,
        opcode_C,
        opcode_D,
        opcode_E,
        opcode_F
    };

    indexed_switch_case[current_instruction >> 12]();

    // Execute instruction
    
    // Update Timers
    if(delay_timer)
        --delay_timer;

    if(sound_timer)
    {
        //if(sound_timer == 1)
        //    // Beep sound!
        --sound_timer;
    }
}