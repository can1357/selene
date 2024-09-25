#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "source_of_client_h_result_t.hpp"
#include "marshal_by_value_serialization_data_t.hpp"
#include "push_tls_prevent_rundown_mitigation_t.hpp"

namespace tag { struct ipid_entry_t; }

#include "magic/client_call_t.start.hpp"
namespace win
{
    class oxid_entry_t;
    class c_std_identity_t;

    // [class ClientCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class client_call_t                                                                                               
    {                                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
        //                                                                                                            
        _m00 class win::oxid_entry_t const*                   p_server_oxid_entry;                                      //{ +0x0018    +0x0040    +0x0040    +0x0040    } | ._pServerOXIDEntry
        _m01 class win::c_std_identity_t const*               p_std_id;                                                 //{ +0x0020    +0x0048    +0x0048    +0x0048    } | ._pStdId
        _m02 struct tag::ipid_entry_t const*                  p_server_ipid_entry;                                      //{ +0x0028    +0x0050    +0x0050    +0x0050    } | ._pServerIPIDEntry
        _m03 class win::push_tls_prevent_rundown_mitigation_t push_tls_mitigation;                                      //{ +0x0030    +0x0058    +0x0058    +0x0058    } | ._pushTlsMitigation
        _m04 const uint32_t                                   u_call_trace_id;                                          //{ +0x0038    +0x0060    +0x0060    +0x0060    } | ._uCallTraceId
        _m05 const uint32_t                                   dw_transport_call_creation_state;                         //{ +0x003c    +0x0064    +0x0064    +0x0064    } | ._dwTransportCallCreationState
        _m06 sdk::hresult                                     hr_client;                                                //{ +0x0040    +0x0070    +0x0070    +0x0070    } | ._hrClient
        _m07 enum win::source_of_client_h_result_t            source_of_h_result;                                       //{ +0x0044    +0x0074    +0x0074    +0x0074    } | ._sourceOfHResult
        _m08 uint1_t                                          b_locked_client;                                          //{ +0x0048@0  +0x0078@0  +0x0078@0  +0x0078@0  } | ._bLockedClient
        _m09 uint1_t                                          b_incremented_calls_in_tls;                               //{ +0x0048@1  +0x0078@1  +0x0078@1  +0x0078@1  } | ._bIncrementedCallsInTls
        _m10 uint1_t                                          b_client_called_get_buffer;                               //{ +0x0048@2  +0x0078@2  +0x0078@2  +0x0078@2  } | ._bClientCalledGetBuffer
        _m11 uint1_t                                          b_enabled_rundown_tls_mitigation;                         //{ +0x0048@3  +0x0078@3  +0x0078@3  +0x0078@3  } | ._bEnabledRundownTlsMitigation
        _m12 uint1_t                                          b_client_called_send_or_send_receive;                     //{ +0x0048@4  +0x0078@4  +0x0078@4  +0x0078@4  } | ._bClientCalledSendOrSendReceive
        _m13 uint1_t                                          b_client_called_receive_or_send_receive;                  //{ +0x0048@5  +0x0078@5  +0x0078@5  +0x0078@5  } | ._bClientCalledReceiveOrSendReceive
        _m14 uint1_t                                          b_client_receive_or_send_receive_completed_successfully;  //{ +0x0048@6  +0x0078@6  +0x0078@6  +0x0078@6  } | ._bClientReceiveOrSendReceiveCompletedSuccessfully
                                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                                            
        _m15 const struct nt::guid_t                          passthrough_trace_activity;                               //{ +0x0010    +0x0010    +0x0010    } | ._passthroughTraceActivity
        _m16 const bool                                       enable_call_tracing;                                      //{ +0x0020    +0x0020    +0x0020    } | ._enableCallTracing
        _m17 const struct nt::guid_t                          call_id;                                                  //{ +0x0030    +0x0030    +0x0030    } | ._callId
        _m18 class win::marshal_by_value_serialization_data_t marshal_by_value_serialization_data;                      //{ +0x0080    +0x0080    +0x0080    } | ._marshalByValueSerializationData
                                                                                                                      
        SDK_MAGIC_PROPERTIES( "ClientCall.$", 0xb0, true, 0xaf138b5df15ba7f6 );                                                        
        SDK_DYNAMIC_SIZE( client_call_t );                                                                            
    };                                                                                                                
};
#include "magic/client_call_t.end.hpp"
