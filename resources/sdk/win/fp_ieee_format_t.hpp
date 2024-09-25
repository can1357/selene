#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FP__IEEE_FORMAT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fp_ieee_format_t : int32_t
    {                                    
        fp32 =    0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fp64 =    0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fp80 =    0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fp128 =   0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i16 =     0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i32 =     0x5,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i64 =     0x6,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u16 =     0x7,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u32 =     0x8,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u64 =     0x9,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compare = 0xa,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string =  0xb,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
