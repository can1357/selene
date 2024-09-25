#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netio_net_buffer_list_context_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NETIO_NET_BUFFER_LIST_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netio_net_buffer_list_context_t                      
    {                                                           
        using completion_routine_t = sdk::function<void(struct ndis::net_buffer_list_t*, uint32_t, uint8_t)>*;                   
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                      
        _m00 int32_t                         reference_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReferenceCount
        _m01 struct ndis::net_buffer_list_t* parent;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Parent
        _m02 completion_routine_t            completion_routine;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CompletionRoutine
        _m03 void*                           completion_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletionContext
                                                                
        SDK_MAGIC_PROPERTIES( "_NETIO_NET_BUFFER_LIST_CONTEXT.$", 0x20, true, 0x97c63b56be9d6c1a );                   
        SDK_FIXED_SIZE( netio_net_buffer_list_context_t, 0x20 );                   
    };                                                          
};
#include "magic/netio_net_buffer_list_context_t.end.hpp"
SDK_VERIFY( struct ndis::netio_net_buffer_list_context_t, 0x20 );
