#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_FLOW_ENTRY_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_flow_entry_state_t : int32_t
    {                                          
        undefined =   0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivated = 0x1,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        activated =   0x2,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0x3,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
