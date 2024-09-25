#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_BROADCAST64_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class broadcast64_enum_t : int32_t
    {                                      
        broadcast64_none = 0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast_1x8 =    0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast_4x8 =    0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
