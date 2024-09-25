#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_EXP_ADJ_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class exp_adj_enum_t : int32_t
    {                                  
        expadj_none = 0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_4 =    0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_5 =    0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_8 =    0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_16 =   0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_24 =   0x5,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_31 =   0x6,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        expadj_32 =   0x7,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
