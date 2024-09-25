#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_filter_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_FILTER_COUNTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_filter_counter_t        
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t packets_matched;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PacketsMatched
        _m01 uint64_t bytes_matched;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesMatched
                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_FILTER_COUNTER.$", 0x10, true, 0xc8af49981629c0e8 );                
        SDK_FIXED_SIZE( pd_filter_counter_t, 0x10 );                
    };                                
};
#include "magic/pd_filter_counter_t.end.hpp"
SDK_VERIFY( struct ndis::pd_filter_counter_t, 0x10 );
