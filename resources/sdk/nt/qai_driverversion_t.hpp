#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _QAI_DRIVERVERSION]
    //  WDK 10
    //
    enum class qai_driverversion_t : int32_t
    {                                       
        wddm_1_0 =            0x3e8,          // WDK 10
        wddm_1_1_prerelease = 0x44e,          // WDK 10
        wddm_1_1 =            0x451,          // WDK 10
        wddm_1_2 =            0x4b0,          // WDK 10
        wddm_1_3 =            0x514,          // WDK 10
        wddm_2_0 =            0x7d0,          // WDK 10
        wddm_2_1 =            0x834,          // WDK 10
        wddm_2_2 =            0x898,          // WDK 10
        wddm_2_3 =            0x8fc,          // WDK 10
        wddm_2_4 =            0x960,          // WDK 10
        wddm_2_5 =            0x9c4,          // WDK 10
        wddm_2_6 =            0xa28,          // WDK 10
        wddm_2_7 =            0xa8c,          // WDK 10
    };                                      
};
