#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PORT_PNP_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class port_pnp_state_t : int32_t
    {                                    
        allocating =   0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocated =    0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activating =   0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activated =    0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivating = 0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivated =  0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deallocating = 0x7,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deallocated =  0x8,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
