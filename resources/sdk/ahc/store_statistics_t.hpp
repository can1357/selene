#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/store_statistics_t.start.hpp"
namespace ahc
{
    // [struct _AHC_STORE_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct store_statistics_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t lookup_hits;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LookupHits
        _m01 uint32_t lookup_misses;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LookupMisses
        _m02 uint32_t inserted;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Inserted
        _m03 uint32_t replaced;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Replaced
        _m04 uint32_t updated;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Updated
                                    
        SDK_MAGIC_PROPERTIES( "_AHC_STORE_STATISTICS.$", 0x14, true, 0x9899cdab0a3f5a01 );              
        SDK_FIXED_SIZE( store_statistics_t, 0x14 );              
    };                              
};
#include "magic/store_statistics_t.end.hpp"
SDK_VERIFY( struct ahc::store_statistics_t, 0x14 );
