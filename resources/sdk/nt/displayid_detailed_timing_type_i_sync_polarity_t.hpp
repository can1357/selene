#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISPLAYID_DETAILED_TIMING_TYPE_I_SYNC_POLARITY]
    //  WDK 10
    //
    enum class displayid_detailed_timing_type_i_sync_polarity_t : int32_t
    {                                                                    
        positive = 0x0,                                                    // WDK 10
        negative = 0x1,                                                    // WDK 10
    };                                                                   
};
