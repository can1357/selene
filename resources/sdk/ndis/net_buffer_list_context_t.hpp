#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_buffer_list_context_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_context_t;

    // [struct _NET_BUFFER_LIST_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_buffer_list_context_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                        
        _m00 struct ndis::net_buffer_list_context_t* next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint16_t                                size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint16_t                                offset;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Offset
        _m03 sdk::array<uint8_t>                     context_data;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContextData
                                                                  
        SDK_MAGIC_PROPERTIES( "_NET_BUFFER_LIST_CONTEXT.$", 0x10, true, 0xd131bcf88f895334 );             
        SDK_FIXED_SIZE( net_buffer_list_context_t, 0x10 );             
    };                                                            
};
#include "magic/net_buffer_list_context_t.end.hpp"
SDK_VERIFY( struct ndis::net_buffer_list_context_t, 0x10 );
