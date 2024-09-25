#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"

#include "magic/ndis50_miniport_characteristics_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct request_t;
    struct wan_packet_t;
    struct co_call_parameters_t;

    // [struct _NDIS50_MINIPORT_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndis50_miniport_characteristics_t                                            
    {                                                                                   
        using initialize_handler_t =        sdk::function<int32_t(int32_t*, uint32_t*, enum ndis::medium_t*, uint32_t, void*, void*)>*;                          
        using query_information_handler_t = sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*;                          
        using send_handler_t =              sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*;                          
        using wan_send_handler_t =          sdk::function<int32_t(void*, void*, struct ndis::wan_packet_t*)>*;                          
        using set_information_handler_t =   sdk::function<int32_t(void*, uint32_t, void*, uint32_t, uint32_t*, uint32_t*)>*;                          
        using transfer_data_handler_t =     sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*;                          
        using return_packet_handler_t =     sdk::function<void(void*, struct ndis::packet_t*)>*;                          
        using send_packets_handler_t =      sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                          
        using allocate_complete_handler_t = sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*;                          
        using co_activate_vc_handler_t =    sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                          
        using co_send_packets_handler_t =   sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                          
        using co_request_handler_t =        sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*;                          
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                              
        _m000 uint8_t                                         major_ndis_version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorNdisVersion
        _m001 uint8_t                                         minor_ndis_version;         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorNdisVersion
        _m002 uint16_t                                        filler;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Filler
        _m003 sdk::function<uint8_t(void*)>*                  check_for_hang_handler;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CheckForHangHandler
        _m004 sdk::function<void(void*)>*                     disable_interrupt_handler;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DisableInterruptHandler
        _m005 sdk::function<void(void*)>*                     enable_interrupt_handler;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EnableInterruptHandler
        _m006 sdk::function<void(void*)>*                     halt_handler;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HaltHandler
        _m007 sdk::function<void(void*)>*                     handle_interrupt_handler;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HandleInterruptHandler
        _m008 initialize_handler_t                            initialize_handler;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InitializeHandler
        _m009 sdk::function<void(uint8_t*, uint8_t*, void*)>* isr_handler;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ISRHandler
        _m010 query_information_handler_t                     query_information_handler;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .QueryInformationHandler
        _m011 sdk::function<int32_t(int32_t*, void*, void*)>* reconfigure_handler;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReconfigureHandler
        _m012 sdk::function<int32_t(uint8_t*, void*)>*        reset_handler;              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ResetHandler
        _m013 send_handler_t                                  send_handler;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .SendHandler
        _m014 wan_send_handler_t                              wan_send_handler;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WanSendHandler
        _m015 set_information_handler_t                       set_information_handler;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SetInformationHandler
        _m016 transfer_data_handler_t                         transfer_data_handler;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TransferDataHandler
        _m017 sdk::function<int32_t()>*                       wan_transfer_data_handler;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .WanTransferDataHandler
        _m018 return_packet_handler_t                         return_packet_handler;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ReturnPacketHandler
        _m019 send_packets_handler_t                          send_packets_handler;       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SendPacketsHandler
        _m020 allocate_complete_handler_t                     allocate_complete_handler;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .AllocateCompleteHandler
        _m021 sdk::function<int32_t(void*, void*, void**)>*   co_create_vc_handler;       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .CoCreateVcHandler
        _m022 sdk::function<int32_t(void*)>*                  co_delete_vc_handler;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CoDeleteVcHandler
        _m023 co_activate_vc_handler_t                        co_activate_vc_handler;     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .CoActivateVcHandler
        _m024 sdk::function<int32_t(void*)>*                  co_deactivate_vc_handler;   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .CoDeactivateVcHandler
        _m025 co_send_packets_handler_t                       co_send_packets_handler;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CoSendPacketsHandler
        _m026 co_request_handler_t                            co_request_handler;         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CoRequestHandler
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS50_MINIPORT_CHARACTERISTICS.$", 0xb8, true, 0x4e0700c06cf4a15e );                          
        SDK_FIXED_SIZE( ndis50_miniport_characteristics_t, 0xb8 );                          
    };                                                                                  
};
#include "magic/ndis50_miniport_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::ndis50_miniport_characteristics_t, 0xb8 );
