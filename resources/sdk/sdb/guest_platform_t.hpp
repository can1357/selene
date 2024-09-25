#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum _SDB_GUEST_PLATFORM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class guest_platform_t : int32_t
    {                                    
        x86 =   0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ia64 =  0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        amd64 = 0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm32 = 0x3,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm64 = 0x4,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =   0x5,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
