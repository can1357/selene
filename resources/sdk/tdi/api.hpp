#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"

#include "magic/api.start.hpp"
namespace tdi
{
    // [TdiIsIPTransportSupported]
    // Ldr = [tdi.sys]
    // => Windows 10 v2004
    // tdi.sys .text:0x39b0, 0x798 bytes
    //
    _m0(sdk::unknown_ptr) tdi_is_ip_transport_supported;
    
    // [TdiIsRequestExclusive]
    // Ldr = [tdi.sys]
    // => Windows 10 v2004
    // tdi.sys .text:0x39e0, 0x798 bytes
    //
    _m1(sdk::unknown_ptr) tdi_is_request_exclusive;
    
    // [TdiNotifyAddresses]
    // Ldr = [tdi.sys]
    // => Windows 10 v2004
    // tdi.sys .text:0x39f8, 0x798 bytes
    //
    _m2(sdk::unknown_ptr) tdi_notify_addresses;
    
    // [TdipIsSzInMultiSzSafe]
    // Ldr = [tdi.sys]
    // => Windows 10 v2004
    // tdi.sys .text:0x4f94, 0x798 bytes
    //
    _m3(sdk::unknown_ptr) tdip_is_sz_in_multi_sz_safe;
    
    // [CTEpEventHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4860, 0x774 bytes
    // tdi.sys .text:0x1fa0, 0x798 bytes
    //
    _m4(sdk::unknown_ptr) ct_ep_event_handler;
    
    // [CTEpTimeIncrement]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72d0, 0x774 bytes
    // tdi.sys .data:0x7350, 0x798 bytes
    //
    _m5(sdk::unknown_ptr) ct_ep_time_increment;
    
    // [CTEpTimerHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x48d0, 0x774 bytes
    // tdi.sys .text:0x2020, 0x798 bytes
    //
    _m6(sdk::unknown_ptr) ct_ep_timer_handler;
    
    // [CTEAllocateString]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4420, 0x774 bytes
    // tdi.sys .text:0x1a80, 0x798 bytes
    //
    _m7(sdk::unknown_ptr) cte_allocate_string;
    
    // [CTEBlock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4470, 0x774 bytes
    // tdi.sys .text:0x1ae0, 0x798 bytes
    //
    _m8(sdk::unknown_ptr) cte_block;
    
    // [CTEBlockListHead]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72c0, 0x774 bytes
    // tdi.sys .data:0x72c0, 0x798 bytes
    //
    _m9(sdk::unknown_ptr) cte_block_list_head;
    
    // [CTEBlockSpinLock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72b8, 0x774 bytes
    // tdi.sys .data:0x72b8, 0x798 bytes
    //
    _n0(sdk::unknown_ptr) cte_block_spin_lock;
    
    // [CTEBlockWithTracker]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x44b0, 0x774 bytes
    // tdi.sys .text:0x1b30, 0x798 bytes
    //
    _n1(sdk::unknown_ptr) cte_block_with_tracker;
    
    // [CTEInitEvent]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x44f0, 0x774 bytes
    // tdi.sys .text:0x1b80, 0x798 bytes
    //
    _n2(sdk::unknown_ptr) cte_init_event;
    
    // [CTEInitString]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4530, 0x774 bytes
    // tdi.sys .text:0x1bd0, 0x798 bytes
    //
    _n3(sdk::unknown_ptr) cte_init_string;
    
    // [CTEInitTimer]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x45c0, 0x774 bytes
    // tdi.sys .text:0x1c70, 0x798 bytes
    //
    _n4(sdk::unknown_ptr) cte_init_timer;
    
    // [CTEInitialize]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4600, 0x774 bytes
    // tdi.sys .text:0x1cc0, 0x798 bytes
    //
    _n5(sdk::unknown_ptr) cte_initialize;
    
    // [CTEInsertBlockTracker]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4610, 0x774 bytes
    // tdi.sys .text:0x1cd0, 0x798 bytes
    //
    _n6(sdk::unknown_ptr) cte_insert_block_tracker;
    
    // [CTELogEvent]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys PAGE:0xa000, 0x774 bytes
    // tdi.sys PAGE:0xa010, 0x798 bytes
    //
    _n7(sdk::unknown_ptr) cte_log_event;
    
    // [CTERemoveBlockTracker]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4680, 0x774 bytes
    // tdi.sys .text:0x1d50, 0x798 bytes
    //
    _n8(sdk::unknown_ptr) cte_remove_block_tracker;
    
    // [CTEScheduleCriticalEvent]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x46d0, 0x774 bytes
    // tdi.sys .text:0x1db0, 0x798 bytes
    //
    _n9(sdk::unknown_ptr) cte_schedule_critical_event;
    
    // [CTEScheduleDelayedEvent]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4740, 0x774 bytes
    // tdi.sys .text:0x1e40, 0x798 bytes
    //
    _o0(sdk::unknown_ptr) cte_schedule_delayed_event;
    
    // [CTEScheduleEvent]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4740, 0x774 bytes
    // tdi.sys .text:0x1e40, 0x798 bytes
    //
    _o1(sdk::unknown_ptr) cte_schedule_event;
    
    // [CTESignal]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x47b0, 0x774 bytes
    // tdi.sys .text:0x1ed0, 0x798 bytes
    //
    _o2(sdk::unknown_ptr) cte_signal;
    
    // [CTEStartTimer]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x47d0, 0x774 bytes
    // tdi.sys .text:0x1f00, 0x798 bytes
    //
    _o3(sdk::unknown_ptr) cte_start_timer;
    
    // [CTESystemUpTime]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4810, 0x774 bytes
    // tdi.sys .text:0x1f50, 0x798 bytes
    //
    _o4(sdk::unknown_ptr) cte_system_up_time;
    
    // [NextExec]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7020, 0x774 bytes
    // tdi.sys .data:0x7020, 0x798 bytes
    //
    _o5(sdk::unknown_ptr) next_exec;
    
    // [NextExecComplete]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7024, 0x774 bytes
    // tdi.sys .data:0x7024, 0x798 bytes
    //
    _o6(sdk::unknown_ptr) next_exec_complete;
    
    // [ProvidersReady]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72e4, 0x774 bytes
    // tdi.sys .data:0x7358, 0x798 bytes
    //
    _o7(sdk::unknown_ptr) providers_ready;
    
    // [ProvidersRegistered]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72e8, 0x774 bytes
    // tdi.sys .data:0x7364, 0x798 bytes
    //
    _o8(sdk::unknown_ptr) providers_registered;
    
    // [TdiBuildNetbiosAddress]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4930, 0x774 bytes
    // tdi.sys .text:0x21d0, 0x798 bytes
    //
    _o9(sdk::unknown_ptr) tdi_build_netbios_address;
    
    // [TdiBuildNetbiosAddressEa]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4960, 0x774 bytes
    // tdi.sys .text:0x2200, 0x798 bytes
    //
    _p0(sdk::unknown_ptr) tdi_build_netbios_address_ea;
    
    // [TdiCopyBufferToMdl]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1000, 0x774 bytes
    // tdi.sys .text:0x1010, 0x798 bytes
    //
    _p1(sdk::unknown_ptr) tdi_copy_buffer_to_mdl;
    
    // [TdiCopyBufferToMdlWithReservedMappingAtDpcLevel]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x49e0, 0x774 bytes
    // tdi.sys .text:0x22a0, 0x798 bytes
    //
    _p2(sdk::function<void(void*, struct nt::mdl_t*, uint32_t, uint32_t)>*) tdi_copy_buffer_to_mdl_with_reserved_mapping_at_dpc_level;
    
    // [TdiCopyMdlChainToMdlChain]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4b20, 0x774 bytes
    // tdi.sys .text:0x2420, 0x798 bytes
    //
    _p3(sdk::unknown_ptr) tdi_copy_mdl_chain_to_mdl_chain;
    
    // [TdiCopyMdlToBuffer]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2cb0, 0x774 bytes
    // tdi.sys .text:0x26e0, 0x798 bytes
    //
    _p4(sdk::unknown_ptr) tdi_copy_mdl_to_buffer;
    
    // [TdiDefaultChainedRcvDatagramHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _p5(sdk::unknown_ptr) tdi_default_chained_rcv_datagram_handler;
    
    // [TdiDefaultChainedRcvExpeditedHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _p6(sdk::unknown_ptr) tdi_default_chained_rcv_expedited_handler;
    
    // [TdiDefaultChainedReceiveHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _p7(sdk::unknown_ptr) tdi_default_chained_receive_handler;
    
    // [TdiDefaultConnectHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e00, 0x774 bytes
    // tdi.sys .text:0x2920, 0x798 bytes
    //
    _p8(sdk::unknown_ptr) tdi_default_connect_handler;
    
    // [TdiDefaultDisconnectHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e10, 0x774 bytes
    // tdi.sys .text:0x21c0, 0x798 bytes
    //
    _p9(sdk::unknown_ptr) tdi_default_disconnect_handler;
    
    // [TdiDefaultErrorHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e10, 0x774 bytes
    // tdi.sys .text:0x21c0, 0x798 bytes
    //
    _q0(sdk::unknown_ptr) tdi_default_error_handler;
    
    // [TdiDefaultRcvDatagramHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _q1(sdk::unknown_ptr) tdi_default_rcv_datagram_handler;
    
    // [TdiDefaultRcvExpeditedHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _q2(sdk::unknown_ptr) tdi_default_rcv_expedited_handler;
    
    // [TdiDefaultReceiveHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4df0, 0x774 bytes
    // tdi.sys .text:0x2910, 0x798 bytes
    //
    _q3(sdk::unknown_ptr) tdi_default_receive_handler;
    
    // [TdiDefaultSendPossibleHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e10, 0x774 bytes
    // tdi.sys .text:0x21c0, 0x798 bytes
    //
    _q4(sdk::unknown_ptr) tdi_default_send_possible_handler;
    
    // [TdiDeregisterAddressChangeHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e30, 0x774 bytes
    // tdi.sys .text:0x2c40, 0x798 bytes
    //
    _q5(sdk::unknown_ptr) tdi_deregister_address_change_handler;
    
    // [TdiDeregisterDeviceObject]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1530, 0x774 bytes
    // tdi.sys .text:0x2c60, 0x798 bytes
    //
    _q6(sdk::unknown_ptr) tdi_deregister_device_object;
    
    // [TdiDeregisterNetAddress]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1640, 0x774 bytes
    // tdi.sys .text:0x2c80, 0x798 bytes
    //
    _q7(sdk::unknown_ptr) tdi_deregister_net_address;
    
    // [TdiDeregisterNotificationHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e30, 0x774 bytes
    // tdi.sys .text:0x2c40, 0x798 bytes
    //
    _q8(sdk::unknown_ptr) tdi_deregister_notification_handler;
    
    // [TdiDeregisterPnPHandlers]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e30, 0x774 bytes
    // tdi.sys .text:0x2c40, 0x798 bytes
    //
    _q9(sdk::unknown_ptr) tdi_deregister_pn_p_handlers;
    
    // [TdiDeregisterProvider]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e40, 0x774 bytes
    // tdi.sys .text:0x2ca0, 0x798 bytes
    //
    _r0(sdk::unknown_ptr) tdi_deregister_provider;
    
    // [TdiEnumerateAddresses]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1310, 0x774 bytes
    // tdi.sys .text:0x2cc0, 0x798 bytes
    //
    _r1(sdk::unknown_ptr) tdi_enumerate_addresses;
    
    // [TdiExecuteRequest]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1c10, 0x774 bytes
    // tdi.sys .text:0x2cdc, 0x798 bytes
    //
    _r2(sdk::unknown_ptr) tdi_execute_request;
    
    // [TdiExecuteRequestWrapper]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1630, 0x774 bytes
    // tdi.sys .text:0x3220, 0x798 bytes
    //
    _r3(sdk::unknown_ptr) tdi_execute_request_wrapper;
    
    // [TdiGet9FTriageBlock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2e60, 0x774 bytes
    // tdi.sys .text:0x3240, 0x798 bytes
    //
    _r4(sdk::unknown_ptr) tdi_get9f_triage_block;
    
    // [TdiGlobalTriageBlock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7260, 0x774 bytes
    // tdi.sys .data:0x7260, 0x798 bytes
    //
    _r5(sdk::unknown_ptr) tdi_global_triage_block;
    
    // [TdiHandlePnpOperation]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2bc0, 0x774 bytes
    // tdi.sys .text:0x3258, 0x798 bytes
    //
    _r6(sdk::unknown_ptr) tdi_handle_pnp_operation;
    
    // [TdiHandleSerializedRequest]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x19e0, 0x774 bytes
    // tdi.sys .text:0x3614, 0x798 bytes
    //
    _r7(sdk::unknown_ptr) tdi_handle_serialized_request;
    
    // [TdiInitialize]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2e70, 0x774 bytes
    // tdi.sys .text:0x1190, 0x798 bytes
    //
    _r8(sdk::unknown_ptr) tdi_initialize;
    
    // [TDIListLock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72a0, 0x774 bytes
    // tdi.sys .data:0x72a0, 0x798 bytes
    //
    _r9(sdk::unknown_ptr) tdi_list_lock;
    
    // [TdiMapUserRequest]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x10c0, 0x774 bytes
    // tdi.sys .text:0x10e0, 0x798 bytes
    //
    _s0(sdk::unknown_ptr) tdi_map_user_request;
    
    // [TdiMappingAddress]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72b0, 0x774 bytes
    // tdi.sys .data:0x72b0, 0x798 bytes
    //
    _s1(sdk::unknown_ptr) tdi_mapping_address;
    
    // [TdiMappingAddressLock]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72a8, 0x774 bytes
    // tdi.sys .data:0x72a8, 0x798 bytes
    //
    _s2(sdk::unknown_ptr) tdi_mapping_address_lock;
    
    // [TdiNotifyNewPnpClient]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2740, 0x774 bytes
    // tdi.sys .text:0x3a58, 0x798 bytes
    //
    _s3(sdk::unknown_ptr) tdi_notify_new_pnp_client;
    
    // [TdiNotifyPnpClientList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x20f0, 0x774 bytes
    // tdi.sys .text:0x3b98, 0x798 bytes
    //
    _s4(sdk::unknown_ptr) tdi_notify_pnp_client_list;
    
    // [TdiOpenNetbiosAddress]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1320, 0x774 bytes
    // tdi.sys .text:0x2930, 0x798 bytes
    //
    _s5(sdk::unknown_ptr) tdi_open_netbios_address;
    
    // [TdiPnPHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1490, 0x774 bytes
    // tdi.sys .text:0x3e30, 0x798 bytes
    //
    _s6(sdk::unknown_ptr) tdi_pn_p_handler;
    
    // [TdiPnPPowerComplete]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e50, 0x774 bytes
    // tdi.sys .text:0x3ef0, 0x798 bytes
    //
    _s7(sdk::unknown_ptr) tdi_pn_p_power_complete;
    
    // [TdiPnPPowerCompleteHelper]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4f50, 0x774 bytes
    // tdi.sys .text:0x3ff0, 0x798 bytes
    //
    _s8(sdk::unknown_ptr) tdi_pn_p_power_complete_helper;
    
    // [TdiPnPPowerRequest]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1110, 0x774 bytes
    // tdi.sys .text:0x4010, 0x798 bytes
    //
    _s9(sdk::unknown_ptr) tdi_pn_p_power_request;
    
    // [TdiProviderReady]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1620, 0x774 bytes
    // tdi.sys .text:0x42d0, 0x798 bytes
    //
    _t0(sdk::unknown_ptr) tdi_provider_ready;
    
    // [TdiRegisterAddressChangeHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4f60, 0x774 bytes
    // tdi.sys .text:0x42f0, 0x798 bytes
    //
    _t1(sdk::unknown_ptr) tdi_register_address_change_handler;
    
    // [TdiRegisterDeviceObject]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x17b0, 0x774 bytes
    // tdi.sys .text:0x4340, 0x798 bytes
    //
    _t2(sdk::unknown_ptr) tdi_register_device_object;
    
    // [TdiRegisterNetAddress]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1870, 0x774 bytes
    // tdi.sys .text:0x4480, 0x798 bytes
    //
    _t3(sdk::unknown_ptr) tdi_register_net_address;
    
    // [TdiRegisterNotificationHandler]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4fa0, 0x774 bytes
    // tdi.sys .text:0x4680, 0x798 bytes
    //
    _t4(sdk::unknown_ptr) tdi_register_notification_handler;
    
    // [TdiRegisterPnPHandlers]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1650, 0x774 bytes
    // tdi.sys .text:0x46d0, 0x798 bytes
    //
    _t5(sdk::unknown_ptr) tdi_register_pn_p_handlers;
    
    // [TdiRegisterProvider]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x1540, 0x774 bytes
    // tdi.sys .text:0x48f0, 0x798 bytes
    //
    _t6(sdk::unknown_ptr) tdi_register_provider;
    
    // [TdiReturnChainedReceives]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4e20, 0x774 bytes
    // tdi.sys .text:0x2ad0, 0x798 bytes
    //
    _t7(sdk::unknown_ptr) tdi_return_chained_receives;
    
    // [TdipAddMultiSzToMultiSz]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x23c0, 0x774 bytes
    // tdi.sys .text:0x4a38, 0x798 bytes
    //
    _t8(sdk::unknown_ptr) tdip_add_multi_sz_to_multi_sz;
    
    // [TdipBuildProviderList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x28f0, 0x774 bytes
    // tdi.sys .text:0x4c18, 0x798 bytes
    //
    _t9(sdk::unknown_ptr) tdip_build_provider_list;
    
    // [TdipCbOfMultiSzSafe]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x4fe0, 0x774 bytes
    // tdi.sys .text:0x4c4c, 0x798 bytes
    //
    _u0(sdk::unknown_ptr) tdip_cb_of_multi_sz_safe;
    
    // [TdipGetMultiSZList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x2920, 0x774 bytes
    // tdi.sys .text:0x4c88, 0x798 bytes
    //
    _u1(sdk::unknown_ptr) tdip_get_multi_sz_list;
    
    // [TdipMultiSzStrStr]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x5014, 0x774 bytes
    // tdi.sys .text:0x5004, 0x798 bytes
    //
    _u2(sdk::unknown_ptr) tdip_multi_sz_str_str;
    
    // [TdipRemoveMultiSzFromMultiSz]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .text:0x50a0, 0x774 bytes
    // tdi.sys .text:0x50a0, 0x798 bytes
    //
    _u3(sdk::unknown_ptr) tdip_remove_multi_sz_from_multi_sz;
    
    // [TrackExecCompletes]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7060, 0x774 bytes
    // tdi.sys .data:0x7060, 0x798 bytes
    //
    _u4(sdk::unknown_ptr) track_exec_completes;
    
    // [TrackExecs]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7160, 0x774 bytes
    // tdi.sys .data:0x7160, 0x798 bytes
    //
    _u5(sdk::unknown_ptr) track_execs;
};
#include "magic/api.end.hpp"
