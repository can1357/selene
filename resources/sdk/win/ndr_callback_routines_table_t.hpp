#pragma once
#include <sdkgen/support_library.hpp>
#include "syntax_type_t.hpp"
#include "ndr64_expression_type_t.hpp"

namespace nt  { struct guid_t;              }
namespace rpc { struct message_t;           }
namespace rpc { struct syntax_identifier_t; }

#include "magic/ndr_callback_routines_table_t.start.hpp"
namespace win
{
    struct midl_stub_desc_t;
    struct midl_server_info_t;
    struct midl_syntax_info_t;
    struct ndr_proc_context_t;
    struct midl_stub_message_t;
    struct param_description_t;
    union client_call_return_t;
    struct ndr64_param_format_t;
    struct t_rpc_verifier_settings_t;
    struct midl_stubless_proxy_info_t;

    // [struct _NDR_CALLBACK_ROUTINES_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_callback_routines_table_t                                                       
    {                                                                                          
        using pfnsizing_t =                              sdk::function<void(struct win::midl_stub_message_t*, int32_t)>*;                                       
        using ndrp_server_out_init_t =                   sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using pfnsizing_t =                              sdk::function<void(struct win::midl_stub_message_t*, int32_t)>*;                                       
        using ndr_client_zero_out_t =                    sdk::function<void(struct win::midl_stub_message_t*, const uint8_t*, uint8_t*)>*;                                       
        using ndrp_client_marshal_t =                    sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using ndrp_client_un_marshal_t =                 sdk::function<void(struct win::midl_stub_message_t*, void*)>*;                                       
        using ndrp_free_memory_list_t =                  sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using ndrp_free_params_t =                       sdk::function<void(struct win::midl_stub_message_t*, int32_t, struct win::param_description_t*, uint8_t*)>*;                                       
        using ndrp_server_un_marshal_t =                 sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using ndrp_check_midl_robust_t =                 sdk::function<uint32_t(const struct win::midl_server_info_t*, uint32_t, int32_t)>*;                                       
        using ndrp_add_correlation_data_t =              sdk::function<void(struct win::midl_stub_message_t*, uint8_t*, const uint8_t*, int64_t, int32_t)>*;                                       
        using ndrp_record_custom_unmarshal_t =           sdk::function<void(struct win::midl_stub_message_t*, uint8_t**, uint8_t*, const uint8_t*, uint8_t)>*;                                       
        using ndrp_compute_conformance_t =               sdk::function<uint64_t(struct win::midl_stub_message_t*, uint8_t*, const uint8_t*)>*;                                       
        using ndrp_log_iid_mis_match_event_t =           sdk::function<void(__unaligned struct nt::guid_t*, struct nt::guid_t*)>*;                                       
        using ndr_type_memory_size_t =                   sdk::function<uint32_t(struct win::midl_stub_message_t*, const uint8_t*)>*;                                       
        using ndr_type_convert_t =                       sdk::function<void(struct win::midl_stub_message_t*, const uint8_t*, uint8_t)>*;                                       
        using ndrole_ip_buffsize_t =                     sdk::function<void(struct win::midl_stub_message_t*, uint8_t*, const uint8_t*)>*;                                       
        using ndrole_ip_mrshl_t =                        sdk::function<uint8_t*(struct win::midl_stub_message_t*, uint8_t*, const uint8_t*)>*;                                       
        using ndrole_ip_buffsize_t =                     sdk::function<void(struct win::midl_stub_message_t*, uint8_t*, const uint8_t*)>*;                                       
        using ndr_type_unmarshall_t =                    sdk::function<uint8_t*(struct win::midl_stub_message_t*, uint8_t**, const uint8_t*, uint8_t)>*;                                       
        using get_rpc_verifier_settings_t =              sdk::function<struct win::t_rpc_verifier_settings_t*()>*;                                       
        using mul_ndrp_initialize_context_from_proc_t =  sdk::function<uint32_t(enum win::syntax_type_t, const uint8_t*, struct win::ndr_proc_context_t*, uint8_t*, uint8_t)>*;                                       
        using ndr_fwd_ndrp_dcom_async_client_call_t =    sdk::function<union win::client_call_return_t(const struct win::midl_stub_desc_t*, const uint8_t*, uint8_t*, uint8_t)>*;                                       
        using ndrp_client_call3_t =                      sdk::function<union win::client_call_return_t(void*, struct win::midl_stubless_proxy_info_t*, uint32_t, void*, struct win::ndr_proc_context_t*, uint8_t*)>*;                                       
        using ndr64_client_initialize_context_t =        sdk::function<void(enum win::syntax_type_t, const struct win::midl_stubless_proxy_info_t*, uint32_t, struct win::ndr_proc_context_t*, uint8_t*)>*;                                       
        using ndr_server_setup_ndr64_transfer_syntax_t = sdk::function<void(uint32_t, struct win::midl_syntax_info_t*, struct win::ndr_proc_context_t*)>*;                                       
        using ndr64p_check_correlation_t =               sdk::function<void(struct win::midl_stub_message_t*, int64_t, const void*, enum win::ndr64_expression_type_t)>*;                                       
        using ndr64_evaluate_expr_t =                    sdk::function<int64_t(struct win::midl_stub_message_t*, const void*, enum win::ndr64_expression_type_t)>*;                                       
        using ndr64_top_level_memory_size_t =            sdk::function<void(struct win::midl_stub_message_t*, const void*)>*;                                       
        using ndr64p_server_un_marshal_t =               sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using ndr64p_server_out_init_t =                 sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using pfnsizing_t =                              sdk::function<void(struct win::midl_stub_message_t*, int32_t)>*;                                       
        using ndr64p_server_marshal_t =                  sdk::function<void(struct win::midl_stub_message_t*)>*;                                       
        using ndr64_server_initialize_t =                sdk::function<uint8_t*(struct rpc::message_t*, struct win::midl_stub_message_t*, const struct win::midl_stub_desc_t*)>*;                                       
        using ndr64_clear_out_parameters_t =             sdk::function<void(struct win::midl_stub_message_t*, const void*, uint8_t*)>*;                                       
        using ndr64_client_initialize_t =                sdk::function<void(struct rpc::message_t*, struct win::midl_stub_message_t*, struct win::midl_stubless_proxy_info_t*, uint32_t)>*;                                       
        using ndr64p_free_params_t =                     sdk::function<void(struct win::midl_stub_message_t*, int32_t, struct win::ndr64_param_format_t*, uint8_t*)>*;                                       
        using ndr64_client_zero_out_t =                  sdk::function<void(struct win::midl_stub_message_t*, const void*, uint8_t*)>*;                                       
        using ndr64p_client_un_marshal_t =               sdk::function<void(struct win::midl_stub_message_t*, void*)>*;                                       
        using ndr64p_client_setup_transfer_syntax_t =    sdk::function<int32_t(void*, struct rpc::message_t*, struct win::midl_stub_message_t*, struct win::midl_stubless_proxy_info_t*, struct win::ndr_proc_context_t*, uint32_t)>*;                                       
                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                     
        _m000 pfnsizing_t                               ndrp_server_marshal;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdrpServerMarshal
        _m001 ndrp_server_out_init_t                    ndrp_server_out_init;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdrpServerOutInit
        _m002 pfnsizing_t                               ndrp_sizing;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdrpSizing
        _m003 ndr_client_zero_out_t                     ndr_client_zero_out;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdrClientZeroOut
        _m004 sdk::function<int32_t(void*)>*            i_rpc_set_ndr_slot;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .I_RpcSetNDRSlot
        _m005 sdk::function<int32_t(void*, void**)>*    i_rpc_get_and_set_ndr_slot;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .I_RpcGetAndSetNDRSlot
        _m006 sdk::function<void*()>*                   i_rpc_get_ndr_slot;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .I_RpcGetNDRSlot
        _m007 ndrp_client_marshal_t                     ndrp_client_marshal;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdrpClientMarshal
        _m008 ndrp_client_un_marshal_t                  ndrp_client_un_marshal;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdrpClientUnMarshal
        _m009 ndrp_free_memory_list_t                   ndrp_free_memory_list;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdrpFreeMemoryList
        _m010 ndrp_free_params_t                        ndrp_free_params;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdrpFreeParams
        _m011 ndrp_server_un_marshal_t                  ndrp_server_un_marshal;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NdrpServerUnMarshal
        _m012 sdk::function<int32_t()>*                 ndrp_perform_rpc_initialization;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NdrpPerformRpcInitialization
        _m013 sdk::function<void()>*                    global_mutex_clear_external;             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .GlobalMutexClearExternal
        _m014 sdk::function<void()>*                    global_mutex_request_external;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .GlobalMutexRequestExternal
        _m015 sdk::function<void(uint32_t, uint32_t)>*  print_current_stack_trace;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PrintCurrentStackTrace
        _m016 ndrp_check_midl_robust_t                  ndrp_check_midl_robust;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NdrpCheckMIDLRobust
        _m017 sdk::function<void(struct nt::guid_t*)>*  dbg_print_uuid;                          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DbgPrintUUID
        _m018 ndrp_add_correlation_data_t               ndrp_add_correlation_data;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NdrpAddCorrelationData
        _m019 ndrp_record_custom_unmarshal_t            ndrp_record_custom_unmarshal;            //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NdrpRecordCustomUnmarshal
        _m020 ndrp_compute_conformance_t                ndrp_compute_conformance;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .NdrpComputeConformance
        _m021 ndrp_log_iid_mis_match_event_t            ndrp_log_iid_mis_match_event;            //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .NdrpLogIIDMisMatchEvent
        _m022 ndr_type_memory_size_t                    ndr_type_memory_size;                    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .NdrTypeMemorySize
        _m023 ndr_type_convert_t                        ndr_type_convert;                        //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NdrTypeConvert
        _m024 ndrole_ip_buffsize_t                      ndr_type_free;                           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .NdrTypeFree
        _m025 ndrole_ip_mrshl_t                         ndr_type_marshall;                       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .NdrTypeMarshall
        _m026 ndrole_ip_buffsize_t                      ndr_type_size;                           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .NdrTypeSize
        _m027 ndr_type_unmarshall_t                     ndr_type_unmarshall;                     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .NdrTypeUnmarshall
        _m028 get_rpc_verifier_settings_t               get_rpc_verifier_settings;               //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .GetRpcVerifierSettings
        _m029 int32_t*                                  gf_rpc_verifier_enabled;                 //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .gfRPCVerifierEnabled
        _m030 sdk::function<void*(uint64_t)>*           alloc_wrapper;                           //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .AllocWrapper
        _m031 sdk::function<void(void*)>*               free_wrapper;                            //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .FreeWrapper
        _m032 mul_ndrp_initialize_context_from_proc_t   mul_ndrp_initialize_context_from_proc;   //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .MulNdrpInitializeContextFromProc
        _m033 ndr_fwd_ndrp_dcom_async_client_call_t     ndrp_client_call2;                       //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .NdrpClientCall2
        _m034 const struct rpc::syntax_identifier_t*    ndr20_transfer_syntax;                   //{ +0x0110    +0x0110    +0x01b0    +0x0110    } | .Ndr20TransferSyntax
        _m035 const struct rpc::syntax_identifier_t*    ndr64_transfer_syntax;                   //{ +0x0118    +0x0118    +0x01b8    +0x0118    } | .Ndr64TransferSyntax
                                                                                               
        // Windows 11                                                                          
        //                                                                                     
        _m036 ndrp_client_call3_t                       ndrp_client_call3;                       //{ +0x0110    } | .NdrpClientCall3
        _m037 ndr64_client_initialize_context_t         ndr64_client_initialize_context;         //{ +0x0118    } | .Ndr64ClientInitializeContext
        _m038 ndr_server_setup_ndr64_transfer_syntax_t  ndr_server_setup_ndr64_transfer_syntax;  //{ +0x0120    } | .NdrServerSetupNDR64TransferSyntax
        _m039 ndr64p_check_correlation_t                ndr64p_check_correlation;                //{ +0x0128    } | .Ndr64pCheckCorrelation
        _m040 ndr64_evaluate_expr_t                     ndr64_evaluate_expr;                     //{ +0x0130    } | .Ndr64EvaluateExpr
        _m041 const uint8_t*                            ndr64_simple_type_buffer_size;           //{ +0x0138    } | .Ndr64SimpleTypeBufferSize
        _m042 const uint8_t*                            ndr64_simple_type_memory_size;           //{ +0x0140    } | .Ndr64SimpleTypeMemorySize
        _m043 const uint32_t*                           ndr64_type_flags;                        //{ +0x0148    } | .Ndr64TypeFlags
        _m044 ndr64_top_level_memory_size_t             ndr64_top_level_memory_size;             //{ +0x0150    } | .Ndr64TopLevelMemorySize
        _m045 ndr64p_server_un_marshal_t                ndr64p_server_un_marshal;                //{ +0x0158    } | .Ndr64pServerUnMarshal
        _m046 ndr64p_server_out_init_t                  ndr64p_server_out_init;                  //{ +0x0160    } | .Ndr64pServerOutInit
        _m047 pfnsizing_t                               ndr64p_sizing;                           //{ +0x0168    } | .Ndr64pSizing
        _m048 ndr64p_server_marshal_t                   ndr64p_server_marshal;                   //{ +0x0170    } | .Ndr64pServerMarshal
        _m049 ndr64_server_initialize_t                 ndr64_server_initialize;                 //{ +0x0178    } | .Ndr64ServerInitialize
        _m050 ndr64_clear_out_parameters_t              ndr64_clear_out_parameters;              //{ +0x0180    } | .Ndr64ClearOutParameters
        _m051 ndr64_client_initialize_t                 ndr64_client_initialize;                 //{ +0x0188    } | .Ndr64ClientInitialize
        _m052 ndr64p_free_params_t                      ndr64p_free_params;                      //{ +0x0190    } | .Ndr64pFreeParams
        _m053 ndr64_client_zero_out_t                   ndr64_client_zero_out;                   //{ +0x0198    } | .Ndr64ClientZeroOut
        _m054 ndr64p_client_un_marshal_t                ndr64p_client_un_marshal;                //{ +0x01a0    } | .Ndr64pClientUnMarshal
        _m055 ndr64p_client_setup_transfer_syntax_t     ndr64p_client_setup_transfer_syntax;     //{ +0x01a8    } | .Ndr64pClientSetupTransferSyntax
                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDR_CALLBACK_ROUTINES_TABLE.$", 0x120, true, 0xe3f9f125428f4681 );                                       
        SDK_DYNAMIC_SIZE( ndr_callback_routines_table_t );                                       
    };                                                                                         
};
#include "magic/ndr_callback_routines_table_t.end.hpp"
