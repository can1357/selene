#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_CONTEXT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class context_type_t : int32_t
    {                                  
        none =           0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internet =       0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vpn =            0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        voice =          0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        video_share =    0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom =         0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        purchase =       0x6,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =          0x7,            // Windows 10 v1607
        mms =            0x7,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ims =            0x8,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        admin =          0x9,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        app =            0xa,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        xcap =           0xb,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        tethering =      0xc,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        emergency_call = 0xd,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lte_attach =     0xe,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0xf,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
