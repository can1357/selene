#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_MIRROR_BITMAP_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mirror_bitmap_types_t : int32_t
    {                                         
        normal =      0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interlocked = 0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =     0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
