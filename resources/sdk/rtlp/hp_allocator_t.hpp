#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp
{
    // [enum _RTLP_HP_ALLOCATOR]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hp_allocator_t : int32_t
    {                                  
        segment_sm =     0x0,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        segment_lg =     0x1,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        huge_allocator = 0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        segment_types =  0x2,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocator_max =  0x3,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
