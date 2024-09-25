#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "source_of_client_h_result_t.hpp"
#include "marshal_by_value_serialization_data_t.hpp"
#include "push_tls_prevent_rundown_mitigation_t.hpp"
#include "error_object_with_associated_passthrough_data_t.hpp"

namespace tag { struct rpcolemessage_t; }

#include "magic/c_ctx_call_t.start.hpp"
namespace win
{
    class c_policy_set_t;
    class i_face_entry_t;
    class c_std_wrapper_t;
    struct i_error_info_t;
    class c_object_context_t;
    class marshaled_handle_storage_t;
    class prevent_rundown_bias_container_t;

    // [class CCtxCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_call_t                                                                                   
    {                                                                                                    
        using marshaled_handles_t =  sdk::array<class win::marshaled_handle_storage_t*, 2>;                                          
        using saved_error_object_t = struct win::error_object_with_associated_passthrough_data_t;                                          
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                               
        _m000 uint32_t                                         dw_flags;                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._dwFlags
        _m001 uint32_t                                         dw_stage;                                   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._dwStage
        _m002 uint32_t                                         c_marshal_itfs;                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._cMarshalItfs
        _m003 uint32_t                                         c_unmarshal_itfs;                           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._cUnmarshalItfs
        _m004 uint32_t                                         c_free;                                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._cFree
        _m005 uint32_t                                         c_error;                                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._cError
        _m006 int32_t                                          f_error;                                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._fError
        _m007 uint32_t                                         dw_dest_ctx;                                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._dwDestCtx
        _m008 uint32_t                                         c_itfs;                                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._cItfs
        _m009 uint32_t                                         idx;                                        //{ +0x0044    +0x0044    +0x0044    +0x0044    } | ._idx
        _m010 void**                                           pp_itfs;                                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._ppItfs
        _m011 uint32_t                                         c_policies;                                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._cPolicies
        _m012 uint32_t                                         cb_extent;                                  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | ._cbExtent
        _m013 void*                                            pv_extent;                                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pvExtent
        _m014 sdk::hresult                                     hr;                                         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._hr
        _m015 class win::c_policy_set_t*                       p_ps;                                       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._pPS
        _m016 class win::c_object_context_t*                   p_context;                                  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | ._pContext
        _m017 uint32_t                                         data_rep;                                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._dataRep
        _m018 sdk::hresult                                     hr_server;                                  //{ +0x007c    +0x007c    +0x007c    +0x007c    } | ._hrServer
        _m019 const uint16_t                                   i_method;                                   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._iMethod
        _m020 const struct nt::guid_t*                         piid;                                       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._piid
        _m021 uint32_t                                         u_call_trace_id;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | ._uCallTraceId
        _m022 class win::prevent_rundown_bias_container_t*     p_in_bias_container;                        //{ +0x00a0    +0x00b8    +0x00b8    +0x00b8    } | ._pInBiasContainer
        _m023 class win::prevent_rundown_bias_container_t*     p_out_bias_container;                       //{ +0x00a8    +0x00c0    +0x00c0    +0x00c0    } | ._pOutBiasContainer
        _m024 class win::push_tls_prevent_rundown_mitigation_t push_tls_mitigation;                        //{ +0x00b0    +0x00c8    +0x00c8    +0x00c8    } | ._pushTlsMitigation
        _m025 uint1_t                                          b_enabled_in_parameter_mitigation;          //{ +0x00b8@0  +0x00d0@0  +0x00d0@0  +0x00d0@0  } | ._bEnabledInParameterMitigation
        _m026 uint1_t                                          b_enabled_inproc_out_parameter_mitigation;  //{ +0x00b8@1  +0x00d0@1  +0x00d0@1  +0x00d0@1  } | ._bEnabledInprocOutParameterMitigation
        _m027 struct tag::rpcolemessage_t*                     p_stub_message;                             //{ +0x00c8    +0x0100    +0x0100    +0x0100    } | ._pStubMessage
        _m028 class win::c_std_wrapper_t*                      p_wrapper;                                  //{ +0x00d0    +0x0108    +0x0108    +0x0108    } | ._pWrapper
        _m029 class win::i_face_entry_t*                       p_i_face_entry;                             //{ +0x00d8    +0x0110    +0x0110    +0x0110    } | ._pIFaceEntry
        _m030 marshaled_handles_t                              marshaled_handles;                          //{ +0x00e0    +0x0118    +0x0118    +0x0118    } | ._marshaledHandles
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m031 saved_error_object_t                             saved_error_object;                         //{ +0x0098    +0x0098    +0x0098    } | ._savedErrorObject
        _m032 const bool                                       enable_call_tracing;                        //{ +0x00b0    +0x00b0    +0x00b0    } | ._enableCallTracing
        _m033 struct nt::guid_t                                passthrough_trace_activity;                 //{ +0x00d4    +0x00d4    +0x00d4    } | ._passthroughTraceActivity
        _m034 struct nt::guid_t                                call_id;                                    //{ +0x00f0    +0x00f0    +0x00f0    } | ._callId
        _m035 enum win::source_of_client_h_result_t            source_of_client_h_result;                  //{ +0x0128    +0x0128    +0x0128    } | ._sourceOfClientHResult
        _m036 class win::marshal_by_value_serialization_data_t marshal_by_value_serialization_data;        //{ +0x0130    +0x0130    +0x0130    } | ._marshalByValueSerializationData
        _m037 bool                                             client_sync_trace_started;                  //{ +0x0150    +0x0150    +0x0150    } | ._clientSyncTraceStarted
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m038 struct win::i_error_info_t*                      p_error_info;                               //{ +0x0098    } | ._pErrorInfo
                                                                                                         
        SDK_MAGIC_PROPERTIES( "CCtxCall.$", 0x168, true, 0xed4c94d0cd63dafc );                                          
        SDK_DYNAMIC_SIZE( c_ctx_call_t );                                                                
    };                                                                                                   
};
#include "magic/c_ctx_call_t.end.hpp"
