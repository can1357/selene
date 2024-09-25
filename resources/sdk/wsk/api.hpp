#pragma once
#include <sdkgen/support_library.hpp>
#include "client_npi_t.hpp"
#include "provider_npi_t.hpp"
#include "registration_t.hpp"
#include "provider_characteristics_t.hpp"

#include "magic/api.start.hpp"
namespace wsk
{
    // [WskKnrCreateLmhostNamedEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0xbcc4, 0x15e38 bytes
    //
    _m0(sdk::unknown_ptr) knr_create_lmhost_named_event;
    
    // [WskKnrDemandStartLmHosts]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0x19dc0, 0x15e38 bytes
    //
    _m1(sdk::unknown_ptr) knr_demand_start_lm_hosts;
    
    // [WskKnrDereferenceRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys PAGE:0x44320, 0x15e38 bytes
    //
    _m2(sdk::unknown_ptr) knr_dereference_request;
    
    // [WskKnrCreateNameResNamedEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x8468, 0x15fb8 bytes
    // afd.sys .text:0x1a958, 0x187f8 bytes
    // afd.sys .text:0x8468, 0x15fb8 bytes
    //
    _m3(sdk::unknown_ptr) knr_create_name_res_named_event;
    
    // [WskKnrDeferredCompleteRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x46db0, 0x15fb8 bytes
    // afd.sys PAGE:0x74d70, 0x187f8 bytes
    // afd.sys PAGE:0x46db0, 0x15fb8 bytes
    //
    _m4(sdk::unknown_ptr) knr_deferred_complete_request;
    
    // [WskKnrDemandStartDns]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x14900, 0x15fb8 bytes
    // afd.sys .text:0x43d68, 0x187f8 bytes
    // afd.sys .text:0x14900, 0x15fb8 bytes
    //
    _m5(sdk::unknown_ptr) knr_demand_start_dns;
    
    // [WskProAllocateConnectExContext]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7508, 0x15fb8 bytes
    // afd.sys .text:0x3fdc8, 0x187f8 bytes
    // afd.sys .text:0x7508, 0x15fb8 bytes
    //
    _m6(sdk::unknown_ptr) pro_allocate_connect_ex_context;
    
    // [WskProAPIConnectEx]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x77e0, 0x15fb8 bytes
    // afd.sys .text:0x3f430, 0x187f8 bytes
    // afd.sys .text:0x77e0, 0x15fb8 bytes
    //
    _m7(sdk::unknown_ptr) pro_api_connect_ex;
    
    // [WskProAPIListen]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x11870, 0x15fb8 bytes
    // afd.sys .text:0x3f4d0, 0x187f8 bytes
    // afd.sys .text:0x11870, 0x15fb8 bytes
    //
    _m8(sdk::unknown_ptr) pro_api_listen;
    
    // [WskProAPIReceiveEx]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x118f0, 0x15fb8 bytes
    // afd.sys .text:0x3f550, 0x187f8 bytes
    // afd.sys .text:0x118f0, 0x15fb8 bytes
    //
    _m9(sdk::unknown_ptr) pro_api_receive_ex;
    
    // [WskProAPISendEx]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x11af0, 0x15fb8 bytes
    // afd.sys .text:0x3f7e0, 0x187f8 bytes
    // afd.sys .text:0x11af0, 0x15fb8 bytes
    //
    _n0(sdk::unknown_ptr) pro_api_send_ex;
    
    // [WskProAPIStreamSocketDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de70, 0x15fb8 bytes
    // afd.sys .rdata:0x4de90, 0x187f8 bytes
    // afd.sys .rdata:0x1de70, 0x15fb8 bytes
    //
    _n1(sdk::unknown_ptr) pro_api_stream_socket_dispatch;
    
    // [WskProCleanupConnectExContext]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7868, 0x15fb8 bytes
    // afd.sys .text:0x4037c, 0x187f8 bytes
    // afd.sys .text:0x7868, 0x15fb8 bytes
    //
    _n2(sdk::unknown_ptr) pro_cleanup_connect_ex_context;
    
    // [WskProCloseSocketWhileConnectInProgress]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x12618, 0x15fb8 bytes
    // afd.sys .text:0x40504, 0x187f8 bytes
    // afd.sys .text:0x12618, 0x15fb8 bytes
    //
    _n3(sdk::unknown_ptr) pro_close_socket_while_connect_in_progress;
    
    // [WskProConnectEx]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5afc, 0x15fb8 bytes
    // afd.sys .text:0x16d5c, 0x187f8 bytes
    // afd.sys .text:0x5afc, 0x15fb8 bytes
    //
    _n4(sdk::unknown_ptr) pro_connect_ex;
    
    // [WskProIRPConnectEx]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7610, 0x15fb8 bytes
    // afd.sys .text:0x41050, 0x187f8 bytes
    // afd.sys .text:0x7610, 0x15fb8 bytes
    //
    _n5(sdk::unknown_ptr) pro_irp_connect_ex;
    
    // [WskProIRPListen]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x12b70, 0x15fb8 bytes
    // afd.sys .text:0x41130, 0x187f8 bytes
    // afd.sys .text:0x12b70, 0x15fb8 bytes
    //
    _n6(sdk::unknown_ptr) pro_irp_listen;
    
    // [WskProTLConnectExRetryComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x76b0, 0x15fb8 bytes
    // afd.sys .text:0x41fb0, 0x187f8 bytes
    // afd.sys .text:0x76b0, 0x15fb8 bytes
    //
    _n7(sdk::unknown_ptr) pro_tl_connect_ex_retry_complete;
    
    // [WskProTLConnectExSendComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7850, 0x15fb8 bytes
    // afd.sys .text:0x42090, 0x187f8 bytes
    // afd.sys .text:0x7850, 0x15fb8 bytes
    //
    _n8(sdk::unknown_ptr) pro_tl_connect_ex_send_complete;
    
    // [WskKnrBuildSiloWaitList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19ce4, 0x15e38 bytes
    // afd.sys .text:0x14808, 0x15fb8 bytes
    // afd.sys .text:0x43984, 0x187f8 bytes
    // afd.sys .text:0x14808, 0x15fb8 bytes
    //
    _n9(sdk::unknown_ptr) knr_build_silo_wait_list;
    
    // [WskKnrCleanupClientPendingRequests]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x519c, 0x15e38 bytes
    // afd.sys .text:0x73a0, 0x15fb8 bytes
    // afd.sys .text:0x43a7c, 0x187f8 bytes
    // afd.sys .text:0x73a0, 0x15fb8 bytes
    //
    _o0(sdk::unknown_ptr) knr_cleanup_client_pending_requests;
    
    // [WskKnrCompletePending]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1094, 0x15e38 bytes
    // afd.sys .text:0x3cb0, 0x15fb8 bytes
    // afd.sys .text:0x13da8, 0x187f8 bytes
    // afd.sys .text:0x3cb0, 0x15fb8 bytes
    //
    _o1(sdk::unknown_ptr) knr_complete_pending;
    
    // [WskKnrCompleteRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16e4, 0x15e38 bytes
    // afd.sys .text:0x3b44, 0x15fb8 bytes
    // afd.sys .text:0x13fc4, 0x187f8 bytes
    // afd.sys .text:0x3b44, 0x15fb8 bytes
    //
    _o2(sdk::unknown_ptr) knr_complete_request;
    
    // [WskKnrExtractRpcResults]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x138c, 0x15e38 bytes
    // afd.sys .text:0x402c, 0x15fb8 bytes
    // afd.sys .text:0x14430, 0x187f8 bytes
    // afd.sys .text:0x402c, 0x15fb8 bytes
    //
    _o3(sdk::unknown_ptr) knr_extract_rpc_results;
    
    // [WskKnrFreeRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x302e4, 0x15e38 bytes
    // afd.sys PAGE:0x33da4, 0x15fb8 bytes
    // afd.sys PAGE:0x626e0, 0x187f8 bytes
    // afd.sys PAGE:0x33da4, 0x15fb8 bytes
    //
    _o4(sdk::unknown_ptr) knr_free_request;
    
    // [WskKnrIrpCancel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19e40, 0x15e38 bytes
    // afd.sys .text:0x149c0, 0x15fb8 bytes
    // afd.sys .text:0x43e20, 0x187f8 bytes
    // afd.sys .text:0x149c0, 0x15fb8 bytes
    //
    _o5(sdk::unknown_ptr) knr_irp_cancel;
    
    // [WskKnrIsCurrentThreadImpersonated]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19f90, 0x15e38 bytes
    // afd.sys .text:0x14b58, 0x15fb8 bytes
    // afd.sys .text:0x43fbc, 0x187f8 bytes
    // afd.sys .text:0x14b58, 0x15fb8 bytes
    //
    _o6(sdk::unknown_ptr) knr_is_current_thread_impersonated;
    
    // [WskKnrNullifyRpcBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19fcc, 0x15e38 bytes
    // afd.sys .text:0x14bb0, 0x15fb8 bytes
    // afd.sys .text:0x44014, 0x187f8 bytes
    // afd.sys .text:0x14bb0, 0x15fb8 bytes
    //
    _o7(sdk::unknown_ptr) knr_nullify_rpc_binding;
    
    // [WskKnrPodShutdown]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a0a4, 0x15e38 bytes
    // afd.sys .text:0x14cac, 0x15fb8 bytes
    // afd.sys .text:0x4410c, 0x187f8 bytes
    // afd.sys .text:0x14cac, 0x15fb8 bytes
    //
    _o8(sdk::unknown_ptr) knr_pod_shutdown;
    
    // [WskKnrPodStart]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3643c, 0x15e38 bytes
    // afd.sys PAGE:0x36bbc, 0x15fb8 bytes
    // afd.sys PAGE:0x64fc0, 0x187f8 bytes
    // afd.sys PAGE:0x36bbc, 0x15fb8 bytes
    //
    _o9(sdk::unknown_ptr) knr_pod_start;
    
    // [WskKnrPodStop]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x44364, 0x15e38 bytes
    // afd.sys PAGE:0x46df8, 0x15fb8 bytes
    // afd.sys PAGE:0x74db8, 0x187f8 bytes
    // afd.sys PAGE:0x46df8, 0x15fb8 bytes
    //
    _p0(sdk::unknown_ptr) knr_pod_stop;
    
    // [WskKnrProcessWaitQueue]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a160, 0x15e38 bytes
    // afd.sys .text:0x14dc0, 0x15fb8 bytes
    // afd.sys .text:0x44220, 0x187f8 bytes
    // afd.sys .text:0x14dc0, 0x15fb8 bytes
    //
    _p1(sdk::unknown_ptr) knr_process_wait_queue;
    
    // [WskKnrReleaseRpcBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1684, 0x15e38 bytes
    // afd.sys .text:0x3c38, 0x15fb8 bytes
    // afd.sys .text:0x14254, 0x187f8 bytes
    // afd.sys .text:0x3c38, 0x15fb8 bytes
    //
    _p2(sdk::unknown_ptr) knr_release_rpc_binding;
    
    // [WskKnrRetainRpcBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1544, 0x15e38 bytes
    // afd.sys .text:0x41cc, 0x15fb8 bytes
    // afd.sys .text:0x145cc, 0x187f8 bytes
    // afd.sys .text:0x41cc, 0x15fb8 bytes
    //
    _p3(sdk::unknown_ptr) knr_retain_rpc_binding;
    
    // [WskKnrRpcCancel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x443f0, 0x15e38 bytes
    // afd.sys PAGE:0x46ea0, 0x15fb8 bytes
    // afd.sys PAGE:0x74e60, 0x187f8 bytes
    // afd.sys PAGE:0x46ea0, 0x15fb8 bytes
    //
    _p4(sdk::unknown_ptr) knr_rpc_cancel;
    
    // [WskKnrRpcCloseBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x444e0, 0x15e38 bytes
    // afd.sys PAGE:0x46fb8, 0x15fb8 bytes
    // afd.sys PAGE:0x74f80, 0x187f8 bytes
    // afd.sys PAGE:0x46fb8, 0x15fb8 bytes
    //
    _p5(sdk::unknown_ptr) knr_rpc_close_binding;
    
    // [WskKnrRpcComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30000, 0x15e38 bytes
    // afd.sys PAGE:0x34110, 0x15fb8 bytes
    // afd.sys PAGE:0x626b0, 0x187f8 bytes
    // afd.sys PAGE:0x34110, 0x15fb8 bytes
    //
    _p6(sdk::unknown_ptr) knr_rpc_complete;
    
    // [WskKnrRpcInvoke]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17e0, 0x15e38 bytes
    // afd.sys .text:0x3ec0, 0x15fb8 bytes
    // afd.sys .text:0x142c8, 0x187f8 bytes
    // afd.sys .text:0x3ec0, 0x15fb8 bytes
    //
    _p7(sdk::unknown_ptr) knr_rpc_invoke;
    
    // [WskKnrRpcInvokeClientWait]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a240, 0x15e38 bytes
    // afd.sys .text:0x14edc, 0x15fb8 bytes
    // afd.sys .text:0x4433c, 0x187f8 bytes
    // afd.sys .text:0x14edc, 0x15fb8 bytes
    //
    _p8(sdk::unknown_ptr) knr_rpc_invoke_client_wait;
    
    // [WskKnrRpcMethod]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30034, 0x15e38 bytes
    // afd.sys PAGE:0x33e24, 0x15fb8 bytes
    // afd.sys PAGE:0x62760, 0x187f8 bytes
    // afd.sys PAGE:0x33e24, 0x15fb8 bytes
    //
    _p9(sdk::unknown_ptr) knr_rpc_method;
    
    // [WskKnrRpcOpenBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3650c, 0x15e38 bytes
    // afd.sys PAGE:0x35ff0, 0x15fb8 bytes
    // afd.sys PAGE:0x63d40, 0x187f8 bytes
    // afd.sys PAGE:0x35ff0, 0x15fb8 bytes
    //
    _q0(sdk::unknown_ptr) knr_rpc_open_binding;
    
    // [WskKnrRpcProcessInvoke]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1260, 0x15e38 bytes
    // afd.sys .text:0x3ef8, 0x15fb8 bytes
    // afd.sys .text:0x14300, 0x187f8 bytes
    // afd.sys .text:0x3ef8, 0x15fb8 bytes
    //
    _q1(sdk::unknown_ptr) knr_rpc_process_invoke;
    
    // [WskKnrRpcTraverseAllWait]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a604, 0x15e38 bytes
    // afd.sys .text:0x152b0, 0x15fb8 bytes
    // afd.sys .text:0x44724, 0x187f8 bytes
    // afd.sys .text:0x152b0, 0x15fb8 bytes
    //
    _q2(sdk::unknown_ptr) knr_rpc_traverse_all_wait;
    
    // [WskKnrWaitUserModeService]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a718, 0x15e38 bytes
    // afd.sys .text:0x153f8, 0x15fb8 bytes
    // afd.sys .text:0x4486c, 0x187f8 bytes
    // afd.sys .text:0x153f8, 0x15fb8 bytes
    //
    _q3(sdk::unknown_ptr) knr_wait_user_mode_service;
    
    // [WskProAddressListQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17250, 0x15e38 bytes
    // afd.sys .text:0x11d20, 0x15fb8 bytes
    // afd.sys .text:0x3fad4, 0x187f8 bytes
    // afd.sys .text:0x11d20, 0x15fb8 bytes
    //
    _q4(sdk::unknown_ptr) pro_address_list_query;
    
    // [WskProAPIAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16e10, 0x15e38 bytes
    // afd.sys .text:0x117d0, 0x15fb8 bytes
    // afd.sys .text:0x3f390, 0x187f8 bytes
    // afd.sys .text:0x117d0, 0x15fb8 bytes
    //
    _q5(sdk::unknown_ptr) pro_api_accept;
    
    // [WskProAPIBasicSocketDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d030, 0x15e38 bytes
    // afd.sys .rdata:0x1d000, 0x15fb8 bytes
    // afd.sys .rdata:0x4d108, 0x187f8 bytes
    // afd.sys .rdata:0x1d000, 0x15fb8 bytes
    //
    _q6(sdk::unknown_ptr) pro_api_basic_socket_dispatch;
    
    // [WskProAPIBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4ab0, 0x15e38 bytes
    // afd.sys .text:0x5f20, 0x15fb8 bytes
    // afd.sys .text:0x17440, 0x187f8 bytes
    // afd.sys .text:0x5f20, 0x15fb8 bytes
    //
    _q7(sdk::unknown_ptr) pro_api_bind;
    
    // [WskProAPICloseSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4360, 0x15e38 bytes
    // afd.sys .text:0x52d0, 0x15fb8 bytes
    // afd.sys .text:0x14a00, 0x187f8 bytes
    // afd.sys .text:0x52d0, 0x15fb8 bytes
    //
    _q8(sdk::unknown_ptr) pro_api_close_socket;
    
    // [WskProAPIConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4b00, 0x15e38 bytes
    // afd.sys .text:0x61c0, 0x15fb8 bytes
    // afd.sys .text:0x17560, 0x187f8 bytes
    // afd.sys .text:0x61c0, 0x15fb8 bytes
    //
    _q9(sdk::unknown_ptr) pro_api_connect;
    
    // [WskProAPIConnectionSocketDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d090, 0x15e38 bytes
    // afd.sys .rdata:0x1d0a0, 0x15fb8 bytes
    // afd.sys .rdata:0x4d070, 0x187f8 bytes
    // afd.sys .rdata:0x1d0a0, 0x15fb8 bytes
    //
    _r0(sdk::unknown_ptr) pro_api_connection_socket_dispatch;
    
    // [WskProAPIControlSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4530, 0x15e38 bytes
    // afd.sys .text:0x4e40, 0x15fb8 bytes
    // afd.sys .text:0x139c0, 0x187f8 bytes
    // afd.sys .text:0x4e40, 0x15fb8 bytes
    //
    _r1(sdk::unknown_ptr) pro_api_control_socket;
    
    // [WskProAPIDatagramSocketDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dda0, 0x15e38 bytes
    // afd.sys .rdata:0x1d040, 0x15fb8 bytes
    // afd.sys .rdata:0x4df10, 0x187f8 bytes
    // afd.sys .rdata:0x1d040, 0x15fb8 bytes
    //
    _r2(sdk::unknown_ptr) pro_api_datagram_socket_dispatch;
    
    // [WskProAPIDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x49b0, 0x15e38 bytes
    // afd.sys .text:0x56e0, 0x15fb8 bytes
    // afd.sys .text:0x16570, 0x187f8 bytes
    // afd.sys .text:0x56e0, 0x15fb8 bytes
    //
    _r3(sdk::unknown_ptr) pro_api_disconnect;
    
    // [WskProAPIFreeAddressInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34540, 0x15e38 bytes
    // afd.sys PAGE:0x34c10, 0x15fb8 bytes
    // afd.sys PAGE:0x63000, 0x187f8 bytes
    // afd.sys PAGE:0x34c10, 0x15fb8 bytes
    //
    _r4(sdk::unknown_ptr) pro_api_free_address_info;
    
    // [WskProAPIGetAddressInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x345d0, 0x15e38 bytes
    // afd.sys PAGE:0x34ca0, 0x15fb8 bytes
    // afd.sys PAGE:0x63090, 0x187f8 bytes
    // afd.sys PAGE:0x34ca0, 0x15fb8 bytes
    //
    _r5(sdk::unknown_ptr) pro_api_get_address_info;
    
    // [WskProAPIGetLocalAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4ba0, 0x15e38 bytes
    // afd.sys .text:0x5fb0, 0x15fb8 bytes
    // afd.sys .text:0x17500, 0x187f8 bytes
    // afd.sys .text:0x5fb0, 0x15fb8 bytes
    //
    _r6(sdk::unknown_ptr) pro_api_get_local_address;
    
    // [WskProAPIGetNameInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x44530, 0x15e38 bytes
    // afd.sys PAGE:0x47020, 0x15fb8 bytes
    // afd.sys PAGE:0x74fe0, 0x187f8 bytes
    // afd.sys PAGE:0x47020, 0x15fb8 bytes
    //
    _r7(sdk::unknown_ptr) pro_api_get_name_info;
    
    // [WskProAPIGetRemoteAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4b50, 0x15e38 bytes
    // afd.sys .text:0x6160, 0x15fb8 bytes
    // afd.sys .text:0x174a0, 0x187f8 bytes
    // afd.sys .text:0x6160, 0x15fb8 bytes
    //
    _r8(sdk::unknown_ptr) pro_api_get_remote_address;
    
    // [WskProAPIListenSocketDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d000, 0x15e38 bytes
    // afd.sys .rdata:0x1d010, 0x15fb8 bytes
    // afd.sys .rdata:0x4d118, 0x187f8 bytes
    // afd.sys .rdata:0x1d010, 0x15fb8 bytes
    //
    _r9(sdk::unknown_ptr) pro_api_listen_socket_dispatch;
    
    // [WskProAPIProviderDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d168, 0x15e38 bytes
    // afd.sys .rdata:0x1d230, 0x15fb8 bytes
    // afd.sys .rdata:0x4d290, 0x187f8 bytes
    // afd.sys .rdata:0x1d230, 0x15fb8 bytes
    //
    _s0(sdk::unknown_ptr) pro_api_provider_dispatch;
    
    // [WskProAPIReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xaf00, 0x15e38 bytes
    // afd.sys .text:0x51c0, 0x15fb8 bytes
    // afd.sys .text:0x13b80, 0x187f8 bytes
    // afd.sys .text:0x51c0, 0x15fb8 bytes
    //
    _s1(sdk::unknown_ptr) pro_api_receive;
    
    // [WskProAPIReceiveFrom]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16eb0, 0x15e38 bytes
    // afd.sys .text:0x119b0, 0x15fb8 bytes
    // afd.sys .text:0x3f610, 0x187f8 bytes
    // afd.sys .text:0x119b0, 0x15fb8 bytes
    //
    _s2(sdk::unknown_ptr) pro_api_receive_from;
    
    // [WskProAPIReleaseC]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xae60, 0x15e38 bytes
    // afd.sys .text:0x6660, 0x15fb8 bytes
    // afd.sys .text:0x3f6d0, 0x187f8 bytes
    // afd.sys .text:0x6660, 0x15fb8 bytes
    //
    _s3(sdk::unknown_ptr) pro_api_release_c;
    
    // [WskProAPIReleaseD]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16f50, 0x15e38 bytes
    // afd.sys .text:0x6950, 0x15fb8 bytes
    // afd.sys .text:0x3f6d0, 0x187f8 bytes
    // afd.sys .text:0x6950, 0x15fb8 bytes
    //
    _s4(sdk::unknown_ptr) pro_api_release_d;
    
    // [WskProAPIResume]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16fd0, 0x15e38 bytes
    // afd.sys .text:0x11a60, 0x15fb8 bytes
    // afd.sys .text:0x3f750, 0x187f8 bytes
    // afd.sys .text:0x11a60, 0x15fb8 bytes
    //
    _s5(sdk::unknown_ptr) pro_api_resume;
    
    // [WskProAPISend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x42f0, 0x15e38 bytes
    // afd.sys .text:0x4be0, 0x15fb8 bytes
    // afd.sys .text:0x132c0, 0x187f8 bytes
    // afd.sys .text:0x4be0, 0x15fb8 bytes
    //
    _s6(sdk::unknown_ptr) pro_api_send;
    
    // [WskProAPISendMessages]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17050, 0x15e38 bytes
    // afd.sys .text:0x70f0, 0x15fb8 bytes
    // afd.sys .text:0x3f890, 0x187f8 bytes
    // afd.sys .text:0x70f0, 0x15fb8 bytes
    //
    _s7(sdk::unknown_ptr) pro_api_send_messages;
    
    // [WskProAPISendTo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x170f0, 0x15e38 bytes
    // afd.sys .text:0x11ba0, 0x15fb8 bytes
    // afd.sys .text:0x3f940, 0x187f8 bytes
    // afd.sys .text:0x11ba0, 0x15fb8 bytes
    //
    _s8(sdk::unknown_ptr) pro_api_send_to;
    
    // [WskProAPISocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x48d0, 0x15e38 bytes
    // afd.sys .text:0x5840, 0x15fb8 bytes
    // afd.sys .text:0x171a0, 0x187f8 bytes
    // afd.sys .text:0x5840, 0x15fb8 bytes
    //
    _s9(sdk::unknown_ptr) pro_api_socket;
    
    // [WskProAPISocketConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17190, 0x15e38 bytes
    // afd.sys .text:0x11c40, 0x15fb8 bytes
    // afd.sys .text:0x3f9f0, 0x187f8 bytes
    // afd.sys .text:0x11c40, 0x15fb8 bytes
    //
    _t0(sdk::unknown_ptr) pro_api_socket_connect;
    
    // [WskProCANCELAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17500, 0x15e38 bytes
    // afd.sys .text:0x12020, 0x15fb8 bytes
    // afd.sys .text:0x3fed0, 0x187f8 bytes
    // afd.sys .text:0x12020, 0x15fb8 bytes
    //
    _t1(sdk::unknown_ptr) pro_cancel_accept;
    
    // [WskProCANCELReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x175a0, 0x15e38 bytes
    // afd.sys .text:0x120e0, 0x15fb8 bytes
    // afd.sys .text:0x3ff90, 0x187f8 bytes
    // afd.sys .text:0x120e0, 0x15fb8 bytes
    //
    _t2(sdk::unknown_ptr) pro_cancel_receive;
    
    // [WskProCANCELReceiveFrom]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17500, 0x15e38 bytes
    // afd.sys .text:0x12020, 0x15fb8 bytes
    // afd.sys .text:0x3fed0, 0x187f8 bytes
    // afd.sys .text:0x12020, 0x15fb8 bytes
    //
    _t3(sdk::unknown_ptr) pro_cancel_receive_from;
    
    // [WskProCANCELSendOrDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17680, 0x15e38 bytes
    // afd.sys .text:0x121d0, 0x15fb8 bytes
    // afd.sys .text:0x40080, 0x187f8 bytes
    // afd.sys .text:0x121d0, 0x15fb8 bytes
    //
    _t4(sdk::unknown_ptr) pro_cancel_send_or_disconnect;
    
    // [WskProCANCELSendTo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17730, 0x15e38 bytes
    // afd.sys .text:0x12290, 0x15fb8 bytes
    // afd.sys .text:0x40140, 0x187f8 bytes
    // afd.sys .text:0x12290, 0x15fb8 bytes
    //
    _t5(sdk::unknown_ptr) pro_cancel_send_to;
    
    // [WskProCANCELTLConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x177e0, 0x15e38 bytes
    // afd.sys .text:0x12350, 0x15fb8 bytes
    // afd.sys .text:0x40200, 0x187f8 bytes
    // afd.sys .text:0x12350, 0x15fb8 bytes
    //
    _t6(sdk::unknown_ptr) pro_canceltl_connect;
    
    // [WskProCANCELTLGeneric]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x178a0, 0x15e38 bytes
    // afd.sys .text:0x12420, 0x15fb8 bytes
    // afd.sys .text:0x402d0, 0x187f8 bytes
    // afd.sys .text:0x12420, 0x15fb8 bytes
    //
    _t7(sdk::unknown_ptr) pro_canceltl_generic;
    
    // [WskProCheckRetainTLEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17928, 0x15e38 bytes
    // afd.sys .text:0x124a8, 0x15fb8 bytes
    // afd.sys .text:0x40358, 0x187f8 bytes
    // afd.sys .text:0x124a8, 0x15fb8 bytes
    //
    _t8(sdk::unknown_ptr) pro_check_retain_tl_endpoint;
    
    // [WskProCleanupSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17944, 0x15e38 bytes
    // afd.sys .text:0x124cc, 0x15fb8 bytes
    // afd.sys .text:0x403d8, 0x187f8 bytes
    // afd.sys .text:0x124cc, 0x15fb8 bytes
    //
    _t9(sdk::unknown_ptr) pro_cleanup_socket;
    
    // [WskProCompleteCallbackDisableIrps]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17a68, 0x15e38 bytes
    // afd.sys .text:0x1274c, 0x15fb8 bytes
    // afd.sys .text:0x40638, 0x187f8 bytes
    // afd.sys .text:0x1274c, 0x15fb8 bytes
    //
    _u0(sdk::unknown_ptr) pro_complete_callback_disable_irps;
    
    // [WskProCompleteReceiveFromIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17b3c, 0x15e38 bytes
    // afd.sys .text:0x12834, 0x15fb8 bytes
    // afd.sys .text:0x40720, 0x187f8 bytes
    // afd.sys .text:0x12834, 0x15fb8 bytes
    //
    _u1(sdk::unknown_ptr) pro_complete_receive_from_irp;
    
    // [WskProControlCallbacks]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17ca8, 0x15e38 bytes
    // afd.sys .text:0x7190, 0x15fb8 bytes
    // afd.sys .text:0x408a8, 0x187f8 bytes
    // afd.sys .text:0x7190, 0x15fb8 bytes
    //
    _u2(sdk::unknown_ptr) pro_control_callbacks;
    
    // [WskProControlSocketCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ed8, 0x15e38 bytes
    // afd.sys .text:0x46f0, 0x15fb8 bytes
    // afd.sys .text:0x13360, 0x187f8 bytes
    // afd.sys .text:0x46f0, 0x15fb8 bytes
    //
    _u3(sdk::unknown_ptr) pro_control_socket_core;
    
    // [WskProCoreCloseSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1dd0, 0x15e38 bytes
    // afd.sys .text:0x5060, 0x15fb8 bytes
    // afd.sys .text:0x13c60, 0x187f8 bytes
    // afd.sys .text:0x5060, 0x15fb8 bytes
    //
    _u4(sdk::unknown_ptr) pro_core_close_socket;
    
    // [WskProIRPAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x181f0, 0x15e38 bytes
    // afd.sys .text:0x129c0, 0x15fb8 bytes
    // afd.sys .text:0x40e80, 0x187f8 bytes
    // afd.sys .text:0x129c0, 0x15fb8 bytes
    //
    _u5(sdk::unknown_ptr) pro_irp_accept;
    
    // [WskProIRPBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2690, 0x15e38 bytes
    // afd.sys .text:0x1c00, 0x15fb8 bytes
    // afd.sys .text:0x16ed0, 0x187f8 bytes
    // afd.sys .text:0x1c00, 0x15fb8 bytes
    //
    _u6(sdk::unknown_ptr) pro_irp_bind;
    
    // [WskProIRPCloseSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1d80, 0x15e38 bytes
    // afd.sys .text:0x5000, 0x15fb8 bytes
    // afd.sys .text:0x13c00, 0x187f8 bytes
    // afd.sys .text:0x5000, 0x15fb8 bytes
    //
    _u7(sdk::unknown_ptr) pro_irp_close_socket;
    
    // [WskProIRPConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x24c0, 0x15e38 bytes
    // afd.sys .text:0x5a80, 0x15fb8 bytes
    // afd.sys .text:0x16ce0, 0x187f8 bytes
    // afd.sys .text:0x5a80, 0x15fb8 bytes
    //
    _u8(sdk::unknown_ptr) pro_irp_connect;
    
    // [WskProIRPControlSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ec0, 0x15e38 bytes
    // afd.sys .text:0x46c0, 0x15fb8 bytes
    // afd.sys .text:0x13330, 0x187f8 bytes
    // afd.sys .text:0x46c0, 0x15fb8 bytes
    //
    _u9(sdk::unknown_ptr) pro_irp_control_socket;
    
    // [WskProIRPDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1b60, 0x15e38 bytes
    // afd.sys .text:0x55a0, 0x15fb8 bytes
    // afd.sys .text:0x16190, 0x187f8 bytes
    // afd.sys .text:0x55a0, 0x15fb8 bytes
    //
    _v0(sdk::unknown_ptr) pro_irp_disconnect;
    
    // [WskProIRPGetAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2360, 0x15e38 bytes
    // afd.sys .text:0x19d0, 0x15fb8 bytes
    // afd.sys .text:0x16a00, 0x187f8 bytes
    // afd.sys .text:0x19d0, 0x15fb8 bytes
    //
    _v1(sdk::unknown_ptr) pro_irp_get_address;
    
    // [WskProIRPGetAddressInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30390, 0x15e38 bytes
    // afd.sys PAGE:0x34150, 0x15fb8 bytes
    // afd.sys PAGE:0x623a0, 0x187f8 bytes
    // afd.sys PAGE:0x34150, 0x15fb8 bytes
    //
    _v2(sdk::unknown_ptr) pro_irp_get_address_info;
    
    // [WskProIRPGetNameInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x445f0, 0x15e38 bytes
    // afd.sys PAGE:0x47100, 0x15fb8 bytes
    // afd.sys PAGE:0x750c0, 0x187f8 bytes
    // afd.sys PAGE:0x47100, 0x15fb8 bytes
    //
    _v3(sdk::unknown_ptr) pro_irp_get_name_info;
    
    // [WskProIRPReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xac00, 0x15e38 bytes
    // afd.sys .text:0x4c50, 0x15fb8 bytes
    // afd.sys .text:0x137d0, 0x187f8 bytes
    // afd.sys .text:0x4c50, 0x15fb8 bytes
    //
    _v4(sdk::unknown_ptr) pro_irp_receive;
    
    // [WskProIRPReceiveFrom]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18360, 0x15e38 bytes
    // afd.sys .text:0x12cf0, 0x15fb8 bytes
    // afd.sys .text:0x412b0, 0x187f8 bytes
    // afd.sys .text:0x12cf0, 0x15fb8 bytes
    //
    _v5(sdk::unknown_ptr) pro_irp_receive_from;
    
    // [WskProIRPResume]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18490, 0x15e38 bytes
    // afd.sys .text:0x12e50, 0x15fb8 bytes
    // afd.sys .text:0x41410, 0x187f8 bytes
    // afd.sys .text:0x12e50, 0x15fb8 bytes
    //
    _v6(sdk::unknown_ptr) pro_irp_resume;
    
    // [WskProIRPSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4150, 0x15e38 bytes
    // afd.sys .text:0x44e0, 0x15fb8 bytes
    // afd.sys .text:0x12f50, 0x187f8 bytes
    // afd.sys .text:0x44e0, 0x15fb8 bytes
    //
    _v7(sdk::unknown_ptr) pro_irp_send;
    
    // [WskProIRPSendMessages]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x185c0, 0x15e38 bytes
    // afd.sys .text:0x64f0, 0x15fb8 bytes
    // afd.sys .text:0x41550, 0x187f8 bytes
    // afd.sys .text:0x64f0, 0x15fb8 bytes
    //
    _v8(sdk::unknown_ptr) pro_irp_send_messages;
    
    // [WskProIRPSendTo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18790, 0x15e38 bytes
    // afd.sys .text:0x12f90, 0x15fb8 bytes
    // afd.sys .text:0x41730, 0x187f8 bytes
    // afd.sys .text:0x12f90, 0x15fb8 bytes
    //
    _v9(sdk::unknown_ptr) pro_irp_send_to;
    
    // [WskProIRPSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1830, 0x15e38 bytes
    // afd.sys .text:0x1590, 0x15fb8 bytes
    // afd.sys .text:0x166e0, 0x187f8 bytes
    // afd.sys .text:0x1590, 0x15fb8 bytes
    //
    _w0(sdk::unknown_ptr) pro_irp_socket;
    
    // [WskProIRPSocketConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18980, 0x15e38 bytes
    // afd.sys .text:0x13190, 0x15fb8 bytes
    // afd.sys .text:0x41930, 0x187f8 bytes
    // afd.sys .text:0x13190, 0x15fb8 bytes
    //
    _w1(sdk::unknown_ptr) pro_irp_socket_connect;
    
    // [WskProPplSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278c8, 0x15e38 bytes
    // afd.sys .data:0x27978, 0x15fb8 bytes
    // afd.sys .data:0x579f0, 0x187f8 bytes
    // afd.sys .data:0x27978, 0x15fb8 bytes
    //
    _w2(sdk::unknown_ptr) pro_ppl_socket;
    
    // [WskProQueryCompartmentId]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18e40, 0x15e38 bytes
    // afd.sys .text:0x136c4, 0x15fb8 bytes
    // afd.sys .text:0x41e00, 0x187f8 bytes
    // afd.sys .text:0x136c4, 0x15fb8 bytes
    //
    _w3(sdk::unknown_ptr) pro_query_compartment_id;
    
    // [WskProTLActivateComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5020, 0x15e38 bytes
    // afd.sys .text:0x63b0, 0x15fb8 bytes
    // afd.sys .text:0x19e80, 0x187f8 bytes
    // afd.sys .text:0x63b0, 0x15fb8 bytes
    //
    _w4(sdk::unknown_ptr) pro_tl_activate_complete;
    
    // [WskProTLBindComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4690, 0x15e38 bytes
    // afd.sys .text:0x58f0, 0x15fb8 bytes
    // afd.sys .text:0x172a0, 0x187f8 bytes
    // afd.sys .text:0x58f0, 0x15fb8 bytes
    //
    _w5(sdk::unknown_ptr) pro_tl_bind_complete;
    
    // [WskProTLClientConnectDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d070, 0x15e38 bytes
    // afd.sys .rdata:0x1d080, 0x15fb8 bytes
    // afd.sys .rdata:0x4d050, 0x187f8 bytes
    // afd.sys .rdata:0x1d080, 0x15fb8 bytes
    //
    _w6(sdk::unknown_ptr) pro_tl_client_connect_dispatch;
    
    // [WskProTLClientListenDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d140, 0x15e38 bytes
    // afd.sys .rdata:0x1d1a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4d148, 0x187f8 bytes
    // afd.sys .rdata:0x1d1a8, 0x15fb8 bytes
    //
    _w7(sdk::unknown_ptr) pro_tl_client_listen_dispatch;
    
    // [WskProTLClientMessageDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dd90, 0x15e38 bytes
    // afd.sys .rdata:0x1d198, 0x15fb8 bytes
    // afd.sys .rdata:0x4de80, 0x187f8 bytes
    // afd.sys .rdata:0x1d198, 0x15fb8 bytes
    //
    _w8(sdk::unknown_ptr) pro_tl_client_message_dispatch;
    
    // [WskProTLCloseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18f74, 0x15e38 bytes
    // afd.sys .text:0x137f4, 0x15fb8 bytes
    // afd.sys .text:0x41f30, 0x187f8 bytes
    // afd.sys .text:0x137f4, 0x15fb8 bytes
    //
    _w9(sdk::unknown_ptr) pro_tl_close_endpoint;
    
    // [WskProTLCloseEndpointComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2b90, 0x15e38 bytes
    // afd.sys .text:0x3940, 0x15fb8 bytes
    // afd.sys .text:0x140c0, 0x187f8 bytes
    // afd.sys .text:0x3940, 0x15fb8 bytes
    //
    _x0(sdk::unknown_ptr) pro_tl_close_endpoint_complete;
    
    // [WskProTLConnectCancelComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc250, 0x15e38 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    //
    _x1(sdk::unknown_ptr) pro_tl_connect_cancel_complete;
    
    // [WskProTLConnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x47a0, 0x15e38 bytes
    // afd.sys .text:0x5d20, 0x15fb8 bytes
    // afd.sys .text:0x17010, 0x187f8 bytes
    // afd.sys .text:0x5d20, 0x15fb8 bytes
    //
    _x2(sdk::unknown_ptr) pro_tl_connect_complete;
    
    // [WskProTLControlRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x208c, 0x15e38 bytes
    // afd.sys .text:0x4960, 0x15fb8 bytes
    // afd.sys .text:0x13500, 0x187f8 bytes
    // afd.sys .text:0x4960, 0x15fb8 bytes
    //
    _x3(sdk::unknown_ptr) pro_tl_control_request;
    
    // [WskProTLControlRequestCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2270, 0x15e38 bytes
    // afd.sys .text:0x4f00, 0x15fb8 bytes
    // afd.sys .text:0x13a80, 0x187f8 bytes
    // afd.sys .text:0x4f00, 0x15fb8 bytes
    //
    _x4(sdk::unknown_ptr) pro_tl_control_request_completion;
    
    // [WskProTLCreateConnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x18ff0, 0x15e38 bytes
    // afd.sys .text:0x13870, 0x15fb8 bytes
    // afd.sys .text:0x420b0, 0x187f8 bytes
    // afd.sys .text:0x13870, 0x15fb8 bytes
    //
    _x5(sdk::unknown_ptr) pro_tl_create_connect_complete;
    
    // [WskProTLCreateEndpointComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4a40, 0x15e38 bytes
    // afd.sys .text:0x5ea0, 0x15fb8 bytes
    // afd.sys .text:0x173c0, 0x187f8 bytes
    // afd.sys .text:0x5ea0, 0x15fb8 bytes
    //
    _x6(sdk::unknown_ptr) pro_tl_create_endpoint_complete;
    
    // [WskProTLGetAddrCompleteIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x24a0, 0x15e38 bytes
    // afd.sys .text:0x6130, 0x15fb8 bytes
    // afd.sys .text:0x175f0, 0x187f8 bytes
    // afd.sys .text:0x6130, 0x15fb8 bytes
    //
    _x7(sdk::unknown_ptr) pro_tl_get_addr_complete_irp;
    
    // [WskProTLQueryAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2384, 0x15e38 bytes
    // afd.sys .text:0x1a00, 0x15fb8 bytes
    // afd.sys .text:0x16a30, 0x187f8 bytes
    // afd.sys .text:0x1a00, 0x15fb8 bytes
    //
    _x8(sdk::unknown_ptr) pro_tl_query_address;
    
    // [WskProTLReceiveComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xad00, 0x15e38 bytes
    // afd.sys .text:0x4d80, 0x15fb8 bytes
    // afd.sys .text:0x13900, 0x187f8 bytes
    // afd.sys .text:0x4d80, 0x15fb8 bytes
    //
    _x9(sdk::unknown_ptr) pro_tl_receive_complete;
    
    // [WskProTLResumeComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x191d0, 0x15e38 bytes
    // afd.sys .text:0x13b60, 0x15fb8 bytes
    // afd.sys .text:0x42730, 0x187f8 bytes
    // afd.sys .text:0x13b60, 0x15fb8 bytes
    //
    _y0(sdk::unknown_ptr) pro_tl_resume_complete;
    
    // [WskProTLSendOrDisconnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4240, 0x15e38 bytes
    // afd.sys .text:0x4600, 0x15fb8 bytes
    // afd.sys .text:0x131b0, 0x187f8 bytes
    // afd.sys .text:0x4600, 0x15fb8 bytes
    //
    _y1(sdk::unknown_ptr) pro_tl_send_or_disconnect_complete;
    
    // [WskProTLSendToComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4f90, 0x15e38 bytes
    // afd.sys .text:0x69f0, 0x15fb8 bytes
    // afd.sys .text:0x42760, 0x187f8 bytes
    // afd.sys .text:0x69f0, 0x15fb8 bytes
    //
    _y2(sdk::unknown_ptr) pro_tl_send_to_complete;
    
    // [WskProTLSpecialBaseEndpointCloseComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc250, 0x15e38 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    //
    _y3(sdk::unknown_ptr) pro_tl_special_base_endpoint_close_complete;
    
    // [WskProTLEVENTAbort]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19150, 0x15e38 bytes
    // afd.sys .text:0x139e0, 0x15fb8 bytes
    // afd.sys .text:0x42220, 0x187f8 bytes
    // afd.sys .text:0x139e0, 0x15fb8 bytes
    //
    _y4(sdk::unknown_ptr) pro_tlevent_abort;
    
    // [WskProTLEVENTConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x52d0, 0x15e38 bytes
    // afd.sys .text:0x2d70, 0x15fb8 bytes
    // afd.sys .text:0x9470, 0x187f8 bytes
    // afd.sys .text:0x2d70, 0x15fb8 bytes
    //
    _y5(sdk::unknown_ptr) pro_tlevent_connect;
    
    // [WskProTLEVENTDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xadc0, 0x15e38 bytes
    // afd.sys .text:0x5240, 0x15fb8 bytes
    // afd.sys .text:0x147d0, 0x187f8 bytes
    // afd.sys .text:0x5240, 0x15fb8 bytes
    //
    _y6(sdk::unknown_ptr) pro_tlevent_disconnect;
    
    // [WskProTLEVENTError]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc8d0, 0x15e38 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    // afd.sys .text:0x17630, 0x187f8 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    //
    _y7(sdk::unknown_ptr) pro_tlevent_error;
    
    // [WskProTLEVENTInspect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19170, 0x15e38 bytes
    // afd.sys .text:0x13a10, 0x15fb8 bytes
    // afd.sys .text:0x42250, 0x187f8 bytes
    // afd.sys .text:0x13a10, 0x15fb8 bytes
    //
    _y8(sdk::unknown_ptr) pro_tlevent_inspect;
    
    // [WskProTLEVENTReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3fe0, 0x15e38 bytes
    // afd.sys .text:0x4380, 0x15fb8 bytes
    // afd.sys .text:0x13070, 0x187f8 bytes
    // afd.sys .text:0x4380, 0x15fb8 bytes
    //
    _y9(sdk::unknown_ptr) pro_tlevent_receive;
    
    // [WskProTLEVENTReceiveMessages]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xbf50, 0x15e38 bytes
    // afd.sys .text:0x6700, 0x15fb8 bytes
    // afd.sys .text:0x422b0, 0x187f8 bytes
    // afd.sys .text:0x6700, 0x15fb8 bytes
    //
    _z0(sdk::unknown_ptr) pro_tlevent_receive_messages;
    
    // [WskProTLEVENTSendBacklog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xaf60, 0x15e38 bytes
    // afd.sys .text:0x13a70, 0x15fb8 bytes
    // afd.sys .text:0x42640, 0x187f8 bytes
    // afd.sys .text:0x13a70, 0x15fb8 bytes
    //
    _z1(sdk::unknown_ptr) pro_tlevent_send_backlog;
    
    // [WskTdiAllowDelivery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x700e4, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e030, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d030, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e030, 0x15fb8 bytes
    //
    _z2(sdk::unknown_ptr) tdi_allow_delivery;
    
    // [WskTdiCANCELDrainReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x702f0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e270, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d250, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e270, 0x15fb8 bytes
    //
    _z3(sdk::unknown_ptr) tdi_cancel_drain_receive;
    
    // [WskTdiCheckAndCompleteDrainReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x7126c, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f2f0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e190, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f2f0, 0x15fb8 bytes
    //
    _z4(sdk::unknown_ptr) tdi_check_and_complete_drain_receive;
    
    // [WskTdiCloseAO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x422fc, 0x15e38 bytes
    // afd.sys PAGE:0x44a1c, 0x15fb8 bytes
    // afd.sys PAGE:0x72a1c, 0x187f8 bytes
    // afd.sys PAGE:0x44a1c, 0x15fb8 bytes
    //
    _z5(sdk::unknown_ptr) tdi_close_ao;
    
    // [WskTdiCloseCO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x4232c, 0x15e38 bytes
    // afd.sys PAGE:0x44a60, 0x15fb8 bytes
    // afd.sys PAGE:0x72a60, 0x187f8 bytes
    // afd.sys PAGE:0x44a60, 0x15fb8 bytes
    //
    _z6(sdk::unknown_ptr) tdi_close_co;
    
    // [WskTdiCloseConnectionAndPopulate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x712fc, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f394, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e234, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f394, 0x15fb8 bytes
    //
    _z7(sdk::unknown_ptr) tdi_close_connection_and_populate;
    
    // [WskTdiCloseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71368, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f408, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e2a8, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f408, 0x15fb8 bytes
    //
    _z8(sdk::unknown_ptr) tdi_close_endpoint;
    
    // [WskTdiCOAListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70318, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e2a4, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d284, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e2a4, 0x15fb8 bytes
    //
    _z9(sdk::unknown_ptr) tdi_coa_listen;
    
    // [WskTdiCOMPAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70440, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e3c0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d3a0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e3c0, 0x15fb8 bytes
    //
    _a0(sdk::unknown_ptr) tdi_comp_accept;
    
    // [WskTdiCOMPAcceptAddressQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70560, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e4e0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d4c0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e4e0, 0x15fb8 bytes
    //
    _a1(sdk::unknown_ptr) tdi_comp_accept_address_query;
    
    // [WskTdiCOMPAddressQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70870, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e830, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d760, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e830, 0x15fb8 bytes
    //
    _a2(sdk::unknown_ptr) tdi_comp_address_query;
    
    // [WskTdiCOMPConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70da0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7edb0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7dc50, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7edb0, 0x15fb8 bytes
    //
    _a3(sdk::unknown_ptr) tdi_comp_connect;
    
    // [WskTdiCOMPDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70df0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7ee00, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7dca0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7ee00, 0x15fb8 bytes
    //
    _a4(sdk::unknown_ptr) tdi_comp_disconnect;
    
    // [WskTdiCOMPDisconnectData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70e30, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7ee50, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7dcf0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7ee50, 0x15fb8 bytes
    //
    _a5(sdk::unknown_ptr) tdi_comp_disconnect_data;
    
    // [WskTdiCOMPDisconnectData2]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70f60, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7ef90, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7de30, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7ef90, 0x15fb8 bytes
    //
    _a6(sdk::unknown_ptr) tdi_comp_disconnect_data2;
    
    // [WskTdiCOMPIoctl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70fb0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7eff0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7de90, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7eff0, 0x15fb8 bytes
    //
    _a7(sdk::unknown_ptr) tdi_comp_ioctl;
    
    // [WskTdiCOMPReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70ff0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f040, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7dee0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f040, 0x15fb8 bytes
    //
    _a8(sdk::unknown_ptr) tdi_comp_receive;
    
    // [WskTdiCOMPSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x711a0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f200, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e0a0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f200, 0x15fb8 bytes
    //
    _a9(sdk::unknown_ptr) tdi_comp_send;
    
    // [WskTdiCOMPSendTo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71200, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f270, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e110, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f270, 0x15fb8 bytes
    //
    _b0(sdk::unknown_ptr) tdi_comp_send_to;
    
    // [WskTdiCOMPCOAListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70950, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e930, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d860, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e930, 0x15fb8 bytes
    //
    _b1(sdk::unknown_ptr) tdi_compcoa_listen;
    
    // [WskTdiCOMPCOAReject]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70d70, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7ed70, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7dc10, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7ed70, 0x15fb8 bytes
    //
    _b2(sdk::unknown_ptr) tdi_compcoa_reject;
    
    // [WskTdiConnectCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42378, 0x15e38 bytes
    // afd.sys PAGE:0x44ac0, 0x15fb8 bytes
    // afd.sys PAGE:0x72ac0, 0x187f8 bytes
    // afd.sys PAGE:0x44ac0, 0x15fb8 bytes
    //
    _b3(sdk::unknown_ptr) tdi_connect_core;
    
    // [WskTdiConnectFinish]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x714d8, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f5b4, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e414, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f5b4, 0x15fb8 bytes
    //
    _b4(sdk::unknown_ptr) tdi_connect_finish;
    
    // [WskTdiCreateAO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x4263c, 0x15e38 bytes
    // afd.sys PAGE:0x44d88, 0x15fb8 bytes
    // afd.sys PAGE:0x72d80, 0x187f8 bytes
    // afd.sys PAGE:0x44d88, 0x15fb8 bytes
    //
    _b5(sdk::unknown_ptr) tdi_create_ao;
    
    // [WskTdiCreateCO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42a18, 0x15e38 bytes
    // afd.sys PAGE:0x451e4, 0x15fb8 bytes
    // afd.sys PAGE:0x731f4, 0x187f8 bytes
    // afd.sys PAGE:0x451e4, 0x15fb8 bytes
    //
    _b6(sdk::unknown_ptr) tdi_create_co;
    
    // [WskTdiDeinit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42bc0, 0x15e38 bytes
    // afd.sys PAGE:0x453ac, 0x15fb8 bytes
    // afd.sys PAGE:0x733bc, 0x187f8 bytes
    // afd.sys PAGE:0x453ac, 0x15fb8 bytes
    //
    _b7(sdk::unknown_ptr) tdi_deinit;
    
    // [WskTdiEHConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71650, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7f740, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e580, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7f740, 0x15fb8 bytes
    //
    _b8(sdk::unknown_ptr) tdi_eh_connect;
    
    // [WskTdiEHDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71960, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7fa70, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e810, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7fa70, 0x15fb8 bytes
    //
    _b9(sdk::unknown_ptr) tdi_eh_disconnect;
    
    // [WskTdiEHError]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70000, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e010, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d010, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e010, 0x15fb8 bytes
    //
    _c0(sdk::unknown_ptr) tdi_eh_error;
    
    // [WskTdiEHErrorEx]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70000, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e010, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d010, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e010, 0x15fb8 bytes
    //
    _c1(sdk::unknown_ptr) tdi_eh_error_ex;
    
    // [WskTdiEHReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71a50, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7fb80, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7e920, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7fb80, 0x15fb8 bytes
    //
    _c2(sdk::unknown_ptr) tdi_eh_receive;
    
    // [WskTdiEHReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x71e80, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80030, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7edc0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80030, 0x15fb8 bytes
    //
    _c3(sdk::unknown_ptr) tdi_eh_receive_datagram;
    
    // [WskTdiEHReceiveExpedited]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72360, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80550, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f2c0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80550, 0x15fb8 bytes
    //
    _c4(sdk::unknown_ptr) tdi_eh_receive_expedited;
    
    // [WskTdiFlushReadyEndpoints]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42c0c, 0x15e38 bytes
    // afd.sys PAGE:0x4541c, 0x15fb8 bytes
    // afd.sys PAGE:0x7342c, 0x187f8 bytes
    // afd.sys PAGE:0x4541c, 0x15fb8 bytes
    //
    _c5(sdk::unknown_ptr) tdi_flush_ready_endpoints;
    
    // [WskTdiFreeDatagramIndicationResources]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x7236c, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80598, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f308, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80598, 0x15fb8 bytes
    //
    _c6(sdk::unknown_ptr) tdi_free_datagram_indication_resources;
    
    // [WskTdiFreeEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x723e8, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80634, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f3a4, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80634, 0x15fb8 bytes
    //
    _c7(sdk::unknown_ptr) tdi_free_endpoint;
    
    // [WskTdiHandleDrainReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72498, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80700, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f470, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80700, 0x15fb8 bytes
    //
    _c8(sdk::unknown_ptr) tdi_handle_drain_receive;
    
    // [WskTdiInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35500, 0x15e38 bytes
    // afd.sys PAGE:0x36f68, 0x15fb8 bytes
    // afd.sys PAGE:0x643a8, 0x187f8 bytes
    // afd.sys PAGE:0x36f68, 0x15fb8 bytes
    //
    _c9(sdk::unknown_ptr) tdi_init;
    
    // [WskTdiInitiatePopulate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72584, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80814, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f584, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80814, 0x15fb8 bytes
    //
    _d0(sdk::unknown_ptr) tdi_initiate_populate;
    
    // [WskTdiLRPost0Receive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72620, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x808d0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f640, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x808d0, 0x15fb8 bytes
    //
    _d1(sdk::unknown_ptr) tdi_lr_post0_receive;
    
    // [WskTdiPopulateReadyEndpoints]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42c70, 0x15e38 bytes
    // afd.sys PAGE:0x4548c, 0x15fb8 bytes
    // afd.sys PAGE:0x7349c, 0x187f8 bytes
    // afd.sys PAGE:0x4548c, 0x15fb8 bytes
    //
    _d2(sdk::unknown_ptr) tdi_populate_ready_endpoints;
    
    // [WskTdiReleaseTDIEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72710, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x809d4, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f744, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x809d4, 0x15fb8 bytes
    //
    _d3(sdk::unknown_ptr) tdi_release_tdi_endpoint;
    
    // [WskTdiResolveFamilyAndCreateAO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72758, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80a28, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7f798, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80a28, 0x15fb8 bytes
    //
    _d4(sdk::unknown_ptr) tdi_resolve_family_and_create_ao;
    
    // [WskTdiRestartReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72ac0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80e00, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fb70, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80e00, 0x15fb8 bytes
    //
    _d5(sdk::unknown_ptr) tdi_restart_receive_datagram;
    
    // [WskTdiRetainTDIEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72b70, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80ebc, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fc2c, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80ebc, 0x15fb8 bytes
    //
    _d6(sdk::unknown_ptr) tdi_retain_tdi_endpoint;
    
    // [WskTdiSetEventHandlers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42e7c, 0x15e38 bytes
    // afd.sys PAGE:0x456e0, 0x15fb8 bytes
    // afd.sys PAGE:0x736e0, 0x187f8 bytes
    // afd.sys PAGE:0x456e0, 0x15fb8 bytes
    //
    _d7(sdk::unknown_ptr) tdi_set_event_handlers;
    
    // [WskTdiTdxCallbackRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43050, 0x15e38 bytes
    // afd.sys PAGE:0x458c4, 0x15fb8 bytes
    // afd.sys PAGE:0x738b4, 0x187f8 bytes
    // afd.sys PAGE:0x458c4, 0x15fb8 bytes
    //
    _d8(sdk::unknown_ptr) tdi_tdx_callback_routine;
    
    // [WskTdiTLHybridCreateEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x191e8, 0x15e38 bytes
    // afd.sys .text:0x13b88, 0x15fb8 bytes
    // afd.sys .text:0x42800, 0x187f8 bytes
    // afd.sys .text:0x13b88, 0x15fb8 bytes
    //
    _d9(sdk::unknown_ptr) tdi_tl_hybrid_create_endpoint;
    
    // [WskTdiTLHybridCreateEndpointComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19400, 0x15e38 bytes
    // afd.sys .text:0x13e00, 0x15fb8 bytes
    // afd.sys .text:0x42a70, 0x187f8 bytes
    // afd.sys .text:0x13e00, 0x15fb8 bytes
    //
    _e0(sdk::unknown_ptr) tdi_tl_hybrid_create_endpoint_complete;
    
    // [WskTdiTLIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72b8c, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x80ee0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fc50, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x80ee0, 0x15fb8 bytes
    //
    _e1(sdk::unknown_ptr) tdi_tl_io_control;
    
    // [WskTdiTLProviderConnectDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dde0, 0x15e38 bytes
    // afd.sys .rdata:0x1dee8, 0x15fb8 bytes
    // afd.sys .rdata:0x4df50, 0x187f8 bytes
    // afd.sys .rdata:0x1dee8, 0x15fb8 bytes
    //
    _e2(sdk::unknown_ptr) tdi_tl_provider_connect_dispatch;
    
    // [WskTdiTLProviderDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dd40, 0x15e38 bytes
    // afd.sys .rdata:0x1d9a0, 0x15fb8 bytes
    // afd.sys .rdata:0x4d960, 0x187f8 bytes
    // afd.sys .rdata:0x1d9a0, 0x15fb8 bytes
    //
    _e3(sdk::unknown_ptr) tdi_tl_provider_dispatch;
    
    // [WskTdiTLProviderEndpointDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de50, 0x15e38 bytes
    // afd.sys .rdata:0x1df58, 0x15fb8 bytes
    // afd.sys .rdata:0x4dfc0, 0x187f8 bytes
    // afd.sys .rdata:0x1df58, 0x15fb8 bytes
    //
    _e4(sdk::unknown_ptr) tdi_tl_provider_endpoint_dispatch;
    
    // [WskTdiTLProviderListenDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de10, 0x15e38 bytes
    // afd.sys .rdata:0x1df18, 0x15fb8 bytes
    // afd.sys .rdata:0x4df80, 0x187f8 bytes
    // afd.sys .rdata:0x1df18, 0x15fb8 bytes
    //
    _e5(sdk::unknown_ptr) tdi_tl_provider_listen_dispatch;
    
    // [WskTdiTLProviderMessageDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de30, 0x15e38 bytes
    // afd.sys .rdata:0x1df38, 0x15fb8 bytes
    // afd.sys .rdata:0x4dfa0, 0x187f8 bytes
    // afd.sys .rdata:0x1df38, 0x15fb8 bytes
    //
    _e6(sdk::unknown_ptr) tdi_tl_provider_message_dispatch;
    
    // [WskTdiTLRequestCancel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72cc0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81020, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fd90, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81020, 0x15fb8 bytes
    //
    _e7(sdk::unknown_ptr) tdi_tl_request_cancel;
    
    // [WskTdiTLRequestCloseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72d10, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81070, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fde0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81070, 0x15fb8 bytes
    //
    _e8(sdk::unknown_ptr) tdi_tl_request_close_endpoint;
    
    // [WskTdiTLRequestConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19450, 0x15e38 bytes
    // afd.sys .text:0x13e60, 0x15fb8 bytes
    // afd.sys .text:0x42ae0, 0x187f8 bytes
    // afd.sys .text:0x13e60, 0x15fb8 bytes
    //
    _e9(sdk::unknown_ptr) tdi_tl_request_connect;
    
    // [WskTdiTLRequestDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72d50, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x810c0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7fe30, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x810c0, 0x15fb8 bytes
    //
    _f0(sdk::unknown_ptr) tdi_tl_request_disconnect;
    
    // [WskTdiTLRequestEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19940, 0x15e38 bytes
    // afd.sys .text:0x143c0, 0x15fb8 bytes
    // afd.sys .text:0x42f20, 0x187f8 bytes
    // afd.sys .text:0x143c0, 0x15fb8 bytes
    //
    _f1(sdk::unknown_ptr) tdi_tl_request_endpoint;
    
    // [WskTdiTLRequestIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70010, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d020, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    //
    _f2(sdk::unknown_ptr) tdi_tl_request_io_control;
    
    // [WskTdiTLRequestIoControlEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x72fb0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81310, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x80080, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81310, 0x15fb8 bytes
    //
    _f3(sdk::unknown_ptr) tdi_tl_request_io_control_endpoint;
    
    // [WskTdiTLRequestListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x737a0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81b60, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x808c0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81b60, 0x15fb8 bytes
    //
    _f4(sdk::unknown_ptr) tdi_tl_request_listen;
    
    // [WskTdiTLRequestMessage]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73830, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81c00, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x80970, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81c00, 0x15fb8 bytes
    //
    _f5(sdk::unknown_ptr) tdi_tl_request_message;
    
    // [WskTdiTLRequestQueryDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70010, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d020, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    //
    _f6(sdk::unknown_ptr) tdi_tl_request_query_dispatch;
    
    // [WskTdiTLRequestQueryDispatchEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x70010, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x7d020, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x7e020, 0x15fb8 bytes
    //
    _f7(sdk::unknown_ptr) tdi_tl_request_query_dispatch_endpoint;
    
    // [WskTdiTLRequestReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73890, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81c70, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x809e0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81c70, 0x15fb8 bytes
    //
    _f8(sdk::unknown_ptr) tdi_tl_request_receive;
    
    // [WskTdiTLRequestReleaseIndicationList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73b20, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81f10, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x80c80, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81f10, 0x15fb8 bytes
    //
    _f9(sdk::unknown_ptr) tdi_tl_request_release_indication_list;
    
    // [WskTdiTLRequestResume]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73bd0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x81ff0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x80d60, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x81ff0, 0x15fb8 bytes
    //
    _g0(sdk::unknown_ptr) tdi_tl_request_resume;
    
    // [WskTdiTLRequestSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73d70, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x82180, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x80ef0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x82180, 0x15fb8 bytes
    //
    _g1(sdk::unknown_ptr) tdi_tl_request_send;
    
    // [WskTdiTLRequestSendMessages]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x73f10, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x82330, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x810a0, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x82330, 0x15fb8 bytes
    //
    _g2(sdk::unknown_ptr) tdi_tl_request_send_messages;
    
    // [WskTdiTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27100, 0x15e38 bytes
    // afd.sys .data:0x270d0, 0x15fb8 bytes
    // afd.sys .data:0x570d0, 0x187f8 bytes
    // afd.sys .data:0x270d0, 0x15fb8 bytes
    //
    _g3(sdk::unknown_ptr) tdi_transport;
    
    // [WskTdiWQEndpointBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x273e0, 0x15e38 bytes
    // afd.sys .data:0x27460, 0x15fb8 bytes
    // afd.sys .data:0x574c0, 0x187f8 bytes
    // afd.sys .data:0x27460, 0x15fb8 bytes
    //
    _g4(sdk::unknown_ptr) tdi_wq_endpoint_bind;
    
    // [WskTdiWQEndpointClose]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x273a0, 0x15e38 bytes
    // afd.sys .data:0x27420, 0x15fb8 bytes
    // afd.sys .data:0x57480, 0x187f8 bytes
    // afd.sys .data:0x27420, 0x15fb8 bytes
    //
    _g5(sdk::unknown_ptr) tdi_wq_endpoint_close;
    
    // [WskTdiWQEndpointCreate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27360, 0x15e38 bytes
    // afd.sys .data:0x273e0, 0x15fb8 bytes
    // afd.sys .data:0x57440, 0x187f8 bytes
    // afd.sys .data:0x273e0, 0x15fb8 bytes
    //
    _g6(sdk::unknown_ptr) tdi_wq_endpoint_create;
    
    // [WskTdiWQRoutineEndpointBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWTDI:0x742b0, 0x15e38 bytes
    // afd.sys PAGEWTDI:0x826e0, 0x15fb8 bytes
    // afd.sys PAGEWTDI:0x81450, 0x187f8 bytes
    // afd.sys PAGEWTDI:0x826e0, 0x15fb8 bytes
    //
    _g7(sdk::unknown_ptr) tdi_wq_routine_endpoint_bind;
    
    // [WskTdiWQRoutineEndpointClose]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x430e0, 0x15e38 bytes
    // afd.sys PAGE:0x45940, 0x15fb8 bytes
    // afd.sys PAGE:0x73930, 0x187f8 bytes
    // afd.sys PAGE:0x45940, 0x15fb8 bytes
    //
    _g8(sdk::unknown_ptr) tdi_wq_routine_endpoint_close;
    
    // [WskTdiWQRoutineEndpointCreate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43290, 0x15e38 bytes
    // afd.sys PAGE:0x45b10, 0x15fb8 bytes
    // afd.sys PAGE:0x73b00, 0x187f8 bytes
    // afd.sys PAGE:0x45b10, 0x15fb8 bytes
    //
    _g9(sdk::unknown_ptr) tdi_wq_routine_endpoint_create;
    
    // [WskCaptureProviderNPI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50970, 0x4652 bytes
    // netio.sys .text:0x20060, 0x4dd3 bytes
    // netio.sys .text:0x5ed20, 0x4e8c bytes
    // netio.sys .text:0x200f0, 0x4dd3 bytes
    //
    _h0(sdk::function<int32_t(struct wsk::registration_t*, uint32_t, struct wsk::provider_npi_t*)>*) capture_provider_npi;
    
    // [WskDeregister]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19550, 0x4652 bytes
    // netio.sys .text:0x1f4b0, 0x4dd3 bytes
    // netio.sys .text:0x5ee10, 0x4e8c bytes
    // netio.sys .text:0x1f540, 0x4dd3 bytes
    //
    _h1(sdk::function<void(struct wsk::registration_t*)>*) deregister;
    
    // [WskQueryProviderCharacteristics]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50a50, 0x4652 bytes
    // netio.sys .text:0x5f700, 0x4dd3 bytes
    // netio.sys .text:0x5ef00, 0x4e8c bytes
    // netio.sys .text:0x5f6c0, 0x4dd3 bytes
    //
    _h2(sdk::function<int32_t(struct wsk::registration_t*, struct wsk::provider_characteristics_t*)>*) query_provider_characteristics;
    
    // [WskRegister]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d3e0, 0x4652 bytes
    // netio.sys .text:0x1fba0, 0x4dd3 bytes
    // netio.sys .text:0x5ef90, 0x4e8c bytes
    // netio.sys .text:0x1fc30, 0x4dd3 bytes
    //
    _h3(sdk::function<int32_t(struct wsk::client_npi_t*, struct wsk::registration_t*)>*) register_;
    
    // [WskReleaseProviderNPI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19a40, 0x4652 bytes
    // netio.sys .text:0x1f720, 0x4dd3 bytes
    // netio.sys .text:0x5f0a0, 0x4e8c bytes
    // netio.sys .text:0x1f7b0, 0x4dd3 bytes
    //
    _h4(sdk::function<void(struct wsk::registration_t*)>*) release_provider_npi;
};
#include "magic/api.end.hpp"
