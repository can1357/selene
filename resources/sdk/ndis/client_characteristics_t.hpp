#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_characteristics_t.start.hpp"
namespace ndis
{
    struct co_sap_t;
    struct request_t;
    struct co_call_parameters_t;

    // [struct _NDIS_CLIENT_CHARACTERISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_characteristics_t                                                             
    {                                                                                           
        using cl_request_handler_t =                   sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*;                                     
        using cl_request_complete_handler_t =          sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*;                                     
        using cl_register_sap_complete_handler_t =     sdk::function<void(int32_t, void*, struct ndis::co_sap_t*, void*)>*;                                     
        using cl_make_call_complete_handler_t =        sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*;                                     
        using cl_modify_call_qo_s_complete_handler_t = sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                     
        using cl_add_party_complete_handler_t =        sdk::function<void(int32_t, void*, void*, struct ndis::co_call_parameters_t*)>*;                                     
        using cl_incoming_call_handler_t =             sdk::function<int32_t(void*, void*, struct ndis::co_call_parameters_t*)>*;                                     
        using cl_incoming_call_qo_s_change_handler_t = sdk::function<void(void*, struct ndis::co_call_parameters_t*)>*;                                     
        using cl_incoming_close_call_handler_t =       sdk::function<void(int32_t, void*, void*, uint32_t)>*;                                     
        using cl_incoming_drop_party_handler_t =       sdk::function<void(int32_t, void*, void*, uint32_t)>*;                                     
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                      
        _m00 uint8_t                                       major_version;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint8_t                                       minor_version;                         //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorVersion
        _m02 uint16_t                                      filler;                                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Filler
        _m03 sdk::function<int32_t(void*, void*, void**)>* cl_create_vc_handler;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClCreateVcHandler
        _m04 sdk::function<int32_t(void*)>*                cl_delete_vc_handler;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClDeleteVcHandler
        _m05 cl_request_handler_t                          cl_request_handler;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClRequestHandler
        _m06 cl_request_complete_handler_t                 cl_request_complete_handler;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClRequestCompleteHandler
        _m07 sdk::function<void(int32_t, void*, void*)>*   cl_open_af_complete_handler;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClOpenAfCompleteHandler
        _m08 sdk::function<void(int32_t, void*)>*          cl_close_af_complete_handler;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ClCloseAfCompleteHandler
        _m09 cl_register_sap_complete_handler_t            cl_register_sap_complete_handler;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ClRegisterSapCompleteHandler
        _m10 sdk::function<void(int32_t, void*)>*          cl_deregister_sap_complete_handler;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClDeregisterSapCompleteHandler
        _m11 cl_make_call_complete_handler_t               cl_make_call_complete_handler;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ClMakeCallCompleteHandler
        _m12 cl_modify_call_qo_s_complete_handler_t        cl_modify_call_qo_s_complete_handler;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ClModifyCallQoSCompleteHandler
        _m13 sdk::function<void(int32_t, void*, void*)>*   cl_close_call_complete_handler;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ClCloseCallCompleteHandler
        _m14 cl_add_party_complete_handler_t               cl_add_party_complete_handler;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ClAddPartyCompleteHandler
        _m15 sdk::function<void(int32_t, void*)>*          cl_drop_party_complete_handler;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ClDropPartyCompleteHandler
        _m16 cl_incoming_call_handler_t                    cl_incoming_call_handler;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ClIncomingCallHandler
        _m17 cl_incoming_call_qo_s_change_handler_t        cl_incoming_call_qo_s_change_handler;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ClIncomingCallQoSChangeHandler
        _m18 cl_incoming_close_call_handler_t              cl_incoming_close_call_handler;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ClIncomingCloseCallHandler
        _m19 cl_incoming_drop_party_handler_t              cl_incoming_drop_party_handler;        //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ClIncomingDropPartyHandler
        _m20 sdk::function<void(void*)>*                   cl_call_connected_handler;             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ClCallConnectedHandler
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_CLIENT_CHARACTERISTICS.$", 0x98, true, 0x3d6dfb2d90c2f4eb );                                     
        SDK_FIXED_SIZE( client_characteristics_t, 0x98 );                                       
    };                                                                                          
};
#include "magic/client_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::client_characteristics_t, 0x98 );
