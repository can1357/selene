#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISPLAYID_DETAILED_TIMING_TYPE_I_STEREO_MODE]
    //  WDK 10
    //
    enum class displayid_detailed_timing_type_i_stereo_mode_t : int32_t
    {                                                                  
        monoscopic = 0x0,                                                // WDK 10
        stereo =     0x1,                                                // WDK 10
        dependent =  0x2,                                                // WDK 10
    };                                                                 
};
