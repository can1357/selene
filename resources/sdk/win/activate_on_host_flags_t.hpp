#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ACTIVATE_ON_HOST_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activate_on_host_flags_t : int32_t
    {                                            
        none =     0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vail =     0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdag =     0x2,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        gamecore = 0x4,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
