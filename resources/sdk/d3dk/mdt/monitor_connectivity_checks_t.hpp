#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS]
    //  WDK 10
    //
    enum class monitor_connectivity_checks_t : int32_t
    {                                                 
        uninitialized = 0x0,                            // WDK 10
        ignore =        0x1,                            // WDK 10
        enforce =       0x2,                            // WDK 10
    };                                                
};
