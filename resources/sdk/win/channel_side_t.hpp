#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ChannelSide]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class channel_side_t : int32_t
    {                                  
        client = 0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
