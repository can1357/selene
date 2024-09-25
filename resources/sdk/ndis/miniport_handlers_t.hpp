#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_handlers_t.start.hpp"
namespace ndis
{
    struct object_header_t;
    struct net_buffer_list_t;
    struct nbl_tracker_handle_t;

    // [struct _NDIS_MINIPORT_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_handlers_t                                                                
    {                                                                                         
        using send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                       
        using indicate_net_buffer_lists_handler_t =      sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                       
        using save_indicate_net_buffer_lists_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                       
        using return_net_buffer_lists_handler_t =        sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                       
        using send_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                       
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                    
        _m00 void*                                     request_context;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RequestContext
        _m01 void*                                     cancel_send_context;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CancelSendContext
        _m02 void*                                     indicate_net_buffer_lists_context;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IndicateNetBufferListsContext
        _m03 struct ndis::nbl_tracker_handle_t*        indicate_net_buffer_lists_tracker;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IndicateNetBufferListsTracker
        _m04 struct ndis::object_header_t*             indicate_net_buffer_lists_object;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IndicateNetBufferListsObject
        _m05 void*                                     save_indicate_net_buffer_lists_context;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SaveIndicateNetBufferListsContext
        _m06 void*                                     return_net_buffer_lists_context;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ReturnNetBufferListsContext
        _m07 struct ndis::nbl_tracker_handle_t*        return_net_buffer_lists_tracker;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReturnNetBufferListsTracker
        _m08 struct ndis::object_header_t*             return_net_buffer_lists_object;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReturnNetBufferListsObject
        _m09 void*                                     send_net_buffer_lists_context;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SendNetBufferListsContext
        _m10 struct ndis::nbl_tracker_handle_t*        send_net_buffer_lists_tracker;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SendNetBufferListsTracker
        _m11 struct ndis::object_header_t*             send_net_buffer_lists_object;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SendNetBufferListsObject
        _m12 void*                                     send_net_buffer_lists_complete_context;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SendNetBufferListsCompleteContext
        _m13 struct ndis::nbl_tracker_handle_t*        send_net_buffer_lists_complete_tracker;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SendNetBufferListsCompleteTracker
        _m14 struct ndis::object_header_t*             send_net_buffer_lists_complete_object;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SendNetBufferListsCompleteObject
        _m15 void*                                     request_handle;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .RequestHandle
        _m16 sdk::function<void(void*, void*)>*        cancel_send_handler;                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CancelSendHandler
        _m17 sdk::function<void(void*, void*)>*        cancel_send_packets_handler;             //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CancelSendPacketsHandler
        _m18 send_net_buffer_lists_complete_handler_t  send_net_buffer_lists_complete_handler;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .SendNetBufferListsCompleteHandler
        _m19 indicate_net_buffer_lists_handler_t       indicate_net_buffer_lists_handler;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .IndicateNetBufferListsHandler
        _m20 save_indicate_net_buffer_lists_handler_t  save_indicate_net_buffer_lists_handler;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .SaveIndicateNetBufferListsHandler
        _m21 return_net_buffer_lists_handler_t         return_net_buffer_lists_handler;         //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ReturnNetBufferListsHandler
        _m22 send_net_buffer_lists_handler_t           send_net_buffer_lists_handler;           //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SendNetBufferListsHandler
        _m23 void*                                     direct_request_handle;                   //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .DirectRequestHandle
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_HANDLERS.$", 0xb8, true, 0x85ae6cdd4da511c2 );                                       
        SDK_FIXED_SIZE( miniport_handlers_t, 0xb8 );                                          
    };                                                                                        
};
#include "magic/miniport_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_handlers_t, 0xb8 );
