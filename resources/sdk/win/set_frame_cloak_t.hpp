#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SET_FRAME_CLOAK]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class set_frame_cloak_t : int32_t
    {                                     
        uncloak = 0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cloak =   0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
