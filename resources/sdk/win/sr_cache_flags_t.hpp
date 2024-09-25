#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SRCacheFlags]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sr_cache_flags_t : int32_t
    {                                    
        none =         0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        write_access = 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
