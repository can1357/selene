#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_data_t.start.hpp"
namespace ndis
{
    struct net_buffer_t;
    struct net_buffer_list_t;

    // [struct _NET_BUFFER_LIST_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_data_t                             
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct ndis::net_buffer_list_t* next;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct ndis::net_buffer_t*      first_net_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstNetBuffer
                                                              
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST_DATA.$", 0x10, true, 0xcac1ea4e67f4952e );                 
        SDK_FIXED_SIZE( net_buffer_list_data_t, 0x10 );                 
    };                                                        
};
#include "magic/net_buffer_list_data_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_data_t, 0x10 );
