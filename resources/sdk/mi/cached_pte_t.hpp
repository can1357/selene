#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cached_pte_t.start.hpp"
namespace mi
{
    // [struct _MI_CACHED_PTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_pte_t                 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t global_time_stamp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GlobalTimeStamp
        _m01 uint32_t pte_index;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PteIndex
        _m02 int64_t  _long;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Long
                                        
        SDK_MAGIC_PROPERTIES( "_MI_CACHED_PTE.$", 0x8, true, 0x91cfed6406569fda );                  
        SDK_FIXED_SIZE( cached_pte_t, 0x8 );                  
    };                                  
};
#include "magic/cached_pte_t.end.hpp"
SDK_VERIFY( struct mi::cached_pte_t, 0x8 );
