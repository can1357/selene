#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "c_rpc_call_t.hpp"
#include "marshal_by_value_serialization_data_t.hpp"
#include "push_tls_prevent_rundown_mitigation_t.hpp"

namespace tag { struct ipid_entry_t; }

#include "magic/server_call_t.start.hpp"
namespace win
{
    class c_ctx_call_t;
    class c_std_identity_t;
    class c_object_context_t;

    // [class ServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class server_call_t                                                                           
    {                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                        
        _m00 class win::c_std_identity_t*                     p_std_id;                             //{ +0x0040    +0x0068    +0x0068    +0x0068    } | ._pStdId
        _m01 class win::c_ctx_call_t*                         p_server_ctx_call;                    //{ +0x0048    +0x0070    +0x0080    +0x0070    } | ._pServerCtxCall
        _m02 class win::push_tls_prevent_rundown_mitigation_t push_tls_mitigation;                  //{ +0x0050    +0x0078    +0x0088    +0x0078    } | ._pushTlsMitigation
        _m03 const uint32_t                                   u_call_trace_id;                      //{ +0x0058    +0x0080    +0x0090    +0x0080    } | ._uCallTraceId
        _m04 const uint32_t                                   dw_client_pid;                        //{ +0x0070    +0x0084    +0x0094    +0x0084    } | ._dwClientPid
        _m05 const uint32_t                                   dw_client_tid;                        //{ +0x0074    +0x0088    +0x0098    +0x0088    } | ._dwClientTid
        _m06 class win::c_object_context_t*                   p_disconnectable_context;             //{ +0x0060    +0x0090    +0x00a0    +0x0090    } | ._pDisconnectableContext
        _m07 struct tag::ipid_entry_t*                        p_ipid_entry;                         //{ +0x0068    +0x0098    +0x00a8    +0x0098    } | ._pIPIDEntry
        _m08 uint1_t                                          b_became_server_async;                //{ +0x0078@0  +0x00a0@0  +0x0108@0  +0x00a0@0  } | ._bBecameServerAsync
        _m09 uint1_t                                          b_became_server_async_abi_model;      //{ +0x0078@1  +0x00a0@1  +0x0108@1  +0x00a0@1  } | ._bBecameServerAsyncAbiModel
        _m10 uint1_t                                          b_enabled_rundown_tls_mitigation;     //{ +0x0078@2  +0x00a0@2  +0x0108@2  +0x00a0@2  } | ._bEnabledRundownTlsMitigation
                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                        
        _m11 const struct nt::guid_t                          passthrough_trace_activity;           //{ +0x0038    +0x0038    +0x0038    } | ._passthroughTraceActivity
        _m12 const bool                                       enable_call_tracing;                  //{ +0x0048    +0x0048    +0x0048    } | ._enableCallTracing
        _m13 const struct nt::guid_t                          call_id;                              //{ +0x0058    +0x0058    +0x0058    } | ._callId
        _m14 class win::marshal_by_value_serialization_data_t marshal_by_value_serialization_data;  //{ +0x00a8    +0x0110    +0x00a8    } | ._marshalByValueSerializationData
                                                                                                  
        // Windows 11                                                                             
        //                                                                                        
        _m15 struct nt::guid_t                                moid;                                 //{ +0x0070    } | ._moid
        _m16 class win::c_rpc_call_t                          rpc_call;                             //{ +0x00b0    } | ._rpcCall
                                                                                                  
        SDK_MAGIC_PROPERTIES( "ServerCall.$", 0xd8, true, 0x14079879894c95fd );                                    
        SDK_DYNAMIC_SIZE( server_call_t );                                                        
    };                                                                                            
};
#include "magic/server_call_t.end.hpp"
