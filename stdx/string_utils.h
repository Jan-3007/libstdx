//
// useful helpers and utilities
// 
// SPDX-License-Identifier: MIT
//

#pragma once

#include <string>


namespace stdx {


//
// Convert all characters to lower case.
//
template <typename CharT>
std::basic_string<CharT>
to_lower_case(std::basic_string_view<CharT> str)
{
    std::basic_string<CharT> new_str;
    new_str.reserve(str.size());

    for ( CharT c : str ) {
        new_str += static_cast<CharT>(std::tolower(c));
    }

    return new_str;
}


//
// Convert all characters to upper case.
//
template <typename CharT>
std::basic_string<CharT>
to_upper_case(std::basic_string_view<CharT> str)
{
    std::basic_string<CharT> new_str;
    new_str.reserve(str.size());

    for ( CharT c : str ) {
        new_str += static_cast<CharT>(std::toupper(c));
    }

    return new_str;
}



}
