#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_co_characteristics_t.start.hpp"
namespace ndis
{
    struct oid_request_t;
    struct net_buffer_list_t;
    struct co_call_parameters_t;

    // [struct _NDIS_MINIPORT_CO_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_co_characteristics_t                                                    
    {                                                                                       
        using co_activate_vc_handler_t =           sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                 
        using co_send_net_buffer_lists_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                 
        using co_oid_request_handler_t =           sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*;                                 
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                  
        _m00 struct ndis::object_header_t                  header;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                      flags;                             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 sdk::function<int32_t(void*, void*, void**)>* co_create_vc_handler;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CoCreateVcHandler
        _m03 sdk::function<int32_t(void*)>*                co_delete_vc_handler;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CoDeleteVcHandler
        _m04 co_activate_vc_handler_t                      co_activate_vc_handler;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CoActivateVcHandler
        _m05 sdk::function<int32_t(void*)>*                co_deactivate_vc_handler;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CoDeactivateVcHandler
        _m06 co_send_net_buffer_lists_handler_t            co_send_net_buffer_lists_handler;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CoSendNetBufferListsHandler
        _m07 co_oid_request_handler_t                      co_oid_request_handler;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CoOidRequestHandler
                                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_CO_CHARACTERISTICS.$", 0x38, true, 0xf950924a7ed238e );                                 
        SDK_FIXED_SIZE( miniport_co_characteristics_t, 0x38 );                                 
    };                                                                                      
};
#include "magic/miniport_co_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_co_characteristics_t, 0x38 );
