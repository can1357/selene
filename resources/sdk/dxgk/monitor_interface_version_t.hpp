#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_MONITOR_INTERFACE_VERSION]
    //  WDK 10
    //
    enum class monitor_interface_version_t : int32_t
    {                                               
        uninitialized = 0x0,                          // WDK 10
        v1 =            0x1,                          // WDK 10
        v2 =            0x2,                          // WDK 10
    };                                              
};
