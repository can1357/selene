#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _DEBUG_CONTROL_SPACE_ITEM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class debug_control_space_item_t : int32_t
    {                                              
        pcr =      0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        prcb =     0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kspecial = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thread =   0x3,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =  0x4,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
