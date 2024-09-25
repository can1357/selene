#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum BinaryState]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class binary_state_t : int32_t
    {                                  
        ok =    0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int8 =  0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int16 = 0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int32 = 0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
