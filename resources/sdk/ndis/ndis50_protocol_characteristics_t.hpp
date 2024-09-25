#pragma once
#include <sdkgen/support_library.hpp>
#include "ndis40_protocol_characteristics_t.hpp"

#include "magic/ndis50_protocol_characteristics_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct request_t;
    struct wan_packet_t;
    struct net_pnp_event_t;
    struct co_address_family_t;

    // [struct _NDIS50_PROTOCOL_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndis50_protocol_characteristics_t                                                    
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
        using co_send_complete_handler_t =       sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*;                                   
        using co_status_handler_t =              sdk::function<void(void*, void*, int32_t, void*, uint32_t)>*;                                   
        using co_receive_packet_handler_t =      sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*;                                   
        using co_af_register_notify_handler_t =  sdk::function<void(void*, struct ndis::co_address_family_t*)>*;                                   
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                      
        _m000 struct ndis::ndis40_protocol_characteristics_t ndis40_chars;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ndis40Chars
        _m001 uint8_t                                        major_ndis_version;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorNdisVersion
        _m002 uint8_t                                        minor_ndis_version;                  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorNdisVersion
        _m003 uint16_t                                       filler;                              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Filler
        _m004 uint32_t                                       flags;                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m005 sdk::function<void(void*, int32_t, int32_t)>*  open_adapter_complete_handler;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OpenAdapterCompleteHandler
        _m006 sdk::function<void(void*, int32_t)>*           close_adapter_complete_handler;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CloseAdapterCompleteHandler
        _m007 send_complete_handler_t                        send_complete_handler;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SendCompleteHandler
        _m008 wan_send_complete_handler_t                    wan_send_complete_handler;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WanSendCompleteHandler
        _m009 transfer_data_complete_handler_t               transfer_data_complete_handler;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TransferDataCompleteHandler
        _m010 sdk::function<void()>*                         wan_transfer_data_complete_handler;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WanTransferDataCompleteHandler
        _m011 sdk::function<void(void*, int32_t)>*           reset_complete_handler;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ResetCompleteHandler
        _m012 request_complete_handler_t                     request_complete_handler;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RequestCompleteHandler
        _m013 receive_handler_t                              receive_handler;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReceiveHandler
        _m014 wan_receive_handler_t                          wan_receive_handler;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WanReceiveHandler
        _m015 sdk::function<void(void*)>*                    receive_complete_handler;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ReceiveCompleteHandler
        _m016 status_handler_t                               status_handler;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .StatusHandler
        _m017 sdk::function<void(void*)>*                    status_complete_handler;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StatusCompleteHandler
        _m018 nt::unicode_view                               name;                                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Name
        _m019 receive_packet_handler_t                       receive_packet_handler;              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ReceivePacketHandler
        _m020 bind_adapter_handler_t                         bind_adapter_handler;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BindAdapterHandler
        _m021 sdk::function<void(int32_t*, void*, void*)>*   unbind_adapter_handler;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .UnbindAdapterHandler
        _m022 pn_p_event_handler_t                           pn_p_event_handler;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PnPEventHandler
        _m023 sdk::function<void()>*                         unload_handler;                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .UnloadHandler
        _m024 sdk::array<void*, 4>                           reserved_handlers;                   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ReservedHandlers
        _m025 co_send_complete_handler_t                     co_send_complete_handler;            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CoSendCompleteHandler
        _m026 co_status_handler_t                            co_status_handler;                   //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .CoStatusHandler
        _m027 co_receive_packet_handler_t                    co_receive_packet_handler;           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .CoReceivePacketHandler
        _m028 co_af_register_notify_handler_t                co_af_register_notify_handler;       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .CoAfRegisterNotifyHandler
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS50_PROTOCOL_CHARACTERISTICS.$", 0xd0, true, 0xf847f96a9b999b61 );                                   
        SDK_FIXED_SIZE( ndis50_protocol_characteristics_t, 0xd0 );                                   
    };                                                                                          
};
#include "magic/ndis50_protocol_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::ndis50_protocol_characteristics_t, 0xd0 );
