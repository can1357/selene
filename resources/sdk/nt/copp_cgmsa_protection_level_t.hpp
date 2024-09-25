#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_CGMSA_Protection_Level]
    //  WDK 10
    //
    enum class copp_cgmsa_protection_level_t : int32_t  
    {                                                   
        disabled =                        0x0,            // WDK 10
        level_min =                       0x0,            // WDK 10
        copy_freely =                     0x1,            // WDK 10
        copy_no_more =                    0x2,            // WDK 10
        copy_one_generation =             0x3,            // WDK 10
        copy_never =                      0x4,            // WDK 10
        redistribution_control_required = 0x8,            // WDK 10
        level_max =                       0xc,            // WDK 10
        force_dword =                     0x7fffffff,     // WDK 10
    };                                                  
};
