#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/net_buffer_list_pool_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NET_BUFFER_LIST_POOL_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_pool_parameters_t                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct ndis::object_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                      protocol_id;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProtocolId
        _m02 uint8_t                      f_allocate_net_buffer;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .fAllocateNetBuffer
        _m03 uint16_t                     context_size;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ContextSize
        _m04 uint32_t                     pool_tag;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PoolTag
        _m05 uint32_t                     data_size;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataSize
                                                                
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST_POOL_PARAMETERS.$", 0x10, true, 0x795a28d9879c59e0 );                      
        SDK_FIXED_SIZE( net_buffer_list_pool_parameters_t, 0x10 );                      
    };                                                          
};
#include "magic/net_buffer_list_pool_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_pool_parameters_t, 0x10 );
