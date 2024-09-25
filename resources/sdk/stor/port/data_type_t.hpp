#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _DATA_TYPE]
    //  Windows 11
    //
    enum class data_type_t : int32_t
    {                               
        guid =           0x0,         // Windows 11
        boolean =        0x1,         // Windows 11
        unicode_string = 0x2,         // Windows 11
        ansi_string =    0x3,         // Windows 11
        int8 =           0x4,         // Windows 11
        int16 =          0x5,         // Windows 11
        int32 =          0x6,         // Windows 11
        int64 =          0x7,         // Windows 11
        u_int8 =         0x8,         // Windows 11
        u_int16 =        0x9,         // Windows 11
        u_int32 =        0xa,         // Windows 11
        u_int64 =        0xb,         // Windows 11
        hex8 =           0xc,         // Windows 11
        hex16 =          0xd,         // Windows 11
        hex32 =          0xe,         // Windows 11
        hex64 =          0xf,         // Windows 11
        byte_array =     0x10,        // Windows 11
    };                              
};
