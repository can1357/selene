#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndis40_protocol_characteristics_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct request_t;
    struct wan_packet_t;
    struct net_pnp_event_t;

    // [struct _NDIS40_PROTOCOL_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndis40_protocol_characteristics_t                                                  
    {                                                                                         
        using send_complete_handler_t =          sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*;                                   
        using wan_send_complete_handler_t =      sdk::function<void(void*, struct ndis::wan_packet_t*, int32_t)>*;                                   
        using transfer_data_complete_handler_t = sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*;                                   
        using request_complete_handler_t =       sdk::function<void(void*, struct ndis::request_t*, int32_t)>*;                                   
        using receive_handler_t =                sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*;                                   
        using wan_receive_handler_t =            sdk::function<int32_t(void*, uint8_t*, uint32_t)>*;                                   
        using status_handler_t =                 sdk::function<void(void*, int32_t, void*, uint32_t)>*;                                   
        using receive_packet_handler_t =         sdk::function<int32_t(void*, struct ndis::packet_t*)>*;                                   
        using bind_adapter_handler_t =           sdk::function<void(int32_t*, void*, nt::unicode_view*, void*, void*)>*;                                   
        using pn_p_event_handler_t =             sdk::function<int32_t(void*, struct ndis::net_pnp_event_t*)>*;                                   
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                    
        _m00 uint8_t                                       major_ndis_version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorNdisVersion
        _m01 uint8_t                                       minor_ndis_version;                  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorNdisVersion
        _m02 uint16_t                                      filler;                              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Filler
        _m03 uint32_t                                      flags;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m04 sdk::function<void(void*, int32_t, int32_t)>* open_adapter_complete_handler;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OpenAdapterCompleteHandler
        _m05 sdk::function<void(void*, int32_t)>*          close_adapter_complete_handler;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CloseAdapterCompleteHandler
        _m06 send_complete_handler_t                       send_complete_handler;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SendCompleteHandler
        _m07 wan_send_complete_handler_t                   wan_send_complete_handler;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WanSendCompleteHandler
        _m08 transfer_data_complete_handler_t              transfer_data_complete_handler;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransferDataCompleteHandler
        _m09 sdk::function<void()>*                        wan_transfer_data_complete_handler;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WanTransferDataCompleteHandler
        _m10 sdk::function<void(void*, int32_t)>*          reset_complete_handler;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ResetCompleteHandler
        _m11 request_complete_handler_t                    request_complete_handler;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RequestCompleteHandler
        _m12 receive_handler_t                             receive_handler;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReceiveHandler
        _m13 wan_receive_handler_t                         wan_receive_handler;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WanReceiveHandler
        _m14 sdk::function<void(void*)>*                   receive_complete_handler;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReceiveCompleteHandler
        _m15 status_handler_t                              status_handler;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StatusHandler
        _m16 sdk::function<void(void*)>*                   status_complete_handler;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StatusCompleteHandler
        _m17 nt::unicode_view                              name;                                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Name
        _m18 receive_packet_handler_t                      receive_packet_handler;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ReceivePacketHandler
        _m19 bind_adapter_handler_t                        bind_adapter_handler;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BindAdapterHandler
        _m20 sdk::function<void(int32_t*, void*, void*)>*  unbind_adapter_handler;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .UnbindAdapterHandler
        _m21 pn_p_event_handler_t                          pn_p_event_handler;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PnPEventHandler
        _m22 sdk::function<void()>*                        unload_handler;                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .UnloadHandler
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS40_PROTOCOL_CHARACTERISTICS.$", 0x90, true, 0xfd94b80cf63ef06f );                                   
        SDK_FIXED_SIZE( ndis40_protocol_characteristics_t, 0x90 );                                   
    };                                                                                        
};
#include "magic/ndis40_protocol_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::ndis40_protocol_characteristics_t, 0x90 );
