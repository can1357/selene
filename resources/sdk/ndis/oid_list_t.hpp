#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/oid_list_t.start.hpp"
namespace ndis
{
    // [struct _OID_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oid_list_t                  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint32_t  stats_oid_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StatsOidCount
        _m01 uint32_t  full_oid_count;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FullOidCount
        _m02 uint32_t* stats_oid_array;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StatsOidArray
        _m03 uint32_t* full_oid_array;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FullOidArray
                                       
        SDK_MAGIC_PROPERTIES( "_OID_LIST.$", 0x18, true, 0xecbef105b0391902 );                
        SDK_FIXED_SIZE( oid_list_t, 0x18 );                
    };                                 
};
#include "magic/oid_list_t.end.hpp"
SDK_VERIFY( struct ndis::oid_list_t, 0x18 );
