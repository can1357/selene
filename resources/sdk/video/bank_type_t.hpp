#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [enum _VIDEO_BANK_TYPE]
    //  WDK 10
    //
    enum class bank_type_t : int32_t  
    {                                 
        video_not_banked =     0x0,     // WDK 10
        video_banked1rw =      0x1,     // WDK 10
        video_banked1r1w =     0x2,     // WDK 10
        video_banked2rw =      0x3,     // WDK 10
        num_video_bank_types = 0x4,     // WDK 10
    };                                
};
