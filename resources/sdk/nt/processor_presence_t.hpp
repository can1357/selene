#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _PROCESSOR_PRESENCE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class processor_presence_t : int32_t
    {                                        
        nt =     0x0,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hv =     0x1,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        hidden = 0x2,                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
