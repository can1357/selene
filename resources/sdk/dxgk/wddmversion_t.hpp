#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_WDDMVERSION]
    //  WDK 10, Windows 11
    //
    enum class wddmversion_t : int32_t
    {                                 
        wdd_mv1 =     0x1000,           // WDK 10, Windows 11
        wdd_mv1_2 =   0x1200,           // WDK 10, Windows 11
        wdd_mv1_3 =   0x1300,           // WDK 10, Windows 11
        wdd_mv2 =     0x2000,           // WDK 10, Windows 11
        wdd_mv2_1 =   0x2100,           // WDK 10, Windows 11
        wdd_mv2_1_5 = 0x2105,           // WDK 10, Windows 11
        wdd_mv2_1_6 = 0x2106,           // WDK 10, Windows 11
        wdd_mv2_2 =   0x2200,           // WDK 10, Windows 11
        wdd_mv2_3 =   0x2300,           // WDK 10, Windows 11
        wdd_mv2_4 =   0x2400,           // WDK 10, Windows 11
        wdd_mv2_5 =   0x2500,           // WDK 10, Windows 11
        wdd_mv2_6 =   0x2600,           // WDK 10, Windows 11
        wdd_mv2_7 =   0x2700,           // WDK 10, Windows 11
        wdd_mv2_8 =   0x2800,           // Windows 11
        wdd_mv2_9 =   0x2900,           // Windows 11
        wddm_latest = 0x3000,           // Windows 11
        wdd_mv3_0 =   0x3000,           // Windows 11
    };                                
};
