#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_flow_entry_cache_hint_t : int32_t
    {                                               
        undefined =        0x0,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_frequency =    0x64,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_frequency = 0xc8,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_frequency =   0x12c,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =              0x3e8,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
