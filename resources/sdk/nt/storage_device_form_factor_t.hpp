#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DEVICE_FORM_FACTOR]
    //  WDK 10
    //
    enum class storage_device_form_factor_t : int32_t
    {                                                
        factor_unknown =     0x0,                      // WDK 10
        factor3_5 =          0x1,                      // WDK 10
        factor2_5 =          0x2,                      // WDK 10
        factor1_8 =          0x3,                      // WDK 10
        factor1_8_less =     0x4,                      // WDK 10
        factor_embedded =    0x5,                      // WDK 10
        factor_memory_card = 0x6,                      // WDK 10
        factorm_sata =       0x7,                      // WDK 10
        factor_m_2 =         0x8,                      // WDK 10
        factor_pc_ie_board = 0x9,                      // WDK 10
        factor_dimm =        0xa,                      // WDK 10
    };                                               
};
