#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_proxy_is_valid_machine_fn_t ), "tagI_RpcProxyCallbackInterface.IsValidMachineFn", is_valid_machine_fn, 0x0, 0x40, true, 0x6fa83e68a103cbd3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, char*, uint32_t*)>*), "tagI_RpcProxyCallbackInterface.GetClientAddressFn", get_client_address_fn, 0x40, 0x40, true, 0x75fb68b2137bbef1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t*)>*), "tagI_RpcProxyCallbackInterface.GetConnectionTimeoutFn", get_connection_timeout_fn, 0x80, 0x40, true, 0x3e2749da74604aab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_perform_callout_fn_t ), "tagI_RpcProxyCallbackInterface.PerformCalloutFn", perform_callout_fn, 0xc0, 0x40, true, 0x5bd69cac9f06b0e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_free_callout_state_fn_t ), "tagI_RpcProxyCallbackInterface.FreeCalloutStateFn", free_callout_state_fn, 0x100, 0x40, true, 0xb41309aa689c79fb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_proxy_get_client_session_and_resource_uuid_t ), "tagI_RpcProxyCallbackInterface.GetClientSessionAndResourceUUIDFn", get_client_session_and_resource_uuid_fn, 0x140, 0x40, true, 0x3787a0de66c3a01b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_proxy_filter_if_fn_t ), "tagI_RpcProxyCallbackInterface.ProxyFilterIfFn", proxy_filter_if_fn, 0x180, 0x40, true, 0x150a8c55af2f299f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(i_rpc_proxy_update_perf_counter_fn_t ), "tagI_RpcProxyCallbackInterface.RpcProxyUpdatePerfCounterFn", rpc_proxy_update_perf_counter_fn, 0x1c0, 0x40, true, 0x749fda06e1d818f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(uint16_t*, int32_t)>*), "tagI_RpcProxyCallbackInterface.RpcProxyUpdatePerfCounterBackendServerFn", rpc_proxy_update_perf_counter_backend_server_fn, 0x200, 0x40, true, 0xc6d01a89ef26d96c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif