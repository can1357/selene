#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NBL_TRACKER_SOURCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class nbl_tracker_source_t : int32_t
    {                                        
        miniport =             0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter =               0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        protocol =             0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_nposr_return =    0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_ss_send =         0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_ssr_return =      0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        first_custom_context = 0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
