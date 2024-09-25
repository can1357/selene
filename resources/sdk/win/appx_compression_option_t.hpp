#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum APPX_COMPRESSION_OPTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class appx_compression_option_t : int32_t
    {                                             
        none =      0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =    0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =   0x2,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast =      0x3,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        superfast = 0x4,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
