#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "chimney_offload_type_t.hpp"

#include "magic/provider_chimney_offload_tcp_characteristics_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_chimney_offload_tcp_characteristics_t                             
    {                                                                                 
        using tcp_offload_send_handler_t =           sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                   
        using tcp_offload_receive_handler_t =        sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                   
        using tcp_offload_disconnect_handler_t =     sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                   
        using tcp_offload_forward_handler_t =        sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                   
        using tcp_offload_receive_return_handler_t = sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*;                                   
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                            
        _m00 struct ndis::object_header_t          header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                              flags;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::chimney_offload_type_t     offload_type;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffloadType
        _m03 tcp_offload_send_handler_t            tcp_offload_send_handler;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TcpOffloadSendHandler
        _m04 tcp_offload_receive_handler_t         tcp_offload_receive_handler;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TcpOffloadReceiveHandler
        _m05 tcp_offload_disconnect_handler_t      tcp_offload_disconnect_handler;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TcpOffloadDisconnectHandler
        _m06 tcp_offload_forward_handler_t         tcp_offload_forward_handler;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TcpOffloadForwardHandler
        _m07 tcp_offload_receive_return_handler_t  tcp_offload_receive_return_handler;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TcpOffloadReceiveReturnHandler
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PROVIDER_CHIMNEY_OFFLOAD_TCP_CHARACTERISTICS.$", 0x38, true, 0x38f6777575c20861 );                                   
        SDK_FIXED_SIZE( provider_chimney_offload_tcp_characteristics_t, 0x38 );                                   
    };                                                                                
};
#include "magic/provider_chimney_offload_tcp_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::provider_chimney_offload_tcp_characteristics_t, 0x38 );
