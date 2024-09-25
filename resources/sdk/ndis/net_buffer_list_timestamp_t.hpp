#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_timestamp_t.start.hpp"
namespace ndis
{
    // [struct _NET_BUFFER_LIST_TIMESTAMP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_timestamp_t
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t timestamp;        //{ +0x0000    +0x0000    +0x0000    } | .Timestamp
                                      
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST_TIMESTAMP.$", 0x8, true, 0x1c7ae7bacc6fc823 );          
        SDK_FIXED_SIZE( net_buffer_list_timestamp_t, 0x8 );          
    };                                
};
#include "magic/net_buffer_list_timestamp_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_timestamp_t, 0x8 );
