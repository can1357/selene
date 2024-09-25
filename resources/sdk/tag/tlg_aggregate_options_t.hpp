#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagTLG_AGGREGATE_OPTIONS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class tlg_aggregate_options_t : int32_t
    {                                           
        flush_none =    0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_normal =  0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_high =    0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_invalid = 0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        flush_mask =    0xf,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        paged =         0x8000,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
