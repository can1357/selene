#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum TransportLocality]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class transport_locality_t : int32_t
    {                                        
        local =     0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        container = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        network =   0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
