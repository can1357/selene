#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TRACK_MODE_TYPE]
    //  WDK 10
    //
    enum class track_mode_type_t : int32_t
    {                                     
        yellow_mode2 =             0x0,     // WDK 10
        xa_form2 =                 0x1,     // WDK 10
        cdda =                     0x2,     // WDK 10
        raw_with_c2_and_sub_code = 0x3,     // WDK 10
        raw_with_c2 =              0x4,     // WDK 10
        raw_with_sub_code =        0x5,     // WDK 10
    };                                    
};
