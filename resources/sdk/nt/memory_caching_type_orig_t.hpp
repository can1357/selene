#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEMORY_CACHING_TYPE_ORIG]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_caching_type_orig_t : int32_t
    {                                              
        mm_frame_buffer_cached = 0x2,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
