#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/tcp_offload_client_handlers_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_TCP_OFFLOAD_CLIENT_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_client_handlers_t                                                             
    {                                                                                                
        using tcp_offload_send_complete_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_disconnect_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_forward_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_indicate_handler_t =    sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                        
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                           
        _m00 struct ndis::object_header_t                    header;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 tcp_offload_send_complete_handler_t             tcp_offload_send_complete_handler;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TcpOffloadSendCompleteHandler
        _m02 tcp_offload_receive_complete_handler_t          tcp_offload_receive_complete_handler;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TcpOffloadReceiveCompleteHandler
        _m03 tcp_offload_disconnect_complete_handler_t       tcp_offload_disconnect_complete_handler;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TcpOffloadDisconnectCompleteHandler
        _m04 tcp_offload_forward_complete_handler_t          tcp_offload_forward_complete_handler;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TcpOffloadForwardCompleteHandler
        _m05 sdk::function<void(void*, uint32_t, uint32_t)>* tcp_offload_event_handler;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TcpOffloadEventHandler
        _m06 tcp_offload_receive_indicate_handler_t          tcp_offload_receive_indicate_handler;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TcpOffloadReceiveIndicateHandler
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_TCP_OFFLOAD_CLIENT_HANDLERS.$", 0x38, true, 0x722cebf50bb15676 );                                        
        SDK_FIXED_SIZE( tcp_offload_client_handlers_t, 0x38 );                                        
    };                                                                                               
};
#include "magic/tcp_offload_client_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_client_handlers_t, 0x38 );
