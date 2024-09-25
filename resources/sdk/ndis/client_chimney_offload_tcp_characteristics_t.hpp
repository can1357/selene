#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "chimney_offload_type_t.hpp"

#include "magic/client_chimney_offload_tcp_characteristics_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_chimney_offload_tcp_characteristics_t                                              
    {                                                                                                
        using tcp_offload_send_complete_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_disconnect_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_forward_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_indicate_handler_t =    sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                        
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                           
        _m00 struct ndis::object_header_t                    header;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                        flags;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::chimney_offload_type_t               offload_type;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffloadType
        _m03 tcp_offload_send_complete_handler_t             tcp_offload_send_complete_handler;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TcpOffloadSendCompleteHandler
        _m04 tcp_offload_receive_complete_handler_t          tcp_offload_receive_complete_handler;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TcpOffloadReceiveCompleteHandler
        _m05 tcp_offload_disconnect_complete_handler_t       tcp_offload_disconnect_complete_handler;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TcpOffloadDisconnectCompleteHandler
        _m06 tcp_offload_forward_complete_handler_t          tcp_offload_forward_complete_handler;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TcpOffloadForwardCompleteHandler
        _m07 sdk::function<void(void*, uint32_t, uint32_t)>* tcp_offload_event_handler;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TcpOffloadEventHandler
        _m08 tcp_offload_receive_indicate_handler_t          tcp_offload_receive_indicate_handler;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .TcpOffloadReceiveIndicateHandler
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_CLIENT_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.$", 0x40, true, 0x1da772b7f9db815b );                                        
        SDK_FIXED_SIZE( client_chimney_offload_tcp_characteristics_t, 0x40 );                                        
    };                                                                                               
};
#include "magic/client_chimney_offload_tcp_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::client_chimney_offload_tcp_characteristics_t, 0x40 );
