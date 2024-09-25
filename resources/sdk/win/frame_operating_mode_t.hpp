#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum FRAME_OPERATING_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class frame_operating_mode_t : int32_t
    {                                          
        quiet =  0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal = 0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
