//
// std::format and std::formatter extensions
// 
// SPDX-License-Identifier: MIT
//

#pragma once

#include <type_traits>
#include <format>


namespace stdx {


//
// Convert any pointer to const void* for pointer formatting.
//
template <typename T>
inline
auto
fmt_ptr(T p)
{
    static_assert(std::is_pointer<T>::value, "not a pointer type");
    return static_cast<const void*>(p);
}



template <typename T>
std::string
fmt_hex(T x, std::string_view prefix = "0x")
{
    return std::format("{}{:0{}x}", prefix, x, sizeof(T)*2);
}

template <typename T>
std::string
fmt_HEX(T x, std::string_view prefix = "0x")
{
    return std::format("{}{:0{}X}", prefix, x, sizeof(T)*2);
}




}
