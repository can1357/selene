#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/filter_partial_characteristics_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_partial_characteristics_t                                                   
    {                                                                                         
        using send_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                       
        using send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                       
        using receive_net_buffer_lists_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                       
        using return_net_buffer_lists_handler_t =        sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                       
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                    
        _m00 struct ndis::object_header_t              header;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                  flags;                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 send_net_buffer_lists_handler_t           send_net_buffer_lists_handler;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SendNetBufferListsHandler
        _m03 send_net_buffer_lists_complete_handler_t  send_net_buffer_lists_complete_handler;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SendNetBufferListsCompleteHandler
        _m04 sdk::function<void(void*, void*)>*        cancel_send_net_buffer_lists_handler;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CancelSendNetBufferListsHandler
        _m05 receive_net_buffer_lists_handler_t        receive_net_buffer_lists_handler;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReceiveNetBufferListsHandler
        _m06 return_net_buffer_lists_handler_t         return_net_buffer_lists_handler;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ReturnNetBufferListsHandler
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_PARTIAL_CHARACTERISTICS.$", 0x30, true, 0xb0e5ddca5a87b797 );                                       
        SDK_FIXED_SIZE( filter_partial_characteristics_t, 0x30 );                                       
    };                                                                                        
};
#include "magic/filter_partial_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::filter_partial_characteristics_t, 0x30 );
