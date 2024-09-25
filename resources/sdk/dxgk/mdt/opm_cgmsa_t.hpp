#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_CGMSA]
    //  WDK 10
    //
    enum class opm_cgmsa_t : int32_t             
    {                                            
        cgmsa_off =                       0x0,     // WDK 10
        cgmsa_copy_freely =               0x1,     // WDK 10
        cgmsa_copy_no_more =              0x2,     // WDK 10
        cgmsa_copy_one_generation =       0x3,     // WDK 10
        cgmsa_copy_never =                0x4,     // WDK 10
        redistribution_control_required = 0x8,     // WDK 10
    };                                           
};
