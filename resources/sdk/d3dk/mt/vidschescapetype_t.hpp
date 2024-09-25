#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_VIDSCHESCAPETYPE]
    //  WDK 10
    //
    enum class vidschescapetype_t : int32_t
    {                                      
        preemptioncontrol =   0x0,           // WDK 10
        suspendscheduler =    0x1,           // WDK 10
        tdrcontrol =          0x2,           // WDK 10
        suspendresume =       0x3,           // WDK 10
        enablecontextdelay =  0x4,           // WDK 10
        configure_tdr_limit = 0x5,           // WDK 10
        vgpu_reset =          0x6,           // WDK 10
        pfn_control =         0x7,           // WDK 10
    };                                     
};
