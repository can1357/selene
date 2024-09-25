#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_VIDPN_INTERFACE_VERSION]
    //  WDK 10
    //
    enum class vidpn_interface_version_t : int32_t
    {                                             
        uninitialized = 0x0,                        // WDK 10
        v1 =            0x1,                        // WDK 10
    };                                            
};
