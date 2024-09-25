#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/call_manager_characteristics_t.start.hpp"
namespace ndis
{
    struct co_sap_t;
    struct request_t;
    struct co_address_family_t;
    struct co_call_parameters_t;

    // [struct _NDIS_CALL_MANAGER_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_manager_characteristics_t                                                      
    {                                                                                          
        using cm_open_af_handler_t =                sdk::function<int32_t(void*, struct ndis::co_address_family_t*, void*, void**)>*;                                  
        using cm_register_sap_handler_t =           sdk::function<int32_t(void*, struct ndis::co_sap_t*, void*, void**)>*;                                  
        using cm_make_call_handler_t =              sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*;                                  
        using cm_close_call_handler_t =             sdk::function<int32_t(void*, void*, void*, uint32_t)>*;                                  
        using cm_incoming_call_complete_handler_t = sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                  
        using cm_add_party_handler_t =              sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*, void*, void**)>*;                                  
        using cm_activate_vc_complete_handler_t =   sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                  
        using cm_modify_call_qo_s_handler_t =       sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                  
        using cm_request_handler_t =                sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*;                                  
        using cm_request_complete_handler_t =       sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*;                                  
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                     
        _m00 uint8_t                                         major_version;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint8_t                                         minor_version;                      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorVersion
        _m02 uint16_t                                        filler;                             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Filler
        _m03 sdk::function<int32_t(void*, void*, void**)>*   cm_create_vc_handler;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CmCreateVcHandler
        _m04 sdk::function<int32_t(void*)>*                  cm_delete_vc_handler;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CmDeleteVcHandler
        _m05 cm_open_af_handler_t                            cm_open_af_handler;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CmOpenAfHandler
        _m06 sdk::function<int32_t(void*)>*                  cm_close_af_handler;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CmCloseAfHandler
        _m07 cm_register_sap_handler_t                       cm_register_sap_handler;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CmRegisterSapHandler
        _m08 sdk::function<int32_t(void*)>*                  cm_deregister_sap_handler;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CmDeregisterSapHandler
        _m09 cm_make_call_handler_t                          cm_make_call_handler;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CmMakeCallHandler
        _m10 cm_close_call_handler_t                         cm_close_call_handler;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CmCloseCallHandler
        _m11 cm_incoming_call_complete_handler_t             cm_incoming_call_complete_handler;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CmIncomingCallCompleteHandler
        _m12 cm_add_party_handler_t                          cm_add_party_handler;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CmAddPartyHandler
        _m13 sdk::function<int32_t(void*, void*, uint32_t)>* cm_drop_party_handler;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CmDropPartyHandler
        _m14 cm_activate_vc_complete_handler_t               cm_activate_vc_complete_handler;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CmActivateVcCompleteHandler
        _m15 sdk::function<void(int32_t, void*)>*            cm_deactivate_vc_complete_handler;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CmDeactivateVcCompleteHandler
        _m16 cm_modify_call_qo_s_handler_t                   cm_modify_call_qo_s_handler;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CmModifyCallQoSHandler
        _m17 cm_request_handler_t                            cm_request_handler;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CmRequestHandler
        _m18 cm_request_complete_handler_t                   cm_request_complete_handler;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .CmRequestCompleteHandler
                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_CALL_MANAGER_CHARACTERISTICS.$", 0x88, true, 0x1fec49fa1da87077 );                                  
        SDK_FIXED_SIZE( call_manager_characteristics_t, 0x88 );                                  
    };                                                                                         
};
#include "magic/call_manager_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::call_manager_characteristics_t, 0x88 );
