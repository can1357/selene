#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISPLAYID_DETAILED_TIMING_TYPE_I_SCANNING_MODE]
    //  WDK 10
    //
    enum class displayid_detailed_timing_type_i_scanning_mode_t : int32_t
    {                                                                    
        progressive = 0x0,                                                 // WDK 10
        interlaced =  0x1,                                                 // WDK 10
    };                                                                   
};
