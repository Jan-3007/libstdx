//
// useful helpers and utilities
// 
// SPDX-License-Identifier: MIT
//

#pragma once

#include <type_traits>


namespace stdx {


//
// Convert (cast) an enum value to its underlying type.
//
template <typename T>
constexpr
auto
to_underlying_type(T x)
{
    return static_cast<typename std::underlying_type<T>::type>(x);
}




}
