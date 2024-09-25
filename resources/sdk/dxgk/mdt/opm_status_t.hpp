#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_STATUS]
    //  WDK 10
    //
    enum class opm_status_t : int32_t         
    {                                         
        normal =                       0x0,     // WDK 10
        link_lost =                    0x1,     // WDK 10
        renegotiation_required =       0x2,     // WDK 10
        tampering_detected =           0x4,     // WDK 10
        revoked_hdcp_device_attached = 0x8,     // WDK 10
    };                                        
};
