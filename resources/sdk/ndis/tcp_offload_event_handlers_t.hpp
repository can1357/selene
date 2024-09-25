#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/tcp_offload_event_handlers_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_TCP_OFFLOAD_EVENT_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_event_handlers_t                                                           
    {                                                                                             
        using ndis_tcp_offload_receive_handler_t =     sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                     
        using ndis_tcp_offload_send_complete_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                     
        using ndis_tcp_offload_receive_complete_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                     
        using ndis_tcp_offload_disconnect_complete_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                     
        using ndis_tcp_offload_forward_complete_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                     
                                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                        
        _m00 struct ndis::object_header_t                    header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::function<void(void*, uint32_t, uint32_t)>* ndis_tcp_offload_event_handler;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdisTcpOffloadEventHandler
        _m02 ndis_tcp_offload_receive_handler_t              ndis_tcp_offload_receive_handler;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdisTcpOffloadReceiveHandler
        _m03 ndis_tcp_offload_send_complete_t                ndis_tcp_offload_send_complete;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdisTcpOffloadSendComplete
        _m04 ndis_tcp_offload_receive_complete_t             ndis_tcp_offload_receive_complete;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdisTcpOffloadReceiveComplete
        _m05 ndis_tcp_offload_disconnect_complete_t          ndis_tcp_offload_disconnect_complete;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NdisTcpOffloadDisconnectComplete
        _m06 ndis_tcp_offload_forward_complete_t             ndis_tcp_offload_forward_complete;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdisTcpOffloadForwardComplete
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_OFFLOAD_EVENT_HANDLERS.$", 0x38, true, 0x80382c01419ea7f1 );                                     
        SDK_FIXED_SIZE( tcp_offload_event_handlers_t, 0x38 );                                     
    };                                                                                            
};
#include "magic/tcp_offload_event_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_event_handlers_t, 0x38 );
