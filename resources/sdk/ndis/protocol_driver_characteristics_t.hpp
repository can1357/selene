#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/protocol_driver_characteristics_t.start.hpp"
namespace ndis
{
    struct oid_request_t;
    struct bind_parameters_t;
    struct net_buffer_list_t;
    struct status_indication_t;
    struct net_pnp_event_notification_t;

    // [struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_driver_characteristics_t                                                  
    {                                                                                         
        using bind_adapter_handler_ex_t =                sdk::function<int32_t(void*, void*, struct ndis::bind_parameters_t*)>*;                                       
        using net_pn_p_event_handler_t =                 sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*;                                       
        using oid_request_complete_handler_t =           sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                       
        using status_handler_ex_t =                      sdk::function<void(void*, struct ndis::status_indication_t*)>*;                                       
        using receive_net_buffer_lists_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                       
        using send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                       
        using direct_oid_request_complete_handler_t =    sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                       
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                    
        _m00 struct ndis::object_header_t              header;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint8_t                                   major_ndis_version;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorNdisVersion
        _m02 uint8_t                                   minor_ndis_version;                      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MinorNdisVersion
        _m03 uint8_t                                   major_driver_version;                    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MajorDriverVersion
        _m04 uint8_t                                   minor_driver_version;                    //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .MinorDriverVersion
        _m05 uint32_t                                  flags;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m06 nt::unicode_view                          name;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
        _m07 sdk::function<int32_t(void*, void*)>*     set_options_handler;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SetOptionsHandler
        _m08 bind_adapter_handler_ex_t                 bind_adapter_handler_ex;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BindAdapterHandlerEx
        _m09 sdk::function<int32_t(void*, void*)>*     unbind_adapter_handler_ex;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .UnbindAdapterHandlerEx
        _m10 sdk::function<void(void*, int32_t)>*      open_adapter_complete_handler_ex;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OpenAdapterCompleteHandlerEx
        _m11 sdk::function<void(void*)>*               close_adapter_complete_handler_ex;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CloseAdapterCompleteHandlerEx
        _m12 net_pn_p_event_handler_t                  net_pn_p_event_handler;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NetPnPEventHandler
        _m13 sdk::function<void()>*                    uninstall_handler;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UninstallHandler
        _m14 oid_request_complete_handler_t            oid_request_complete_handler;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OidRequestCompleteHandler
        _m15 status_handler_ex_t                       status_handler_ex;                       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .StatusHandlerEx
        _m16 receive_net_buffer_lists_handler_t        receive_net_buffer_lists_handler;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ReceiveNetBufferListsHandler
        _m17 send_net_buffer_lists_complete_handler_t  send_net_buffer_lists_complete_handler;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SendNetBufferListsCompleteHandler
        _m18 direct_oid_request_complete_handler_t     direct_oid_request_complete_handler;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DirectOidRequestCompleteHandler
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS.$", 0x80, true, 0x34440797f771cf61 );                                       
        SDK_FIXED_SIZE( protocol_driver_characteristics_t, 0x80 );                                       
    };                                                                                        
};
#include "magic/protocol_driver_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::protocol_driver_characteristics_t, 0x80 );
