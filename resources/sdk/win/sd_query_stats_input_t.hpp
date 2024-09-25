#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _SD_QUERY_STATS_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_query_stats_input_t
    {                            
                                 
        SDK_NONVOL_PROPERTIES( "_SD_QUERY_STATS_INPUT.$", 0x4, true, 0x15abd48f1e331a09 );
        SDK_FIXED_SIZE( sd_query_stats_input_t, 0x4 );
    };                           
};
SDK_VERIFY( struct win::sd_query_stats_input_t, 0x4 );
