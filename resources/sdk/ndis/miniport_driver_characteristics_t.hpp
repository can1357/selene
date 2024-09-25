#pragma once
#include <sdkgen/support_library.hpp>
#include "halt_action_t.hpp"
#include "object_header_t.hpp"
#include "shutdown_action_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/miniport_driver_characteristics_t.start.hpp"
namespace ndis
{
    struct oid_request_t;
    struct net_buffer_list_t;
    struct net_device_pnp_event_t;
    struct miniport_init_parameters_t;
    struct miniport_pause_parameters_t;
    struct miniport_restart_parameters_t;

    // [struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_driver_characteristics_t                                            
    {                                                                                   
        using initialize_handler_ex_t =            sdk::function<int32_t(void*, void*, struct ndis::miniport_init_parameters_t*)>*;                                  
        using halt_handler_ex_t =                  sdk::function<void(void*, enum ndis::halt_action_t)>*;                                  
        using unload_handler_t =                   sdk::function<void(struct nt::driver_object_t*)>*;                                  
        using pause_handler_t =                    sdk::function<int32_t(void*, struct ndis::miniport_pause_parameters_t*)>*;                                  
        using restart_handler_t =                  sdk::function<int32_t(void*, struct ndis::miniport_restart_parameters_t*)>*;                                  
        using oid_request_handler_t =              sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                  
        using send_net_buffer_lists_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                  
        using return_net_buffer_lists_handler_t =  sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                  
        using device_pn_p_event_notify_handler_t = sdk::function<void(void*, struct ndis::net_device_pnp_event_t*)>*;                                  
        using shutdown_handler_ex_t =              sdk::function<void(void*, enum ndis::shutdown_action_t)>*;                                  
        using direct_oid_request_handler_t =       sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                  
        using synchronous_oid_request_handler_t =  sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                  
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                              
        _m00 struct ndis::object_header_t             header;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                                  major_ndis_version;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorNdisVersion
        _m02 uint8_t                                  minor_ndis_version;                 //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MinorNdisVersion
        _m03 uint8_t                                  major_driver_version;               //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MajorDriverVersion
        _m04 uint8_t                                  minor_driver_version;               //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .MinorDriverVersion
        _m05 uint32_t                                 flags;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m06 sdk::function<int32_t(void*, void*)>*    set_options_handler;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetOptionsHandler
        _m07 initialize_handler_ex_t                  initialize_handler_ex;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InitializeHandlerEx
        _m08 halt_handler_ex_t                        halt_handler_ex;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HaltHandlerEx
        _m09 unload_handler_t                         unload_handler;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UnloadHandler
        _m10 pause_handler_t                          pause_handler;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PauseHandler
        _m11 restart_handler_t                        restart_handler;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RestartHandler
        _m12 oid_request_handler_t                    oid_request_handler;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .OidRequestHandler
        _m13 send_net_buffer_lists_handler_t          send_net_buffer_lists_handler;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .SendNetBufferListsHandler
        _m14 return_net_buffer_lists_handler_t        return_net_buffer_lists_handler;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ReturnNetBufferListsHandler
        _m15 sdk::function<void(void*, void*)>*       cancel_send_handler;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CancelSendHandler
        _m16 sdk::function<uint8_t(void*)>*           check_for_hang_handler_ex;          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CheckForHangHandlerEx
        _m17 sdk::function<int32_t(void*, uint8_t*)>* reset_handler_ex;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ResetHandlerEx
        _m18 device_pn_p_event_notify_handler_t       device_pn_p_event_notify_handler;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .DevicePnPEventNotifyHandler
        _m19 shutdown_handler_ex_t                    shutdown_handler_ex;                //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ShutdownHandlerEx
        _m20 sdk::function<void(void*, void*)>*       cancel_oid_request_handler;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CancelOidRequestHandler
        _m21 direct_oid_request_handler_t             direct_oid_request_handler;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DirectOidRequestHandler
        _m22 sdk::function<void(void*, void*)>*       cancel_direct_oid_request_handler;  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CancelDirectOidRequestHandler
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                              
        _m23 synchronous_oid_request_handler_t        synchronous_oid_request_handler;    //{ +0x0098    +0x0098    +0x0098    } | .SynchronousOidRequestHandler
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_DRIVER_CHARACTERISTICS.$", 0xa0, true, 0xe3f21882046777f6 );                                  
        SDK_DYNAMIC_SIZE( miniport_driver_characteristics_t );                                  
    };                                                                                  
};
#include "magic/miniport_driver_characteristics_t.end.hpp"
