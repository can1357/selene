#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                    }
namespace rpc { struct message_t;                 }
namespace rpc { struct server_interface_t;        }
namespace tag { struct c_std_ps_factory_buffer_t; }
namespace tag { struct funcdesc_t;                }
namespace tag { struct proxy_file_info_t;         }
namespace tag { struct rpcolemessage_t;           }
namespace tag { struct typedesc_t;                }

#include "magic/ndr_fwd_routines_t.start.hpp"
namespace win
{
    struct hinstance_t;
    struct i_unknown_t;
    struct i_type_info_t;
    struct midl_stub_desc_t;
    struct i_rpc_stub_buffer_t;
    struct midl_stub_message_t;
    union client_call_return_t;
    struct i_rpc_proxy_buffer_t;
    struct ips_factory_buffer_t;
    struct i_rpc_channel_buffer_t;
    struct midl_stubless_proxy_info_t;

    // [struct _NDR_FWD_ROUTINES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_fwd_routines_t                                                                                  
    {                                                                                                          
        using c_std_stub_buffer_add_ref_t =                              sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*;                                               
        using ndr_fwd_c_std_stub_buffer_connect_t =                      sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct win::i_unknown_t*)>*;                                               
        using c_std_stub_buffer_count_refs_t =                           sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*)>*;                                               
        using ndr_fwd_c_std_stub_buffer_debug_server_query_interface_t = sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, void**)>*;                                               
        using c_std_stub_buffer_debug_server_query_interface_t =         ndr_fwd_c_std_stub_buffer_debug_server_query_interface_t ;                                               
        using ndr_fwd_c_std_stub_buffer_debug_server_release_t =         sdk::function<void(struct win::i_rpc_stub_buffer_t*, void*)>*;                                               
        using c_std_stub_buffer_debug_server_release_t =                 ndr_fwd_c_std_stub_buffer_debug_server_release_t ;                                               
        using ndr_fwd_c_std_stub_buffer_disconnect_t =                   sdk::function<void(struct win::i_rpc_stub_buffer_t*)>*;                                               
        using ndr_fwd_c_std_stub_buffer_invoke_t =                       sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct tag::rpcolemessage_t*, struct win::i_rpc_channel_buffer_t*)>*;                                               
        using ndr_fwd_c_std_stub_buffer_is_iid_supported_t =             sdk::function<struct win::i_rpc_stub_buffer_t*(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t&)>*;                                               
        using ndr_fwd_c_std_stub_buffer_query_interface_t =              sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, const struct nt::guid_t&, void**)>*;                                               
        using ndr_fwd_create_proxy_from_type_info_t =                    sdk::function<sdk::hresult(struct win::i_type_info_t*, struct win::i_unknown_t*, const struct nt::guid_t&, struct win::i_rpc_proxy_buffer_t**, void**)>*;                                               
        using ndr_fwd_create_stub_from_type_info_t =                     sdk::function<sdk::hresult(struct win::i_type_info_t*, const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*;                                               
        using dll_get_class_object_t =                                   sdk::function<sdk::hresult(const struct nt::guid_t&, const struct nt::guid_t&, void**)>*;                                               
        using i_unknown_add_ref_proxy_t =                                sdk::function<uint32_t(struct win::i_unknown_t*)>*;                                               
        using i_unknown_query_interface_proxy_t =                        sdk::function<sdk::hresult(struct win::i_unknown_t*, const struct nt::guid_t&, void**)>*;                                               
        using i_unknown_release_proxy_t =                                sdk::function<uint32_t(struct win::i_unknown_t*)>*;                                               
        using ndr_c_std_stub_buffer2_release_t =                         sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*, struct win::ips_factory_buffer_t*)>*;                                               
        using ndr_c_std_stub_buffer_release_t =                          sdk::function<uint32_t(struct win::i_rpc_stub_buffer_t*, struct win::ips_factory_buffer_t*)>*;                                               
        using ndr_fwd_ndr_create_server_interface_from_stub_t =          sdk::function<int32_t(struct win::i_rpc_stub_buffer_t*, struct rpc::server_interface_t*)>*;                                               
        using ndr_fwd_ndrp_dcom_async_client_call_t =                    sdk::function<union win::client_call_return_t(const struct win::midl_stub_desc_t*, const uint8_t*, uint8_t*, uint8_t)>*;                                               
        using ndr_dcom_async_stub_call_t =                               sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_channel_buffer_t*, struct rpc::message_t*, uint32_t*)>*;                                               
        using ndr_fwd_ndr64p_dcom_async_client_call_t =                  sdk::function<union win::client_call_return_t(struct win::midl_stubless_proxy_info_t*, uint32_t, void*, uint8_t*)>*;                                               
        using ndr64_dcom_async_stub_call_t =                             sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_channel_buffer_t*, struct rpc::message_t*, uint32_t*)>*;                                               
        using ndr_fwd_ndr_dll_can_unload_now_t =                         sdk::function<sdk::hresult(struct tag::c_std_ps_factory_buffer_t*)>*;                                               
        using ndr_fwd_ndr_dll_get_class_object_t =                       sdk::function<sdk::hresult(const struct nt::guid_t&, const struct nt::guid_t&, void**, const struct tag::proxy_file_info_t**, const struct nt::guid_t*, struct tag::c_std_ps_factory_buffer_t*)>*;                                               
        using ndr_dll_register_proxy_t =                                 sdk::function<sdk::hresult(struct win::hinstance_t*, const struct tag::proxy_file_info_t**, const struct nt::guid_t*)>*;                                               
        using ndr_dll_unregister_proxy_t =                               sdk::function<sdk::hresult(struct win::hinstance_t*, const struct tag::proxy_file_info_t**, const struct nt::guid_t*)>*;                                               
        using ndr_fwd_ndr_get_base_interface_from_stub_t =               sdk::function<sdk::hresult(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_stub_buffer_t**, struct nt::guid_t*)>*;                                               
        using ndr_stub_forwarding_function_t =                           sdk::function<void(struct win::i_rpc_stub_buffer_t*, struct win::i_rpc_channel_buffer_t*, struct rpc::message_t*, uint32_t*)>*;                                               
        using ndr_fwd_ndr_stub_initialize_marshall_t =                   sdk::function<void(struct rpc::message_t*, struct win::midl_stub_message_t*, struct win::i_rpc_channel_buffer_t*)>*;                                               
        using ndr_fwd_ndrp_create_proxy_t =                              sdk::function<sdk::hresult(const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_proxy_buffer_t**, void**)>*;                                               
        using ndr_fwd_ndrp_create_stub_t =                               sdk::function<sdk::hresult(const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*;                                               
        using ndr_fwd_ndrp_get_proc_format_string_t =                    sdk::function<sdk::hresult(void*, struct win::i_type_info_t*, struct tag::funcdesc_t*, uint16_t, const uint8_t*, uint16_t*)>*;                                               
        using ndr_fwd_ndrp_get_type_format_string_t =                    sdk::function<sdk::hresult(void*, const uint8_t**, uint16_t*)>*;                                               
        using ndr_fwd_ndrp_var_vt_of_type_desc_t =                       sdk::function<sdk::hresult(struct win::i_type_info_t*, struct tag::typedesc_t*, uint16_t*)>*;                                               
                                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                                     
        _m000 c_std_stub_buffer_add_ref_t                       c_std_stub_buffer_add_ref;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CStdStubBuffer_AddRef
        _m001 ndr_fwd_c_std_stub_buffer_connect_t               c_std_stub_buffer_connect;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CStdStubBuffer_Connect
        _m002 c_std_stub_buffer_count_refs_t                    c_std_stub_buffer_count_refs;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CStdStubBuffer_CountRefs
        _m003 c_std_stub_buffer_debug_server_query_interface_t  c_std_stub_buffer_debug_server_query_interface;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CStdStubBuffer_DebugServerQueryInterface
        _m004 c_std_stub_buffer_debug_server_release_t          c_std_stub_buffer_debug_server_release;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CStdStubBuffer_DebugServerRelease
        _m005 ndr_fwd_c_std_stub_buffer_disconnect_t            c_std_stub_buffer_disconnect;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CStdStubBuffer_Disconnect
        _m006 ndr_fwd_c_std_stub_buffer_invoke_t                c_std_stub_buffer_invoke;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CStdStubBuffer_Invoke
        _m007 ndr_fwd_c_std_stub_buffer_is_iid_supported_t      c_std_stub_buffer_is_iid_supported;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CStdStubBuffer_IsIIDSupported
        _m008 ndr_fwd_c_std_stub_buffer_query_interface_t       c_std_stub_buffer_query_interface;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CStdStubBuffer_QueryInterface
        _m009 ndr_fwd_create_proxy_from_type_info_t             create_proxy_from_type_info;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CreateProxyFromTypeInfo
        _m010 ndr_fwd_create_stub_from_type_info_t              create_stub_from_type_info;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CreateStubFromTypeInfo
        _m011 dll_get_class_object_t                            dll_get_class_object;                            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DllGetClassObject
        _m012 sdk::function<sdk::hresult()>*                    dll_register_server;                             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DllRegisterServer
        _m013 i_unknown_add_ref_proxy_t                         i_unknown_add_ref_proxy;                         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .IUnknown_AddRef_Proxy
        _m014 i_unknown_query_interface_proxy_t                 i_unknown_query_interface_proxy;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .IUnknown_QueryInterface_Proxy
        _m015 i_unknown_release_proxy_t                         i_unknown_release_proxy;                         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .IUnknown_Release_Proxy
        _m016 ndr_c_std_stub_buffer2_release_t                  ndr_c_std_stub_buffer2_release;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NdrCStdStubBuffer2_Release
        _m017 ndr_c_std_stub_buffer_release_t                   ndr_c_std_stub_buffer_release;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .NdrCStdStubBuffer_Release
        _m018 ndr_fwd_ndr_create_server_interface_from_stub_t   ndr_create_server_interface_from_stub;           //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .NdrCreateServerInterfaceFromStub
        _m019 ndr_fwd_ndrp_dcom_async_client_call_t             ndrp_dcom_async_client_call;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NdrpDcomAsyncClientCall
        _m020 ndr_dcom_async_stub_call_t                        ndr_dcom_async_stub_call;                        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .NdrDcomAsyncStubCall
        _m021 ndr_fwd_ndr64p_dcom_async_client_call_t           ndr64p_dcom_async_client_call;                   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Ndr64pDcomAsyncClientCall
        _m022 ndr64_dcom_async_stub_call_t                      ndr64_dcom_async_stub_call;                      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Ndr64DcomAsyncStubCall
        _m023 ndr_fwd_ndr_dll_can_unload_now_t                  ndr_dll_can_unload_now;                          //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NdrDllCanUnloadNow
        _m024 ndr_fwd_ndr_dll_get_class_object_t                ndr_dll_get_class_object;                        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .NdrDllGetClassObject
        _m025 ndr_dll_register_proxy_t                          ndr_dll_register_proxy;                          //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .NdrDllRegisterProxy
        _m026 ndr_dll_unregister_proxy_t                        ndr_dll_unregister_proxy;                        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .NdrDllUnregisterProxy
        _m027 ndr_fwd_ndr_get_base_interface_from_stub_t        ndr_get_base_interface_from_stub;                //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .NdrGetBaseInterfaceFromStub
        _m028 sdk::function<void*(uint64_t)>*                   ndr_ole_allocate;                                //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .NdrOleAllocate
        _m029 sdk::function<void(void*)>*                       ndr_ole_free;                                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .NdrOleFree
        _m030 ndr_stub_forwarding_function_t                    ndr_stub_forwarding_function;                    //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .NdrStubForwardingFunction
        _m031 ndr_fwd_ndr_stub_initialize_marshall_t            ndr_stub_initialize_marshall;                    //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .NdrStubInitializeMarshall
        _m032 ndr_fwd_ndrp_create_proxy_t                       ndrp_create_proxy;                               //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .NdrpCreateProxy
        _m033 ndr_fwd_ndrp_create_stub_t                        ndrp_create_stub;                                //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .NdrpCreateStub
        _m034 ndr_fwd_ndrp_get_proc_format_string_t             ndrp_get_proc_format_string;                     //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .NdrpGetProcFormatString
        _m035 ndr_fwd_ndrp_get_type_format_string_t             ndrp_get_type_format_string;                     //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .NdrpGetTypeFormatString
        _m036 sdk::function<sdk::hresult(void**)>*              ndrp_get_type_gen_cookie;                        //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .NdrpGetTypeGenCookie
        _m037 sdk::function<sdk::hresult(const uint8_t*)>*      ndrp_release_type_format_string;                 //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .NdrpReleaseTypeFormatString
        _m038 sdk::function<sdk::hresult(void*)>*               ndrp_release_type_gen_cookie;                    //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .NdrpReleaseTypeGenCookie
        _m039 ndr_fwd_ndrp_var_vt_of_type_desc_t                ndrp_var_vt_of_type_desc;                        //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .NdrpVarVtOfTypeDesc
                                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDR_FWD_ROUTINES.$", 0x140, true, 0x1fb04e08229802c9 );                                               
        SDK_FIXED_SIZE( ndr_fwd_routines_t, 0x140 );                                                           
    };                                                                                                         
};
#include "magic/ndr_fwd_routines_t.end.hpp"
SDK_VERIFY( struct win::ndr_fwd_routines_t, 0x140 );
