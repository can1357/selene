#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum MultiplicationState]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class multiplication_state_t : int32_t
    {                                          
        cast_int =      0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_int64 =    0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint =     0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cast_uint64 =   0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_uint =   0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_uint64 = 0x5,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_int =    0x6,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint64_int64 =  0x7,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint_uint64 =   0x8,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        uint_int64 =    0x9,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint =    0xa,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_int64 =   0xb,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_int =     0xc,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_uint64 =    0xd,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int_int64 =     0xe,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64_uint64 =  0xf,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =         0x10,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
