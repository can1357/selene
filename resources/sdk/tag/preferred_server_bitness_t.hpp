#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPreferredServerBitness]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class preferred_server_bitness_t : int32_t
    {                                              
        bitness_default =       0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_follow_client = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_32bit =         0x2,                 // Windows 10 v1607
        bitness_x86 =           0x2,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_64bit =         0x3,                 // Windows 10 v1607
        bitness_x64 =           0x3,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_arm32 =         0x4,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_arm64 =         0x5,                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitness_native =        0x80000000,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
