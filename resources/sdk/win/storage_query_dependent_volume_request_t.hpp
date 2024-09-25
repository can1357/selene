#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_query_dependent_volume_request_t.start.hpp"
namespace win
{
    // [struct _STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct storage_query_dependent_volume_request_t
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t request_level;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestLevel
        _m01 uint32_t request_flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestFlags
                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST.$", 0x8, true, 0x54b2658efb91563d );              
        SDK_FIXED_SIZE( storage_query_dependent_volume_request_t, 0x8 );              
    };                                             
};
#include "magic/storage_query_dependent_volume_request_t.end.hpp"
SDK_VERIFY( struct win::storage_query_dependent_volume_request_t, 0x8 );
