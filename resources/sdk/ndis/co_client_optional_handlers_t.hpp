#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/co_client_optional_handlers_t.start.hpp"
namespace ndis
{
    struct co_sap_t;
    struct oid_request_t;
    struct co_call_parameters_t;

    // [struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_client_optional_handlers_t                                                        
    {                                                                                           
        using cl_oid_request_handler_t =               sdk::function<int32_t(void*, void*, void*, struct ndis::oid_request_t*)>*;                                     
        using cl_oid_request_complete_handler_t =      sdk::function<void(void*, void*, void*, struct ndis::oid_request_t*, int32_t)>*;                                     
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
        _m00 struct ndis::object_header_t                  header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::function<int32_t(void*, void*, void**)>* cl_create_vc_handler;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClCreateVcHandler
        _m02 sdk::function<int32_t(void*)>*                cl_delete_vc_handler;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClDeleteVcHandler
        _m03 cl_oid_request_handler_t                      cl_oid_request_handler;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClOidRequestHandler
        _m04 cl_oid_request_complete_handler_t             cl_oid_request_complete_handler;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClOidRequestCompleteHandler
        _m05 sdk::function<void(void*, void*, int32_t)>*   cl_open_af_complete_handler_ex;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClOpenAfCompleteHandlerEx
        _m06 sdk::function<void(int32_t, void*)>*          cl_close_af_complete_handler;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ClCloseAfCompleteHandler
        _m07 cl_register_sap_complete_handler_t            cl_register_sap_complete_handler;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ClRegisterSapCompleteHandler
        _m08 sdk::function<void(int32_t, void*)>*          cl_deregister_sap_complete_handler;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClDeregisterSapCompleteHandler
        _m09 cl_make_call_complete_handler_t               cl_make_call_complete_handler;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ClMakeCallCompleteHandler
        _m10 cl_modify_call_qo_s_complete_handler_t        cl_modify_call_qo_s_complete_handler;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ClModifyCallQoSCompleteHandler
        _m11 sdk::function<void(int32_t, void*, void*)>*   cl_close_call_complete_handler;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ClCloseCallCompleteHandler
        _m12 cl_add_party_complete_handler_t               cl_add_party_complete_handler;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ClAddPartyCompleteHandler
        _m13 sdk::function<void(int32_t, void*)>*          cl_drop_party_complete_handler;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ClDropPartyCompleteHandler
        _m14 cl_incoming_call_handler_t                    cl_incoming_call_handler;              //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ClIncomingCallHandler
        _m15 cl_incoming_call_qo_s_change_handler_t        cl_incoming_call_qo_s_change_handler;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ClIncomingCallQoSChangeHandler
        _m16 cl_incoming_close_call_handler_t              cl_incoming_close_call_handler;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ClIncomingCloseCallHandler
        _m17 cl_incoming_drop_party_handler_t              cl_incoming_drop_party_handler;        //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ClIncomingDropPartyHandler
        _m18 sdk::function<void(void*)>*                   cl_call_connected_handler;             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .ClCallConnectedHandler
        _m19 sdk::function<int32_t(void*)>*                cl_notify_close_af_handler;            //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ClNotifyCloseAfHandler
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_CLIENT_OPTIONAL_HANDLERS.$", 0xa0, true, 0xd8beba6eae2f4c83 );                                     
        SDK_FIXED_SIZE( co_client_optional_handlers_t, 0xa0 );                                     
    };                                                                                          
};
#include "magic/co_client_optional_handlers_t.end.hpp"
SDK_VERIFY( struct ndis::co_client_optional_handlers_t, 0xa0 );
