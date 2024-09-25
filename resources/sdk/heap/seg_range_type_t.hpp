#pragma once
#include <sdkgen/support_library.hpp>

namespace heap
{
    // [enum _HEAP_SEG_RANGE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class seg_range_type_t : int32_t
    {                                    
        user =     0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal = 0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        lfh =      0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max = 0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        vs =       0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
