#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/filter_driver_characteristics_t.start.hpp"
namespace ndis
{
    struct oid_request_t;
    struct net_buffer_list_t;
    struct status_indication_t;
    struct net_device_pnp_event_t;
    struct filter_pause_parameters_t;
    struct filter_attach_parameters_t;
    struct filter_restart_parameters_t;
    struct net_pnp_event_notification_t;

    // [struct _NDIS_FILTER_DRIVER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_driver_characteristics_t                                                         
    {                                                                                              
        using attach_handler_t =                           sdk::function<int32_t(void*, void*, struct ndis::filter_attach_parameters_t*)>*;                                         
        using restart_handler_t =                          sdk::function<int32_t(void*, struct ndis::filter_restart_parameters_t*)>*;                                         
        using pause_handler_t =                            sdk::function<int32_t(void*, struct ndis::filter_pause_parameters_t*)>*;                                         
        using send_net_buffer_lists_handler_t =            sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                         
        using send_net_buffer_lists_complete_handler_t =   sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                         
        using receive_net_buffer_lists_handler_t =         sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                         
        using return_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                         
        using oid_request_handler_t =                      sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                         
        using oid_request_complete_handler_t =             sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                         
        using device_pn_p_event_notify_handler_t =         sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*;                                         
        using net_pn_p_event_handler_t =                   sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*;                                         
        using status_handler_t =                           sdk::function<void(void*, struct ndis::status_indication_t*)>*;                                         
        using direct_oid_request_handler_t =               sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                         
        using direct_oid_request_complete_handler_t =      sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                         
        using synchronous_oid_request_handler_t =          sdk::function<int32_t(void*, struct ndis::oid_request_t*, void**)>*;                                         
        using synchronous_oid_request_complete_handler_t = sdk::function<void(void*, struct ndis::oid_request_t*, int32_t*, void*)>*;                                         
                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                         
        _m000 struct ndis::object_header_t                header;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint8_t                                     major_ndis_version;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorNdisVersion
        _m002 uint8_t                                     minor_ndis_version;                        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MinorNdisVersion
        _m003 uint8_t                                     major_driver_version;                      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MajorDriverVersion
        _m004 uint8_t                                     minor_driver_version;                      //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .MinorDriverVersion
        _m005 uint32_t                                    flags;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m006 nt::unicode_view                            friendly_name;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FriendlyName
        _m007 nt::unicode_view                            unique_name;                               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UniqueName
        _m008 nt::unicode_view                            service_name;                              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ServiceName
        _m009 sdk::function<int32_t(void*, void*)>*       set_options_handler;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SetOptionsHandler
        _m010 sdk::function<int32_t(void*)>*              set_filter_module_options_handler;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SetFilterModuleOptionsHandler
        _m011 attach_handler_t                            attach_handler;                            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AttachHandler
        _m012 sdk::function<void(void*)>*                 detach_handler;                            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DetachHandler
        _m013 restart_handler_t                           restart_handler;                           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .RestartHandler
        _m014 pause_handler_t                             pause_handler;                             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PauseHandler
        _m015 send_net_buffer_lists_handler_t             send_net_buffer_lists_handler;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SendNetBufferListsHandler
        _m016 send_net_buffer_lists_complete_handler_t    send_net_buffer_lists_complete_handler;    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SendNetBufferListsCompleteHandler
        _m017 sdk::function<void(void*, void*)>*          cancel_send_net_buffer_lists_handler;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CancelSendNetBufferListsHandler
        _m018 receive_net_buffer_lists_handler_t          receive_net_buffer_lists_handler;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReceiveNetBufferListsHandler
        _m019 return_net_buffer_lists_handler_t           return_net_buffer_lists_handler;           //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ReturnNetBufferListsHandler
        _m020 oid_request_handler_t                       oid_request_handler;                       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .OidRequestHandler
        _m021 oid_request_complete_handler_t              oid_request_complete_handler;              //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .OidRequestCompleteHandler
        _m022 sdk::function<void(void*, void*)>*          cancel_oid_request_handler;                //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CancelOidRequestHandler
        _m023 device_pn_p_event_notify_handler_t          device_pn_p_event_notify_handler;          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .DevicePnPEventNotifyHandler
        _m024 net_pn_p_event_handler_t                    net_pn_p_event_handler;                    //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NetPnPEventHandler
        _m025 status_handler_t                            status_handler;                            //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .StatusHandler
        _m026 direct_oid_request_handler_t                direct_oid_request_handler;                //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .DirectOidRequestHandler
        _m027 direct_oid_request_complete_handler_t       direct_oid_request_complete_handler;       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .DirectOidRequestCompleteHandler
        _m028 sdk::function<void(void*, void*)>*          cancel_direct_oid_request_handler;         //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .CancelDirectOidRequestHandler
                                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                         
        _m029 synchronous_oid_request_handler_t           synchronous_oid_request_handler;           //{ +0x00e0    +0x00e0    +0x00e0    } | .SynchronousOidRequestHandler
        _m030 synchronous_oid_request_complete_handler_t  synchronous_oid_request_complete_handler;  //{ +0x00e8    +0x00e8    +0x00e8    } | .SynchronousOidRequestCompleteHandler
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_DRIVER_CHARACTERISTICS.$", 0xf0, true, 0x10db5568cf934f61 );                                         
        SDK_DYNAMIC_SIZE( filter_driver_characteristics_t );                                         
    };                                                                                             
};
#include "magic/filter_driver_characteristics_t.end.hpp"
