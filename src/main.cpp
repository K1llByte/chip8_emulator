#include "vm.hpp"

#include <iostream>
#include <cstdlib>

auto main(int argc, char* argv[]) -> int {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    if (argc < 2) {
        std::cerr << "Expected ROM filename." << std::endl;
        return EXIT_FAILURE;
    }

    chip8::VM();
}
