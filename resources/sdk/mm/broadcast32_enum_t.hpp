#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_BROADCAST32_ENUM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class broadcast32_enum_t : int32_t
    {                                      
        broadcast32_none = 0x0,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast_1x16 =   0x1,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast_4x16 =   0x2,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
