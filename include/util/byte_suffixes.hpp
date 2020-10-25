#ifndef BYTE_SUFFIXES_HPP
#define BYTE_SUFFIXES_HPP

#include <cstddef>

auto constexpr operator""_KB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1000;
}
auto constexpr operator""_MB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1'000'000;
}
auto constexpr operator""_GB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1'000'000'000;
}

auto constexpr operator""_KiB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1024;
}
auto constexpr operator""_MiB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1024 * 1024;
}
auto constexpr operator""_GiB(unsigned long long int n) noexcept -> std::size_t {
    return n * 1024 * 1024 * 1024;
}

auto constexpr operator""_B(unsigned long long int n) noexcept -> std::byte {
    return std::byte{static_cast<unsigned char>(n)};
}

#endif // BYTE_SUFFIXES
