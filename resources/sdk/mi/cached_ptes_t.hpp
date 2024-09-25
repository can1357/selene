#pragma once
#include <sdkgen/support_library.hpp>
#include "cached_pte_t.hpp"

#include "magic/cached_ptes_t.start.hpp"
namespace mi
{
    // [struct _MI_CACHED_PTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_ptes_t                                             
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                           
        _m00 sdk::array<struct mi::cached_pte_t, 8> bins;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bins
        _m01 int32_t                                cached_pte_count;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CachedPteCount
                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_CACHED_PTES.$", 0x48, true, 0xbccb70823e5a3a );                 
        SDK_FIXED_SIZE( cached_ptes_t, 0x48 );                       
    };                                                               
};
#include "magic/cached_ptes_t.end.hpp"
SDK_VERIFY( struct mi::cached_ptes_t, 0x48 );
