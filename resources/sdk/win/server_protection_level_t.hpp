#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ServerProtectionLevel]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class server_protection_level_t : int32_t
    {                                             
        windows_light = 0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =      0xff,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
