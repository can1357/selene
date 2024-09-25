#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/net_buffer_pool_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NET_BUFFER_POOL_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_pool_parameters_t             
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 struct ndis::object_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     pool_tag;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PoolTag
        _m02 uint32_t                     data_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSize
                                                    
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_POOL_PARAMETERS.$", 0xc, true, 0xe6a1b165ac5c7c33 );          
        SDK_FIXED_SIZE( net_buffer_pool_parameters_t, 0xc );          
    };                                              
};
#include "magic/net_buffer_pool_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_pool_parameters_t, 0xc );
