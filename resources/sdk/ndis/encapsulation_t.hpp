#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_ENCAPSULATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class encapsulation_t : int32_t        
    {                                           
        unspecified_encapsulation =      0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        null_encapsulation =             0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ieee_802_3_encapsulation =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ieee_802_5_encapsulation =       0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        llc_snap_routed_encapsulation =  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        llc_snap_bridged_encapsulation = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
