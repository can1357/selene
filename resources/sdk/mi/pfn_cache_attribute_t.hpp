#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_PFN_CACHE_ATTRIBUTE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pfn_cache_attribute_t : int32_t
    {                                         
        non_cached =     0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cached =         0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_combined = 0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_mapped =     0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
