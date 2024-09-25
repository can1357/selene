#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoPrimaries]
    //  WDK 10
    //
    enum class video_primaries_t : int32_t
    {                                     
        unknown =        0x0,               // WDK 10
        reserved =       0x1,               // WDK 10
        bt709 =          0x2,               // WDK 10
        bt470_2_sys_m =  0x3,               // WDK 10
        bt470_2_sys_bg = 0x4,               // WDK 10
        smpte170m =      0x5,               // WDK 10
        smpte240m =      0x6,               // WDK 10
        ebu3213 =        0x7,               // WDK 10
        smpte_c =        0x8,               // WDK 10
        shift =          0x16,              // WDK 10
        mask =           0x7c00000,         // WDK 10
    };                                    
};
