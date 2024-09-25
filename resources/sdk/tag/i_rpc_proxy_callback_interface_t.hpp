#pragma once
#include <sdkgen/support_library.hpp>
#include "../rpc/proxy_perf_counters_t.hpp"
#include "../rpc/http_redirector_stage_t.hpp"

namespace nt  { struct guid_t;              }
namespace win { struct rdr_callout_state_t; }

#include "magic/i_rpc_proxy_callback_interface_t.start.hpp"
namespace tag
{
    // [struct tagI_RpcProxyCallbackInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_proxy_callback_interface_t                                                                   
    {                                                                                                         
        using i_rpc_proxy_is_valid_machine_fn_t =                  sdk::function<int32_t(uint16_t*, uint16_t*, uint32_t)>*;                                                
        using i_rpc_perform_callout_fn_t =                         sdk::function<int32_t(void*, struct win::rdr_callout_state_t*, enum rpc::http_redirector_stage_t)>*;                                                
        using i_rpc_free_callout_state_fn_t =                      sdk::function<void(struct win::rdr_callout_state_t*)>*;                                                
        using i_rpc_proxy_get_client_session_and_resource_uuid_t = sdk::function<int32_t(void*, int32_t*, struct nt::guid_t*, int32_t*, struct nt::guid_t*)>*;                                                
        using get_client_session_and_resource_uuid_fn_t =          i_rpc_proxy_get_client_session_and_resource_uuid_t ;                                                
        using i_rpc_proxy_filter_if_fn_t =                         sdk::function<int32_t(void*, struct nt::guid_t*, uint16_t, int32_t*)>*;                                                
        using i_rpc_proxy_update_perf_counter_fn_t =               sdk::function<void(enum rpc::proxy_perf_counters_t, int32_t, uint32_t)>*;                                                
                                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                                    
        _m00 i_rpc_proxy_is_valid_machine_fn_t                is_valid_machine_fn;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IsValidMachineFn
        _m01 sdk::function<int32_t(void*, char*, uint32_t*)>* get_client_address_fn;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GetClientAddressFn
        _m02 sdk::function<int32_t(uint32_t*)>*               get_connection_timeout_fn;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetConnectionTimeoutFn
        _m03 i_rpc_perform_callout_fn_t                       perform_callout_fn;                               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PerformCalloutFn
        _m04 i_rpc_free_callout_state_fn_t                    free_callout_state_fn;                            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FreeCalloutStateFn
        _m05 get_client_session_and_resource_uuid_fn_t        get_client_session_and_resource_uuid_fn;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetClientSessionAndResourceUUIDFn
        _m06 i_rpc_proxy_filter_if_fn_t                       proxy_filter_if_fn;                               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProxyFilterIfFn
        _m07 i_rpc_proxy_update_perf_counter_fn_t             rpc_proxy_update_perf_counter_fn;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .RpcProxyUpdatePerfCounterFn
        _m08 sdk::function<void(uint16_t*, int32_t)>*         rpc_proxy_update_perf_counter_backend_server_fn;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RpcProxyUpdatePerfCounterBackendServerFn
                                                                                                              
        SDK_MAGIC_PROPERTIES( "tagI_RpcProxyCallbackInterface.$", 0x48, true, 0x6677f44a244f90b0 );                                                
        SDK_FIXED_SIZE( i_rpc_proxy_callback_interface_t, 0x48 );                                                
    };                                                                                                        
};
#include "magic/i_rpc_proxy_callback_interface_t.end.hpp"
SDK_VERIFY( struct tag::i_rpc_proxy_callback_interface_t, 0x48 );
