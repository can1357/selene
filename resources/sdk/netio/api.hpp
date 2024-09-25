#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mdl_t.hpp"
#include "../nt/in_addr_t.hpp"
#include "../ndis/scope_id_t.hpp"
#include "../ndis/net_buffer_t.hpp"
#include "../ndis/net_buffer_list_t.hpp"
#include "../nt/npi_client_characteristics_t.hpp"
#include "../nt/npi_provider_characteristics_t.hpp"

#include "magic/api.start.hpp"
namespace netio
{
    // [AleAcquireEndpointLockEx]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x4d594, 0x4e8c bytes
    //
    _m00(sdk::unknown_ptr) ale_acquire_endpoint_lock_ex;
    
    // [ArbitrateAndEnforceQuery]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x77b0, 0x4652 bytes
    //
    _m01(sdk::unknown_ptr) arbitrate_and_enforce_query;
    
    // [AreAllEntriesInactiveConditionalCallouts]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x6cb4, 0x4652 bytes
    //
    _m02(sdk::unknown_ptr) are_all_entries_inactive_conditional_callouts;
    
    // [BfeNetEventFreeMemoryForDataOut]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x14994, 0x4652 bytes
    //
    _m03(sdk::unknown_ptr) bfe_net_event_free_memory_for_data_out;
    
    // [BfeNetEventTraceClassifyDropV4]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0xe968, 0x4e8c bytes
    //
    _m04(sdk::unknown_ptr) bfe_net_event_trace_classify_drop_v4;
    
    // [BfeNetEventTraceClassifyDropV6]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x1aec, 0x4e8c bytes
    //
    _m05(sdk::unknown_ptr) bfe_net_event_trace_classify_drop_v6;
    
    // [CheckSpecialCasesConditionEnumMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x46cec, 0x4652 bytes
    //
    _m06(sdk::unknown_ptr) check_special_cases_condition_enum_match;
    
    // [ComputeConnectBypassHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x157a4, 0x4652 bytes
    //
    _m07(sdk::unknown_ptr) compute_connect_bypass_hash;
    
    // [ConvertProfileIdToProfileMessageId]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x4da68, 0x4e8c bytes
    //
    _m08(sdk::unknown_ptr) convert_profile_id_to_profile_message_id;
    
    // [ConvertTableToEnumTemplate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x6d48, 0x4652 bytes
    //
    _m09(sdk::unknown_ptr) convert_table_to_enum_template;
    
    // [DestroyFilterHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x48414, 0x4652 bytes
    //
    _m10(sdk::unknown_ptr) destroy_filter_hashtable;
    
    // [DoesIndexTypeExist]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x1946c, 0x4e8c bytes
    //
    _m11(sdk::unknown_ptr) does_index_type_exist;
    
    // [EnterWfpSlowPath]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x201b4, 0x4e8c bytes
    //
    _m12(sdk::unknown_ptr) enter_wfp_slow_path;
    
    // [FeGetCalloutFlowDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x5278, 0x4652 bytes
    //
    _m13(sdk::unknown_ptr) fe_get_callout_flow_delete;
    
    // [FeQueryPreviousLocalRedirection]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x50b60, 0x4e8c bytes
    //
    _m14(sdk::unknown_ptr) fe_query_previous_local_redirection;
    
    // [FeSetCalloutApplicableLayerId]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x29530, 0x4e8c bytes
    //
    _m15(sdk::unknown_ptr) fe_set_callout_applicable_layer_id;
    
    // [FeTelemetryCallback]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55060, 0x4e8c bytes
    //
    _m16(sdk::unknown_ptr) fe_telemetry_callback;
    
    // [FeTelemetryInit]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x24b38, 0x4e8c bytes
    //
    _m17(sdk::unknown_ptr) fe_telemetry_init;
    
    // [FeTelemetryShutdown]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x5508c, 0x4e8c bytes
    //
    _m18(sdk::unknown_ptr) fe_telemetry_shutdown;
    
    // [FilterIdCompare]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x12680, 0x4e8c bytes
    //
    _m19(sdk::unknown_ptr) filter_id_compare;
    
    // [FilterMatchEx]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x54138, 0x4e8c bytes
    //
    _m20(sdk::unknown_ptr) filter_match_ex;
    
    // [FinalHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x15830, 0x4652 bytes
    //
    _m21(sdk::unknown_ptr) final_hash;
    
    // [gAleDebugEnabled]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .data:0x7bdf8, 0x4e8c bytes
    //
    _m22(sdk::unknown_ptr) g_ale_debug_enabled;
    
    // [gBatchEpoch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61b28, 0x4652 bytes
    //
    _m23(sdk::unknown_ptr) g_batch_epoch;
    
    // [gBatchUpdate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61b38, 0x4652 bytes
    //
    _m24(sdk::unknown_ptr) g_batch_update;
    
    // [gFeTelemetryRaiseOnTxnCommit]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .data:0x7be08, 0x4e8c bytes
    //
    _m25(sdk::unknown_ptr) g_fe_telemetry_raise_on_txn_commit;
    
    // [gModifiedLayers]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61560, 0x4652 bytes
    //
    _m26(sdk::unknown_ptr) g_modified_layers;
    
    // [gNumPendingFilterAdds]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61b2c, 0x4652 bytes
    //
    _m27(sdk::unknown_ptr) g_num_pending_filter_adds;
    
    // [gPendingFilterAdds]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61b30, 0x4652 bytes
    //
    _m28(sdk::unknown_ptr) g_pending_filter_adds;
    
    // [GetConditionComparisonType]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x47410, 0x4652 bytes
    //
    _m29(sdk::unknown_ptr) get_condition_comparison_type;
    
    // [IfTypeStringTable]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6c5d0, 0x4e8c bytes
    //
    _m30(sdk::unknown_ptr) if_type_string_table;
    
    // [IndexHashGetSize]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x17180, 0x4e8c bytes
    //
    _m31(sdk::unknown_ptr) index_hash_get_size;
    
    // [IndexListGetSize]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x17180, 0x4e8c bytes
    //
    _m32(sdk::unknown_ptr) index_list_get_size;
    
    // [IndexTrieClassify]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x53c0, 0x4e8c bytes
    //
    _m33(sdk::unknown_ptr) index_trie_classify;
    
    // [IndexTrieDumpStats]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x1b4b8, 0x4e8c bytes
    //
    _m34(sdk::unknown_ptr) index_trie_dump_stats;
    
    // [IndexTrieGetKey]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x67d0, 0x4e8c bytes
    //
    _m35(sdk::unknown_ptr) index_trie_get_key;
    
    // [IndexTrieGetSize]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x17190, 0x4e8c bytes
    //
    _m36(sdk::unknown_ptr) index_trie_get_size;
    
    // [InitCleanupWorkQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x23574, 0x4652 bytes
    //
    _m37(sdk::unknown_ptr) init_cleanup_work_queue;
    
    // [InternalRegisterNdisChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x38a08, 0x4652 bytes
    //
    _m38(sdk::unknown_ptr) internal_register_ndis_change_notification;
    
    // [KfdClassifySlow]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x194a4, 0x4e8c bytes
    //
    _m39(sdk::unknown_ptr) kfd_classify_slow;
    
    // [KfdFreePickledMemory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x24c0, 0x4652 bytes
    //
    _m40(sdk::unknown_ptr) kfd_free_pickled_memory;
    
    // [KfdGetLayerCountWithIndexType]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x13500, 0x4e8c bytes
    //
    _m41(sdk::unknown_ptr) kfd_get_layer_count_with_index_type;
    
    // [KfdRegisterCalloutFilterChangeNotify]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x2a080, 0x4e8c bytes
    //
    _m42(sdk::unknown_ptr) kfd_register_callout_filter_change_notify;
    
    // [KfdRegisterCalloutTelemetryValidateFn]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x2a050, 0x4e8c bytes
    //
    _m43(sdk::unknown_ptr) kfd_register_callout_telemetry_validate_fn;
    
    // [KfdRscDisableStatusIndicate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x44fe0, 0x4652 bytes
    //
    _m44(sdk::unknown_ptr) kfd_rsc_disable_status_indicate;
    
    // [KfdUnregisterCalloutFilterChangeNotify]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x53a80, 0x4e8c bytes
    //
    _m45(sdk::unknown_ptr) kfd_unregister_callout_filter_change_notify;
    
    // [KfdUnregisterCalloutTelemetryValidateFn]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x53aa0, 0x4e8c bytes
    //
    _m46(sdk::unknown_ptr) kfd_unregister_callout_telemetry_validate_fn;
    
    // [Microsoft_Windows_WFPHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .data:0x61c60, 0x4652 bytes
    //
    _m47(sdk::unknown_ptr) microsoft_windows_wfp_handle;
    
    // [NcmReadMaxSlotValue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x2001c, 0x4652 bytes
    //
    _m48(sdk::unknown_ptr) ncm_read_max_slot_value;
    
    // [NetioAllocateMibTable]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x40558, 0x4e8c bytes
    //
    _m49(sdk::unknown_ptr) netio_allocate_mib_table;
    
    // [NetioMibSizeofTable]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x405c4, 0x4e8c bytes
    //
    _m50(sdk::unknown_ptr) netio_mib_sizeof_table;
    
    // [NetioNcmFastCheckDoesProcessHaveNcContexts]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x3dc40, 0x4652 bytes
    //
    _m51(sdk::unknown_ptr) netio_ncm_fast_check_does_process_have_nc_contexts;
    
    // [NetioNcmFastCheckNcContextActive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x3dcf0, 0x4652 bytes
    //
    _m52(sdk::unknown_ptr) netio_ncm_fast_check_nc_context_active;
    
    // [NetioNcmGetProtocolWakeRangeState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x3de74, 0x4652 bytes
    //
    _m53(sdk::unknown_ptr) netio_ncm_get_protocol_wake_range_state;
    
    // [NetioPhSkipIpv6ExtHdr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x37420, 0x4652 bytes
    //
    _m54(sdk::unknown_ptr) netio_ph_skip_ipv6_ext_hdr;
    
    // [NetioPhSkipToTransHdr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x374b0, 0x4652 bytes
    //
    _m55(sdk::unknown_ptr) netio_ph_skip_to_trans_hdr;
    
    // [NetioSqmCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x3e810, 0x4652 bytes
    //
    _m56(sdk::unknown_ptr) netio_sqm_callback;
    
    // [NetioSqmInitialize]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x24380, 0x4652 bytes
    //
    _m57(sdk::unknown_ptr) netio_sqm_initialize;
    
    // [NetioSqmTerminate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x19c80, 0x4652 bytes
    //
    _m58(sdk::unknown_ptr) netio_sqm_terminate;
    
    // [NetioSqmWriteEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x3e860, 0x4652 bytes
    //
    _m59(sdk::unknown_ptr) netio_sqm_write_event;
    
    // [NetioTimerWorkItemCancel]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x469b0, 0x4e8c bytes
    //
    _m60(sdk::unknown_ptr) netio_timer_work_item_cancel;
    
    // [NetioTimerWorkItemInitialize]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x24c70, 0x4e8c bytes
    //
    _m61(sdk::unknown_ptr) netio_timer_work_item_initialize;
    
    // [NetioTimerWorkItemShutdown]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x46a20, 0x4e8c bytes
    //
    _m62(sdk::unknown_ptr) netio_timer_work_item_shutdown;
    
    // [NetioTimerWorkItemStart]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x13b10, 0x4e8c bytes
    //
    _m63(sdk::unknown_ptr) netio_timer_work_item_start;
    
    // [NetiopTimerWorkItem]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x13ba0, 0x4e8c bytes
    //
    _m64(sdk::unknown_ptr) netiop_timer_work_item;
    
    // [NetiopTimerWorkItemStartUnderLock]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x13c2c, 0x4e8c bytes
    //
    _m65(sdk::unknown_ptr) netiop_timer_work_item_start_under_lock;
    
    // [NetiopTimerWorkItemTimeout]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x13d70, 0x4e8c bytes
    //
    _m66(sdk::unknown_ptr) netiop_timer_work_item_timeout;
    
    // [NPI_CCM_INTERFACE_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59570, 0x4652 bytes
    //
    _m67(sdk::unknown_ptr) npi_ccm_interface_id;
    
    // [NrtFindRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x51ca0, 0x4652 bytes
    //
    _m68(sdk::unknown_ptr) nrt_find_record;
    
    // [NsiCleanup]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x40db4, 0x4652 bytes
    //
    _m69(sdk::unknown_ptr) nsi_cleanup;
    
    // [NsiContextCleanup]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys PAGE:0x87010, 0x4e8c bytes
    //
    _m70(sdk::unknown_ptr) nsi_context_cleanup;
    
    // [NsipLockCacheListExclusive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x1a61c, 0x4652 bytes
    //
    _m71(sdk::unknown_ptr) nsip_lock_cache_list_exclusive;
    
    // [ProcessFastCalloutClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x246a8, 0x4652 bytes
    //
    _m72(sdk::unknown_ptr) process_fast_callout_classify;
    
    // [SetCompartmentIdCondition]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x4d214, 0x4e8c bytes
    //
    _m73(sdk::unknown_ptr) set_compartment_id_condition;
    
    // [StreamCalloutProcessDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0xf38c, 0x4652 bytes
    //
    _m74(sdk::unknown_ptr) stream_callout_process_disconnect;
    
    // [StreamDeleteCalloutContext]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0xdc54, 0x4e8c bytes
    //
    _m75(sdk::unknown_ptr) stream_delete_callout_context;
    
    // [StreamFillFixedValuesV4]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0xf060, 0x4652 bytes
    //
    _m76(sdk::unknown_ptr) stream_fill_fixed_values_v4;
    
    // [StreamFreeNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x10b08, 0x4652 bytes
    //
    _m77(sdk::unknown_ptr) stream_free_net_buffer_list;
    
    // [StreamGetLayerId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x10acc, 0x4652 bytes
    //
    _m78(sdk::unknown_ptr) stream_get_layer_id;
    
    // [StreamIsFilterPresentV4]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0xef70, 0x4652 bytes
    //
    _m79(sdk::unknown_ptr) stream_is_filter_present_v4;
    
    // [Template_mqbqbhqqhxhzqq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x52510, 0x4652 bytes
    //
    _m80(sdk::unknown_ptr) template_mqbqbhqqhxhzqq;
    
    // [Template_mqbqbqzkqqqq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x5269c, 0x4652 bytes
    //
    _m81(sdk::unknown_ptr) template_mqbqbqzkqqqq;
    
    // [Template_mqbqbqzkqqqqqqx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x5282c, 0x4652 bytes
    //
    _m82(sdk::unknown_ptr) template_mqbqbqzkqqqqqqx;
    
    // [Template_mqbqbqzkqqqqtxhzqqzxz]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x52a0c, 0x4652 bytes
    //
    _m83(sdk::unknown_ptr) template_mqbqbqzkqqqqtxhzqqzxz;
    
    // [Template_mqbqbqzkqqqxh]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x52ce8, 0x4652 bytes
    //
    _m84(sdk::unknown_ptr) template_mqbqbqzkqqqxh;
    
    // [Template_mqbqbqzkzzqqZRqqZRqqqqqqbxx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x52e94, 0x4652 bytes
    //
    _m85(sdk::unknown_ptr) template_mqbqbqzkzzqq_z_rqq_z_rqqqqqqbxx;
    
    // [Template_mqbqbqzkzzqqZRqqZRqqqqqqqbxx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x531bc, 0x4652 bytes
    //
    _m86(sdk::unknown_ptr) template_mqbqbqzkzzqq_z_rqq_z_rqqqqqqqbxx;
    
    // [Template_qk]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x5355c, 0x4652 bytes
    //
    _m87(sdk::unknown_ptr) template_qk;
    
    // [Template_qqbqbq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x535fc, 0x4652 bytes
    //
    _m88(sdk::unknown_ptr) template_qqbqbq;
    
    // [UpdateCacheLruTick]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x2fbc, 0x4652 bytes
    //
    _m89(sdk::unknown_ptr) update_cache_lru_tick;
    
    // [UpdateTrieStatsOnChildAdd]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x1b328, 0x4e8c bytes
    //
    _m90(sdk::unknown_ptr) update_trie_stats_on_child_add;
    
    // [WfpAleAuthLayerMemUsageTelemetry]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x550e4, 0x4e8c bytes
    //
    _m91(sdk::unknown_ptr) wfp_ale_auth_layer_mem_usage_telemetry;
    
    // [WfpAleDereferenceEndpoint]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0xbb7c, 0x4e8c bytes
    //
    _m92(sdk::unknown_ptr) wfp_ale_dereference_endpoint;
    
    // [WfpAleIncrementWaitRef]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x4d7d4, 0x4e8c bytes
    //
    _m93(sdk::unknown_ptr) wfp_ale_increment_wait_ref;
    
    // [WfpCalloutDataTelemetry]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x552f8, 0x4e8c bytes
    //
    _m94(sdk::unknown_ptr) wfp_callout_data_telemetry;
    
    // [WfpCalloutDestroyTelemetryEntry]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x554b0, 0x4e8c bytes
    //
    _m95(sdk::unknown_ptr) wfp_callout_destroy_telemetry_entry;
    
    // [WfpCalloutTelemetryWriteAllInfo]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x554d4, 0x4e8c bytes
    //
    _m96(sdk::unknown_ptr) wfp_callout_telemetry_write_all_info;
    
    // [WfpGetAleLayerMemUsageStats]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55664, 0x4e8c bytes
    //
    _m97(sdk::unknown_ptr) wfp_get_ale_layer_mem_usage_stats;
    
    // [WFP_IKEEXT_MM_FAILURE_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59958, 0x4652 bytes
    //
    _m98(sdk::unknown_ptr) wfp_ikeext_mm_failure_event;
    
    // [WFP_IKEEXT_QM_FAILURE_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59948, 0x4652 bytes
    //
    _m99(sdk::unknown_ptr) wfp_ikeext_qm_failure_event;
    
    // [WfpInactivateCaches]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x2794, 0x4652 bytes
    //
    _n00(sdk::unknown_ptr) wfp_inactivate_caches;
    
    // [WfpMemReAllocNonPaged]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55b34, 0x4e8c bytes
    //
    _n01(sdk::unknown_ptr) wfp_mem_re_alloc_non_paged;
    
    // [WfpObjectRemove]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x48a2c, 0x4652 bytes
    //
    _n02(sdk::unknown_ptr) wfp_object_remove;
    
    // [WfpReleaseSpinLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x41fc4, 0x4652 bytes
    //
    _n03(sdk::unknown_ptr) wfp_release_spin_lock;
    
    // [WfpStringCchCopyA]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55ed0, 0x4e8c bytes
    //
    _n04(sdk::unknown_ptr) wfp_string_cch_copy_a;
    
    // [WfpTelemetryTableInsert]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55758, 0x4e8c bytes
    //
    _n05(sdk::unknown_ptr) wfp_telemetry_table_insert;
    
    // [WPP_09df97d73b9432dd8ebf180d4f64b84f_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6d918, 0x4e8c bytes
    //
    _n06(sdk::unknown_ptr) wpp_09df97d73b9432dd8ebf180d4f64b84f_traceguids;
    
    // [WPP_0ca36577bb703cacbb847290fb33a9a9_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57f70, 0x4652 bytes
    //
    _n07(sdk::unknown_ptr) wpp_0ca36577bb703cacbb847290fb33a9a9_traceguids;
    
    // [WPP_0d877ab4451b321818e6a51ec27a1a0f_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004
    // netio.sys .rdata:0x6d820, 0x4dd3 bytes
    //
    _n08(sdk::unknown_ptr) wpp_0d877ab4451b321818e6a51ec27a1a0f_traceguids;
    
    // [WPP_0e585ddfb3e336fb5486a9430e72d6fd_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x599d8, 0x4652 bytes
    //
    _n09(sdk::unknown_ptr) wpp_0e585ddfb3e336fb5486a9430e72d6fd_traceguids;
    
    // [WPP_0e6a37eda5d63a87e478a6169f1f6fb9_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59848, 0x4652 bytes
    //
    _n10(sdk::unknown_ptr) wpp_0e6a37eda5d63a87e478a6169f1f6fb9_traceguids;
    
    // [WPP_29f79059df563a81342519df5b596924_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57fd0, 0x4652 bytes
    //
    _n11(sdk::unknown_ptr) wpp_29f79059df563a81342519df5b596924_traceguids;
    
    // [WPP_2b864b9614163dded159e2d44af69120_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57f90, 0x4652 bytes
    //
    _n12(sdk::unknown_ptr) wpp_2b864b9614163dded159e2d44af69120_traceguids;
    
    // [WPP_2dcb863b16bb395d52a96d61588c4eed_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57fa0, 0x4652 bytes
    //
    _n13(sdk::unknown_ptr) wpp_2dcb863b16bb395d52a96d61588c4eed_traceguids;
    
    // [WPP_370268102e253e956ccdce8356b08fbf_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6d958, 0x4e8c bytes
    //
    _n14(sdk::unknown_ptr) wpp_370268102e253e956ccdce8356b08fbf_traceguids;
    
    // [WPP_3a2e796cb1153c68db1a391d90ebe8fd_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x71e60, 0x4e8c bytes
    //
    _n15(sdk::unknown_ptr) wpp_3a2e796cb1153c68db1a391d90ebe8fd_traceguids;
    
    // [WPP_3a62e195e0683f55882b7e537bfbc8d5_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x71aa8, 0x4e8c bytes
    //
    _n16(sdk::unknown_ptr) wpp_3a62e195e0683f55882b7e537bfbc8d5_traceguids;
    
    // [WPP_465c764f1a8a358ad814f0bbe7278da3_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59828, 0x4652 bytes
    //
    _n17(sdk::unknown_ptr) wpp_465c764f1a8a358ad814f0bbe7278da3_traceguids;
    
    // [WPP_4ab361901f9433f79b5f5d7a96596796_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x597c8, 0x4652 bytes
    //
    _n18(sdk::unknown_ptr) wpp_4ab361901f9433f79b5f5d7a96596796_traceguids;
    
    // [WPP_52f761c2c53d3ecc90d274191ad44911_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x71ad8, 0x4e8c bytes
    //
    _n19(sdk::unknown_ptr) wpp_52f761c2c53d3ecc90d274191ad44911_traceguids;
    
    // [WPP_5342cac17d2e387a6ce04788bd344fbe_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57fc0, 0x4652 bytes
    //
    _n20(sdk::unknown_ptr) wpp_5342cac17d2e387a6ce04788bd344fbe_traceguids;
    
    // [WPP_54a21f9fddc33a4014053da3c0e23b1f_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x599f8, 0x4652 bytes
    //
    _n21(sdk::unknown_ptr) wpp_54a21f9fddc33a4014053da3c0e23b1f_traceguids;
    
    // [WPP_553129781ca331581ef973b7173f4d02_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6d748, 0x4e8c bytes
    //
    _n22(sdk::unknown_ptr) wpp_553129781ca331581ef973b7173f4d02_traceguids;
    
    // [WPP_5eeca227077e35e1eb92957163737b99_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57fb0, 0x4652 bytes
    //
    _n23(sdk::unknown_ptr) wpp_5eeca227077e35e1eb92957163737b99_traceguids;
    
    // [WPP_618d7aed868e34ad04936c6ce2a52f0e_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6de20, 0x4e8c bytes
    //
    _n24(sdk::unknown_ptr) wpp_618d7aed868e34ad04936c6ce2a52f0e_traceguids;
    
    // [WPP_6375f58645833fc40f0ccad5eb4e2dac_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x72a68, 0x4e8c bytes
    //
    _n25(sdk::unknown_ptr) wpp_6375f58645833fc40f0ccad5eb4e2dac_traceguids;
    
    // [WPP_6981aa9b665631ecd29d0bd43ab99902_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6d758, 0x4e8c bytes
    //
    _n26(sdk::unknown_ptr) wpp_6981aa9b665631ecd29d0bd43ab99902_traceguids;
    
    // [WPP_6ee20bc52ad830182303aba2707e7991_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x597d8, 0x4652 bytes
    //
    _n27(sdk::unknown_ptr) wpp_6ee20bc52ad830182303aba2707e7991_traceguids;
    
    // [WPP_74de08a2c08e33956c24d2f41bb59b2c_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6daf8, 0x4e8c bytes
    //
    _n28(sdk::unknown_ptr) wpp_74de08a2c08e33956c24d2f41bb59b2c_traceguids;
    
    // [WPP_7ea4e8985a6d3a57ed4def47d1ccd76a_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57f60, 0x4652 bytes
    //
    _n29(sdk::unknown_ptr) wpp_7ea4e8985a6d3a57ed4def47d1ccd76a_traceguids;
    
    // [WPP_976934e4100d344e59e1f2db11a22541_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59818, 0x4652 bytes
    //
    _n30(sdk::unknown_ptr) wpp_976934e4100d344e59e1f2db11a22541_traceguids;
    
    // [WPP_a78fc47d93d23f9bfd819214180f4292_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6d840, 0x4e8c bytes
    //
    _n31(sdk::unknown_ptr) wpp_a78fc47d93d23f9bfd819214180f4292_traceguids;
    
    // [WPP_aac5228a175736e592150629d548485e_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x6dab8, 0x4e8c bytes
    //
    _n32(sdk::unknown_ptr) wpp_aac5228a175736e592150629d548485e_traceguids;
    
    // [WPP_aacf5f2a80333fc0184ba5c7e528f0ee_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x597e8, 0x4652 bytes
    //
    _n33(sdk::unknown_ptr) wpp_aacf5f2a80333fc0184ba5c7e528f0ee_traceguids;
    
    // [WPP_aead14209528361228dad29954ba510c_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x597f8, 0x4652 bytes
    //
    _n34(sdk::unknown_ptr) wpp_aead14209528361228dad29954ba510c_traceguids;
    
    // [WPP_afcba4090f7139b8f0d6376f28b03170_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59998, 0x4652 bytes
    //
    _n35(sdk::unknown_ptr) wpp_afcba4090f7139b8f0d6376f28b03170_traceguids;
    
    // [WPP_b2fdb5b7496d32888bf34ccd31012ea0_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59838, 0x4652 bytes
    //
    _n36(sdk::unknown_ptr) wpp_b2fdb5b7496d32888bf34ccd31012ea0_traceguids;
    
    // [WPP_b43899a4870d32c947908b4cb1269734_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x73130, 0x4e8c bytes
    //
    _n37(sdk::unknown_ptr) wpp_b43899a4870d32c947908b4cb1269734_traceguids;
    
    // [WPP_b538a6a153f03e80932113325361d4eb_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x73340, 0x4e8c bytes
    //
    _n38(sdk::unknown_ptr) wpp_b538a6a153f03e80932113325361d4eb_traceguids;
    
    // [WPP_b6203abc1eb4306ba042aeeb58c70be3_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x59988, 0x4652 bytes
    //
    _n39(sdk::unknown_ptr) wpp_b6203abc1eb4306ba042aeeb58c70be3_traceguids;
    
    // [WPP_ba3732e6487d357bd851aa00c343e27b_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x71af8, 0x4e8c bytes
    //
    _n40(sdk::unknown_ptr) wpp_ba3732e6487d357bd851aa00c343e27b_traceguids;
    
    // [WPP_bd24629e31d9397dab82213bd2b20f0f_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x72390, 0x4e8c bytes
    //
    _n41(sdk::unknown_ptr) wpp_bd24629e31d9397dab82213bd2b20f0f_traceguids;
    
    // [WPP_e7deb62adaa5360c59734394085686ad_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x73778, 0x4e8c bytes
    //
    _n42(sdk::unknown_ptr) wpp_e7deb62adaa5360c59734394085686ad_traceguids;
    
    // [WPP_f3e183a1c9b83d65ef1ba84f7805a892_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .rdata:0x71c90, 0x4e8c bytes
    //
    _n43(sdk::unknown_ptr) wpp_f3e183a1c9b83d65ef1ba84f7805a892_traceguids;
    
    // [WPP_fdf7fd56269236fc2294a37187f582b7_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .rdata:0x57f80, 0x4652 bytes
    //
    _n44(sdk::unknown_ptr) wpp_fdf7fd56269236fc2294a37187f582b7_traceguids;
    
    // [WPP_SF_ddddd]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55ab4, 0x4e8c bytes
    //
    _n45(sdk::unknown_ptr) wpp_sf_ddddd;
    
    // [WPP_SF_dddx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x46794, 0x4652 bytes
    //
    _n46(sdk::unknown_ptr) wpp_sf_dddx;
    
    // [WPP_SF_HHqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x4c620, 0x4652 bytes
    //
    _n47(sdk::unknown_ptr) wpp_sf_h_hq_lq;
    
    // [WPP_SF_HHqLqd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x4c6a8, 0x4652 bytes
    //
    _n48(sdk::unknown_ptr) wpp_sf_h_hq_lqd;
    
    // [WPP_SF_HiHqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x4c7dc, 0x4652 bytes
    //
    _n49(sdk::unknown_ptr) wpp_sf_hi_hq_lq;
    
    // [WPP_SF_iHqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x4cf58, 0x4652 bytes
    //
    _n50(sdk::unknown_ptr) wpp_sf_i_hq_lq;
    
    // [WPP_SF_II]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x55a20, 0x4e8c bytes
    //
    _n51(sdk::unknown_ptr) wpp_sf_ii;
    
    // [WPP_SF_qDhDDHHL_FWP_BYTE_BLOB__sid_L_sid_SI_FWP_BYTE_BLOB_]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x60250, 0x4e8c bytes
    //
    _n52(sdk::unknown_ptr) wpp_sf_q_dh_ddhhl_fwp_byte_blob_sid_l_sid_si_fwp_byte_blob_;
    
    // [WPP_SF_qDh_IPV6__IPV6_HHL_FWP_BYTE_BLOB__sid_L_sid_SI_FWP_BYTE_BLOB_]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x604d4, 0x4e8c bytes
    //
    _n53(sdk::unknown_ptr) wpp_sf_q_dh_ipv6_ipv6_hhl_fwp_byte_blob_sid_l_sid_si_fwp_byte_blob_;
    
    // [WPP_SF_qIHDDDDd]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x60774, 0x4e8c bytes
    //
    _n54(sdk::unknown_ptr) wpp_sf_q_ihddd_dd;
    
    // [WPP_SF_qIHDDDDd_FWP_BYTE_BLOB_DD]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x6084c, 0x4e8c bytes
    //
    _n55(sdk::unknown_ptr) wpp_sf_q_ihddd_dd_fwp_byte_blob_dd;
    
    // [WPP_SF_qLLISSI]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x609a8, 0x4e8c bytes
    //
    _n56(sdk::unknown_ptr) wpp_sf_q_llissi;
    
    // [WPP_SF_sqDDI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607
    // netio.sys .text:0x4687c, 0x4652 bytes
    //
    _n57(sdk::unknown_ptr) wpp_sf_sq_ddi;
    
    // [ArbitrateCalloutV2]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x523cc, 0x4dd3 bytes
    // netio.sys .text:0x5238c, 0x4dd3 bytes
    //
    _n58(sdk::unknown_ptr) arbitrate_callout_v2;
    
    // [CheckFlagsConditionEnumMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x1970, 0x4dd3 bytes
    // netio.sys .text:0x1970, 0x4dd3 bytes
    //
    _n59(sdk::unknown_ptr) check_flags_condition_enum_match;
    
    // [ComputeUnmatchedState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 11
    // netio.sys .text:0x6638, 0x4652 bytes
    // netio.sys .text:0xbd28, 0x4e8c bytes
    //
    _n60(sdk::unknown_ptr) compute_unmatched_state;
    
    // [ConvertMatchListToArray]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 11
    // netio.sys .text:0x8178, 0x4652 bytes
    // netio.sys .text:0xc0c0, 0x4e8c bytes
    //
    _n61(sdk::unknown_ptr) convert_match_list_to_array;
    
    // [IndexTrieGetKeyFromInFixedValues]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x553bc, 0x4dd3 bytes
    // netio.sys .text:0x5537c, 0x4dd3 bytes
    //
    _n62(sdk::unknown_ptr) index_trie_get_key_from_in_fixed_values;
    
    // [IndexTriePreClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55570, 0x4dd3 bytes
    // netio.sys .text:0x55530, 0x4dd3 bytes
    //
    _n63(sdk::unknown_ptr) index_trie_pre_classify;
    
    // [IndexTrieValidatePreclassifyFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x556e0, 0x4dd3 bytes
    // netio.sys .text:0x556a0, 0x4dd3 bytes
    //
    _n64(sdk::unknown_ptr) index_trie_validate_preclassify_filter;
    
    // [InitializeCacheEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 11
    // netio.sys .text:0x66d8, 0x4652 bytes
    // netio.sys .text:0xac8c, 0x4e8c bytes
    //
    _n65(sdk::unknown_ptr) initialize_cache_entry;
    
    // [IsContinueMatchOnOrEnumTemplate]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0xc3a4, 0x4dd3 bytes
    // netio.sys .text:0xc454, 0x4dd3 bytes
    //
    _n66(sdk::unknown_ptr) is_continue_match_on_or_enum_template;
    
    // [IsMatchingEntryHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 11
    // netio.sys .text:0x90d8, 0x4652 bytes
    // netio.sys .text:0x4558, 0x4e8c bytes
    //
    _n67(sdk::unknown_ptr) is_matching_entry_helper;
    
    // [KfdGetLayerPreclassifyEpoch]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x16a60, 0x4dd3 bytes
    // netio.sys .text:0x16b10, 0x4dd3 bytes
    //
    _n68(sdk::unknown_ptr) kfd_get_layer_preclassify_epoch;
    
    // [KfdPreClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x51150, 0x4dd3 bytes
    // netio.sys .text:0x51110, 0x4dd3 bytes
    //
    _n69(sdk::unknown_ptr) kfd_pre_classify;
    
    // [NsiPersistentStoreRootKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .data:0x7ad10, 0x4dd3 bytes
    // netio.sys .data:0x7ad10, 0x4dd3 bytes
    //
    _n70(sdk::unknown_ptr) nsi_persistent_store_root_key;
    
    // [NsipInitPersistentStoreRootKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x27a5c, 0x4dd3 bytes
    // netio.sys .text:0x27aec, 0x4dd3 bytes
    //
    _n71(sdk::unknown_ptr) nsip_init_persistent_store_root_key;
    
    // [SetCompartmentIdCodition]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x4bd1c, 0x4dd3 bytes
    // netio.sys .text:0x4bcdc, 0x4dd3 bytes
    //
    _n72(sdk::unknown_ptr) set_compartment_id_codition;
    
    // [WPP_0e72c304e40130309c83fc98dcb4af38_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71160, 0x4dd3 bytes
    // netio.sys .rdata:0x71160, 0x4dd3 bytes
    //
    _n73(sdk::unknown_ptr) wpp_0e72c304e40130309c83fc98dcb4af38_traceguids;
    
    // [WPP_10ff1ce016813e28b2f51c55bafce16b_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71098, 0x4dd3 bytes
    // netio.sys .rdata:0x71098, 0x4dd3 bytes
    //
    _n74(sdk::unknown_ptr) wpp_10ff1ce016813e28b2f51c55bafce16b_traceguids;
    
    // [WPP_26447ee4f59d3dc7d36441744e144f01_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x727b0, 0x4dd3 bytes
    // netio.sys .rdata:0x727b0, 0x4dd3 bytes
    //
    _n75(sdk::unknown_ptr) wpp_26447ee4f59d3dc7d36441744e144f01_traceguids;
    
    // [WPP_27c336aac265398d4ce0a58ee74728cc_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71b78, 0x4dd3 bytes
    // netio.sys .rdata:0x71b78, 0x4dd3 bytes
    //
    _n76(sdk::unknown_ptr) wpp_27c336aac265398d4ce0a58ee74728cc_traceguids;
    
    // [WPP_2968de65d54c3127d4784c32cbe4238d_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d240, 0x4dd3 bytes
    // netio.sys .rdata:0x6d240, 0x4dd3 bytes
    //
    _n77(sdk::unknown_ptr) wpp_2968de65d54c3127d4784c32cbe4238d_traceguids;
    
    // [WPP_2f254602dda3305dbbfaddaa033a8afd_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x72088, 0x4dd3 bytes
    // netio.sys .rdata:0x72088, 0x4dd3 bytes
    //
    _n78(sdk::unknown_ptr) wpp_2f254602dda3305dbbfaddaa033a8afd_traceguids;
    
    // [WPP_3654b3fbec1a385a47468c62bef665cf_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6dd40, 0x4e8c bytes
    // netio.sys .rdata:0x6d820, 0x4dd3 bytes
    //
    _n79(sdk::unknown_ptr) wpp_3654b3fbec1a385a47468c62bef665cf_traceguids;
    
    // [WPP_496a0f3831a036f6f587920ab895807d_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d598, 0x4dd3 bytes
    // netio.sys .rdata:0x6d598, 0x4dd3 bytes
    //
    _n80(sdk::unknown_ptr) wpp_496a0f3831a036f6f587920ab895807d_traceguids;
    
    // [WPP_50467cf1e1d43ff4e74813dfa036559f_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x729c0, 0x4dd3 bytes
    // netio.sys .rdata:0x729c0, 0x4dd3 bytes
    //
    _n81(sdk::unknown_ptr) wpp_50467cf1e1d43ff4e74813dfa036559f_traceguids;
    
    // [WPP_532c9b5a42fd33739750627981f7a4b8_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d900, 0x4dd3 bytes
    // netio.sys .rdata:0x6d900, 0x4dd3 bytes
    //
    _n82(sdk::unknown_ptr) wpp_532c9b5a42fd33739750627981f7a4b8_traceguids;
    
    // [WPP_6756ba0abdbc3264ede1eacb2db3a9c3_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d3b8, 0x4dd3 bytes
    // netio.sys .rdata:0x6d3b8, 0x4dd3 bytes
    //
    _n83(sdk::unknown_ptr) wpp_6756ba0abdbc3264ede1eacb2db3a9c3_traceguids;
    
    // [WPP_907e9498b08d3dd84acaaa36fd2fc8d3_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x72df8, 0x4dd3 bytes
    // netio.sys .rdata:0x72df8, 0x4dd3 bytes
    //
    _n84(sdk::unknown_ptr) wpp_907e9498b08d3dd84acaaa36fd2fc8d3_traceguids;
    
    // [WPP_951f954d74c0347b18fca0495c688465_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71768, 0x4dd3 bytes
    // netio.sys .rdata:0x71768, 0x4dd3 bytes
    //
    _n85(sdk::unknown_ptr) wpp_951f954d74c0347b18fca0495c688465_traceguids;
    
    // [WPP_bc212f763d4632cc6ac07f1771a1c7fd_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x714c8, 0x4dd3 bytes
    // netio.sys .rdata:0x714c8, 0x4dd3 bytes
    //
    _n86(sdk::unknown_ptr) wpp_bc212f763d4632cc6ac07f1771a1c7fd_traceguids;
    
    // [WPP_cc53e0060c1430625cd44df85777835d_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d230, 0x4dd3 bytes
    // netio.sys .rdata:0x6d230, 0x4dd3 bytes
    //
    _n87(sdk::unknown_ptr) wpp_cc53e0060c1430625cd44df85777835d_traceguids;
    
    // [WPP_e3e30c8ddde53bc298a8203870c64b0b_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71328, 0x4dd3 bytes
    // netio.sys .rdata:0x71328, 0x4dd3 bytes
    //
    _n88(sdk::unknown_ptr) wpp_e3e30c8ddde53bc298a8203870c64b0b_traceguids;
    
    // [WPP_e57ca73ec4113ad66029f48679ed778e_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71a88, 0x4dd3 bytes
    // netio.sys .rdata:0x71a88, 0x4dd3 bytes
    //
    _n89(sdk::unknown_ptr) wpp_e57ca73ec4113ad66029f48679ed778e_traceguids;
    
    // [WPP_ee78abf8b2d93a486a906a13b8121831_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x71180, 0x4dd3 bytes
    // netio.sys .rdata:0x71180, 0x4dd3 bytes
    //
    _n90(sdk::unknown_ptr) wpp_ee78abf8b2d93a486a906a13b8121831_traceguids;
    
    // [WPP_fae14ea5ff01330f355142ef475d32d0_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x6d5d8, 0x4dd3 bytes
    // netio.sys .rdata:0x6d5d8, 0x4dd3 bytes
    //
    _n91(sdk::unknown_ptr) wpp_fae14ea5ff01330f355142ef475d32d0_traceguids;
    
    // [WPP_SF_DDI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55868, 0x4dd3 bytes
    // netio.sys .text:0x55828, 0x4dd3 bytes
    //
    _n92(sdk::unknown_ptr) wpp_sf_ddi;
    
    // [WPP_SF_DI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x558d0, 0x4dd3 bytes
    // netio.sys .text:0x55890, 0x4dd3 bytes
    //
    _n93(sdk::unknown_ptr) wpp_sf_di;
    
    // [BfeFwpV4AddrAndMaskValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys PAGE:0x6c684, 0x4652 bytes
    // netio.sys PAGE:0x875c0, 0x4dd3 bytes
    // netio.sys PAGE:0x875c0, 0x4dd3 bytes
    //
    _n94(sdk::unknown_ptr) bfe_fwp_v4_addr_and_mask_validate;
    
    // [BfeFwpV6AddrAndMaskValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys PAGE:0x6c6d4, 0x4652 bytes
    // netio.sys PAGE:0x87610, 0x4dd3 bytes
    // netio.sys PAGE:0x87610, 0x4dd3 bytes
    //
    _n95(sdk::unknown_ptr) bfe_fwp_v6_addr_and_mask_validate;
    
    // [BfeNetEventTraceClassifyAllowV4]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5fbfc, 0x4dd3 bytes
    // netio.sys .text:0x5f61c, 0x4e8c bytes
    // netio.sys .text:0x5fbbc, 0x4dd3 bytes
    //
    _n96(sdk::unknown_ptr) bfe_net_event_trace_classify_allow_v4;
    
    // [BfeNetEventTraceClassifyAllowV6]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5fccc, 0x4dd3 bytes
    // netio.sys .text:0x5f7ec, 0x4e8c bytes
    // netio.sys .text:0x5fc8c, 0x4dd3 bytes
    //
    _n97(sdk::unknown_ptr) bfe_net_event_trace_classify_allow_v6;
    
    // [BfeNetEventTraceLowPowerModePacketArrival]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60038, 0x4dd3 bytes
    // netio.sys .text:0x5fc48, 0x4e8c bytes
    // netio.sys .text:0x5fff8, 0x4dd3 bytes
    //
    _n98(sdk::unknown_ptr) bfe_net_event_trace_low_power_mode_packet_arrival;
    
    // [c_HvsiK_CloneHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63b58, 0x4dd3 bytes
    // netio.sys .text:0x63d5c, 0x4e8c bytes
    // netio.sys .text:0x63b18, 0x4dd3 bytes
    //
    _n99(sdk::unknown_ptr) c_hvsi_k_clone_handle;
    
    // [c_HvsiK_CloseHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63b90, 0x4dd3 bytes
    // netio.sys .text:0x63d94, 0x4e8c bytes
    // netio.sys .text:0x63b50, 0x4dd3 bytes
    //
    _o00(sdk::unknown_ptr) c_hvsi_k_close_handle;
    
    // [c_HvsiK_JoinHandles]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63bc0, 0x4dd3 bytes
    // netio.sys .text:0x63dc4, 0x4e8c bytes
    // netio.sys .text:0x63b80, 0x4dd3 bytes
    //
    _o01(sdk::unknown_ptr) c_hvsi_k_join_handles;
    
    // [ComparePrefixBlobs]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52f58, 0x4dd3 bytes
    // netio.sys .text:0x53e9c, 0x4e8c bytes
    // netio.sys .text:0x52f18, 0x4dd3 bytes
    //
    _o02(sdk::unknown_ptr) compare_prefix_blobs;
    
    // [ComputeHashAccessPrecheck]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52a6c, 0x4dd3 bytes
    // netio.sys .text:0x2a170, 0x4e8c bytes
    // netio.sys .text:0x52a2c, 0x4dd3 bytes
    //
    _o03(sdk::unknown_ptr) compute_hash_access_precheck;
    
    // [ComputeIncomingSignatureFromEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10a08, 0x4dd3 bytes
    // netio.sys .text:0x20ffc, 0x4e8c bytes
    // netio.sys .text:0x10ab8, 0x4dd3 bytes
    //
    _o04(sdk::unknown_ptr) compute_incoming_signature_from_enum;
    
    // [DNS_RPC_HANDLE_bind]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63c00, 0x4dd3 bytes
    // netio.sys .text:0x63e00, 0x4e8c bytes
    // netio.sys .text:0x63bc0, 0x4dd3 bytes
    //
    _o05(sdk::unknown_ptr) dns_rpc_handle_bind;
    
    // [DNS_RPC_HANDLE_unbind]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63d60, 0x4dd3 bytes
    // netio.sys .text:0x63f60, 0x4e8c bytes
    // netio.sys .text:0x63d20, 0x4dd3 bytes
    //
    _o06(sdk::unknown_ptr) dns_rpc_handle_unbind;
    
    // [FeNotifyFilterDeleteWorkQueueRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cc90, 0x4dd3 bytes
    // netio.sys .text:0x189e0, 0x4e8c bytes
    // netio.sys .text:0x1cd20, 0x4dd3 bytes
    //
    _o07(sdk::unknown_ptr) fe_notify_filter_delete_work_queue_routine;
    
    // [FillIfEntryWithInterfaceEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43c2c, 0x4dd3 bytes
    // netio.sys .text:0x453a8, 0x4e8c bytes
    // netio.sys .text:0x43bec, 0x4dd3 bytes
    //
    _o08(sdk::unknown_ptr) fill_if_entry_with_interface_enum;
    
    // [FilterHashTableEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5277c, 0x4dd3 bytes
    // netio.sys .text:0x53b2c, 0x4e8c bytes
    // netio.sys .text:0x5273c, 0x4dd3 bytes
    //
    _o09(sdk::unknown_ptr) filter_hash_table_empty;
    
    // [FilterMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x47130, 0x4652 bytes
    // netio.sys .text:0x53438, 0x4dd3 bytes
    // netio.sys .text:0x533f8, 0x4dd3 bytes
    //
    _o10(sdk::unknown_ptr) filter_match;
    
    // [FindLastMatchBuf]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10b44, 0x4dd3 bytes
    // netio.sys .text:0x21134, 0x4e8c bytes
    // netio.sys .text:0x10bf4, 0x4dd3 bytes
    //
    _o11(sdk::unknown_ptr) find_last_match_buf;
    
    // [FreeDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43490, 0x4dd3 bytes
    // netio.sys .text:0x44a00, 0x4e8c bytes
    // netio.sys .text:0x43450, 0x4dd3 bytes
    //
    _o12(sdk::unknown_ptr) free_dns_settings;
    
    // [FreeInterfaceDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43510, 0x4dd3 bytes
    // netio.sys .text:0x44a80, 0x4e8c bytes
    // netio.sys .text:0x434d0, 0x4dd3 bytes
    //
    _o13(sdk::unknown_ptr) free_interface_dns_settings;
    
    // [FsbAllocate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x11d20, 0x4652 bytes
    // netio.sys .text:0x16f20, 0x4dd3 bytes
    // netio.sys .text:0x16fd0, 0x4dd3 bytes
    //
    _o14(sdk::unknown_ptr) fsb_allocate;
    
    // [FsbAllocateAtDpcLevel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x11a40, 0x4652 bytes
    // netio.sys .text:0x17360, 0x4dd3 bytes
    // netio.sys .text:0x17410, 0x4dd3 bytes
    //
    _o15(sdk::unknown_ptr) fsb_allocate_at_dpc_level;
    
    // [FsbCreatePool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x22900, 0x4652 bytes
    // netio.sys .text:0x25fc0, 0x4dd3 bytes
    // netio.sys .text:0x26050, 0x4dd3 bytes
    //
    _o16(sdk::unknown_ptr) fsb_create_pool;
    
    // [FsbDestroyPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x376c0, 0x4652 bytes
    // netio.sys .text:0x3d990, 0x4dd3 bytes
    // netio.sys .text:0x3d950, 0x4dd3 bytes
    //
    _o17(sdk::unknown_ptr) fsb_destroy_pool;
    
    // [FsbFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x118f0, 0x4652 bytes
    // netio.sys .text:0x16dc0, 0x4dd3 bytes
    // netio.sys .text:0x16e70, 0x4dd3 bytes
    //
    _o18(sdk::unknown_ptr) fsb_free;
    
    // [FsbpAllocateNewPageAndBuildOneBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x11fb8, 0x4652 bytes
    // netio.sys .text:0x171e4, 0x4dd3 bytes
    // netio.sys .text:0x17294, 0x4dd3 bytes
    //
    _o19(sdk::unknown_ptr) fsbp_allocate_new_page_and_build_one_block;
    
    // [FsbpFreeList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x38244, 0x4652 bytes
    // netio.sys .text:0x3da08, 0x4dd3 bytes
    // netio.sys .text:0x3d9c8, 0x4dd3 bytes
    //
    _o20(sdk::unknown_ptr) fsbp_free_list;
    
    // [FsbpScavengePool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x11eb4, 0x4652 bytes
    // netio.sys .text:0x170c8, 0x4dd3 bytes
    // netio.sys .text:0x17178, 0x4dd3 bytes
    //
    _o21(sdk::unknown_ptr) fsbp_scavenge_pool;
    
    // [FsbpScavengeUsedPages]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x11c70, 0x4652 bytes
    // netio.sys .text:0x172b0, 0x4dd3 bytes
    // netio.sys .text:0x17360, 0x4dd3 bytes
    //
    _o22(sdk::unknown_ptr) fsbp_scavenge_used_pages;
    
    // [gBatchUpdates]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x7abc8, 0x4dd3 bytes
    // netio.sys .data:0x7bcf8, 0x4e8c bytes
    // netio.sys .data:0x7abc8, 0x4dd3 bytes
    //
    _o23(sdk::unknown_ptr) g_batch_updates;
    
    // [GetCompartmentIdField]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4b384, 0x4dd3 bytes
    // netio.sys .text:0x4c994, 0x4e8c bytes
    // netio.sys .text:0x4b344, 0x4dd3 bytes
    //
    _o24(sdk::unknown_ptr) get_compartment_id_field;
    
    // [GetDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x435d0, 0x4dd3 bytes
    // netio.sys .text:0x44b70, 0x4e8c bytes
    // netio.sys .text:0x43590, 0x4dd3 bytes
    //
    _o25(sdk::unknown_ptr) get_dns_settings;
    
    // [GetFlowId]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10c94, 0x4dd3 bytes
    // netio.sys .text:0xaf6c, 0x4e8c bytes
    // netio.sys .text:0x10d44, 0x4dd3 bytes
    //
    _o26(sdk::unknown_ptr) get_flow_id;
    
    // [GetIfEntry2Ex]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43f10, 0x4dd3 bytes
    // netio.sys .text:0x45690, 0x4e8c bytes
    // netio.sys .text:0x43ed0, 0x4dd3 bytes
    //
    _o27(sdk::unknown_ptr) get_if_entry2_ex;
    
    // [GetInterfaceCompartmentId]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x287b0, 0x4dd3 bytes
    // netio.sys .text:0x1b350, 0x4e8c bytes
    // netio.sys .text:0x28840, 0x4dd3 bytes
    //
    _o28(sdk::unknown_ptr) get_interface_compartment_id;
    
    // [GetInterfaceDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43710, 0x4dd3 bytes
    // netio.sys .text:0x44cc0, 0x4e8c bytes
    // netio.sys .text:0x436d0, 0x4dd3 bytes
    //
    _o29(sdk::unknown_ptr) get_interface_dns_settings;
    
    // [GetNetworkConnectivityHint]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44ca0, 0x4dd3 bytes
    // netio.sys .text:0x463c0, 0x4e8c bytes
    // netio.sys .text:0x44c60, 0x4dd3 bytes
    //
    _o30(sdk::unknown_ptr) get_network_connectivity_hint;
    
    // [GetNetworkConnectivityHintForInterface]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44cc0, 0x4dd3 bytes
    // netio.sys .text:0x463e0, 0x4e8c bytes
    // netio.sys .text:0x44c80, 0x4dd3 bytes
    //
    _o31(sdk::unknown_ptr) get_network_connectivity_hint_for_interface;
    
    // [GetValueInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10d7c, 0x4dd3 bytes
    // netio.sys .text:0x21230, 0x4e8c bytes
    // netio.sys .text:0x10e2c, 0x4dd3 bytes
    //
    _o32(sdk::unknown_ptr) get_value_info;
    
    // [HvsiK_CloneHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x897d8, 0x4dd3 bytes
    // netio.sys PAGE:0x8ba4c, 0x4e8c bytes
    // netio.sys PAGE:0x897d8, 0x4dd3 bytes
    //
    _o33(sdk::unknown_ptr) hvsi_k_clone_handle;
    
    // [HvsiK_CloseHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x89880, 0x4dd3 bytes
    // netio.sys PAGE:0x8baf4, 0x4e8c bytes
    // netio.sys PAGE:0x89880, 0x4dd3 bytes
    //
    _o34(sdk::unknown_ptr) hvsi_k_close_handle;
    
    // [HvsiK_JoinHandles]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x89914, 0x4dd3 bytes
    // netio.sys PAGE:0x8bb88, 0x4e8c bytes
    // netio.sys PAGE:0x89914, 0x4dd3 bytes
    //
    _o35(sdk::unknown_ptr) hvsi_k_join_handles;
    
    // [hvsikrpc__MIDL_ProcFormatString]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x72cf0, 0x4dd3 bytes
    // netio.sys .rdata:0x73670, 0x4e8c bytes
    // netio.sys .rdata:0x72cf0, 0x4dd3 bytes
    //
    _o36(sdk::unknown_ptr) hvsikrpc_midl_proc_format_string;
    
    // [hvsikrpc__MIDL_TypeFormatString]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x72cc0, 0x4dd3 bytes
    // netio.sys .rdata:0x73640, 0x4e8c bytes
    // netio.sys .rdata:0x72cc0, 0x4dd3 bytes
    //
    _o37(sdk::unknown_ptr) hvsikrpc_midl_type_format_string;
    
    // [HvsipRpcConnect]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x899bc, 0x4dd3 bytes
    // netio.sys PAGE:0x8bc30, 0x4e8c bytes
    // netio.sys PAGE:0x899bc, 0x4dd3 bytes
    //
    _o38(sdk::unknown_ptr) hvsip_rpc_connect;
    
    // [HvsipRpcDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x89b54, 0x4dd3 bytes
    // netio.sys PAGE:0x8bdc8, 0x4e8c bytes
    // netio.sys PAGE:0x89b54, 0x4dd3 bytes
    //
    _o39(sdk::unknown_ptr) hvsip_rpc_disconnect;
    
    // [IHvsiKDns_ProxyInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6c220, 0x4dd3 bytes
    // netio.sys .rdata:0x6c6b0, 0x4e8c bytes
    // netio.sys .rdata:0x6c220, 0x4dd3 bytes
    //
    _o40(sdk::unknown_ptr) i_hvsi_k_dns_proxy_info;
    
    // [IHvsiKDns_StubDesc]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6c0a0, 0x4dd3 bytes
    // netio.sys .rdata:0x6c530, 0x4e8c bytes
    // netio.sys .rdata:0x6c0a0, 0x4dd3 bytes
    //
    _o41(sdk::unknown_ptr) i_hvsi_k_dns_stub_desc;
    
    // [IndexHashEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x549c4, 0x4dd3 bytes
    // netio.sys .text:0x558c8, 0x4e8c bytes
    // netio.sys .text:0x54984, 0x4dd3 bytes
    //
    _o42(sdk::unknown_ptr) index_hash_empty;
    
    // [IndexHashFastEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10834, 0x4dd3 bytes
    // netio.sys .text:0x20b24, 0x4e8c bytes
    // netio.sys .text:0x108e4, 0x4dd3 bytes
    //
    _o43(sdk::unknown_ptr) index_hash_fast_enum;
    
    // [IndexTrieAdd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x54b10, 0x4dd3 bytes
    // netio.sys .text:0x1b4a0, 0x4e8c bytes
    // netio.sys .text:0x54ad0, 0x4dd3 bytes
    //
    _o44(sdk::unknown_ptr) index_trie_add;
    
    // [IndexTrieCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x54dd0, 0x4dd3 bytes
    // netio.sys .text:0x1ad10, 0x4e8c bytes
    // netio.sys .text:0x54d90, 0x4dd3 bytes
    //
    _o45(sdk::unknown_ptr) index_trie_create;
    
    // [IndexTrieDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x54ec0, 0x4dd3 bytes
    // netio.sys .text:0x17a20, 0x4e8c bytes
    // netio.sys .text:0x54e80, 0x4dd3 bytes
    //
    _o46(sdk::unknown_ptr) index_trie_delete;
    
    // [IndexTrieEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x550a0, 0x4dd3 bytes
    // netio.sys .text:0x208b0, 0x4e8c bytes
    // netio.sys .text:0x55060, 0x4dd3 bytes
    //
    _o47(sdk::unknown_ptr) index_trie_enum;
    
    // [IndexTrieFree]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x551f0, 0x4dd3 bytes
    // netio.sys .text:0x17800, 0x4e8c bytes
    // netio.sys .text:0x551b0, 0x4dd3 bytes
    //
    _o48(sdk::unknown_ptr) index_trie_free;
    
    // [IndexTrieGetKeyFromFilterCondition]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5528c, 0x4dd3 bytes
    // netio.sys .text:0x17a38, 0x4e8c bytes
    // netio.sys .text:0x5524c, 0x4dd3 bytes
    //
    _o49(sdk::unknown_ptr) index_trie_get_key_from_filter_condition;
    
    // [InitWorkQueues]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x26564, 0x4dd3 bytes
    // netio.sys .text:0x25118, 0x4e8c bytes
    // netio.sys .text:0x265f4, 0x4dd3 bytes
    //
    _o50(sdk::unknown_ptr) init_work_queues;
    
    // [InitializeAccessPreCheckCache]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22b78, 0x4dd3 bytes
    // netio.sys .text:0x25418, 0x4e8c bytes
    // netio.sys .text:0x22c08, 0x4dd3 bytes
    //
    _o51(sdk::unknown_ptr) initialize_access_pre_check_cache;
    
    // [InsertTerminatingFilterToList]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50cd8, 0x4dd3 bytes
    // netio.sys .text:0x5255c, 0x4e8c bytes
    // netio.sys .text:0x50c98, 0x4dd3 bytes
    //
    _o52(sdk::unknown_ptr) insert_terminating_filter_to_list;
    
    // [InsertUnmatchedInfoToMatchbuf]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52c10, 0x4dd3 bytes
    // netio.sys .text:0x53d84, 0x4e8c bytes
    // netio.sys .text:0x52bd0, 0x4dd3 bytes
    //
    _o53(sdk::unknown_ptr) insert_unmatched_info_to_matchbuf;
    
    // [InterfaceNickTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .rdata:0x57bf0, 0x4652 bytes
    // netio.sys .rdata:0x6c140, 0x4dd3 bytes
    // netio.sys .rdata:0x6c140, 0x4dd3 bytes
    //
    _o54(sdk::unknown_ptr) interface_nick_table;
    
    // [InternalCreateOrRefIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x29300, 0x4dd3 bytes
    // netio.sys .text:0x42850, 0x4e8c bytes
    // netio.sys .text:0x29390, 0x4dd3 bytes
    //
    _o55(sdk::unknown_ptr) internal_create_or_ref_ip_forward_entry2;
    
    // [InternalGetIfEntry2Ex]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e9f0, 0x4dd3 bytes
    // netio.sys .text:0x1bf80, 0x4e8c bytes
    // netio.sys .text:0x1ea80, 0x4dd3 bytes
    //
    _o56(sdk::unknown_ptr) internal_get_if_entry2_ex;
    
    // [InvalidateCache]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e54, 0x4dd3 bytes
    // netio.sys .text:0x1f754, 0x4e8c bytes
    // netio.sys .text:0x4e64, 0x4dd3 bytes
    //
    _o57(sdk::unknown_ptr) invalidate_cache;
    
    // [IsAoAcBitmapWakePatternSupported]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x3ebac, 0x4652 bytes
    // netio.sys .text:0x47e44, 0x4dd3 bytes
    // netio.sys .text:0x47e04, 0x4dd3 bytes
    //
    _o58(sdk::unknown_ptr) is_ao_ac_bitmap_wake_pattern_supported;
    
    // [IsHvsiContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x856e0, 0x4dd3 bytes
    // netio.sys PAGE:0x87694, 0x4e8c bytes
    // netio.sys PAGE:0x856e0, 0x4dd3 bytes
    //
    _o59(sdk::unknown_ptr) is_hvsi_container;
    
    // [IsRunningOnXbox]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45000, 0x4dd3 bytes
    // netio.sys .text:0x46710, 0x4e8c bytes
    // netio.sys .text:0x44fc0, 0x4dd3 bytes
    //
    _o60(sdk::unknown_ptr) is_running_on_xbox;
    
    // [KfdBatchUpdateCompartmentAware]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37dc, 0x4dd3 bytes
    // netio.sys .text:0x1f4f4, 0x4e8c bytes
    // netio.sys .text:0x37dc, 0x4dd3 bytes
    //
    _o61(sdk::unknown_ptr) kfd_batch_update_compartment_aware;
    
    // [KfdFindFilterById]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52830, 0x4dd3 bytes
    // netio.sys .text:0x10280, 0x4e8c bytes
    // netio.sys .text:0x527f0, 0x4dd3 bytes
    //
    _o62(sdk::unknown_ptr) kfd_find_filter_by_id;
    
    // [KfdFreeBatchUpdateContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11b70, 0x4dd3 bytes
    // netio.sys .text:0x1d610, 0x4e8c bytes
    // netio.sys .text:0x11c20, 0x4dd3 bytes
    //
    _o63(sdk::unknown_ptr) kfd_free_batch_update_context;
    
    // [KfdFreeBatchUpdateContextByCompartment]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10e4c, 0x4dd3 bytes
    // netio.sys .text:0x1d66c, 0x4e8c bytes
    // netio.sys .text:0x10efc, 0x4dd3 bytes
    //
    _o64(sdk::unknown_ptr) kfd_free_batch_update_context_by_compartment;
    
    // [KfdGetBatchUpdateContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38f4, 0x4dd3 bytes
    // netio.sys .text:0x1fc08, 0x4e8c bytes
    // netio.sys .text:0x38f4, 0x4dd3 bytes
    //
    _o65(sdk::unknown_ptr) kfd_get_batch_update_context;
    
    // [KfdIsTfoIncompatibleFilterPresent]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fa40, 0x4dd3 bytes
    // netio.sys .text:0x51280, 0x4e8c bytes
    // netio.sys .text:0x4fa00, 0x4dd3 bytes
    //
    _o66(sdk::unknown_ptr) kfd_is_tfo_incompatible_filter_present;
    
    // [KfdIsUroSensitiveLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cf84, 0x4dd3 bytes
    // netio.sys .text:0x18d08, 0x4e8c bytes
    // netio.sys .text:0x1d014, 0x4dd3 bytes
    //
    _o67(sdk::unknown_ptr) kfd_is_uro_sensitive_layer;
    
    // [KfdIsUsoSensitiveLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cfdc, 0x4dd3 bytes
    // netio.sys .text:0x18d60, 0x4e8c bytes
    // netio.sys .text:0x1d06c, 0x4dd3 bytes
    //
    _o68(sdk::unknown_ptr) kfd_is_uso_sensitive_layer;
    
    // [KfdNotifyRscIncompatCalloutDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fb70, 0x4dd3 bytes
    // netio.sys .text:0x513b0, 0x4e8c bytes
    // netio.sys .text:0x4fb30, 0x4dd3 bytes
    //
    _o69(sdk::unknown_ptr) kfd_notify_rsc_incompat_callout_delete;
    
    // [KfdNotifyUroIncompatCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fc74, 0x4dd3 bytes
    // netio.sys .text:0x514b4, 0x4e8c bytes
    // netio.sys .text:0x4fc34, 0x4dd3 bytes
    //
    _o70(sdk::unknown_ptr) kfd_notify_uro_incompat_callout;
    
    // [KfdNotifyUsoIncompatCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fdfc, 0x4dd3 bytes
    // netio.sys .text:0x5163c, 0x4e8c bytes
    // netio.sys .text:0x4fdbc, 0x4dd3 bytes
    //
    _o71(sdk::unknown_ptr) kfd_notify_uso_incompat_callout;
    
    // [KfdRegisterLayerEventNotifyEx]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x284f0, 0x4dd3 bytes
    // netio.sys .text:0x29390, 0x4e8c bytes
    // netio.sys .text:0x28580, 0x4dd3 bytes
    //
    _o72(sdk::unknown_ptr) kfd_register_layer_event_notify_ex;
    
    // [KfdRegisterUroIncompatCalloutNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x27bb0, 0x4dd3 bytes
    // netio.sys .text:0x29220, 0x4e8c bytes
    // netio.sys .text:0x27c40, 0x4dd3 bytes
    //
    _o73(sdk::unknown_ptr) kfd_register_uro_incompat_callout_notify;
    
    // [KfdRegisterUsoIncompatCalloutNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x27af0, 0x4dd3 bytes
    // netio.sys .text:0x29160, 0x4e8c bytes
    // netio.sys .text:0x27b80, 0x4dd3 bytes
    //
    _o74(sdk::unknown_ptr) kfd_register_uso_incompat_callout_notify;
    
    // [KfdReleaseFilterContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50860, 0x4dd3 bytes
    // netio.sys .text:0x12560, 0x4e8c bytes
    // netio.sys .text:0x50820, 0x4dd3 bytes
    //
    _o75(sdk::unknown_ptr) kfd_release_filter_context;
    
    // [KfdReleaseTerminatingFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xfc80, 0x4dd3 bytes
    // netio.sys .text:0xd4d0, 0x4e8c bytes
    // netio.sys .text:0xfd30, 0x4dd3 bytes
    //
    _o76(sdk::unknown_ptr) kfd_release_terminating_filters;
    
    // [MatchComplexCondition]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x4750c, 0x4652 bytes
    // netio.sys .text:0x53774, 0x4dd3 bytes
    // netio.sys .text:0x53734, 0x4dd3 bytes
    //
    _o77(sdk::unknown_ptr) match_complex_condition;
    
    // [McTemplateK0mqbr1qbr3hqqhxhzqq_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x646a8, 0x4dd3 bytes
    // netio.sys .text:0x64190, 0x4e8c bytes
    // netio.sys .text:0x64668, 0x4dd3 bytes
    //
    _o78(sdk::unknown_ptr) mc_template_k0mqbr1qbr3hqqhxhzqq_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkq_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x64834, 0x4dd3 bytes
    // netio.sys .text:0x6431c, 0x4e8c bytes
    // netio.sys .text:0x647f4, 0x4dd3 bytes
    //
    _o79(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkq_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkqqqq_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x64974, 0x4dd3 bytes
    // netio.sys .text:0x6445c, 0x4e8c bytes
    // netio.sys .text:0x64934, 0x4dd3 bytes
    //
    _o80(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkqqqq_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkqqqqqqxxj_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x64af4, 0x4dd3 bytes
    // netio.sys .text:0x645dc, 0x4e8c bytes
    // netio.sys .text:0x64ab4, 0x4dd3 bytes
    //
    _o81(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkqqqqqqxxj_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkqqqqtxhzqqzxz_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x64ce4, 0x4dd3 bytes
    // netio.sys .text:0x647cc, 0x4e8c bytes
    // netio.sys .text:0x64ca4, 0x4dd3 bytes
    //
    _o82(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkqqqqtxhzqqzxz_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkqqqxh_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x64fc8, 0x4dd3 bytes
    // netio.sys .text:0x64ab0, 0x4e8c bytes
    // netio.sys .text:0x64f88, 0x4dd3 bytes
    //
    _o83(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkqqqxh_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkzzqqZRqqZRqqqqqqb20xx_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x65158, 0x4dd3 bytes
    // netio.sys .text:0x64c40, 0x4e8c bytes
    // netio.sys .text:0x65118, 0x4dd3 bytes
    //
    _o84(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkzzqq_z_rqq_z_rqqqqqqb20xx_etw_write_transfer;
    
    // [McTemplateK0mqbr1qbr3qzkzzqqZRqqZRqqqqqqqb20xxj_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x65484, 0x4dd3 bytes
    // netio.sys .text:0x64f6c, 0x4e8c bytes
    // netio.sys .text:0x65444, 0x4dd3 bytes
    //
    _o85(sdk::unknown_ptr) mc_template_k0mqbr1qbr3qzkzzqq_z_rqq_z_rqqqqqqqb20xxj_etw_write_transfer;
    
    // [McTemplateK0qk_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x65844, 0x4dd3 bytes
    // netio.sys .text:0x6532c, 0x4e8c bytes
    // netio.sys .text:0x65804, 0x4dd3 bytes
    //
    _o86(sdk::unknown_ptr) mc_template_k0qk_etw_write_transfer;
    
    // [McTemplateK0qqbr1qbr3q_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x658e0, 0x4dd3 bytes
    // netio.sys .text:0x653c8, 0x4e8c bytes
    // netio.sys .text:0x658a0, 0x4dd3 bytes
    //
    _o87(sdk::unknown_ptr) mc_template_k0qqbr1qbr3q_etw_write_transfer;
    
    // [McTemplateK0qz_EtwWriteTransfer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x65998, 0x4dd3 bytes
    // netio.sys .text:0x65480, 0x4e8c bytes
    // netio.sys .text:0x65958, 0x4dd3 bytes
    //
    _o88(sdk::unknown_ptr) mc_template_k0qz_etw_write_transfer;
    
    // [MicrosoftTelemetryAssertTriggeredArgsKM]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d178, 0x4dd3 bytes
    // netio.sys .text:0x3e72c, 0x4e8c bytes
    // netio.sys .text:0x3d138, 0x4dd3 bytes
    //
    _o89(sdk::function<void(const char*, uint32_t, uint32_t)>*) microsoft_telemetry_assert_triggered_args_km;
    
    // [MiniportSupportsFullAoac]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x3ec5c, 0x4652 bytes
    // netio.sys .text:0x47f0c, 0x4dd3 bytes
    // netio.sys .text:0x47ecc, 0x4dd3 bytes
    //
    _o90(sdk::unknown_ptr) miniport_supports_full_aoac;
    
    // [NcmDereferenceNcContextEventArgsHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1118, 0x4dd3 bytes
    // netio.sys .text:0x1288, 0x4e8c bytes
    // netio.sys .text:0x1118, 0x4dd3 bytes
    //
    _o91(sdk::unknown_ptr) ncm_dereference_nc_context_event_args_helper;
    
    // [NcmGetPolicyValue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x1fe00, 0x4652 bytes
    // netio.sys .text:0x21e74, 0x4dd3 bytes
    // netio.sys .text:0x21f04, 0x4dd3 bytes
    //
    _o92(sdk::unknown_ptr) ncm_get_policy_value;
    
    // [NcmGetSystemReservedSlotCount]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x219f8, 0x4dd3 bytes
    // netio.sys .text:0x23a88, 0x4e8c bytes
    // netio.sys .text:0x21a88, 0x4dd3 bytes
    //
    _o93(sdk::unknown_ptr) ncm_get_system_reserved_slot_count;
    
    // [NcmIsMobileCore]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x1fd90, 0x4652 bytes
    // netio.sys .text:0x21de0, 0x4dd3 bytes
    // netio.sys .text:0x21e70, 0x4dd3 bytes
    //
    _o94(sdk::unknown_ptr) ncm_is_mobile_core;
    
    // [NcmModifyNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45c00, 0x4dd3 bytes
    // netio.sys .text:0x474b8, 0x4e8c bytes
    // netio.sys .text:0x45bc0, 0x4dd3 bytes
    //
    _o95(sdk::unknown_ptr) ncm_modify_notification_channel_context;
    
    // [NetioCheckIfPdcActivationDisabled]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x218a0, 0x4dd3 bytes
    // netio.sys .text:0x23930, 0x4e8c bytes
    // netio.sys .text:0x21930, 0x4dd3 bytes
    //
    _o96(sdk::unknown_ptr) netio_check_if_pdc_activation_disabled;
    
    // [NetioCreateKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45080, 0x4dd3 bytes
    // netio.sys .text:0x46790, 0x4e8c bytes
    // netio.sys .text:0x45040, 0x4dd3 bytes
    //
    _o97(sdk::unknown_ptr) netio_create_key;
    
    // [NetioInitNetworkRegistry]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x221e0, 0x4dd3 bytes
    // netio.sys .text:0x24f10, 0x4e8c bytes
    // netio.sys .text:0x22270, 0x4dd3 bytes
    //
    _o98(sdk::unknown_ptr) netio_init_network_registry;
    
    // [NetioNcmFastCheckAreAoAcPatternsSupported]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x16060, 0x4652 bytes
    // netio.sys .text:0x462d0, 0x4dd3 bytes
    // netio.sys .text:0x46290, 0x4dd3 bytes
    //
    _o99(sdk::unknown_ptr) netio_ncm_fast_check_are_ao_ac_patterns_supported;
    
    // [NetioNcmFastCheckIsMobileCore]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x3dce0, 0x4652 bytes
    // netio.sys .text:0x46300, 0x4dd3 bytes
    // netio.sys .text:0x462c0, 0x4dd3 bytes
    //
    _p00(sdk::unknown_ptr) netio_ncm_fast_check_is_mobile_core;
    
    // [NetioNrtAssociateContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60900, 0x4dd3 bytes
    // netio.sys .text:0x60b10, 0x4e8c bytes
    // netio.sys .text:0x608c0, 0x4dd3 bytes
    //
    _p01(sdk::unknown_ptr) netio_nrt_associate_context;
    
    // [NetioNrtDisassociateContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60cc0, 0x4dd3 bytes
    // netio.sys .text:0x60ed0, 0x4e8c bytes
    // netio.sys .text:0x60c80, 0x4dd3 bytes
    //
    _p02(sdk::unknown_ptr) netio_nrt_disassociate_context;
    
    // [NetioNrtFindAndReferenceRecordByHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60d50, 0x4dd3 bytes
    // netio.sys .text:0x60f60, 0x4e8c bytes
    // netio.sys .text:0x60d10, 0x4dd3 bytes
    //
    _p03(sdk::unknown_ptr) netio_nrt_find_and_reference_record_by_handle;
    
    // [NetioNrtFindAndReferenceRecordById]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60e80, 0x4dd3 bytes
    // netio.sys .text:0x61090, 0x4e8c bytes
    // netio.sys .text:0x60e40, 0x4dd3 bytes
    //
    _p04(sdk::unknown_ptr) netio_nrt_find_and_reference_record_by_id;
    
    // [NetioNrtFindNameResolutionIdForRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x60eec, 0x4dd3 bytes
    // netio.sys .text:0x610fc, 0x4e8c bytes
    // netio.sys .text:0x60eac, 0x4dd3 bytes
    //
    _p05(sdk::unknown_ptr) netio_nrt_find_name_resolution_id_for_record;
    
    // [NetioNrtGetIfIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x611e0, 0x4dd3 bytes
    // netio.sys .text:0x61400, 0x4e8c bytes
    // netio.sys .text:0x611a0, 0x4dd3 bytes
    //
    _p06(sdk::unknown_ptr) netio_nrt_get_if_index;
    
    // [NetioNrtIsPktTaggingEnabled]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x612c0, 0x4dd3 bytes
    // netio.sys .text:0x614e0, 0x4e8c bytes
    // netio.sys .text:0x61280, 0x4dd3 bytes
    //
    _p07(sdk::unknown_ptr) netio_nrt_is_pkt_tagging_enabled;
    
    // [NetioNrtIsProxyInRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x612d0, 0x4dd3 bytes
    // netio.sys .text:0x614f0, 0x4e8c bytes
    // netio.sys .text:0x61290, 0x4dd3 bytes
    //
    _p08(sdk::unknown_ptr) netio_nrt_is_proxy_in_record;
    
    // [NetioNrtJoinRecords]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x61350, 0x4dd3 bytes
    // netio.sys .text:0x61570, 0x4e8c bytes
    // netio.sys .text:0x61310, 0x4dd3 bytes
    //
    _p09(sdk::unknown_ptr) netio_nrt_join_records;
    
    // [NetioNrtWppLogRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x614b0, 0x4dd3 bytes
    // netio.sys .text:0x616d0, 0x4e8c bytes
    // netio.sys .text:0x61470, 0x4dd3 bytes
    //
    _p10(sdk::unknown_ptr) netio_nrt_wpp_log_record;
    
    // [NetioParseAllFieldsFromNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b820, 0x4dd3 bytes
    // netio.sys .text:0x3cb60, 0x4e8c bytes
    // netio.sys .text:0x3b7e0, 0x4dd3 bytes
    //
    _p11(sdk::unknown_ptr) netio_parse_all_fields_from_net_buffer;
    
    // [NetioParseIpFieldsFromNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b990, 0x4dd3 bytes
    // netio.sys .text:0x3ccf0, 0x4e8c bytes
    // netio.sys .text:0x3b950, 0x4dd3 bytes
    //
    _p12(sdk::unknown_ptr) netio_parse_ip_fields_from_net_buffer;
    
    // [NetioParseIpv6NdFields]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3bb50, 0x4dd3 bytes
    // netio.sys .text:0x3cff0, 0x4e8c bytes
    // netio.sys .text:0x3bb10, 0x4dd3 bytes
    //
    _p13(sdk::unknown_ptr) netio_parse_ipv6_nd_fields;
    
    // [NetioPdcActivateNetwork]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x471c0, 0x4dd3 bytes
    // netio.sys .text:0x48a30, 0x4e8c bytes
    // netio.sys .text:0x47180, 0x4dd3 bytes
    //
    _p14(sdk::unknown_ptr) netio_pdc_activate_network;
    
    // [NetioPdcDeactivateNetwork]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47320, 0x4dd3 bytes
    // netio.sys .text:0x48b90, 0x4e8c bytes
    // netio.sys .text:0x472e0, 0x4dd3 bytes
    //
    _p15(sdk::unknown_ptr) netio_pdc_deactivate_network;
    
    // [NetioPdcInitialize]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21af0, 0x4dd3 bytes
    // netio.sys .text:0x23c60, 0x4e8c bytes
    // netio.sys .text:0x21b80, 0x4dd3 bytes
    //
    _p16(sdk::unknown_ptr) netio_pdc_initialize;
    
    // [NetioPhAllocatePacket]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4100, 0x4dd3 bytes
    // netio.sys .text:0x2bf0, 0x4e8c bytes
    // netio.sys .text:0x4100, 0x4dd3 bytes
    //
    _p17(sdk::unknown_ptr) netio_ph_allocate_packet;
    
    // [NetioPhChecksumIpDatagram]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3be80, 0x4dd3 bytes
    // netio.sys .text:0x3d370, 0x4e8c bytes
    // netio.sys .text:0x3be40, 0x4dd3 bytes
    //
    _p18(sdk::unknown_ptr) netio_ph_checksum_ip_datagram;
    
    // [NetioPhChecksumIpDatagramWithInitialChecksum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b3e0, 0x4dd3 bytes
    // netio.sys .text:0x11990, 0x4e8c bytes
    // netio.sys .text:0x1b470, 0x4dd3 bytes
    //
    _p19(sdk::unknown_ptr) netio_ph_checksum_ip_datagram_with_initial_checksum;
    
    // [NetioPhComputePseudoHeaderChecksum]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19f90, 0x4dd3 bytes
    // netio.sys .text:0x12060, 0x4e8c bytes
    // netio.sys .text:0x1a020, 0x4dd3 bytes
    //
    _p20(sdk::unknown_ptr) netio_ph_compute_pseudo_header_checksum;
    
    // [NetioPhCreateArpPacket]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fe0, 0x4dd3 bytes
    // netio.sys .text:0x2ae0, 0x4e8c bytes
    // netio.sys .text:0x3fe0, 0x4dd3 bytes
    //
    _p21(sdk::unknown_ptr) netio_ph_create_arp_packet;
    
    // [NetioPhCreateFullNaPacket]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c0d0, 0x4dd3 bytes
    // netio.sys .text:0x3d5c0, 0x4e8c bytes
    // netio.sys .text:0x3c090, 0x4dd3 bytes
    //
    _p22(sdk::unknown_ptr) netio_ph_create_full_na_packet;
    
    // [NetioPhCreateNaPacket]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f360, 0x4dd3 bytes
    // netio.sys .text:0x2530, 0x4e8c bytes
    // netio.sys .text:0x1f3f0, 0x4dd3 bytes
    //
    _p23(sdk::unknown_ptr) netio_ph_create_na_packet;
    
    // [NetioPhGetAddressFamily]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c3f0, 0x4dd3 bytes
    // netio.sys .text:0x3d8e0, 0x4e8c bytes
    // netio.sys .text:0x3c3b0, 0x4dd3 bytes
    //
    _p24(sdk::unknown_ptr) netio_ph_get_address_family;
    
    // [NetioPhGetDefaultIpHeaderSize]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c430, 0x4dd3 bytes
    // netio.sys .text:0x3d920, 0x4e8c bytes
    // netio.sys .text:0x3c3f0, 0x4dd3 bytes
    //
    _p25(sdk::unknown_ptr) netio_ph_get_default_ip_header_size;
    
    // [NetioPhGetIpHeader]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c470, 0x4dd3 bytes
    // netio.sys .text:0x3d960, 0x4e8c bytes
    // netio.sys .text:0x3c430, 0x4dd3 bytes
    //
    _p26(sdk::unknown_ptr) netio_ph_get_ip_header;
    
    // [NetioPhGetIpUlProtocol]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c530, 0x4dd3 bytes
    // netio.sys .text:0x3da20, 0x4e8c bytes
    // netio.sys .text:0x3c4f0, 0x4dd3 bytes
    //
    _p27(sdk::unknown_ptr) netio_ph_get_ip_ul_protocol;
    
    // [NetioPhGetNdLinkLayerOptionAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ad70, 0x4dd3 bytes
    // netio.sys .text:0x13570, 0x4e8c bytes
    // netio.sys .text:0x1ae00, 0x4dd3 bytes
    //
    _p28(sdk::unknown_ptr) netio_ph_get_nd_link_layer_option_address;
    
    // [NetioPhGetNdLinkLayerOptionAddressContiguous]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c5f0, 0x4dd3 bytes
    // netio.sys .text:0x3dae0, 0x4e8c bytes
    // netio.sys .text:0x3c5b0, 0x4dd3 bytes
    //
    _p29(sdk::unknown_ptr) netio_ph_get_nd_link_layer_option_address_contiguous;
    
    // [NetioPhGetTransportHeaderSize]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c6a0, 0x4dd3 bytes
    // netio.sys .text:0x3db90, 0x4e8c bytes
    // netio.sys .text:0x3c660, 0x4dd3 bytes
    //
    _p30(sdk::unknown_ptr) netio_ph_get_transport_header_size;
    
    // [NetioPhIsIcmpErrorForIcmpMessage]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c700, 0x4dd3 bytes
    // netio.sys .text:0x3dbf0, 0x4e8c bytes
    // netio.sys .text:0x3c6c0, 0x4dd3 bytes
    //
    _p31(sdk::unknown_ptr) netio_ph_is_icmp_error_for_icmp_message;
    
    // [NetioPhParseIpv6TlvNdOption]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bfa0, 0x4dd3 bytes
    // netio.sys .text:0x13850, 0x4e8c bytes
    // netio.sys .text:0x1c030, 0x4dd3 bytes
    //
    _p32(sdk::unknown_ptr) netio_ph_parse_ipv6_tlv_nd_option;
    
    // [NetioPhSkipAllIpv6Options]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c850, 0x4dd3 bytes
    // netio.sys .text:0x3dd40, 0x4e8c bytes
    // netio.sys .text:0x3c810, 0x4dd3 bytes
    //
    _p33(sdk::unknown_ptr) netio_ph_skip_all_ipv6_options;
    
    // [NetioPhSkipAllIpv6OptionsContiguous]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c920, 0x4dd3 bytes
    // netio.sys .text:0x3de10, 0x4e8c bytes
    // netio.sys .text:0x3c8e0, 0x4dd3 bytes
    //
    _p34(sdk::unknown_ptr) netio_ph_skip_all_ipv6_options_contiguous;
    
    // [NetioPhSkipToTransportHeader]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c9d0, 0x4dd3 bytes
    // netio.sys .text:0x3deb0, 0x4e8c bytes
    // netio.sys .text:0x3c990, 0x4dd3 bytes
    //
    _p35(sdk::unknown_ptr) netio_ph_skip_to_transport_header;
    
    // [NetioPhSkipToTransportHeaderContiguous]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cb20, 0x4dd3 bytes
    // netio.sys .text:0x3e000, 0x4e8c bytes
    // netio.sys .text:0x3cae0, 0x4dd3 bytes
    //
    _p36(sdk::unknown_ptr) netio_ph_skip_to_transport_header_contiguous;
    
    // [NotifyNetworkConnectivityHintChange]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44ce0, 0x4dd3 bytes
    // netio.sys .text:0x46400, 0x4e8c bytes
    // netio.sys .text:0x44ca0, 0x4dd3 bytes
    //
    _p37(sdk::unknown_ptr) notify_network_connectivity_hint_change;
    
    // [NrtAssignNameResolutionIdUnderLock]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6177c, 0x4dd3 bytes
    // netio.sys .text:0x619a0, 0x4e8c bytes
    // netio.sys .text:0x6173c, 0x4dd3 bytes
    //
    _p38(sdk::unknown_ptr) nrt_assign_name_resolution_id_under_lock;
    
    // [NrtCheckHvsiContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21a98, 0x4dd3 bytes
    // netio.sys .text:0x23c08, 0x4e8c bytes
    // netio.sys .text:0x21b28, 0x4dd3 bytes
    //
    _p39(sdk::unknown_ptr) nrt_check_hvsi_container;
    
    // [NrtCloneHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6303c, 0x4dd3 bytes
    // netio.sys .text:0x6322c, 0x4e8c bytes
    // netio.sys .text:0x62ffc, 0x4dd3 bytes
    //
    _p40(sdk::unknown_ptr) nrt_clone_handler;
    
    // [NrtCloneRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x618e8, 0x4dd3 bytes
    // netio.sys .text:0x61b10, 0x4e8c bytes
    // netio.sys .text:0x618a8, 0x4dd3 bytes
    //
    _p41(sdk::unknown_ptr) nrt_clone_record;
    
    // [NrtClose]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63184, 0x4dd3 bytes
    // netio.sys .text:0x63374, 0x4e8c bytes
    // netio.sys .text:0x63144, 0x4dd3 bytes
    //
    _p42(sdk::unknown_ptr) nrt_close;
    
    // [NrtConvertFlatStringBufferToArray]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x61c6c, 0x4dd3 bytes
    // netio.sys .text:0x61e88, 0x4e8c bytes
    // netio.sys .text:0x61c2c, 0x4dd3 bytes
    //
    _p43(sdk::unknown_ptr) nrt_convert_flat_string_buffer_to_array;
    
    // [NrtCreateHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63328, 0x4dd3 bytes
    // netio.sys .text:0x63510, 0x4e8c bytes
    // netio.sys .text:0x632e8, 0x4dd3 bytes
    //
    _p44(sdk::unknown_ptr) nrt_create_handler;
    
    // [NrtDeviceIoControl]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63624, 0x4dd3 bytes
    // netio.sys .text:0x6380c, 0x4e8c bytes
    // netio.sys .text:0x635e4, 0x4dd3 bytes
    //
    _p45(sdk::unknown_ptr) nrt_device_io_control;
    
    // [NrtFindAndReferenceRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62254, 0x4dd3 bytes
    // netio.sys .text:0x62450, 0x4e8c bytes
    // netio.sys .text:0x62214, 0x4dd3 bytes
    //
    _p46(sdk::unknown_ptr) nrt_find_and_reference_record;
    
    // [NrtFindRecordByIdUnderLock]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62320, 0x4dd3 bytes
    // netio.sys .text:0x6251c, 0x4e8c bytes
    // netio.sys .text:0x622e0, 0x4dd3 bytes
    //
    _p47(sdk::unknown_ptr) nrt_find_record_by_id_under_lock;
    
    // [NrtHandleProxyLiterals]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62514, 0x4dd3 bytes
    // netio.sys .text:0x62710, 0x4e8c bytes
    // netio.sys .text:0x624d4, 0x4dd3 bytes
    //
    _p48(sdk::unknown_ptr) nrt_handle_proxy_literals;
    
    // [NrtIsHvsiContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x7acc0, 0x4dd3 bytes
    // netio.sys .data:0x7bd70, 0x4e8c bytes
    // netio.sys .data:0x7acc0, 0x4dd3 bytes
    //
    _p49(sdk::unknown_ptr) nrt_is_hvsi_container;
    
    // [NrtIsHvsiContainerOverride]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21818, 0x4dd3 bytes
    // netio.sys .text:0x238ac, 0x4e8c bytes
    // netio.sys .text:0x218a8, 0x4dd3 bytes
    //
    _p50(sdk::unknown_ptr) nrt_is_hvsi_container_override;
    
    // [NrtNotifyHvsi]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x626a4, 0x4dd3 bytes
    // netio.sys .text:0x628a4, 0x4e8c bytes
    // netio.sys .text:0x62664, 0x4dd3 bytes
    //
    _p51(sdk::unknown_ptr) nrt_notify_hvsi;
    
    // [NrtNotifyHvsiWorker]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62840, 0x4dd3 bytes
    // netio.sys .text:0x62a30, 0x4e8c bytes
    // netio.sys .text:0x62800, 0x4dd3 bytes
    //
    _p52(sdk::unknown_ptr) nrt_notify_hvsi_worker;
    
    // [NrtPopulateIpAddressRecords]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62918, 0x4dd3 bytes
    // netio.sys .text:0x62b08, 0x4e8c bytes
    // netio.sys .text:0x628d8, 0x4dd3 bytes
    //
    _p53(sdk::unknown_ptr) nrt_populate_ip_address_records;
    
    // [NrtRngHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x7af20, 0x4dd3 bytes
    // netio.sys .data:0x7bdc8, 0x4e8c bytes
    // netio.sys .data:0x7af20, 0x4dd3 bytes
    //
    _p54(sdk::unknown_ptr) nrt_rng_handle;
    
    // [NsiDefaultPersistentStoreRootKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6ce50, 0x4dd3 bytes
    // netio.sys .rdata:0x6ca30, 0x4e8c bytes
    // netio.sys .rdata:0x6ce50, 0x4dd3 bytes
    //
    _p55(sdk::unknown_ptr) nsi_default_persistent_store_root_key;
    
    // [NsipNmpInitializeObjectSecurity]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x25334, 0x4dd3 bytes
    // netio.sys .text:0x22bb4, 0x4e8c bytes
    // netio.sys .text:0x253c4, 0x4dd3 bytes
    //
    _p56(sdk::unknown_ptr) nsip_nmp_initialize_object_security;
    
    // [NsipRpcAcquireHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x1aea0, 0x4652 bytes
    // netio.sys .text:0x1bc44, 0x4dd3 bytes
    // netio.sys .text:0x1bcd4, 0x4dd3 bytes
    //
    _p57(sdk::unknown_ptr) nsip_rpc_acquire_handle;
    
    // [NsipRpcReconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49c94, 0x4dd3 bytes
    // netio.sys .text:0x4b264, 0x4e8c bytes
    // netio.sys .text:0x49c54, 0x4dd3 bytes
    //
    _p58(sdk::unknown_ptr) nsip_rpc_reconnect;
    
    // [NsipUninitializeContainerInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4afdc, 0x4dd3 bytes
    // netio.sys .text:0x4c5ec, 0x4e8c bytes
    // netio.sys .text:0x4af9c, 0x4dd3 bytes
    //
    _p59(sdk::unknown_ptr) nsip_uninitialize_container_info;
    
    // [PdcpResizeDiagnosticContext]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63a20, 0x4dd3 bytes
    // netio.sys .text:0x63c24, 0x4e8c bytes
    // netio.sys .text:0x639e0, 0x4dd3 bytes
    //
    _p60(sdk::unknown_ptr) pdcp_resize_diagnostic_context;
    
    // [Pdcv2ActivationClientActivate]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x876d4, 0x4dd3 bytes
    // netio.sys PAGE:0x89954, 0x4e8c bytes
    // netio.sys PAGE:0x876d4, 0x4dd3 bytes
    //
    _p61(sdk::unknown_ptr) pdcv2_activation_client_activate;
    
    // [Pdcv2ActivationClientDeactivate]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x87970, 0x4dd3 bytes
    // netio.sys PAGE:0x89bec, 0x4e8c bytes
    // netio.sys PAGE:0x87970, 0x4dd3 bytes
    //
    _p62(sdk::unknown_ptr) pdcv2_activation_client_deactivate;
    
    // [Pdcv2ActivationClientUnregister]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x87aa8, 0x4dd3 bytes
    // netio.sys PAGE:0x89d24, 0x4e8c bytes
    // netio.sys PAGE:0x87aa8, 0x4dd3 bytes
    //
    _p63(sdk::unknown_ptr) pdcv2_activation_client_unregister;
    
    // [Pdcv2pValidateActivationParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x87ca8, 0x4dd3 bytes
    // netio.sys PAGE:0x89f28, 0x4e8c bytes
    // netio.sys PAGE:0x87ca8, 0x4dd3 bytes
    //
    _p64(sdk::unknown_ptr) pdcv2p_validate_activation_parameters;
    
    // [Pdcv2pValidateExtraActivationParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x63a60, 0x4dd3 bytes
    // netio.sys .text:0x63c64, 0x4e8c bytes
    // netio.sys .text:0x63a20, 0x4dd3 bytes
    //
    _p65(sdk::unknown_ptr) pdcv2p_validate_extra_activation_parameters;
    
    // [reinstate_HF_handle]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e000, 0x4dd3 bytes
    // netio.sys .text:0x3f4c4, 0x4e8c bytes
    // netio.sys .text:0x3dfc0, 0x4dd3 bytes
    //
    _p66(sdk::unknown_ptr) reinstate_hf_handle;
    
    // [SetDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x438f0, 0x4dd3 bytes
    // netio.sys .text:0x44f50, 0x4e8c bytes
    // netio.sys .text:0x438b0, 0x4dd3 bytes
    //
    _p67(sdk::unknown_ptr) set_dns_settings;
    
    // [SetInterfaceDnsSettings]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43a20, 0x4dd3 bytes
    // netio.sys .text:0x450b0, 0x4e8c bytes
    // netio.sys .text:0x439e0, 0x4dd3 bytes
    //
    _p68(sdk::unknown_ptr) set_interface_dns_settings;
    
    // [TrieConvertIpv6MaskNumToMaskBits]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5580c, 0x4dd3 bytes
    // netio.sys .text:0x1b4e8, 0x4e8c bytes
    // netio.sys .text:0x557cc, 0x4dd3 bytes
    //
    _p69(sdk::unknown_ptr) trie_convert_ipv6_mask_num_to_mask_bits;
    
    // [WFP_IKEEXT_MM_FAILURE_V1_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71550, 0x4dd3 bytes
    // netio.sys .rdata:0x71ee8, 0x4e8c bytes
    // netio.sys .rdata:0x71550, 0x4dd3 bytes
    //
    _p70(sdk::unknown_ptr) wfp_ikeext_mm_failure_v1_event;
    
    // [WFP_IKEEXT_QM_FAILURE_V1_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71580, 0x4dd3 bytes
    // netio.sys .rdata:0x71f18, 0x4e8c bytes
    // netio.sys .rdata:0x71580, 0x4dd3 bytes
    //
    _p71(sdk::unknown_ptr) wfp_ikeext_qm_failure_v1_event;
    
    // [WfpInitFastRWLockModule]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x233c0, 0x4dd3 bytes
    // netio.sys .text:0x26288, 0x4e8c bytes
    // netio.sys .text:0x23450, 0x4dd3 bytes
    //
    _p72(sdk::unknown_ptr) wfp_init_fast_rw_lock_module;
    
    // [WFP_IPSEC_LPM_PACKET_ARRIVAL_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71530, 0x4dd3 bytes
    // netio.sys .rdata:0x71ec8, 0x4e8c bytes
    // netio.sys .rdata:0x71530, 0x4dd3 bytes
    //
    _p73(sdk::unknown_ptr) wfp_ipsec_lpm_packet_arrival_event;
    
    // [WfpNblInfoLibraryShutdown]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5f974, 0x4dd3 bytes
    // netio.sys .text:0x5f3a4, 0x4e8c bytes
    // netio.sys .text:0x5f934, 0x4dd3 bytes
    //
    _p74(sdk::unknown_ptr) wfp_nbl_info_library_shutdown;
    
    // [WPP_1716848385423e04c786c66240c7f9ee_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x72658, 0x4dd3 bytes
    // netio.sys .rdata:0x73000, 0x4e8c bytes
    // netio.sys .rdata:0x72658, 0x4dd3 bytes
    //
    _p75(sdk::unknown_ptr) wpp_1716848385423e04c786c66240c7f9ee_traceguids;
    
    // [WPP_2117715bc64139be8f5a086042a30ce6_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x729f8, 0x4dd3 bytes
    // netio.sys .rdata:0x73378, 0x4e8c bytes
    // netio.sys .rdata:0x729f8, 0x4dd3 bytes
    //
    _p76(sdk::unknown_ptr) wpp_2117715bc64139be8f5a086042a30ce6_traceguids;
    
    // [WPP_228a9c240b8235d60dc95ef680ff25d9_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x72a08, 0x4dd3 bytes
    // netio.sys .rdata:0x73388, 0x4e8c bytes
    // netio.sys .rdata:0x72a08, 0x4dd3 bytes
    //
    _p77(sdk::unknown_ptr) wpp_228a9c240b8235d60dc95ef680ff25d9_traceguids;
    
    // [WPP_2dd034a09e063f80497298d28feb8057_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71520, 0x4dd3 bytes
    // netio.sys .rdata:0x71eb8, 0x4e8c bytes
    // netio.sys .rdata:0x71520, 0x4dd3 bytes
    //
    _p78(sdk::unknown_ptr) wpp_2dd034a09e063f80497298d28feb8057_traceguids;
    
    // [WPP_3a9bf3276c73353fbdf6482afde03eb6_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6d928, 0x4dd3 bytes
    // netio.sys .rdata:0x6de48, 0x4e8c bytes
    // netio.sys .rdata:0x6d928, 0x4dd3 bytes
    //
    _p79(sdk::unknown_ptr) wpp_3a9bf3276c73353fbdf6482afde03eb6_traceguids;
    
    // [WPP_60ff3558fd77341dbc1b4c23ea075221_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x6d758, 0x4dd3 bytes
    // netio.sys .rdata:0x6dca8, 0x4e8c bytes
    // netio.sys .rdata:0x6d758, 0x4dd3 bytes
    //
    _p80(sdk::unknown_ptr) wpp_60ff3558fd77341dbc1b4c23ea075221_traceguids;
    
    // [WPP_96e5f86652cc3e4d3988e25c57f305f5_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71170, 0x4dd3 bytes
    // netio.sys .rdata:0x71ae8, 0x4e8c bytes
    // netio.sys .rdata:0x71170, 0x4dd3 bytes
    //
    _p81(sdk::unknown_ptr) wpp_96e5f86652cc3e4d3988e25c57f305f5_traceguids;
    
    // [WPP_9bead0a5ff0231214eb4a33e05b22688_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x71358, 0x4dd3 bytes
    // netio.sys .rdata:0x71cf0, 0x4e8c bytes
    // netio.sys .rdata:0x71358, 0x4dd3 bytes
    //
    _p82(sdk::unknown_ptr) wpp_9bead0a5ff0231214eb4a33e05b22688_traceguids;
    
    // [WPP_a75696c836513fa9b9d5e9b96d682e86_Traceguids]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x72688, 0x4dd3 bytes
    // netio.sys .rdata:0x73048, 0x4e8c bytes
    // netio.sys .rdata:0x72688, 0x4dd3 bytes
    //
    _p83(sdk::unknown_ptr) wpp_a75696c836513fa9b9d5e9b96d682e86_traceguids;
    
    // [WPP_SF_DDqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5ab04, 0x4dd3 bytes
    // netio.sys .text:0x5a2a0, 0x4e8c bytes
    // netio.sys .text:0x5aac4, 0x4dd3 bytes
    //
    _p84(sdk::unknown_ptr) wpp_sf_d_dq_lq;
    
    // [WPP_SF_DDqLqd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5ab88, 0x4dd3 bytes
    // netio.sys .text:0x5a324, 0x4e8c bytes
    // netio.sys .text:0x5ab48, 0x4dd3 bytes
    //
    _p85(sdk::unknown_ptr) wpp_sf_d_dq_lqd;
    
    // [WPP_SF_dIDHq]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x53fd8, 0x4dd3 bytes
    // netio.sys .text:0x54b78, 0x4e8c bytes
    // netio.sys .text:0x53f98, 0x4dd3 bytes
    //
    _p86(sdk::unknown_ptr) wpp_sf_d_id_hq;
    
    // [WPP_SF_ddd_FWP_BYTE_BLOB_]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51f04, 0x4dd3 bytes
    // netio.sys .text:0x534a8, 0x4e8c bytes
    // netio.sys .text:0x51ec4, 0x4dd3 bytes
    //
    _p87(sdk::unknown_ptr) wpp_sf_ddd_fwp_byte_blob_;
    
    // [WPP_SF_dddddd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x475c8, 0x4dd3 bytes
    // netio.sys .text:0x48e24, 0x4e8c bytes
    // netio.sys .text:0x47588, 0x4dd3 bytes
    //
    _p88(sdk::unknown_ptr) wpp_sf_dddddd;
    
    // [WPP_SF_DiDqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5ac1c, 0x4dd3 bytes
    // netio.sys .text:0x5a3b8, 0x4e8c bytes
    // netio.sys .text:0x5abdc, 0x4dd3 bytes
    //
    _p89(sdk::unknown_ptr) wpp_sf_di_dq_lq;
    
    // [WPP_SF_Dqd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4be28, 0x4dd3 bytes
    // netio.sys .text:0x4d324, 0x4e8c bytes
    // netio.sys .text:0x4bde8, 0x4dd3 bytes
    //
    _p90(sdk::unknown_ptr) wpp_sf_dqd;
    
    // [WPP_SF_hDDHH_FWP_BYTE_BLOB__sid_DDDIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x51184, 0x4652 bytes
    // netio.sys .text:0x602c0, 0x4dd3 bytes
    // netio.sys .text:0x60280, 0x4dd3 bytes
    //
    _p91(sdk::unknown_ptr) wpp_sf_h_ddhh_fwp_byte_blob_sid_dddih;
    
    // [WPP_SF_h_IPV6__IPV6_HHL_FWP_BYTE_BLOB__sid_DDDIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x51478, 0x4652 bytes
    // netio.sys .text:0x605c8, 0x4dd3 bytes
    // netio.sys .text:0x60588, 0x4dd3 bytes
    //
    _p92(sdk::unknown_ptr) wpp_sf_h_ipv6_ipv6_hhl_fwp_byte_blob_sid_dddih;
    
    // [WPP_SF_iDqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5b57c, 0x4dd3 bytes
    // netio.sys .text:0x5ad18, 0x4e8c bytes
    // netio.sys .text:0x5b53c, 0x4dd3 bytes
    //
    _p93(sdk::unknown_ptr) wpp_sf_i_dq_lq;
    
    // [WPP_SF_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62bf4, 0x4dd3 bytes
    // netio.sys .text:0x62de4, 0x4e8c bytes
    // netio.sys .text:0x62bb4, 0x4dd3 bytes
    //
    _p94(sdk::unknown_ptr) wpp_sf_id;
    
    // [WPP_SF_IID]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62c54, 0x4dd3 bytes
    // netio.sys .text:0x62e44, 0x4e8c bytes
    // netio.sys .text:0x62c14, 0x4dd3 bytes
    //
    _p95(sdk::unknown_ptr) wpp_sf_iid;
    
    // [WPP_SF__IPV6_]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x55930, 0x4dd3 bytes
    // netio.sys .text:0x55a78, 0x4e8c bytes
    // netio.sys .text:0x558f0, 0x4dd3 bytes
    //
    _p96(sdk::unknown_ptr) wpp_sf_ipv6_;
    
    // [WPP_SF_qI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62d04, 0x4dd3 bytes
    // netio.sys .text:0x62ef4, 0x4e8c bytes
    // netio.sys .text:0x62cc4, 0x4dd3 bytes
    //
    _p97(sdk::unknown_ptr) wpp_sf_q_i;
    
    // [WPP_SF_qIqI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62d5c, 0x4dd3 bytes
    // netio.sys .text:0x62f4c, 0x4e8c bytes
    // netio.sys .text:0x62d1c, 0x4dd3 bytes
    //
    _p98(sdk::unknown_ptr) wpp_sf_q_iq_i;
    
    // [WPP_SF_qdqdddd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47760, 0x4dd3 bytes
    // netio.sys .text:0x48fbc, 0x4e8c bytes
    // netio.sys .text:0x47720, 0x4dd3 bytes
    //
    _p99(sdk::unknown_ptr) wpp_sf_qdqdddd;
    
    // [WPP_SF_qdqqDS]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x62dcc, 0x4dd3 bytes
    // netio.sys .text:0x62fbc, 0x4e8c bytes
    // netio.sys .text:0x62d8c, 0x4dd3 bytes
    //
    _q00(sdk::unknown_ptr) wpp_sf_qdqq_ds;
    
    // [WPP_SF_sDDI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5224c, 0x4dd3 bytes
    // netio.sys .text:0x5372c, 0x4e8c bytes
    // netio.sys .text:0x5220c, 0x4dd3 bytes
    //
    _q01(sdk::unknown_ptr) wpp_sf_s_ddi;
    
    // [WPP_SF_s_guid_ddD]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49e54, 0x4dd3 bytes
    // netio.sys .text:0x4b424, 0x4e8c bytes
    // netio.sys .text:0x49e14, 0x4dd3 bytes
    //
    _q02(sdk::unknown_ptr) wpp_sf_s_guid_dd_d;
    
    // [WPP_SF_s_guid_ddddd]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49f20, 0x4dd3 bytes
    // netio.sys .text:0x4b4f0, 0x4e8c bytes
    // netio.sys .text:0x49ee0, 0x4dd3 bytes
    //
    _q03(sdk::unknown_ptr) wpp_sf_s_guid_ddddd;
    
    // [WPP_SF_sqDDlI]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52334, 0x4dd3 bytes
    // netio.sys .text:0x53844, 0x4e8c bytes
    // netio.sys .text:0x522f4, 0x4dd3 bytes
    //
    _q04(sdk::unknown_ptr) wpp_sf_sq_d_dl_i;
    
    // [accessTokenSize]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61450, 0x4652 bytes
    // netio.sys .data:0x7a4cc, 0x4dd3 bytes
    // netio.sys .data:0x7b56c, 0x4e8c bytes
    // netio.sys .data:0x7a4cc, 0x4dd3 bytes
    //
    _q05(sdk::unknown_ptr) access_token_size;
    
    // [AcquireWriteLockForLayerChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24178, 0x4652 bytes
    // netio.sys .text:0x28648, 0x4dd3 bytes
    // netio.sys .text:0x294e4, 0x4e8c bytes
    // netio.sys .text:0x286d8, 0x4dd3 bytes
    //
    _q06(sdk::unknown_ptr) acquire_write_lock_for_layer_change;
    
    // [AddFilterToIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e58, 0x4652 bytes
    // netio.sys .text:0x34a4, 0x4dd3 bytes
    // netio.sys .text:0x1f074, 0x4e8c bytes
    // netio.sys .text:0x34a4, 0x4dd3 bytes
    //
    _q07(sdk::unknown_ptr) add_filter_to_index;
    
    // [AddIndexToLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2648, 0x4652 bytes
    // netio.sys .text:0x248fc, 0x4dd3 bytes
    // netio.sys .text:0x192bc, 0x4e8c bytes
    // netio.sys .text:0x2498c, 0x4dd3 bytes
    //
    _q08(sdk::unknown_ptr) add_index_to_layer;
    
    // [AdjustMatchBuf]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22380, 0x4652 bytes
    // netio.sys .text:0x50bbc, 0x4dd3 bytes
    // netio.sys .text:0x19760, 0x4e8c bytes
    // netio.sys .text:0x50b7c, 0x4dd3 bytes
    //
    _q09(sdk::unknown_ptr) adjust_match_buf;
    
    // [AgileVPNDispatchTableInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f0c0, 0x4652 bytes
    // netio.sys .text:0x5db00, 0x4dd3 bytes
    // netio.sys .text:0x5d1d0, 0x4e8c bytes
    // netio.sys .text:0x5dac0, 0x4dd3 bytes
    //
    _q10(sdk::unknown_ptr) agile_vpn_dispatch_table_init;
    
    // [AgileVPNFindCompartmentIdFromTunnelId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f0e0, 0x4652 bytes
    // netio.sys .text:0x5db20, 0x4dd3 bytes
    // netio.sys .text:0x5d1f0, 0x4e8c bytes
    // netio.sys .text:0x5dae0, 0x4dd3 bytes
    //
    _q11(sdk::unknown_ptr) agile_vpn_find_compartment_id_from_tunnel_id;
    
    // [AgileVPNFindTunnelInfoFromInterfaceIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f120, 0x4652 bytes
    // netio.sys .text:0x5db70, 0x4dd3 bytes
    // netio.sys .text:0x5d240, 0x4e8c bytes
    // netio.sys .text:0x5db30, 0x4dd3 bytes
    //
    _q12(sdk::unknown_ptr) agile_vpn_find_tunnel_info_from_interface_index;
    
    // [ArbitrateAndEnforce]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xcb40, 0x4652 bytes
    // netio.sys .text:0x8e20, 0x4dd3 bytes
    // netio.sys .text:0x7bd0, 0x4e8c bytes
    // netio.sys .text:0x8ed0, 0x4dd3 bytes
    //
    _q13(sdk::unknown_ptr) arbitrate_and_enforce;
    
    // [ArbitrateSlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22288, 0x4652 bytes
    // netio.sys .text:0x54790, 0x4dd3 bytes
    // netio.sys .text:0x19654, 0x4e8c bytes
    // netio.sys .text:0x54750, 0x4dd3 bytes
    //
    _q14(sdk::unknown_ptr) arbitrate_slow;
    
    // [assign_HF_handle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1eab0, 0x4652 bytes
    // netio.sys .text:0x256c4, 0x4dd3 bytes
    // netio.sys .text:0x230a4, 0x4e8c bytes
    // netio.sys .text:0x25754, 0x4dd3 bytes
    //
    _q15(sdk::unknown_ptr) assign_hf_handle;
    
    // [AttachQoSProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cfa0, 0x4652 bytes
    // netio.sys .text:0x28960, 0x4dd3 bytes
    // netio.sys .text:0x23b20, 0x4e8c bytes
    // netio.sys .text:0x289f0, 0x4dd3 bytes
    //
    _q16(sdk::unknown_ptr) attach_qo_s_provider;
    
    // [BfeArrayValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48274, 0x4652 bytes
    // netio.sys .text:0x545d8, 0x4dd3 bytes
    // netio.sys .text:0x54ed0, 0x4e8c bytes
    // netio.sys .text:0x54598, 0x4dd3 bytes
    //
    _q17(sdk::unknown_ptr) bfe_array_validate;
    
    // [BfeEventDataPush]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14d74, 0x4652 bytes
    // netio.sys .text:0x11a18, 0x4dd3 bytes
    // netio.sys .text:0xe8c8, 0x4e8c bytes
    // netio.sys .text:0x11ac8, 0x4dd3 bytes
    //
    _q18(sdk::unknown_ptr) bfe_event_data_push;
    
    // [BfeEventDataPushSid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x144d8, 0x4652 bytes
    // netio.sys .text:0x12c10, 0x4dd3 bytes
    // netio.sys .text:0xecbc, 0x4e8c bytes
    // netio.sys .text:0x12cc0, 0x4dd3 bytes
    //
    _q19(sdk::unknown_ptr) bfe_event_data_push_sid;
    
    // [BfeEventDataPushStrArray]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50c48, 0x4652 bytes
    // netio.sys .text:0x5faf8, 0x4dd3 bytes
    // netio.sys .text:0x5f518, 0x4e8c bytes
    // netio.sys .text:0x5fab8, 0x4dd3 bytes
    //
    _q20(sdk::unknown_ptr) bfe_event_data_push_str_array;
    
    // [BfeEventProviderCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f4f4, 0x4652 bytes
    // netio.sys .text:0x23504, 0x4dd3 bytes
    // netio.sys .text:0x28f8c, 0x4e8c bytes
    // netio.sys .text:0x23594, 0x4dd3 bytes
    //
    _q21(sdk::unknown_ptr) bfe_event_provider_create;
    
    // [BfeEventProviderDestroy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50cc0, 0x4652 bytes
    // netio.sys .text:0x5fb7c, 0x4dd3 bytes
    // netio.sys .text:0x5f59c, 0x4e8c bytes
    // netio.sys .text:0x5fb3c, 0x4dd3 bytes
    //
    _q22(sdk::unknown_ptr) bfe_event_provider_destroy;
    
    // [BfeEventProviderFireNetEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14508, 0x4652 bytes
    // netio.sys .text:0x11020, 0x4dd3 bytes
    // netio.sys .text:0xde54, 0x4e8c bytes
    // netio.sys .text:0x110d0, 0x4dd3 bytes
    //
    _q23(sdk::unknown_ptr) bfe_event_provider_fire_net_event;
    
    // [BFE_EVENT_PROVIDERS]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57d00, 0x4652 bytes
    // netio.sys .rdata:0x6cc00, 0x4dd3 bytes
    // netio.sys .rdata:0x6d430, 0x4e8c bytes
    // netio.sys .rdata:0x6cc00, 0x4dd3 bytes
    //
    _q24(sdk::unknown_ptr) bfe_event_providers;
    
    // [BfeFwpByteBlobValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c5ec, 0x4652 bytes
    // netio.sys PAGE:0x8751c, 0x4dd3 bytes
    // netio.sys PAGE:0x89838, 0x4e8c bytes
    // netio.sys PAGE:0x8751c, 0x4dd3 bytes
    //
    _q25(sdk::unknown_ptr) bfe_fwp_byte_blob_validate;
    
    // [BfeFwpConditionValueValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a194, 0x4652 bytes
    // netio.sys PAGE:0x851a8, 0x4dd3 bytes
    // netio.sys PAGE:0x872b0, 0x4e8c bytes
    // netio.sys PAGE:0x851a8, 0x4dd3 bytes
    //
    _q26(sdk::unknown_ptr) bfe_fwp_condition_value_validate;
    
    // [BfeFwpRangeValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a000, 0x4652 bytes
    // netio.sys PAGE:0x85008, 0x4dd3 bytes
    // netio.sys PAGE:0x87128, 0x4e8c bytes
    // netio.sys PAGE:0x85008, 0x4dd3 bytes
    //
    _q27(sdk::unknown_ptr) bfe_fwp_range_validate;
    
    // [BfeFwpTokenInformationValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c630, 0x4652 bytes
    // netio.sys PAGE:0x87568, 0x4dd3 bytes
    // netio.sys PAGE:0x89884, 0x4e8c bytes
    // netio.sys PAGE:0x87568, 0x4dd3 bytes
    //
    _q28(sdk::unknown_ptr) bfe_fwp_token_information_validate;
    
    // [BfeNetEventConvertToData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14c48, 0x4652 bytes
    // netio.sys .text:0x118b0, 0x4dd3 bytes
    // netio.sys .text:0xe730, 0x4e8c bytes
    // netio.sys .text:0x11960, 0x4dd3 bytes
    //
    _q29(sdk::unknown_ptr) bfe_net_event_convert_to_data;
    
    // [BfeNetEventTrace]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14db4, 0x4652 bytes
    // netio.sys .text:0x11a60, 0x4dd3 bytes
    // netio.sys .text:0xe910, 0x4e8c bytes
    // netio.sys .text:0x11b10, 0x4dd3 bytes
    //
    _q30(sdk::unknown_ptr) bfe_net_event_trace;
    
    // [BfeNetEventTraceClassifyDropEther]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50d28, 0x4652 bytes
    // netio.sys .text:0x5fda4, 0x4dd3 bytes
    // netio.sys .text:0x5f9b4, 0x4e8c bytes
    // netio.sys .text:0x5fd64, 0x4dd3 bytes
    //
    _q31(sdk::unknown_ptr) bfe_net_event_trace_classify_drop_ether;
    
    // [BfeNetEventTraceIPsecKernelDropV4]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50e3c, 0x4652 bytes
    // netio.sys .text:0x5fec0, 0x4dd3 bytes
    // netio.sys .text:0x5fad0, 0x4e8c bytes
    // netio.sys .text:0x5fe80, 0x4dd3 bytes
    //
    _q32(sdk::unknown_ptr) bfe_net_event_trace_i_psec_kernel_drop_v4;
    
    // [BfeNetEventTraceIPsecKernelDropV6]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50ef4, 0x4652 bytes
    // netio.sys .text:0x5ff80, 0x4dd3 bytes
    // netio.sys .text:0x5fb90, 0x4e8c bytes
    // netio.sys .text:0x5ff40, 0x4dd3 bytes
    //
    _q33(sdk::unknown_ptr) bfe_net_event_trace_i_psec_kernel_drop_v6;
    
    // [BFE_NET_EVENT_TYPES]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x58070, 0x4652 bytes
    // netio.sys .rdata:0x6e4a0, 0x4dd3 bytes
    // netio.sys .rdata:0x6e8d0, 0x4e8c bytes
    // netio.sys .rdata:0x6e4a0, 0x4dd3 bytes
    //
    _q34(sdk::unknown_ptr) bfe_net_event_types;
    
    // [BfeSidAndAttributesValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48320, 0x4652 bytes
    // netio.sys .text:0x5467c, 0x4dd3 bytes
    // netio.sys .text:0x54f7c, 0x4e8c bytes
    // netio.sys .text:0x5463c, 0x4dd3 bytes
    //
    _q35(sdk::unknown_ptr) bfe_sid_and_attributes_validate;
    
    // [BfeSidValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a328, 0x4652 bytes
    // netio.sys PAGE:0x87658, 0x4dd3 bytes
    // netio.sys PAGE:0x898dc, 0x4e8c bytes
    // netio.sys PAGE:0x87658, 0x4dd3 bytes
    //
    _q36(sdk::unknown_ptr) bfe_sid_validate;
    
    // [BfeWstrValidate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48350, 0x4652 bytes
    // netio.sys .text:0x546b4, 0x4dd3 bytes
    // netio.sys .text:0x54fb4, 0x4e8c bytes
    // netio.sys .text:0x54674, 0x4dd3 bytes
    //
    _q37(sdk::unknown_ptr) bfe_wstr_validate;
    
    // [CalloutStreamDataInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a33c, 0x4652 bytes
    // netio.sys .text:0x584f4, 0x4dd3 bytes
    // netio.sys .text:0x57f54, 0x4e8c bytes
    // netio.sys .text:0x584b4, 0x4dd3 bytes
    //
    _q38(sdk::unknown_ptr) callout_stream_data_init;
    
    // [CancelMibChangeNotify2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x388c0, 0x4652 bytes
    // netio.sys .text:0x3ee80, 0x4dd3 bytes
    // netio.sys .text:0x40310, 0x4e8c bytes
    // netio.sys .text:0x3ee40, 0x4dd3 bytes
    //
    _q39(sdk::unknown_ptr) cancel_mib_change_notify2;
    
    // [CheckAndSetDefaultAction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24750, 0x4652 bytes
    // netio.sys .text:0x50c34, 0x4dd3 bytes
    // netio.sys .text:0x5253c, 0x4e8c bytes
    // netio.sys .text:0x50bf4, 0x4dd3 bytes
    //
    _q40(sdk::unknown_ptr) check_and_set_default_action;
    
    // [CheckEmptyConditionMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46c44, 0x4652 bytes
    // netio.sys .text:0x52eac, 0x4dd3 bytes
    // netio.sys .text:0x53e60, 0x4e8c bytes
    // netio.sys .text:0x52e6c, 0x4dd3 bytes
    //
    _q41(sdk::unknown_ptr) check_empty_condition_match;
    
    // [CheckExclusiveNonEqualSidsConditionEnumMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46c7c, 0x4652 bytes
    // netio.sys .text:0x19c8, 0x4dd3 bytes
    // netio.sys .text:0x214a4, 0x4e8c bytes
    // netio.sys .text:0x19c8, 0x4dd3 bytes
    //
    _q42(sdk::unknown_ptr) check_exclusive_non_equal_sids_condition_enum_match;
    
    // [CheckOffloadFastForLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1000, 0x4652 bytes
    // netio.sys .text:0x17d30, 0x4dd3 bytes
    // netio.sys .text:0x106c, 0x4e8c bytes
    // netio.sys .text:0x17de0, 0x4dd3 bytes
    //
    _q43(sdk::unknown_ptr) check_offload_fast_for_layer;
    
    // [ClassifyContextCleanupRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43bc0, 0x4652 bytes
    // netio.sys .text:0x4e1b0, 0x4dd3 bytes
    // netio.sys .text:0x4f9e0, 0x4e8c bytes
    // netio.sys .text:0x4e170, 0x4dd3 bytes
    //
    _q44(sdk::unknown_ptr) classify_context_cleanup_routine;
    
    // [CleanupQoSProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f040, 0x4652 bytes
    // netio.sys .text:0x3cc50, 0x4dd3 bytes
    // netio.sys .text:0x3e130, 0x4e8c bytes
    // netio.sys .text:0x3cc10, 0x4dd3 bytes
    //
    _q45(sdk::unknown_ptr) cleanup_qo_s_provider;
    
    // [ClearPendingDeleteFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x416e0, 0x4652 bytes
    // netio.sys .text:0x4b2e8, 0x4dd3 bytes
    // netio.sys .text:0x4c8f8, 0x4e8c bytes
    // netio.sys .text:0x4b2a8, 0x4dd3 bytes
    //
    _q46(sdk::unknown_ptr) clear_pending_delete_flags;
    
    // [CloseCompartment]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38b20, 0x4652 bytes
    // netio.sys .text:0x3f0d0, 0x4dd3 bytes
    // netio.sys .text:0x40600, 0x4e8c bytes
    // netio.sys .text:0x3f090, 0x4dd3 bytes
    //
    _q47(sdk::unknown_ptr) close_compartment;
    
    // [CompareBlobs]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46dc8, 0x4652 bytes
    // netio.sys .text:0x52ee8, 0x4dd3 bytes
    // netio.sys .text:0x1b1d4, 0x4e8c bytes
    // netio.sys .text:0x52ea8, 0x4dd3 bytes
    //
    _q48(sdk::unknown_ptr) compare_blobs;
    
    // [ComparePrefixSids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46e3c, 0x4652 bytes
    // netio.sys .text:0x52fac, 0x4dd3 bytes
    // netio.sys .text:0x53ef0, 0x4e8c bytes
    // netio.sys .text:0x52f6c, 0x4dd3 bytes
    //
    _q49(sdk::unknown_ptr) compare_prefix_sids;
    
    // [CompareSecurityContexts]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46ed0, 0x4652 bytes
    // netio.sys .text:0x53054, 0x4dd3 bytes
    // netio.sys .text:0x16f0c, 0x4e8c bytes
    // netio.sys .text:0x53014, 0x4dd3 bytes
    //
    _q50(sdk::unknown_ptr) compare_security_contexts;
    
    // [CompareSids]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46fac, 0x4652 bytes
    // netio.sys .text:0x53298, 0x4dd3 bytes
    // netio.sys .text:0x53f98, 0x4e8c bytes
    // netio.sys .text:0x53258, 0x4dd3 bytes
    //
    _q51(sdk::unknown_ptr) compare_sids;
    
    // [CompareSublayers]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x194c8, 0x4652 bytes
    // netio.sys .text:0x529bc, 0x4dd3 bytes
    // netio.sys .text:0x53cc4, 0x4e8c bytes
    // netio.sys .text:0x5297c, 0x4dd3 bytes
    //
    _q52(sdk::unknown_ptr) compare_sublayers;
    
    // [ComputeFilterHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x231b4, 0x4652 bytes
    // netio.sys .text:0x24e0c, 0x4dd3 bytes
    // netio.sys .text:0x27a90, 0x4e8c bytes
    // netio.sys .text:0x24e9c, 0x4dd3 bytes
    //
    _q53(sdk::unknown_ptr) compute_filter_hash;
    
    // [ComputeHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6754, 0x4652 bytes
    // netio.sys .text:0x529d8, 0x4dd3 bytes
    // netio.sys .text:0xbc24, 0x4e8c bytes
    // netio.sys .text:0x52998, 0x4dd3 bytes
    //
    _q54(sdk::unknown_ptr) compute_hash;
    
    // [constructHandleFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f160, 0x4652 bytes
    // netio.sys .text:0x26e6c, 0x4dd3 bytes
    // netio.sys .text:0x295c8, 0x4e8c bytes
    // netio.sys .text:0x26efc, 0x4dd3 bytes
    //
    _q55(sdk::unknown_ptr) construct_handle_factory;
    
    // [ConstructNewCacheEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6a9c, 0x4652 bytes
    // netio.sys .text:0x9df0, 0x4dd3 bytes
    // netio.sys .text:0x9440, 0x4e8c bytes
    // netio.sys .text:0x9ea0, 0x4dd3 bytes
    //
    _q56(sdk::unknown_ptr) construct_new_cache_entry;
    
    // [contract_HF_table]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3784c, 0x4652 bytes
    // netio.sys .text:0x3db74, 0x4dd3 bytes
    // netio.sys .text:0x3f044, 0x4e8c bytes
    // netio.sys .text:0x3db34, 0x4dd3 bytes
    //
    _q57(sdk::unknown_ptr) contract_hf_table;
    
    // [ConvertCompartmentGuidToId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x390c0, 0x4652 bytes
    // netio.sys .text:0x3f760, 0x4dd3 bytes
    // netio.sys .text:0x40c80, 0x4e8c bytes
    // netio.sys .text:0x3f720, 0x4dd3 bytes
    //
    _q58(sdk::unknown_ptr) convert_compartment_guid_to_id;
    
    // [ConvertCompartmentIdToGuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39150, 0x4652 bytes
    // netio.sys .text:0x3f7f0, 0x4dd3 bytes
    // netio.sys .text:0x40d10, 0x4e8c bytes
    // netio.sys .text:0x3f7b0, 0x4dd3 bytes
    //
    _q59(sdk::unknown_ptr) convert_compartment_id_to_guid;
    
    // [ConvertConditionToRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16fc, 0x4652 bytes
    // netio.sys .text:0x1a44, 0x4dd3 bytes
    // netio.sys .text:0x1b088, 0x4e8c bytes
    // netio.sys .text:0x1a44, 0x4dd3 bytes
    //
    _q60(sdk::unknown_ptr) convert_condition_to_range;
    
    // [ConvertInterfaceAliasToLuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39240, 0x4652 bytes
    // netio.sys .text:0x3f900, 0x4dd3 bytes
    // netio.sys .text:0x40e20, 0x4e8c bytes
    // netio.sys .text:0x3f8c0, 0x4dd3 bytes
    //
    _q61(sdk::unknown_ptr) convert_interface_alias_to_luid;
    
    // [ConvertInterfaceGuidToLuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b380, 0x4652 bytes
    // netio.sys .text:0x1d070, 0x4dd3 bytes
    // netio.sys .text:0x1a450, 0x4e8c bytes
    // netio.sys .text:0x1d100, 0x4dd3 bytes
    //
    _q62(sdk::unknown_ptr) convert_interface_guid_to_luid;
    
    // [ConvertInterfaceIndexToLuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21040, 0x4652 bytes
    // netio.sys .text:0x1efe0, 0x4dd3 bytes
    // netio.sys .text:0x20370, 0x4e8c bytes
    // netio.sys .text:0x1f070, 0x4dd3 bytes
    //
    _q63(sdk::unknown_ptr) convert_interface_index_to_luid;
    
    // [ConvertInterfaceLuidToAlias]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b4a0, 0x4652 bytes
    // netio.sys .text:0x1d930, 0x4dd3 bytes
    // netio.sys .text:0x1aa30, 0x4e8c bytes
    // netio.sys .text:0x1d9c0, 0x4dd3 bytes
    //
    _q64(sdk::unknown_ptr) convert_interface_luid_to_alias;
    
    // [ConvertInterfaceLuidToGuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x210a0, 0x4652 bytes
    // netio.sys .text:0x1f080, 0x4dd3 bytes
    // netio.sys .text:0x20410, 0x4e8c bytes
    // netio.sys .text:0x1f110, 0x4dd3 bytes
    //
    _q65(sdk::unknown_ptr) convert_interface_luid_to_guid;
    
    // [ConvertInterfaceLuidToIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c1d0, 0x4652 bytes
    // netio.sys .text:0x1d8b0, 0x4dd3 bytes
    // netio.sys .text:0x1a8f0, 0x4e8c bytes
    // netio.sys .text:0x1d940, 0x4dd3 bytes
    //
    _q66(sdk::unknown_ptr) convert_interface_luid_to_index;
    
    // [ConvertInterfaceLuidToNameA]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x393e0, 0x4652 bytes
    // netio.sys .text:0x3fad0, 0x4dd3 bytes
    // netio.sys .text:0x40ff0, 0x4e8c bytes
    // netio.sys .text:0x3fa90, 0x4dd3 bytes
    //
    _q67(sdk::unknown_ptr) convert_interface_luid_to_name_a;
    
    // [ConvertInterfaceLuidToNameW]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39480, 0x4652 bytes
    // netio.sys .text:0x3fb80, 0x4dd3 bytes
    // netio.sys .text:0x410a0, 0x4e8c bytes
    // netio.sys .text:0x3fb40, 0x4dd3 bytes
    //
    _q68(sdk::unknown_ptr) convert_interface_luid_to_name_w;
    
    // [ConvertInterfaceNameToLuidA]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39570, 0x4652 bytes
    // netio.sys .text:0x3fc80, 0x4dd3 bytes
    // netio.sys .text:0x411a0, 0x4e8c bytes
    // netio.sys .text:0x3fc40, 0x4dd3 bytes
    //
    _q69(sdk::unknown_ptr) convert_interface_name_to_luid_a;
    
    // [ConvertInterfaceNameToLuidW]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39650, 0x4652 bytes
    // netio.sys .text:0x3fd70, 0x4dd3 bytes
    // netio.sys .text:0x41270, 0x4e8c bytes
    // netio.sys .text:0x3fd30, 0x4dd3 bytes
    //
    _q70(sdk::unknown_ptr) convert_interface_name_to_luid_w;
    
    // [ConvertInterfacePhysicalAddressToLuid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x397d0, 0x4652 bytes
    // netio.sys .text:0x3ff10, 0x4dd3 bytes
    // netio.sys .text:0x41410, 0x4e8c bytes
    // netio.sys .text:0x3fed0, 0x4dd3 bytes
    //
    _q71(sdk::unknown_ptr) convert_interface_physical_address_to_luid;
    
    // [ConvertIpv4MaskToLength]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38960, 0x4652 bytes
    // netio.sys .text:0x3ef40, 0x4dd3 bytes
    // netio.sys .text:0x403d0, 0x4e8c bytes
    // netio.sys .text:0x3ef00, 0x4dd3 bytes
    //
    _q72(sdk::unknown_ptr) convert_ipv4_mask_to_length;
    
    // [ConvertLayerIdToDirection]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42084, 0x4652 bytes
    // netio.sys .text:0x4c2cc, 0x4dd3 bytes
    // netio.sys .text:0x4d93c, 0x4e8c bytes
    // netio.sys .text:0x4c28c, 0x4dd3 bytes
    //
    _q73(sdk::unknown_ptr) convert_layer_id_to_direction;
    
    // [ConvertLayerIdToLayerMessageId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42140, 0x4652 bytes
    // netio.sys .text:0x4c328, 0x4dd3 bytes
    // netio.sys .text:0x4d998, 0x4e8c bytes
    // netio.sys .text:0x4c2e8, 0x4dd3 bytes
    //
    _q74(sdk::unknown_ptr) convert_layer_id_to_layer_message_id;
    
    // [ConvertLengthToIpv4Mask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38990, 0x4652 bytes
    // netio.sys .text:0x3ef80, 0x4dd3 bytes
    // netio.sys .text:0x40410, 0x4e8c bytes
    // netio.sys .text:0x3ef40, 0x4dd3 bytes
    //
    _q75(sdk::unknown_ptr) convert_length_to_ipv4_mask;
    
    // [ConvertRangeConditionsOnNotEqual]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4700c, 0x4652 bytes
    // netio.sys .text:0x53310, 0x4dd3 bytes
    // netio.sys .text:0x54010, 0x4e8c bytes
    // netio.sys .text:0x532d0, 0x4dd3 bytes
    //
    _q76(sdk::unknown_ptr) convert_range_conditions_on_not_equal;
    
    // [ConvertStringToInterfacePhysicalAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39940, 0x4652 bytes
    // netio.sys .text:0x40080, 0x4dd3 bytes
    // netio.sys .text:0x41580, 0x4e8c bytes
    // netio.sys .text:0x40040, 0x4dd3 bytes
    //
    _q77(sdk::unknown_ptr) convert_string_to_interface_physical_address;
    
    // [CreateAndAddIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24d8, 0x4652 bytes
    // netio.sys .text:0x24768, 0x4dd3 bytes
    // netio.sys .text:0x19138, 0x4e8c bytes
    // netio.sys .text:0x247f8, 0x4dd3 bytes
    //
    _q78(sdk::unknown_ptr) create_and_add_index;
    
    // [CreateAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39af0, 0x4652 bytes
    // netio.sys .text:0x40240, 0x4dd3 bytes
    // netio.sys .text:0x41740, 0x4e8c bytes
    // netio.sys .text:0x40200, 0x4dd3 bytes
    //
    _q79(sdk::unknown_ptr) create_anycast_ip_address_entry;
    
    // [CreateBoottimeIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x232b0, 0x4652 bytes
    // netio.sys .text:0x24e9c, 0x4dd3 bytes
    // netio.sys .text:0x27b20, 0x4e8c bytes
    // netio.sys .text:0x24f2c, 0x4dd3 bytes
    //
    _q80(sdk::unknown_ptr) create_boottime_index;
    
    // [CreateCache]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ca50, 0x4652 bytes
    // netio.sys .text:0x22ea0, 0x4dd3 bytes
    // netio.sys .text:0x25750, 0x4e8c bytes
    // netio.sys .text:0x22f30, 0x4dd3 bytes
    //
    _q81(sdk::unknown_ptr) create_cache;
    
    // [CreateCombinedHashTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cb30, 0x4652 bytes
    // netio.sys .text:0x22f8c, 0x4dd3 bytes
    // netio.sys .text:0x2583c, 0x4e8c bytes
    // netio.sys .text:0x2301c, 0x4dd3 bytes
    //
    _q82(sdk::unknown_ptr) create_combined_hash_table;
    
    // [CreateCompartment]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38b30, 0x4652 bytes
    // netio.sys .text:0x3f0f0, 0x4dd3 bytes
    // netio.sys .text:0x40620, 0x4e8c bytes
    // netio.sys .text:0x3f0b0, 0x4dd3 bytes
    //
    _q83(sdk::unknown_ptr) create_compartment;
    
    // [CreateFilterHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c818, 0x4652 bytes
    // netio.sys .text:0x22c38, 0x4dd3 bytes
    // netio.sys .text:0x254e8, 0x4e8c bytes
    // netio.sys .text:0x22cc8, 0x4dd3 bytes
    //
    _q84(sdk::unknown_ptr) create_filter_hashtable;
    
    // [CreateIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a7d0, 0x4652 bytes
    // netio.sys .text:0x41010, 0x4dd3 bytes
    // netio.sys .text:0x424e0, 0x4e8c bytes
    // netio.sys .text:0x40fd0, 0x4dd3 bytes
    //
    _q85(sdk::unknown_ptr) create_ip_forward_entry2;
    
    // [CreateIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b630, 0x4652 bytes
    // netio.sys .text:0x41f80, 0x4dd3 bytes
    // netio.sys .text:0x43480, 0x4e8c bytes
    // netio.sys .text:0x41f40, 0x4dd3 bytes
    //
    _q86(sdk::unknown_ptr) create_ip_net_entry2;
    
    // [CreateSortedAddressPairs]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bf60, 0x4652 bytes
    // netio.sys .text:0x1fcb0, 0x4dd3 bytes
    // netio.sys .text:0x22610, 0x4e8c bytes
    // netio.sys .text:0x1fd40, 0x4dd3 bytes
    //
    _q87(sdk::unknown_ptr) create_sorted_address_pairs;
    
    // [CreateUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b00, 0x4652 bytes
    // netio.sys .text:0x40270, 0x4dd3 bytes
    // netio.sys .text:0x41770, 0x4e8c bytes
    // netio.sys .text:0x40230, 0x4dd3 bytes
    //
    _q88(sdk::unknown_ptr) create_unicast_ip_address_entry;
    
    // [DeepCopyOnStackClassifyParams]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43c68, 0x4652 bytes
    // netio.sys .text:0x4e2f0, 0x4dd3 bytes
    // netio.sys .text:0x4fb68, 0x4e8c bytes
    // netio.sys .text:0x4e2b0, 0x4dd3 bytes
    //
    _q89(sdk::unknown_ptr) deep_copy_on_stack_classify_params;
    
    // [DeleteAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b10, 0x4652 bytes
    // netio.sys .text:0x402a0, 0x4dd3 bytes
    // netio.sys .text:0x417a0, 0x4e8c bytes
    // netio.sys .text:0x40260, 0x4dd3 bytes
    //
    _q90(sdk::unknown_ptr) delete_anycast_ip_address_entry;
    
    // [DeleteCompartment]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38cb0, 0x4652 bytes
    // netio.sys .text:0x3f280, 0x4dd3 bytes
    // netio.sys .text:0x407b0, 0x4e8c bytes
    // netio.sys .text:0x3f240, 0x4dd3 bytes
    //
    _q91(sdk::unknown_ptr) delete_compartment;
    
    // [DeleteFilterFromIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5ca0, 0x4652 bytes
    // netio.sys .text:0x12578, 0x4dd3 bytes
    // netio.sys .text:0x1e128, 0x4e8c bytes
    // netio.sys .text:0x12628, 0x4dd3 bytes
    //
    _q92(sdk::unknown_ptr) delete_filter_from_index;
    
    // [DeleteIndexFromLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a24, 0x4652 bytes
    // netio.sys .text:0x24530, 0x4dd3 bytes
    // netio.sys .text:0x18ef0, 0x4e8c bytes
    // netio.sys .text:0x245c0, 0x4dd3 bytes
    //
    _q93(sdk::unknown_ptr) delete_index_from_layer;
    
    // [DeleteIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a7e0, 0x4652 bytes
    // netio.sys .text:0x41040, 0x4dd3 bytes
    // netio.sys .text:0x42510, 0x4e8c bytes
    // netio.sys .text:0x41000, 0x4dd3 bytes
    //
    _q94(sdk::unknown_ptr) delete_ip_forward_entry2;
    
    // [DeleteIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b640, 0x4652 bytes
    // netio.sys .text:0x41fb0, 0x4dd3 bytes
    // netio.sys .text:0x434b0, 0x4e8c bytes
    // netio.sys .text:0x41f70, 0x4dd3 bytes
    //
    _q95(sdk::unknown_ptr) delete_ip_net_entry2;
    
    // [DeleteUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b20, 0x4652 bytes
    // netio.sys .text:0x402d0, 0x4dd3 bytes
    // netio.sys .text:0x417d0, 0x4e8c bytes
    // netio.sys .text:0x40290, 0x4dd3 bytes
    //
    _q96(sdk::unknown_ptr) delete_unicast_ip_address_entry;
    
    // [DestroyBoottimeIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23414, 0x4652 bytes
    // netio.sys .text:0x24ff0, 0x4dd3 bytes
    // netio.sys .text:0x27c38, 0x4e8c bytes
    // netio.sys .text:0x25080, 0x4dd3 bytes
    //
    _q97(sdk::unknown_ptr) destroy_boottime_index;
    
    // [DestroyCombinedHashTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46a8c, 0x4652 bytes
    // netio.sys .text:0x52ad4, 0x4dd3 bytes
    // netio.sys .text:0x53ce0, 0x4e8c bytes
    // netio.sys .text:0x52a94, 0x4dd3 bytes
    //
    _q98(sdk::unknown_ptr) destroy_combined_hash_table;
    
    // [DetachQoSProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36dd0, 0x4652 bytes
    // netio.sys .text:0x3cc70, 0x4dd3 bytes
    // netio.sys .text:0x3e150, 0x4e8c bytes
    // netio.sys .text:0x3cc30, 0x4dd3 bytes
    //
    _q99(sdk::unknown_ptr) detach_qo_s_provider;
    
    // [DoesInternalSpaceExist]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2760, 0x4652 bytes
    // netio.sys .text:0x24a2c, 0x4dd3 bytes
    // netio.sys .text:0x19430, 0x4e8c bytes
    // netio.sys .text:0x24abc, 0x4dd3 bytes
    //
    _r00(sdk::unknown_ptr) does_internal_space_exist;
    
    // [expand_HF_table]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ed84, 0x4652 bytes
    // netio.sys .text:0x25888, 0x4dd3 bytes
    // netio.sys .text:0x2348c, 0x4e8c bytes
    // netio.sys .text:0x25918, 0x4dd3 bytes
    //
    _r01(sdk::unknown_ptr) expand_hf_table;
    
    // [FamilyTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x594a8, 0x4652 bytes
    // netio.sys .rdata:0x70798, 0x4dd3 bytes
    // netio.sys .rdata:0x70ef0, 0x4e8c bytes
    // netio.sys .rdata:0x70798, 0x4dd3 bytes
    //
    _r02(sdk::unknown_ptr) family_table;
    
    // [FeAcquireClassifyHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43e70, 0x4652 bytes
    // netio.sys .text:0x4e520, 0x4dd3 bytes
    // netio.sys .text:0x4fd90, 0x4e8c bytes
    // netio.sys .text:0x4e4e0, 0x4dd3 bytes
    //
    _r03(sdk::unknown_ptr) fe_acquire_classify_handle;
    
    // [FeAcquireReadEngineLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8f74, 0x4652 bytes
    // netio.sys .text:0x45f8, 0x4dd3 bytes
    // netio.sys .text:0xdd60, 0x4e8c bytes
    // netio.sys .text:0x4614, 0x4dd3 bytes
    //
    _r04(sdk::unknown_ptr) fe_acquire_read_engine_lock;
    
    // [FeAcquireWritableLayerDataPointer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43fe0, 0x4652 bytes
    // netio.sys .text:0x4e720, 0x4dd3 bytes
    // netio.sys .text:0x4ff90, 0x4e8c bytes
    // netio.sys .text:0x4e6e0, 0x4dd3 bytes
    //
    _r05(sdk::unknown_ptr) fe_acquire_writable_layer_data_pointer;
    
    // [FeAcquireWriteEngineLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21ec, 0x4652 bytes
    // netio.sys .text:0x3c00, 0x4dd3 bytes
    // netio.sys .text:0x1fecc, 0x4e8c bytes
    // netio.sys .text:0x3c00, 0x4dd3 bytes
    //
    _r06(sdk::unknown_ptr) fe_acquire_write_engine_lock;
    
    // [FeAddCacheToLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c9ac, 0x4652 bytes
    // netio.sys .text:0x22dec, 0x4dd3 bytes
    // netio.sys .text:0x2569c, 0x4e8c bytes
    // netio.sys .text:0x22e7c, 0x4dd3 bytes
    //
    _r07(sdk::unknown_ptr) fe_add_cache_to_layer;
    
    // [FeAddCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22ae0, 0x4652 bytes
    // netio.sys .text:0x25b80, 0x4dd3 bytes
    // netio.sys .text:0x27610, 0x4e8c bytes
    // netio.sys .text:0x25c10, 0x4dd3 bytes
    //
    _r08(sdk::unknown_ptr) fe_add_callout_entry;
    
    // [FeApplyModifiedLayerData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44270, 0x4652 bytes
    // netio.sys .text:0x4ea90, 0x4dd3 bytes
    // netio.sys .text:0x50300, 0x4e8c bytes
    // netio.sys .text:0x4ea50, 0x4dd3 bytes
    //
    _r09(sdk::unknown_ptr) fe_apply_modified_layer_data;
    
    // [FeCompleteClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44300, 0x4652 bytes
    // netio.sys .text:0x4eb60, 0x4dd3 bytes
    // netio.sys .text:0x50440, 0x4e8c bytes
    // netio.sys .text:0x4eb20, 0x4dd3 bytes
    //
    _r10(sdk::unknown_ptr) fe_complete_classify;
    
    // [FeCopyIncomingValues]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x443d0, 0x4652 bytes
    // netio.sys .text:0x4ed20, 0x4dd3 bytes
    // netio.sys .text:0x505a0, 0x4e8c bytes
    // netio.sys .text:0x4ece0, 0x4dd3 bytes
    //
    _r11(sdk::unknown_ptr) fe_copy_incoming_values;
    
    // [FeDeRefCalloutFlowContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51fc, 0x4652 bytes
    // netio.sys .text:0xed80, 0x4dd3 bytes
    // netio.sys .text:0xc740, 0x4e8c bytes
    // netio.sys .text:0xee30, 0x4dd3 bytes
    //
    _r12(sdk::unknown_ptr) fe_de_ref_callout_flow_context;
    
    // [FeDefaultClassifyCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23350, 0x4652 bytes
    // netio.sys .text:0x4f6b0, 0x4dd3 bytes
    // netio.sys .text:0x50f20, 0x4e8c bytes
    // netio.sys .text:0x4f670, 0x4dd3 bytes
    //
    _r13(sdk::unknown_ptr) fe_default_classify_callback;
    
    // [FeDefaultClassifyCallbackFast]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44b40, 0x4652 bytes
    // netio.sys .text:0x4f6f0, 0x4dd3 bytes
    // netio.sys .text:0x50f60, 0x4e8c bytes
    // netio.sys .text:0x4f6b0, 0x4dd3 bytes
    //
    _r14(sdk::unknown_ptr) fe_default_classify_callback_fast;
    
    // [FeDefaultNotifyCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a00, 0x4652 bytes
    // netio.sys .text:0x1c540, 0x4dd3 bytes
    // netio.sys .text:0x16f00, 0x4e8c bytes
    // netio.sys .text:0x1c5d0, 0x4dd3 bytes
    //
    _r15(sdk::unknown_ptr) fe_default_notify_callback;
    
    // [FeDeleteCacheFromLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45008, 0x4652 bytes
    // netio.sys .text:0x4ff84, 0x4dd3 bytes
    // netio.sys .text:0x51914, 0x4e8c bytes
    // netio.sys .text:0x4ff44, 0x4dd3 bytes
    //
    _r16(sdk::unknown_ptr) fe_delete_cache_from_layer;
    
    // [FeDeleteCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44b58, 0x4652 bytes
    // netio.sys .text:0x4f70c, 0x4dd3 bytes
    // netio.sys .text:0x50f7c, 0x4e8c bytes
    // netio.sys .text:0x4f6cc, 0x4dd3 bytes
    //
    _r17(sdk::unknown_ptr) fe_delete_callout_entry;
    
    // [FeDestroyCalloutTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44cf0, 0x4652 bytes
    // netio.sys .text:0x4f8f4, 0x4dd3 bytes
    // netio.sys .text:0x51168, 0x4e8c bytes
    // netio.sys .text:0x4f8b4, 0x4dd3 bytes
    //
    _r18(sdk::unknown_ptr) fe_destroy_callout_table;
    
    // [FeEnumIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x450b0, 0x4652 bytes
    // netio.sys .text:0x5003c, 0x4dd3 bytes
    // netio.sys .text:0x519cc, 0x4e8c bytes
    // netio.sys .text:0x4fffc, 0x4dd3 bytes
    //
    _r19(sdk::unknown_ptr) fe_enum_index;
    
    // [FeEnumLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x82bc, 0x4652 bytes
    // netio.sys .text:0x4d10, 0x4dd3 bytes
    // netio.sys .text:0xc470, 0x4e8c bytes
    // netio.sys .text:0x4d20, 0x4dd3 bytes
    //
    _r20(sdk::unknown_ptr) fe_enum_layer;
    
    // [FeGetNextFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3368, 0x4652 bytes
    // netio.sys .text:0x4c74, 0x4dd3 bytes
    // netio.sys .text:0x1d30, 0x4e8c bytes
    // netio.sys .text:0x4c84, 0x4dd3 bytes
    //
    _r21(sdk::unknown_ptr) fe_get_next_filter;
    
    // [FeGetRefCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x224cc, 0x4652 bytes
    // netio.sys .text:0x10b6c, 0x4dd3 bytes
    // netio.sys .text:0xaf88, 0x4e8c bytes
    // netio.sys .text:0x10c1c, 0x4dd3 bytes
    //
    _r22(sdk::unknown_ptr) fe_get_ref_callout;
    
    // [FeGetWfpGlobalPtr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x246a0, 0x4652 bytes
    // netio.sys .text:0x29280, 0x4dd3 bytes
    // netio.sys .text:0x2a0f0, 0x4e8c bytes
    // netio.sys .text:0x29310, 0x4dd3 bytes
    //
    _r23(sdk::unknown_ptr) fe_get_wfp_global_ptr;
    
    // [FeInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c494, 0x4652 bytes
    // netio.sys .text:0x22674, 0x4dd3 bytes
    // netio.sys .text:0x258d8, 0x4e8c bytes
    // netio.sys .text:0x22704, 0x4dd3 bytes
    //
    _r24(sdk::unknown_ptr) fe_init;
    
    // [FeInitCalloutTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cd60, 0x4652 bytes
    // netio.sys .text:0x23284, 0x4dd3 bytes
    // netio.sys .text:0x2614c, 0x4e8c bytes
    // netio.sys .text:0x23314, 0x4dd3 bytes
    //
    _r25(sdk::unknown_ptr) fe_init_callout_table;
    
    // [FeMoveFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45184, 0x4652 bytes
    // netio.sys .text:0x50110, 0x4dd3 bytes
    // netio.sys .text:0x51aa0, 0x4e8c bytes
    // netio.sys .text:0x500d0, 0x4dd3 bytes
    //
    _r26(sdk::unknown_ptr) fe_move_filter;
    
    // [FeNotifyFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4518, 0x4652 bytes
    // netio.sys .text:0x1cd30, 0x4dd3 bytes
    // netio.sys .text:0x18a88, 0x4e8c bytes
    // netio.sys .text:0x1cdc0, 0x4dd3 bytes
    //
    _r27(sdk::unknown_ptr) fe_notify_filter;
    
    // [FePendClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x446a0, 0x4652 bytes
    // netio.sys .text:0x4f0a0, 0x4dd3 bytes
    // netio.sys .text:0x508d0, 0x4e8c bytes
    // netio.sys .text:0x4f060, 0x4dd3 bytes
    //
    _r28(sdk::unknown_ptr) fe_pend_classify;
    
    // [FeRefCalloutFlowContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x514c, 0x4652 bytes
    // netio.sys .text:0xea08, 0x4dd3 bytes
    // netio.sys .text:0xc1cc, 0x4e8c bytes
    // netio.sys .text:0xeab8, 0x4dd3 bytes
    //
    _r29(sdk::unknown_ptr) fe_ref_callout_flow_context;
    
    // [FeReleaseCalloutContextList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x448e0, 0x4652 bytes
    // netio.sys .text:0x4f330, 0x4dd3 bytes
    // netio.sys .text:0x50c20, 0x4e8c bytes
    // netio.sys .text:0x4f2f0, 0x4dd3 bytes
    //
    _r30(sdk::unknown_ptr) fe_release_callout_context_list;
    
    // [FeReleaseClassifyHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44910, 0x4652 bytes
    // netio.sys .text:0x4f360, 0x4dd3 bytes
    // netio.sys .text:0x50c50, 0x4e8c bytes
    // netio.sys .text:0x4f320, 0x4dd3 bytes
    //
    _r31(sdk::unknown_ptr) fe_release_classify_handle;
    
    // [FeSetFilterVisibleFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23000, 0x4652 bytes
    // netio.sys .text:0x24c08, 0x4dd3 bytes
    // netio.sys .text:0x2788c, 0x4e8c bytes
    // netio.sys .text:0x24c98, 0x4dd3 bytes
    //
    _r32(sdk::unknown_ptr) fe_set_filter_visible_flags;
    
    // [FeShutdown]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4533c, 0x4652 bytes
    // netio.sys .text:0x502c8, 0x4dd3 bytes
    // netio.sys .text:0x51c54, 0x4e8c bytes
    // netio.sys .text:0x50288, 0x4dd3 bytes
    //
    _r33(sdk::unknown_ptr) fe_shutdown;
    
    // [FeToggleFilterActivation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x455e8, 0x4652 bytes
    // netio.sys .text:0x505c8, 0x4dd3 bytes
    // netio.sys .text:0x51f54, 0x4e8c bytes
    // netio.sys .text:0x50588, 0x4dd3 bytes
    //
    _r34(sdk::unknown_ptr) fe_toggle_filter_activation;
    
    // [FillAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1be9c, 0x4652 bytes
    // netio.sys .text:0x1d7dc, 0x4dd3 bytes
    // netio.sys .text:0x17364, 0x4e8c bytes
    // netio.sys .text:0x1d86c, 0x4dd3 bytes
    //
    _r35(sdk::unknown_ptr) fill_address_entry;
    
    // [FillIfEntryWithInterfaceInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x206dc, 0x4652 bytes
    // netio.sys .text:0x1ec90, 0x4dd3 bytes
    // netio.sys .text:0x1c670, 0x4e8c bytes
    // netio.sys .text:0x1ed20, 0x4dd3 bytes
    //
    _r36(sdk::unknown_ptr) fill_if_entry_with_interface_info;
    
    // [FillIpInterfaceRow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20af8, 0x4652 bytes
    // netio.sys .text:0x1d410, 0x4dd3 bytes
    // netio.sys .text:0x1a7a0, 0x4e8c bytes
    // netio.sys .text:0x1d4a0, 0x4dd3 bytes
    //
    _r37(sdk::unknown_ptr) fill_ip_interface_row;
    
    // [FillIpPathEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c370, 0x4652 bytes
    // netio.sys .text:0x42ddc, 0x4dd3 bytes
    // netio.sys .text:0x4429c, 0x4e8c bytes
    // netio.sys .text:0x42d9c, 0x4dd3 bytes
    //
    _r38(sdk::unknown_ptr) fill_ip_path_entry;
    
    // [FillRouteEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18bf8, 0x4652 bytes
    // netio.sys .text:0x1397c, 0x4dd3 bytes
    // netio.sys .text:0x1414c, 0x4e8c bytes
    // netio.sys .text:0x13a2c, 0x4dd3 bytes
    //
    _r39(sdk::unknown_ptr) fill_route_entry;
    
    // [FilterMatchEnumAll]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47280, 0x4652 bytes
    // netio.sys .text:0xec48, 0x4dd3 bytes
    // netio.sys .text:0x20c74, 0x4e8c bytes
    // netio.sys .text:0xecf8, 0x4dd3 bytes
    //
    _r40(sdk::unknown_ptr) filter_match_enum_all;
    
    // [FilterMatchUnmatchedFields]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15c18, 0x4652 bytes
    // netio.sys .text:0x535b8, 0x4dd3 bytes
    // netio.sys .text:0x542d8, 0x4e8c bytes
    // netio.sys .text:0x53578, 0x4dd3 bytes
    //
    _r41(sdk::unknown_ptr) filter_match_unmatched_fields;
    
    // [FindCacheMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6848, 0x4652 bytes
    // netio.sys .text:0xdf00, 0x4dd3 bytes
    // netio.sys .text:0x3b54, 0x4e8c bytes
    // netio.sys .text:0xdfb0, 0x4dd3 bytes
    //
    _r42(sdk::unknown_ptr) find_cache_match;
    
    // [FindCalloutContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44948, 0x4652 bytes
    // netio.sys .text:0x4f3dc, 0x4dd3 bytes
    // netio.sys .text:0x50ccc, 0x4e8c bytes
    // netio.sys .text:0x4f39c, 0x4dd3 bytes
    //
    _r43(sdk::unknown_ptr) find_callout_context;
    
    // [FindEntryFromFilterHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23118, 0x4652 bytes
    // netio.sys .text:0x24d54, 0x4dd3 bytes
    // netio.sys .text:0x279d8, 0x4e8c bytes
    // netio.sys .text:0x24de4, 0x4dd3 bytes
    //
    _r44(sdk::unknown_ptr) find_entry_from_filter_hashtable;
    
    // [FindIntFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23080, 0x4652 bytes
    // netio.sys .text:0x24c98, 0x4dd3 bytes
    // netio.sys .text:0x2791c, 0x4e8c bytes
    // netio.sys .text:0x24d28, 0x4dd3 bytes
    //
    _r45(sdk::unknown_ptr) find_int_filter;
    
    // [FlushIpNetTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b650, 0x4652 bytes
    // netio.sys .text:0x41fe0, 0x4dd3 bytes
    // netio.sys .text:0x434e0, 0x4e8c bytes
    // netio.sys .text:0x41fa0, 0x4dd3 bytes
    //
    _r46(sdk::unknown_ptr) flush_ip_net_table2;
    
    // [FlushIpPathTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c440, 0x4652 bytes
    // netio.sys .text:0x42ec0, 0x4dd3 bytes
    // netio.sys .text:0x44380, 0x4e8c bytes
    // netio.sys .text:0x42e80, 0x4dd3 bytes
    //
    _r47(sdk::unknown_ptr) flush_ip_path_table;
    
    // [FreeCache]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46ab0, 0x4652 bytes
    // netio.sys .text:0x52b04, 0x4dd3 bytes
    // netio.sys .text:0x53d10, 0x4e8c bytes
    // netio.sys .text:0x52ac4, 0x4dd3 bytes
    //
    _r48(sdk::unknown_ptr) free_cache;
    
    // [FreeCacheEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46b24, 0x4652 bytes
    // netio.sys .text:0x105d8, 0x4dd3 bytes
    // netio.sys .text:0x222a4, 0x4e8c bytes
    // netio.sys .text:0x10688, 0x4dd3 bytes
    //
    _r49(sdk::unknown_ptr) free_cache_entry;
    
    // [FreeCompareData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x473c8, 0x4652 bytes
    // netio.sys .text:0x53658, 0x4dd3 bytes
    // netio.sys .text:0x54378, 0x4e8c bytes
    // netio.sys .text:0x53618, 0x4dd3 bytes
    //
    _r50(sdk::unknown_ptr) free_compare_data;
    
    // [FreeConditions]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3478, 0x4652 bytes
    // netio.sys .text:0x10984, 0x4dd3 bytes
    // netio.sys .text:0x22314, 0x4e8c bytes
    // netio.sys .text:0x10a34, 0x4dd3 bytes
    //
    _r51(sdk::unknown_ptr) free_conditions;
    
    // [FreeLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45674, 0x4652 bytes
    // netio.sys .text:0x50664, 0x4dd3 bytes
    // netio.sys .text:0x51ff0, 0x4e8c bytes
    // netio.sys .text:0x50624, 0x4dd3 bytes
    //
    _r52(sdk::unknown_ptr) free_layer;
    
    // [FreeLayers]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45738, 0x4652 bytes
    // netio.sys .text:0x5072c, 0x4dd3 bytes
    // netio.sys .text:0x520b8, 0x4e8c bytes
    // netio.sys .text:0x506ec, 0x4dd3 bytes
    //
    _r53(sdk::unknown_ptr) free_layers;
    
    // [FreeMatchBufEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6464, 0x4652 bytes
    // netio.sys .text:0x489c, 0x4dd3 bytes
    // netio.sys .text:0x1df8, 0x4e8c bytes
    // netio.sys .text:0x48ac, 0x4dd3 bytes
    //
    _r54(sdk::unknown_ptr) free_match_buf_entry;
    
    // [FreeMatchBufIndexList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x223e0, 0x4652 bytes
    // netio.sys .text:0x5459c, 0x4dd3 bytes
    // netio.sys .text:0x197c4, 0x4e8c bytes
    // netio.sys .text:0x5455c, 0x4dd3 bytes
    //
    _r55(sdk::unknown_ptr) free_match_buf_index_list;
    
    // [FreeMatchBufListInternal]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6440, 0x4652 bytes
    // netio.sys .text:0x4870, 0x4dd3 bytes
    // netio.sys .text:0x1dcc, 0x4e8c bytes
    // netio.sys .text:0x4880, 0x4dd3 bytes
    //
    _r56(sdk::unknown_ptr) free_match_buf_list_internal;
    
    // [FreeMibTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ab40, 0x4652 bytes
    // netio.sys .text:0x1f130, 0x4dd3 bytes
    // netio.sys .text:0x21520, 0x4e8c bytes
    // netio.sys .text:0x1f1c0, 0x4dd3 bytes
    //
    _r57(sdk::unknown_ptr) free_mib_table;
    
    // [FreeSomeCacheBucketEntries]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46ec, 0x4652 bytes
    // netio.sys .text:0xeed0, 0x4dd3 bytes
    // netio.sys .text:0x221dc, 0x4e8c bytes
    // netio.sys .text:0xef80, 0x4dd3 bytes
    //
    _r58(sdk::unknown_ptr) free_some_cache_bucket_entries;
    
    // [FreeSomeCacheEntries]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x33f0, 0x4652 bytes
    // netio.sys .text:0x10fb8, 0x4dd3 bytes
    // netio.sys .text:0x22174, 0x4e8c bytes
    // netio.sys .text:0x11068, 0x4dd3 bytes
    //
    _r59(sdk::unknown_ptr) free_some_cache_entries;
    
    // [FreeWFPFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23f14, 0x4652 bytes
    // netio.sys .text:0x1cce8, 0x4dd3 bytes
    // netio.sys .text:0x18a38, 0x4e8c bytes
    // netio.sys .text:0x1cd78, 0x4dd3 bytes
    //
    _r60(sdk::unknown_ptr) free_wfp_filter;
    
    // [FwpmEventProviderCreate0]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a480, 0x4652 bytes
    // netio.sys PAGE:0x85f20, 0x4dd3 bytes
    // netio.sys PAGE:0x88390, 0x4e8c bytes
    // netio.sys PAGE:0x85f20, 0x4dd3 bytes
    //
    _r61(sdk::unknown_ptr) fwpm_event_provider_create0;
    
    // [FwpmEventProviderDestroy0]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c720, 0x4652 bytes
    // netio.sys PAGE:0x876b0, 0x4dd3 bytes
    // netio.sys PAGE:0x89930, 0x4e8c bytes
    // netio.sys PAGE:0x876b0, 0x4dd3 bytes
    //
    _r62(sdk::unknown_ptr) fwpm_event_provider_destroy0;
    
    // [FwpmEventProviderFireNetEvent0]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50bd0, 0x4652 bytes
    // netio.sys .text:0x5fa50, 0x4dd3 bytes
    // netio.sys .text:0x5f470, 0x4e8c bytes
    // netio.sys .text:0x5fa10, 0x4dd3 bytes
    //
    _r63(sdk::unknown_ptr) fwpm_event_provider_fire_net_event0;
    
    // [FwpmEventProviderIsNetEventTypeEnabled0]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50be0, 0x4652 bytes
    // netio.sys .text:0x5fa70, 0x4dd3 bytes
    // netio.sys .text:0x5f490, 0x4e8c bytes
    // netio.sys .text:0x5fa30, 0x4dd3 bytes
    //
    _r64(sdk::unknown_ptr) fwpm_event_provider_is_net_event_type_enabled0;
    
    // [FwppAdvanceStreamDataPastOffset]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48b30, 0x4652 bytes
    // netio.sys .text:0x566e0, 0x4dd3 bytes
    // netio.sys .text:0x564e0, 0x4e8c bytes
    // netio.sys .text:0x566a0, 0x4dd3 bytes
    //
    _r65(sdk::unknown_ptr) fwpp_advance_stream_data_past_offset;
    
    // [FwppCopyStreamDataToBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48b40, 0x4652 bytes
    // netio.sys .text:0x19380, 0x4dd3 bytes
    // netio.sys .text:0x11db0, 0x4e8c bytes
    // netio.sys .text:0x19410, 0x4dd3 bytes
    //
    _r66(sdk::unknown_ptr) fwpp_copy_stream_data_to_buffer;
    
    // [FwppLogVpnEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50c40, 0x4652 bytes
    // netio.sys .text:0x5fae0, 0x4dd3 bytes
    // netio.sys .text:0x5f500, 0x4e8c bytes
    // netio.sys .text:0x5faa0, 0x4dd3 bytes
    //
    _r67(sdk::unknown_ptr) fwpp_log_vpn_event;
    
    // [FwppStreamContinue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48c20, 0x4652 bytes
    // netio.sys .text:0x56700, 0x4dd3 bytes
    // netio.sys .text:0x56500, 0x4e8c bytes
    // netio.sys .text:0x566c0, 0x4dd3 bytes
    //
    _r68(sdk::unknown_ptr) fwpp_stream_continue;
    
    // [FwppStreamDeleteDpcQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15390, 0x4652 bytes
    // netio.sys .text:0x1b250, 0x4dd3 bytes
    // netio.sys .text:0x13540, 0x4e8c bytes
    // netio.sys .text:0x1b2e0, 0x4dd3 bytes
    //
    _r69(sdk::unknown_ptr) fwpp_stream_delete_dpc_queue;
    
    // [FwppStreamInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48d10, 0x4652 bytes
    // netio.sys .text:0x56800, 0x4dd3 bytes
    // netio.sys .text:0x2b840, 0x4e8c bytes
    // netio.sys .text:0x567c0, 0x4dd3 bytes
    //
    _r70(sdk::unknown_ptr) fwpp_stream_inject;
    
    // [FwppTruncateStreamDataAfterOffset]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24fb0, 0x4652 bytes
    // netio.sys .text:0x569b0, 0x4dd3 bytes
    // netio.sys .text:0x56600, 0x4e8c bytes
    // netio.sys .text:0x56970, 0x4dd3 bytes
    //
    _r71(sdk::unknown_ptr) fwpp_truncate_stream_data_after_offset;
    
    // [FWPS_BUILTIN_CALLOUT_LAYERS]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x58020, 0x4652 bytes
    // netio.sys .rdata:0x6e440, 0x4dd3 bytes
    // netio.sys .rdata:0x70f00, 0x4e8c bytes
    // netio.sys .rdata:0x6e440, 0x4dd3 bytes
    //
    _r72(sdk::unknown_ptr) fwps_builtin_callout_layers;
    
    // [gAgileVPNDispatchTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61430, 0x4652 bytes
    // netio.sys .data:0x7a4b0, 0x4dd3 bytes
    // netio.sys .data:0x7b550, 0x4e8c bytes
    // netio.sys .data:0x7a4b0, 0x4dd3 bytes
    //
    _r73(sdk::unknown_ptr) g_agile_vpn_dispatch_table;
    
    // [gBfeEngineSd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x615c0, 0x4652 bytes
    // netio.sys .data:0x7a5c8, 0x4dd3 bytes
    // netio.sys .data:0x7b668, 0x4e8c bytes
    // netio.sys .data:0x7a5c8, 0x4dd3 bytes
    //
    _r74(sdk::unknown_ptr) g_bfe_engine_sd;
    
    // [gBfeEngineSdAlloc]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x615c8, 0x4652 bytes
    // netio.sys .data:0x7a5d0, 0x4dd3 bytes
    // netio.sys .data:0x7b670, 0x4e8c bytes
    // netio.sys .data:0x7a5d0, 0x4dd3 bytes
    //
    _r75(sdk::unknown_ptr) g_bfe_engine_sd_alloc;
    
    // [gClassifyContextHandleValue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c98, 0x4652 bytes
    // netio.sys .data:0x7af60, 0x4dd3 bytes
    // netio.sys .data:0x7be18, 0x4e8c bytes
    // netio.sys .data:0x7af60, 0x4dd3 bytes
    //
    _r76(sdk::unknown_ptr) g_classify_context_handle_value;
    
    // [gDiagnosticHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x614f0, 0x4652 bytes
    // netio.sys .data:0x7a578, 0x4dd3 bytes
    // netio.sys .data:0x7b618, 0x4e8c bytes
    // netio.sys .data:0x7a578, 0x4dd3 bytes
    //
    _r77(sdk::unknown_ptr) g_diagnostic_handle;
    
    // [gFastCacheType]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59580, 0x4652 bytes
    // netio.sys .rdata:0x70870, 0x4dd3 bytes
    // netio.sys .rdata:0x71040, 0x4e8c bytes
    // netio.sys .rdata:0x70870, 0x4dd3 bytes
    //
    _r78(sdk::unknown_ptr) g_fast_cache_type;
    
    // [gFastClassifyCount]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61b40, 0x4652 bytes
    // netio.sys .data:0x7abd8, 0x4dd3 bytes
    // netio.sys .data:0x7bc80, 0x4e8c bytes
    // netio.sys .data:0x7abd8, 0x4dd3 bytes
    //
    _r79(sdk::unknown_ptr) g_fast_classify_count;
    
    // [gFeCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c58, 0x4652 bytes
    // netio.sys .data:0x7af10, 0x4dd3 bytes
    // netio.sys .data:0x7bdb8, 0x4e8c bytes
    // netio.sys .data:0x7af10, 0x4dd3 bytes
    //
    _r80(sdk::unknown_ptr) g_fe_callout;
    
    // [gIPsecGwDispatchTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61400, 0x4652 bytes
    // netio.sys .data:0x7a480, 0x4dd3 bytes
    // netio.sys .data:0x7b520, 0x4e8c bytes
    // netio.sys .data:0x7a480, 0x4dd3 bytes
    //
    _r81(sdk::unknown_ptr) g_i_psec_gw_dispatch_table;
    
    // [gNdisGenericObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x614e8, 0x4652 bytes
    // netio.sys .data:0x7a570, 0x4dd3 bytes
    // netio.sys .data:0x7b610, 0x4e8c bytes
    // netio.sys .data:0x7a570, 0x4dd3 bytes
    //
    _r82(sdk::unknown_ptr) g_ndis_generic_object;
    
    // [gPacketTagCount]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c48, 0x4652 bytes
    // netio.sys .data:0x7acf0, 0x4dd3 bytes
    // netio.sys .data:0x7bda0, 0x4e8c bytes
    // netio.sys .data:0x7acf0, 0x4dd3 bytes
    //
    _r83(sdk::unknown_ptr) g_packet_tag_count;
    
    // [gStreamPoolsComponent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61be8, 0x4652 bytes
    // netio.sys .data:0x7ac88, 0x4dd3 bytes
    // netio.sys .data:0x7bd38, 0x4e8c bytes
    // netio.sys .data:0x7ac88, 0x4dd3 bytes
    //
    _r84(sdk::unknown_ptr) g_stream_pools_component;
    
    // [gStreamShimComponent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61b50, 0x4652 bytes
    // netio.sys .data:0x7abf0, 0x4dd3 bytes
    // netio.sys .data:0x7bc90, 0x4e8c bytes
    // netio.sys .data:0x7abf0, 0x4dd3 bytes
    //
    _r85(sdk::unknown_ptr) g_stream_shim_component;
    
    // [gVerifierFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c68, 0x4652 bytes
    // netio.sys .data:0x7af18, 0x4dd3 bytes
    // netio.sys .data:0x7bdc0, 0x4e8c bytes
    // netio.sys .data:0x7af18, 0x4dd3 bytes
    //
    _r86(sdk::unknown_ptr) g_verifier_flags;
    
    // [gWfpGlobal]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61458, 0x4652 bytes
    // netio.sys .data:0x7a560, 0x4dd3 bytes
    // netio.sys .data:0x7b600, 0x4e8c bytes
    // netio.sys .data:0x7a560, 0x4dd3 bytes
    //
    _r87(sdk::unknown_ptr) g_wfp_global;
    
    // [gWfpNblInfoDispTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x613a0, 0x4652 bytes
    // netio.sys .data:0x7a420, 0x4dd3 bytes
    // netio.sys .data:0x7b4c0, 0x4e8c bytes
    // netio.sys .data:0x7a420, 0x4dd3 bytes
    //
    _r88(sdk::unknown_ptr) g_wfp_nbl_info_disp_table;
    
    // [gWfpNblInfoPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61388, 0x4652 bytes
    // netio.sys .data:0x7a408, 0x4dd3 bytes
    // netio.sys .data:0x7b4a8, 0x4e8c bytes
    // netio.sys .data:0x7a408, 0x4dd3 bytes
    //
    _r89(sdk::unknown_ptr) g_wfp_nbl_info_pool;
    
    // [gWfpObjectManager]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61460, 0x4652 bytes
    // netio.sys .data:0x7a4e0, 0x4dd3 bytes
    // netio.sys .data:0x7b580, 0x4e8c bytes
    // netio.sys .data:0x7a4e0, 0x4dd3 bytes
    //
    _r90(sdk::unknown_ptr) g_wfp_object_manager;
    
    // [gWfpPerProContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61500, 0x4652 bytes
    // netio.sys .data:0x7a588, 0x4dd3 bytes
    // netio.sys .data:0x7b628, 0x4e8c bytes
    // netio.sys .data:0x7a588, 0x4dd3 bytes
    //
    _r91(sdk::unknown_ptr) g_wfp_per_pro_context;
    
    // [gWfpPerProContextSize]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x614f8, 0x4652 bytes
    // netio.sys .data:0x7a580, 0x4dd3 bytes
    // netio.sys .data:0x7b620, 0x4e8c bytes
    // netio.sys .data:0x7a580, 0x4dd3 bytes
    //
    _r92(sdk::unknown_ptr) g_wfp_per_pro_context_size;
    
    // [gWfpReassemblyContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61380, 0x4652 bytes
    // netio.sys .data:0x7a400, 0x4dd3 bytes
    // netio.sys .data:0x7b4a0, 0x4e8c bytes
    // netio.sys .data:0x7a400, 0x4dd3 bytes
    //
    _r93(sdk::unknown_ptr) g_wfp_reassembly_context;
    
    // [gWfpStackBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c78, 0x4652 bytes
    // netio.sys .data:0x7af58, 0x4dd3 bytes
    // netio.sys .data:0x7be10, 0x4e8c bytes
    // netio.sys .data:0x7af58, 0x4dd3 bytes
    //
    _r94(sdk::unknown_ptr) g_wfp_stack_block;
    
    // [GetAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b30, 0x4652 bytes
    // netio.sys .text:0x40300, 0x4dd3 bytes
    // netio.sys .text:0x41800, 0x4e8c bytes
    // netio.sys .text:0x402c0, 0x4dd3 bytes
    //
    _r95(sdk::unknown_ptr) get_anycast_ip_address_entry;
    
    // [GetAnycastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b40, 0x4652 bytes
    // netio.sys .text:0x40320, 0x4dd3 bytes
    // netio.sys .text:0x41820, 0x4e8c bytes
    // netio.sys .text:0x402e0, 0x4dd3 bytes
    //
    _r96(sdk::unknown_ptr) get_anycast_ip_address_table;
    
    // [GetBestInterface]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b720, 0x4652 bytes
    // netio.sys .text:0x420c0, 0x4dd3 bytes
    // netio.sys .text:0x435b0, 0x4e8c bytes
    // netio.sys .text:0x42080, 0x4dd3 bytes
    //
    _r97(sdk::unknown_ptr) get_best_interface;
    
    // [GetBestInterfaceEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b780, 0x4652 bytes
    // netio.sys .text:0x42120, 0x4dd3 bytes
    // netio.sys .text:0x43610, 0x4e8c bytes
    // netio.sys .text:0x420e0, 0x4dd3 bytes
    //
    _r98(sdk::unknown_ptr) get_best_interface_ex;
    
    // [GetBestRoute2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16d50, 0x4652 bytes
    // netio.sys .text:0x136b0, 0x4dd3 bytes
    // netio.sys .text:0x13e80, 0x4e8c bytes
    // netio.sys .text:0x13760, 0x4dd3 bytes
    //
    _r99(sdk::unknown_ptr) get_best_route2;
    
    // [GetBytesNeededForComplexValues]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4496c, 0x4652 bytes
    // netio.sys .text:0x4f40c, 0x4dd3 bytes
    // netio.sys .text:0x50cfc, 0x4e8c bytes
    // netio.sys .text:0x4f3cc, 0x4dd3 bytes
    //
    _s00(sdk::unknown_ptr) get_bytes_needed_for_complex_values;
    
    // [GetCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x61f0, 0x4652 bytes
    // netio.sys .text:0xeaf4, 0x4dd3 bytes
    // netio.sys .text:0xc2d8, 0x4e8c bytes
    // netio.sys .text:0xeba4, 0x4dd3 bytes
    //
    _s01(sdk::unknown_ptr) get_callout_entry;
    
    // [GetCurrentThreadCompartmentId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1706c, 0x4652 bytes
    // netio.sys .text:0x13d58, 0x4dd3 bytes
    // netio.sys .text:0x14528, 0x4e8c bytes
    // netio.sys .text:0x13e08, 0x4dd3 bytes
    //
    _s02(sdk::unknown_ptr) get_current_thread_compartment_id;
    
    // [GetDefaultCompartmentId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38d00, 0x4652 bytes
    // netio.sys .text:0x3f2d0, 0x4dd3 bytes
    // netio.sys .text:0x40800, 0x4e8c bytes
    // netio.sys .text:0x3f290, 0x4dd3 bytes
    //
    _s03(sdk::unknown_ptr) get_default_compartment_id;
    
    // [GetIfEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x201f0, 0x4652 bytes
    // netio.sys .text:0x1e9d0, 0x4dd3 bytes
    // netio.sys .text:0x1bf60, 0x4e8c bytes
    // netio.sys .text:0x1ea60, 0x4dd3 bytes
    //
    _s04(sdk::unknown_ptr) get_if_entry2;
    
    // [GetIfStackTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c9e0, 0x4652 bytes
    // netio.sys .text:0x43f50, 0x4dd3 bytes
    // netio.sys .text:0x456d0, 0x4e8c bytes
    // netio.sys .text:0x43f10, 0x4dd3 bytes
    //
    _s05(sdk::unknown_ptr) get_if_stack_table;
    
    // [GetIfTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1fc00, 0x4652 bytes
    // netio.sys .text:0x201f0, 0x4dd3 bytes
    // netio.sys .text:0x1bf10, 0x4e8c bytes
    // netio.sys .text:0x20280, 0x4dd3 bytes
    //
    _s06(sdk::unknown_ptr) get_if_table2;
    
    // [GetIfTable2Ex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cb00, 0x4652 bytes
    // netio.sys .text:0x44080, 0x4dd3 bytes
    // netio.sys .text:0x45800, 0x4e8c bytes
    // netio.sys .text:0x44040, 0x4dd3 bytes
    //
    _s07(sdk::unknown_ptr) get_if_table2_ex;
    
    // [GetInvertedIfStackTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cb30, 0x4652 bytes
    // netio.sys .text:0x440c0, 0x4dd3 bytes
    // netio.sys .text:0x45840, 0x4e8c bytes
    // netio.sys .text:0x44080, 0x4dd3 bytes
    //
    _s08(sdk::unknown_ptr) get_inverted_if_stack_table;
    
    // [GetIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a7f0, 0x4652 bytes
    // netio.sys .text:0x41070, 0x4dd3 bytes
    // netio.sys .text:0x42540, 0x4e8c bytes
    // netio.sys .text:0x41030, 0x4dd3 bytes
    //
    _s09(sdk::unknown_ptr) get_ip_forward_entry2;
    
    // [GetIpForwardTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a800, 0x4652 bytes
    // netio.sys .text:0x41090, 0x4dd3 bytes
    // netio.sys .text:0x42560, 0x4e8c bytes
    // netio.sys .text:0x41050, 0x4dd3 bytes
    //
    _s10(sdk::unknown_ptr) get_ip_forward_table2;
    
    // [GetIpInterfaceEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20c40, 0x4652 bytes
    // netio.sys .text:0x1d280, 0x4dd3 bytes
    // netio.sys .text:0x1a610, 0x4e8c bytes
    // netio.sys .text:0x1d310, 0x4dd3 bytes
    //
    _s11(sdk::unknown_ptr) get_ip_interface_entry;
    
    // [GetIpInterfaceTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cb40, 0x4652 bytes
    // netio.sys .text:0x440e0, 0x4dd3 bytes
    // netio.sys .text:0x45860, 0x4e8c bytes
    // netio.sys .text:0x440a0, 0x4dd3 bytes
    //
    _s12(sdk::unknown_ptr) get_ip_interface_table;
    
    // [GetIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b790, 0x4652 bytes
    // netio.sys .text:0x42140, 0x4dd3 bytes
    // netio.sys .text:0x43630, 0x4e8c bytes
    // netio.sys .text:0x42100, 0x4dd3 bytes
    //
    _s13(sdk::unknown_ptr) get_ip_net_entry2;
    
    // [GetIpNetTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b7a0, 0x4652 bytes
    // netio.sys .text:0x42160, 0x4dd3 bytes
    // netio.sys .text:0x43650, 0x4e8c bytes
    // netio.sys .text:0x42120, 0x4dd3 bytes
    //
    _s14(sdk::unknown_ptr) get_ip_net_table2;
    
    // [GetIpNetworkConnectionBandwidthEstimates]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cb50, 0x4652 bytes
    // netio.sys .text:0x44100, 0x4dd3 bytes
    // netio.sys .text:0x45880, 0x4e8c bytes
    // netio.sys .text:0x440c0, 0x4dd3 bytes
    //
    _s15(sdk::unknown_ptr) get_ip_network_connection_bandwidth_estimates;
    
    // [GetIpPathEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c520, 0x4652 bytes
    // netio.sys .text:0x42fa0, 0x4dd3 bytes
    // netio.sys .text:0x44460, 0x4e8c bytes
    // netio.sys .text:0x42f60, 0x4dd3 bytes
    //
    _s16(sdk::unknown_ptr) get_ip_path_entry;
    
    // [GetIpPathTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c710, 0x4652 bytes
    // netio.sys .text:0x431b0, 0x4dd3 bytes
    // netio.sys .text:0x44670, 0x4e8c bytes
    // netio.sys .text:0x43170, 0x4dd3 bytes
    //
    _s17(sdk::unknown_ptr) get_ip_path_table;
    
    // [GetLayerFromIdRead]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2f84, 0x4652 bytes
    // netio.sys .text:0x66e8, 0x4dd3 bytes
    // netio.sys .text:0xc188, 0x4e8c bytes
    // netio.sys .text:0x6798, 0x4dd3 bytes
    //
    _s18(sdk::unknown_ptr) get_layer_from_id_read;
    
    // [GetModuleIdFromFamily]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1afc4, 0x4652 bytes
    // netio.sys .text:0x1367c, 0x4dd3 bytes
    // netio.sys .text:0x13e50, 0x4e8c bytes
    // netio.sys .text:0x1372c, 0x4dd3 bytes
    //
    _s19(sdk::unknown_ptr) get_module_id_from_family;
    
    // [GetMulticastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b60, 0x4652 bytes
    // netio.sys .text:0x40350, 0x4dd3 bytes
    // netio.sys .text:0x41850, 0x4e8c bytes
    // netio.sys .text:0x40310, 0x4dd3 bytes
    //
    _s20(sdk::unknown_ptr) get_multicast_ip_address_entry;
    
    // [GetMulticastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39b70, 0x4652 bytes
    // netio.sys .text:0x40370, 0x4dd3 bytes
    // netio.sys .text:0x41870, 0x4e8c bytes
    // netio.sys .text:0x40330, 0x4dd3 bytes
    //
    _s21(sdk::unknown_ptr) get_multicast_ip_address_table;
    
    // [GetNextFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22300, 0x4652 bytes
    // netio.sys .text:0x50c54, 0x4dd3 bytes
    // netio.sys .text:0x196dc, 0x4e8c bytes
    // netio.sys .text:0x50c14, 0x4dd3 bytes
    //
    _s22(sdk::unknown_ptr) get_next_filter;
    
    // [GetOffsetFromRouteKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18d60, 0x4652 bytes
    // netio.sys .text:0x13a94, 0x4dd3 bytes
    // netio.sys .text:0x14264, 0x4e8c bytes
    // netio.sys .text:0x13b44, 0x4dd3 bytes
    //
    _s23(sdk::unknown_ptr) get_offset_from_route_key;
    
    // [GetTeredoPort]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d620, 0x4652 bytes
    // netio.sys .text:0x44d00, 0x4dd3 bytes
    // netio.sys .text:0x46420, 0x4e8c bytes
    // netio.sys .text:0x44cc0, 0x4dd3 bytes
    //
    _s24(sdk::unknown_ptr) get_teredo_port;
    
    // [GetUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x192e0, 0x4652 bytes
    // netio.sys .text:0x1d560, 0x4dd3 bytes
    // netio.sys .text:0x171a0, 0x4e8c bytes
    // netio.sys .text:0x1d5f0, 0x4dd3 bytes
    //
    _s25(sdk::unknown_ptr) get_unicast_ip_address_entry;
    
    // [GetUnicastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ab50, 0x4652 bytes
    // netio.sys .text:0x1db90, 0x4dd3 bytes
    // netio.sys .text:0x1bf30, 0x4e8c bytes
    // netio.sys .text:0x1dc20, 0x4dd3 bytes
    //
    _s26(sdk::unknown_ptr) get_unicast_ip_address_table;
    
    // [HandleFilterDeref]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7934, 0x4652 bytes
    // netio.sys .text:0x4bc0, 0x4dd3 bytes
    // netio.sys .text:0x1f5c, 0x4e8c bytes
    // netio.sys .text:0x4bd0, 0x4dd3 bytes
    //
    _s27(sdk::unknown_ptr) handle_filter_deref;
    
    // [handleTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61520, 0x4652 bytes
    // netio.sys .data:0x7a5a0, 0x4dd3 bytes
    // netio.sys .data:0x7b640, 0x4e8c bytes
    // netio.sys .data:0x7a5a0, 0x4dd3 bytes
    //
    _s28(sdk::unknown_ptr) handle_table;
    
    // [handleTableLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61508, 0x4652 bytes
    // netio.sys .data:0x7a590, 0x4dd3 bytes
    // netio.sys .data:0x7b630, 0x4e8c bytes
    // netio.sys .data:0x7a590, 0x4dd3 bytes
    //
    _s29(sdk::unknown_ptr) handle_table_lock;
    
    // [HfAllocateHandle32]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ea80, 0x4652 bytes
    // netio.sys .text:0x25690, 0x4dd3 bytes
    // netio.sys .text:0x23070, 0x4e8c bytes
    // netio.sys .text:0x25720, 0x4dd3 bytes
    //
    _s30(sdk::unknown_ptr) hf_allocate_handle32;
    
    // [HfCreateFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f110, 0x4652 bytes
    // netio.sys .text:0x26e10, 0x4dd3 bytes
    // netio.sys .text:0x29570, 0x4e8c bytes
    // netio.sys .text:0x26ea0, 0x4dd3 bytes
    //
    _s31(sdk::unknown_ptr) hf_create_factory;
    
    // [HfDestroyFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37730, 0x4652 bytes
    // netio.sys .text:0x3da70, 0x4dd3 bytes
    // netio.sys .text:0x3ef40, 0x4e8c bytes
    // netio.sys .text:0x3da30, 0x4dd3 bytes
    //
    _s32(sdk::unknown_ptr) hf_destroy_factory;
    
    // [HfFreeHandle32]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37770, 0x4652 bytes
    // netio.sys .text:0x3dac0, 0x4dd3 bytes
    // netio.sys .text:0x3ef90, 0x4e8c bytes
    // netio.sys .text:0x3da80, 0x4dd3 bytes
    //
    _s33(sdk::unknown_ptr) hf_free_handle32;
    
    // [HfGetPointerFromHandle32]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24080, 0x4652 bytes
    // netio.sys .text:0x28760, 0x4dd3 bytes
    // netio.sys .text:0x1b230, 0x4e8c bytes
    // netio.sys .text:0x287f0, 0x4dd3 bytes
    //
    _s34(sdk::unknown_ptr) hf_get_pointer_from_handle32;
    
    // [HfResumeHandle32]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x377a0, 0x4652 bytes
    // netio.sys .text:0x3daf0, 0x4dd3 bytes
    // netio.sys .text:0x3efc0, 0x4e8c bytes
    // netio.sys .text:0x3dab0, 0x4dd3 bytes
    //
    _s35(sdk::unknown_ptr) hf_resume_handle32;
    
    // [HfSuspendHandle32]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37800, 0x4652 bytes
    // netio.sys .text:0x3db20, 0x4dd3 bytes
    // netio.sys .text:0x3eff0, 0x4e8c bytes
    // netio.sys .text:0x3dae0, 0x4dd3 bytes
    //
    _s36(sdk::unknown_ptr) hf_suspend_handle32;
    
    // [IPsecGwDispatchTableInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24640, 0x4652 bytes
    // netio.sys .text:0x291c0, 0x4dd3 bytes
    // netio.sys .text:0x29ff0, 0x4e8c bytes
    // netio.sys .text:0x29250, 0x4dd3 bytes
    //
    _s37(sdk::unknown_ptr) i_psec_gw_dispatch_table_init;
    
    // [IPsecGwGetTunnelInfoFromIPInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f170, 0x4652 bytes
    // netio.sys .text:0x5dbd0, 0x4dd3 bytes
    // netio.sys .text:0x5d2a0, 0x4e8c bytes
    // netio.sys .text:0x5db90, 0x4dd3 bytes
    //
    _s38(sdk::unknown_ptr) i_psec_gw_get_tunnel_info_from_ip_information;
    
    // [IPsecGwIsUdpEspPacket]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f1b0, 0x4652 bytes
    // netio.sys .text:0x5dc10, 0x4dd3 bytes
    // netio.sys .text:0x5d2e0, 0x4e8c bytes
    // netio.sys .text:0x5dbd0, 0x4dd3 bytes
    //
    _s39(sdk::unknown_ptr) i_psec_gw_is_udp_esp_packet;
    
    // [IPsecGwProcessSecureNbl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f1c0, 0x4652 bytes
    // netio.sys .text:0x5dc30, 0x4dd3 bytes
    // netio.sys .text:0x5d300, 0x4e8c bytes
    // netio.sys .text:0x5dbf0, 0x4dd3 bytes
    //
    _s40(sdk::unknown_ptr) i_psec_gw_process_secure_nbl;
    
    // [IPsecGwSetCallbackDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f250, 0x4652 bytes
    // netio.sys .text:0x5dcc0, 0x4dd3 bytes
    // netio.sys .text:0x5d390, 0x4e8c bytes
    // netio.sys .text:0x5dc80, 0x4dd3 bytes
    //
    _s41(sdk::unknown_ptr) i_psec_gw_set_callback_dispatch;
    
    // [IPsecGwTransformClearTextPacket]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f270, 0x4652 bytes
    // netio.sys .text:0x5dcf0, 0x4dd3 bytes
    // netio.sys .text:0x5d3c0, 0x4e8c bytes
    // netio.sys .text:0x5dcb0, 0x4dd3 bytes
    //
    _s42(sdk::unknown_ptr) i_psec_gw_transform_clear_text_packet;
    
    // [if_indextoname]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39a60, 0x4652 bytes
    // netio.sys .text:0x401a0, 0x4dd3 bytes
    // netio.sys .text:0x416a0, 0x4e8c bytes
    // netio.sys .text:0x40160, 0x4dd3 bytes
    //
    _s43(sdk::unknown_ptr) if_indextoname;
    
    // [if_nametoindex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39ab0, 0x4652 bytes
    // netio.sys .text:0x401f0, 0x4dd3 bytes
    // netio.sys .text:0x416f0, 0x4e8c bytes
    // netio.sys .text:0x401b0, 0x4dd3 bytes
    //
    _s44(sdk::unknown_ptr) if_nametoindex;
    
    // [__IMPORT_DESCRIPTOR_NDIS]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .idata:0x677fc, 0x4652 bytes
    // netio.sys .idata:0x81924, 0x4dd3 bytes
    // netio.sys .idata:0x83964, 0x4e8c bytes
    // netio.sys .idata:0x81924, 0x4dd3 bytes
    //
    _s45(sdk::unknown_ptr) import_descriptor_ndis;
    
    // [IN4_UNCANONICALIZE_SCOPE_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a810, 0x4652 bytes
    // netio.sys .text:0x410b0, 0x4dd3 bytes
    // netio.sys .text:0x42580, 0x4e8c bytes
    // netio.sys .text:0x41070, 0x4dd3 bytes
    //
    _s46(sdk::function<void(const struct nt::in_addr_t*, struct ndis::scope_id_t*)>*) in4_uncanonicalize_scope_id;
    
    // [in6addr_teredoprefix]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x599b8, 0x4652 bytes
    // netio.sys .rdata:0x72700, 0x4dd3 bytes
    // netio.sys .rdata:0x6d688, 0x4e8c bytes
    // netio.sys .rdata:0x72700, 0x4dd3 bytes
    //
    _s47(sdk::unknown_ptr) in6addr_teredoprefix;
    
    // [in6addr_teredoprefix_old]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x599a8, 0x4652 bytes
    // netio.sys .rdata:0x726f0, 0x4dd3 bytes
    // netio.sys .rdata:0x6d698, 0x4e8c bytes
    // netio.sys .rdata:0x726f0, 0x4dd3 bytes
    //
    _s48(sdk::unknown_ptr) in6addr_teredoprefix_old;
    
    // [IndexHashAdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4130, 0x4652 bytes
    // netio.sys .text:0x1a210, 0x4dd3 bytes
    // netio.sys .text:0x204c0, 0x4e8c bytes
    // netio.sys .text:0x1a2a0, 0x4dd3 bytes
    //
    _s49(sdk::unknown_ptr) index_hash_add;
    
    // [IndexHashClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xbbb0, 0x4652 bytes
    // netio.sys .text:0xb450, 0x4dd3 bytes
    // netio.sys .text:0x5a50, 0x4e8c bytes
    // netio.sys .text:0xb500, 0x4dd3 bytes
    //
    _s50(sdk::unknown_ptr) index_hash_classify;
    
    // [IndexHashCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b10, 0x4652 bytes
    // netio.sys .text:0x22a70, 0x4dd3 bytes
    // netio.sys .text:0x25d80, 0x4e8c bytes
    // netio.sys .text:0x22b00, 0x4dd3 bytes
    //
    _s51(sdk::unknown_ptr) index_hash_create;
    
    // [IndexHashDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6120, 0x4652 bytes
    // netio.sys .text:0x1b7c0, 0x4dd3 bytes
    // netio.sys .text:0x21550, 0x4e8c bytes
    // netio.sys .text:0x1b850, 0x4dd3 bytes
    //
    _s52(sdk::unknown_ptr) index_hash_delete;
    
    // [IndexHashEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x9f50, 0x4652 bytes
    // netio.sys .text:0x106a0, 0x4dd3 bytes
    // netio.sys .text:0x20990, 0x4e8c bytes
    // netio.sys .text:0x10750, 0x4dd3 bytes
    //
    _s53(sdk::unknown_ptr) index_hash_enum;
    
    // [IndexHashFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1540, 0x4652 bytes
    // netio.sys .text:0x54aa0, 0x4dd3 bytes
    // netio.sys .text:0x559b0, 0x4e8c bytes
    // netio.sys .text:0x54a60, 0x4dd3 bytes
    //
    _s54(sdk::unknown_ptr) index_hash_free;
    
    // [IndexListAdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4410, 0x4652 bytes
    // netio.sys .text:0x1b280, 0x4dd3 bytes
    // netio.sys .text:0x207d0, 0x4e8c bytes
    // netio.sys .text:0x1b310, 0x4dd3 bytes
    //
    _s55(sdk::unknown_ptr) index_list_add;
    
    // [IndexListClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xc160, 0x4652 bytes
    // netio.sys .text:0xb090, 0x4dd3 bytes
    // netio.sys .text:0x5fc0, 0x4e8c bytes
    // netio.sys .text:0xb140, 0x4dd3 bytes
    //
    _s56(sdk::unknown_ptr) index_list_classify;
    
    // [IndexListClassify2Slow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22124, 0x4652 bytes
    // netio.sys .text:0x54820, 0x4dd3 bytes
    // netio.sys .text:0x194cc, 0x4e8c bytes
    // netio.sys .text:0x547e0, 0x4dd3 bytes
    //
    _s57(sdk::unknown_ptr) index_list_classify2_slow;
    
    // [IndexListCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23bf0, 0x4652 bytes
    // netio.sys .text:0x28050, 0x4dd3 bytes
    // netio.sys .text:0x28930, 0x4e8c bytes
    // netio.sys .text:0x280e0, 0x4dd3 bytes
    //
    _s58(sdk::unknown_ptr) index_list_create;
    
    // [IndexListDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x61c0, 0x4652 bytes
    // netio.sys .text:0x1c2a0, 0x4dd3 bytes
    // netio.sys .text:0x21b00, 0x4e8c bytes
    // netio.sys .text:0x1c330, 0x4dd3 bytes
    //
    _s59(sdk::unknown_ptr) index_list_delete;
    
    // [IndexListEnum]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xa8d0, 0x4652 bytes
    // netio.sys .text:0xab90, 0x4dd3 bytes
    // netio.sys .text:0x4ef0, 0x4e8c bytes
    // netio.sys .text:0xac40, 0x4dd3 bytes
    //
    _s60(sdk::unknown_ptr) index_list_enum;
    
    // [IndexListFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24230, 0x4652 bytes
    // netio.sys .text:0x28910, 0x4dd3 bytes
    // netio.sys .text:0x29700, 0x4e8c bytes
    // netio.sys .text:0x289a0, 0x4dd3 bytes
    //
    _s61(sdk::unknown_ptr) index_list_free;
    
    // [INET_ADDR_EQUAL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f308, 0x4652 bytes
    // netio.sys .text:0x411c0, 0x4dd3 bytes
    // netio.sys .text:0x42690, 0x4e8c bytes
    // netio.sys .text:0x41180, 0x4dd3 bytes
    //
    _s62(sdk::function<uint8_t(uint16_t, const void*, const void*)>*) inet_addr_equal;
    
    // [INET_UNALIGNED_ADDR_EQUAL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f308, 0x4652 bytes
    // netio.sys .text:0x411c0, 0x4dd3 bytes
    // netio.sys .text:0x42690, 0x4e8c bytes
    // netio.sys .text:0x41180, 0x4dd3 bytes
    //
    _s63(sdk::unknown_ptr) inet_unaligned_addr_equal;
    
    // [INETADDR_SETSOCKADDR]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18bb4, 0x4652 bytes
    // netio.sys .text:0x13b50, 0x4dd3 bytes
    // netio.sys .text:0x14320, 0x4e8c bytes
    // netio.sys .text:0x13c00, 0x4dd3 bytes
    //
    _s64(sdk::unknown_ptr) inetaddr_setsockaddr;
    
    // [InitDefaultCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cdec, 0x4652 bytes
    // netio.sys .text:0x23314, 0x4dd3 bytes
    // netio.sys .text:0x261dc, 0x4e8c bytes
    // netio.sys .text:0x233a4, 0x4dd3 bytes
    //
    _s65(sdk::unknown_ptr) init_default_callout;
    
    // [InitIndexes]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cba8, 0x4652 bytes
    // netio.sys .text:0x23010, 0x4dd3 bytes
    // netio.sys .text:0x25ec0, 0x4e8c bytes
    // netio.sys .text:0x230a0, 0x4dd3 bytes
    //
    _s66(sdk::unknown_ptr) init_indexes;
    
    // [InitLayers]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cca8, 0x4652 bytes
    // netio.sys .text:0x231c0, 0x4dd3 bytes
    // netio.sys .text:0x26084, 0x4e8c bytes
    // netio.sys .text:0x23250, 0x4dd3 bytes
    //
    _s67(sdk::unknown_ptr) init_layers;
    
    // [InitializeCompartmentEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38dd0, 0x4652 bytes
    // netio.sys .text:0x3f3b0, 0x4dd3 bytes
    // netio.sys .text:0x408e0, 0x4e8c bytes
    // netio.sys .text:0x3f370, 0x4dd3 bytes
    //
    _s68(sdk::unknown_ptr) initialize_compartment_entry;
    
    // [InitializeFastCaching]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c870, 0x4652 bytes
    // netio.sys .text:0x22c94, 0x4dd3 bytes
    // netio.sys .text:0x25544, 0x4e8c bytes
    // netio.sys .text:0x22d24, 0x4dd3 bytes
    //
    _s69(sdk::unknown_ptr) initialize_fast_caching;
    
    // [InitializeIpForwardEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a920, 0x4652 bytes
    // netio.sys .text:0x411f0, 0x4dd3 bytes
    // netio.sys .text:0x426c0, 0x4e8c bytes
    // netio.sys .text:0x411b0, 0x4dd3 bytes
    //
    _s70(sdk::unknown_ptr) initialize_ip_forward_entry;
    
    // [InitializeIpInterfaceEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cc50, 0x4652 bytes
    // netio.sys .text:0x44220, 0x4dd3 bytes
    // netio.sys .text:0x459a0, 0x4e8c bytes
    // netio.sys .text:0x441e0, 0x4dd3 bytes
    //
    _s71(sdk::unknown_ptr) initialize_ip_interface_entry;
    
    // [InitializeUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39bc0, 0x4652 bytes
    // netio.sys .text:0x403a0, 0x4dd3 bytes
    // netio.sys .text:0x418a0, 0x4e8c bytes
    // netio.sys .text:0x40360, 0x4dd3 bytes
    //
    _s72(sdk::unknown_ptr) initialize_unicast_ip_address_entry;
    
    // [InsertAcceptBypassCacheEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8bc8, 0x4652 bytes
    // netio.sys .text:0x12df0, 0x4dd3 bytes
    // netio.sys .text:0xfda0, 0x4e8c bytes
    // netio.sys .text:0x12ea0, 0x4dd3 bytes
    //
    _s73(sdk::unknown_ptr) insert_accept_bypass_cache_entry;
    
    // [InsertCacheEntryLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x65c4, 0x4652 bytes
    // netio.sys .text:0x52b78, 0x4dd3 bytes
    // netio.sys .text:0x3ac0, 0x4e8c bytes
    // netio.sys .text:0x52b38, 0x4dd3 bytes
    //
    _s74(sdk::unknown_ptr) insert_cache_entry_lru;
    
    // [InsertConnectBypassCacheEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x732c, 0x4652 bytes
    // netio.sys .text:0x1a9d0, 0x4dd3 bytes
    // netio.sys .text:0x12e28, 0x4e8c bytes
    // netio.sys .text:0x1aa60, 0x4dd3 bytes
    //
    _s75(sdk::unknown_ptr) insert_connect_bypass_cache_entry;
    
    // [InsertFilterToMatchBuf]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xdc0c, 0x4652 bytes
    // netio.sys .text:0x10ed8, 0x4dd3 bytes
    // netio.sys .text:0x21314, 0x4e8c bytes
    // netio.sys .text:0x10f88, 0x4dd3 bytes
    //
    _s76(sdk::unknown_ptr) insert_filter_to_match_buf;
    
    // [InternalCleanPersistentAddresses]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39bf4, 0x4652 bytes
    // netio.sys .text:0x403dc, 0x4dd3 bytes
    // netio.sys .text:0x418dc, 0x4e8c bytes
    // netio.sys .text:0x4039c, 0x4dd3 bytes
    //
    _s77(sdk::unknown_ptr) internal_clean_persistent_addresses;
    
    // [InternalCleanPersistentIsolationInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cc88, 0x4652 bytes
    // netio.sys .text:0x44260, 0x4dd3 bytes
    // netio.sys .text:0x459e0, 0x4e8c bytes
    // netio.sys .text:0x44220, 0x4dd3 bytes
    //
    _s78(sdk::unknown_ptr) internal_clean_persistent_isolation_info;
    
    // [InternalCleanPersistentNeighbors]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b7b0, 0x4652 bytes
    // netio.sys .text:0x42180, 0x4dd3 bytes
    // netio.sys .text:0x43670, 0x4e8c bytes
    // netio.sys .text:0x42140, 0x4dd3 bytes
    //
    _s79(sdk::unknown_ptr) internal_clean_persistent_neighbors;
    
    // [InternalCleanPersistentRoutes]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a954, 0x4652 bytes
    // netio.sys .text:0x41228, 0x4dd3 bytes
    // netio.sys .text:0x426f8, 0x4e8c bytes
    // netio.sys .text:0x411e8, 0x4dd3 bytes
    //
    _s80(sdk::unknown_ptr) internal_clean_persistent_routes;
    
    // [InternalCleanupPersistentStore]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3cde0, 0x4652 bytes
    // netio.sys .text:0x443c0, 0x4dd3 bytes
    // netio.sys .text:0x45b40, 0x4e8c bytes
    // netio.sys .text:0x44380, 0x4dd3 bytes
    //
    _s81(sdk::unknown_ptr) internal_cleanup_persistent_store;
    
    // [InternalCreateAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39d30, 0x4652 bytes
    // netio.sys .text:0x40510, 0x4dd3 bytes
    // netio.sys .text:0x41a10, 0x4e8c bytes
    // netio.sys .text:0x404d0, 0x4dd3 bytes
    //
    _s82(sdk::unknown_ptr) internal_create_anycast_ip_address_entry;
    
    // [InternalCreateIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3aa70, 0x4652 bytes
    // netio.sys .text:0x41350, 0x4dd3 bytes
    // netio.sys .text:0x42820, 0x4e8c bytes
    // netio.sys .text:0x41310, 0x4dd3 bytes
    //
    _s83(sdk::unknown_ptr) internal_create_ip_forward_entry2;
    
    // [InternalCreateIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b8c0, 0x4652 bytes
    // netio.sys .text:0x42290, 0x4dd3 bytes
    // netio.sys .text:0x43780, 0x4e8c bytes
    // netio.sys .text:0x42250, 0x4dd3 bytes
    //
    _s84(sdk::unknown_ptr) internal_create_ip_net_entry2;
    
    // [InternalCreateUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39d50, 0x4652 bytes
    // netio.sys .text:0x40540, 0x4dd3 bytes
    // netio.sys .text:0x41a40, 0x4e8c bytes
    // netio.sys .text:0x40500, 0x4dd3 bytes
    //
    _s85(sdk::unknown_ptr) internal_create_unicast_ip_address_entry;
    
    // [InternalDeleteAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39d60, 0x4652 bytes
    // netio.sys .text:0x40560, 0x4dd3 bytes
    // netio.sys .text:0x41a60, 0x4e8c bytes
    // netio.sys .text:0x40520, 0x4dd3 bytes
    //
    _s86(sdk::unknown_ptr) internal_delete_anycast_ip_address_entry;
    
    // [InternalDeleteIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3aa90, 0x4652 bytes
    // netio.sys .text:0x41380, 0x4dd3 bytes
    // netio.sys .text:0x42880, 0x4e8c bytes
    // netio.sys .text:0x41340, 0x4dd3 bytes
    //
    _s87(sdk::unknown_ptr) internal_delete_ip_forward_entry2;
    
    // [InternalDeleteIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b8e0, 0x4652 bytes
    // netio.sys .text:0x422c0, 0x4dd3 bytes
    // netio.sys .text:0x437b0, 0x4e8c bytes
    // netio.sys .text:0x42280, 0x4dd3 bytes
    //
    _s88(sdk::unknown_ptr) internal_delete_ip_net_entry2;
    
    // [InternalDeleteUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39d80, 0x4652 bytes
    // netio.sys .text:0x40590, 0x4dd3 bytes
    // netio.sys .text:0x41a90, 0x4e8c bytes
    // netio.sys .text:0x40550, 0x4dd3 bytes
    //
    _s89(sdk::unknown_ptr) internal_delete_unicast_ip_address_entry;
    
    // [InternalFindInterfaceByAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39d90, 0x4652 bytes
    // netio.sys .text:0x405b0, 0x4dd3 bytes
    // netio.sys .text:0x41ab0, 0x4e8c bytes
    // netio.sys .text:0x40570, 0x4dd3 bytes
    //
    _s90(sdk::unknown_ptr) internal_find_interface_by_address;
    
    // [InternalGetAnycastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39e80, 0x4652 bytes
    // netio.sys .text:0x406b0, 0x4dd3 bytes
    // netio.sys .text:0x41bb0, 0x4e8c bytes
    // netio.sys .text:0x40670, 0x4dd3 bytes
    //
    _s91(sdk::unknown_ptr) internal_get_anycast_ip_address_entry;
    
    // [InternalGetAnycastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39e90, 0x4652 bytes
    // netio.sys .text:0x406d0, 0x4dd3 bytes
    // netio.sys .text:0x41bd0, 0x4e8c bytes
    // netio.sys .text:0x40690, 0x4dd3 bytes
    //
    _s92(sdk::unknown_ptr) internal_get_anycast_ip_address_table;
    
    // [InternalGetBestInterface]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3aaa8, 0x4652 bytes
    // netio.sys .text:0x413a8, 0x4dd3 bytes
    // netio.sys .text:0x428a8, 0x4e8c bytes
    // netio.sys .text:0x41368, 0x4dd3 bytes
    //
    _s93(sdk::unknown_ptr) internal_get_best_interface;
    
    // [InternalGetForwardIpTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3abc0, 0x4652 bytes
    // netio.sys .text:0x414c0, 0x4dd3 bytes
    // netio.sys .text:0x429e0, 0x4e8c bytes
    // netio.sys .text:0x41480, 0x4dd3 bytes
    //
    _s94(sdk::unknown_ptr) internal_get_forward_ip_table2;
    
    // [InternalGetIfEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20200, 0x4652 bytes
    // netio.sys .text:0x44460, 0x4dd3 bytes
    // netio.sys .text:0x45be0, 0x4e8c bytes
    // netio.sys .text:0x44420, 0x4dd3 bytes
    //
    _s95(sdk::unknown_ptr) internal_get_if_entry2;
    
    // [InternalGetIfTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3ce80, 0x4652 bytes
    // netio.sys .text:0x44480, 0x4dd3 bytes
    // netio.sys .text:0x45c00, 0x4e8c bytes
    // netio.sys .text:0x44440, 0x4dd3 bytes
    //
    _s96(sdk::unknown_ptr) internal_get_if_table2;
    
    // [InternalGetIfTable2Ex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x203d8, 0x4652 bytes
    // netio.sys .text:0x20210, 0x4dd3 bytes
    // netio.sys .text:0x1c1f0, 0x4e8c bytes
    // netio.sys .text:0x202a0, 0x4dd3 bytes
    //
    _s97(sdk::unknown_ptr) internal_get_if_table2_ex;
    
    // [InternalGetIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3af50, 0x4652 bytes
    // netio.sys .text:0x41840, 0x4dd3 bytes
    // netio.sys .text:0x42d50, 0x4e8c bytes
    // netio.sys .text:0x41800, 0x4dd3 bytes
    //
    _s98(sdk::unknown_ptr) internal_get_ip_forward_entry2;
    
    // [InternalGetIpInterfaceEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20c50, 0x4652 bytes
    // netio.sys .text:0x1d2a0, 0x4dd3 bytes
    // netio.sys .text:0x1a630, 0x4e8c bytes
    // netio.sys .text:0x1d330, 0x4dd3 bytes
    //
    _s99(sdk::unknown_ptr) internal_get_ip_interface_entry;
    
    // [InternalGetIpInterfaceTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3ce90, 0x4652 bytes
    // netio.sys .text:0x444a0, 0x4dd3 bytes
    // netio.sys .text:0x45c20, 0x4e8c bytes
    // netio.sys .text:0x44460, 0x4dd3 bytes
    //
    _t00(sdk::unknown_ptr) internal_get_ip_interface_table;
    
    // [InternalGetIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b900, 0x4652 bytes
    // netio.sys .text:0x422f0, 0x4dd3 bytes
    // netio.sys .text:0x437e0, 0x4e8c bytes
    // netio.sys .text:0x422b0, 0x4dd3 bytes
    //
    _t01(sdk::unknown_ptr) internal_get_ip_net_entry2;
    
    // [InternalGetIpNetTable2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3bc20, 0x4652 bytes
    // netio.sys .text:0x42620, 0x4dd3 bytes
    // netio.sys .text:0x43b10, 0x4e8c bytes
    // netio.sys .text:0x425e0, 0x4dd3 bytes
    //
    _t02(sdk::unknown_ptr) internal_get_ip_net_table2;
    
    // [InternalGetMulticastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39ea0, 0x4652 bytes
    // netio.sys .text:0x406f0, 0x4dd3 bytes
    // netio.sys .text:0x41bf0, 0x4e8c bytes
    // netio.sys .text:0x406b0, 0x4dd3 bytes
    //
    _t03(sdk::unknown_ptr) internal_get_multicast_ip_address_entry;
    
    // [InternalGetMulticastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39eb0, 0x4652 bytes
    // netio.sys .text:0x40710, 0x4dd3 bytes
    // netio.sys .text:0x41c10, 0x4e8c bytes
    // netio.sys .text:0x406d0, 0x4dd3 bytes
    //
    _t04(sdk::unknown_ptr) internal_get_multicast_ip_address_table;
    
    // [InternalGetUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39ec0, 0x4652 bytes
    // netio.sys .text:0x40730, 0x4dd3 bytes
    // netio.sys .text:0x41c30, 0x4e8c bytes
    // netio.sys .text:0x406f0, 0x4dd3 bytes
    //
    _t05(sdk::unknown_ptr) internal_get_unicast_ip_address_entry;
    
    // [InternalGetUnicastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39ed0, 0x4652 bytes
    // netio.sys .text:0x40750, 0x4dd3 bytes
    // netio.sys .text:0x41c50, 0x4e8c bytes
    // netio.sys .text:0x40710, 0x4dd3 bytes
    //
    _t06(sdk::unknown_ptr) internal_get_unicast_ip_address_table;
    
    // [InternalNotifyStableUnicastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x39edc, 0x4652 bytes
    // netio.sys .text:0x4076c, 0x4dd3 bytes
    // netio.sys .text:0x41c6c, 0x4e8c bytes
    // netio.sys .text:0x4072c, 0x4dd3 bytes
    //
    _t07(sdk::unknown_ptr) internal_notify_stable_unicast_ip_address_table;
    
    // [InternalRegisterChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21184, 0x4652 bytes
    // netio.sys .text:0x27ebc, 0x4dd3 bytes
    // netio.sys .text:0x28a9c, 0x4e8c bytes
    // netio.sys .text:0x27f4c, 0x4dd3 bytes
    //
    _t08(sdk::unknown_ptr) internal_register_change_notification;
    
    // [InternalRegisterFlChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x389b0, 0x4652 bytes
    // netio.sys .text:0x3efa8, 0x4dd3 bytes
    // netio.sys .text:0x40438, 0x4e8c bytes
    // netio.sys .text:0x3ef68, 0x4dd3 bytes
    //
    _t09(sdk::unknown_ptr) internal_register_fl_change_notification;
    
    // [InternalSetAllParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38a50, 0x4652 bytes
    // netio.sys .text:0x3effc, 0x4dd3 bytes
    // netio.sys .text:0x4048c, 0x4e8c bytes
    // netio.sys .text:0x3efbc, 0x4dd3 bytes
    //
    _t10(sdk::unknown_ptr) internal_set_all_parameters;
    
    // [InternalSetIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b1d0, 0x4652 bytes
    // netio.sys .text:0x41ab0, 0x4dd3 bytes
    // netio.sys .text:0x42fc0, 0x4e8c bytes
    // netio.sys .text:0x41a70, 0x4dd3 bytes
    //
    _t11(sdk::unknown_ptr) internal_set_ip_forward_entry2;
    
    // [InternalSetIpInterfaceEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d1a0, 0x4652 bytes
    // netio.sys .text:0x447b0, 0x4dd3 bytes
    // netio.sys .text:0x45f00, 0x4e8c bytes
    // netio.sys .text:0x44770, 0x4dd3 bytes
    //
    _t12(sdk::unknown_ptr) internal_set_ip_interface_entry;
    
    // [InternalSetIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3bef0, 0x4652 bytes
    // netio.sys .text:0x42900, 0x4dd3 bytes
    // netio.sys .text:0x43dd0, 0x4e8c bytes
    // netio.sys .text:0x428c0, 0x4dd3 bytes
    //
    _t13(sdk::unknown_ptr) internal_set_ip_net_entry2;
    
    // [InternalSetTeredoPort]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d6a0, 0x4652 bytes
    // netio.sys .text:0x44d80, 0x4dd3 bytes
    // netio.sys .text:0x464a0, 0x4e8c bytes
    // netio.sys .text:0x44d40, 0x4dd3 bytes
    //
    _t14(sdk::unknown_ptr) internal_set_teredo_port;
    
    // [InternalSetUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a190, 0x4652 bytes
    // netio.sys .text:0x40a10, 0x4dd3 bytes
    // netio.sys .text:0x41f10, 0x4e8c bytes
    // netio.sys .text:0x409d0, 0x4dd3 bytes
    //
    _t15(sdk::unknown_ptr) internal_set_unicast_ip_address_entry;
    
    // [InvalidateFastCacheByLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2844, 0x4652 bytes
    // netio.sys .text:0x4ef8, 0x4dd3 bytes
    // netio.sys .text:0x1f8d0, 0x4e8c bytes
    // netio.sys .text:0x4f08, 0x4dd3 bytes
    //
    _t16(sdk::unknown_ptr) invalidate_fast_cache_by_layer;
    
    // [IoctlKfdAbortTransaction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41770, 0x4652 bytes
    // netio.sys .text:0x4b570, 0x4dd3 bytes
    // netio.sys .text:0x4cba0, 0x4e8c bytes
    // netio.sys .text:0x4b530, 0x4dd3 bytes
    //
    _t17(sdk::unknown_ptr) ioctl_kfd_abort_transaction;
    
    // [IoctlKfdAddCache]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c940, 0x4652 bytes
    // netio.sys .text:0x22d70, 0x4dd3 bytes
    // netio.sys .text:0x25620, 0x4e8c bytes
    // netio.sys .text:0x22e00, 0x4dd3 bytes
    //
    _t18(sdk::unknown_ptr) ioctl_kfd_add_cache;
    
    // [IoctlKfdAddIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2360, 0x4652 bytes
    // netio.sys .text:0x24630, 0x4dd3 bytes
    // netio.sys .text:0x19010, 0x4e8c bytes
    // netio.sys .text:0x246c0, 0x4dd3 bytes
    //
    _t19(sdk::unknown_ptr) ioctl_kfd_add_index;
    
    // [IoctlKfdBatchUpdate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3620, 0x4652 bytes
    // netio.sys .text:0x2bc0, 0x4dd3 bytes
    // netio.sys .text:0x1e7c0, 0x4e8c bytes
    // netio.sys .text:0x2bc0, 0x4dd3 bytes
    //
    _t20(sdk::unknown_ptr) ioctl_kfd_batch_update;
    
    // [IoctlKfdBeginEnumFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41830, 0x4652 bytes
    // netio.sys .text:0x4b660, 0x4dd3 bytes
    // netio.sys .text:0x4cc70, 0x4e8c bytes
    // netio.sys .text:0x4b620, 0x4dd3 bytes
    //
    _t21(sdk::unknown_ptr) ioctl_kfd_begin_enum_filters;
    
    // [IoctlKfdCommitTransaction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c10, 0x4652 bytes
    // netio.sys .text:0x12a40, 0x4dd3 bytes
    // netio.sys .text:0x1d4c0, 0x4e8c bytes
    // netio.sys .text:0x12af0, 0x4dd3 bytes
    //
    _t22(sdk::unknown_ptr) ioctl_kfd_commit_transaction;
    
    // [IoctlKfdDeleteCache]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41960, 0x4652 bytes
    // netio.sys .text:0x4b7c0, 0x4dd3 bytes
    // netio.sys .text:0x4cdc0, 0x4e8c bytes
    // netio.sys .text:0x4b780, 0x4dd3 bytes
    //
    _t23(sdk::unknown_ptr) ioctl_kfd_delete_cache;
    
    // [IoctlKfdDeleteIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15f0, 0x4652 bytes
    // netio.sys .text:0x4b7e0, 0x4dd3 bytes
    // netio.sys .text:0x17930, 0x4e8c bytes
    // netio.sys .text:0x4b7a0, 0x4dd3 bytes
    //
    _t24(sdk::unknown_ptr) ioctl_kfd_delete_index;
    
    // [IoctlKfdEndEnumFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41970, 0x4652 bytes
    // netio.sys .text:0x4b8b0, 0x4dd3 bytes
    // netio.sys .text:0x4cde0, 0x4e8c bytes
    // netio.sys .text:0x4b870, 0x4dd3 bytes
    //
    _t25(sdk::unknown_ptr) ioctl_kfd_end_enum_filters;
    
    // [IoctlKfdMoveFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x419c0, 0x4652 bytes
    // netio.sys .text:0x4b900, 0x4dd3 bytes
    // netio.sys .text:0x4ce30, 0x4e8c bytes
    // netio.sys .text:0x4b8c0, 0x4dd3 bytes
    //
    _t26(sdk::unknown_ptr) ioctl_kfd_move_filter;
    
    // [IoctlKfdQueryEnumFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a00, 0x4652 bytes
    // netio.sys .text:0x1c540, 0x4dd3 bytes
    // netio.sys .text:0x16f00, 0x4e8c bytes
    // netio.sys .text:0x1c5d0, 0x4dd3 bytes
    //
    _t27(sdk::unknown_ptr) ioctl_kfd_query_enum_filters;
    
    // [IoctlKfdQueryLayerStatistics]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41a90, 0x4652 bytes
    // netio.sys .text:0x4b9f0, 0x4dd3 bytes
    // netio.sys .text:0x4cf00, 0x4e8c bytes
    // netio.sys .text:0x4b9b0, 0x4dd3 bytes
    //
    _t28(sdk::unknown_ptr) ioctl_kfd_query_layer_statistics;
    
    // [IoctlKfdResetState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41b60, 0x4652 bytes
    // netio.sys .text:0x4bae0, 0x4dd3 bytes
    // netio.sys .text:0x4cff0, 0x4e8c bytes
    // netio.sys .text:0x4baa0, 0x4dd3 bytes
    //
    _t29(sdk::unknown_ptr) ioctl_kfd_reset_state;
    
    // [IoctlKfdSetBfeEngineSd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x243c0, 0x4652 bytes
    // netio.sys .text:0x28ce0, 0x4dd3 bytes
    // netio.sys .text:0x29b00, 0x4e8c bytes
    // netio.sys .text:0x28d70, 0x4dd3 bytes
    //
    _t30(sdk::unknown_ptr) ioctl_kfd_set_bfe_engine_sd;
    
    // [Ipv4Mask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59670, 0x4652 bytes
    // netio.sys .rdata:0x70c80, 0x4dd3 bytes
    // netio.sys .rdata:0x71690, 0x4e8c bytes
    // netio.sys .rdata:0x70c80, 0x4dd3 bytes
    //
    _t31(sdk::unknown_ptr) ipv4_mask;
    
    // [IsActiveCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7af8, 0x4652 bytes
    // netio.sys .text:0x10bcc, 0x4dd3 bytes
    // netio.sys .text:0xae50, 0x4e8c bytes
    // netio.sys .text:0x10c7c, 0x4dd3 bytes
    //
    _t32(sdk::unknown_ptr) is_active_callout;
    
    // [IsContinueMatchOnOrFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47430, 0x4652 bytes
    // netio.sys .text:0x10684, 0x4dd3 bytes
    // netio.sys .text:0x20fb8, 0x4e8c bytes
    // netio.sys .text:0x10734, 0x4dd3 bytes
    //
    _t33(sdk::unknown_ptr) is_continue_match_on_or_filter;
    
    // [IsEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15778, 0x4652 bytes
    // netio.sys .text:0x1c190, 0x4dd3 bytes
    // netio.sys .text:0x3e6c, 0x4e8c bytes
    // netio.sys .text:0x1c220, 0x4dd3 bytes
    //
    _t34(sdk::unknown_ptr) is_empty;
    
    // [IsFilterVisible]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47464, 0x4652 bytes
    // netio.sys .text:0xeeb8, 0x4dd3 bytes
    // netio.sys .text:0x20fa0, 0x4e8c bytes
    // netio.sys .text:0xef68, 0x4dd3 bytes
    //
    _t35(sdk::unknown_ptr) is_filter_visible;
    
    // [IsFlowContextTableAcceptingContexts]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8158, 0x4652 bytes
    // netio.sys .text:0x6184, 0x4dd3 bytes
    // netio.sys .text:0xbc00, 0x4e8c bytes
    // netio.sys .text:0x6234, 0x4dd3 bytes
    //
    _t36(sdk::unknown_ptr) is_flow_context_table_accepting_contexts;
    
    // [IsMatchingConnectEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15658, 0x4652 bytes
    // netio.sys .text:0x1b1a8, 0x4dd3 bytes
    // netio.sys .text:0x13458, 0x4e8c bytes
    // netio.sys .text:0x1b238, 0x4dd3 bytes
    //
    _t37(sdk::unknown_ptr) is_matching_connect_entry;
    
    // [IsQuiet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45b60, 0x4652 bytes
    // netio.sys .text:0x50d74, 0x4dd3 bytes
    // netio.sys .text:0x525f8, 0x4e8c bytes
    // netio.sys .text:0x50d34, 0x4dd3 bytes
    //
    _t38(sdk::unknown_ptr) is_quiet;
    
    // [IsRangeContains]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1690, 0x4652 bytes
    // netio.sys .text:0x536a8, 0x4dd3 bytes
    // netio.sys .text:0x543c8, 0x4e8c bytes
    // netio.sys .text:0x53668, 0x4dd3 bytes
    //
    _t39(sdk::unknown_ptr) is_range_contains;
    
    // [IsRangeOverlap]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xef18, 0x4652 bytes
    // netio.sys .text:0x1c88, 0x4dd3 bytes
    // netio.sys .text:0x1b3b0, 0x4e8c bytes
    // netio.sys .text:0x1c88, 0x4dd3 bytes
    //
    _t40(sdk::unknown_ptr) is_range_overlap;
    
    // [IsV6MaskCompareEqual]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4748c, 0x4652 bytes
    // netio.sys .text:0x536f8, 0x4dd3 bytes
    // netio.sys .text:0x3c7c, 0x4e8c bytes
    // netio.sys .text:0x536b8, 0x4dd3 bytes
    //
    _t41(sdk::unknown_ptr) is_v6_mask_compare_equal;
    
    // [IsValidIndex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a04, 0x4652 bytes
    // netio.sys .text:0x25078, 0x4dd3 bytes
    // netio.sys .text:0x19908, 0x4e8c bytes
    // netio.sys .text:0x25108, 0x4dd3 bytes
    //
    _t42(sdk::unknown_ptr) is_valid_index;
    
    // [KfdAddCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22a00, 0x4652 bytes
    // netio.sys .text:0x25a80, 0x4dd3 bytes
    // netio.sys .text:0x27520, 0x4e8c bytes
    // netio.sys .text:0x25b10, 0x4dd3 bytes
    //
    _t43(sdk::unknown_ptr) kfd_add_callout_entry;
    
    // [KfdAleAcquireEndpointContextFromFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7fe0, 0x4652 bytes
    // netio.sys .text:0x69f0, 0x4dd3 bytes
    // netio.sys .text:0xb9c0, 0x4e8c bytes
    // netio.sys .text:0x6aa0, 0x4dd3 bytes
    //
    _t44(sdk::unknown_ptr) kfd_ale_acquire_endpoint_context_from_flow;
    
    // [KfdAleAcquireFlowHandleForFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12d20, 0x4652 bytes
    // netio.sys .text:0x18740, 0x4dd3 bytes
    // netio.sys .text:0x10b70, 0x4e8c bytes
    // netio.sys .text:0x187f0, 0x4dd3 bytes
    //
    _t45(sdk::unknown_ptr) kfd_ale_acquire_flow_handle_for_flow;
    
    // [KfdAleFindFlowContextTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41de0, 0x4652 bytes
    // netio.sys .text:0x61ec, 0x4dd3 bytes
    // netio.sys .text:0xb43c, 0x4e8c bytes
    // netio.sys .text:0x629c, 0x4dd3 bytes
    //
    _t46(sdk::unknown_ptr) kfd_ale_find_flow_context_table;
    
    // [KfdAleGetTableFromHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7f80, 0x4652 bytes
    // netio.sys .text:0x4c1c0, 0x4dd3 bytes
    // netio.sys .text:0x4d830, 0x4e8c bytes
    // netio.sys .text:0x4c180, 0x4dd3 bytes
    //
    _t47(sdk::unknown_ptr) kfd_ale_get_table_from_handle;
    
    // [KfdAleInitializeFlowHandles]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cee0, 0x4652 bytes
    // netio.sys .text:0x23470, 0x4dd3 bytes
    // netio.sys .text:0x26340, 0x4e8c bytes
    // netio.sys .text:0x23500, 0x4dd3 bytes
    //
    _t48(sdk::unknown_ptr) kfd_ale_initialize_flow_handles;
    
    // [KfdAleInitializeFlowTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x142f0, 0x4652 bytes
    // netio.sys .text:0x1a000, 0x4dd3 bytes
    // netio.sys .text:0x127c0, 0x4e8c bytes
    // netio.sys .text:0x1a090, 0x4dd3 bytes
    //
    _t49(sdk::unknown_ptr) kfd_ale_initialize_flow_table;
    
    // [KfdAleInitializeFlowTableV2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4200c, 0x4652 bytes
    // netio.sys .text:0x4c240, 0x4dd3 bytes
    // netio.sys .text:0x4d8b0, 0x4e8c bytes
    // netio.sys .text:0x4c200, 0x4dd3 bytes
    //
    _t50(sdk::unknown_ptr) kfd_ale_initialize_flow_table_v2;
    
    // [KfdAleNotifyFlowDeletion]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a10, 0x4652 bytes
    // netio.sys .text:0xfdc0, 0x4dd3 bytes
    // netio.sys .text:0xd610, 0x4e8c bytes
    // netio.sys .text:0xfe70, 0x4dd3 bytes
    //
    _t51(sdk::unknown_ptr) kfd_ale_notify_flow_deletion;
    
    // [KfdAleReleaseFlowHandleForFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14e50, 0x4652 bytes
    // netio.sys .text:0x190c0, 0x4dd3 bytes
    // netio.sys .text:0x11d20, 0x4e8c bytes
    // netio.sys .text:0x19150, 0x4dd3 bytes
    //
    _t52(sdk::unknown_ptr) kfd_ale_release_flow_handle_for_flow;
    
    // [KfdAleRemoveFlowContextTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4be0, 0x4652 bytes
    // netio.sys .text:0xffc0, 0x4dd3 bytes
    // netio.sys .text:0xd830, 0x4e8c bytes
    // netio.sys .text:0x10070, 0x4dd3 bytes
    //
    _t53(sdk::unknown_ptr) kfd_ale_remove_flow_context_table;
    
    // [KfdAleUninitializeFlowHandles]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41e40, 0x4652 bytes
    // netio.sys .text:0x4c0a0, 0x4dd3 bytes
    // netio.sys .text:0x4d6c0, 0x4e8c bytes
    // netio.sys .text:0x4c060, 0x4dd3 bytes
    //
    _t54(sdk::unknown_ptr) kfd_ale_uninitialize_flow_handles;
    
    // [KfdAleUpdateEndpointContextStatus]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41e50, 0x4652 bytes
    // netio.sys .text:0x4c0c0, 0x4dd3 bytes
    // netio.sys .text:0x4d6e0, 0x4e8c bytes
    // netio.sys .text:0x4c080, 0x4dd3 bytes
    //
    _t55(sdk::unknown_ptr) kfd_ale_update_endpoint_context_status;
    
    // [KfdAleUpdateEndpointContextStatusPerEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41ebc, 0x4652 bytes
    // netio.sys .text:0x4c134, 0x4dd3 bytes
    // netio.sys .text:0x4d754, 0x4e8c bytes
    // netio.sys .text:0x4c0f4, 0x4dd3 bytes
    //
    _t56(sdk::unknown_ptr) kfd_ale_update_endpoint_context_status_per_endpoint;
    
    // [KfdApplyBoottimePolicy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22eb4, 0x4652 bytes
    // netio.sys .text:0x24a64, 0x4dd3 bytes
    // netio.sys .text:0x27704, 0x4e8c bytes
    // netio.sys .text:0x24af4, 0x4dd3 bytes
    //
    _t57(sdk::unknown_ptr) kfd_apply_boottime_policy;
    
    // [KfdApplyBoottimePolicyCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a730, 0x4652 bytes
    // netio.sys PAGE:0x85f70, 0x4dd3 bytes
    // netio.sys PAGE:0x882a0, 0x4e8c bytes
    // netio.sys PAGE:0x85f70, 0x4dd3 bytes
    //
    _t58(sdk::unknown_ptr) kfd_apply_boottime_policy_callback;
    
    // [KfdAuditCommon]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42288, 0x4652 bytes
    // netio.sys .text:0x4c3f0, 0x4dd3 bytes
    // netio.sys .text:0x4da9c, 0x4e8c bytes
    // netio.sys .text:0x4c3b0, 0x4dd3 bytes
    //
    _t59(sdk::unknown_ptr) kfd_audit_common;
    
    // [KfdAuditEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13e50, 0x4652 bytes
    // netio.sys .text:0x198d0, 0x4dd3 bytes
    // netio.sys .text:0x10f30, 0x4e8c bytes
    // netio.sys .text:0x19960, 0x4dd3 bytes
    //
    _t60(sdk::unknown_ptr) kfd_audit_event;
    
    // [KfdBfeEngineAccessCheck]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42e70, 0x4652 bytes
    // netio.sys .text:0x4d1c0, 0x4dd3 bytes
    // netio.sys .text:0x4e9f0, 0x4e8c bytes
    // netio.sys .text:0x4d180, 0x4dd3 bytes
    //
    _t61(sdk::unknown_ptr) kfd_bfe_engine_access_check;
    
    // [KfdCheckAcceptBypass]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13620, 0x4652 bytes
    // netio.sys .text:0x181c0, 0x4dd3 bytes
    // netio.sys .text:0x105c0, 0x4e8c bytes
    // netio.sys .text:0x18270, 0x4dd3 bytes
    //
    _t62(sdk::unknown_ptr) kfd_check_accept_bypass;
    
    // [KfdCheckAndCacheAcceptBypass]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x9a10, 0x4652 bytes
    // netio.sys .text:0x12c50, 0x4dd3 bytes
    // netio.sys .text:0xfc00, 0x4e8c bytes
    // netio.sys .text:0x12d00, 0x4dd3 bytes
    //
    _t63(sdk::unknown_ptr) kfd_check_and_cache_accept_bypass;
    
    // [KfdCheckAndCacheConnectBypass]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x28f0, 0x4652 bytes
    // netio.sys .text:0x1a930, 0x4dd3 bytes
    // netio.sys .text:0x12da0, 0x4e8c bytes
    // netio.sys .text:0x1a9c0, 0x4dd3 bytes
    //
    _t64(sdk::unknown_ptr) kfd_check_and_cache_connect_bypass;
    
    // [KfdCheckClassifyNeededAndUpdateEpoch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24f10, 0x4652 bytes
    // netio.sys .text:0x50dd0, 0x4dd3 bytes
    // netio.sys .text:0x1010, 0x4e8c bytes
    // netio.sys .text:0x50d90, 0x4dd3 bytes
    //
    _t65(sdk::unknown_ptr) kfd_check_classify_needed_and_update_epoch;
    
    // [KfdCheckConnectBypass]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15430, 0x4652 bytes
    // netio.sys .text:0x1af50, 0x4dd3 bytes
    // netio.sys .text:0x131c0, 0x4e8c bytes
    // netio.sys .text:0x1afe0, 0x4dd3 bytes
    //
    _t66(sdk::unknown_ptr) kfd_check_connect_bypass;
    
    // [KfdCheckOffloadFastLayers]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12330, 0x4652 bytes
    // netio.sys .text:0x17c90, 0x4dd3 bytes
    // netio.sys .text:0x101e0, 0x4e8c bytes
    // netio.sys .text:0x17d40, 0x4dd3 bytes
    //
    _t67(sdk::unknown_ptr) kfd_check_offload_fast_layers;
    
    // [KfdClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xaec0, 0x4652 bytes
    // netio.sys .text:0x7d60, 0x4dd3 bytes
    // netio.sys .text:0x6b50, 0x4e8c bytes
    // netio.sys .text:0x7e10, 0x4dd3 bytes
    //
    _t68(sdk::unknown_ptr) kfd_classify;
    
    // [KfdClassify2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x131c0, 0x4652 bytes
    // netio.sys .text:0x18ac0, 0x4dd3 bytes
    // netio.sys .text:0xe9e0, 0x4e8c bytes
    // netio.sys .text:0x18b50, 0x4dd3 bytes
    //
    _t69(sdk::unknown_ptr) kfd_classify2;
    
    // [KfdCommitTransaction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x532c, 0x4652 bytes
    // netio.sys .text:0x11bcc, 0x4dd3 bytes
    // netio.sys .text:0x1d76c, 0x4e8c bytes
    // netio.sys .text:0x11c7c, 0x4dd3 bytes
    //
    _t70(sdk::unknown_ptr) kfd_commit_transaction;
    
    // [KfdDeRefCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44d80, 0x4652 bytes
    // netio.sys .text:0x4f980, 0x4dd3 bytes
    // netio.sys .text:0x511f0, 0x4e8c bytes
    // netio.sys .text:0x4f940, 0x4dd3 bytes
    //
    _t71(sdk::unknown_ptr) kfd_de_ref_callout;
    
    // [KfdDeleteCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44d90, 0x4652 bytes
    // netio.sys .text:0x4f990, 0x4dd3 bytes
    // netio.sys .text:0x51200, 0x4e8c bytes
    // netio.sys .text:0x4f950, 0x4dd3 bytes
    //
    _t72(sdk::unknown_ptr) kfd_delete_callout_entry;
    
    // [KfdDerefFilterContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15c10, 0x4652 bytes
    // netio.sys .text:0x1c200, 0x4dd3 bytes
    // netio.sys .text:0x13da0, 0x4e8c bytes
    // netio.sys .text:0x1c290, 0x4dd3 bytes
    //
    _t73(sdk::unknown_ptr) kfd_deref_filter_context;
    
    // [KfdDeregisterLayerChangeCallback2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46930, 0x4652 bytes
    // netio.sys .text:0x52460, 0x4dd3 bytes
    // netio.sys .text:0x53910, 0x4e8c bytes
    // netio.sys .text:0x52420, 0x4dd3 bytes
    //
    _t74(sdk::unknown_ptr) kfd_deregister_layer_change_callback2;
    
    // [KfdDeregisterLayerEventNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46940, 0x4652 bytes
    // netio.sys .text:0x52480, 0x4dd3 bytes
    // netio.sys .text:0x53930, 0x4e8c bytes
    // netio.sys .text:0x52440, 0x4dd3 bytes
    //
    _t75(sdk::unknown_ptr) kfd_deregister_layer_event_notify;
    
    // [KfdDestroyBoottimePolicy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23378, 0x4652 bytes
    // netio.sys .text:0x24f40, 0x4dd3 bytes
    // netio.sys .text:0x27bc4, 0x4e8c bytes
    // netio.sys .text:0x24fd0, 0x4dd3 bytes
    //
    _t76(sdk::unknown_ptr) kfd_destroy_boottime_policy;
    
    // [KfdDiagnoseEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x145e0, 0x4652 bytes
    // netio.sys .text:0x11140, 0x4dd3 bytes
    // netio.sys .text:0xdf80, 0x4e8c bytes
    // netio.sys .text:0x111f0, 0x4dd3 bytes
    //
    _t77(sdk::unknown_ptr) kfd_diagnose_event;
    
    // [KfdDiagnoseEventExpandStack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14610, 0x4652 bytes
    // netio.sys .text:0x11170, 0x4dd3 bytes
    // netio.sys .text:0xdfc0, 0x4e8c bytes
    // netio.sys .text:0x11220, 0x4dd3 bytes
    //
    _t78(sdk::unknown_ptr) kfd_diagnose_event_expand_stack;
    
    // [KfdDirectClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24da0, 0x4652 bytes
    // netio.sys .text:0x50e30, 0x4dd3 bytes
    // netio.sys .text:0x52650, 0x4e8c bytes
    // netio.sys .text:0x50df0, 0x4dd3 bytes
    //
    _t79(sdk::unknown_ptr) kfd_direct_classify;
    
    // [KfdEnumLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8260, 0x4652 bytes
    // netio.sys .text:0x6370, 0x4dd3 bytes
    // netio.sys .text:0xbdd0, 0x4e8c bytes
    // netio.sys .text:0x6420, 0x4dd3 bytes
    //
    _t80(sdk::unknown_ptr) kfd_enum_layer;
    
    // [KfdFilterFreeNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6100, 0x4652 bytes
    // netio.sys .text:0x1c1d0, 0x4dd3 bytes
    // netio.sys .text:0x21ad0, 0x4e8c bytes
    // netio.sys .text:0x1c260, 0x4dd3 bytes
    //
    _t81(sdk::unknown_ptr) kfd_filter_free_notify;
    
    // [KfdFreeBatchUpdate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2460, 0x4652 bytes
    // netio.sys .text:0x11afc, 0x4dd3 bytes
    // netio.sys .text:0x1d6f8, 0x4e8c bytes
    // netio.sys .text:0x11bac, 0x4dd3 bytes
    //
    _t82(sdk::unknown_ptr) kfd_free_batch_update;
    
    // [KfdFreeEnumHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24690, 0x4652 bytes
    // netio.sys .text:0x29220, 0x4dd3 bytes
    // netio.sys .text:0x1b440, 0x4e8c bytes
    // netio.sys .text:0x292b0, 0x4dd3 bytes
    //
    _t83(sdk::unknown_ptr) kfd_free_enum_handle;
    
    // [KfdGetLayerActionFromEnumTemplate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7570, 0x4652 bytes
    // netio.sys .text:0x4a00, 0x4dd3 bytes
    // netio.sys .text:0x21910, 0x4e8c bytes
    // netio.sys .text:0x4a10, 0x4dd3 bytes
    //
    _t84(sdk::unknown_ptr) kfd_get_layer_action_from_enum_template;
    
    // [KfdGetLayerCacheEpoch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12680, 0x4652 bytes
    // netio.sys .text:0x178e0, 0x4dd3 bytes
    // netio.sys .text:0xf970, 0x4e8c bytes
    // netio.sys .text:0x17990, 0x4dd3 bytes
    //
    _t85(sdk::unknown_ptr) kfd_get_layer_cache_epoch;
    
    // [KfdGetNextFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6290, 0x4652 bytes
    // netio.sys .text:0x1b520, 0x4dd3 bytes
    // netio.sys .text:0x1cb0, 0x4e8c bytes
    // netio.sys .text:0x1b5b0, 0x4dd3 bytes
    //
    _t86(sdk::unknown_ptr) kfd_get_next_filter;
    
    // [KfdGetOffloadEpoch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14ec0, 0x4652 bytes
    // netio.sys .text:0x1a520, 0x4dd3 bytes
    // netio.sys .text:0x12780, 0x4e8c bytes
    // netio.sys .text:0x1a5b0, 0x4dd3 bytes
    //
    _t87(sdk::unknown_ptr) kfd_get_offload_epoch;
    
    // [KfdGetRefCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44e00, 0x4652 bytes
    // netio.sys .text:0x4fa10, 0x4dd3 bytes
    // netio.sys .text:0x51250, 0x4e8c bytes
    // netio.sys .text:0x4f9d0, 0x4dd3 bytes
    //
    _t88(sdk::unknown_ptr) kfd_get_ref_callout;
    
    // [KfdIsActiveCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45bb0, 0x4652 bytes
    // netio.sys .text:0x50fc0, 0x4dd3 bytes
    // netio.sys .text:0x527f0, 0x4e8c bytes
    // netio.sys .text:0x50f80, 0x4dd3 bytes
    //
    _t89(sdk::unknown_ptr) kfd_is_active_callout;
    
    // [KfdIsDiagnoseEventEnabled]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14930, 0x4652 bytes
    // netio.sys .text:0x115a0, 0x4dd3 bytes
    // netio.sys .text:0xe420, 0x4e8c bytes
    // netio.sys .text:0x11650, 0x4dd3 bytes
    //
    _t90(sdk::unknown_ptr) kfd_is_diagnose_event_enabled;
    
    // [KfdIsLayerEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf100, 0x4652 bytes
    // netio.sys .text:0x54b0, 0x4dd3 bytes
    // netio.sys .text:0x3590, 0x4e8c bytes
    // netio.sys .text:0x5520, 0x4dd3 bytes
    //
    _t91(sdk::unknown_ptr) kfd_is_layer_empty;
    
    // [KfdIsLsoOffloadPossibleV4]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x128a0, 0x4652 bytes
    // netio.sys .text:0x17c40, 0x4dd3 bytes
    // netio.sys .text:0x10190, 0x4e8c bytes
    // netio.sys .text:0x17cf0, 0x4dd3 bytes
    //
    _t92(sdk::unknown_ptr) kfd_is_lso_offload_possible_v4;
    
    // [KfdIsLsoOffloadPossibleV6]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15730, 0x4652 bytes
    // netio.sys .text:0x1c140, 0x4dd3 bytes
    // netio.sys .text:0x38e0, 0x4e8c bytes
    // netio.sys .text:0x1c1d0, 0x4dd3 bytes
    //
    _t93(sdk::unknown_ptr) kfd_is_lso_offload_possible_v6;
    
    // [KfdIsRscSensitiveLayer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46bc, 0x4652 bytes
    // netio.sys .text:0x1d038, 0x4dd3 bytes
    // netio.sys .text:0x18dbc, 0x4e8c bytes
    // netio.sys .text:0x1d0c8, 0x4dd3 bytes
    //
    _t94(sdk::unknown_ptr) kfd_is_rsc_sensitive_layer;
    
    // [KfdIsV4InTransportFastEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45bc0, 0x4652 bytes
    // netio.sys .text:0x50ff0, 0x4dd3 bytes
    // netio.sys .text:0x52820, 0x4e8c bytes
    // netio.sys .text:0x50fb0, 0x4dd3 bytes
    //
    _t95(sdk::unknown_ptr) kfd_is_v4_in_transport_fast_empty;
    
    // [KfdIsV4OutTransportFastEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45c20, 0x4652 bytes
    // netio.sys .text:0x51050, 0x4dd3 bytes
    // netio.sys .text:0x2b730, 0x4e8c bytes
    // netio.sys .text:0x51010, 0x4dd3 bytes
    //
    _t96(sdk::unknown_ptr) kfd_is_v4_out_transport_fast_empty;
    
    // [KfdIsV6InTransportFastEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45c70, 0x4652 bytes
    // netio.sys .text:0x510a0, 0x4dd3 bytes
    // netio.sys .text:0x52880, 0x4e8c bytes
    // netio.sys .text:0x51060, 0x4dd3 bytes
    //
    _t97(sdk::unknown_ptr) kfd_is_v6_in_transport_fast_empty;
    
    // [KfdIsV6OutTransportFastEmpty]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45cd0, 0x4652 bytes
    // netio.sys .text:0x51100, 0x4dd3 bytes
    // netio.sys .text:0x528e0, 0x4e8c bytes
    // netio.sys .text:0x510c0, 0x4dd3 bytes
    //
    _t98(sdk::unknown_ptr) kfd_is_v6_out_transport_fast_empty;
    
    // [KfdNotifyFlowDeletion]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42070, 0x4652 bytes
    // netio.sys .text:0x4c2b0, 0x4dd3 bytes
    // netio.sys .text:0x4d920, 0x4e8c bytes
    // netio.sys .text:0x4c270, 0x4dd3 bytes
    //
    _t99(sdk::unknown_ptr) kfd_notify_flow_deletion;
    
    // [KfdNotifyLayerEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20d8, 0x4652 bytes
    // netio.sys .text:0x3abc, 0x4dd3 bytes
    // netio.sys .text:0x1fd78, 0x4e8c bytes
    // netio.sys .text:0x3abc, 0x4dd3 bytes
    //
    _u00(sdk::unknown_ptr) kfd_notify_layer_event;
    
    // [KfdNotifyLayerEventToClientNoLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2298, 0x4652 bytes
    // netio.sys .text:0x3cbc, 0x4dd3 bytes
    // netio.sys .text:0x1ffa0, 0x4e8c bytes
    // netio.sys .text:0x3cbc, 0x4dd3 bytes
    //
    _u01(sdk::unknown_ptr) kfd_notify_layer_event_to_client_no_lock;
    
    // [KfdNotifyRscIncompatCalloutAdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44e28, 0x4652 bytes
    // netio.sys .text:0x4fa58, 0x4dd3 bytes
    // netio.sys .text:0x51298, 0x4e8c bytes
    // netio.sys .text:0x4fa18, 0x4dd3 bytes
    //
    _u02(sdk::unknown_ptr) kfd_notify_rsc_incompat_callout_add;
    
    // [KfdProcessBoottimePolicy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a624, 0x4652 bytes
    // netio.sys PAGE:0x85d54, 0x4dd3 bytes
    // netio.sys PAGE:0x88094, 0x4e8c bytes
    // netio.sys PAGE:0x85d54, 0x4dd3 bytes
    //
    _u03(sdk::unknown_ptr) kfd_process_boottime_policy;
    
    // [KfdQueryLayerStats]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x457e0, 0x4652 bytes
    // netio.sys .text:0x507e0, 0x4dd3 bytes
    // netio.sys .text:0x52170, 0x4e8c bytes
    // netio.sys .text:0x507a0, 0x4dd3 bytes
    //
    _u04(sdk::unknown_ptr) kfd_query_layer_stats;
    
    // [KfdQueueLruCleanupWorkItem]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xedc0, 0x4652 bytes
    // netio.sys .text:0x13270, 0x4dd3 bytes
    // netio.sys .text:0x124e0, 0x4e8c bytes
    // netio.sys .text:0x13320, 0x4dd3 bytes
    //
    _u05(sdk::unknown_ptr) kfd_queue_lru_cleanup_work_item;
    
    // [KfdReadAndApplyBoottimePolicy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a6c0, 0x4652 bytes
    // netio.sys PAGE:0x85e04, 0x4dd3 bytes
    // netio.sys PAGE:0x88150, 0x4e8c bytes
    // netio.sys PAGE:0x85e04, 0x4dd3 bytes
    //
    _u06(sdk::unknown_ptr) kfd_read_and_apply_boottime_policy;
    
    // [KfdRegisterLayerChangeCallback2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46a10, 0x4652 bytes
    // netio.sys .text:0x525a0, 0x4dd3 bytes
    // netio.sys .text:0x53a50, 0x4e8c bytes
    // netio.sys .text:0x52560, 0x4dd3 bytes
    //
    _u07(sdk::unknown_ptr) kfd_register_layer_change_callback2;
    
    // [KfdRegisterLayerEventNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x240c0, 0x4652 bytes
    // netio.sys .text:0x284d0, 0x4dd3 bytes
    // netio.sys .text:0x29370, 0x4e8c bytes
    // netio.sys .text:0x28560, 0x4dd3 bytes
    //
    _u08(sdk::unknown_ptr) kfd_register_layer_event_notify;
    
    // [KfdRegisterRscIncompatCalloutNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44f10, 0x4652 bytes
    // netio.sys .text:0x27c70, 0x4dd3 bytes
    // netio.sys .text:0x517d0, 0x4e8c bytes
    // netio.sys .text:0x27d00, 0x4dd3 bytes
    //
    _u09(sdk::unknown_ptr) kfd_register_rsc_incompat_callout_notify;
    
    // [KfdReleaseCachedFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x250a0, 0x4652 bytes
    // netio.sys .text:0x51300, 0x4dd3 bytes
    // netio.sys .text:0x52930, 0x4e8c bytes
    // netio.sys .text:0x512c0, 0x4dd3 bytes
    //
    _u10(sdk::unknown_ptr) kfd_release_cached_filters;
    
    // [KfdSetFastCalloutState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x34f8, 0x4652 bytes
    // netio.sys .text:0x4748, 0x4dd3 bytes
    // netio.sys .text:0x2023c, 0x4e8c bytes
    // netio.sys .text:0x4758, 0x4dd3 bytes
    //
    _u11(sdk::unknown_ptr) kfd_set_fast_callout_state;
    
    // [KfdSetVisibleFilterState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2084, 0x4652 bytes
    // netio.sys .text:0x3a54, 0x4dd3 bytes
    // netio.sys .text:0x1f610, 0x4e8c bytes
    // netio.sys .text:0x3a54, 0x4dd3 bytes
    //
    _u12(sdk::unknown_ptr) kfd_set_visible_filter_state;
    
    // [KfdSetWfpPerProcContextPtr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6b1b0, 0x4652 bytes
    // netio.sys PAGE:0x86540, 0x4dd3 bytes
    // netio.sys PAGE:0x886a0, 0x4e8c bytes
    // netio.sys PAGE:0x86540, 0x4dd3 bytes
    //
    _u13(sdk::unknown_ptr) kfd_set_wfp_per_proc_context_ptr;
    
    // [KfdStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a3f0, 0x4652 bytes
    // netio.sys PAGE:0x85ee0, 0x4dd3 bytes
    // netio.sys PAGE:0x88340, 0x4e8c bytes
    // netio.sys PAGE:0x85ee0, 0x4dd3 bytes
    //
    _u14(sdk::unknown_ptr) kfd_start_module;
    
    // [KfdStartModuleEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a420, 0x4652 bytes
    // netio.sys PAGE:0x85e80, 0x4dd3 bytes
    // netio.sys PAGE:0x881cc, 0x4e8c bytes
    // netio.sys PAGE:0x85e80, 0x4dd3 bytes
    //
    _u15(sdk::unknown_ptr) kfd_start_module_ex;
    
    // [KfdStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c500, 0x4652 bytes
    // netio.sys PAGE:0x87430, 0x4dd3 bytes
    // netio.sys PAGE:0x89740, 0x4e8c bytes
    // netio.sys PAGE:0x87430, 0x4dd3 bytes
    //
    _u16(sdk::unknown_ptr) kfd_stop_module;
    
    // [KfdToggleBatchCommit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d34, 0x4652 bytes
    // netio.sys .text:0x3e88, 0x4dd3 bytes
    // netio.sys .text:0x1f6a8, 0x4e8c bytes
    // netio.sys .text:0x3e88, 0x4dd3 bytes
    //
    _u17(sdk::unknown_ptr) kfd_toggle_batch_commit;
    
    // [KfdToggleFilterActivation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45860, 0x4652 bytes
    // netio.sys .text:0x50880, 0x4dd3 bytes
    // netio.sys .text:0x52200, 0x4e8c bytes
    // netio.sys .text:0x50840, 0x4dd3 bytes
    //
    _u18(sdk::unknown_ptr) kfd_toggle_filter_activation;
    
    // [LogIncomingValues]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45d18, 0x4652 bytes
    // netio.sys .text:0x51318, 0x4dd3 bytes
    // netio.sys .text:0x52948, 0x4e8c bytes
    // netio.sys .text:0x512d8, 0x4dd3 bytes
    //
    _u19(sdk::unknown_ptr) log_incoming_values;
    
    // [LogValue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45d64, 0x4652 bytes
    // netio.sys .text:0x51370, 0x4dd3 bytes
    // netio.sys .text:0x5299c, 0x4e8c bytes
    // netio.sys .text:0x51330, 0x4dd3 bytes
    //
    _u20(sdk::unknown_ptr) log_value;
    
    // [LruCleanupWorkItemRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2d20, 0x4652 bytes
    // netio.sys .text:0xf160, 0x4dd3 bytes
    // netio.sys .text:0xc9f0, 0x4e8c bytes
    // netio.sys .text:0xf210, 0x4dd3 bytes
    //
    _u21(sdk::unknown_ptr) lru_cleanup_work_item_routine;
    
    // [MapLayerToFastCacheId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2968, 0x4652 bytes
    // netio.sys .text:0x4fb8, 0x4dd3 bytes
    // netio.sys .text:0x13410, 0x4e8c bytes
    // netio.sys .text:0x4fc8, 0x4dd3 bytes
    //
    _u22(sdk::unknown_ptr) map_layer_to_fast_cache_id;
    
    // [MatchCondition]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15cb0, 0x4652 bytes
    // netio.sys .text:0x537f0, 0x4dd3 bytes
    // netio.sys .text:0x2b780, 0x4e8c bytes
    // netio.sys .text:0x537b0, 0x4dd3 bytes
    //
    _u23(sdk::unknown_ptr) match_condition;
    
    // [MatchConditionContains]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1838, 0x4652 bytes
    // netio.sys .text:0xaf20, 0x4dd3 bytes
    // netio.sys .text:0x5270, 0x4e8c bytes
    // netio.sys .text:0xafd0, 0x4dd3 bytes
    //
    _u24(sdk::unknown_ptr) match_condition_contains;
    
    // [MatchConditionOverlap]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47574, 0x4652 bytes
    // netio.sys .text:0xe16c, 0x4dd3 bytes
    // netio.sys .text:0x20d94, 0x4e8c bytes
    // netio.sys .text:0xe21c, 0x4dd3 bytes
    //
    _u25(sdk::unknown_ptr) match_condition_overlap;
    
    // [MatchRangeConditionOverlapNotEqual]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47730, 0x4652 bytes
    // netio.sys .text:0x53874, 0x4dd3 bytes
    // netio.sys .text:0x54418, 0x4e8c bytes
    // netio.sys .text:0x53834, 0x4dd3 bytes
    //
    _u26(sdk::unknown_ptr) match_range_condition_overlap_not_equal;
    
    // [MatchRangeConditionsContainsNotEqual]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47878, 0x4652 bytes
    // netio.sys .text:0x539b8, 0x4dd3 bytes
    // netio.sys .text:0x5455c, 0x4e8c bytes
    // netio.sys .text:0x53978, 0x4dd3 bytes
    //
    _u27(sdk::unknown_ptr) match_range_conditions_contains_not_equal;
    
    // [MatchRangeValues]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x479f4, 0x4652 bytes
    // netio.sys .text:0x53b30, 0x4dd3 bytes
    // netio.sys .text:0x546d4, 0x4e8c bytes
    // netio.sys .text:0x53af0, 0x4dd3 bytes
    //
    _u28(sdk::unknown_ptr) match_range_values;
    
    // [MatchValues]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xc550, 0x4652 bytes
    // netio.sys .text:0xba50, 0x4dd3 bytes
    // netio.sys .text:0x63a0, 0x4e8c bytes
    // netio.sys .text:0xbb00, 0x4dd3 bytes
    //
    _u29(sdk::unknown_ptr) match_values;
    
    // [MdpAllocate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38040, 0x4652 bytes
    // netio.sys .text:0x3e440, 0x4dd3 bytes
    // netio.sys .text:0x3f900, 0x4e8c bytes
    // netio.sys .text:0x3e400, 0x4dd3 bytes
    //
    _u30(sdk::unknown_ptr) mdp_allocate;
    
    // [MdpAllocateAtDpcLevel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38090, 0x4652 bytes
    // netio.sys .text:0x3e4a0, 0x4dd3 bytes
    // netio.sys .text:0x3f960, 0x4e8c bytes
    // netio.sys .text:0x3e460, 0x4dd3 bytes
    //
    _u31(sdk::unknown_ptr) mdp_allocate_at_dpc_level;
    
    // [MdpCreatePool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21e70, 0x4652 bytes
    // netio.sys .text:0x241f0, 0x4dd3 bytes
    // netio.sys .text:0x28640, 0x4e8c bytes
    // netio.sys .text:0x24280, 0x4dd3 bytes
    //
    _u32(sdk::unknown_ptr) mdp_create_pool;
    
    // [MdpDestroyPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x381e0, 0x4652 bytes
    // netio.sys .text:0x3e600, 0x4dd3 bytes
    // netio.sys .text:0x3fac0, 0x4e8c bytes
    // netio.sys .text:0x3e5c0, 0x4dd3 bytes
    //
    _u33(sdk::unknown_ptr) mdp_destroy_pool;
    
    // [MdpFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x100b0, 0x4652 bytes
    // netio.sys .text:0x2830, 0x4dd3 bytes
    // netio.sys .text:0x2980, 0x4e8c bytes
    // netio.sys .text:0x2830, 0x4dd3 bytes
    //
    _u34(sdk::unknown_ptr) mdp_free;
    
    // [MdppAllocateNewPageAndBuildOneMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10db4, 0x4652 bytes
    // netio.sys .text:0x21240, 0x4dd3 bytes
    // netio.sys .text:0x21fb4, 0x4e8c bytes
    // netio.sys .text:0x212d0, 0x4dd3 bytes
    //
    _u35(sdk::unknown_ptr) mdpp_allocate_new_page_and_build_one_mdl;
    
    // [MdppBuildNextMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x112d0, 0x4652 bytes
    // netio.sys .text:0x21fc, 0x4dd3 bytes
    // netio.sys .text:0x22064, 0x4e8c bytes
    // netio.sys .text:0x21fc, 0x4dd3 bytes
    //
    _u36(sdk::unknown_ptr) mdpp_build_next_mdl;
    
    // [MdppFreeList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38244, 0x4652 bytes
    // netio.sys .text:0x3da08, 0x4dd3 bytes
    // netio.sys .text:0x3fb38, 0x4e8c bytes
    // netio.sys .text:0x3d9c8, 0x4dd3 bytes
    //
    _u37(sdk::unknown_ptr) mdpp_free_list;
    
    // [MdppScavengePool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11360, 0x4652 bytes
    // netio.sys .text:0x2118, 0x4dd3 bytes
    // netio.sys .text:0x2308, 0x4e8c bytes
    // netio.sys .text:0x2118, 0x4dd3 bytes
    //
    _u38(sdk::unknown_ptr) mdpp_scavenge_pool;
    
    // [MICROSOFT_WFP_PROVIDER]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57d50, 0x4652 bytes
    // netio.sys .rdata:0x6cc50, 0x4dd3 bytes
    // netio.sys .rdata:0x6d490, 0x4e8c bytes
    // netio.sys .rdata:0x6cc50, 0x4dd3 bytes
    //
    _u39(sdk::unknown_ptr) microsoft_wfp_provider;
    
    // [MICROSOFT_WFP_PROVIDER_Context]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61020, 0x4652 bytes
    // netio.sys .data:0x7a050, 0x4dd3 bytes
    // netio.sys .data:0x7b050, 0x4e8c bytes
    // netio.sys .data:0x7a050, 0x4dd3 bytes
    //
    _u40(sdk::unknown_ptr) microsoft_wfp_provider_context;
    
    // [Microsoft_Windows_WFPEnableBits]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61448, 0x4652 bytes
    // netio.sys .data:0x7a568, 0x4dd3 bytes
    // netio.sys .data:0x7b608, 0x4e8c bytes
    // netio.sys .data:0x7a568, 0x4dd3 bytes
    //
    _u41(sdk::unknown_ptr) microsoft_windows_wfp_enable_bits;
    
    // [Microsoft_Windows_WFPKeywords]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x595b0, 0x4652 bytes
    // netio.sys .rdata:0x70800, 0x4dd3 bytes
    // netio.sys .rdata:0x70fd0, 0x4e8c bytes
    // netio.sys .rdata:0x70800, 0x4dd3 bytes
    //
    _u42(sdk::unknown_ptr) microsoft_windows_wfp_keywords;
    
    // [Microsoft_Windows_WFPLevels]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59598, 0x4652 bytes
    // netio.sys .rdata:0x70860, 0x4dd3 bytes
    // netio.sys .rdata:0x71030, 0x4e8c bytes
    // netio.sys .rdata:0x70860, 0x4dd3 bytes
    //
    _u43(sdk::unknown_ptr) microsoft_windows_wfp_levels;
    
    // [NblpInitializeCount]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a90, 0x4652 bytes
    // netio.sys .data:0x7aac0, 0x4dd3 bytes
    // netio.sys .data:0x7bb60, 0x4e8c bytes
    // netio.sys .data:0x7aac0, 0x4dd3 bytes
    //
    _u44(sdk::unknown_ptr) nblp_initialize_count;
    
    // [NblpSpinLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61ac0, 0x4652 bytes
    // netio.sys .data:0x7aaf0, 0x4dd3 bytes
    // netio.sys .data:0x7bb90, 0x4e8c bytes
    // netio.sys .data:0x7aaf0, 0x4dd3 bytes
    //
    _u45(sdk::unknown_ptr) nblp_spin_lock;
    
    // [NblpStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d310, 0x4652 bytes
    // netio.sys .text:0x29240, 0x4dd3 bytes
    // netio.sys .text:0x2a0b0, 0x4e8c bytes
    // netio.sys .text:0x292d0, 0x4dd3 bytes
    //
    _u46(sdk::unknown_ptr) nblp_start_module;
    
    // [NblpStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256c0, 0x4652 bytes
    // netio.sys .text:0x1c510, 0x4dd3 bytes
    // netio.sys .text:0x16ed0, 0x4e8c bytes
    // netio.sys .text:0x1c5a0, 0x4dd3 bytes
    //
    _u47(sdk::unknown_ptr) nblp_stop_module;
    
    // [NcmAttachTlObjToNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16078, 0x4652 bytes
    // netio.sys .text:0x1140, 0x4dd3 bytes
    // netio.sys .text:0x12b0, 0x4e8c bytes
    // netio.sys .text:0x1140, 0x4dd3 bytes
    //
    _u48(sdk::unknown_ptr) ncm_attach_tl_obj_to_notification_channel_context;
    
    // [NcmCleanupNcContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19168, 0x4652 bytes
    // netio.sys .text:0x45294, 0x4dd3 bytes
    // netio.sys .text:0x46b10, 0x4e8c bytes
    // netio.sys .text:0x45254, 0x4dd3 bytes
    //
    _u49(sdk::unknown_ptr) ncm_cleanup_nc_context;
    
    // [NcmCreateNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16230, 0x4652 bytes
    // netio.sys .text:0x15b0, 0x4dd3 bytes
    // netio.sys .text:0x1704, 0x4e8c bytes
    // netio.sys .text:0x15b0, 0x4dd3 bytes
    //
    _u50(sdk::unknown_ptr) ncm_create_notification_channel_context;
    
    // [NcmCreateNotificationChannelContextWrapper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x167ec, 0x4652 bytes
    // netio.sys .text:0x14c0, 0x4dd3 bytes
    // netio.sys .text:0x1614, 0x4e8c bytes
    // netio.sys .text:0x14c0, 0x4dd3 bytes
    //
    _u51(sdk::unknown_ptr) ncm_create_notification_channel_context_wrapper;
    
    // [NcmDeleteNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16704, 0x4652 bytes
    // netio.sys .text:0x45370, 0x4dd3 bytes
    // netio.sys .text:0x46bec, 0x4e8c bytes
    // netio.sys .text:0x45330, 0x4dd3 bytes
    //
    _u52(sdk::unknown_ptr) ncm_delete_notification_channel_context;
    
    // [NcmDeplumbAndDeleteTlObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19058, 0x4652 bytes
    // netio.sys .text:0x45508, 0x4dd3 bytes
    // netio.sys .text:0x46d84, 0x4e8c bytes
    // netio.sys .text:0x454c8, 0x4dd3 bytes
    //
    _u53(sdk::unknown_ptr) ncm_deplumb_and_delete_tl_object;
    
    // [NcmDereferenceNcContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1913c, 0x4652 bytes
    // netio.sys .text:0x459b4, 0x4dd3 bytes
    // netio.sys .text:0x4726c, 0x4e8c bytes
    // netio.sys .text:0x45974, 0x4dd3 bytes
    //
    _u54(sdk::unknown_ptr) ncm_dereference_nc_context;
    
    // [NcmDestroyAllNotificationChannelContexts]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d8e8, 0x4652 bytes
    // netio.sys .text:0x459f4, 0x4dd3 bytes
    // netio.sys .text:0x472ac, 0x4e8c bytes
    // netio.sys .text:0x459b4, 0x4dd3 bytes
    //
    _u55(sdk::unknown_ptr) ncm_destroy_all_notification_channel_contexts;
    
    // [NcmDestroyNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1928c, 0x4652 bytes
    // netio.sys .text:0x45abc, 0x4dd3 bytes
    // netio.sys .text:0x47374, 0x4e8c bytes
    // netio.sys .text:0x45a7c, 0x4dd3 bytes
    //
    _u56(sdk::unknown_ptr) ncm_destroy_notification_channel_context;
    
    // [NcmDetachTlObjFromNotificationChannelContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19218, 0x4652 bytes
    // netio.sys .text:0x45b60, 0x4dd3 bytes
    // netio.sys .text:0x47418, 0x4e8c bytes
    // netio.sys .text:0x45b20, 0x4dd3 bytes
    //
    _u57(sdk::unknown_ptr) ncm_detach_tl_obj_from_notification_channel_context;
    
    // [NcmGlobal]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61980, 0x4652 bytes
    // netio.sys .data:0x7a980, 0x4dd3 bytes
    // netio.sys .data:0x7ba20, 0x4e8c bytes
    // netio.sys .data:0x7a980, 0x4dd3 bytes
    //
    _u58(sdk::unknown_ptr) ncm_global;
    
    // [NcmPlumbTlObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15ee8, 0x4652 bytes
    // netio.sys .text:0x130c, 0x4dd3 bytes
    // netio.sys .text:0x145c, 0x4e8c bytes
    // netio.sys .text:0x130c, 0x4dd3 bytes
    //
    _u59(sdk::unknown_ptr) ncm_plumb_tl_object;
    
    // [NcmTlObjSignalEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15e44, 0x4652 bytes
    // netio.sys .text:0x1094, 0x4dd3 bytes
    // netio.sys .text:0x1204, 0x4e8c bytes
    // netio.sys .text:0x1094, 0x4dd3 bytes
    //
    _u60(sdk::unknown_ptr) ncm_tl_obj_signal_event;
    
    // [NcmUpdateControlSocketState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24520, 0x4652 bytes
    // netio.sys .text:0x28d68, 0x4dd3 bytes
    // netio.sys .text:0x29c18, 0x4e8c bytes
    // netio.sys .text:0x28df8, 0x4dd3 bytes
    //
    _u61(sdk::unknown_ptr) ncm_update_control_socket_state;
    
    // [NeighborKeySizeTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x597a0, 0x4652 bytes
    // netio.sys .rdata:0x70e10, 0x4dd3 bytes
    // netio.sys .rdata:0x71820, 0x4e8c bytes
    // netio.sys .rdata:0x70e10, 0x4dd3 bytes
    //
    _u62(sdk::unknown_ptr) neighbor_key_size_table;
    
    // [NetioAddSetDeleteAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a1a0, 0x4652 bytes
    // netio.sys .text:0x40a30, 0x4dd3 bytes
    // netio.sys .text:0x41f30, 0x4e8c bytes
    // netio.sys .text:0x409f0, 0x4dd3 bytes
    //
    _u63(sdk::unknown_ptr) netio_add_set_delete_address;
    
    // [NetioAddSetDeleteNeighbor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3bf04, 0x4652 bytes
    // netio.sys .text:0x42924, 0x4dd3 bytes
    // netio.sys .text:0x43df4, 0x4e8c bytes
    // netio.sys .text:0x428e4, 0x4dd3 bytes
    //
    _u64(sdk::unknown_ptr) netio_add_set_delete_neighbor;
    
    // [NetioAddSetDeleteRoute]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b1e4, 0x4652 bytes
    // netio.sys .text:0x41ad4, 0x4dd3 bytes
    // netio.sys .text:0x42fe4, 0x4e8c bytes
    // netio.sys .text:0x41a94, 0x4dd3 bytes
    //
    _u65(sdk::unknown_ptr) netio_add_set_delete_route;
    
    // [NetioAddressChangeCallBack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1af60, 0x4652 bytes
    // netio.sys .text:0x1d730, 0x4dd3 bytes
    // netio.sys .text:0x1ae20, 0x4e8c bytes
    // netio.sys .text:0x1d7c0, 0x4dd3 bytes
    //
    _u66(sdk::unknown_ptr) netio_address_change_call_back;
    
    // [NetioAdvanceNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36780, 0x4652 bytes
    // netio.sys .text:0x3aec4, 0x4dd3 bytes
    // netio.sys .text:0x3c184, 0x4e8c bytes
    // netio.sys .text:0x3aec4, 0x4dd3 bytes
    //
    _u67(sdk::unknown_ptr) netio_advance_net_buffer;
    
    // [NetioAdvanceNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13990, 0x4652 bytes
    // netio.sys .text:0x1a1b0, 0x4dd3 bytes
    // netio.sys .text:0x12620, 0x4e8c bytes
    // netio.sys .text:0x1a240, 0x4dd3 bytes
    //
    _u68(sdk::unknown_ptr) netio_advance_net_buffer_list;
    
    // [NetioAdvanceToLocationInNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14e40, 0x4652 bytes
    // netio.sys .text:0x1a190, 0x4dd3 bytes
    // netio.sys .text:0x126b0, 0x4e8c bytes
    // netio.sys .text:0x1a220, 0x4dd3 bytes
    //
    _u69(sdk::unknown_ptr) netio_advance_to_location_in_net_buffer;
    
    // [NetioAllocateAndInitializeStackBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23ae0, 0x4652 bytes
    // netio.sys .text:0x26c50, 0x4dd3 bytes
    // netio.sys .text:0x28790, 0x4e8c bytes
    // netio.sys .text:0x26ce0, 0x4dd3 bytes
    //
    _u70(sdk::unknown_ptr) netio_allocate_and_initialize_stack_block;
    
    // [NetioAllocateAndReferenceCloneNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10560, 0x4652 bytes
    // netio.sys .text:0x42c0, 0x4dd3 bytes
    // netio.sys .text:0x3180, 0x4e8c bytes
    // netio.sys .text:0x42c0, 0x4dd3 bytes
    //
    _u71(sdk::unknown_ptr) netio_allocate_and_reference_clone_net_buffer_list;
    
    // [NetioAllocateAndReferenceCloneNetBufferListEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x139f0, 0x4652 bytes
    // netio.sys .text:0x19130, 0x4dd3 bytes
    // netio.sys .text:0x11740, 0x4e8c bytes
    // netio.sys .text:0x191c0, 0x4dd3 bytes
    //
    _u72(sdk::unknown_ptr) netio_allocate_and_reference_clone_net_buffer_list_ex;
    
    // [NetioAllocateAndReferenceCopyNetBufferListEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12fb0, 0x4652 bytes
    // netio.sys .text:0x1a720, 0x4dd3 bytes
    // netio.sys .text:0x2fa0, 0x4e8c bytes
    // netio.sys .text:0x1a7b0, 0x4dd3 bytes
    //
    _u73(sdk::function<struct ndis::net_buffer_list_t*(struct ndis::net_buffer_list_t*, sdk::function<void(struct ndis::net_buffer_list_t*, uint32_t, uint8_t)>*, void*, uint8_t)>*) netio_allocate_and_reference_copy_net_buffer_list_ex;
    
    // [NetioAllocateAndReferenceFragmentNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19ca0, 0x4652 bytes
    // netio.sys .text:0x3af10, 0x4dd3 bytes
    // netio.sys .text:0x3c1d0, 0x4e8c bytes
    // netio.sys .text:0x3af10, 0x4dd3 bytes
    //
    _u74(sdk::unknown_ptr) netio_allocate_and_reference_fragment_net_buffer_list;
    
    // [NetioAllocateAndReferenceNetBufferAndNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10480, 0x4652 bytes
    // netio.sys .text:0x41e0, 0x4dd3 bytes
    // netio.sys .text:0x2cd0, 0x4e8c bytes
    // netio.sys .text:0x41e0, 0x4dd3 bytes
    //
    _u75(sdk::unknown_ptr) netio_allocate_and_reference_net_buffer_and_net_buffer_list;
    
    // [NetioAllocateAndReferenceNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10780, 0x4652 bytes
    // netio.sys .text:0x1f160, 0x4dd3 bytes
    // netio.sys .text:0x21e40, 0x4e8c bytes
    // netio.sys .text:0x1f1f0, 0x4dd3 bytes
    //
    _u76(sdk::unknown_ptr) netio_allocate_and_reference_net_buffer_list;
    
    // [NetioAllocateAndReferenceNetBufferListNetBufferMdlAndData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11690, 0x4652 bytes
    // netio.sys .text:0x16960, 0x4dd3 bytes
    // netio.sys .text:0xf310, 0x4e8c bytes
    // netio.sys .text:0x16a10, 0x4dd3 bytes
    //
    _u77(sdk::unknown_ptr) netio_allocate_and_reference_net_buffer_list_net_buffer_mdl_and_data;
    
    // [NetioAllocateAndReferenceReassembledNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x367c0, 0x4652 bytes
    // netio.sys .text:0x3b000, 0x4dd3 bytes
    // netio.sys .text:0x3c2c0, 0x4e8c bytes
    // netio.sys .text:0x3b000, 0x4dd3 bytes
    //
    _u78(sdk::unknown_ptr) netio_allocate_and_reference_reassembled_net_buffer_list;
    
    // [NetioAllocateAndReferenceVacantNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36860, 0x4652 bytes
    // netio.sys .text:0x3b0c0, 0x4dd3 bytes
    // netio.sys .text:0x3c380, 0x4e8c bytes
    // netio.sys .text:0x3b0c0, 0x4dd3 bytes
    //
    _u79(sdk::unknown_ptr) netio_allocate_and_reference_vacant_net_buffer_list;
    
    // [NetioAllocateAndReferenceVacantNetBufferListEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36890, 0x4652 bytes
    // netio.sys .text:0x3b100, 0x4dd3 bytes
    // netio.sys .text:0x3c3c0, 0x4e8c bytes
    // netio.sys .text:0x3b100, 0x4dd3 bytes
    //
    _u80(sdk::unknown_ptr) netio_allocate_and_reference_vacant_net_buffer_list_ex;
    
    // [NetioAllocateMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10f90, 0x4652 bytes
    // netio.sys .text:0x1e30, 0x4dd3 bytes
    // netio.sys .text:0x2020, 0x4e8c bytes
    // netio.sys .text:0x1e30, 0x4dd3 bytes
    //
    _u81(sdk::function<struct nt::mdl_t*(uint32_t*)>*) netio_allocate_mdl;
    
    // [NetioAllocateNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x103d0, 0x4652 bytes
    // netio.sys .text:0x1f2e0, 0x4dd3 bytes
    // netio.sys .text:0x223a0, 0x4e8c bytes
    // netio.sys .text:0x1f370, 0x4dd3 bytes
    //
    _u82(sdk::unknown_ptr) netio_allocate_net_buffer;
    
    // [NetioAllocateNetBufferListNetBufferMdlAndDataPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24320, 0x4652 bytes
    // netio.sys .text:0x28ae0, 0x4dd3 bytes
    // netio.sys .text:0x29930, 0x4e8c bytes
    // netio.sys .text:0x28b70, 0x4dd3 bytes
    //
    _u83(sdk::unknown_ptr) netio_allocate_net_buffer_list_net_buffer_mdl_and_data_pool;
    
    // [NetioAllocateNetBufferMdlAndData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10410, 0x4652 bytes
    // netio.sys .text:0x189c0, 0x4dd3 bytes
    // netio.sys .text:0x13a90, 0x4e8c bytes
    // netio.sys .text:0x18a70, 0x4dd3 bytes
    //
    _u84(sdk::unknown_ptr) netio_allocate_net_buffer_mdl_and_data;
    
    // [NetioAllocateNetBufferMdlAndDataPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x244d0, 0x4652 bytes
    // netio.sys .text:0x29010, 0x4dd3 bytes
    // netio.sys .text:0x29ec0, 0x4e8c bytes
    // netio.sys .text:0x290a0, 0x4dd3 bytes
    //
    _u85(sdk::unknown_ptr) netio_allocate_net_buffer_mdl_and_data_pool;
    
    // [NetioAllocateOpaquePerProcessorContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x234a0, 0x4652 bytes
    // netio.sys .text:0x26940, 0x4dd3 bytes
    // netio.sys .text:0x1a970, 0x4e8c bytes
    // netio.sys .text:0x269d0, 0x4dd3 bytes
    //
    _u86(sdk::unknown_ptr) netio_allocate_opaque_per_processor_context;
    
    // [NetioAssociateQoSFlowWithNbl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36e20, 0x4652 bytes
    // netio.sys .text:0x3ccf0, 0x4dd3 bytes
    // netio.sys .text:0x3e1d0, 0x4e8c bytes
    // netio.sys .text:0x3ccb0, 0x4dd3 bytes
    //
    _u87(sdk::unknown_ptr) netio_associate_qo_s_flow_with_nbl;
    
    // [NetioCleanupNetBufferListInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36a80, 0x4652 bytes
    // netio.sys .text:0x3b310, 0x4dd3 bytes
    // netio.sys .text:0x3c5d0, 0x4e8c bytes
    // netio.sys .text:0x3b310, 0x4dd3 bytes
    //
    _u88(sdk::unknown_ptr) netio_cleanup_net_buffer_list_information;
    
    // [NetioCloseKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x200a0, 0x4652 bytes
    // netio.sys .text:0x21870, 0x4dd3 bytes
    // netio.sys .text:0x23900, 0x4e8c bytes
    // netio.sys .text:0x21900, 0x4dd3 bytes
    //
    _u89(sdk::unknown_ptr) netio_close_key;
    
    // [NetioCompartmentChangeCallBack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38e00, 0x4652 bytes
    // netio.sys .text:0x3f3e0, 0x4dd3 bytes
    // netio.sys .text:0x40910, 0x4e8c bytes
    // netio.sys .text:0x3f3a0, 0x4dd3 bytes
    //
    _u90(sdk::unknown_ptr) netio_compartment_change_call_back;
    
    // [NetioCompleteCloneNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf610, 0x4652 bytes
    // netio.sys .text:0x2480, 0x4dd3 bytes
    // netio.sys .text:0x2670, 0x4e8c bytes
    // netio.sys .text:0x2480, 0x4dd3 bytes
    //
    _u91(sdk::unknown_ptr) netio_complete_clone_net_buffer_list_chain;
    
    // [NetioCompleteCopyNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xff10, 0x4652 bytes
    // netio.sys .text:0x26d0, 0x4dd3 bytes
    // netio.sys .text:0x26e0, 0x4e8c bytes
    // netio.sys .text:0x26d0, 0x4dd3 bytes
    //
    _u92(sdk::function<void(struct ndis::net_buffer_list_t*, uint32_t, uint8_t)>*) netio_complete_copy_net_buffer_list_chain;
    
    // [NetioCompleteNetBufferAndNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xfdd0, 0x4652 bytes
    // netio.sys .text:0x2550, 0x4dd3 bytes
    // netio.sys .text:0x2620, 0x4e8c bytes
    // netio.sys .text:0x2550, 0x4dd3 bytes
    //
    _u93(sdk::unknown_ptr) netio_complete_net_buffer_and_net_buffer_list_chain;
    
    // [NetioCompleteNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf5a0, 0x4652 bytes
    // netio.sys .text:0x1f260, 0x4dd3 bytes
    // netio.sys .text:0x21f40, 0x4e8c bytes
    // netio.sys .text:0x1f2f0, 0x4dd3 bytes
    //
    _u94(sdk::unknown_ptr) netio_complete_net_buffer_list_chain;
    
    // [NetioCopyNetBufferListInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13d70, 0x4652 bytes
    // netio.sys .text:0x1b6d0, 0x4dd3 bytes
    // netio.sys .text:0x32c0, 0x4e8c bytes
    // netio.sys .text:0x1b760, 0x4dd3 bytes
    //
    _u95(sdk::unknown_ptr) netio_copy_net_buffer_list_information;
    
    // [NetioCreateForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f330, 0x4652 bytes
    // netio.sys .text:0x5dd90, 0x4dd3 bytes
    // netio.sys .text:0x5d460, 0x4e8c bytes
    // netio.sys .text:0x5dd50, 0x4dd3 bytes
    //
    _u96(sdk::unknown_ptr) netio_create_forward_flow;
    
    // [NetioCreateQoSFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36e80, 0x4652 bytes
    // netio.sys .text:0x3cd50, 0x4dd3 bytes
    // netio.sys .text:0x3e230, 0x4e8c bytes
    // netio.sys .text:0x3cd10, 0x4dd3 bytes
    //
    _u97(sdk::unknown_ptr) netio_create_qo_s_flow;
    
    // [NetioCreatevSwitchForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f4d0, 0x4652 bytes
    // netio.sys .text:0x5df70, 0x4dd3 bytes
    // netio.sys .text:0x5d640, 0x4e8c bytes
    // netio.sys .text:0x5df30, 0x4dd3 bytes
    //
    _u98(sdk::unknown_ptr) netio_createv_switch_forward_flow;
    
    // [NetioDeleteQoSFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36f40, 0x4652 bytes
    // netio.sys .text:0x3ce00, 0x4dd3 bytes
    // netio.sys .text:0x3e2e0, 0x4e8c bytes
    // netio.sys .text:0x3cdc0, 0x4dd3 bytes
    //
    _u99(sdk::unknown_ptr) netio_delete_qo_s_flow;
    
    // [NetioDereferenceNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xfbe0, 0x4652 bytes
    // netio.sys .text:0x5d10, 0x4dd3 bytes
    // netio.sys .text:0xf140, 0x4e8c bytes
    // netio.sys .text:0x5d80, 0x4dd3 bytes
    //
    _v00(sdk::unknown_ptr) netio_dereference_net_buffer_list;
    
    // [NetioDereferenceNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf800, 0x4652 bytes
    // netio.sys .text:0x59f0, 0x4dd3 bytes
    // netio.sys .text:0xef10, 0x4e8c bytes
    // netio.sys .text:0x5a60, 0x4dd3 bytes
    //
    _v01(sdk::unknown_ptr) netio_dereference_net_buffer_list_chain;
    
    // [NetioEnumerateAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b598, 0x4652 bytes
    // netio.sys .text:0x1dbc0, 0x4dd3 bytes
    // netio.sys .text:0x1c9c0, 0x4e8c bytes
    // netio.sys .text:0x1dc50, 0x4dd3 bytes
    //
    _v02(sdk::unknown_ptr) netio_enumerate_address;
    
    // [NetioExpandKernelStackAndCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x422f0, 0x4652 bytes
    // netio.sys .text:0x4c4b8, 0x4dd3 bytes
    // netio.sys .text:0x4db64, 0x4e8c bytes
    // netio.sys .text:0x4c478, 0x4dd3 bytes
    //
    _v03(sdk::unknown_ptr) netio_expand_kernel_stack_and_callout;
    
    // [NetioExpandNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19fe0, 0x4652 bytes
    // netio.sys .text:0x3b330, 0x4dd3 bytes
    // netio.sys .text:0x3c5f0, 0x4e8c bytes
    // netio.sys .text:0x3b330, 0x4dd3 bytes
    //
    _v04(sdk::unknown_ptr) netio_expand_net_buffer;
    
    // [NetioExtendNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13970, 0x4652 bytes
    // netio.sys .text:0x18ab0, 0x4dd3 bytes
    // netio.sys .text:0x11630, 0x4e8c bytes
    // netio.sys .text:0x18b40, 0x4dd3 bytes
    //
    _v05(sdk::unknown_ptr) netio_extend_net_buffer;
    
    // [NetioFillNeighborRow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c0a8, 0x4652 bytes
    // netio.sys .text:0x42ad8, 0x4dd3 bytes
    // netio.sys .text:0x43fa8, 0x4e8c bytes
    // netio.sys .text:0x42a98, 0x4dd3 bytes
    //
    _v06(sdk::unknown_ptr) netio_fill_neighbor_row;
    
    // [NetioFlowAssociateContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f720, 0x4652 bytes
    // netio.sys .text:0x5e1d0, 0x4dd3 bytes
    // netio.sys .text:0x5d8a0, 0x4e8c bytes
    // netio.sys .text:0x5e190, 0x4dd3 bytes
    //
    _v07(sdk::unknown_ptr) netio_flow_associate_context;
    
    // [NetioFlowRemoveContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f7b0, 0x4652 bytes
    // netio.sys .text:0x5e270, 0x4dd3 bytes
    // netio.sys .text:0x5d940, 0x4e8c bytes
    // netio.sys .text:0x5e230, 0x4dd3 bytes
    //
    _v08(sdk::unknown_ptr) netio_flow_remove_context;
    
    // [NetioFlowRetrieveContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f840, 0x4652 bytes
    // netio.sys .text:0x5e310, 0x4dd3 bytes
    // netio.sys .text:0x5d9e0, 0x4e8c bytes
    // netio.sys .text:0x5e2d0, 0x4dd3 bytes
    //
    _v09(sdk::unknown_ptr) netio_flow_retrieve_context;
    
    // [NetioFlowsManagerTimerCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f8f0, 0x4652 bytes
    // netio.sys .text:0x5e3e0, 0x4dd3 bytes
    // netio.sys .text:0x5dab0, 0x4e8c bytes
    // netio.sys .text:0x5e3a0, 0x4dd3 bytes
    //
    _v10(sdk::unknown_ptr) netio_flows_manager_timer_callback;
    
    // [NetioFreeCloneNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15700, 0x4652 bytes
    // netio.sys .text:0x1b500, 0x4dd3 bytes
    // netio.sys .text:0x13810, 0x4e8c bytes
    // netio.sys .text:0x1b590, 0x4dd3 bytes
    //
    _v11(sdk::unknown_ptr) netio_free_clone_net_buffer_list;
    
    // [NetioFreeCopyNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36a90, 0x4652 bytes
    // netio.sys .text:0x3b370, 0x4dd3 bytes
    // netio.sys .text:0x3c630, 0x4e8c bytes
    // netio.sys .text:0x3b370, 0x4dd3 bytes
    //
    _v12(sdk::unknown_ptr) netio_free_copy_net_buffer_list;
    
    // [NetioFreeMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a1c0, 0x4652 bytes
    // netio.sys .text:0x2610, 0x4dd3 bytes
    // netio.sys .text:0x1b410, 0x4e8c bytes
    // netio.sys .text:0x2610, 0x4dd3 bytes
    //
    _v13(sdk::function<void(struct nt::mdl_t*)>*) netio_free_mdl;
    
    // [NetioFreeNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15bd0, 0x4652 bytes
    // netio.sys .text:0x1a160, 0x4dd3 bytes
    // netio.sys .text:0x13d40, 0x4e8c bytes
    // netio.sys .text:0x1a1f0, 0x4dd3 bytes
    //
    _v14(sdk::unknown_ptr) netio_free_net_buffer;
    
    // [NetioFreeNetBufferAndNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13980, 0x4652 bytes
    // netio.sys .text:0x18da0, 0x4dd3 bytes
    // netio.sys .text:0x11720, 0x4e8c bytes
    // netio.sys .text:0x18e30, 0x4dd3 bytes
    //
    _v15(sdk::unknown_ptr) netio_free_net_buffer_and_net_buffer_list;
    
    // [NetioFreeNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13980, 0x4652 bytes
    // netio.sys .text:0x18da0, 0x4dd3 bytes
    // netio.sys .text:0x11720, 0x4e8c bytes
    // netio.sys .text:0x18e30, 0x4dd3 bytes
    //
    _v16(sdk::unknown_ptr) netio_free_net_buffer_list;
    
    // [NetioFreeNetBufferListNetBufferMdlAndDataPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36ac0, 0x4652 bytes
    // netio.sys .text:0x3b3b0, 0x4dd3 bytes
    // netio.sys .text:0x3c670, 0x4e8c bytes
    // netio.sys .text:0x3b3b0, 0x4dd3 bytes
    //
    _v17(sdk::unknown_ptr) netio_free_net_buffer_list_net_buffer_mdl_and_data_pool;
    
    // [NetioFreeNetBufferMdlAndDataPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36ad0, 0x4652 bytes
    // netio.sys .text:0x3b3d0, 0x4dd3 bytes
    // netio.sys .text:0x3c690, 0x4e8c bytes
    // netio.sys .text:0x3b3d0, 0x4dd3 bytes
    //
    _v18(sdk::unknown_ptr) netio_free_net_buffer_mdl_and_data_pool;
    
    // [NetioFreeOpaquePerProcessorContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19aa0, 0x4652 bytes
    // netio.sys .text:0x3e680, 0x4dd3 bytes
    // netio.sys .text:0x178b0, 0x4e8c bytes
    // netio.sys .text:0x3e640, 0x4dd3 bytes
    //
    _v19(sdk::unknown_ptr) netio_free_opaque_per_processor_context;
    
    // [NetioFreeStackBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19b10, 0x4652 bytes
    // netio.sys .text:0x44ef0, 0x4dd3 bytes
    // netio.sys .text:0x46600, 0x4e8c bytes
    // netio.sys .text:0x44eb0, 0x4dd3 bytes
    //
    _v20(sdk::unknown_ptr) netio_free_stack_block;
    
    // [NetioGetAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x192f0, 0x4652 bytes
    // netio.sys .text:0x1d580, 0x4dd3 bytes
    // netio.sys .text:0x171c0, 0x4e8c bytes
    // netio.sys .text:0x1d610, 0x4dd3 bytes
    //
    _v21(sdk::unknown_ptr) netio_get_address;
    
    // [NetioGetStatsForQoSFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36fa0, 0x4652 bytes
    // netio.sys .text:0x3ce60, 0x4dd3 bytes
    // netio.sys .text:0x3e340, 0x4e8c bytes
    // netio.sys .text:0x3ce20, 0x4dd3 bytes
    //
    _v22(sdk::unknown_ptr) netio_get_stats_for_qo_s_flow;
    
    // [NetioGetSuperTriageBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d8e0, 0x4652 bytes
    // netio.sys .text:0x451b0, 0x4dd3 bytes
    // netio.sys .text:0x468c0, 0x4e8c bytes
    // netio.sys .text:0x45170, 0x4dd3 bytes
    //
    _v23(sdk::unknown_ptr) netio_get_super_triage_block;
    
    // [NetioInitializeFlowsManager]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21790, 0x4652 bytes
    // netio.sys .text:0x23a80, 0x4dd3 bytes
    // netio.sys .text:0x28080, 0x4e8c bytes
    // netio.sys .text:0x23b10, 0x4dd3 bytes
    //
    _v24(sdk::unknown_ptr) netio_initialize_flows_manager;
    
    // [NetioInitializeMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36ae0, 0x4652 bytes
    // netio.sys .text:0x3b3f0, 0x4dd3 bytes
    // netio.sys .text:0x3c6b0, 0x4e8c bytes
    // netio.sys .text:0x3b3f0, 0x4dd3 bytes
    //
    _v25(sdk::unknown_ptr) netio_initialize_mdl;
    
    // [NetioInitializeNetBufferListAndFirstNetBufferContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1470, 0x4652 bytes
    // netio.sys .text:0x17920, 0x4dd3 bytes
    // netio.sys .text:0x33c0, 0x4e8c bytes
    // netio.sys .text:0x179d0, 0x4dd3 bytes
    //
    _v26(sdk::unknown_ptr) netio_initialize_net_buffer_list_and_first_net_buffer_context;
    
    // [NetioInitializeNetBufferListContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11790, 0x4652 bytes
    // netio.sys .text:0x18ea0, 0x4dd3 bytes
    // netio.sys .text:0x10e30, 0x4e8c bytes
    // netio.sys .text:0x18f30, 0x4dd3 bytes
    //
    _v27(sdk::unknown_ptr) netio_initialize_net_buffer_list_context;
    
    // [NetioInitializeNetBufferListContextPrimitive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10370, 0x4652 bytes
    // netio.sys .text:0x1f1c0, 0x4dd3 bytes
    // netio.sys .text:0x21ea0, 0x4e8c bytes
    // netio.sys .text:0x1f250, 0x4dd3 bytes
    //
    _v28(sdk::unknown_ptr) netio_initialize_net_buffer_list_context_primitive;
    
    // [NetioInitializeNetBufferListLibrary]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x213f0, 0x4652 bytes
    // netio.sys .text:0x236b0, 0x4dd3 bytes
    // netio.sys .text:0x27cc0, 0x4e8c bytes
    // netio.sys .text:0x23740, 0x4dd3 bytes
    //
    _v29(sdk::unknown_ptr) netio_initialize_net_buffer_list_library;
    
    // [NetioInitializeWorkQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23840, 0x4652 bytes
    // netio.sys .text:0x26620, 0x4dd3 bytes
    // netio.sys .text:0x1abd0, 0x4e8c bytes
    // netio.sys .text:0x266b0, 0x4dd3 bytes
    //
    _v30(sdk::unknown_ptr) netio_initialize_work_queue;
    
    // [NetioInsertWorkQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xec30, 0x4652 bytes
    // netio.sys .text:0x22a0, 0x4dd3 bytes
    // netio.sys .text:0x4080, 0x4e8c bytes
    // netio.sys .text:0x22a0, 0x4dd3 bytes
    //
    _v31(sdk::unknown_ptr) netio_insert_work_queue;
    
    // [NetioInterfaceChangeCallBack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d4a0, 0x4652 bytes
    // netio.sys .text:0x44ac0, 0x4dd3 bytes
    // netio.sys .text:0x461f0, 0x4e8c bytes
    // netio.sys .text:0x44a80, 0x4dd3 bytes
    //
    _v32(sdk::unknown_ptr) netio_interface_change_call_back;
    
    // [NetioInterfaceKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57e50, 0x4652 bytes
    // netio.sys .rdata:0x6c4b0, 0x4dd3 bytes
    // netio.sys .rdata:0x6cac0, 0x4e8c bytes
    // netio.sys .rdata:0x6c4b0, 0x4dd3 bytes
    //
    _v33(sdk::unknown_ptr) netio_interface_key;
    
    // [NetioLookupForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fc20, 0x4652 bytes
    // netio.sys .text:0x5e7c0, 0x4dd3 bytes
    // netio.sys .text:0x5de80, 0x4e8c bytes
    // netio.sys .text:0x5e780, 0x4dd3 bytes
    //
    _v34(sdk::unknown_ptr) netio_lookup_forward_flow;
    
    // [NetioLookupvSwitchForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fcc0, 0x4652 bytes
    // netio.sys .text:0x5e8a0, 0x4dd3 bytes
    // netio.sys .text:0x5df60, 0x4e8c bytes
    // netio.sys .text:0x5e860, 0x4dd3 bytes
    //
    _v35(sdk::unknown_ptr) netio_lookupv_switch_forward_flow;
    
    // [NetioNcmActiveReferenceRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d990, 0x4652 bytes
    // netio.sys .text:0x45d90, 0x4dd3 bytes
    // netio.sys .text:0x47650, 0x4e8c bytes
    // netio.sys .text:0x45d50, 0x4dd3 bytes
    //
    _v36(sdk::unknown_ptr) netio_ncm_active_reference_request;
    
    // [NetioNcmCleanupState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3dbc0, 0x4652 bytes
    // netio.sys .text:0x46220, 0x4dd3 bytes
    // netio.sys .text:0x47b00, 0x4e8c bytes
    // netio.sys .text:0x461e0, 0x4dd3 bytes
    //
    _v37(sdk::unknown_ptr) netio_ncm_cleanup_state;
    
    // [NetioNcmFastActiveReferenceRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15be0, 0x4652 bytes
    // netio.sys .text:0x1b90, 0x4dd3 bytes
    // netio.sys .text:0x1a90, 0x4e8c bytes
    // netio.sys .text:0x1b90, 0x4dd3 bytes
    //
    _v38(sdk::unknown_ptr) netio_ncm_fast_active_reference_request;
    
    // [NetioNcmFastCheckIsAoAcCapable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13960, 0x4652 bytes
    // netio.sys .text:0x18d40, 0x4dd3 bytes
    // netio.sys .text:0x11360, 0x4e8c bytes
    // netio.sys .text:0x18dd0, 0x4dd3 bytes
    //
    _v39(sdk::unknown_ptr) netio_ncm_fast_check_is_ao_ac_capable;
    
    // [NetioNcmFindAndStorePatternHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3dcfc, 0x4652 bytes
    // netio.sys .text:0x46310, 0x4dd3 bytes
    // netio.sys .text:0x47ba4, 0x4e8c bytes
    // netio.sys .text:0x462d0, 0x4dd3 bytes
    //
    _v40(sdk::unknown_ptr) netio_ncm_find_and_store_pattern_handle;
    
    // [NetioNcmGetAllNotificationChannelContextParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x165e0, 0x4652 bytes
    // netio.sys .text:0x1ce0, 0x4dd3 bytes
    // netio.sys .text:0x1b60, 0x4e8c bytes
    // netio.sys .text:0x1ce0, 0x4dd3 bytes
    //
    _v41(sdk::unknown_ptr) netio_ncm_get_all_notification_channel_context_parameters;
    
    // [NetioNcmHandlePatternEviction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3de90, 0x4652 bytes
    // netio.sys .text:0x464b0, 0x4dd3 bytes
    // netio.sys .text:0x47d30, 0x4e8c bytes
    // netio.sys .text:0x46470, 0x4dd3 bytes
    //
    _v42(sdk::unknown_ptr) netio_ncm_handle_pattern_eviction;
    
    // [NetioNcmInitializeState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ff10, 0x4652 bytes
    // netio.sys .text:0x21c80, 0x4dd3 bytes
    // netio.sys .text:0x23cd0, 0x4e8c bytes
    // netio.sys .text:0x21d10, 0x4dd3 bytes
    //
    _v43(sdk::unknown_ptr) netio_ncm_initialize_state;
    
    // [NetioNcmIsOwningProcessRtcApp]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e100, 0x4652 bytes
    // netio.sys .text:0x46790, 0x4dd3 bytes
    // netio.sys .text:0x48010, 0x4e8c bytes
    // netio.sys .text:0x46750, 0x4dd3 bytes
    //
    _v44(sdk::unknown_ptr) netio_ncm_is_owning_process_rtc_app;
    
    // [NetioNcmNotificationChannelContextRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x167b0, 0x4652 bytes
    // netio.sys .text:0x1c450, 0x4dd3 bytes
    // netio.sys .text:0x13e00, 0x4e8c bytes
    // netio.sys .text:0x1c4e0, 0x4dd3 bytes
    //
    _v45(sdk::unknown_ptr) netio_ncm_notification_channel_context_request;
    
    // [NetioNcmNotifyRedirectOnInterface]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e190, 0x4652 bytes
    // netio.sys .text:0x46850, 0x4dd3 bytes
    // netio.sys .text:0x480d0, 0x4e8c bytes
    // netio.sys .text:0x46810, 0x4dd3 bytes
    //
    _v46(sdk::unknown_ptr) netio_ncm_notify_redirect_on_interface;
    
    // [NetioNcmPatternCoalescingRequired]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e1b0, 0x4652 bytes
    // netio.sys .text:0x468c0, 0x4dd3 bytes
    // netio.sys .text:0x48140, 0x4e8c bytes
    // netio.sys .text:0x46880, 0x4dd3 bytes
    //
    _v47(sdk::unknown_ptr) netio_ncm_pattern_coalescing_required;
    
    // [NetioNcmQueryRtcPortHint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e220, 0x4652 bytes
    // netio.sys .text:0x46930, 0x4dd3 bytes
    // netio.sys .text:0x481b0, 0x4e8c bytes
    // netio.sys .text:0x468f0, 0x4dd3 bytes
    //
    _v48(sdk::unknown_ptr) netio_ncm_query_rtc_port_hint;
    
    // [NetioNcmQueryRtcPortRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e270, 0x4652 bytes
    // netio.sys .text:0x469a0, 0x4dd3 bytes
    // netio.sys .text:0x48220, 0x4e8c bytes
    // netio.sys .text:0x46960, 0x4dd3 bytes
    //
    _v49(sdk::unknown_ptr) netio_ncm_query_rtc_port_range;
    
    // [NetioNcmSignalNcContextWorkQueueRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e2d0, 0x4652 bytes
    // netio.sys .text:0x46a10, 0x4dd3 bytes
    // netio.sys .text:0x48290, 0x4e8c bytes
    // netio.sys .text:0x469d0, 0x4dd3 bytes
    //
    _v50(sdk::unknown_ptr) netio_ncm_signal_nc_context_work_queue_routine;
    
    // [NetioNcmStoreBaseSupportedSlots]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e390, 0x4652 bytes
    // netio.sys .text:0x46af0, 0x4dd3 bytes
    // netio.sys .text:0x48370, 0x4e8c bytes
    // netio.sys .text:0x46ab0, 0x4dd3 bytes
    //
    _v51(sdk::unknown_ptr) netio_ncm_store_base_supported_slots;
    
    // [NetioNcmStoreRtcPortHint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e4d0, 0x4652 bytes
    // netio.sys .text:0x46e40, 0x4dd3 bytes
    // netio.sys .text:0x486c0, 0x4e8c bytes
    // netio.sys .text:0x46e00, 0x4dd3 bytes
    //
    _v52(sdk::unknown_ptr) netio_ncm_store_rtc_port_hint;
    
    // [NetioNcmStoreRtcPortRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24590, 0x4652 bytes
    // netio.sys .text:0x28fc0, 0x4dd3 bytes
    // netio.sys .text:0x29e70, 0x4e8c bytes
    // netio.sys .text:0x29050, 0x4dd3 bytes
    //
    _v53(sdk::unknown_ptr) netio_ncm_store_rtc_port_range;
    
    // [NetioNcmTlObjectRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15db0, 0x4652 bytes
    // netio.sys .text:0x1010, 0x4dd3 bytes
    // netio.sys .text:0x1180, 0x4e8c bytes
    // netio.sys .text:0x1010, 0x4dd3 bytes
    //
    _v54(sdk::unknown_ptr) netio_ncm_tl_object_request;
    
    // [NetioNcmTrackIsLegitimateWake]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e510, 0x4652 bytes
    // netio.sys .text:0x46ec0, 0x4dd3 bytes
    // netio.sys .text:0x48740, 0x4e8c bytes
    // netio.sys .text:0x46e80, 0x4dd3 bytes
    //
    _v55(sdk::unknown_ptr) netio_ncm_track_is_legitimate_wake;
    
    // [NetioNcmWriteRtcPortRangeToRegistry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e65c, 0x4652 bytes
    // netio.sys .text:0x47054, 0x4dd3 bytes
    // netio.sys .text:0x488c8, 0x4e8c bytes
    // netio.sys .text:0x47014, 0x4dd3 bytes
    //
    _v56(sdk::unknown_ptr) netio_ncm_write_rtc_port_range_to_registry;
    
    // [NetioNdisObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61aa8, 0x4652 bytes
    // netio.sys .data:0x7aad8, 0x4dd3 bytes
    // netio.sys .data:0x7bb78, 0x4e8c bytes
    // netio.sys .data:0x7aad8, 0x4dd3 bytes
    //
    _v57(sdk::unknown_ptr) netio_ndis_object;
    
    // [NetioNetBufferAndNetBufferListPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61ab0, 0x4652 bytes
    // netio.sys .data:0x7aae0, 0x4dd3 bytes
    // netio.sys .data:0x7bb80, 0x4e8c bytes
    // netio.sys .data:0x7aae0, 0x4dd3 bytes
    //
    _v58(sdk::unknown_ptr) netio_net_buffer_and_net_buffer_list_pool;
    
    // [NetioNetBufferDataPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a88, 0x4652 bytes
    // netio.sys .data:0x7aab8, 0x4dd3 bytes
    // netio.sys .data:0x7bb58, 0x4e8c bytes
    // netio.sys .data:0x7aab8, 0x4dd3 bytes
    //
    _v59(sdk::unknown_ptr) netio_net_buffer_data_pool;
    
    // [NetioNetBufferListPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61ab8, 0x4652 bytes
    // netio.sys .data:0x7aae8, 0x4dd3 bytes
    // netio.sys .data:0x7bb88, 0x4e8c bytes
    // netio.sys .data:0x7aae8, 0x4dd3 bytes
    //
    _v60(sdk::unknown_ptr) netio_net_buffer_list_pool;
    
    // [NetioNetBufferPool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a98, 0x4652 bytes
    // netio.sys .data:0x7aac8, 0x4dd3 bytes
    // netio.sys .data:0x7bb68, 0x4e8c bytes
    // netio.sys .data:0x7aac8, 0x4dd3 bytes
    //
    _v61(sdk::unknown_ptr) netio_net_buffer_pool;
    
    // [NetioNrtDereferenceRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51790, 0x4652 bytes
    // netio.sys .text:0x60bb0, 0x4dd3 bytes
    // netio.sys .text:0x60dc0, 0x4e8c bytes
    // netio.sys .text:0x60b70, 0x4dd3 bytes
    //
    _v62(sdk::unknown_ptr) netio_nrt_dereference_record;
    
    // [NetioNrtDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51f90, 0x4652 bytes
    // netio.sys .text:0x62ec0, 0x4dd3 bytes
    // netio.sys .text:0x630b0, 0x4e8c bytes
    // netio.sys .text:0x62e80, 0x4dd3 bytes
    //
    _v63(sdk::unknown_ptr) netio_nrt_dispatch;
    
    // [NetioNrtFindOrCreateRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51800, 0x4652 bytes
    // netio.sys .text:0x60fa0, 0x4dd3 bytes
    // netio.sys .text:0x611b0, 0x4e8c bytes
    // netio.sys .text:0x60f60, 0x4dd3 bytes
    //
    _v64(sdk::unknown_ptr) netio_nrt_find_or_create_record;
    
    // [NetioNrtIsIpInRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x518f0, 0x4652 bytes
    // netio.sys .text:0x61200, 0x4dd3 bytes
    // netio.sys .text:0x61420, 0x4e8c bytes
    // netio.sys .text:0x611c0, 0x4dd3 bytes
    //
    _v65(sdk::unknown_ptr) netio_nrt_is_ip_in_record;
    
    // [NetioNrtIsTrackerDevice]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15720, 0x4652 bytes
    // netio.sys .text:0x18d20, 0x4dd3 bytes
    // netio.sys .text:0x11610, 0x4e8c bytes
    // netio.sys .text:0x18db0, 0x4dd3 bytes
    //
    _v66(sdk::unknown_ptr) netio_nrt_is_tracker_device;
    
    // [NetioNrtReferenceRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x519b0, 0x4652 bytes
    // netio.sys .text:0x61480, 0x4dd3 bytes
    // netio.sys .text:0x616a0, 0x4e8c bytes
    // netio.sys .text:0x61440, 0x4dd3 bytes
    //
    _v67(sdk::unknown_ptr) netio_nrt_reference_record;
    
    // [NetioNrtStart]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x238c0, 0x4652 bytes
    // netio.sys .text:0x21fa0, 0x4dd3 bytes
    // netio.sys .text:0x249a0, 0x4e8c bytes
    // netio.sys .text:0x22030, 0x4dd3 bytes
    //
    _v68(sdk::unknown_ptr) netio_nrt_start;
    
    // [NetioNrtStop]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x52230, 0x4652 bytes
    // netio.sys .text:0x637a0, 0x4dd3 bytes
    // netio.sys .text:0x639a0, 0x4e8c bytes
    // netio.sys .text:0x63760, 0x4dd3 bytes
    //
    _v69(sdk::unknown_ptr) netio_nrt_stop;
    
    // [NetioOpenKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20180, 0x4652 bytes
    // netio.sys .text:0x21670, 0x4dd3 bytes
    // netio.sys .text:0x23400, 0x4e8c bytes
    // netio.sys .text:0x21700, 0x4dd3 bytes
    //
    _v70(sdk::unknown_ptr) netio_open_key;
    
    // [NetioPhClampMssOnIpPkt]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x370f0, 0x4652 bytes
    // netio.sys .text:0x3bee0, 0x4dd3 bytes
    // netio.sys .text:0x3d3d0, 0x4e8c bytes
    // netio.sys .text:0x3bea0, 0x4dd3 bytes
    //
    _v71(sdk::unknown_ptr) netio_ph_clamp_mss_on_ip_pkt;
    
    // [NetioPhClampMssOnTcpPkt]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37160, 0x4652 bytes
    // netio.sys .text:0x3bf60, 0x4dd3 bytes
    // netio.sys .text:0x3d450, 0x4e8c bytes
    // netio.sys .text:0x3bf20, 0x4dd3 bytes
    //
    _v72(sdk::unknown_ptr) netio_ph_clamp_mss_on_tcp_pkt;
    
    // [NetioPhClampMssOnTcpSyn]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37250, 0x4652 bytes
    // netio.sys .text:0x3c050, 0x4dd3 bytes
    // netio.sys .text:0x3d540, 0x4e8c bytes
    // netio.sys .text:0x3c010, 0x4dd3 bytes
    //
    _v73(sdk::unknown_ptr) netio_ph_clamp_mss_on_tcp_syn;
    
    // [NetioPhFindTcpOption]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x372f0, 0x4652 bytes
    // netio.sys .text:0x3c2c0, 0x4dd3 bytes
    // netio.sys .text:0x3d7b0, 0x4e8c bytes
    // netio.sys .text:0x3c280, 0x4dd3 bytes
    //
    _v74(sdk::unknown_ptr) netio_ph_find_tcp_option;
    
    // [NetioPhUpdateTcpChecksum]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37670, 0x4652 bytes
    // netio.sys .text:0x3cc00, 0x4dd3 bytes
    // netio.sys .text:0x3e0e0, 0x4e8c bytes
    // netio.sys .text:0x3cbc0, 0x4dd3 bytes
    //
    _v75(sdk::unknown_ptr) netio_ph_update_tcp_checksum;
    
    // [NetioProtocolHeader1Pool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61aa0, 0x4652 bytes
    // netio.sys .data:0x7aad0, 0x4dd3 bytes
    // netio.sys .data:0x7bb70, 0x4e8c bytes
    // netio.sys .data:0x7aad0, 0x4dd3 bytes
    //
    _v76(sdk::unknown_ptr) netio_protocol_header1_pool;
    
    // [NetioProtocolHeader2Pool]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a80, 0x4652 bytes
    // netio.sys .data:0x7aab0, 0x4dd3 bytes
    // netio.sys .data:0x7bb50, 0x4e8c bytes
    // netio.sys .data:0x7aab0, 0x4dd3 bytes
    //
    _v77(sdk::unknown_ptr) netio_protocol_header2_pool;
    
    // [NetioQueryNetBufferListTrafficClass]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a140, 0x4652 bytes
    // netio.sys .text:0x3cf20, 0x4dd3 bytes
    // netio.sys .text:0x3e400, 0x4e8c bytes
    // netio.sys .text:0x3cee0, 0x4dd3 bytes
    //
    _v78(sdk::unknown_ptr) netio_query_net_buffer_list_traffic_class;
    
    // [NetioQueryNsiForAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a32c, 0x4652 bytes
    // netio.sys .text:0x40bcc, 0x4dd3 bytes
    // netio.sys .text:0x420cc, 0x4e8c bytes
    // netio.sys .text:0x40b8c, 0x4dd3 bytes
    //
    _v79(sdk::unknown_ptr) netio_query_nsi_for_address;
    
    // [NetioQueryValueKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x200d0, 0x4652 bytes
    // netio.sys .text:0x21930, 0x4dd3 bytes
    // netio.sys .text:0x239c0, 0x4e8c bytes
    // netio.sys .text:0x219c0, 0x4dd3 bytes
    //
    _v80(sdk::unknown_ptr) netio_query_value_key;
    
    // [NetioReferenceNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x151d0, 0x4652 bytes
    // netio.sys .text:0x1a180, 0x4dd3 bytes
    // netio.sys .text:0x13830, 0x4e8c bytes
    // netio.sys .text:0x1a210, 0x4dd3 bytes
    //
    _v81(sdk::unknown_ptr) netio_reference_net_buffer_list;
    
    // [NetioReferenceNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36af0, 0x4652 bytes
    // netio.sys .text:0x3b410, 0x4dd3 bytes
    // netio.sys .text:0x3c6d0, 0x4e8c bytes
    // netio.sys .text:0x3b410, 0x4dd3 bytes
    //
    _v82(sdk::unknown_ptr) netio_reference_net_buffer_list_chain;
    
    // [NetioRefreshFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fde0, 0x4652 bytes
    // netio.sys .text:0x5e9e0, 0x4dd3 bytes
    // netio.sys .text:0x5e0a0, 0x4e8c bytes
    // netio.sys .text:0x5e9a0, 0x4dd3 bytes
    //
    _v83(sdk::unknown_ptr) netio_refresh_flow;
    
    // [NetioRegSyncDefaultChangeHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23f60, 0x4652 bytes
    // netio.sys .text:0x281d0, 0x4dd3 bytes
    // netio.sys .text:0x1af00, 0x4e8c bytes
    // netio.sys .text:0x28260, 0x4dd3 bytes
    //
    _v84(sdk::unknown_ptr) netio_reg_sync_default_change_handler;
    
    // [NetioRegSyncInterface]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20dd0, 0x4652 bytes
    // netio.sys .text:0x213b0, 0x4dd3 bytes
    // netio.sys .text:0x18680, 0x4e8c bytes
    // netio.sys .text:0x21440, 0x4dd3 bytes
    //
    _v85(sdk::unknown_ptr) netio_reg_sync_interface;
    
    // [NetioRegSyncQueryAndUpdateKeyValue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20f70, 0x4652 bytes
    // netio.sys .text:0x21580, 0x4dd3 bytes
    // netio.sys .text:0x18850, 0x4e8c bytes
    // netio.sys .text:0x21610, 0x4dd3 bytes
    //
    _v86(sdk::unknown_ptr) netio_reg_sync_query_and_update_key_value;
    
    // [NetioRegisterAddressChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x212e0, 0x4652 bytes
    // netio.sys .text:0x27ddc, 0x4dd3 bytes
    // netio.sys .text:0x289cc, 0x4e8c bytes
    // netio.sys .text:0x27e6c, 0x4dd3 bytes
    //
    _v87(sdk::unknown_ptr) netio_register_address_change_notification;
    
    // [NetioRegisterProcessorAddCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x20a40, 0x4652 bytes
    // netio.sys .text:0x28b50, 0x4dd3 bytes
    // netio.sys .text:0x29840, 0x4e8c bytes
    // netio.sys .text:0x28be0, 0x4dd3 bytes
    //
    _v88(sdk::unknown_ptr) netio_register_processor_add_callback;
    
    // [NetioReleaseFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fe90, 0x4652 bytes
    // netio.sys .text:0x5eac0, 0x4dd3 bytes
    // netio.sys .text:0x5e180, 0x4e8c bytes
    // netio.sys .text:0x5ea80, 0x4dd3 bytes
    //
    _v89(sdk::unknown_ptr) netio_release_flow;
    
    // [NetioRestoreNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf668, 0x4652 bytes
    // netio.sys .text:0x259c, 0x4dd3 bytes
    // netio.sys .text:0x27f0, 0x4e8c bytes
    // netio.sys .text:0x259c, 0x4dd3 bytes
    //
    _v90(sdk::function<void(struct ndis::net_buffer_t*)>*) netio_restore_net_buffer;
    
    // [NetioRestoreNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36b04, 0x4652 bytes
    // netio.sys .text:0x3b42c, 0x4dd3 bytes
    // netio.sys .text:0x3c6ec, 0x4e8c bytes
    // netio.sys .text:0x3b42c, 0x4dd3 bytes
    //
    _v91(sdk::unknown_ptr) netio_restore_net_buffer_list;
    
    // [NetioRetreatNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36b30, 0x4652 bytes
    // netio.sys .text:0x3b460, 0x4dd3 bytes
    // netio.sys .text:0x3c720, 0x4e8c bytes
    // netio.sys .text:0x3b460, 0x4dd3 bytes
    //
    _v92(sdk::unknown_ptr) netio_retreat_net_buffer;
    
    // [NetioRetreatNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14ee0, 0x4652 bytes
    // netio.sys .text:0x4190, 0x4dd3 bytes
    // netio.sys .text:0x2c80, 0x4e8c bytes
    // netio.sys .text:0x4190, 0x4dd3 bytes
    //
    _v93(sdk::unknown_ptr) netio_retreat_net_buffer_list;
    
    // [NetioRouteChangeCallBack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b470, 0x4652 bytes
    // netio.sys .text:0x41d70, 0x4dd3 bytes
    // netio.sys .text:0x43280, 0x4e8c bytes
    // netio.sys .text:0x41d30, 0x4dd3 bytes
    //
    _v94(sdk::unknown_ptr) netio_route_change_call_back;
    
    // [NetioSelectPreferredAddresses]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a4b0, 0x4652 bytes
    // netio.sys .text:0x40d58, 0x4dd3 bytes
    // netio.sys .text:0x42258, 0x4e8c bytes
    // netio.sys .text:0x40d18, 0x4dd3 bytes
    //
    _v95(sdk::unknown_ptr) netio_select_preferred_addresses;
    
    // [NetioSetTriageBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24680, 0x4652 bytes
    // netio.sys .text:0x29200, 0x4dd3 bytes
    // netio.sys .text:0x2a030, 0x4e8c bytes
    // netio.sys .text:0x29290, 0x4dd3 bytes
    //
    _v96(sdk::unknown_ptr) netio_set_triage_block;
    
    // [NetioShutdownWorkQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19bb0, 0x4652 bytes
    // netio.sys .text:0x451c0, 0x4dd3 bytes
    // netio.sys .text:0x468d0, 0x4e8c bytes
    // netio.sys .text:0x45180, 0x4dd3 bytes
    //
    _v97(sdk::unknown_ptr) netio_shutdown_work_queue;
    
    // [NetioStackBlockProcessorAddHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d7f0, 0x4652 bytes
    // netio.sys .text:0x44f60, 0x4dd3 bytes
    // netio.sys .text:0x46670, 0x4e8c bytes
    // netio.sys .text:0x44f20, 0x4dd3 bytes
    //
    _v98(sdk::unknown_ptr) netio_stack_block_processor_add_handler;
    
    // [NetioSuperTriageBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x610f0, 0x4652 bytes
    // netio.sys .data:0x7a160, 0x4dd3 bytes
    // netio.sys .data:0x7b210, 0x4e8c bytes
    // netio.sys .data:0x7a160, 0x4dd3 bytes
    //
    _v99(sdk::unknown_ptr) netio_super_triage_block;
    
    // [NetioTeredoPortChangeCallBack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d6f0, 0x4652 bytes
    // netio.sys .text:0x44dd0, 0x4dd3 bytes
    // netio.sys .text:0x464f0, 0x4e8c bytes
    // netio.sys .text:0x44d90, 0x4dd3 bytes
    //
    _w00(sdk::unknown_ptr) netio_teredo_port_change_call_back;
    
    // [NetioUnInitializeFlowsManager]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ff50, 0x4652 bytes
    // netio.sys .text:0x5eb90, 0x4dd3 bytes
    // netio.sys .text:0x5e230, 0x4e8c bytes
    // netio.sys .text:0x5eb50, 0x4dd3 bytes
    //
    _w01(sdk::unknown_ptr) netio_un_initialize_flows_manager;
    
    // [NetioUnInitializeNetBufferListLibrary]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c40, 0x4652 bytes
    // netio.sys .text:0x3b4a0, 0x4dd3 bytes
    // netio.sys .text:0x3c760, 0x4e8c bytes
    // netio.sys .text:0x3b4a0, 0x4dd3 bytes
    //
    _w02(sdk::unknown_ptr) netio_un_initialize_net_buffer_list_library;
    
    // [NetioUnRegisterProcessorAddCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c10, 0x4652 bytes
    // netio.sys .text:0x3e710, 0x4dd3 bytes
    // netio.sys .text:0x3fba0, 0x4e8c bytes
    // netio.sys .text:0x3e6d0, 0x4dd3 bytes
    //
    _w03(sdk::unknown_ptr) netio_un_register_processor_add_callback;
    
    // [NetioUpdateNetBufferListContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36b60, 0x4652 bytes
    // netio.sys .text:0x3b4f0, 0x4dd3 bytes
    // netio.sys .text:0x3c7b0, 0x4e8c bytes
    // netio.sys .text:0x3b4f0, 0x4dd3 bytes
    //
    _w04(sdk::unknown_ptr) netio_update_net_buffer_list_context;
    
    // [NetioValidateNetBuffer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36b70, 0x4652 bytes
    // netio.sys .text:0x3b500, 0x4dd3 bytes
    // netio.sys .text:0x3c7c0, 0x4e8c bytes
    // netio.sys .text:0x3b500, 0x4dd3 bytes
    //
    _w05(sdk::unknown_ptr) netio_validate_net_buffer;
    
    // [NetioValidateNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36be0, 0x4652 bytes
    // netio.sys .text:0x3b580, 0x4dd3 bytes
    // netio.sys .text:0x3c840, 0x4e8c bytes
    // netio.sys .text:0x3b580, 0x4dd3 bytes
    //
    _w06(sdk::unknown_ptr) netio_validate_net_buffer_list;
    
    // [NetioWriteKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d880, 0x4652 bytes
    // netio.sys .text:0x45140, 0x4dd3 bytes
    // netio.sys .text:0x46850, 0x4e8c bytes
    // netio.sys .text:0x45100, 0x4dd3 bytes
    //
    _w07(sdk::unknown_ptr) netio_write_key;
    
    // [NetiopBalanceHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ff9c, 0x4652 bytes
    // netio.sys .text:0x5ebf0, 0x4dd3 bytes
    // netio.sys .text:0x5e290, 0x4e8c bytes
    // netio.sys .text:0x5ebb0, 0x4dd3 bytes
    //
    _w08(sdk::unknown_ptr) netiop_balance_hashtable;
    
    // [NetiopCleanupNetBufferListInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36c0c, 0x4652 bytes
    // netio.sys .text:0x3b5b4, 0x4dd3 bytes
    // netio.sys .text:0x3c874, 0x4e8c bytes
    // netio.sys .text:0x5f20, 0x4dd3 bytes
    //
    _w09(sdk::unknown_ptr) netiop_cleanup_net_buffer_list_information;
    
    // [NetiopCleanupNetBufferListLibrary]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36c48, 0x4652 bytes
    // netio.sys .text:0x3b5f8, 0x4dd3 bytes
    // netio.sys .text:0x3c8b8, 0x4e8c bytes
    // netio.sys .text:0x3b5b4, 0x4dd3 bytes
    //
    _w10(sdk::unknown_ptr) netiop_cleanup_net_buffer_list_library;
    
    // [NetiopCompleteFragmentNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19ef0, 0x4652 bytes
    // netio.sys .text:0x3b6b0, 0x4dd3 bytes
    // netio.sys .text:0x3c970, 0x4e8c bytes
    // netio.sys .text:0x3b670, 0x4dd3 bytes
    //
    _w11(sdk::unknown_ptr) netiop_complete_fragment_net_buffer_list_chain;
    
    // [NetiopCompleteReassembledNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36d50, 0x4652 bytes
    // netio.sys .text:0x3b700, 0x4dd3 bytes
    // netio.sys .text:0x3c9c0, 0x4e8c bytes
    // netio.sys .text:0x3b6c0, 0x4dd3 bytes
    //
    _w12(sdk::unknown_ptr) netiop_complete_reassembled_net_buffer_list_chain;
    
    // [NetiopCompleteVacantNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24f60, 0x4652 bytes
    // netio.sys .text:0x3b750, 0x4dd3 bytes
    // netio.sys .text:0x3ca10, 0x4e8c bytes
    // netio.sys .text:0x3b710, 0x4dd3 bytes
    //
    _w13(sdk::unknown_ptr) netiop_complete_vacant_net_buffer_list_chain;
    
    // [NetiopComputeForwardFlowHashSignature]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5000c, 0x4652 bytes
    // netio.sys .text:0x5ec70, 0x4dd3 bytes
    // netio.sys .text:0x5e314, 0x4e8c bytes
    // netio.sys .text:0x5ec30, 0x4dd3 bytes
    //
    _w14(sdk::unknown_ptr) netiop_compute_forward_flow_hash_signature;
    
    // [NetiopComputevSwitchForwardFlowHashSignature]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5003c, 0x4652 bytes
    // netio.sys .text:0x5ecd0, 0x4dd3 bytes
    // netio.sys .text:0x5e374, 0x4e8c bytes
    // netio.sys .text:0x5ec90, 0x4dd3 bytes
    //
    _w15(sdk::unknown_ptr) netiop_computev_switch_forward_flow_hash_signature;
    
    // [NetiopCopyNetBufferListInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10688, 0x4652 bytes
    // netio.sys .text:0x4400, 0x4dd3 bytes
    // netio.sys .text:0x32d8, 0x4e8c bytes
    // netio.sys .text:0x4400, 0x4dd3 bytes
    //
    _w16(sdk::unknown_ptr) netiop_copy_net_buffer_list_information;
    
    // [NetiopCreateForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5010c, 0x4652 bytes
    // netio.sys .text:0x5eda4, 0x4dd3 bytes
    // netio.sys .text:0x5e448, 0x4e8c bytes
    // netio.sys .text:0x5ed64, 0x4dd3 bytes
    //
    _w17(sdk::unknown_ptr) netiop_create_forward_flow;
    
    // [NetiopCreateProtocolHeaderPools]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21e14, 0x4652 bytes
    // netio.sys .text:0x24190, 0x4dd3 bytes
    // netio.sys .text:0x285e8, 0x4e8c bytes
    // netio.sys .text:0x24220, 0x4dd3 bytes
    //
    _w18(sdk::unknown_ptr) netiop_create_protocol_header_pools;
    
    // [NetiopCreatevSwitchForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x503c8, 0x4652 bytes
    // netio.sys .text:0x5f0a0, 0x4dd3 bytes
    // netio.sys .text:0x5e708, 0x4e8c bytes
    // netio.sys .text:0x5f060, 0x4dd3 bytes
    //
    _w19(sdk::unknown_ptr) netiop_createv_switch_forward_flow;
    
    // [NetiopDestroyProtocolHeaderPools]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x36d94, 0x4652 bytes
    // netio.sys .text:0x3b7d0, 0x4dd3 bytes
    // netio.sys .text:0x3ca90, 0x4e8c bytes
    // netio.sys .text:0x3b790, 0x4dd3 bytes
    //
    _w20(sdk::unknown_ptr) netiop_destroy_protocol_header_pools;
    
    // [NetiopInitializeNetBufferListContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x107e0, 0x4652 bytes
    // netio.sys .text:0x1f200, 0x4dd3 bytes
    // netio.sys .text:0x21ee0, 0x4e8c bytes
    // netio.sys .text:0x1f290, 0x4dd3 bytes
    //
    _w21(sdk::unknown_ptr) netiop_initialize_net_buffer_list_context;
    
    // [NetiopInitializedFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61b20, 0x4652 bytes
    // netio.sys .data:0x7ab40, 0x4dd3 bytes
    // netio.sys .data:0x7bbe0, 0x4e8c bytes
    // netio.sys .data:0x7ab40, 0x4dd3 bytes
    //
    _w22(sdk::unknown_ptr) netiop_initialized_flags;
    
    // [NetiopIoWorkItemRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2c60, 0x4652 bytes
    // netio.sys .text:0x1be50, 0x4dd3 bytes
    // netio.sys .text:0x12230, 0x4e8c bytes
    // netio.sys .text:0x1bee0, 0x4dd3 bytes
    //
    _w23(sdk::unknown_ptr) netiop_io_work_item_routine;
    
    // [NetiopLookupForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x506b8, 0x4652 bytes
    // netio.sys .text:0x5f3c8, 0x4dd3 bytes
    // netio.sys .text:0x5e9f0, 0x4e8c bytes
    // netio.sys .text:0x5f388, 0x4dd3 bytes
    //
    _w24(sdk::unknown_ptr) netiop_lookup_forward_flow;
    
    // [NetiopLookupvSwitchForwardFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50788, 0x4652 bytes
    // netio.sys .text:0x5f4d8, 0x4dd3 bytes
    // netio.sys .text:0x5eb00, 0x4e8c bytes
    // netio.sys .text:0x5f498, 0x4dd3 bytes
    //
    _w25(sdk::unknown_ptr) netiop_lookupv_switch_forward_flow;
    
    // [NetiopRemoveFlowFromHashTables]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x508cc, 0x4652 bytes
    // netio.sys .text:0x5f640, 0x4dd3 bytes
    // netio.sys .text:0x5ec68, 0x4e8c bytes
    // netio.sys .text:0x5f600, 0x4dd3 bytes
    //
    _w26(sdk::unknown_ptr) netiop_remove_flow_from_hash_tables;
    
    // [NetiopStartStopRoutines]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGECONS:0x74080, 0x4652 bytes
    // netio.sys PAGECONS:0x90080, 0x4dd3 bytes
    // netio.sys PAGECONS:0x93080, 0x4e8c bytes
    // netio.sys PAGECONS:0x90080, 0x4dd3 bytes
    //
    _w27(sdk::unknown_ptr) netiop_start_stop_routines;
    
    // [NetiopUpdateFlowHashSignature]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15810, 0x4652 bytes
    // netio.sys .text:0x10d54, 0x4dd3 bytes
    // netio.sys .text:0x21208, 0x4e8c bytes
    // netio.sys .text:0x10e04, 0x4dd3 bytes
    //
    _w28(sdk::unknown_ptr) netiop_update_flow_hash_signature;
    
    // [NmrClientAttachProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1eb90, 0x4652 bytes
    // netio.sys .text:0x21170, 0x4dd3 bytes
    // netio.sys .text:0x23240, 0x4e8c bytes
    // netio.sys .text:0x21200, 0x4dd3 bytes
    //
    _w29(sdk::function<int32_t(void*, void*, const void*, void**, const void**)>*) nmr_client_attach_provider;
    
    // [NmrClientDetachProviderComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x195f0, 0x4652 bytes
    // netio.sys .text:0x482c0, 0x4dd3 bytes
    // netio.sys .text:0x493b0, 0x4e8c bytes
    // netio.sys .text:0x48280, 0x4dd3 bytes
    //
    _w30(sdk::function<void(void*)>*) nmr_client_detach_provider_complete;
    
    // [NmrDeregisterClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19610, 0x4652 bytes
    // netio.sys .text:0x48320, 0x4dd3 bytes
    // netio.sys .text:0x49650, 0x4e8c bytes
    // netio.sys .text:0x482e0, 0x4dd3 bytes
    //
    _w31(sdk::function<int32_t(void*)>*) nmr_deregister_client;
    
    // [NmrDeregisterProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3efa0, 0x4652 bytes
    // netio.sys .text:0x48350, 0x4dd3 bytes
    // netio.sys .text:0x49680, 0x4e8c bytes
    // netio.sys .text:0x48310, 0x4dd3 bytes
    //
    _w32(sdk::function<int32_t(void*)>*) nmr_deregister_provider;
    
    // [NmrInformationObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57a50, 0x4652 bytes
    // netio.sys .rdata:0x6bf00, 0x4dd3 bytes
    // netio.sys .rdata:0x6c390, 0x4e8c bytes
    // netio.sys .rdata:0x6bf00, 0x4dd3 bytes
    //
    _w33(sdk::unknown_ptr) nmr_information_object;
    
    // [NmrProviderDetachClientComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19700, 0x4652 bytes
    // netio.sys .text:0x482f0, 0x4dd3 bytes
    // netio.sys .text:0x493e0, 0x4e8c bytes
    // netio.sys .text:0x482b0, 0x4dd3 bytes
    //
    _w34(sdk::function<void(void*)>*) nmr_provider_detach_client_complete;
    
    // [NmrRegisterClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1da50, 0x4652 bytes
    // netio.sys .text:0x20680, 0x4dd3 bytes
    // netio.sys .text:0x26700, 0x4e8c bytes
    // netio.sys .text:0x20710, 0x4dd3 bytes
    //
    _w35(sdk::function<int32_t(const struct nt::npi_client_characteristics_t*, void*, void**)>*) nmr_register_client;
    
    // [NmrRegisterProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1dad0, 0x4652 bytes
    // netio.sys .text:0x26bc0, 0x4dd3 bytes
    // netio.sys .text:0x26790, 0x4e8c bytes
    // netio.sys .text:0x26c50, 0x4dd3 bytes
    //
    _w36(sdk::function<int32_t(const struct nt::npi_provider_characteristics_t*, void*, void**)>*) nmr_register_provider;
    
    // [NmrRegisteredNpiIdTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61880, 0x4652 bytes
    // netio.sys .data:0x7a880, 0x4dd3 bytes
    // netio.sys .data:0x7b920, 0x4e8c bytes
    // netio.sys .data:0x7a880, 0x4dd3 bytes
    //
    _w37(sdk::unknown_ptr) nmr_registered_npi_id_table;
    
    // [NmrTableInitializerNpiIds]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57980, 0x4652 bytes
    // netio.sys .rdata:0x6be30, 0x4dd3 bytes
    // netio.sys .rdata:0x6c2c0, 0x4e8c bytes
    // netio.sys .rdata:0x6be30, 0x4dd3 bytes
    //
    _w38(sdk::unknown_ptr) nmr_table_initializer_npi_ids;
    
    // [NmrWaitForClientDeregisterComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19930, 0x4652 bytes
    // netio.sys .text:0x48380, 0x4dd3 bytes
    // netio.sys .text:0x496b0, 0x4e8c bytes
    // netio.sys .text:0x48340, 0x4dd3 bytes
    //
    _w39(sdk::function<int32_t(void*)>*) nmr_wait_for_client_deregister_complete;
    
    // [NmrWaitForProviderDeregisterComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3efc0, 0x4652 bytes
    // netio.sys .text:0x483b0, 0x4dd3 bytes
    // netio.sys .text:0x496e0, 0x4e8c bytes
    // netio.sys .text:0x48370, 0x4dd3 bytes
    //
    _w40(sdk::function<int32_t(void*)>*) nmr_wait_for_provider_deregister_complete;
    
    // [NmrfpAttachNsiClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f640, 0x4652 bytes
    // netio.sys .text:0x28c30, 0x4dd3 bytes
    // netio.sys .text:0x29b90, 0x4e8c bytes
    // netio.sys .text:0x28cc0, 0x4dd3 bytes
    //
    _w41(sdk::unknown_ptr) nmrfp_attach_nsi_client;
    
    // [NmrfpCleanupNsiClientContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f040, 0x4652 bytes
    // netio.sys .text:0x3cc50, 0x4dd3 bytes
    // netio.sys .text:0x3e130, 0x4e8c bytes
    // netio.sys .text:0x3cc10, 0x4dd3 bytes
    //
    _w42(sdk::unknown_ptr) nmrfp_cleanup_nsi_client_context;
    
    // [NmrfpCreateFilterAndGetDetachList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f04c, 0x4652 bytes
    // netio.sys .text:0x4844c, 0x4dd3 bytes
    // netio.sys .text:0x499ac, 0x4e8c bytes
    // netio.sys .text:0x4840c, 0x4dd3 bytes
    //
    _w43(sdk::unknown_ptr) nmrfp_create_filter_and_get_detach_list;
    
    // [NmrfpDeleteFilterAndGetBindableCandidates]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f1b8, 0x4652 bytes
    // netio.sys .text:0x485c8, 0x4dd3 bytes
    // netio.sys .text:0x49b1c, 0x4e8c bytes
    // netio.sys .text:0x48588, 0x4dd3 bytes
    //
    _w44(sdk::unknown_ptr) nmrfp_delete_filter_and_get_bindable_candidates;
    
    // [NmrfpDereferenceFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f2e4, 0x4652 bytes
    // netio.sys .text:0x4870c, 0x4dd3 bytes
    // netio.sys .text:0x49c60, 0x4e8c bytes
    // netio.sys .text:0x486cc, 0x4dd3 bytes
    //
    _w45(sdk::unknown_ptr) nmrfp_dereference_filter;
    
    // [NmrfpDetachNsiClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f310, 0x4652 bytes
    // netio.sys .text:0x48740, 0x4dd3 bytes
    // netio.sys .text:0x49c90, 0x4e8c bytes
    // netio.sys .text:0x48700, 0x4dd3 bytes
    //
    _w46(sdk::unknown_ptr) nmrfp_detach_nsi_client;
    
    // [NmrfpFindFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f344, 0x4652 bytes
    // netio.sys .text:0x48788, 0x4dd3 bytes
    // netio.sys .text:0x49cd8, 0x4e8c bytes
    // netio.sys .text:0x48748, 0x4dd3 bytes
    //
    _w47(sdk::unknown_ptr) nmrfp_find_filter;
    
    // [NmrfpGetAllFilterParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f3c0, 0x4652 bytes
    // netio.sys .text:0x48810, 0x4dd3 bytes
    // netio.sys .text:0x49d60, 0x4e8c bytes
    // netio.sys .text:0x487d0, 0x4dd3 bytes
    //
    _w48(sdk::unknown_ptr) nmrfp_get_all_filter_parameters;
    
    // [NmrfpGetFirstFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f6d8, 0x4652 bytes
    // netio.sys .text:0x48bac, 0x4dd3 bytes
    // netio.sys .text:0x4a10c, 0x4e8c bytes
    // netio.sys .text:0x48b6c, 0x4dd3 bytes
    //
    _w49(sdk::unknown_ptr) nmrfp_get_first_filter;
    
    // [NmrfpGetNextFilter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f784, 0x4652 bytes
    // netio.sys .text:0x48c60, 0x4dd3 bytes
    // netio.sys .text:0x4a1c0, 0x4e8c bytes
    // netio.sys .text:0x48c20, 0x4dd3 bytes
    //
    _w50(sdk::unknown_ptr) nmrfp_get_next_filter;
    
    // [NmrfpLoadFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f454, 0x4652 bytes
    // netio.sys .text:0x26a4c, 0x4dd3 bytes
    // netio.sys .text:0x2640c, 0x4e8c bytes
    // netio.sys .text:0x26adc, 0x4dd3 bytes
    //
    _w51(sdk::unknown_ptr) nmrfp_load_filters;
    
    // [NmrfpNsiProviderCharacter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x594b0, 0x4652 bytes
    // netio.sys .rdata:0x707f0, 0x4dd3 bytes
    // netio.sys .rdata:0x70fc0, 0x4e8c bytes
    // netio.sys .rdata:0x707f0, 0x4dd3 bytes
    //
    _w52(sdk::unknown_ptr) nmrfp_nsi_provider_character;
    
    // [NmrfpNsiProviderCharacteristics]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x54190, 0x4652 bytes
    // netio.sys .rdata:0x660b0, 0x4dd3 bytes
    // netio.sys .rdata:0x660b0, 0x4e8c bytes
    // netio.sys .rdata:0x660b0, 0x4dd3 bytes
    //
    _w53(sdk::unknown_ptr) nmrfp_nsi_provider_characteristics;
    
    // [NmrfpNsiProviderDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x541e8, 0x4652 bytes
    // netio.sys .rdata:0x661e0, 0x4dd3 bytes
    // netio.sys .rdata:0x66280, 0x4e8c bytes
    // netio.sys .rdata:0x661e0, 0x4dd3 bytes
    //
    _w54(sdk::unknown_ptr) nmrfp_nsi_provider_dispatch;
    
    // [NmrfpNsiProviderHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61958, 0x4652 bytes
    // netio.sys .data:0x7a958, 0x4dd3 bytes
    // netio.sys .data:0x7b9f8, 0x4e8c bytes
    // netio.sys .data:0x7a958, 0x4dd3 bytes
    //
    _w55(sdk::unknown_ptr) nmrfp_nsi_provider_handle;
    
    // [NmrfpSetAllFilterParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f4b0, 0x4652 bytes
    // netio.sys .text:0x48920, 0x4dd3 bytes
    // netio.sys .text:0x49e70, 0x4e8c bytes
    // netio.sys .text:0x488e0, 0x4dd3 bytes
    //
    _w56(sdk::unknown_ptr) nmrfp_set_all_filter_parameters;
    
    // [NmrfpStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d0b0, 0x4652 bytes
    // netio.sys .text:0x26a00, 0x4dd3 bytes
    // netio.sys .text:0x263c0, 0x4e8c bytes
    // netio.sys .text:0x26a90, 0x4dd3 bytes
    //
    _w57(sdk::unknown_ptr) nmrfp_start_module;
    
    // [NmrfpStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f640, 0x4652 bytes
    // netio.sys .text:0x48ae0, 0x4dd3 bytes
    // netio.sys .text:0x4a040, 0x4e8c bytes
    // netio.sys .text:0x48aa0, 0x4dd3 bytes
    //
    _w58(sdk::unknown_ptr) nmrfp_stop_module;
    
    // [NmrpAllocateAndCopyModulePointerArrayFromList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1db48, 0x4652 bytes
    // netio.sys .text:0x20704, 0x4dd3 bytes
    // netio.sys .text:0x26814, 0x4e8c bytes
    // netio.sys .text:0x20794, 0x4dd3 bytes
    //
    _w59(sdk::unknown_ptr) nmrp_allocate_and_copy_module_pointer_array_from_list;
    
    // [NmrpAllocateAndInitializeModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1df80, 0x4652 bytes
    // netio.sys .text:0x20bc4, 0x4dd3 bytes
    // netio.sys .text:0x26cbc, 0x4e8c bytes
    // netio.sys .text:0x20c54, 0x4dd3 bytes
    //
    _w60(sdk::unknown_ptr) nmrp_allocate_and_initialize_module;
    
    // [NmrpAttachArray]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1dce8, 0x4652 bytes
    // netio.sys .text:0x208e0, 0x4dd3 bytes
    // netio.sys .text:0x269f4, 0x4e8c bytes
    // netio.sys .text:0x20970, 0x4dd3 bytes
    //
    _w61(sdk::unknown_ptr) nmrp_attach_array;
    
    // [NmrpDeleteNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f84c, 0x4652 bytes
    // netio.sys .text:0x48d30, 0x4dd3 bytes
    // netio.sys .text:0x4a290, 0x4e8c bytes
    // netio.sys .text:0x48cf0, 0x4dd3 bytes
    //
    _w62(sdk::unknown_ptr) nmrp_delete_node;
    
    // [NmrpDereferenceBinding]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19804, 0x4652 bytes
    // netio.sys .text:0x1f858, 0x4dd3 bytes
    // netio.sys .text:0x49404, 0x4e8c bytes
    // netio.sys .text:0x1f8e8, 0x4dd3 bytes
    //
    _w63(sdk::unknown_ptr) nmrp_dereference_binding;
    
    // [NmrpDereferenceModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1aa98, 0x4652 bytes
    // netio.sys .text:0x20c68, 0x4dd3 bytes
    // netio.sys .text:0x26d50, 0x4e8c bytes
    // netio.sys .text:0x20cf8, 0x4dd3 bytes
    //
    _w64(sdk::unknown_ptr) nmrp_dereference_module;
    
    // [NmrpDeregisterModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1962c, 0x4652 bytes
    // netio.sys .text:0x1f5c0, 0x4dd3 bytes
    // netio.sys .text:0x49704, 0x4e8c bytes
    // netio.sys .text:0x1f650, 0x4dd3 bytes
    //
    _w65(sdk::unknown_ptr) nmrp_deregister_module;
    
    // [NmrpDetachClientComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x197bc, 0x4652 bytes
    // netio.sys .text:0x1f800, 0x4dd3 bytes
    // netio.sys .text:0x494dc, 0x4e8c bytes
    // netio.sys .text:0x1f890, 0x4dd3 bytes
    //
    _w66(sdk::unknown_ptr) nmrp_detach_client_complete;
    
    // [NmrpDetachList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1971c, 0x4652 bytes
    // netio.sys .text:0x1f6e4, 0x4dd3 bytes
    // netio.sys .text:0x497fc, 0x4e8c bytes
    // netio.sys .text:0x1f774, 0x4dd3 bytes
    //
    _w67(sdk::unknown_ptr) nmrp_detach_list;
    
    // [NmrpDetachProviderComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x197e0, 0x4652 bytes
    // netio.sys .text:0x1f82c, 0x4dd3 bytes
    // netio.sys .text:0x49524, 0x4e8c bytes
    // netio.sys .text:0x1f8bc, 0x4dd3 bytes
    //
    _w68(sdk::unknown_ptr) nmrp_detach_provider_complete;
    
    // [NmrpFilterSynchronizationMutex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61920, 0x4652 bytes
    // netio.sys .data:0x7a920, 0x4dd3 bytes
    // netio.sys .data:0x7b9c0, 0x4e8c bytes
    // netio.sys .data:0x7a920, 0x4dd3 bytes
    //
    _w69(sdk::unknown_ptr) nmrp_filter_synchronization_mutex;
    
    // [NmrpFindClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f668, 0x4652 bytes
    // netio.sys .text:0x48b2c, 0x4dd3 bytes
    // netio.sys .text:0x4a08c, 0x4e8c bytes
    // netio.sys .text:0x48aec, 0x4dd3 bytes
    //
    _w70(sdk::unknown_ptr) nmrp_find_client;
    
    // [NmrpFindOrAddRegisteredNpiId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1debc, 0x4652 bytes
    // netio.sys .text:0x20af0, 0x4dd3 bytes
    // netio.sys .text:0x26c00, 0x4e8c bytes
    // netio.sys .text:0x20b80, 0x4dd3 bytes
    //
    _w71(sdk::unknown_ptr) nmrp_find_or_add_registered_npi_id;
    
    // [NmrpFindProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f6a0, 0x4652 bytes
    // netio.sys .text:0x48b6c, 0x4dd3 bytes
    // netio.sys .text:0x4a0cc, 0x4e8c bytes
    // netio.sys .text:0x48b2c, 0x4dd3 bytes
    //
    _w72(sdk::unknown_ptr) nmrp_find_provider;
    
    // [NmrpGetAllBindingParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f8a0, 0x4652 bytes
    // netio.sys .text:0x48d90, 0x4dd3 bytes
    // netio.sys .text:0x4a2f0, 0x4e8c bytes
    // netio.sys .text:0x48d50, 0x4dd3 bytes
    //
    _w73(sdk::unknown_ptr) nmrp_get_all_binding_parameters;
    
    // [NmrpGetAllClientParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f950, 0x4652 bytes
    // netio.sys .text:0x48e60, 0x4dd3 bytes
    // netio.sys .text:0x4a3c0, 0x4e8c bytes
    // netio.sys .text:0x48e20, 0x4dd3 bytes
    //
    _w74(sdk::unknown_ptr) nmrp_get_all_client_parameters;
    
    // [NmrpGetAllModuleParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f95c, 0x4652 bytes
    // netio.sys .text:0x48e7c, 0x4dd3 bytes
    // netio.sys .text:0x4a3dc, 0x4e8c bytes
    // netio.sys .text:0x48e3c, 0x4dd3 bytes
    //
    _w75(sdk::unknown_ptr) nmrp_get_all_module_parameters;
    
    // [NmrpGetAllProviderParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fa80, 0x4652 bytes
    // netio.sys .text:0x48fd0, 0x4dd3 bytes
    // netio.sys .text:0x4a530, 0x4e8c bytes
    // netio.sys .text:0x48f90, 0x4dd3 bytes
    //
    _w76(sdk::unknown_ptr) nmrp_get_all_provider_parameters;
    
    // [NmrpGetBindingFromHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a950, 0x4652 bytes
    // netio.sys .text:0x21204, 0x4dd3 bytes
    // netio.sys .text:0x232d4, 0x4e8c bytes
    // netio.sys .text:0x21294, 0x4dd3 bytes
    //
    _w77(sdk::unknown_ptr) nmrp_get_binding_from_handle;
    
    // [NmrpGetBindingInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fa8c, 0x4652 bytes
    // netio.sys .text:0x48fec, 0x4dd3 bytes
    // netio.sys .text:0x4a54c, 0x4e8c bytes
    // netio.sys .text:0x48fac, 0x4dd3 bytes
    //
    _w78(sdk::unknown_ptr) nmrp_get_binding_info;
    
    // [NmrpGetFirstBindingInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fb28, 0x4652 bytes
    // netio.sys .text:0x49090, 0x4dd3 bytes
    // netio.sys .text:0x4a5f0, 0x4e8c bytes
    // netio.sys .text:0x49050, 0x4dd3 bytes
    //
    _w79(sdk::unknown_ptr) nmrp_get_first_binding_info;
    
    // [NmrpGetModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fd94, 0x4652 bytes
    // netio.sys .text:0x49314, 0x4dd3 bytes
    // netio.sys .text:0x4a874, 0x4e8c bytes
    // netio.sys .text:0x492d4, 0x4dd3 bytes
    //
    _w80(sdk::unknown_ptr) nmrp_get_module;
    
    // [NmrpGetModuleFromHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x199b0, 0x4652 bytes
    // netio.sys .text:0x1f594, 0x4dd3 bytes
    // netio.sys .text:0x49838, 0x4e8c bytes
    // netio.sys .text:0x1f624, 0x4dd3 bytes
    //
    _w81(sdk::unknown_ptr) nmrp_get_module_from_handle;
    
    // [NmrpGetNextBindingInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3fde4, 0x4652 bytes
    // netio.sys .text:0x4936c, 0x4dd3 bytes
    // netio.sys .text:0x4a8cc, 0x4e8c bytes
    // netio.sys .text:0x4932c, 0x4dd3 bytes
    //
    _w82(sdk::unknown_ptr) nmrp_get_next_binding_info;
    
    // [NmrpGetNextModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x400a4, 0x4652 bytes
    // netio.sys .text:0x49644, 0x4dd3 bytes
    // netio.sys .text:0x4aba4, 0x4e8c bytes
    // netio.sys .text:0x49604, 0x4dd3 bytes
    //
    _w83(sdk::unknown_ptr) nmrp_get_next_module;
    
    // [NmrpHasBinding]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1dc40, 0x4652 bytes
    // netio.sys .text:0x20808, 0x4dd3 bytes
    // netio.sys .text:0x2691c, 0x4e8c bytes
    // netio.sys .text:0x20898, 0x4dd3 bytes
    //
    _w84(sdk::unknown_ptr) nmrp_has_binding;
    
    // [NmrpInitializeNpiIdHashTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d9c4, 0x4652 bytes
    // netio.sys .text:0x286d4, 0x4dd3 bytes
    // netio.sys .text:0x26674, 0x4e8c bytes
    // netio.sys .text:0x28764, 0x4dd3 bytes
    //
    _w85(sdk::unknown_ptr) nmrp_initialize_npi_id_hash_table;
    
    // [NmrpInsertBinding]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e104, 0x4652 bytes
    // netio.sys .text:0x20dfc, 0x4dd3 bytes
    // netio.sys .text:0x26e80, 0x4e8c bytes
    // netio.sys .text:0x20e8c, 0x4dd3 bytes
    //
    _w86(sdk::unknown_ptr) nmrp_insert_binding;
    
    // [NmrpNotifyBindingDetach]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19750, 0x4652 bytes
    // netio.sys .text:0x1f790, 0x4dd3 bytes
    // netio.sys .text:0x4956c, 0x4e8c bytes
    // netio.sys .text:0x1f820, 0x4dd3 bytes
    //
    _w87(sdk::unknown_ptr) nmrp_notify_binding_detach;
    
    // [NmrpProposeAttachment]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e010, 0x4652 bytes
    // netio.sys .text:0x20ce4, 0x4dd3 bytes
    // netio.sys .text:0x26d78, 0x4e8c bytes
    // netio.sys .text:0x20d74, 0x4dd3 bytes
    //
    _w88(sdk::unknown_ptr) nmrp_propose_attachment;
    
    // [NmrpRegisterModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1dc60, 0x4652 bytes
    // netio.sys .text:0x20830, 0x4dd3 bytes
    // netio.sys .text:0x26944, 0x4e8c bytes
    // netio.sys .text:0x208c0, 0x4dd3 bytes
    //
    _w89(sdk::unknown_ptr) nmrp_register_module;
    
    // [NmrpRegisterModuleAndGetBindableCandidates]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1dd60, 0x4652 bytes
    // netio.sys .text:0x20964, 0x4dd3 bytes
    // netio.sys .text:0x26a78, 0x4e8c bytes
    // netio.sys .text:0x209f4, 0x4dd3 bytes
    //
    _w90(sdk::unknown_ptr) nmrp_register_module_and_get_bindable_candidates;
    
    // [NmrpRemoveBinding]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x198b0, 0x4652 bytes
    // netio.sys .text:0x1f92c, 0x4dd3 bytes
    // netio.sys .text:0x495e0, 0x4e8c bytes
    // netio.sys .text:0x1f9bc, 0x4dd3 bytes
    //
    _w91(sdk::unknown_ptr) nmrp_remove_binding;
    
    // [NmrpRemoveRegisteredList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19b60, 0x4652 bytes
    // netio.sys .text:0x20000, 0x4dd3 bytes
    // netio.sys .text:0x4ad7c, 0x4e8c bytes
    // netio.sys .text:0x20090, 0x4dd3 bytes
    //
    _w92(sdk::unknown_ptr) nmrp_remove_registered_list;
    
    // [NmrpSpinLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61960, 0x4652 bytes
    // netio.sys .data:0x7a960, 0x4dd3 bytes
    // netio.sys .data:0x7ba00, 0x4e8c bytes
    // netio.sys .data:0x7a960, 0x4dd3 bytes
    //
    _w93(sdk::unknown_ptr) nmrp_spin_lock;
    
    // [NmrpStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d2e0, 0x4652 bytes
    // netio.sys .text:0x286a0, 0x4dd3 bytes
    // netio.sys .text:0x26640, 0x4e8c bytes
    // netio.sys .text:0x28730, 0x4dd3 bytes
    //
    _w94(sdk::unknown_ptr) nmrp_start_module;
    
    // [NmrpStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3efe0, 0x4652 bytes
    // netio.sys .text:0x483e0, 0x4dd3 bytes
    // netio.sys .text:0x49940, 0x4e8c bytes
    // netio.sys .text:0x483a0, 0x4dd3 bytes
    //
    _w95(sdk::unknown_ptr) nmrp_stop_module;
    
    // [NmrpSystemModuleInfo]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ecec, 0x4652 bytes
    // netio.sys .text:0x28204, 0x4dd3 bytes
    // netio.sys .text:0x27218, 0x4e8c bytes
    // netio.sys .text:0x28294, 0x4dd3 bytes
    //
    _w96(sdk::unknown_ptr) nmrp_system_module_info;
    
    // [NmrpVerifyModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e198, 0x4652 bytes
    // netio.sys .text:0x20e88, 0x4dd3 bytes
    // netio.sys .text:0x26f0c, 0x4e8c bytes
    // netio.sys .text:0x20f18, 0x4dd3 bytes
    //
    _w97(sdk::unknown_ptr) nmrp_verify_module;
    
    // [NmrpWaitForModuleDeregisterComplete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1994c, 0x4652 bytes
    // netio.sys .text:0x1f99c, 0x4dd3 bytes
    // netio.sys .text:0x498a0, 0x4e8c bytes
    // netio.sys .text:0x1fa2c, 0x4dd3 bytes
    //
    _w98(sdk::unknown_ptr) nmrp_wait_for_module_deregister_complete;
    
    // [NotifyCompartmentChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38e50, 0x4652 bytes
    // netio.sys .text:0x3f4a0, 0x4dd3 bytes
    // netio.sys .text:0x409d0, 0x4e8c bytes
    // netio.sys .text:0x3f460, 0x4dd3 bytes
    //
    _w99(sdk::unknown_ptr) notify_compartment_change;
    
    // [NotifyIpInterfaceChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d510, 0x4652 bytes
    // netio.sys .text:0x44b70, 0x4dd3 bytes
    // netio.sys .text:0x462a0, 0x4e8c bytes
    // netio.sys .text:0x44b30, 0x4dd3 bytes
    //
    _x00(sdk::unknown_ptr) notify_ip_interface_change;
    
    // [NotifyRouteChange2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b520, 0x4652 bytes
    // netio.sys .text:0x41e40, 0x4dd3 bytes
    // netio.sys .text:0x43350, 0x4e8c bytes
    // netio.sys .text:0x41e00, 0x4dd3 bytes
    //
    _x01(sdk::unknown_ptr) notify_route_change2;
    
    // [NotifyStableUnicastIpAddressTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a700, 0x4652 bytes
    // netio.sys .text:0x40f30, 0x4dd3 bytes
    // netio.sys .text:0x42400, 0x4e8c bytes
    // netio.sys .text:0x40ef0, 0x4dd3 bytes
    //
    _x02(sdk::unknown_ptr) notify_stable_unicast_ip_address_table;
    
    // [NotifyTeredoPortChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d720, 0x4652 bytes
    // netio.sys .text:0x44e10, 0x4dd3 bytes
    // netio.sys .text:0x46530, 0x4e8c bytes
    // netio.sys .text:0x44dd0, 0x4dd3 bytes
    //
    _x03(sdk::unknown_ptr) notify_teredo_port_change;
    
    // [NotifyUnicastIpAddressChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x213c0, 0x4652 bytes
    // netio.sys .text:0x27db0, 0x4dd3 bytes
    // netio.sys .text:0x289a0, 0x4e8c bytes
    // netio.sys .text:0x27e40, 0x4dd3 bytes
    //
    _x04(sdk::unknown_ptr) notify_unicast_ip_address_change;
    
    // [NPI_DATALINK_LAYER_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59560, 0x4652 bytes
    // netio.sys .rdata:0x6cf18, 0x4dd3 bytes
    // netio.sys .rdata:0x6d500, 0x4e8c bytes
    // netio.sys .rdata:0x6cf18, 0x4dd3 bytes
    //
    _x05(sdk::unknown_ptr) npi_datalink_layer_id;
    
    // [NPI_FRAMING_LAYER_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59550, 0x4652 bytes
    // netio.sys .rdata:0x6cef8, 0x4dd3 bytes
    // netio.sys .rdata:0x6d4e0, 0x4e8c bytes
    // netio.sys .rdata:0x6cef8, 0x4dd3 bytes
    //
    _x06(sdk::unknown_ptr) npi_framing_layer_id;
    
    // [NPI_MS_FL6T_MODULEID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59650, 0x4652 bytes
    // netio.sys .rdata:0x6cfd0, 0x4dd3 bytes
    // netio.sys .rdata:0x6d5b8, 0x4e8c bytes
    // netio.sys .rdata:0x6cfd0, 0x4dd3 bytes
    //
    _x07(sdk::unknown_ptr) npi_ms_fl6t_moduleid;
    
    // [NPI_MS_NETIO_MODULEID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x594c8, 0x4652 bytes
    // netio.sys .rdata:0x6d048, 0x4dd3 bytes
    // netio.sys .rdata:0x6d630, 0x4e8c bytes
    // netio.sys .rdata:0x6d048, 0x4dd3 bytes
    //
    _x08(sdk::unknown_ptr) npi_ms_netio_moduleid;
    
    // [NPI_MS_NMR_MODULEID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57df0, 0x4652 bytes
    // netio.sys .rdata:0x6cfb8, 0x4dd3 bytes
    // netio.sys .rdata:0x6d5a0, 0x4e8c bytes
    // netio.sys .rdata:0x6cfb8, 0x4dd3 bytes
    //
    _x09(sdk::unknown_ptr) npi_ms_nmr_moduleid;
    
    // [NPI_MS_NSI_MODULEID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57ce0, 0x4652 bytes
    // netio.sys .rdata:0x6d030, 0x4dd3 bytes
    // netio.sys .rdata:0x6d618, 0x4e8c bytes
    // netio.sys .rdata:0x6d030, 0x4dd3 bytes
    //
    _x10(sdk::unknown_ptr) npi_ms_nsi_moduleid;
    
    // [NPI_NETWORK_LAYER_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59540, 0x4652 bytes
    // netio.sys .rdata:0x6cf08, 0x4dd3 bytes
    // netio.sys .rdata:0x6d4f0, 0x4e8c bytes
    // netio.sys .rdata:0x6cf08, 0x4dd3 bytes
    //
    _x11(sdk::unknown_ptr) npi_network_layer_id;
    
    // [NPI_NL_PNP_EVENT_ACCESS_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59510, 0x4652 bytes
    // netio.sys .rdata:0x6cf78, 0x4dd3 bytes
    // netio.sys .rdata:0x6d560, 0x4e8c bytes
    // netio.sys .rdata:0x6cf78, 0x4dd3 bytes
    //
    _x12(sdk::unknown_ptr) npi_nl_pnp_event_access_id;
    
    // [NPI_NSI_ACCESS_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x584a8, 0x4652 bytes
    // netio.sys .rdata:0x6cf68, 0x4dd3 bytes
    // netio.sys .rdata:0x6d550, 0x4e8c bytes
    // netio.sys .rdata:0x6cf68, 0x4dd3 bytes
    //
    _x13(sdk::unknown_ptr) npi_nsi_access_id;
    
    // [NPI_QOS_INTERFACE_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x594e0, 0x4652 bytes
    // netio.sys .rdata:0x6cfa8, 0x4dd3 bytes
    // netio.sys .rdata:0x6d590, 0x4e8c bytes
    // netio.sys .rdata:0x6cfa8, 0x4dd3 bytes
    //
    _x14(sdk::unknown_ptr) npi_qos_interface_id;
    
    // [NPI_SESSION_LAYER_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59520, 0x4652 bytes
    // netio.sys .rdata:0x6cf48, 0x4dd3 bytes
    // netio.sys .rdata:0x6d530, 0x4e8c bytes
    // netio.sys .rdata:0x6cf48, 0x4dd3 bytes
    //
    _x15(sdk::unknown_ptr) npi_session_layer_id;
    
    // [NPI_TL_OFFLOAD_INTERFACE_ID]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59500, 0x4652 bytes
    // netio.sys .rdata:0x6cf88, 0x4dd3 bytes
    // netio.sys .rdata:0x6d570, 0x4e8c bytes
    // netio.sys .rdata:0x6cf88, 0x4dd3 bytes
    //
    _x16(sdk::unknown_ptr) npi_tl_offload_interface_id;
    
    // [NrtAccessCheck]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51fec, 0x4652 bytes
    // netio.sys .text:0x62f64, 0x4dd3 bytes
    // netio.sys .text:0x63154, 0x4e8c bytes
    // netio.sys .text:0x62f24, 0x4dd3 bytes
    //
    _x17(sdk::unknown_ptr) nrt_access_check;
    
    // [NrtCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5208c, 0x4652 bytes
    // netio.sys .text:0x631f8, 0x4dd3 bytes
    // netio.sys .text:0x633e8, 0x4e8c bytes
    // netio.sys .text:0x631b8, 0x4dd3 bytes
    //
    _x18(sdk::unknown_ptr) nrt_create;
    
    // [NrtCreateRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x519cc, 0x4652 bytes
    // netio.sys .text:0x61cc0, 0x4dd3 bytes
    // netio.sys .text:0x61edc, 0x4e8c bytes
    // netio.sys .text:0x61c80, 0x4dd3 bytes
    //
    _x19(sdk::unknown_ptr) nrt_create_record;
    
    // [NrtCreateRecordSet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2399c, 0x4652 bytes
    // netio.sys .text:0x21b54, 0x4dd3 bytes
    // netio.sys .text:0x23e10, 0x4e8c bytes
    // netio.sys .text:0x21be4, 0x4dd3 bytes
    //
    _x20(sdk::unknown_ptr) nrt_create_record_set;
    
    // [NrtCreateSecurityDescriptor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23a3c, 0x4652 bytes
    // netio.sys .text:0x22098, 0x4dd3 bytes
    // netio.sys .text:0x24a98, 0x4e8c bytes
    // netio.sys .text:0x22128, 0x4dd3 bytes
    //
    _x21(sdk::unknown_ptr) nrt_create_security_descriptor;
    
    // [NrtDeleteRecord]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51c10, 0x4652 bytes
    // netio.sys .text:0x62080, 0x4dd3 bytes
    // netio.sys .text:0x6227c, 0x4e8c bytes
    // netio.sys .text:0x62040, 0x4dd3 bytes
    //
    _x22(sdk::unknown_ptr) nrt_delete_record;
    
    // [NrtDestroyRecordSet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51c5c, 0x4652 bytes
    // netio.sys .text:0x621bc, 0x4dd3 bytes
    // netio.sys .text:0x623b8, 0x4e8c bytes
    // netio.sys .text:0x6217c, 0x4dd3 bytes
    //
    _x23(sdk::unknown_ptr) nrt_destroy_record_set;
    
    // [NrtDeviceObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c70, 0x4652 bytes
    // netio.sys .data:0x7af28, 0x4dd3 bytes
    // netio.sys .data:0x7bdd0, 0x4e8c bytes
    // netio.sys .data:0x7af28, 0x4dd3 bytes
    //
    _x24(sdk::unknown_ptr) nrt_device_object;
    
    // [NrtFindRecordUnderLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51da4, 0x4652 bytes
    // netio.sys .text:0x623ac, 0x4dd3 bytes
    // netio.sys .text:0x625a8, 0x4e8c bytes
    // netio.sys .text:0x6236c, 0x4dd3 bytes
    //
    _x25(sdk::unknown_ptr) nrt_find_record_under_lock;
    
    // [NrtRecordSet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c20, 0x4652 bytes
    // netio.sys .data:0x7acc8, 0x4dd3 bytes
    // netio.sys .data:0x7bd78, 0x4e8c bytes
    // netio.sys .data:0x7acc8, 0x4dd3 bytes
    //
    _x26(sdk::unknown_ptr) nrt_record_set;
    
    // [NrtRestructureHashTableUnderLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51f00, 0x4652 bytes
    // netio.sys .text:0x62a60, 0x4dd3 bytes
    // netio.sys .text:0x62c4c, 0x4e8c bytes
    // netio.sys .text:0x62a20, 0x4dd3 bytes
    //
    _x27(sdk::unknown_ptr) nrt_restructure_hash_table_under_lock;
    
    // [NrtSdBlob]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57ef0, 0x4652 bytes
    // netio.sys .rdata:0x6c8b0, 0x4dd3 bytes
    // netio.sys .rdata:0x6ce80, 0x4e8c bytes
    // netio.sys .rdata:0x6c8b0, 0x4dd3 bytes
    //
    _x28(sdk::unknown_ptr) nrt_sd_blob;
    
    // [NrtSecurityDescriptor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c28, 0x4652 bytes
    // netio.sys .data:0x7acd0, 0x4dd3 bytes
    // netio.sys .data:0x7bd80, 0x4e8c bytes
    // netio.sys .data:0x7acd0, 0x4dd3 bytes
    //
    _x29(sdk::unknown_ptr) nrt_security_descriptor;
    
    // [NsiAllocateAndGetTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1aff0, 0x4652 bytes
    // netio.sys .text:0x1e220, 0x4dd3 bytes
    // netio.sys .text:0x1d000, 0x4e8c bytes
    // netio.sys .text:0x1e2b0, 0x4dd3 bytes
    //
    _x30(sdk::unknown_ptr) nsi_allocate_and_get_table;
    
    // [NsiAttachNaClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ef50, 0x4652 bytes
    // netio.sys .text:0x28810, 0x4dd3 bytes
    // netio.sys .text:0x29750, 0x4e8c bytes
    // netio.sys .text:0x288a0, 0x4dd3 bytes
    //
    _x31(sdk::unknown_ptr) nsi_attach_na_client;
    
    // [NsiAttachNmProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e470, 0x4652 bytes
    // netio.sys .text:0x25120, 0x4dd3 bytes
    // netio.sys .text:0x23180, 0x4e8c bytes
    // netio.sys .text:0x251b0, 0x4dd3 bytes
    //
    _x32(sdk::unknown_ptr) nsi_attach_nm_provider;
    
    // [NsiBootNicTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x615e0, 0x4652 bytes
    // netio.sys .data:0x7a5e0, 0x4dd3 bytes
    // netio.sys .data:0x7b680, 0x4e8c bytes
    // netio.sys .data:0x7a5e0, 0x4dd3 bytes
    //
    _x33(sdk::unknown_ptr) nsi_boot_nic_table;
    
    // [NsiCleanupNaClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3f040, 0x4652 bytes
    // netio.sys .text:0x3cc50, 0x4dd3 bytes
    // netio.sys .text:0x3e130, 0x4e8c bytes
    // netio.sys .text:0x3cc10, 0x4dd3 bytes
    //
    _x34(sdk::unknown_ptr) nsi_cleanup_na_client;
    
    // [NsiCleanupProviderContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40f30, 0x4652 bytes
    // netio.sys .text:0x4a980, 0x4dd3 bytes
    // netio.sys .text:0x4bf90, 0x4e8c bytes
    // netio.sys .text:0x4a940, 0x4dd3 bytes
    //
    _x35(sdk::unknown_ptr) nsi_cleanup_provider_context;
    
    // [NsiClearPersistentSetting]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40270, 0x4652 bytes
    // netio.sys .text:0x49820, 0x4dd3 bytes
    // netio.sys .text:0x4adf0, 0x4e8c bytes
    // netio.sys .text:0x497e0, 0x4dd3 bytes
    //
    _x36(sdk::unknown_ptr) nsi_clear_persistent_setting;
    
    // [NsiContainerCreateCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c330, 0x4652 bytes
    // netio.sys PAGE:0x871e0, 0x4dd3 bytes
    // netio.sys PAGE:0x89440, 0x4e8c bytes
    // netio.sys PAGE:0x871e0, 0x4dd3 bytes
    //
    _x37(sdk::unknown_ptr) nsi_container_create_callback;
    
    // [NsiContainerMonitor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGEDATA:0x6e000, 0x4652 bytes
    // netio.sys PAGEDATA:0x8a000, 0x4dd3 bytes
    // netio.sys PAGEDATA:0x8d000, 0x4e8c bytes
    // netio.sys PAGEDATA:0x8a000, 0x4dd3 bytes
    //
    _x38(sdk::unknown_ptr) nsi_container_monitor;
    
    // [NsiContainerTerminateCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c3f0, 0x4652 bytes
    // netio.sys PAGE:0x872d0, 0x4dd3 bytes
    // netio.sys PAGE:0x89540, 0x4e8c bytes
    // netio.sys PAGE:0x872d0, 0x4dd3 bytes
    //
    _x39(sdk::unknown_ptr) nsi_container_terminate_callback;
    
    // [NsiDefaultDacl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61768, 0x4652 bytes
    // netio.sys .data:0x7a768, 0x4dd3 bytes
    // netio.sys .data:0x7b808, 0x4e8c bytes
    // netio.sys .data:0x7a768, 0x4dd3 bytes
    //
    _x40(sdk::unknown_ptr) nsi_default_dacl;
    
    // [NsiDefaultSecurityDescriptor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61800, 0x4652 bytes
    // netio.sys .data:0x7a800, 0x4dd3 bytes
    // netio.sys .data:0x7b8a0, 0x4e8c bytes
    // netio.sys .data:0x7a800, 0x4dd3 bytes
    //
    _x41(sdk::unknown_ptr) nsi_default_security_descriptor;
    
    // [NsiDereferenceModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40e68, 0x4652 bytes
    // netio.sys .text:0x4a7bc, 0x4dd3 bytes
    // netio.sys .text:0x4bdcc, 0x4e8c bytes
    // netio.sys .text:0x4a77c, 0x4dd3 bytes
    //
    _x42(sdk::unknown_ptr) nsi_dereference_module;
    
    // [NsiDeregisterChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x402d0, 0x4652 bytes
    // netio.sys .text:0x49890, 0x4dd3 bytes
    // netio.sys .text:0x4ae60, 0x4e8c bytes
    // netio.sys .text:0x49850, 0x4dd3 bytes
    //
    _x43(sdk::unknown_ptr) nsi_deregister_change_notification;
    
    // [NsiDeregisterChangeNotificationEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x170f0, 0x4652 bytes
    // netio.sys .text:0x14270, 0x4dd3 bytes
    // netio.sys .text:0x148e0, 0x4e8c bytes
    // netio.sys .text:0x14320, 0x4dd3 bytes
    //
    _x44(sdk::unknown_ptr) nsi_deregister_change_notification_ex;
    
    // [NsiDeregisterLegacyHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40300, 0x4652 bytes
    // netio.sys .text:0x498d0, 0x4dd3 bytes
    // netio.sys .text:0x4aea0, 0x4e8c bytes
    // netio.sys .text:0x49890, 0x4dd3 bytes
    //
    _x45(sdk::unknown_ptr) nsi_deregister_legacy_handler;
    
    // [NsiDetachNaClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x404b0, 0x4652 bytes
    // netio.sys .text:0x49b80, 0x4dd3 bytes
    // netio.sys .text:0x4b150, 0x4e8c bytes
    // netio.sys .text:0x49b40, 0x4dd3 bytes
    //
    _x46(sdk::unknown_ptr) nsi_detach_na_client;
    
    // [NsiDetachNmProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40f40, 0x4652 bytes
    // netio.sys .text:0x4a9a0, 0x4dd3 bytes
    // netio.sys .text:0x4bfb0, 0x4e8c bytes
    // netio.sys .text:0x4a960, 0x4dd3 bytes
    //
    _x47(sdk::unknown_ptr) nsi_detach_nm_provider;
    
    // [NsiEnumerateObjectsAllParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b250, 0x4652 bytes
    // netio.sys .text:0x49960, 0x4dd3 bytes
    // netio.sys .text:0x4af30, 0x4e8c bytes
    // netio.sys .text:0x49920, 0x4dd3 bytes
    //
    _x48(sdk::unknown_ptr) nsi_enumerate_objects_all_parameters;
    
    // [NsiEnumerateObjectsAllParametersEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17c90, 0x4652 bytes
    // netio.sys .text:0x14e40, 0x4dd3 bytes
    // netio.sys .text:0x15260, 0x4e8c bytes
    // netio.sys .text:0x14ef0, 0x4dd3 bytes
    //
    _x49(sdk::unknown_ptr) nsi_enumerate_objects_all_parameters_ex;
    
    // [NsiEnumerateObjectsAllPersistentParametersWithMask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40370, 0x4652 bytes
    // netio.sys .text:0x49a20, 0x4dd3 bytes
    // netio.sys .text:0x4aff0, 0x4e8c bytes
    // netio.sys .text:0x499e0, 0x4dd3 bytes
    //
    _x50(sdk::unknown_ptr) nsi_enumerate_objects_all_persistent_parameters_with_mask;
    
    // [NsiEnumerateObjectsParameter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _x51(sdk::unknown_ptr) nsi_enumerate_objects_parameter;
    
    // [NsiFreeTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b310, 0x4652 bytes
    // netio.sys .text:0x1d1a0, 0x4dd3 bytes
    // netio.sys .text:0x1a580, 0x4e8c bytes
    // netio.sys .text:0x1d230, 0x4dd3 bytes
    //
    _x52(sdk::unknown_ptr) nsi_free_table;
    
    // [NsiGetAllParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17780, 0x4652 bytes
    // netio.sys .text:0x14770, 0x4dd3 bytes
    // netio.sys .text:0x151a0, 0x4e8c bytes
    // netio.sys .text:0x14820, 0x4dd3 bytes
    //
    _x53(sdk::unknown_ptr) nsi_get_all_parameters;
    
    // [NsiGetAllParametersEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18560, 0x4652 bytes
    // netio.sys .text:0x156e0, 0x4dd3 bytes
    // netio.sys .text:0x15b30, 0x4e8c bytes
    // netio.sys .text:0x15790, 0x4dd3 bytes
    //
    _x54(sdk::unknown_ptr) nsi_get_all_parameters_ex;
    
    // [NsiGetAllPersistentParametersWithMask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x403e0, 0x4652 bytes
    // netio.sys .text:0x49aa0, 0x4dd3 bytes
    // netio.sys .text:0x4b070, 0x4e8c bytes
    // netio.sys .text:0x49a60, 0x4dd3 bytes
    //
    _x55(sdk::unknown_ptr) nsi_get_all_persistent_parameters_with_mask;
    
    // [NsiGetModuleHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d4e0, 0x4652 bytes
    // netio.sys .text:0x250e0, 0x4dd3 bytes
    // netio.sys .text:0x23870, 0x4e8c bytes
    // netio.sys .text:0x25170, 0x4dd3 bytes
    //
    _x56(sdk::unknown_ptr) nsi_get_module_handle;
    
    // [NsiGetObjectSecurity]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40750, 0x4652 bytes
    // netio.sys .text:0x4a020, 0x4dd3 bytes
    // netio.sys .text:0x4b5f0, 0x4e8c bytes
    // netio.sys .text:0x49fe0, 0x4dd3 bytes
    //
    _x57(sdk::unknown_ptr) nsi_get_object_security;
    
    // [NsiGetParameter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c240, 0x4652 bytes
    // netio.sys .text:0x146d0, 0x4dd3 bytes
    // netio.sys .text:0x14840, 0x4e8c bytes
    // netio.sys .text:0x14780, 0x4dd3 bytes
    //
    _x58(sdk::unknown_ptr) nsi_get_parameter;
    
    // [NsiGetParameterEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17840, 0x4652 bytes
    // netio.sys .text:0x15b60, 0x4dd3 bytes
    // netio.sys .text:0x15fa0, 0x4e8c bytes
    // netio.sys .text:0x15c10, 0x4dd3 bytes
    //
    _x59(sdk::unknown_ptr) nsi_get_parameter_ex;
    
    // [NsiHandleFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x616d0, 0x4652 bytes
    // netio.sys .data:0x7a6d0, 0x4dd3 bytes
    // netio.sys .data:0x7b770, 0x4e8c bytes
    // netio.sys .data:0x7a6d0, 0x4dd3 bytes
    //
    _x60(sdk::unknown_ptr) nsi_handle_factory;
    
    // [NsiInformationObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x579e0, 0x4652 bytes
    // netio.sys .rdata:0x6be90, 0x4dd3 bytes
    // netio.sys .rdata:0x6c320, 0x4e8c bytes
    // netio.sys .rdata:0x6be90, 0x4dd3 bytes
    //
    _x61(sdk::unknown_ptr) nsi_information_object;
    
    // [NsiLegacyHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61850, 0x4652 bytes
    // netio.sys .data:0x7a850, 0x4dd3 bytes
    // netio.sys .data:0x7b8f0, 0x4e8c bytes
    // netio.sys .data:0x7a850, 0x4dd3 bytes
    //
    _x62(sdk::unknown_ptr) nsi_legacy_handler;
    
    // [NsiLegacyHandlerDeregisterEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61860, 0x4652 bytes
    // netio.sys .data:0x7a860, 0x4dd3 bytes
    // netio.sys .data:0x7b900, 0x4e8c bytes
    // netio.sys .data:0x7a860, 0x4dd3 bytes
    //
    _x63(sdk::unknown_ptr) nsi_legacy_handler_deregister_event;
    
    // [NsiLegacyHandlerReference]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61858, 0x4652 bytes
    // netio.sys .data:0x7a858, 0x4dd3 bytes
    // netio.sys .data:0x7b8f8, 0x4e8c bytes
    // netio.sys .data:0x7a858, 0x4dd3 bytes
    //
    _x64(sdk::unknown_ptr) nsi_legacy_handler_reference;
    
    // [NsiNaProviderDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x54040, 0x4652 bytes
    // netio.sys .rdata:0x66180, 0x4dd3 bytes
    // netio.sys .rdata:0x66220, 0x4e8c bytes
    // netio.sys .rdata:0x66180, 0x4dd3 bytes
    //
    _x65(sdk::unknown_ptr) nsi_na_provider_dispatch;
    
    // [NsiNaProviderHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61828, 0x4652 bytes
    // netio.sys .data:0x7a828, 0x4dd3 bytes
    // netio.sys .data:0x7b8c8, 0x4e8c bytes
    // netio.sys .data:0x7a828, 0x4dd3 bytes
    //
    _x66(sdk::unknown_ptr) nsi_na_provider_handle;
    
    // [NsiNaProviderNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x54140, 0x4652 bytes
    // netio.sys .rdata:0x66100, 0x4dd3 bytes
    // netio.sys .rdata:0x66100, 0x4e8c bytes
    // netio.sys .rdata:0x66100, 0x4dd3 bytes
    //
    _x67(sdk::unknown_ptr) nsi_na_provider_notify;
    
    // [NsiNacAttachedList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61840, 0x4652 bytes
    // netio.sys .data:0x7a840, 0x4dd3 bytes
    // netio.sys .data:0x7b8e0, 0x4e8c bytes
    // netio.sys .data:0x7a840, 0x4dd3 bytes
    //
    _x68(sdk::unknown_ptr) nsi_nac_attached_list;
    
    // [NsiNacListLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61830, 0x4652 bytes
    // netio.sys .data:0x7a830, 0x4dd3 bytes
    // netio.sys .data:0x7b8d0, 0x4e8c bytes
    // netio.sys .data:0x7a830, 0x4dd3 bytes
    //
    _x69(sdk::unknown_ptr) nsi_nac_list_lock;
    
    // [NsiNmClientDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x54030, 0x4652 bytes
    // netio.sys .rdata:0x660a0, 0x4dd3 bytes
    // netio.sys .rdata:0x66090, 0x4e8c bytes
    // netio.sys .rdata:0x660a0, 0x4dd3 bytes
    //
    _x70(sdk::unknown_ptr) nsi_nm_client_dispatch;
    
    // [NsiNmClientHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61640, 0x4652 bytes
    // netio.sys .data:0x7a640, 0x4dd3 bytes
    // netio.sys .data:0x7b6e0, 0x4e8c bytes
    // netio.sys .data:0x7a640, 0x4dd3 bytes
    //
    _x71(sdk::unknown_ptr) nsi_nm_client_handle;
    
    // [NsiNmClientNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x540f0, 0x4652 bytes
    // netio.sys .rdata:0x661f0, 0x4dd3 bytes
    // netio.sys .rdata:0x66150, 0x4e8c bytes
    // netio.sys .rdata:0x661f0, 0x4dd3 bytes
    //
    _x72(sdk::unknown_ptr) nsi_nm_client_notify;
    
    // [NsiNmpList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61630, 0x4652 bytes
    // netio.sys .data:0x7a630, 0x4dd3 bytes
    // netio.sys .data:0x7b6d0, 0x4e8c bytes
    // netio.sys .data:0x7a630, 0x4dd3 bytes
    //
    _x73(sdk::unknown_ptr) nsi_nmp_list;
    
    // [NsiNmpListLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61620, 0x4652 bytes
    // netio.sys .data:0x7a620, 0x4dd3 bytes
    // netio.sys .data:0x7b6c0, 0x4e8c bytes
    // netio.sys .data:0x7a620, 0x4dd3 bytes
    //
    _x74(sdk::unknown_ptr) nsi_nmp_list_lock;
    
    // [NsiParameterChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ab70, 0x4652 bytes
    // netio.sys .text:0x1b890, 0x4dd3 bytes
    // netio.sys .text:0x12930, 0x4e8c bytes
    // netio.sys .text:0x1b920, 0x4dd3 bytes
    //
    _x75(sdk::unknown_ptr) nsi_parameter_change;
    
    // [NsiPersistentWriteMutex]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x616e0, 0x4652 bytes
    // netio.sys .data:0x7a6e0, 0x4dd3 bytes
    // netio.sys .data:0x7b780, 0x4e8c bytes
    // netio.sys .data:0x7a6e0, 0x4dd3 bytes
    //
    _x76(sdk::unknown_ptr) nsi_persistent_write_mutex;
    
    // [NsiReferenceCount]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61668, 0x4652 bytes
    // netio.sys .data:0x7a668, 0x4dd3 bytes
    // netio.sys .data:0x7b708, 0x4e8c bytes
    // netio.sys .data:0x7a668, 0x4dd3 bytes
    //
    _x77(sdk::unknown_ptr) nsi_reference_count;
    
    // [NsiReferenceDefaultObjectSecurity]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x408f0, 0x4652 bytes
    // netio.sys .text:0x4a210, 0x4dd3 bytes
    // netio.sys .text:0x4b7e0, 0x4e8c bytes
    // netio.sys .text:0x4a1d0, 0x4dd3 bytes
    //
    _x78(sdk::unknown_ptr) nsi_reference_default_object_security;
    
    // [NsiRegisterChangeNotification]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21260, 0x4652 bytes
    // netio.sys .text:0x27fa0, 0x4dd3 bytes
    // netio.sys .text:0x28b80, 0x4e8c bytes
    // netio.sys .text:0x28030, 0x4dd3 bytes
    //
    _x79(sdk::unknown_ptr) nsi_register_change_notification;
    
    // [NsiRegisterChangeNotificationEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17300, 0x4652 bytes
    // netio.sys .text:0x14830, 0x4dd3 bytes
    // netio.sys .text:0x14b90, 0x4e8c bytes
    // netio.sys .text:0x148e0, 0x4dd3 bytes
    //
    _x80(sdk::unknown_ptr) nsi_register_change_notification_ex;
    
    // [NsiRegisterLegacyHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x245d0, 0x4652 bytes
    // netio.sys .text:0x29070, 0x4dd3 bytes
    // netio.sys .text:0x29f20, 0x4e8c bytes
    // netio.sys .text:0x29100, 0x4dd3 bytes
    //
    _x81(sdk::unknown_ptr) nsi_register_legacy_handler;
    
    // [NsiResetPersistentSetting]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cf50, 0x4652 bytes
    // netio.sys .text:0x28e00, 0x4dd3 bytes
    // netio.sys .text:0x29cb0, 0x4e8c bytes
    // netio.sys .text:0x28e90, 0x4dd3 bytes
    //
    _x82(sdk::unknown_ptr) nsi_reset_persistent_setting;
    
    // [NsiRpcState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x616a0, 0x4652 bytes
    // netio.sys .data:0x7a6a0, 0x4dd3 bytes
    // netio.sys .data:0x7b740, 0x4e8c bytes
    // netio.sys .data:0x7a6a0, 0x4dd3 bytes
    //
    _x83(sdk::unknown_ptr) nsi_rpc_state;
    
    // [NsiSetAllParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16b10, 0x4652 bytes
    // netio.sys .text:0x13cc0, 0x4dd3 bytes
    // netio.sys .text:0x14490, 0x4e8c bytes
    // netio.sys .text:0x13d70, 0x4dd3 bytes
    //
    _x84(sdk::unknown_ptr) nsi_set_all_parameters;
    
    // [NsiSetAllParametersEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16bb0, 0x4652 bytes
    // netio.sys .text:0x13dc0, 0x4dd3 bytes
    // netio.sys .text:0x14590, 0x4e8c bytes
    // netio.sys .text:0x13e70, 0x4dd3 bytes
    //
    _x85(sdk::unknown_ptr) nsi_set_all_parameters_ex;
    
    // [NsiSetAllPersistentParametersWithMask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40440, 0x4652 bytes
    // netio.sys .text:0x49b10, 0x4dd3 bytes
    // netio.sys .text:0x4b0e0, 0x4e8c bytes
    // netio.sys .text:0x49ad0, 0x4dd3 bytes
    //
    _x86(sdk::unknown_ptr) nsi_set_all_persistent_parameters_with_mask;
    
    // [NsiSetObjectSecurity]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e680, 0x4652 bytes
    // netio.sys .text:0x253c0, 0x4dd3 bytes
    // netio.sys .text:0x22c50, 0x4e8c bytes
    // netio.sys .text:0x25450, 0x4dd3 bytes
    //
    _x87(sdk::unknown_ptr) nsi_set_object_security;
    
    // [NsiSetParameter]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24280, 0x4652 bytes
    // netio.sys .text:0x1daf0, 0x4dd3 bytes
    // netio.sys .text:0x1b290, 0x4e8c bytes
    // netio.sys .text:0x1db80, 0x4dd3 bytes
    //
    _x88(sdk::unknown_ptr) nsi_set_parameter;
    
    // [NsiSetParameterEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16980, 0x4652 bytes
    // netio.sys .text:0x13fd0, 0x4dd3 bytes
    // netio.sys .text:0x21b70, 0x4e8c bytes
    // netio.sys .text:0x14080, 0x4dd3 bytes
    //
    _x89(sdk::unknown_ptr) nsi_set_parameter_ex;
    
    // [NsiUnloadEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61680, 0x4652 bytes
    // netio.sys .data:0x7a680, 0x4dd3 bytes
    // netio.sys .data:0x7b720, 0x4e8c bytes
    // netio.sys .data:0x7a680, 0x4dd3 bytes
    //
    _x90(sdk::unknown_ptr) nsi_unload_event;
    
    // [NsipAccessCheck]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18900, 0x4652 bytes
    // netio.sys .text:0x15ff0, 0x4dd3 bytes
    // netio.sys .text:0x164e0, 0x4e8c bytes
    // netio.sys .text:0x160a0, 0x4dd3 bytes
    //
    _x91(sdk::unknown_ptr) nsip_access_check;
    
    // [NsipAllocateAndInitializeNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a564, 0x4652 bytes
    // netio.sys .text:0x165f8, 0x4dd3 bytes
    // netio.sys .text:0x16d14, 0x4e8c bytes
    // netio.sys .text:0x166a8, 0x4dd3 bytes
    //
    _x92(sdk::unknown_ptr) nsip_allocate_and_initialize_node;
    
    // [NsipAllocateAndInitializeSid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1fb8c, 0x4652 bytes
    // netio.sys .text:0x27978, 0x4dd3 bytes
    // netio.sys .text:0x248a0, 0x4e8c bytes
    // netio.sys .text:0x27a08, 0x4dd3 bytes
    //
    _x93(sdk::unknown_ptr) nsip_allocate_and_initialize_sid;
    
    // [NsipAttachToContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c444, 0x4652 bytes
    // netio.sys PAGE:0x87348, 0x4dd3 bytes
    // netio.sys PAGE:0x89620, 0x4e8c bytes
    // netio.sys PAGE:0x87348, 0x4dd3 bytes
    //
    _x94(sdk::unknown_ptr) nsip_attach_to_container;
    
    // [NsipCachedRegistryKeyList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61720, 0x4652 bytes
    // netio.sys .data:0x7a720, 0x4dd3 bytes
    // netio.sys .data:0x7b7c0, 0x4e8c bytes
    // netio.sys .data:0x7a720, 0x4dd3 bytes
    //
    _x95(sdk::unknown_ptr) nsip_cached_registry_key_list;
    
    // [NsipCachedRegistryKeyListLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61780, 0x4652 bytes
    // netio.sys .data:0x7a780, 0x4dd3 bytes
    // netio.sys .data:0x7b820, 0x4e8c bytes
    // netio.sys .data:0x7a780, 0x4dd3 bytes
    //
    _x96(sdk::unknown_ptr) nsip_cached_registry_key_list_lock;
    
    // [NsipCleanupCachedRegistryList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40924, 0x4652 bytes
    // netio.sys .text:0x4a254, 0x4dd3 bytes
    // netio.sys .text:0x4b824, 0x4e8c bytes
    // netio.sys .text:0x4a214, 0x4dd3 bytes
    //
    _x97(sdk::unknown_ptr) nsip_cleanup_cached_registry_list;
    
    // [NsipCleanupNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40f6c, 0x4652 bytes
    // netio.sys .text:0x4a9d0, 0x4dd3 bytes
    // netio.sys .text:0x4bfe0, 0x4e8c bytes
    // netio.sys .text:0x4a990, 0x4dd3 bytes
    //
    _x98(sdk::unknown_ptr) nsip_cleanup_nmp_context;
    
    // [NsipCleanupRpcState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40e94, 0x4652 bytes
    // netio.sys .text:0x4a7f4, 0x4dd3 bytes
    // netio.sys .text:0x4be04, 0x4e8c bytes
    // netio.sys .text:0x4a7b4, 0x4dd3 bytes
    //
    _x99(sdk::unknown_ptr) nsip_cleanup_rpc_state;
    
    // [NsipCompare]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15320, 0x4652 bytes
    // netio.sys .text:0x1a500, 0x4dd3 bytes
    // netio.sys .text:0x127a0, 0x4e8c bytes
    // netio.sys .text:0x1a590, 0x4dd3 bytes
    //
    _y00(sdk::unknown_ptr) nsip_compare;
    
    // [NsipConvertKeyToKeyValueName]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bdd8, 0x4652 bytes
    // netio.sys .text:0x1e834, 0x4dd3 bytes
    // netio.sys .text:0x1bba4, 0x4e8c bytes
    // netio.sys .text:0x1e8c4, 0x4dd3 bytes
    //
    _y01(sdk::unknown_ptr) nsip_convert_key_to_key_value_name;
    
    // [NsipConvertKeyValueDataToRw]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c2d0, 0x4652 bytes
    // netio.sys .text:0x1e904, 0x4dd3 bytes
    // netio.sys .text:0x1bae4, 0x4e8c bytes
    // netio.sys .text:0x1e994, 0x4dd3 bytes
    //
    _y02(sdk::unknown_ptr) nsip_convert_key_value_data_to_rw;
    
    // [NsipConvertKeyValueNameToKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22e4c, 0x4652 bytes
    // netio.sys .text:0x25f44, 0x4dd3 bytes
    // netio.sys .text:0x28714, 0x4e8c bytes
    // netio.sys .text:0x25fd4, 0x4dd3 bytes
    //
    _y03(sdk::unknown_ptr) nsip_convert_key_value_name_to_key;
    
    // [NsipCreateDefaultSecurityDescriptor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f7d4, 0x4652 bytes
    // netio.sys .text:0x2724c, 0x4dd3 bytes
    // netio.sys .text:0x24160, 0x4e8c bytes
    // netio.sys .text:0x272dc, 0x4dd3 bytes
    //
    _y04(sdk::unknown_ptr) nsip_create_default_security_descriptor;
    
    // [NsipCreateInformationObjectKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e8c4, 0x4652 bytes
    // netio.sys .text:0x1c550, 0x4dd3 bytes
    // netio.sys .text:0x184d8, 0x4e8c bytes
    // netio.sys .text:0x1c5e0, 0x4dd3 bytes
    //
    _y05(sdk::unknown_ptr) nsip_create_information_object_key;
    
    // [NsipCreateKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e9ec, 0x4652 bytes
    // netio.sys .text:0x1c69c, 0x4dd3 bytes
    // netio.sys .text:0x18420, 0x4e8c bytes
    // netio.sys .text:0x1c72c, 0x4dd3 bytes
    //
    _y06(sdk::unknown_ptr) nsip_create_key;
    
    // [NsipDereferenceNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x172bc, 0x4652 bytes
    // netio.sys .text:0x144e0, 0x4dd3 bytes
    // netio.sys .text:0x14b48, 0x4e8c bytes
    // netio.sys .text:0x14590, 0x4dd3 bytes
    //
    _y07(sdk::unknown_ptr) nsip_dereference_nmp_context;
    
    // [NsipDeregisterProviderNotificationList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61650, 0x4652 bytes
    // netio.sys .data:0x7a650, 0x4dd3 bytes
    // netio.sys .data:0x7b6f0, 0x4e8c bytes
    // netio.sys .data:0x7a650, 0x4dd3 bytes
    //
    _y08(sdk::unknown_ptr) nsip_deregister_provider_notification_list;
    
    // [NsipDeregisterProviderNotificationListLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61660, 0x4652 bytes
    // netio.sys .data:0x7a660, 0x4dd3 bytes
    // netio.sys .data:0x7b700, 0x4e8c bytes
    // netio.sys .data:0x7a660, 0x4dd3 bytes
    //
    _y09(sdk::unknown_ptr) nsip_deregister_provider_notification_list_lock;
    
    // [NsipDetachFromContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c4bc, 0x4652 bytes
    // netio.sys PAGE:0x873e0, 0x4dd3 bytes
    // netio.sys PAGE:0x896c4, 0x4e8c bytes
    // netio.sys PAGE:0x873e0, 0x4dd3 bytes
    //
    _y10(sdk::unknown_ptr) nsip_detach_from_container;
    
    // [NsipEnsureKeyExistsWithSecurityDescriptor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f708, 0x4652 bytes
    // netio.sys .text:0x27150, 0x4dd3 bytes
    // netio.sys .text:0x24068, 0x4e8c bytes
    // netio.sys .text:0x271e0, 0x4dd3 bytes
    //
    _y11(sdk::unknown_ptr) nsip_ensure_key_exists_with_security_descriptor;
    
    // [NsipEnumeratePersistentData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22bc0, 0x4652 bytes
    // netio.sys .text:0x25c78, 0x4dd3 bytes
    // netio.sys .text:0x1a15c, 0x4e8c bytes
    // netio.sys .text:0x25d08, 0x4dd3 bytes
    //
    _y12(sdk::unknown_ptr) nsip_enumerate_persistent_data;
    
    // [NsipFindInformationProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x414bc, 0x4652 bytes
    // netio.sys .text:0x4b0ac, 0x4dd3 bytes
    // netio.sys .text:0x4c6bc, 0x4e8c bytes
    // netio.sys .text:0x4b06c, 0x4dd3 bytes
    //
    _y13(sdk::unknown_ptr) nsip_find_information_provider;
    
    // [NsipFindModuleGuidByModuleId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4106c, 0x4652 bytes
    // netio.sys .text:0x4aaec, 0x4dd3 bytes
    // netio.sys .text:0x4c0f0, 0x4e8c bytes
    // netio.sys .text:0x4aaac, 0x4dd3 bytes
    //
    _y14(sdk::unknown_ptr) nsip_find_module_guid_by_module_id;
    
    // [NsipFindNmpContextByModuleId]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ec20, 0x4652 bytes
    // netio.sys .text:0x257a0, 0x4dd3 bytes
    // netio.sys .text:0x23310, 0x4e8c bytes
    // netio.sys .text:0x25830, 0x4dd3 bytes
    //
    _y15(sdk::unknown_ptr) nsip_find_nmp_context_by_module_id;
    
    // [NsipFreeAndCleanupNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x409c4, 0x4652 bytes
    // netio.sys .text:0x4a2fc, 0x4dd3 bytes
    // netio.sys .text:0x4b8cc, 0x4e8c bytes
    // netio.sys .text:0x4a2bc, 0x4dd3 bytes
    //
    _y16(sdk::unknown_ptr) nsip_free_and_cleanup_node;
    
    // [NsipGetAllInformationProviderParameters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41540, 0x4652 bytes
    // netio.sys .text:0x4b130, 0x4dd3 bytes
    // netio.sys .text:0x4c740, 0x4e8c bytes
    // netio.sys .text:0x4b0f0, 0x4dd3 bytes
    //
    _y17(sdk::unknown_ptr) nsip_get_all_information_provider_parameters;
    
    // [NsipGetBootFirmwareTableFromSystemInformation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23e4c, 0x4652 bytes
    // netio.sys .text:0x283ec, 0x4dd3 bytes
    // netio.sys .text:0x29a0c, 0x4e8c bytes
    // netio.sys .text:0x2847c, 0x4dd3 bytes
    //
    _y18(sdk::unknown_ptr) nsip_get_boot_firmware_table_from_system_information;
    
    // [NsipGetNextInformationObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41608, 0x4652 bytes
    // netio.sys .text:0x4b200, 0x4dd3 bytes
    // netio.sys .text:0x4c810, 0x4e8c bytes
    // netio.sys .text:0x4b1c0, 0x4dd3 bytes
    //
    _y19(sdk::unknown_ptr) nsip_get_next_information_object;
    
    // [NsipGetNextNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41104, 0x4652 bytes
    // netio.sys .text:0x4ab94, 0x4dd3 bytes
    // netio.sys .text:0x4c198, 0x4e8c bytes
    // netio.sys .text:0x4ab54, 0x4dd3 bytes
    //
    _y20(sdk::unknown_ptr) nsip_get_next_nmp_context;
    
    // [NsipGetNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17644, 0x4652 bytes
    // netio.sys .text:0x14524, 0x4dd3 bytes
    // netio.sys .text:0x15034, 0x4e8c bytes
    // netio.sys .text:0x145d4, 0x4dd3 bytes
    //
    _y21(sdk::unknown_ptr) nsip_get_nmp_context;
    
    // [NsipInitializeBootFirmwareTableData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23dc8, 0x4652 bytes
    // netio.sys .text:0x28358, 0x4dd3 bytes
    // netio.sys .text:0x1b004, 0x4e8c bytes
    // netio.sys .text:0x283e8, 0x4dd3 bytes
    //
    _y22(sdk::unknown_ptr) nsip_initialize_boot_firmware_table_data;
    
    // [NsipInitializeBootNicAndTargets]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4127c, 0x4652 bytes
    // netio.sys .text:0x4ada0, 0x4dd3 bytes
    // netio.sys .text:0x4c3b0, 0x4e8c bytes
    // netio.sys .text:0x4ad60, 0x4dd3 bytes
    //
    _y23(sdk::unknown_ptr) nsip_initialize_boot_nic_and_targets;
    
    // [NsipInitializeNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e528, 0x4652 bytes
    // netio.sys .text:0x251e4, 0x4dd3 bytes
    // netio.sys .text:0x22f18, 0x4e8c bytes
    // netio.sys .text:0x25274, 0x4dd3 bytes
    //
    _y24(sdk::unknown_ptr) nsip_initialize_nmp_context;
    
    // [NsipInitializeRpcState]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f344, 0x4652 bytes
    // netio.sys .text:0x216f4, 0x4dd3 bytes
    // netio.sys .text:0x23754, 0x4e8c bytes
    // netio.sys .text:0x21784, 0x4dd3 bytes
    //
    _y25(sdk::unknown_ptr) nsip_initialize_rpc_state;
    
    // [NsipInitializedFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x616d8, 0x4652 bytes
    // netio.sys .data:0x7a6d8, 0x4dd3 bytes
    // netio.sys .data:0x7b778, 0x4e8c bytes
    // netio.sys .data:0x7a6d8, 0x4dd3 bytes
    //
    _y26(sdk::unknown_ptr) nsip_initialized_flags;
    
    // [NsipInsertCachedNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a32c, 0x4652 bytes
    // netio.sys .text:0x16380, 0x4dd3 bytes
    // netio.sys .text:0x16aa4, 0x4e8c bytes
    // netio.sys .text:0x16430, 0x4dd3 bytes
    //
    _y27(sdk::unknown_ptr) nsip_insert_cached_node;
    
    // [NsipInsertNacContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1efe0, 0x4652 bytes
    // netio.sys .text:0x288a4, 0x4dd3 bytes
    // netio.sys .text:0x297d0, 0x4e8c bytes
    // netio.sys .text:0x28934, 0x4dd3 bytes
    //
    _y28(sdk::unknown_ptr) nsip_insert_nac_context;
    
    // [NsipInsertNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e624, 0x4652 bytes
    // netio.sys .text:0x252b0, 0x4dd3 bytes
    // netio.sys .text:0x22fe4, 0x4e8c bytes
    // netio.sys .text:0x25340, 0x4dd3 bytes
    //
    _y29(sdk::unknown_ptr) nsip_insert_nmp_context;
    
    // [NsipIsBootStructureValid]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4144c, 0x4652 bytes
    // netio.sys .text:0x4af68, 0x4dd3 bytes
    // netio.sys .text:0x4c578, 0x4e8c bytes
    // netio.sys .text:0x4af28, 0x4dd3 bytes
    //
    _y30(sdk::unknown_ptr) nsip_is_boot_structure_valid;
    
    // [NsipIsNotificationForContainer]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a348, 0x4652 bytes
    // netio.sys PAGE:0x85378, 0x4dd3 bytes
    // netio.sys PAGE:0x87040, 0x4e8c bytes
    // netio.sys PAGE:0x85378, 0x4dd3 bytes
    //
    _y31(sdk::unknown_ptr) nsip_is_notification_for_container;
    
    // [NsipLockedDereferenceNotificationContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1aaf8, 0x4652 bytes
    // netio.sys .text:0x13630, 0x4dd3 bytes
    // netio.sys .text:0x179cc, 0x4e8c bytes
    // netio.sys .text:0x136e0, 0x4dd3 bytes
    //
    _y32(sdk::unknown_ptr) nsip_locked_dereference_notification_context;
    
    // [NsipLookupCacheList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1e828, 0x4652 bytes
    // netio.sys .text:0x255e4, 0x4dd3 bytes
    // netio.sys .text:0x22e74, 0x4e8c bytes
    // netio.sys .text:0x25674, 0x4dd3 bytes
    //
    _y33(sdk::unknown_ptr) nsip_lookup_cache_list;
    
    // [NsipNotifyUserMode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ad08, 0x4652 bytes
    // netio.sys .text:0x1ba8c, 0x4dd3 bytes
    // netio.sys .text:0x12b4c, 0x4e8c bytes
    // netio.sys .text:0x1bb1c, 0x4dd3 bytes
    //
    _y34(sdk::unknown_ptr) nsip_notify_user_mode;
    
    // [NsipObjectProviderContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61110, 0x4652 bytes
    // netio.sys .data:0x7a180, 0x4dd3 bytes
    // netio.sys .data:0x7b230, 0x4e8c bytes
    // netio.sys .data:0x7a180, 0x4dd3 bytes
    //
    _y35(sdk::unknown_ptr) nsip_object_provider_context;
    
    // [NsipObjectProviderDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x541d8, 0x4652 bytes
    // netio.sys .rdata:0x66090, 0x4dd3 bytes
    // netio.sys .rdata:0x660a0, 0x4e8c bytes
    // netio.sys .rdata:0x66090, 0x4dd3 bytes
    //
    _y36(sdk::unknown_ptr) nsip_object_provider_dispatch;
    
    // [NsipOpenInformationObjectKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bb54, 0x4652 bytes
    // netio.sys .text:0x1e634, 0x4dd3 bytes
    // netio.sys .text:0x1d33c, 0x4e8c bytes
    // netio.sys .text:0x1e6c4, 0x4dd3 bytes
    //
    _y37(sdk::unknown_ptr) nsip_open_information_object_key;
    
    // [NsipOpenInformationObjectKeyOrParent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ba50, 0x4652 bytes
    // netio.sys .text:0x166bc, 0x4dd3 bytes
    // netio.sys .text:0x16804, 0x4e8c bytes
    // netio.sys .text:0x1676c, 0x4dd3 bytes
    //
    _y38(sdk::unknown_ptr) nsip_open_information_object_key_or_parent;
    
    // [NsipOpenKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bc30, 0x4652 bytes
    // netio.sys .text:0x167f0, 0x4dd3 bytes
    // netio.sys .text:0x169a4, 0x4e8c bytes
    // netio.sys .text:0x168a0, 0x4dd3 bytes
    //
    _y39(sdk::unknown_ptr) nsip_open_key;
    
    // [NsipReadBootFirmwareTableData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23d38, 0x4652 bytes
    // netio.sys .text:0x282b0, 0x4dd3 bytes
    // netio.sys .text:0x1af60, 0x4e8c bytes
    // netio.sys .text:0x28340, 0x4dd3 bytes
    //
    _y40(sdk::unknown_ptr) nsip_read_boot_firmware_table_data;
    
    // [NsipReadExact]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bd08, 0x4652 bytes
    // netio.sys .text:0x1e748, 0x4dd3 bytes
    // netio.sys .text:0x1bc90, 0x4e8c bytes
    // netio.sys .text:0x1e7d8, 0x4dd3 bytes
    //
    _y41(sdk::unknown_ptr) nsip_read_exact;
    
    // [NsipReadNext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x409f0, 0x4652 bytes
    // netio.sys .text:0x4a33c, 0x4dd3 bytes
    // netio.sys .text:0x4b90c, 0x4e8c bytes
    // netio.sys .text:0x4a2fc, 0x4dd3 bytes
    //
    _y42(sdk::unknown_ptr) nsip_read_next;
    
    // [NsipReadPersistentData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1b90c, 0x4652 bytes
    // netio.sys .text:0x1e4bc, 0x4dd3 bytes
    // netio.sys .text:0x1bd98, 0x4e8c bytes
    // netio.sys .text:0x1e54c, 0x4dd3 bytes
    //
    _y43(sdk::unknown_ptr) nsip_read_persistent_data;
    
    // [NsipRegisterContainerMonitor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys INIT:0x750f0, 0x4652 bytes
    // netio.sys INIT:0x91080, 0x4dd3 bytes
    // netio.sys INIT:0x940a4, 0x4e8c bytes
    // netio.sys INIT:0x91080, 0x4dd3 bytes
    //
    _y44(sdk::unknown_ptr) nsip_register_container_monitor;
    
    // [NsipRpcDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40528, 0x4652 bytes
    // netio.sys .text:0x49c18, 0x4dd3 bytes
    // netio.sys .text:0x4b1e8, 0x4e8c bytes
    // netio.sys .text:0x49bd8, 0x4dd3 bytes
    //
    _y45(sdk::unknown_ptr) nsip_rpc_disconnect;
    
    // [NsipStartHandleFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys INIT:0x750c0, 0x4652 bytes
    // netio.sys INIT:0x911f0, 0x4dd3 bytes
    // netio.sys INIT:0x94210, 0x4e8c bytes
    // netio.sys INIT:0x911f0, 0x4dd3 bytes
    //
    _y46(sdk::unknown_ptr) nsip_start_handle_factory;
    
    // [NsipStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d250, 0x4652 bytes
    // netio.sys .text:0x22140, 0x4dd3 bytes
    // netio.sys .text:0x24e70, 0x4e8c bytes
    // netio.sys .text:0x221d0, 0x4dd3 bytes
    //
    _y47(sdk::unknown_ptr) nsip_start_module;
    
    // [NsipStartNaProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d0f0, 0x4652 bytes
    // netio.sys .text:0x26b00, 0x4dd3 bytes
    // netio.sys .text:0x264b0, 0x4e8c bytes
    // netio.sys .text:0x26b90, 0x4dd3 bytes
    //
    _y48(sdk::unknown_ptr) nsip_start_na_provider;
    
    // [NsipStartNmClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d1a0, 0x4652 bytes
    // netio.sys .text:0x290b0, 0x4dd3 bytes
    // netio.sys .text:0x26570, 0x4e8c bytes
    // netio.sys .text:0x29140, 0x4dd3 bytes
    //
    _y49(sdk::unknown_ptr) nsip_start_nm_client;
    
    // [NsipStartNmProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d070, 0x4652 bytes
    // netio.sys .text:0x250a0, 0x4dd3 bytes
    // netio.sys .text:0x250b0, 0x4e8c bytes
    // netio.sys .text:0x25130, 0x4dd3 bytes
    //
    _y50(sdk::unknown_ptr) nsip_start_nm_provider;
    
    // [NsipStartPersistent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys INIT:0x750a0, 0x4652 bytes
    // netio.sys INIT:0x91230, 0x4dd3 bytes
    // netio.sys INIT:0x94080, 0x4e8c bytes
    // netio.sys INIT:0x91230, 0x4dd3 bytes
    //
    _y51(sdk::unknown_ptr) nsip_start_persistent;
    
    // [NsipStartPersistentStore]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f288, 0x4652 bytes
    // netio.sys .text:0x27070, 0x4dd3 bytes
    // netio.sys .text:0x23f10, 0x4e8c bytes
    // netio.sys .text:0x27100, 0x4dd3 bytes
    //
    _y52(sdk::unknown_ptr) nsip_start_persistent_store;
    
    // [NsipStartStopRoutines]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGECONS:0x74000, 0x4652 bytes
    // netio.sys PAGECONS:0x90000, 0x4dd3 bytes
    // netio.sys PAGECONS:0x93000, 0x4e8c bytes
    // netio.sys PAGECONS:0x90000, 0x4dd3 bytes
    //
    _y53(sdk::unknown_ptr) nsip_start_stop_routines;
    
    // [NsipStopHandleFactory]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6b1c0, 0x4652 bytes
    // netio.sys PAGE:0x853d0, 0x4dd3 bytes
    // netio.sys PAGE:0x87100, 0x4e8c bytes
    // netio.sys PAGE:0x853d0, 0x4dd3 bytes
    //
    _y54(sdk::unknown_ptr) nsip_stop_handle_factory;
    
    // [NsipStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40eb0, 0x4652 bytes
    // netio.sys .text:0x4a820, 0x4dd3 bytes
    // netio.sys .text:0x4be30, 0x4e8c bytes
    // netio.sys .text:0x4a7e0, 0x4dd3 bytes
    //
    _y55(sdk::unknown_ptr) nsip_stop_module;
    
    // [NsipStopNaProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x405a0, 0x4652 bytes
    // netio.sys .text:0x49d20, 0x4dd3 bytes
    // netio.sys .text:0x4b2f0, 0x4e8c bytes
    // netio.sys .text:0x49ce0, 0x4dd3 bytes
    //
    _y56(sdk::unknown_ptr) nsip_stop_na_provider;
    
    // [NsipStopNmClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x411c0, 0x4652 bytes
    // netio.sys .text:0x4ac60, 0x4dd3 bytes
    // netio.sys .text:0x4c270, 0x4e8c bytes
    // netio.sys .text:0x4ac20, 0x4dd3 bytes
    //
    _y57(sdk::unknown_ptr) nsip_stop_nm_client;
    
    // [NsipStopNmProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x416c0, 0x4652 bytes
    // netio.sys .text:0x4b2c0, 0x4dd3 bytes
    // netio.sys .text:0x4c8d0, 0x4e8c bytes
    // netio.sys .text:0x4b280, 0x4dd3 bytes
    //
    _y58(sdk::unknown_ptr) nsip_stop_nm_provider;
    
    // [NsipStopPersistent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6b1d0, 0x4652 bytes
    // netio.sys PAGE:0x853e0, 0x4dd3 bytes
    // netio.sys PAGE:0x87110, 0x4e8c bytes
    // netio.sys PAGE:0x853e0, 0x4dd3 bytes
    //
    _y59(sdk::unknown_ptr) nsip_stop_persistent;
    
    // [NsipStopPersistentStore]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c00, 0x4652 bytes
    // netio.sys .text:0x1c520, 0x4dd3 bytes
    // netio.sys .text:0x16ee0, 0x4e8c bytes
    // netio.sys .text:0x1c5b0, 0x4dd3 bytes
    //
    _y60(sdk::unknown_ptr) nsip_stop_persistent_store;
    
    // [NsipUninitializeNmpContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x411cc, 0x4652 bytes
    // netio.sys .text:0x4ac8c, 0x4dd3 bytes
    // netio.sys .text:0x4c29c, 0x4e8c bytes
    // netio.sys .text:0x4ac4c, 0x4dd3 bytes
    //
    _y61(sdk::unknown_ptr) nsip_uninitialize_nmp_context;
    
    // [NsipUnregisterContainerMonitor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6c4e4, 0x4652 bytes
    // netio.sys PAGE:0x8740c, 0x4dd3 bytes
    // netio.sys PAGE:0x89710, 0x4e8c bytes
    // netio.sys PAGE:0x8740c, 0x4dd3 bytes
    //
    _y62(sdk::unknown_ptr) nsip_unregister_container_monitor;
    
    // [NsipValidateEnumerateObjectsAllParametersRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18498, 0x4652 bytes
    // netio.sys .text:0x15614, 0x4dd3 bytes
    // netio.sys .text:0x15a64, 0x4e8c bytes
    // netio.sys .text:0x156c4, 0x4dd3 bytes
    //
    _y63(sdk::unknown_ptr) nsip_validate_enumerate_objects_all_parameters_request;
    
    // [NsipValidateGetAllParametersRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18824, 0x4652 bytes
    // netio.sys .text:0x15a70, 0x4dd3 bytes
    // netio.sys .text:0x15eb0, 0x4e8c bytes
    // netio.sys .text:0x15b20, 0x4dd3 bytes
    //
    _y64(sdk::unknown_ptr) nsip_validate_get_all_parameters_request;
    
    // [NsipValidateSetAllParametersRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18f1c, 0x4652 bytes
    // netio.sys .text:0x162f0, 0x4dd3 bytes
    // netio.sys .text:0x16de0, 0x4e8c bytes
    // netio.sys .text:0x163a0, 0x4dd3 bytes
    //
    _y65(sdk::unknown_ptr) nsip_validate_set_all_parameters_request;
    
    // [NsipValidateSetParameterRequest]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x18fa4, 0x4652 bytes
    // netio.sys .text:0x1462c, 0x4dd3 bytes
    // netio.sys .text:0x21d9c, 0x4e8c bytes
    // netio.sys .text:0x146dc, 0x4dd3 bytes
    //
    _y66(sdk::unknown_ptr) nsip_validate_set_parameter_request;
    
    // [NsipWaitNaProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4060c, 0x4652 bytes
    // netio.sys .text:0x49db0, 0x4dd3 bytes
    // netio.sys .text:0x4b380, 0x4e8c bytes
    // netio.sys .text:0x49d70, 0x4dd3 bytes
    //
    _y67(sdk::unknown_ptr) nsip_wait_na_provider;
    
    // [NsipWaitNmClient]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4125c, 0x4652 bytes
    // netio.sys .text:0x4ad6c, 0x4dd3 bytes
    // netio.sys .text:0x4c37c, 0x4e8c bytes
    // netio.sys .text:0x4ad2c, 0x4dd3 bytes
    //
    _y68(sdk::unknown_ptr) nsip_wait_nm_client;
    
    // [NsipWritePersistentData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d514, 0x4652 bytes
    // netio.sys .text:0x1c750, 0x4dd3 bytes
    // netio.sys .text:0x17eec, 0x4e8c bytes
    // netio.sys .text:0x1c7e0, 0x4dd3 bytes
    //
    _y69(sdk::unknown_ptr) nsip_write_persistent_data;
    
    // [OpenCompartment]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x38f10, 0x4652 bytes
    // netio.sys .text:0x3f590, 0x4dd3 bytes
    // netio.sys .text:0x40ab0, 0x4e8c bytes
    // netio.sys .text:0x3f550, 0x4dd3 bytes
    //
    _y70(sdk::unknown_ptr) open_compartment;
    
    // [OptionalReleaseEffectiveMatchedFilters]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x16dc, 0x4652 bytes
    // netio.sys .text:0x51980, 0x4dd3 bytes
    // netio.sys .text:0x52f0c, 0x4e8c bytes
    // netio.sys .text:0x51940, 0x4dd3 bytes
    //
    _y71(sdk::unknown_ptr) optional_release_effective_matched_filters;
    
    // [PathKeySizeTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x597b0, 0x4652 bytes
    // netio.sys .rdata:0x70e20, 0x4dd3 bytes
    // netio.sys .rdata:0x71830, 0x4e8c bytes
    // netio.sys .rdata:0x70e20, 0x4dd3 bytes
    //
    _y72(sdk::unknown_ptr) path_key_size_table;
    
    // [PathRodSizeTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x597a8, 0x4652 bytes
    // netio.sys .rdata:0x70e18, 0x4dd3 bytes
    // netio.sys .rdata:0x71828, 0x4e8c bytes
    // netio.sys .rdata:0x70e18, 0x4dd3 bytes
    //
    _y73(sdk::unknown_ptr) path_rod_size_table;
    
    // [PendContextCleanupRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44b00, 0x4652 bytes
    // netio.sys .text:0x4f600, 0x4dd3 bytes
    // netio.sys .text:0x50e70, 0x4e8c bytes
    // netio.sys .text:0x4f5c0, 0x4dd3 bytes
    //
    _y74(sdk::unknown_ptr) pend_context_cleanup_routine;
    
    // [PerformV6Mask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47a74, 0x4652 bytes
    // netio.sys .text:0x53bb4, 0x4dd3 bytes
    // netio.sys .text:0x54758, 0x4e8c bytes
    // netio.sys .text:0x53b74, 0x4dd3 bytes
    //
    _y75(sdk::unknown_ptr) perform_v6_mask;
    
    // [PerformV6MaskHighRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47afc, 0x4652 bytes
    // netio.sys .text:0x53c54, 0x4dd3 bytes
    // netio.sys .text:0x547f8, 0x4e8c bytes
    // netio.sys .text:0x53c14, 0x4dd3 bytes
    //
    _y76(sdk::unknown_ptr) perform_v6_mask_high_range;
    
    // [ProcessCacheMiss]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6954, 0x4652 bytes
    // netio.sys .text:0x52ca0, 0x4dd3 bytes
    // netio.sys .text:0x3930, 0x4e8c bytes
    // netio.sys .text:0x52c60, 0x4dd3 bytes
    //
    _y77(sdk::unknown_ptr) process_cache_miss;
    
    // [ProcessCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xd200, 0x4652 bytes
    // netio.sys .text:0xc3d0, 0x4dd3 bytes
    // netio.sys .text:0x85a0, 0x4e8c bytes
    // netio.sys .text:0xc480, 0x4dd3 bytes
    //
    _y78(sdk::unknown_ptr) process_callout;
    
    // [ProcessCallout2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22408, 0x4652 bytes
    // netio.sys .text:0x525c8, 0x4dd3 bytes
    // netio.sys .text:0x197f4, 0x4e8c bytes
    // netio.sys .text:0x52588, 0x4dd3 bytes
    //
    _y79(sdk::unknown_ptr) process_callout2;
    
    // [ProcessDialOnDemandAddress]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a71c, 0x4652 bytes
    // netio.sys .text:0x40f54, 0x4dd3 bytes
    // netio.sys .text:0x42424, 0x4e8c bytes
    // netio.sys .text:0x40f14, 0x4dd3 bytes
    //
    _y80(sdk::unknown_ptr) process_dial_on_demand_address;
    
    // [PtCheckTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e920, 0x4652 bytes
    // netio.sys .text:0x47890, 0x4dd3 bytes
    // netio.sys .text:0x490e0, 0x4e8c bytes
    // netio.sys .text:0x47850, 0x4dd3 bytes
    //
    _y81(sdk::unknown_ptr) pt_check_table;
    
    // [PtCreateTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x241c0, 0x4652 bytes
    // netio.sys .text:0x28a60, 0x4dd3 bytes
    // netio.sys .text:0x299a0, 0x4e8c bytes
    // netio.sys .text:0x28af0, 0x4dd3 bytes
    //
    _y82(sdk::unknown_ptr) pt_create_table;
    
    // [PtDeleteEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a640, 0x4652 bytes
    // netio.sys .text:0x478c0, 0x4dd3 bytes
    // netio.sys .text:0x17430, 0x4e8c bytes
    // netio.sys .text:0x47880, 0x4dd3 bytes
    //
    _y83(sdk::unknown_ptr) pt_delete_entry;
    
    // [PtDestroyTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e940, 0x4652 bytes
    // netio.sys .text:0x479e0, 0x4dd3 bytes
    // netio.sys .text:0x49110, 0x4e8c bytes
    // netio.sys .text:0x479a0, 0x4dd3 bytes
    //
    _y84(sdk::unknown_ptr) pt_destroy_table;
    
    // [PtEnumOverTable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x14f30, 0x4652 bytes
    // netio.sys .text:0x19620, 0x4dd3 bytes
    // netio.sys .text:0x11a60, 0x4e8c bytes
    // netio.sys .text:0x196b0, 0x4dd3 bytes
    //
    _y85(sdk::unknown_ptr) pt_enum_over_table;
    
    // [PtGetData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1aaf0, 0x4652 bytes
    // netio.sys .text:0x1f450, 0x4dd3 bytes
    // netio.sys .text:0x1b280, 0x4e8c bytes
    // netio.sys .text:0x1f4e0, 0x4dd3 bytes
    //
    _y86(sdk::unknown_ptr) pt_get_data;
    
    // [PtGetExactMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x151e0, 0x4652 bytes
    // netio.sys .text:0x19e40, 0x4dd3 bytes
    // netio.sys .text:0x120d0, 0x4e8c bytes
    // netio.sys .text:0x19ed0, 0x4dd3 bytes
    //
    _y87(sdk::unknown_ptr) pt_get_exact_match;
    
    // [PtGetKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15370, 0x4652 bytes
    // netio.sys .text:0x1a910, 0x4dd3 bytes
    // netio.sys .text:0x12760, 0x4e8c bytes
    // netio.sys .text:0x1a9a0, 0x4dd3 bytes
    //
    _y88(sdk::unknown_ptr) pt_get_key;
    
    // [PtGetLongestMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13c40, 0x4652 bytes
    // netio.sys .text:0x19cd0, 0x4dd3 bytes
    // netio.sys .text:0x114a0, 0x4e8c bytes
    // netio.sys .text:0x19d60, 0x4dd3 bytes
    //
    _y89(sdk::unknown_ptr) pt_get_longest_match;
    
    // [PtGetNextShorterMatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15ba0, 0x4652 bytes
    // netio.sys .text:0x1f330, 0x4dd3 bytes
    // netio.sys .text:0x223f0, 0x4e8c bytes
    // netio.sys .text:0x1f3c0, 0x4dd3 bytes
    //
    _y90(sdk::unknown_ptr) pt_get_next_shorter_match;
    
    // [PtGetNumNodes]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a0f0, 0x4652 bytes
    // netio.sys .text:0x1fb90, 0x4dd3 bytes
    // netio.sys .text:0x13d60, 0x4e8c bytes
    // netio.sys .text:0x1fc20, 0x4dd3 bytes
    //
    _y91(sdk::unknown_ptr) pt_get_num_nodes;
    
    // [PtInsertEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22570, 0x4652 bytes
    // netio.sys .text:0x260d0, 0x4dd3 bytes
    // netio.sys .text:0x19d20, 0x4e8c bytes
    // netio.sys .text:0x26160, 0x4dd3 bytes
    //
    _y92(sdk::unknown_ptr) pt_insert_entry;
    
    // [PtSetData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e970, 0x4652 bytes
    // netio.sys .text:0x47a20, 0x4dd3 bytes
    // netio.sys .text:0x49150, 0x4e8c bytes
    // netio.sys .text:0x479e0, 0x4dd3 bytes
    //
    _y93(sdk::unknown_ptr) pt_set_data;
    
    // [PtpAdjustPrefixes]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a7f4, 0x4652 bytes
    // netio.sys .text:0x26304, 0x4dd3 bytes
    // netio.sys .text:0x19f38, 0x4e8c bytes
    // netio.sys .text:0x26394, 0x4dd3 bytes
    //
    _y94(sdk::unknown_ptr) ptp_adjust_prefixes;
    
    // [PtpBalanceAfterDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a740, 0x4652 bytes
    // netio.sys .text:0x47a30, 0x4dd3 bytes
    // netio.sys .text:0x17550, 0x4e8c bytes
    // netio.sys .text:0x479f0, 0x4dd3 bytes
    //
    _y95(sdk::unknown_ptr) ptp_balance_after_delete;
    
    // [PtpBalanceAfterInsert]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22704, 0x4652 bytes
    // netio.sys .text:0x26280, 0x4dd3 bytes
    // netio.sys .text:0x19eb4, 0x4e8c bytes
    // netio.sys .text:0x26310, 0x4dd3 bytes
    //
    _y96(sdk::unknown_ptr) ptp_balance_after_insert;
    
    // [PtpCheckSubTrie]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3e978, 0x4652 bytes
    // netio.sys .text:0x47b14, 0x4dd3 bytes
    // netio.sys .text:0x49160, 0x4e8c bytes
    // netio.sys .text:0x47ad4, 0x4dd3 bytes
    //
    _y97(sdk::unknown_ptr) ptp_check_sub_trie;
    
    // [PtpCheckTrieNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3ea14, 0x4652 bytes
    // netio.sys .text:0x47ba8, 0x4dd3 bytes
    // netio.sys .text:0x491f4, 0x4e8c bytes
    // netio.sys .text:0x47b68, 0x4dd3 bytes
    //
    _y98(sdk::unknown_ptr) ptp_check_trie_node;
    
    // [PtpComparePartialKeys]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a8a8, 0x4652 bytes
    // netio.sys .text:0x26d80, 0x4dd3 bytes
    // netio.sys .text:0x1ac7c, 0x4e8c bytes
    // netio.sys .text:0x26e10, 0x4dd3 bytes
    //
    _y99(sdk::unknown_ptr) ptp_compare_partial_keys;
    
    // [PtpCreateTrieNode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22644, 0x4652 bytes
    // netio.sys .text:0x261b8, 0x4dd3 bytes
    // netio.sys .text:0x19e08, 0x4e8c bytes
    // netio.sys .text:0x26248, 0x4dd3 bytes
    //
    _z00(sdk::unknown_ptr) ptp_create_trie_node;
    
    // [PtpDoubleRotate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x227f8, 0x4652 bytes
    // netio.sys .text:0x263c0, 0x4dd3 bytes
    // netio.sys .text:0x19ff4, 0x4e8c bytes
    // netio.sys .text:0x26450, 0x4dd3 bytes
    //
    _z01(sdk::unknown_ptr) ptp_double_rotate;
    
    // [PtpSingleRotate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22788, 0x4652 bytes
    // netio.sys .text:0x264c4, 0x4dd3 bytes
    // netio.sys .text:0x1a0e4, 0x4e8c bytes
    // netio.sys .text:0x26554, 0x4dd3 bytes
    //
    _z02(sdk::unknown_ptr) ptp_single_rotate;
    
    // [PtpSwapWithSuccessor]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23f90, 0x4652 bytes
    // netio.sys .text:0x47c10, 0x4dd3 bytes
    // netio.sys .text:0x17630, 0x4e8c bytes
    // netio.sys .text:0x47bd0, 0x4dd3 bytes
    //
    _z03(sdk::unknown_ptr) ptp_swap_with_successor;
    
    // [PWFP_ADD_CACHE_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c420, 0x4652 bytes
    // netio.sys .text:0x26fb0, 0x4dd3 bytes
    // netio.sys .text:0x288b0, 0x4e8c bytes
    // netio.sys .text:0x27040, 0x4dd3 bytes
    //
    _z04(sdk::unknown_ptr) pwfp_add_cache_ioctl_decode;
    
    // [PWFP_ADD_INDEX_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2050, 0x4652 bytes
    // netio.sys .text:0x27030, 0x4dd3 bytes
    // netio.sys .text:0x1b460, 0x4e8c bytes
    // netio.sys .text:0x270c0, 0x4dd3 bytes
    //
    _z05(sdk::unknown_ptr) pwfp_add_index_ioctl_decode;
    
    // [PWFP_ADD_VPN_TRIGGER_APP_FILE_PATHS_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x439c0, 0x4652 bytes
    // netio.sys .text:0x4dfb0, 0x4dd3 bytes
    // netio.sys .text:0x4f7e0, 0x4e8c bytes
    // netio.sys .text:0x4df70, 0x4dd3 bytes
    //
    _z06(sdk::unknown_ptr) pwfp_add_vpn_trigger_app_file_paths_ioctl_decode;
    
    // [PWFP_ADD_VPN_TRIGGER_APP_SECURITY_DESCRIPTOR_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43a00, 0x4652 bytes
    // netio.sys .text:0x4dff0, 0x4dd3 bytes
    // netio.sys .text:0x4f820, 0x4e8c bytes
    // netio.sys .text:0x4dfb0, 0x4dd3 bytes
    //
    _z07(sdk::unknown_ptr) pwfp_add_vpn_trigger_app_security_descriptor_ioctl_decode;
    
    // [PWFP_ADD_VPN_TRIGGER_APP_SIDS_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43a40, 0x4652 bytes
    // netio.sys .text:0x4e030, 0x4dd3 bytes
    // netio.sys .text:0x4f860, 0x4e8c bytes
    // netio.sys .text:0x4dff0, 0x4dd3 bytes
    //
    _z08(sdk::unknown_ptr) pwfp_add_vpn_trigger_app_sids_ioctl_decode;
    
    // [PWFP_BATCH_UPDATE_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f60, 0x4652 bytes
    // netio.sys .text:0x1c4d0, 0x4dd3 bytes
    // netio.sys .text:0x22420, 0x4e8c bytes
    // netio.sys .text:0x1c560, 0x4dd3 bytes
    //
    _z09(sdk::unknown_ptr) pwfp_batch_update_ioctl_decode;
    
    // [PWFP_BEGIN_ENUM_FILTERS_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43a80, 0x4652 bytes
    // netio.sys .text:0x4e070, 0x4dd3 bytes
    // netio.sys .text:0x4f8a0, 0x4e8c bytes
    // netio.sys .text:0x4e030, 0x4dd3 bytes
    //
    _z10(sdk::unknown_ptr) pwfp_begin_enum_filters_ioctl_decode;
    
    // [PWFP_BOOTTIME_FILTER_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c460, 0x4652 bytes
    // netio.sys .text:0x26ff0, 0x4dd3 bytes
    // netio.sys .text:0x288f0, 0x4e8c bytes
    // netio.sys .text:0x27080, 0x4dd3 bytes
    //
    _z11(sdk::unknown_ptr) pwfp_boottime_filter_decode;
    
    // [PWFP_MOVE_FILTER_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43ac0, 0x4652 bytes
    // netio.sys .text:0x4e0b0, 0x4dd3 bytes
    // netio.sys .text:0x4f8e0, 0x4e8c bytes
    // netio.sys .text:0x4e070, 0x4dd3 bytes
    //
    _z12(sdk::unknown_ptr) pwfp_move_filter_ioctl_decode;
    
    // [PWFP_VPN_CONFIGURE_PARAMETERS_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43b00, 0x4652 bytes
    // netio.sys .text:0x4e0f0, 0x4dd3 bytes
    // netio.sys .text:0x4f920, 0x4e8c bytes
    // netio.sys .text:0x4e0b0, 0x4dd3 bytes
    //
    _z13(sdk::unknown_ptr) pwfp_vpn_configure_parameters_ioctl_decode;
    
    // [PWFP_VPN_NRPT_TRIGGER_INIT_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43b40, 0x4652 bytes
    // netio.sys .text:0x4e130, 0x4dd3 bytes
    // netio.sys .text:0x4f960, 0x4e8c bytes
    // netio.sys .text:0x4e0f0, 0x4dd3 bytes
    //
    _z14(sdk::unknown_ptr) pwfp_vpn_nrpt_trigger_init_ioctl_decode;
    
    // [PWFP_VPN_SET_DISCONNECT_STATE_IOCTL_Decode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43b80, 0x4652 bytes
    // netio.sys .text:0x4e170, 0x4dd3 bytes
    // netio.sys .text:0x4f9a0, 0x4e8c bytes
    // netio.sys .text:0x4e130, 0x4dd3 bytes
    //
    _z15(sdk::unknown_ptr) pwfp_vpn_set_disconnect_state_ioctl_decode;
    
    // [QoSClientDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57cb0, 0x4652 bytes
    // netio.sys .rdata:0x6cec0, 0x4dd3 bytes
    // netio.sys .rdata:0x6cd98, 0x4e8c bytes
    // netio.sys .rdata:0x6cec0, 0x4dd3 bytes
    //
    _z16(sdk::unknown_ptr) qo_s_client_dispatch;
    
    // [QoSClientHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a78, 0x4652 bytes
    // netio.sys .data:0x7aaa8, 0x4dd3 bytes
    // netio.sys .data:0x7bb48, 0x4e8c bytes
    // netio.sys .data:0x7aaa8, 0x4dd3 bytes
    //
    _z17(sdk::unknown_ptr) qo_s_client_handle;
    
    // [QoSClientNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x540a0, 0x4652 bytes
    // netio.sys .rdata:0x66240, 0x4dd3 bytes
    // netio.sys .rdata:0x661a0, 0x4e8c bytes
    // netio.sys .rdata:0x66240, 0x4dd3 bytes
    //
    _z18(sdk::unknown_ptr) qo_s_client_notify;
    
    // [QoSMrswLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a60, 0x4652 bytes
    // netio.sys .data:0x7aa90, 0x4dd3 bytes
    // netio.sys .data:0x7bb30, 0x4e8c bytes
    // netio.sys .data:0x7aa90, 0x4dd3 bytes
    //
    _z19(sdk::unknown_ptr) qo_s_mrsw_lock;
    
    // [QoSProviderContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a70, 0x4652 bytes
    // netio.sys .data:0x7aaa0, 0x4dd3 bytes
    // netio.sys .data:0x7bb40, 0x4e8c bytes
    // netio.sys .data:0x7aaa0, 0x4dd3 bytes
    //
    _z20(sdk::unknown_ptr) qo_s_provider_context;
    
    // [QoSProviderReference]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61a58, 0x4652 bytes
    // netio.sys .data:0x7aa84, 0x4dd3 bytes
    // netio.sys .data:0x7bb24, 0x4e8c bytes
    // netio.sys .data:0x7aa84, 0x4dd3 bytes
    //
    _z21(sdk::unknown_ptr) qo_s_provider_reference;
    
    // [QoScStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d200, 0x4652 bytes
    // netio.sys .text:0x29120, 0x4dd3 bytes
    // netio.sys .text:0x265e0, 0x4e8c bytes
    // netio.sys .text:0x291b0, 0x4dd3 bytes
    //
    _z22(sdk::unknown_ptr) qo_sc_start_module;
    
    // [QoScStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37060, 0x4652 bytes
    // netio.sys .text:0x3cf90, 0x4dd3 bytes
    // netio.sys .text:0x3e470, 0x4e8c bytes
    // netio.sys .text:0x3cf50, 0x4dd3 bytes
    //
    _z23(sdk::unknown_ptr) qo_sc_stop_module;
    
    // [QosDereference]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37094, 0x4652 bytes
    // netio.sys .text:0x3cfe4, 0x4dd3 bytes
    // netio.sys .text:0x3e4c4, 0x4e8c bytes
    // netio.sys .text:0x3cfa4, 0x4dd3 bytes
    //
    _z24(sdk::unknown_ptr) qos_dereference;
    
    // [QosReference]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a074, 0x4652 bytes
    // netio.sys .text:0x3d03c, 0x4dd3 bytes
    // netio.sys .text:0x3e51c, 0x4e8c bytes
    // netio.sys .text:0x3cffc, 0x4dd3 bytes
    //
    _z25(sdk::unknown_ptr) qos_reference;
    
    // [QospDereferenceContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a0c8, 0x4652 bytes
    // netio.sys .text:0x3d094, 0x4dd3 bytes
    // netio.sys .text:0x3e574, 0x4e8c bytes
    // netio.sys .text:0x3d054, 0x4dd3 bytes
    //
    _z26(sdk::unknown_ptr) qosp_dereference_context;
    
    // [release_HF_handle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37c80, 0x4652 bytes
    // netio.sys .text:0x3e050, 0x4dd3 bytes
    // netio.sys .text:0x3f514, 0x4e8c bytes
    // netio.sys .text:0x3e010, 0x4dd3 bytes
    //
    _z27(sdk::unknown_ptr) release_hf_handle;
    
    // [RemoveFilterFromFilterHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x484ac, 0x4652 bytes
    // netio.sys .text:0x528cc, 0x4dd3 bytes
    // netio.sys .text:0x53bd4, 0x4e8c bytes
    // netio.sys .text:0x5288c, 0x4dd3 bytes
    //
    _z28(sdk::unknown_ptr) remove_filter_from_filter_hashtable;
    
    // [ResolveIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c180, 0x4652 bytes
    // netio.sys .text:0x42bc0, 0x4dd3 bytes
    // netio.sys .text:0x44090, 0x4e8c bytes
    // netio.sys .text:0x42b80, 0x4dd3 bytes
    //
    _z29(sdk::unknown_ptr) resolve_ip_net_entry2;
    
    // [revoke_ancient_HF_handles]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x37dcc, 0x4652 bytes
    // netio.sys .text:0x3e1a0, 0x4dd3 bytes
    // netio.sys .text:0x3f664, 0x4e8c bytes
    // netio.sys .text:0x3e160, 0x4dd3 bytes
    //
    _z30(sdk::unknown_ptr) revoke_ancient_hf_handles;
    
    // [RmpStartModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d340, 0x4652 bytes
    // netio.sys .text:0x28e60, 0x4dd3 bytes
    // netio.sys .text:0x29d10, 0x4e8c bytes
    // netio.sys .text:0x28ef0, 0x4dd3 bytes
    //
    _z31(sdk::unknown_ptr) rmp_start_module;
    
    // [RmpStopModule]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x382a0, 0x4652 bytes
    // netio.sys .text:0x3e760, 0x4dd3 bytes
    // netio.sys .text:0x3fbf0, 0x4e8c bytes
    // netio.sys .text:0x3e720, 0x4dd3 bytes
    //
    _z32(sdk::unknown_ptr) rmp_stop_module;
    
    // [RoReferenceEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15ed0, 0x4652 bytes
    // netio.sys .text:0x1c424, 0x4dd3 bytes
    // netio.sys .text:0x13db8, 0x4e8c bytes
    // netio.sys .text:0x1c4b4, 0x4dd3 bytes
    //
    _z33(sdk::unknown_ptr) ro_reference_ex;
    
    // [RollbackBatchAdds]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41bdc, 0x4652 bytes
    // netio.sys .text:0x4bca8, 0x4dd3 bytes
    // netio.sys .text:0x4d1a0, 0x4e8c bytes
    // netio.sys .text:0x4bc68, 0x4dd3 bytes
    //
    _z34(sdk::unknown_ptr) rollback_batch_adds;
    
    // [SetBlobRangeBySize]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47b98, 0x4652 bytes
    // netio.sys .text:0x53d04, 0x4dd3 bytes
    // netio.sys .text:0x548a8, 0x4e8c bytes
    // netio.sys .text:0x53cc4, 0x4dd3 bytes
    //
    _z35(sdk::unknown_ptr) set_blob_range_by_size;
    
    // [SetByteBlobRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47c80, 0x4652 bytes
    // netio.sys .text:0x53dd8, 0x4dd3 bytes
    // netio.sys .text:0x5497c, 0x4e8c bytes
    // netio.sys .text:0x53d98, 0x4dd3 bytes
    //
    _z36(sdk::unknown_ptr) set_byte_blob_range;
    
    // [SetIpForwardEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3b620, 0x4652 bytes
    // netio.sys .text:0x41f50, 0x4dd3 bytes
    // netio.sys .text:0x43450, 0x4e8c bytes
    // netio.sys .text:0x41f10, 0x4dd3 bytes
    //
    _z37(sdk::unknown_ptr) set_ip_forward_entry2;
    
    // [SetIpInterfaceEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d610, 0x4652 bytes
    // netio.sys .text:0x44c80, 0x4dd3 bytes
    // netio.sys .text:0x463a0, 0x4e8c bytes
    // netio.sys .text:0x44c40, 0x4dd3 bytes
    //
    _z38(sdk::unknown_ptr) set_ip_interface_entry;
    
    // [SetIpNetEntry2]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3c360, 0x4652 bytes
    // netio.sys .text:0x42db0, 0x4dd3 bytes
    // netio.sys .text:0x44270, 0x4e8c bytes
    // netio.sys .text:0x42d70, 0x4dd3 bytes
    //
    _z39(sdk::unknown_ptr) set_ip_net_entry2;
    
    // [SetPendingAdds]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1d78, 0x4652 bytes
    // netio.sys .text:0x29b4, 0x4dd3 bytes
    // netio.sys .text:0x1f990, 0x4e8c bytes
    // netio.sys .text:0x29b4, 0x4dd3 bytes
    //
    _z40(sdk::unknown_ptr) set_pending_adds;
    
    // [SetRange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x17ac, 0x4652 bytes
    // netio.sys .text:0x1afc, 0x4dd3 bytes
    // netio.sys .text:0x1b140, 0x4e8c bytes
    // netio.sys .text:0x1afc, 0x4dd3 bytes
    //
    _z41(sdk::unknown_ptr) set_range;
    
    // [SetRangeEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47db4, 0x4652 bytes
    // netio.sys .text:0x53f0c, 0x4dd3 bytes
    // netio.sys .text:0x54aac, 0x4e8c bytes
    // netio.sys .text:0x53ecc, 0x4dd3 bytes
    //
    _z42(sdk::unknown_ptr) set_range_entry;
    
    // [SetUnicastIpAddressEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3a7c0, 0x4652 bytes
    // netio.sys .text:0x40ff0, 0x4dd3 bytes
    // netio.sys .text:0x424c0, 0x4e8c bytes
    // netio.sys .text:0x40fb0, 0x4dd3 bytes
    //
    _z43(sdk::unknown_ptr) set_unicast_ip_address_entry;
    
    // [SetWfpDeviceObject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23560, 0x4652 bytes
    // netio.sys .text:0x26540, 0x4dd3 bytes
    // netio.sys .text:0x250f0, 0x4e8c bytes
    // netio.sys .text:0x265d0, 0x4dd3 bytes
    //
    _z44(sdk::unknown_ptr) set_wfp_device_object;
    
    // [SignificantBitsToMask]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59590, 0x4652 bytes
    // netio.sys .rdata:0x6eaa0, 0x4dd3 bytes
    // netio.sys .rdata:0x70f60, 0x4e8c bytes
    // netio.sys .rdata:0x6eaa0, 0x4dd3 bytes
    //
    _z45(sdk::unknown_ptr) significant_bits_to_mask;
    
    // [SortMatchList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x9024, 0x4652 bytes
    // netio.sys .text:0x6594, 0x4dd3 bytes
    // netio.sys .text:0xbff8, 0x4e8c bytes
    // netio.sys .text:0x6644, 0x4dd3 bytes
    //
    _z46(sdk::unknown_ptr) sort_match_list;
    
    // [StreamAbsorbData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a404, 0x4652 bytes
    // netio.sys .text:0x585c0, 0x4dd3 bytes
    // netio.sys .text:0x58020, 0x4e8c bytes
    // netio.sys .text:0x58580, 0x4dd3 bytes
    //
    _z47(sdk::unknown_ptr) stream_absorb_data;
    
    // [StreamAccumulateData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a58c, 0x4652 bytes
    // netio.sys .text:0x5874c, 0x4dd3 bytes
    // netio.sys .text:0x581ac, 0x4e8c bytes
    // netio.sys .text:0x5870c, 0x4dd3 bytes
    //
    _z48(sdk::unknown_ptr) stream_accumulate_data;
    
    // [StreamAllocateNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10944, 0x4652 bytes
    // netio.sys .text:0x57e8, 0x4dd3 bytes
    // netio.sys .text:0x3ce4, 0x4e8c bytes
    // netio.sys .text:0x5858, 0x4dd3 bytes
    //
    _z49(sdk::unknown_ptr) stream_allocate_net_buffer_list;
    
    // [StreamApplyCalloutActionToData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a794, 0x4652 bytes
    // netio.sys .text:0x58960, 0x4dd3 bytes
    // netio.sys .text:0x583cc, 0x4e8c bytes
    // netio.sys .text:0x58920, 0x4dd3 bytes
    //
    _z50(sdk::unknown_ptr) stream_apply_callout_action_to_data;
    
    // [StreamBuildEmptyNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10b2c, 0x4652 bytes
    // netio.sys .text:0x56fc, 0x4dd3 bytes
    // netio.sys .text:0x22ae0, 0x4e8c bytes
    // netio.sys .text:0x576c, 0x4dd3 bytes
    //
    _z51(sdk::unknown_ptr) stream_build_empty_net_buffer_list;
    
    // [StreamBuildInspectionCallContxt]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x109f8, 0x4652 bytes
    // netio.sys .text:0x54f0, 0x4dd3 bytes
    // netio.sys .text:0x3d60, 0x4e8c bytes
    // netio.sys .text:0x5560, 0x4dd3 bytes
    //
    _z52(sdk::unknown_ptr) stream_build_inspection_call_contxt;
    
    // [StreamCheckAndMarkEof]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a8f0, 0x4652 bytes
    // netio.sys .text:0x58ac8, 0x4dd3 bytes
    // netio.sys .text:0x58534, 0x4e8c bytes
    // netio.sys .text:0x58a88, 0x4dd3 bytes
    //
    _z53(sdk::unknown_ptr) stream_check_and_mark_eof;
    
    // [StreamClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x9504, 0x4652 bytes
    // netio.sys .text:0x7560, 0x4dd3 bytes
    // netio.sys .text:0x49cc, 0x4e8c bytes
    // netio.sys .text:0x7610, 0x4dd3 bytes
    //
    _z54(sdk::unknown_ptr) stream_classify;
    
    // [streamClassifySequenceIdSeed]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61cb0, 0x4652 bytes
    // netio.sys .data:0x7af80, 0x4dd3 bytes
    // netio.sys .data:0x7be38, 0x4e8c bytes
    // netio.sys .data:0x7af80, 0x4dd3 bytes
    //
    _z55(sdk::unknown_ptr) stream_classify_sequence_id_seed;
    
    // [StreamCloseDataContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a91c, 0x4652 bytes
    // netio.sys .text:0x58afc, 0x4dd3 bytes
    // netio.sys .text:0x58568, 0x4e8c bytes
    // netio.sys .text:0x58abc, 0x4dd3 bytes
    //
    _z56(sdk::unknown_ptr) stream_close_data_context;
    
    // [StreamCommonInspect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x9180, 0x4652 bytes
    // netio.sys .text:0x7188, 0x4dd3 bytes
    // netio.sys .text:0x4608, 0x4e8c bytes
    // netio.sys .text:0x7238, 0x4dd3 bytes
    //
    _z57(sdk::unknown_ptr) stream_common_inspect;
    
    // [StreamCompleteData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48eb4, 0x4652 bytes
    // netio.sys .text:0x56a3c, 0x4dd3 bytes
    // netio.sys .text:0x2ba00, 0x4e8c bytes
    // netio.sys .text:0x569fc, 0x4dd3 bytes
    //
    _z58(sdk::unknown_ptr) stream_complete_data;
    
    // [StreamConvertDisconnectRequestToNetBufferList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x102d0, 0x4652 bytes
    // netio.sys .text:0x55f4, 0x4dd3 bytes
    // netio.sys .text:0x37cc, 0x4e8c bytes
    // netio.sys .text:0x5664, 0x4dd3 bytes
    //
    _z59(sdk::unknown_ptr) stream_convert_disconnect_request_to_net_buffer_list;
    
    // [StreamCopyFilterConditions]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6350, 0x4652 bytes
    // netio.sys .text:0xeb34, 0x4dd3 bytes
    // netio.sys .text:0xc5f8, 0x4e8c bytes
    // netio.sys .text:0xebe4, 0x4dd3 bytes
    //
    _z60(sdk::unknown_ptr) stream_copy_filter_conditions;
    
    // [StreamDataAdvanceToDataStart]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d6b8, 0x4652 bytes
    // netio.sys .text:0x5bc8c, 0x4dd3 bytes
    // netio.sys .text:0x5b428, 0x4e8c bytes
    // netio.sys .text:0x5bc4c, 0x4dd3 bytes
    //
    _z61(sdk::unknown_ptr) stream_data_advance_to_data_start;
    
    // [StreamDataBlock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24b48, 0x4652 bytes
    // netio.sys .text:0x5bdf0, 0x4dd3 bytes
    // netio.sys .text:0x5b590, 0x4e8c bytes
    // netio.sys .text:0x5bdb0, 0x4dd3 bytes
    //
    _z62(sdk::unknown_ptr) stream_data_block;
    
    // [StreamDataBlockEndOfStream]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d810, 0x4652 bytes
    // netio.sys .text:0x5c034, 0x4dd3 bytes
    // netio.sys .text:0x5b7f8, 0x4e8c bytes
    // netio.sys .text:0x5bff4, 0x4dd3 bytes
    //
    _z63(sdk::unknown_ptr) stream_data_block_end_of_stream;
    
    // [StreamDataCat]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d890, 0x4652 bytes
    // netio.sys .text:0x5c0bc, 0x4dd3 bytes
    // netio.sys .text:0x5b880, 0x4e8c bytes
    // netio.sys .text:0x5c07c, 0x4dd3 bytes
    //
    _z64(sdk::unknown_ptr) stream_data_cat;
    
    // [StreamDataClose]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4da9c, 0x4652 bytes
    // netio.sys .text:0x5c2f4, 0x4dd3 bytes
    // netio.sys .text:0x5ba94, 0x4e8c bytes
    // netio.sys .text:0x5c2b4, 0x4dd3 bytes
    //
    _z65(sdk::unknown_ptr) stream_data_close;
    
    // [StreamDataCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4daf8, 0x4652 bytes
    // netio.sys .text:0x5c354, 0x4dd3 bytes
    // netio.sys .text:0x5baf4, 0x4e8c bytes
    // netio.sys .text:0x5c314, 0x4dd3 bytes
    //
    _z66(sdk::unknown_ptr) stream_data_create;
    
    // [StreamDataFromExternalNblChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4aaac, 0x4652 bytes
    // netio.sys .text:0x58cc8, 0x4dd3 bytes
    // netio.sys .text:0x586d8, 0x4e8c bytes
    // netio.sys .text:0x58c88, 0x4dd3 bytes
    //
    _z67(sdk::unknown_ptr) stream_data_from_external_nbl_chain;
    
    // [StreamDataInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4db4c, 0x4652 bytes
    // netio.sys .text:0x5c3b0, 0x4dd3 bytes
    // netio.sys .text:0x2bd20, 0x4e8c bytes
    // netio.sys .text:0x5c370, 0x4dd3 bytes
    //
    _z68(sdk::unknown_ptr) stream_data_init;
    
    // [StreamDataInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4dc54, 0x4652 bytes
    // netio.sys .text:0x5c4c0, 0x4dd3 bytes
    // netio.sys .text:0x5bb50, 0x4e8c bytes
    // netio.sys .text:0x5c480, 0x4dd3 bytes
    //
    _z69(sdk::unknown_ptr) stream_data_inject;
    
    // [StreamDataPermit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xe6bc, 0x4652 bytes
    // netio.sys .text:0xddb0, 0x4dd3 bytes
    // netio.sys .text:0xab44, 0x4e8c bytes
    // netio.sys .text:0xde60, 0x4dd3 bytes
    //
    _z70(sdk::unknown_ptr) stream_data_permit;
    
    // [StreamDataPermitEndOfStream]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf410, 0x4652 bytes
    // netio.sys .text:0xee80, 0x4dd3 bytes
    // netio.sys .text:0xae18, 0x4e8c bytes
    // netio.sys .text:0xef30, 0x4dd3 bytes
    //
    _z71(sdk::unknown_ptr) stream_data_permit_end_of_stream;
    
    // [StreamDataReInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4dfc0, 0x4652 bytes
    // netio.sys .text:0x5c830, 0x4dd3 bytes
    // netio.sys .text:0x5bec0, 0x4e8c bytes
    // netio.sys .text:0x5c7f0, 0x4dd3 bytes
    //
    _z72(sdk::unknown_ptr) stream_data_re_init;
    
    // [StreamDataTruncateAfterDataLength]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e080, 0x4652 bytes
    // netio.sys .text:0x5c900, 0x4dd3 bytes
    // netio.sys .text:0x5bf90, 0x4e8c bytes
    // netio.sys .text:0x5c8c0, 0x4dd3 bytes
    //
    _z73(sdk::unknown_ptr) stream_data_truncate_after_data_length;
    
    // [StreamDatapAdvancePastOffset]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e1d0, 0x4652 bytes
    // netio.sys .text:0x5ca68, 0x4dd3 bytes
    // netio.sys .text:0x5c0fc, 0x4e8c bytes
    // netio.sys .text:0x5ca28, 0x4dd3 bytes
    //
    _z74(sdk::unknown_ptr) stream_datap_advance_past_offset;
    
    // [StreamDatapCoalesce]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e22c, 0x4652 bytes
    // netio.sys .text:0x5cac8, 0x4dd3 bytes
    // netio.sys .text:0x5c15c, 0x4e8c bytes
    // netio.sys .text:0x5ca88, 0x4dd3 bytes
    //
    _z75(sdk::unknown_ptr) stream_datap_coalesce;
    
    // [StreamDatapInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e3e4, 0x4652 bytes
    // netio.sys .text:0x5cc9c, 0x4dd3 bytes
    // netio.sys .text:0x5c334, 0x4e8c bytes
    // netio.sys .text:0x5cc5c, 0x4dd3 bytes
    //
    _z76(sdk::unknown_ptr) stream_datap_inject;
    
    // [StreamDatapSeekToOffset]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15cd0, 0x4652 bytes
    // netio.sys .text:0x5ced8, 0x4dd3 bytes
    // netio.sys .text:0x5c570, 0x4e8c bytes
    // netio.sys .text:0x5ce98, 0x4dd3 bytes
    //
    _z77(sdk::unknown_ptr) stream_datap_seek_to_offset;
    
    // [StreamDatapTrimOffLeadingUnusedNbls]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e610, 0x4652 bytes
    // netio.sys .text:0x5cf44, 0x4dd3 bytes
    // netio.sys .text:0x5c5dc, 0x4e8c bytes
    // netio.sys .text:0x5cf04, 0x4dd3 bytes
    //
    _z78(sdk::unknown_ptr) stream_datap_trim_off_leading_unused_nbls;
    
    // [StreamDatapTruncateAfterOffset]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e6f8, 0x4652 bytes
    // netio.sys .text:0x5d040, 0x4dd3 bytes
    // netio.sys .text:0x5c6d8, 0x4e8c bytes
    // netio.sys .text:0x5d000, 0x4dd3 bytes
    //
    _z79(sdk::unknown_ptr) stream_datap_truncate_after_offset;
    
    // [StreamDerefCalloutContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ab84, 0x4652 bytes
    // netio.sys .text:0x58db4, 0x4dd3 bytes
    // netio.sys .text:0xdd0c, 0x4e8c bytes
    // netio.sys .text:0x58d74, 0x4dd3 bytes
    //
    _z80(sdk::unknown_ptr) stream_deref_callout_context;
    
    // [StreamDerefNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f044, 0x4652 bytes
    // netio.sys .text:0x5da10, 0x4dd3 bytes
    // netio.sys .text:0x5d0a4, 0x4e8c bytes
    // netio.sys .text:0x5d9d0, 0x4dd3 bytes
    //
    _z81(sdk::unknown_ptr) stream_deref_net_buffer_list_chain;
    
    // [StreamDropConnection]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4abc8, 0x4652 bytes
    // netio.sys .text:0x58e00, 0x4dd3 bytes
    // netio.sys .text:0x587c4, 0x4e8c bytes
    // netio.sys .text:0x58dc0, 0x4dd3 bytes
    //
    _z82(sdk::unknown_ptr) stream_drop_connection;
    
    // [StreamDropConnectionDpc]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ac30, 0x4652 bytes
    // netio.sys .text:0x58e80, 0x4dd3 bytes
    // netio.sys .text:0x58840, 0x4e8c bytes
    // netio.sys .text:0x58e40, 0x4dd3 bytes
    //
    _z83(sdk::unknown_ptr) stream_drop_connection_dpc;
    
    // [StreamEmptyNetBufferListCompletionFn]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10af0, 0x4652 bytes
    // netio.sys .text:0x1c400, 0x4dd3 bytes
    // netio.sys .text:0x22b90, 0x4e8c bytes
    // netio.sys .text:0x1c490, 0x4dd3 bytes
    //
    _z84(sdk::unknown_ptr) stream_empty_net_buffer_list_completion_fn;
    
    // [StreamFillFixedValuesV6]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf2fc, 0x4652 bytes
    // netio.sys .text:0x5000, 0x4dd3 bytes
    // netio.sys .text:0x3dc4, 0x4e8c bytes
    // netio.sys .text:0x5010, 0x4dd3 bytes
    //
    _z85(sdk::unknown_ptr) stream_fill_fixed_values_v6;
    
    // [StreamFlagsToDataType]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48fc0, 0x4652 bytes
    // netio.sys .text:0x56b50, 0x4dd3 bytes
    // netio.sys .text:0x5668c, 0x4e8c bytes
    // netio.sys .text:0x56b10, 0x4dd3 bytes
    //
    _z86(sdk::unknown_ptr) stream_flags_to_data_type;
    
    // [StreamGetClassifyDataFromCalloutContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4adbc, 0x4652 bytes
    // netio.sys .text:0x59024, 0x4dd3 bytes
    // netio.sys .text:0x589c8, 0x4e8c bytes
    // netio.sys .text:0x58fe4, 0x4dd3 bytes
    //
    _z87(sdk::unknown_ptr) stream_get_classify_data_from_callout_context;
    
    // [StreamGetDpcQueue]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48fe0, 0x4652 bytes
    // netio.sys .text:0x56b74, 0x4dd3 bytes
    // netio.sys .text:0x566b0, 0x4e8c bytes
    // netio.sys .text:0x56b34, 0x4dd3 bytes
    //
    _z88(sdk::unknown_ptr) stream_get_dpc_queue;
    
    // [StreamHandleDataAfterEof]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ae14, 0x4652 bytes
    // netio.sys .text:0x59084, 0x4dd3 bytes
    // netio.sys .text:0x58a28, 0x4e8c bytes
    // netio.sys .text:0x59044, 0x4dd3 bytes
    //
    _z89(sdk::unknown_ptr) stream_handle_data_after_eof;
    
    // [StreamHandleDataClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xe544, 0x4652 bytes
    // netio.sys .text:0xdc1c, 0x4dd3 bytes
    // netio.sys .text:0xa9a4, 0x4e8c bytes
    // netio.sys .text:0xdccc, 0x4dd3 bytes
    //
    _z90(sdk::unknown_ptr) stream_handle_data_classify;
    
    // [StreamHandleDatalessClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ae94, 0x4652 bytes
    // netio.sys .text:0x59108, 0x4dd3 bytes
    // netio.sys .text:0x58aac, 0x4e8c bytes
    // netio.sys .text:0x590c8, 0x4dd3 bytes
    //
    _z91(sdk::unknown_ptr) stream_handle_dataless_classify;
    
    // [StreamHandleNeedMoreData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4b15c, 0x4652 bytes
    // netio.sys .text:0x59424, 0x4dd3 bytes
    // netio.sys .text:0x58dcc, 0x4e8c bytes
    // netio.sys .text:0x593e4, 0x4dd3 bytes
    //
    _z92(sdk::unknown_ptr) stream_handle_need_more_data;
    
    // [StreamHandleStreamAction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4b460, 0x4652 bytes
    // netio.sys .text:0x59774, 0x4dd3 bytes
    // netio.sys .text:0x5911c, 0x4e8c bytes
    // netio.sys .text:0x59734, 0x4dd3 bytes
    //
    _z93(sdk::unknown_ptr) stream_handle_stream_action;
    
    // [StreamInitDisconnectRequestContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1099c, 0x4652 bytes
    // netio.sys .text:0x52a4, 0x4dd3 bytes
    // netio.sys .text:0x35d4, 0x4e8c bytes
    // netio.sys .text:0x52b4, 0x4dd3 bytes
    //
    _z94(sdk::unknown_ptr) stream_init_disconnect_request_context;
    
    // [StreamInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4b514, 0x4652 bytes
    // netio.sys .text:0x5982c, 0x4dd3 bytes
    // netio.sys .text:0x591d4, 0x4e8c bytes
    // netio.sys .text:0x597ec, 0x4dd3 bytes
    //
    _z95(sdk::unknown_ptr) stream_inject;
    
    // [StreamInjectReceiveToStack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x490b4, 0x4652 bytes
    // netio.sys .text:0x56c7c, 0x4dd3 bytes
    // netio.sys .text:0x567ac, 0x4e8c bytes
    // netio.sys .text:0x56c3c, 0x4dd3 bytes
    //
    _z96(sdk::unknown_ptr) stream_inject_receive_to_stack;
    
    // [StreamInjectRequestsToStack]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49230, 0x4652 bytes
    // netio.sys .text:0x56e00, 0x4dd3 bytes
    // netio.sys .text:0x56930, 0x4e8c bytes
    // netio.sys .text:0x56dc0, 0x4dd3 bytes
    //
    _z97(sdk::unknown_ptr) stream_inject_requests_to_stack;
    
    // [StreamInjectStagedData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4b8d8, 0x4652 bytes
    // netio.sys .text:0x59c74, 0x4dd3 bytes
    // netio.sys .text:0x59624, 0x4e8c bytes
    // netio.sys .text:0x59c34, 0x4dd3 bytes
    //
    _z98(sdk::unknown_ptr) stream_inject_staged_data;
    
    // [StreamInspectActionToString]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49538, 0x4652 bytes
    // netio.sys .text:0x5710c, 0x4dd3 bytes
    // netio.sys .text:0x56c3c, 0x4e8c bytes
    // netio.sys .text:0x570cc, 0x4dd3 bytes
    //
    _z99(sdk::unknown_ptr) stream_inspect_action_to_string;
    
    // [StreamInternalBlockData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4bb20, 0x4652 bytes
    // netio.sys .text:0x59ef0, 0x4dd3 bytes
    // netio.sys .text:0x59864, 0x4e8c bytes
    // netio.sys .text:0x59eb0, 0x4dd3 bytes
    //
    _a00(sdk::unknown_ptr) stream_internal_block_data;
    
    // [StreamInternalClassify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4bb7c, 0x4652 bytes
    // netio.sys .text:0x59f54, 0x4dd3 bytes
    // netio.sys .text:0x598c8, 0x4e8c bytes
    // netio.sys .text:0x59f14, 0x4dd3 bytes
    //
    _a01(sdk::unknown_ptr) stream_internal_classify;
    
    // [StreamInvokeCalloutAndNormalizeAction]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xe7e4, 0x4652 bytes
    // netio.sys .text:0xd6e8, 0x4dd3 bytes
    // netio.sys .text:0xa450, 0x4e8c bytes
    // netio.sys .text:0xd798, 0x4dd3 bytes
    //
    _a02(sdk::unknown_ptr) stream_invoke_callout_and_normalize_action;
    
    // [StreamIsFilterPresent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xeca4, 0x4652 bytes
    // netio.sys .text:0x50a8, 0x4dd3 bytes
    // netio.sys .text:0x2da4, 0x4e8c bytes
    // netio.sys .text:0x50b8, 0x4dd3 bytes
    //
    _a03(sdk::unknown_ptr) stream_is_filter_present;
    
    // [StreamIsFilterPresentV6]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf20c, 0x4652 bytes
    // netio.sys .text:0x51ac, 0x4dd3 bytes
    // netio.sys .text:0x2e98, 0x4e8c bytes
    // netio.sys .text:0x51bc, 0x4dd3 bytes
    //
    _a04(sdk::unknown_ptr) stream_is_filter_present_v6;
    
    // [StreamLiveInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4bdd4, 0x4652 bytes
    // netio.sys .text:0x5a1c8, 0x4dd3 bytes
    // netio.sys .text:0x2bb98, 0x4e8c bytes
    // netio.sys .text:0x5a188, 0x4dd3 bytes
    //
    _a05(sdk::unknown_ptr) stream_live_inject;
    
    // [StreamNormalizeClassifyOut]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xeb64, 0x4652 bytes
    // netio.sys .text:0xd9ec, 0x4dd3 bytes
    // netio.sys .text:0xa768, 0x4e8c bytes
    // netio.sys .text:0xda9c, 0x4dd3 bytes
    //
    _a06(sdk::unknown_ptr) stream_normalize_classify_out;
    
    // [StreamPauseFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4bf70, 0x4652 bytes
    // netio.sys .text:0x5a37c, 0x4dd3 bytes
    // netio.sys .text:0x59b1c, 0x4e8c bytes
    // netio.sys .text:0x5a33c, 0x4dd3 bytes
    //
    _a07(sdk::unknown_ptr) stream_pause_flow;
    
    // [StreamPendInspection]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24924, 0x4652 bytes
    // netio.sys .text:0x57138, 0x4dd3 bytes
    // netio.sys .text:0x56c68, 0x4e8c bytes
    // netio.sys .text:0x570f8, 0x4dd3 bytes
    //
    _a08(sdk::unknown_ptr) stream_pend_inspection;
    
    // [StreamPermitData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24764, 0x4652 bytes
    // netio.sys .text:0x5742c, 0x4dd3 bytes
    // netio.sys .text:0x56f44, 0x4e8c bytes
    // netio.sys .text:0x573ec, 0x4dd3 bytes
    //
    _a09(sdk::unknown_ptr) stream_permit_data;
    
    // [StreamPermitDataHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4955c, 0x4652 bytes
    // netio.sys .text:0x57650, 0x4dd3 bytes
    // netio.sys .text:0x57168, 0x4e8c bytes
    // netio.sys .text:0x57610, 0x4dd3 bytes
    //
    _a10(sdk::unknown_ptr) stream_permit_data_helper;
    
    // [StreamPermitRemoveDataWorkerRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49610, 0x4652 bytes
    // netio.sys .text:0x57700, 0x4dd3 bytes
    // netio.sys .text:0x57220, 0x4e8c bytes
    // netio.sys .text:0x576c0, 0x4dd3 bytes
    //
    _a11(sdk::unknown_ptr) stream_permit_remove_data_worker_routine;
    
    // [StreamPoolsInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x218e0, 0x4652 bytes
    // netio.sys .text:0x23bf8, 0x4dd3 bytes
    // netio.sys .text:0x281f8, 0x4e8c bytes
    // netio.sys .text:0x23c88, 0x4dd3 bytes
    //
    _a12(sdk::unknown_ptr) stream_pools_init;
    
    // [StreamPoolsLifecycleHandler]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21680, 0x4652 bytes
    // netio.sys .text:0x2394c, 0x4dd3 bytes
    // netio.sys .text:0x27f5c, 0x4e8c bytes
    // netio.sys .text:0x239dc, 0x4dd3 bytes
    //
    _a13(sdk::unknown_ptr) stream_pools_lifecycle_handler;
    
    // [StreamPoolsShutdown]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ed00, 0x4652 bytes
    // netio.sys .text:0x5d6a0, 0x4dd3 bytes
    // netio.sys .text:0x5cd38, 0x4e8c bytes
    // netio.sys .text:0x5d660, 0x4dd3 bytes
    //
    _a14(sdk::unknown_ptr) stream_pools_shutdown;
    
    // [StreamProcessCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xdd6c, 0x4652 bytes
    // netio.sys .text:0xd05c, 0x4dd3 bytes
    // netio.sys .text:0x9de8, 0x4e8c bytes
    // netio.sys .text:0xd10c, 0x4dd3 bytes
    //
    _a15(sdk::unknown_ptr) stream_process_callout;
    
    // [StreamQueueWorkItem]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15d38, 0x4652 bytes
    // netio.sys .text:0x5da64, 0x4dd3 bytes
    // netio.sys .text:0x5d0f8, 0x4e8c bytes
    // netio.sys .text:0x5da24, 0x4dd3 bytes
    //
    _a16(sdk::unknown_ptr) stream_queue_work_item;
    
    // [StreamRemoveDataHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49844, 0x4652 bytes
    // netio.sys .text:0x579e0, 0x4dd3 bytes
    // netio.sys .text:0x574c4, 0x4e8c bytes
    // netio.sys .text:0x579a0, 0x4dd3 bytes
    //
    _a17(sdk::unknown_ptr) stream_remove_data_helper;
    
    // [StreamRequestInjectCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x25030, 0x4652 bytes
    // netio.sys .text:0x57a70, 0x4dd3 bytes
    // netio.sys .text:0x2bb20, 0x4e8c bytes
    // netio.sys .text:0x57a30, 0x4dd3 bytes
    //
    _a18(sdk::unknown_ptr) stream_request_inject_callback;
    
    // [StreamRequestNetBufferListCompletionFn]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8940, 0x4652 bytes
    // netio.sys .text:0x1bf60, 0x4dd3 bytes
    // netio.sys .text:0x13a50, 0x4e8c bytes
    // netio.sys .text:0x1bff0, 0x4dd3 bytes
    //
    _a19(sdk::unknown_ptr) stream_request_net_buffer_list_completion_fn;
    
    // [StreamResume]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c160, 0x4652 bytes
    // netio.sys .text:0x5a5b4, 0x4dd3 bytes
    // netio.sys .text:0x59d54, 0x4e8c bytes
    // netio.sys .text:0x5a574, 0x4dd3 bytes
    //
    _a20(sdk::unknown_ptr) stream_resume;
    
    // [StreamStaticInject]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c550, 0x4652 bytes
    // netio.sys .text:0x5aa2c, 0x4dd3 bytes
    // netio.sys .text:0x5a1cc, 0x4e8c bytes
    // netio.sys .text:0x5a9ec, 0x4dd3 bytes
    //
    _a21(sdk::unknown_ptr) stream_static_inject;
    
    // [StreamTraceMdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4eda0, 0x4652 bytes
    // netio.sys .text:0x5d75c, 0x4dd3 bytes
    // netio.sys .text:0x5cdf4, 0x4e8c bytes
    // netio.sys .text:0x5d71c, 0x4dd3 bytes
    //
    _a22(sdk::unknown_ptr) stream_trace_mdl;
    
    // [StreamTraceNetBufferListChain]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ef1c, 0x4652 bytes
    // netio.sys .text:0x5d8e4, 0x4dd3 bytes
    // netio.sys .text:0x5cf78, 0x4e8c bytes
    // netio.sys .text:0x5d8a4, 0x4dd3 bytes
    //
    _a23(sdk::unknown_ptr) stream_trace_net_buffer_list_chain;
    
    // [StreamTrimZeroLengthNbl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x498cc, 0x4652 bytes
    // netio.sys .text:0x57ae8, 0x4dd3 bytes
    // netio.sys .text:0x57550, 0x4e8c bytes
    // netio.sys .text:0x57aa8, 0x4dd3 bytes
    //
    _a24(sdk::unknown_ptr) stream_trim_zero_length_nbl;
    
    // [StreamUnpublishClassifyData]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xe404, 0x4652 bytes
    // netio.sys .text:0xdac8, 0x4dd3 bytes
    // netio.sys .text:0xa840, 0x4e8c bytes
    // netio.sys .text:0xdb78, 0x4dd3 bytes
    //
    _a25(sdk::unknown_ptr) stream_unpublish_classify_data;
    
    // [StreamVerifierBreak]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f090, 0x4652 bytes
    // netio.sys .text:0x5dac4, 0x4dd3 bytes
    // netio.sys .text:0x5d188, 0x4e8c bytes
    // netio.sys .text:0x5da84, 0x4dd3 bytes
    //
    _a26(sdk::unknown_ptr) stream_verifier_break;
    
    // [StringCbPrintfW]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bc90, 0x4652 bytes
    // netio.sys .text:0x16874, 0x4dd3 bytes
    // netio.sys .text:0x16a30, 0x4e8c bytes
    // netio.sys .text:0x16924, 0x4dd3 bytes
    //
    _a27(sdk::function<sdk::hresult(wchar_t*, uint64_t, const wchar_t*, ...)>*) string_cb_printf_w;
    
    // [TlDefaultEventAbort]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a28(sdk::unknown_ptr) tl_default_event_abort;
    
    // [TlDefaultEventConnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a29(sdk::unknown_ptr) tl_default_event_connect;
    
    // [TlDefaultEventDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a30(sdk::unknown_ptr) tl_default_event_disconnect;
    
    // [TlDefaultEventError]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a31(sdk::unknown_ptr) tl_default_event_error;
    
    // [TlDefaultEventInspect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c00, 0x4652 bytes
    // netio.sys .text:0x1c520, 0x4dd3 bytes
    // netio.sys .text:0x16ee0, 0x4e8c bytes
    // netio.sys .text:0x1c5b0, 0x4dd3 bytes
    //
    _a32(sdk::unknown_ptr) tl_default_event_inspect;
    
    // [TlDefaultEventNotify]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a33(sdk::unknown_ptr) tl_default_event_notify;
    
    // [TlDefaultEventReceive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a34(sdk::unknown_ptr) tl_default_event_receive;
    
    // [TlDefaultEventReceiveMessages]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a35(sdk::unknown_ptr) tl_default_event_receive_messages;
    
    // [TlDefaultEventSendBacklog]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a36(sdk::unknown_ptr) tl_default_event_send_backlog;
    
    // [TlDefaultRequestCancel]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a37(sdk::unknown_ptr) tl_default_request_cancel;
    
    // [TlDefaultRequestCloseEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a38(sdk::unknown_ptr) tl_default_request_close_endpoint;
    
    // [TlDefaultRequestConnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a39(sdk::unknown_ptr) tl_default_request_connect;
    
    // [TlDefaultRequestDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a40(sdk::unknown_ptr) tl_default_request_disconnect;
    
    // [TlDefaultRequestEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a41(sdk::unknown_ptr) tl_default_request_endpoint;
    
    // [TlDefaultRequestIoControl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a42(sdk::unknown_ptr) tl_default_request_io_control;
    
    // [TlDefaultRequestIoControlEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a43(sdk::unknown_ptr) tl_default_request_io_control_endpoint;
    
    // [TlDefaultRequestListen]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a44(sdk::unknown_ptr) tl_default_request_listen;
    
    // [TlDefaultRequestMessage]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a45(sdk::unknown_ptr) tl_default_request_message;
    
    // [TlDefaultRequestQueryDispatch]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a46(sdk::unknown_ptr) tl_default_request_query_dispatch;
    
    // [TlDefaultRequestQueryDispatchEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a47(sdk::unknown_ptr) tl_default_request_query_dispatch_endpoint;
    
    // [TlDefaultRequestReceive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a48(sdk::unknown_ptr) tl_default_request_receive;
    
    // [TlDefaultRequestReleaseIndicationList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a49(sdk::unknown_ptr) tl_default_request_release_indication_list;
    
    // [TlDefaultRequestResume]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a50(sdk::unknown_ptr) tl_default_request_resume;
    
    // [TlDefaultRequestSend]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a51(sdk::unknown_ptr) tl_default_request_send;
    
    // [TlDefaultRequestSendMessages]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x256d0, 0x4652 bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    // netio.sys .text:0x16ef0, 0x4e8c bytes
    // netio.sys .text:0x1c5c0, 0x4dd3 bytes
    //
    _a52(sdk::unknown_ptr) tl_default_request_send_messages;
    
    // [UpdateCacheLruBucket]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x30f4, 0x4652 bytes
    // netio.sys .text:0xf300, 0x4dd3 bytes
    // netio.sys .text:0xcb90, 0x4e8c bytes
    // netio.sys .text:0xf3b0, 0x4dd3 bytes
    //
    _a53(sdk::unknown_ptr) update_cache_lru_bucket;
    
    // [UpdateClassifyOut]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15b0c, 0x4652 bytes
    // netio.sys .text:0x519dc, 0x4dd3 bytes
    // netio.sys .text:0x52f68, 0x4e8c bytes
    // netio.sys .text:0x5199c, 0x4dd3 bytes
    //
    _a54(sdk::unknown_ptr) update_classify_out;
    
    // [UpdateClassifyStats]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46210, 0x4652 bytes
    // netio.sys .text:0x51ad8, 0x4dd3 bytes
    // netio.sys .text:0x53064, 0x4e8c bytes
    // netio.sys .text:0x51a98, 0x4dd3 bytes
    //
    _a55(sdk::unknown_ptr) update_classify_stats;
    
    // [UpdateHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15810, 0x4652 bytes
    // netio.sys .text:0x10d54, 0x4dd3 bytes
    // netio.sys .text:0x21208, 0x4e8c bytes
    // netio.sys .text:0x10e04, 0x4dd3 bytes
    //
    _a56(sdk::unknown_ptr) update_hash;
    
    // [UpdateHashSizeInBits]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23238, 0x4652 bytes
    // netio.sys .text:0x10ca8, 0x4dd3 bytes
    // netio.sys .text:0x2115c, 0x4e8c bytes
    // netio.sys .text:0x10d58, 0x4dd3 bytes
    //
    _a57(sdk::unknown_ptr) update_hash_size_in_bits;
    
    // [UpdateLayerClassifyStat]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15d88, 0x4652 bytes
    // netio.sys .text:0x51c2c, 0x4dd3 bytes
    // netio.sys .text:0x531cc, 0x4e8c bytes
    // netio.sys .text:0x51bec, 0x4dd3 bytes
    //
    _a58(sdk::unknown_ptr) update_layer_classify_stat;
    
    // [UpdateLayerFlagsOnIndexChange]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x25c0, 0x4652 bytes
    // netio.sys .text:0x2486c, 0x4dd3 bytes
    // netio.sys .text:0x19224, 0x4e8c bytes
    // netio.sys .text:0x248fc, 0x4dd3 bytes
    //
    _a59(sdk::unknown_ptr) update_layer_flags_on_index_change;
    
    // [ValidateAddressFamily]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1c3f8, 0x4652 bytes
    // netio.sys .text:0x28024, 0x4dd3 bytes
    // netio.sys .text:0x28c04, 0x4e8c bytes
    // netio.sys .text:0x280b4, 0x4dd3 bytes
    //
    _a60(sdk::unknown_ptr) validate_address_family;
    
    // [ValidateClassifyOutFromCallout]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x22518, 0x4652 bytes
    // netio.sys .text:0x526a4, 0x4dd3 bytes
    // netio.sys .text:0x198bc, 0x4e8c bytes
    // netio.sys .text:0x52664, 0x4dd3 bytes
    //
    _a61(sdk::unknown_ptr) validate_classify_out_from_callout;
    
    // [ValidateFwpsFilter0]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys PAGE:0x6a108, 0x4652 bytes
    // netio.sys PAGE:0x85114, 0x4dd3 bytes
    // netio.sys PAGE:0x8721c, 0x4e8c bytes
    // netio.sys PAGE:0x85114, 0x4dd3 bytes
    //
    _a62(sdk::unknown_ptr) validate_fwps_filter0;
    
    // [WeightCompare]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19484, 0x4652 bytes
    // netio.sys .text:0x52e64, 0x4dd3 bytes
    // netio.sys .text:0x53e14, 0x4e8c bytes
    // netio.sys .text:0x52e24, 0x4dd3 bytes
    //
    _a63(sdk::unknown_ptr) weight_compare;
    
    // [WeightCompareEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x153b0, 0x4652 bytes
    // netio.sys .text:0x1bf00, 0x4dd3 bytes
    // netio.sys .text:0x138e0, 0x4e8c bytes
    // netio.sys .text:0x1bf90, 0x4dd3 bytes
    //
    _a64(sdk::unknown_ptr) weight_compare_ex;
    
    // [WfpAcquireFastReadLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6228, 0x4652 bytes
    // netio.sys .text:0x6114, 0x4dd3 bytes
    // netio.sys .text:0xddbc, 0x4e8c bytes
    // netio.sys .text:0x61c4, 0x4dd3 bytes
    //
    _a65(sdk::unknown_ptr) wfp_acquire_fast_read_lock;
    
    // [WfpAcquireFastWriteLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4fe4, 0x4652 bytes
    // netio.sys .text:0x10568, 0x4dd3 bytes
    // netio.sys .text:0xdbbc, 0x4e8c bytes
    // netio.sys .text:0x10618, 0x4dd3 bytes
    //
    _a66(sdk::unknown_ptr) wfp_acquire_fast_write_lock;
    
    // [WfpAcquireSpinLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41f68, 0x4652 bytes
    // netio.sys .text:0x27d40, 0x4dd3 bytes
    // netio.sys .text:0x292d8, 0x4e8c bytes
    // netio.sys .text:0x27dd0, 0x4dd3 bytes
    //
    _a67(sdk::unknown_ptr) wfp_acquire_spin_lock;
    
    // [WfpActivateCaches]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x29a8, 0x4652 bytes
    // netio.sys .text:0xefe0, 0x4dd3 bytes
    // netio.sys .text:0x1e5f8, 0x4e8c bytes
    // netio.sys .text:0xf090, 0x4dd3 bytes
    //
    _a68(sdk::unknown_ptr) wfp_activate_caches;
    
    // [WfpAleAuditCommon]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4243c, 0x4652 bytes
    // netio.sys .text:0x4c62c, 0x4dd3 bytes
    // netio.sys .text:0x4dcc8, 0x4e8c bytes
    // netio.sys .text:0x4c5ec, 0x4dd3 bytes
    //
    _a69(sdk::unknown_ptr) wfp_ale_audit_common;
    
    // [WfpAleDecrementWaitRef]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7f1c, 0x4652 bytes
    // netio.sys .text:0x6994, 0x4dd3 bytes
    // netio.sys .text:0xbba4, 0x4e8c bytes
    // netio.sys .text:0x6a44, 0x4dd3 bytes
    //
    _a70(sdk::unknown_ptr) wfp_ale_decrement_wait_ref;
    
    // [WfpAllocFromNPagedLookasideList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48698, 0x4652 bytes
    // netio.sys .text:0x12b9c, 0x4dd3 bytes
    // netio.sys .text:0x21430, 0x4e8c bytes
    // netio.sys .text:0x12c4c, 0x4dd3 bytes
    //
    _a71(sdk::unknown_ptr) wfp_alloc_from_n_paged_lookaside_list;
    
    // [WfpAllocateCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44dc, 0x4652 bytes
    // netio.sys .text:0x1d22c, 0x4dd3 bytes
    // netio.sys .text:0x19ccc, 0x4e8c bytes
    // netio.sys .text:0x1d2bc, 0x4dd3 bytes
    //
    _a72(sdk::unknown_ptr) wfp_allocate_callout_entry;
    
    // [WfpAllocateFromPerProcessorLookasideList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10a58, 0x4652 bytes
    // netio.sys .text:0x5554, 0x4dd3 bytes
    // netio.sys .text:0x411c, 0x4e8c bytes
    // netio.sys .text:0x55c4, 0x4dd3 bytes
    //
    _a73(sdk::unknown_ptr) wfp_allocate_from_per_processor_lookaside_list;
    
    // [WfpAssociateContextToFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5050, 0x4652 bytes
    // netio.sys .text:0xe3c0, 0x4dd3 bytes
    // netio.sys .text:0xc320, 0x4e8c bytes
    // netio.sys .text:0xe470, 0x4dd3 bytes
    //
    _a74(sdk::unknown_ptr) wfp_associate_context_to_flow;
    
    // [WfpAssociateContextToFlowFast]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x79c0, 0x4652 bytes
    // netio.sys .text:0x6730, 0x4dd3 bytes
    // netio.sys .text:0xb2e0, 0x4e8c bytes
    // netio.sys .text:0x67e0, 0x4dd3 bytes
    //
    _a75(sdk::unknown_ptr) wfp_associate_context_to_flow_fast;
    
    // [WfpAssociateContextToFlowInternal]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6ff4, 0x4652 bytes
    // netio.sys .text:0xe50c, 0x4dd3 bytes
    // netio.sys .text:0xb478, 0x4e8c bytes
    // netio.sys .text:0xe5bc, 0x4dd3 bytes
    //
    _a76(sdk::unknown_ptr) wfp_associate_context_to_flow_internal;
    
    // [WfpAuditBindEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x424e0, 0x4652 bytes
    // netio.sys .text:0x4c6e0, 0x4dd3 bytes
    // netio.sys .text:0x4dd7c, 0x4e8c bytes
    // netio.sys .text:0x4c6a0, 0x4dd3 bytes
    //
    _a77(sdk::unknown_ptr) wfp_audit_bind_event;
    
    // [WfpAuditConnectAcceptEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42694, 0x4652 bytes
    // netio.sys .text:0x4c8d0, 0x4dd3 bytes
    // netio.sys .text:0x4df78, 0x4e8c bytes
    // netio.sys .text:0x4c890, 0x4dd3 bytes
    //
    _a78(sdk::unknown_ptr) wfp_audit_connect_accept_event;
    
    // [WfpAuditEventGeneral]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13e60, 0x4652 bytes
    // netio.sys .text:0x198f0, 0x4dd3 bytes
    // netio.sys .text:0x10f50, 0x4e8c bytes
    // netio.sys .text:0x19980, 0x4dd3 bytes
    //
    _a79(sdk::unknown_ptr) wfp_audit_event_general;
    
    // [WfpAuditEventVeto]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42934, 0x4652 bytes
    // netio.sys .text:0x4cbbc, 0x4dd3 bytes
    // netio.sys .text:0x4e390, 0x4e8c bytes
    // netio.sys .text:0x4cb7c, 0x4dd3 bytes
    //
    _a80(sdk::unknown_ptr) wfp_audit_event_veto;
    
    // [WfpAuditListenEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42cbc, 0x4652 bytes
    // netio.sys .text:0x4cfcc, 0x4dd3 bytes
    // netio.sys .text:0x4e7e8, 0x4e8c bytes
    // netio.sys .text:0x4cf8c, 0x4dd3 bytes
    //
    _a81(sdk::unknown_ptr) wfp_audit_listen_event;
    
    // [WfpBreakOnDrop]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61ca0, 0x4652 bytes
    // netio.sys .data:0x7af68, 0x4dd3 bytes
    // netio.sys .data:0x7be20, 0x4e8c bytes
    // netio.sys .data:0x7af68, 0x4dd3 bytes
    //
    _a82(sdk::unknown_ptr) wfp_break_on_drop;
    
    // [WFP_CLASSIFY_DROP_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59978, 0x4652 bytes
    // netio.sys .rdata:0x71570, 0x4dd3 bytes
    // netio.sys .rdata:0x71f08, 0x4e8c bytes
    // netio.sys .rdata:0x71570, 0x4dd3 bytes
    //
    _a83(sdk::unknown_ptr) wfp_classify_drop_event;
    
    // [WFP_CLASSIFY_DROP_MAC_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59918, 0x4652 bytes
    // netio.sys .rdata:0x71540, 0x4dd3 bytes
    // netio.sys .rdata:0x71ed8, 0x4e8c bytes
    // netio.sys .rdata:0x71540, 0x4dd3 bytes
    //
    _a84(sdk::unknown_ptr) wfp_classify_drop_mac_event;
    
    // [WfpCreateFastRWLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1bc4, 0x4652 bytes
    // netio.sys .text:0x22b2c, 0x4dd3 bytes
    // netio.sys .text:0x25e5c, 0x4e8c bytes
    // netio.sys .text:0x22bbc, 0x4dd3 bytes
    //
    _a85(sdk::unknown_ptr) wfp_create_fast_rw_lock;
    
    // [WfpCreatePerProcessorLookasideList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x21a74, 0x4652 bytes
    // netio.sys .text:0x23d9c, 0x4dd3 bytes
    // netio.sys .text:0x283b4, 0x4e8c bytes
    // netio.sys .text:0x23e2c, 0x4dd3 bytes
    //
    _a86(sdk::unknown_ptr) wfp_create_per_processor_lookaside_list;
    
    // [WfpCreateReassemblyContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a010, 0x4652 bytes
    // netio.sys .text:0x5f880, 0x4dd3 bytes
    // netio.sys .text:0x5f2b0, 0x4e8c bytes
    // netio.sys .text:0x5f840, 0x4dd3 bytes
    //
    _a87(sdk::unknown_ptr) wfp_create_reassembly_context;
    
    // [WfpDecodedBufferFreeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41c50, 0x4652 bytes
    // netio.sys .text:0x4be90, 0x4dd3 bytes
    // netio.sys .text:0x4d390, 0x4e8c bytes
    // netio.sys .text:0x4be50, 0x4dd3 bytes
    //
    _a88(sdk::unknown_ptr) wfp_decoded_buffer_free_helper;
    
    // [WFPDelayExecution]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x483f0, 0x4652 bytes
    // netio.sys .text:0x54760, 0x4dd3 bytes
    // netio.sys .text:0x55898, 0x4e8c bytes
    // netio.sys .text:0x54720, 0x4dd3 bytes
    //
    _a89(sdk::unknown_ptr) wfp_delay_execution;
    
    // [WfpDeleteEntryLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42ef0, 0x4652 bytes
    // netio.sys .text:0x4d260, 0x4dd3 bytes
    // netio.sys .text:0x4ea90, 0x4e8c bytes
    // netio.sys .text:0x4d220, 0x4dd3 bytes
    //
    _a90(sdk::unknown_ptr) wfp_delete_entry_lru;
    
    // [WfpErrorToFwpErr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f4e8, 0x4652 bytes
    // netio.sys .text:0x234f0, 0x4dd3 bytes
    // netio.sys .text:0x28f78, 0x4e8c bytes
    // netio.sys .text:0x23580, 0x4dd3 bytes
    //
    _a91(sdk::unknown_ptr) wfp_error_to_fwp_err;
    
    // [WfpErrorToNtStatus]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15d34, 0x4652 bytes
    // netio.sys .text:0x1c4a0, 0x4dd3 bytes
    // netio.sys .text:0x13dd8, 0x4e8c bytes
    // netio.sys .text:0x1c530, 0x4dd3 bytes
    //
    _a92(sdk::unknown_ptr) wfp_error_to_nt_status;
    
    // [WfpEventTraceEnabled]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c39, 0x4652 bytes
    // netio.sys .data:0x7abdc, 0x4dd3 bytes
    // netio.sys .data:0x7bc84, 0x4e8c bytes
    // netio.sys .data:0x7abdc, 0x4dd3 bytes
    //
    _a93(sdk::unknown_ptr) wfp_event_trace_enabled;
    
    // [WfpEventTraceHandle]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .data:0x61c40, 0x4652 bytes
    // netio.sys .data:0x7ace8, 0x4dd3 bytes
    // netio.sys .data:0x7bd98, 0x4e8c bytes
    // netio.sys .data:0x7ace8, 0x4dd3 bytes
    //
    _a94(sdk::unknown_ptr) wfp_event_trace_handle;
    
    // [WfpExpireEntryLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42f50, 0x4652 bytes
    // netio.sys .text:0x4d310, 0x4dd3 bytes
    // netio.sys .text:0x4eb40, 0x4e8c bytes
    // netio.sys .text:0x4d2d0, 0x4dd3 bytes
    //
    _a95(sdk::unknown_ptr) wfp_expire_entry_lru;
    
    // [WfpFindAndDeRefFlowContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6ea4, 0x4652 bytes
    // netio.sys .text:0x54064, 0x4dd3 bytes
    // netio.sys .text:0xb82c, 0x4e8c bytes
    // netio.sys .text:0x54024, 0x4dd3 bytes
    //
    _a96(sdk::unknown_ptr) wfp_find_and_de_ref_flow_context;
    
    // [WfpFindAndRefFlowContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47ed0, 0x4652 bytes
    // netio.sys .text:0x54194, 0x4dd3 bytes
    // netio.sys .text:0xb0e0, 0x4e8c bytes
    // netio.sys .text:0x54154, 0x4dd3 bytes
    //
    _a97(sdk::unknown_ptr) wfp_find_and_ref_flow_context;
    
    // [WfpFindCalloutEntry]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4870, 0x4652 bytes
    // netio.sys .text:0x61a8, 0x4dd3 bytes
    // netio.sys .text:0x218c8, 0x4e8c bytes
    // netio.sys .text:0x6258, 0x4dd3 bytes
    //
    _a98(sdk::unknown_ptr) wfp_find_callout_entry;
    
    // [WfpFlowToEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47fe0, 0x4652 bytes
    // netio.sys .text:0x542c0, 0x4dd3 bytes
    // netio.sys .text:0x54c10, 0x4e8c bytes
    // netio.sys .text:0x54280, 0x4dd3 bytes
    //
    _a99(sdk::unknown_ptr) wfp_flow_to_endpoint;
    
    // [WfpFreeCacheEntries]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x2cd8, 0x4652 bytes
    // netio.sys .text:0xef98, 0x4dd3 bytes
    // netio.sys .text:0x1e774, 0x4e8c bytes
    // netio.sys .text:0xf048, 0x4dd3 bytes
    //
    _b00(sdk::unknown_ptr) wfp_free_cache_entries;
    
    // [WfpFreeReassemblyContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a060, 0x4652 bytes
    // netio.sys .text:0x1c400, 0x4dd3 bytes
    // netio.sys .text:0x22b90, 0x4e8c bytes
    // netio.sys .text:0x1c490, 0x4dd3 bytes
    //
    _b01(sdk::unknown_ptr) wfp_free_reassembly_context;
    
    // [WfpGetPacketTagCount]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15710, 0x4652 bytes
    // netio.sys .text:0x1be40, 0x4dd3 bytes
    // netio.sys .text:0x13840, 0x4e8c bytes
    // netio.sys .text:0x1bed0, 0x4dd3 bytes
    //
    _b02(sdk::unknown_ptr) wfp_get_packet_tag_count;
    
    // [WfpHashtableCreate]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1cf14, 0x4652 bytes
    // netio.sys .text:0x234b4, 0x4dd3 bytes
    // netio.sys .text:0x26384, 0x4e8c bytes
    // netio.sys .text:0x23544, 0x4dd3 bytes
    //
    _b03(sdk::unknown_ptr) wfp_hashtable_create;
    
    // [WfpHashtableDestroy]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48850, 0x4652 bytes
    // netio.sys .text:0x56324, 0x4dd3 bytes
    // netio.sys .text:0x560d0, 0x4e8c bytes
    // netio.sys .text:0x562e4, 0x4dd3 bytes
    //
    _b04(sdk::unknown_ptr) wfp_hashtable_destroy;
    
    // [WfpHashtableInsert]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x488d0, 0x4652 bytes
    // netio.sys .text:0x563c4, 0x4dd3 bytes
    // netio.sys .text:0x56188, 0x4e8c bytes
    // netio.sys .text:0x56384, 0x4dd3 bytes
    //
    _b05(sdk::unknown_ptr) wfp_hashtable_insert;
    
    // [WFP_IKEEXT_EM_FAILURE_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59938, 0x4652 bytes
    // netio.sys .rdata:0x715a0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f38, 0x4e8c bytes
    // netio.sys .rdata:0x715a0, 0x4dd3 bytes
    //
    _b06(sdk::unknown_ptr) wfp_ikeext_em_failure_event;
    
    // [WfpInetInspectInjectReceive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a23c, 0x4652 bytes
    // netio.sys .text:0x583e0, 0x4dd3 bytes
    // netio.sys .text:0x57e48, 0x4e8c bytes
    // netio.sys .text:0x583a0, 0x4dd3 bytes
    //
    _b07(sdk::unknown_ptr) wfp_inet_inspect_inject_receive;
    
    // [WfpInitializeLeastRecentlyUsedList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x23600, 0x4652 bytes
    // netio.sys .text:0x266d0, 0x4dd3 bytes
    // netio.sys .text:0x251d0, 0x4e8c bytes
    // netio.sys .text:0x26760, 0x4dd3 bytes
    //
    _b08(sdk::unknown_ptr) wfp_initialize_least_recently_used_list;
    
    // [WfpInsertEntryLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x42fd0, 0x4652 bytes
    // netio.sys .text:0x4d3b0, 0x4dd3 bytes
    // netio.sys .text:0x4ebe0, 0x4e8c bytes
    // netio.sys .text:0x4d370, 0x4dd3 bytes
    //
    _b09(sdk::unknown_ptr) wfp_insert_entry_lru;
    
    // [WFP_IPSEC_DOSP_DROP_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59928, 0x4652 bytes
    // netio.sys .rdata:0x71620, 0x4dd3 bytes
    // netio.sys .rdata:0x71fb8, 0x4e8c bytes
    // netio.sys .rdata:0x71620, 0x4dd3 bytes
    //
    _b10(sdk::unknown_ptr) wfp_ipsec_dosp_drop_event;
    
    // [WFP_IPSEC_KERNEL_DROP_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59968, 0x4652 bytes
    // netio.sys .rdata:0x71630, 0x4dd3 bytes
    // netio.sys .rdata:0x71fc8, 0x4e8c bytes
    // netio.sys .rdata:0x71630, 0x4dd3 bytes
    //
    _b11(sdk::unknown_ptr) wfp_ipsec_kernel_drop_event;
    
    // [WfpLogVpnEvent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x53764, 0x4652 bytes
    // netio.sys .text:0x65a40, 0x4dd3 bytes
    // netio.sys .text:0x65528, 0x4e8c bytes
    // netio.sys .text:0x65a00, 0x4dd3 bytes
    //
    _b12(sdk::unknown_ptr) wfp_log_vpn_event;
    
    // [WfpLruContextCleanupDeferredRoutine]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43090, 0x4652 bytes
    // netio.sys .text:0x4d4c0, 0x4dd3 bytes
    // netio.sys .text:0x4ecf0, 0x4e8c bytes
    // netio.sys .text:0x4d480, 0x4dd3 bytes
    //
    _b13(sdk::unknown_ptr) wfp_lru_context_cleanup_deferred_routine;
    
    // [WfpLruProcessExpiredEndpoint]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43220, 0x4652 bytes
    // netio.sys .text:0x4d6b0, 0x4dd3 bytes
    // netio.sys .text:0x4eee0, 0x4e8c bytes
    // netio.sys .text:0x4d670, 0x4dd3 bytes
    //
    _b14(sdk::unknown_ptr) wfp_lru_process_expired_endpoint;
    
    // [WfpLruQueueLruCleanupWorkItemForContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43320, 0x4652 bytes
    // netio.sys .text:0x4d7d0, 0x4dd3 bytes
    // netio.sys .text:0x4f000, 0x4e8c bytes
    // netio.sys .text:0x4d790, 0x4dd3 bytes
    //
    _b15(sdk::unknown_ptr) wfp_lru_queue_lru_cleanup_work_item_for_context;
    
    // [WfpMidlObjectDecode]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f94, 0x4652 bytes
    // netio.sys .text:0x28e4, 0x4dd3 bytes
    // netio.sys .text:0x200e4, 0x4e8c bytes
    // netio.sys .text:0x28e4, 0x4dd3 bytes
    //
    _b16(sdk::unknown_ptr) wfp_midl_object_decode;
    
    // [WfpNamedPoolFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48724, 0x4652 bytes
    // netio.sys .text:0x11618, 0x4dd3 bytes
    // netio.sys .text:0xe490, 0x4e8c bytes
    // netio.sys .text:0x116c8, 0x4dd3 bytes
    //
    _b17(sdk::unknown_ptr) wfp_named_pool_free;
    
    // [WfpNblInfoAlloc]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10e50, 0x4652 bytes
    // netio.sys .text:0x2340, 0x4dd3 bytes
    // netio.sys .text:0x23f0, 0x4e8c bytes
    // netio.sys .text:0x2340, 0x4dd3 bytes
    //
    _b18(sdk::unknown_ptr) wfp_nbl_info_alloc;
    
    // [WfpNblInfoCleanup]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x101f0, 0x4652 bytes
    // netio.sys .text:0x4660, 0x4dd3 bytes
    // netio.sys .text:0x126d0, 0x4e8c bytes
    // netio.sys .text:0x4670, 0x4dd3 bytes
    //
    _b19(sdk::function<void(struct ndis::net_buffer_list_t*, uint8_t)>*) wfp_nbl_info_cleanup;
    
    // [WfpNblInfoClearFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x131a0, 0x4652 bytes
    // netio.sys .text:0x18a60, 0x4dd3 bytes
    // netio.sys .text:0x10e10, 0x4e8c bytes
    // netio.sys .text:0x18af0, 0x4dd3 bytes
    //
    _b20(sdk::unknown_ptr) wfp_nbl_info_clear_flags;
    
    // [WfpNblInfoClone]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x11470, 0x4652 bytes
    // netio.sys .text:0x5f8f0, 0x4dd3 bytes
    // netio.sys .text:0x5f320, 0x4e8c bytes
    // netio.sys .text:0x5f8b0, 0x4dd3 bytes
    //
    _b21(sdk::function<int32_t(struct ndis::net_buffer_list_t*, struct ndis::net_buffer_list_t*, uint8_t, uint8_t, uint8_t)>*) wfp_nbl_info_clone;
    
    // [WfpNblInfoCloneEx]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10860, 0x4652 bytes
    // netio.sys .text:0x4524, 0x4dd3 bytes
    // netio.sys .text:0x34b4, 0x4e8c bytes
    // netio.sys .text:0x4524, 0x4dd3 bytes
    //
    _b22(sdk::unknown_ptr) wfp_nbl_info_clone_ex;
    
    // [WfpNblInfoDestroyIfUnused]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf700, 0x4652 bytes
    // netio.sys .text:0x18fa0, 0x4dd3 bytes
    // netio.sys .text:0x11370, 0x4e8c bytes
    // netio.sys .text:0x19030, 0x4dd3 bytes
    //
    _b23(sdk::unknown_ptr) wfp_nbl_info_destroy_if_unused;
    
    // [WfpNblInfoDispatchTableClear]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50ba0, 0x4652 bytes
    // netio.sys .text:0x5f930, 0x4dd3 bytes
    // netio.sys .text:0x5f360, 0x4e8c bytes
    // netio.sys .text:0x5f8f0, 0x4dd3 bytes
    //
    _b24(sdk::unknown_ptr) wfp_nbl_info_dispatch_table_clear;
    
    // [WfpNblInfoDispatchTableSet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24600, 0x4652 bytes
    // netio.sys .text:0x29180, 0x4dd3 bytes
    // netio.sys .text:0x29fb0, 0x4e8c bytes
    // netio.sys .text:0x29210, 0x4dd3 bytes
    //
    _b25(sdk::unknown_ptr) wfp_nbl_info_dispatch_table_set;
    
    // [WfpNblInfoGet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x12890, 0x4652 bytes
    // netio.sys .text:0x18a30, 0x4dd3 bytes
    // netio.sys .text:0x10df0, 0x4e8c bytes
    // netio.sys .text:0x4600, 0x4dd3 bytes
    //
    _b26(sdk::unknown_ptr) wfp_nbl_info_get;
    
    // [WfpNblInfoGetFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15da0, 0x4652 bytes
    // netio.sys .text:0x5f960, 0x4dd3 bytes
    // netio.sys .text:0x5f390, 0x4e8c bytes
    // netio.sys .text:0x5f920, 0x4dd3 bytes
    //
    _b27(sdk::unknown_ptr) wfp_nbl_info_get_flags;
    
    // [WfpNblInfoInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10830, 0x4652 bytes
    // netio.sys .text:0x44f0, 0x4dd3 bytes
    // netio.sys .text:0x3440, 0x4e8c bytes
    // netio.sys .text:0x44f0, 0x4dd3 bytes
    //
    _b28(sdk::unknown_ptr) wfp_nbl_info_init;
    
    // [WfpNblInfoLibraryInit]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x216b0, 0x4652 bytes
    // netio.sys .text:0x23980, 0x4dd3 bytes
    // netio.sys .text:0x27f90, 0x4e8c bytes
    // netio.sys .text:0x23a10, 0x4dd3 bytes
    //
    _b29(sdk::unknown_ptr) wfp_nbl_info_library_init;
    
    // [WfpNblInfoSet]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50bc0, 0x4652 bytes
    // netio.sys .text:0x5fa00, 0x4dd3 bytes
    // netio.sys .text:0x2a1e0, 0x4e8c bytes
    // netio.sys .text:0x5f9c0, 0x4dd3 bytes
    //
    _b30(sdk::unknown_ptr) wfp_nbl_info_set;
    
    // [WfpNblInfoSetFlags]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x13610, 0x4652 bytes
    // netio.sys .text:0x18d50, 0x4dd3 bytes
    // netio.sys .text:0x11480, 0x4e8c bytes
    // netio.sys .text:0x18de0, 0x4dd3 bytes
    //
    _b31(sdk::unknown_ptr) wfp_nbl_info_set_flags;
    
    // [WfpNotifyFlowContextDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e58, 0x4652 bytes
    // netio.sys .text:0x102bc, 0x4dd3 bytes
    // netio.sys .text:0xc858, 0x4e8c bytes
    // netio.sys .text:0x1036c, 0x4dd3 bytes
    //
    _b32(sdk::unknown_ptr) wfp_notify_flow_context_delete;
    
    // [WfpNrptTriggerDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41c60, 0x4652 bytes
    // netio.sys .text:0x4bec0, 0x4dd3 bytes
    // netio.sys .text:0x4d3c0, 0x4e8c bytes
    // netio.sys .text:0x4be80, 0x4dd3 bytes
    //
    _b33(sdk::unknown_ptr) wfp_nrpt_trigger_decode_helper;
    
    // [WfpObjectDereference]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x44b18, 0x4652 bytes
    // netio.sys .text:0x4f67c, 0x4dd3 bytes
    // netio.sys .text:0x50eec, 0x4e8c bytes
    // netio.sys .text:0x4f63c, 0x4dd3 bytes
    //
    _b34(sdk::unknown_ptr) wfp_object_dereference;
    
    // [WfpObjectInsert]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4892c, 0x4652 bytes
    // netio.sys .text:0x56430, 0x4dd3 bytes
    // netio.sys .text:0x5622c, 0x4e8c bytes
    // netio.sys .text:0x563f0, 0x4dd3 bytes
    //
    _b35(sdk::unknown_ptr) wfp_object_insert;
    
    // [WfpObjectManagerClose]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x489f8, 0x4652 bytes
    // netio.sys .text:0x56548, 0x4dd3 bytes
    // netio.sys .text:0x56344, 0x4e8c bytes
    // netio.sys .text:0x56508, 0x4dd3 bytes
    //
    _b36(sdk::unknown_ptr) wfp_object_manager_close;
    
    // [WfpObjectManagerInitialize]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1ce8c, 0x4652 bytes
    // netio.sys .text:0x23410, 0x4dd3 bytes
    // netio.sys .text:0x262d8, 0x4e8c bytes
    // netio.sys .text:0x234a0, 0x4dd3 bytes
    //
    _b37(sdk::unknown_ptr) wfp_object_manager_initialize;
    
    // [WfpPacketTagCountIncrement]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15410, 0x4652 bytes
    // netio.sys .text:0x1b350, 0x4dd3 bytes
    // netio.sys .text:0x13520, 0x4e8c bytes
    // netio.sys .text:0x1b3e0, 0x4dd3 bytes
    //
    _b38(sdk::unknown_ptr) wfp_packet_tag_count_increment;
    
    // [WfpPoolAllocNonPaged]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x7534, 0x4652 bytes
    // netio.sys .text:0x3e00, 0x4dd3 bytes
    // netio.sys .text:0xc6f8, 0x4e8c bytes
    // netio.sys .text:0x3e00, 0x4dd3 bytes
    //
    _b39(sdk::unknown_ptr) wfp_pool_alloc_non_paged;
    
    // [WfpPoolFree]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e2c, 0x4652 bytes
    // netio.sys .text:0x1015c, 0x4dd3 bytes
    // netio.sys .text:0xd9d8, 0x4e8c bytes
    // netio.sys .text:0x1020c, 0x4dd3 bytes
    //
    _b40(sdk::unknown_ptr) wfp_pool_free;
    
    // [WfpProcessFlowDelete]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48010, 0x4652 bytes
    // netio.sys .text:0x54300, 0x4dd3 bytes
    // netio.sys .text:0x54c50, 0x4e8c bytes
    // netio.sys .text:0x542c0, 0x4dd3 bytes
    //
    _b41(sdk::unknown_ptr) wfp_process_flow_delete;
    
    // [WfpProcessFlowDeleteFast]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d38, 0x4652 bytes
    // netio.sys .text:0x10198, 0x4dd3 bytes
    // netio.sys .text:0xda14, 0x4e8c bytes
    // netio.sys .text:0x10248, 0x4dd3 bytes
    //
    _b42(sdk::unknown_ptr) wfp_process_flow_delete_fast;
    
    // [WfpRefreshEntryLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43460, 0x4652 bytes
    // netio.sys .text:0x4d940, 0x4dd3 bytes
    // netio.sys .text:0x4f170, 0x4e8c bytes
    // netio.sys .text:0x4d900, 0x4dd3 bytes
    //
    _b43(sdk::unknown_ptr) wfp_refresh_entry_lru;
    
    // [WfpRegGetUint32Value]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1fc10, 0x4652 bytes
    // netio.sys .text:0x224b8, 0x4dd3 bytes
    // netio.sys .text:0x24d70, 0x4e8c bytes
    // netio.sys .text:0x22548, 0x4dd3 bytes
    //
    _b44(sdk::unknown_ptr) wfp_reg_get_uint32_value;
    
    // [WfpRegOpenKey]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1fce8, 0x4652 bytes
    // netio.sys .text:0x225b0, 0x4dd3 bytes
    // netio.sys .text:0x23678, 0x4e8c bytes
    // netio.sys .text:0x22640, 0x4dd3 bytes
    //
    _b45(sdk::unknown_ptr) wfp_reg_open_key;
    
    // [WfpReleaseFastReadLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15a98, 0x4652 bytes
    // netio.sys .text:0x1c390, 0x4dd3 bytes
    // netio.sys .text:0x22104, 0x4e8c bytes
    // netio.sys .text:0x1c420, 0x4dd3 bytes
    //
    _b46(sdk::unknown_ptr) wfp_release_fast_read_lock;
    
    // [WfpReleaseFastWriteLock]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4f88, 0x4652 bytes
    // netio.sys .text:0x104fc, 0x4dd3 bytes
    // netio.sys .text:0xdb50, 0x4e8c bytes
    // netio.sys .text:0x105ac, 0x4dd3 bytes
    //
    _b47(sdk::unknown_ptr) wfp_release_fast_write_lock;
    
    // [WfpReleaseFlowLocation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48110, 0x4652 bytes
    // netio.sys .text:0x54410, 0x4dd3 bytes
    // netio.sys .text:0x54d60, 0x4e8c bytes
    // netio.sys .text:0x543d0, 0x4dd3 bytes
    //
    _b48(sdk::unknown_ptr) wfp_release_flow_location;
    
    // [WfpRemoveContextFromFlow]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48b0, 0x4652 bytes
    // netio.sys .text:0x5eb0, 0x4dd3 bytes
    // netio.sys .text:0x21750, 0x4e8c bytes
    // netio.sys .text:0x5f60, 0x4dd3 bytes
    //
    _b49(sdk::unknown_ptr) wfp_remove_context_from_flow;
    
    // [WfpRemoveContextFromFlowFast]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48170, 0x4652 bytes
    // netio.sys .text:0x54480, 0x4dd3 bytes
    // netio.sys .text:0x54dd0, 0x4e8c bytes
    // netio.sys .text:0x54440, 0x4dd3 bytes
    //
    _b50(sdk::unknown_ptr) wfp_remove_context_from_flow_fast;
    
    // [WfpReportAppErrorAsNtStatus]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x485f0, 0x4652 bytes
    // netio.sys .text:0x5624c, 0x4dd3 bytes
    // netio.sys .text:0x55d58, 0x4e8c bytes
    // netio.sys .text:0x5620c, 0x4dd3 bytes
    //
    _b51(sdk::unknown_ptr) wfp_report_app_error_as_nt_status;
    
    // [WfpReportAppErrorAsWinError]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x485fc, 0x4652 bytes
    // netio.sys .text:0x56268, 0x4dd3 bytes
    // netio.sys .text:0x55d74, 0x4e8c bytes
    // netio.sys .text:0x56228, 0x4dd3 bytes
    //
    _b52(sdk::unknown_ptr) wfp_report_app_error_as_win_error;
    
    // [WfpReportError]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19520, 0x4652 bytes
    // netio.sys .text:0x20174, 0x4dd3 bytes
    // netio.sys .text:0x55d8c, 0x4e8c bytes
    // netio.sys .text:0x20204, 0x4dd3 bytes
    //
    _b53(sdk::unknown_ptr) wfp_report_error;
    
    // [WfpReportSysErrorAsHResult]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48604, 0x4652 bytes
    // netio.sys .text:0x56280, 0x4dd3 bytes
    // netio.sys .text:0x55dd8, 0x4e8c bytes
    // netio.sys .text:0x56240, 0x4dd3 bytes
    //
    _b54(sdk::unknown_ptr) wfp_report_sys_error_as_h_result;
    
    // [WfpReportSysErrorAsNtStatus]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x194e8, 0x4652 bytes
    // netio.sys .text:0x20134, 0x4dd3 bytes
    // netio.sys .text:0x55e28, 0x4e8c bytes
    // netio.sys .text:0x201c4, 0x4dd3 bytes
    //
    _b55(sdk::unknown_ptr) wfp_report_sys_error_as_nt_status;
    
    // [WfpReportSysErrorAsWinError]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48650, 0x4652 bytes
    // netio.sys .text:0x562d4, 0x4dd3 bytes
    // netio.sys .text:0x55e80, 0x4e8c bytes
    // netio.sys .text:0x56294, 0x4dd3 bytes
    //
    _b56(sdk::unknown_ptr) wfp_report_sys_error_as_win_error;
    
    // [WfpReserveFlowLocation]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x24440, 0x4652 bytes
    // netio.sys .text:0x28f20, 0x4dd3 bytes
    // netio.sys .text:0x29dd0, 0x4e8c bytes
    // netio.sys .text:0x28fb0, 0x4dd3 bytes
    //
    _b57(sdk::unknown_ptr) wfp_reserve_flow_location;
    
    // [WfpRestructureHashtable]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3314, 0x4652 bytes
    // netio.sys .text:0xfd54, 0x4dd3 bytes
    // netio.sys .text:0xd5a4, 0x4e8c bytes
    // netio.sys .text:0xfe04, 0x4dd3 bytes
    //
    _b58(sdk::unknown_ptr) wfp_restructure_hashtable;
    
    // [WfpScavangeLeastRecentlyUsedList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43570, 0x4652 bytes
    // netio.sys .text:0x4dae0, 0x4dd3 bytes
    // netio.sys .text:0x4f310, 0x4e8c bytes
    // netio.sys .text:0x4daa0, 0x4dd3 bytes
    //
    _b59(sdk::unknown_ptr) wfp_scavange_least_recently_used_list;
    
    // [WfpSetBucketsToEmptyLru]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x436c0, 0x4652 bytes
    // netio.sys .text:0x4dc80, 0x4dd3 bytes
    // netio.sys .text:0x4f4b0, 0x4e8c bytes
    // netio.sys .text:0x4dc40, 0x4dd3 bytes
    //
    _b60(sdk::unknown_ptr) wfp_set_buckets_to_empty_lru;
    
    // [WfpSetConfigureParametersDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41ca0, 0x4652 bytes
    // netio.sys .text:0x4bf10, 0x4dd3 bytes
    // netio.sys .text:0x4d410, 0x4e8c bytes
    // netio.sys .text:0x4bed0, 0x4dd3 bytes
    //
    _b61(sdk::unknown_ptr) wfp_set_configure_parameters_decode_helper;
    
    // [WfpSetDisconnectDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41ce0, 0x4652 bytes
    // netio.sys .text:0x4bf60, 0x4dd3 bytes
    // netio.sys .text:0x4d460, 0x4e8c bytes
    // netio.sys .text:0x4bf20, 0x4dd3 bytes
    //
    _b62(sdk::unknown_ptr) wfp_set_disconnect_decode_helper;
    
    // [WfpSetParmTypeSockAddr]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x142a4, 0x4652 bytes
    // netio.sys .text:0x19c80, 0x4dd3 bytes
    // netio.sys .text:0x112fc, 0x4e8c bytes
    // netio.sys .text:0x19d10, 0x4dd3 bytes
    //
    _b63(sdk::unknown_ptr) wfp_set_parm_type_sock_addr;
    
    // [WfpSetVpnTriggerFilePathsDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41d20, 0x4652 bytes
    // netio.sys .text:0x4bfb0, 0x4dd3 bytes
    // netio.sys .text:0x4d4b0, 0x4e8c bytes
    // netio.sys .text:0x4bf70, 0x4dd3 bytes
    //
    _b64(sdk::unknown_ptr) wfp_set_vpn_trigger_file_paths_decode_helper;
    
    // [WfpSetVpnTriggerSecurityDescriptorDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41d60, 0x4652 bytes
    // netio.sys .text:0x4c000, 0x4dd3 bytes
    // netio.sys .text:0x4d500, 0x4e8c bytes
    // netio.sys .text:0x4bfc0, 0x4dd3 bytes
    //
    _b65(sdk::unknown_ptr) wfp_set_vpn_trigger_security_descriptor_decode_helper;
    
    // [WfpSetVpnTriggerSidsDecodeHelper]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41da0, 0x4652 bytes
    // netio.sys .text:0x4c050, 0x4dd3 bytes
    // netio.sys .text:0x4d550, 0x4e8c bytes
    // netio.sys .text:0x4c010, 0x4dd3 bytes
    //
    _b66(sdk::unknown_ptr) wfp_set_vpn_trigger_sids_decode_helper;
    
    // [WfpSizeTAdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48750, 0x4652 bytes
    // netio.sys .text:0x560b4, 0x4dd3 bytes
    // netio.sys .text:0x55bc8, 0x4e8c bytes
    // netio.sys .text:0x56074, 0x4dd3 bytes
    //
    _b67(sdk::unknown_ptr) wfp_size_t_add;
    
    // [WfpSizeTMultiply]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x6c7c, 0x4652 bytes
    // netio.sys .text:0x3e48, 0x4dd3 bytes
    // netio.sys .text:0x1fbb0, 0x4e8c bytes
    // netio.sys .text:0x3e48, 0x4dd3 bytes
    //
    _b68(sdk::unknown_ptr) wfp_size_t_multiply;
    
    // [WfpStartStreamShim]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x215a0, 0x4652 bytes
    // netio.sys .text:0x23860, 0x4dd3 bytes
    // netio.sys .text:0x27e70, 0x4e8c bytes
    // netio.sys .text:0x238f0, 0x4dd3 bytes
    //
    _b69(sdk::unknown_ptr) wfp_start_stream_shim;
    
    // [WfpStopStreamShim]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a320, 0x4652 bytes
    // netio.sys .text:0x584d0, 0x4dd3 bytes
    // netio.sys .text:0x57f30, 0x4e8c bytes
    // netio.sys .text:0x58490, 0x4dd3 bytes
    //
    _b70(sdk::unknown_ptr) wfp_stop_stream_shim;
    
    // [WfpStreamEndpointCleanupBegin]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19c00, 0x4652 bytes
    // netio.sys .text:0x1c520, 0x4dd3 bytes
    // netio.sys .text:0x16ee0, 0x4e8c bytes
    // netio.sys .text:0x1c5b0, 0x4dd3 bytes
    //
    _b71(sdk::unknown_ptr) wfp_stream_endpoint_cleanup_begin;
    
    // [WfpStreamInspectDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf440, 0x4652 bytes
    // netio.sys .text:0x5310, 0x4dd3 bytes
    // netio.sys .text:0x3640, 0x4e8c bytes
    // netio.sys .text:0x5320, 0x4dd3 bytes
    //
    _b72(sdk::unknown_ptr) wfp_stream_inspect_disconnect;
    
    // [WfpStreamInspectReceive]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8980, 0x4652 bytes
    // netio.sys .text:0x6b90, 0x4dd3 bytes
    // netio.sys .text:0x3eb0, 0x4e8c bytes
    // netio.sys .text:0x6c40, 0x4dd3 bytes
    //
    _b73(sdk::unknown_ptr) wfp_stream_inspect_receive;
    
    // [WfpStreamInspectRemoteDisconnect]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x10bb0, 0x4652 bytes
    // netio.sys .text:0x5850, 0x4dd3 bytes
    // netio.sys .text:0x22970, 0x4e8c bytes
    // netio.sys .text:0x58c0, 0x4dd3 bytes
    //
    _b74(sdk::unknown_ptr) wfp_stream_inspect_remote_disconnect;
    
    // [WfpStreamInspectSend]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x8540, 0x4652 bytes
    // netio.sys .text:0x6e00, 0x4dd3 bytes
    // netio.sys .text:0x41d0, 0x4e8c bytes
    // netio.sys .text:0x6eb0, 0x4dd3 bytes
    //
    _b75(sdk::unknown_ptr) wfp_stream_inspect_send;
    
    // [WfpStreamIsFilterPresent]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0xf140, 0x4652 bytes
    // netio.sys .text:0x7a90, 0x4dd3 bytes
    // netio.sys .text:0x6890, 0x4e8c bytes
    // netio.sys .text:0x7b40, 0x4dd3 bytes
    //
    _b76(sdk::unknown_ptr) wfp_stream_is_filter_present;
    
    // [WfpStringCombineStrArray]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x53984, 0x4652 bytes
    // netio.sys .text:0x65c38, 0x4dd3 bytes
    // netio.sys .text:0x55f78, 0x4e8c bytes
    // netio.sys .text:0x65bf8, 0x4dd3 bytes
    //
    _b77(sdk::unknown_ptr) wfp_string_combine_str_array;
    
    // [WfpSyncDpcCallback]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15b00, 0x4652 bytes
    // netio.sys .text:0x1c370, 0x4dd3 bytes
    // netio.sys .text:0x1af40, 0x4e8c bytes
    // netio.sys .text:0x1c400, 0x4dd3 bytes
    //
    _b78(sdk::unknown_ptr) wfp_sync_dpc_callback;
    
    // [WfpTransferReassemblyContextForFragments]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19fa0, 0x4652 bytes
    // netio.sys .text:0x5fa10, 0x4dd3 bytes
    // netio.sys .text:0x5f430, 0x4e8c bytes
    // netio.sys .text:0x5f9d0, 0x4dd3 bytes
    //
    _b79(sdk::unknown_ptr) wfp_transfer_reassembly_context_for_fragments;
    
    // [WfpTransferReassemblyContextUponCompletion]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19fc0, 0x4652 bytes
    // netio.sys .text:0x5fa30, 0x4dd3 bytes
    // netio.sys .text:0x5f450, 0x4e8c bytes
    // netio.sys .text:0x5f9f0, 0x4dd3 bytes
    //
    _b80(sdk::unknown_ptr) wfp_transfer_reassembly_context_upon_completion;
    
    // [WfpUINT32Add]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x487a4, 0x4652 bytes
    // netio.sys .text:0x56110, 0x4dd3 bytes
    // netio.sys .text:0x55c20, 0x4e8c bytes
    // netio.sys .text:0x560d0, 0x4dd3 bytes
    //
    _b81(sdk::unknown_ptr) wfp_uint32_add;
    
    // [WfpUINT32Multiply]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x487f4, 0x4652 bytes
    // netio.sys .text:0x56168, 0x4dd3 bytes
    // netio.sys .text:0x55c74, 0x4e8c bytes
    // netio.sys .text:0x56128, 0x4dd3 bytes
    //
    _b82(sdk::unknown_ptr) wfp_uint32_multiply;
    
    // [WfpUnifiedTraceStart]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f59c, 0x4652 bytes
    // netio.sys .text:0x235b8, 0x4dd3 bytes
    // netio.sys .text:0x29054, 0x4e8c bytes
    // netio.sys .text:0x23648, 0x4dd3 bytes
    //
    _b83(sdk::unknown_ptr) wfp_unified_trace_start;
    
    // [WfpUninitializeLeastRecentlyUsedList]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x436d0, 0x4652 bytes
    // netio.sys .text:0x4dc90, 0x4dd3 bytes
    // netio.sys .text:0x4f4c0, 0x4e8c bytes
    // netio.sys .text:0x4dc50, 0x4dd3 bytes
    //
    _b84(sdk::unknown_ptr) wfp_uninitialize_least_recently_used_list;
    
    // [WfpUpdateHash]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x15810, 0x4652 bytes
    // netio.sys .text:0x10d54, 0x4dd3 bytes
    // netio.sys .text:0x21208, 0x4e8c bytes
    // netio.sys .text:0x10e04, 0x4dd3 bytes
    //
    _b85(sdk::unknown_ptr) wfp_update_hash;
    
    // [WFP_VPN_CONNECT_FROM_DISCONNECT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59868, 0x4652 bytes
    // netio.sys .rdata:0x71660, 0x4dd3 bytes
    // netio.sys .rdata:0x71ff8, 0x4e8c bytes
    // netio.sys .rdata:0x71660, 0x4dd3 bytes
    //
    _b86(sdk::unknown_ptr) wfp_vpn_connect_from_disconnect_event;
    
    // [WFP_VPN_DISCONNECT_AFTER_DEBOUNCE_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59858, 0x4652 bytes
    // netio.sys .rdata:0x715b0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f48, 0x4e8c bytes
    // netio.sys .rdata:0x715b0, 0x4dd3 bytes
    //
    _b87(sdk::unknown_ptr) wfp_vpn_disconnect_after_debounce_event;
    
    // [WFP_VPN_FILE_TRIGGER_DECREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598f8, 0x4652 bytes
    // netio.sys .rdata:0x71650, 0x4dd3 bytes
    // netio.sys .rdata:0x71fe8, 0x4e8c bytes
    // netio.sys .rdata:0x71650, 0x4dd3 bytes
    //
    _b88(sdk::unknown_ptr) wfp_vpn_file_trigger_decrement_event;
    
    // [WFP_VPN_FILE_TRIGGER_INCREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59908, 0x4652 bytes
    // netio.sys .rdata:0x715e0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f78, 0x4e8c bytes
    // netio.sys .rdata:0x715e0, 0x4dd3 bytes
    //
    _b89(sdk::unknown_ptr) wfp_vpn_file_trigger_increment_event;
    
    // [WFP_VPN_FLOW_TRIGGER_DECREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59878, 0x4652 bytes
    // netio.sys .rdata:0x715f0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f88, 0x4e8c bytes
    // netio.sys .rdata:0x715f0, 0x4dd3 bytes
    //
    _b90(sdk::unknown_ptr) wfp_vpn_flow_trigger_decrement_event;
    
    // [WFP_VPN_FLOW_TRIGGER_INCREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59888, 0x4652 bytes
    // netio.sys .rdata:0x71610, 0x4dd3 bytes
    // netio.sys .rdata:0x71fa8, 0x4e8c bytes
    // netio.sys .rdata:0x71610, 0x4dd3 bytes
    //
    _b91(sdk::unknown_ptr) wfp_vpn_flow_trigger_increment_event;
    
    // [WFP_VPN_NRPT_TRIGGER_DECREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x59898, 0x4652 bytes
    // netio.sys .rdata:0x715d0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f68, 0x4e8c bytes
    // netio.sys .rdata:0x715d0, 0x4dd3 bytes
    //
    _b92(sdk::unknown_ptr) wfp_vpn_nrpt_trigger_decrement_event;
    
    // [WFP_VPN_NRPT_TRIGGER_INCREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598a8, 0x4652 bytes
    // netio.sys .rdata:0x71600, 0x4dd3 bytes
    // netio.sys .rdata:0x71f98, 0x4e8c bytes
    // netio.sys .rdata:0x71600, 0x4dd3 bytes
    //
    _b93(sdk::unknown_ptr) wfp_vpn_nrpt_trigger_increment_event;
    
    // [WFP_VPN_SECURITY_DESCRIPTOR_TRIGGER_DECREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598b8, 0x4652 bytes
    // netio.sys .rdata:0x71590, 0x4dd3 bytes
    // netio.sys .rdata:0x71f28, 0x4e8c bytes
    // netio.sys .rdata:0x71590, 0x4dd3 bytes
    //
    _b94(sdk::unknown_ptr) wfp_vpn_security_descriptor_trigger_decrement_event;
    
    // [WFP_VPN_SECURITY_DESCRIPTOR_TRIGGER_INCREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598c8, 0x4652 bytes
    // netio.sys .rdata:0x71560, 0x4dd3 bytes
    // netio.sys .rdata:0x71ef8, 0x4e8c bytes
    // netio.sys .rdata:0x71560, 0x4dd3 bytes
    //
    _b95(sdk::unknown_ptr) wfp_vpn_security_descriptor_trigger_increment_event;
    
    // [WFP_VPN_SID_TRIGGER_DECREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598d8, 0x4652 bytes
    // netio.sys .rdata:0x71640, 0x4dd3 bytes
    // netio.sys .rdata:0x71fd8, 0x4e8c bytes
    // netio.sys .rdata:0x71640, 0x4dd3 bytes
    //
    _b96(sdk::unknown_ptr) wfp_vpn_sid_trigger_decrement_event;
    
    // [WFP_VPN_SID_TRIGGER_INCREMENT_EVENT]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x598e8, 0x4652 bytes
    // netio.sys .rdata:0x715c0, 0x4dd3 bytes
    // netio.sys .rdata:0x71f58, 0x4e8c bytes
    // netio.sys .rdata:0x715c0, 0x4dd3 bytes
    //
    _b97(sdk::unknown_ptr) wfp_vpn_sid_trigger_increment_event;
    
    // [WfpWriteNeteventToUnifiedTrace]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x149d8, 0x4652 bytes
    // netio.sys .text:0x1164c, 0x4dd3 bytes
    // netio.sys .text:0xe4cc, 0x4e8c bytes
    // netio.sys .text:0x116fc, 0x4dd3 bytes
    //
    _b98(sdk::unknown_ptr) wfp_write_netevent_to_unified_trace;
    
    // [WfppIncrementIndexAndPurgeEntries]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x43730, 0x4652 bytes
    // netio.sys .text:0x4dd00, 0x4dd3 bytes
    // netio.sys .text:0x4f530, 0x4e8c bytes
    // netio.sys .text:0x4dcc0, 0x4dd3 bytes
    //
    _b99(sdk::unknown_ptr) wfpp_increment_index_and_purge_entries;
    
    // [WfppObjectFind]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48a4c, 0x4652 bytes
    // netio.sys .text:0x56584, 0x4dd3 bytes
    // netio.sys .text:0x56380, 0x4e8c bytes
    // netio.sys .text:0x56544, 0x4dd3 bytes
    //
    _c00(sdk::unknown_ptr) wfpp_object_find;
    
    // [wmemcmp]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1a928, 0x4652 bytes
    // netio.sys .text:0x47854, 0x4dd3 bytes
    // netio.sys .text:0x490b0, 0x4e8c bytes
    // netio.sys .text:0x47814, 0x4dd3 bytes
    //
    _c01(sdk::function<int32_t(const wchar_t*, const wchar_t*, uint64_t)>*) wmemcmp;
    
    // [WPP_SF_dI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x458e8, 0x4652 bytes
    // netio.sys .text:0x50918, 0x4dd3 bytes
    // netio.sys .text:0x52298, 0x4e8c bytes
    // netio.sys .text:0x508d8, 0x4dd3 bytes
    //
    _c02(sdk::unknown_ptr) wpp_sf_d_i;
    
    // [WPP_SF_dIq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x47e78, 0x4652 bytes
    // netio.sys .text:0x5b2c8, 0x4dd3 bytes
    // netio.sys .text:0x5aa64, 0x4e8c bytes
    // netio.sys .text:0x5b288, 0x4dd3 bytes
    //
    _c03(sdk::unknown_ptr) wpp_sf_d_iq;
    
    // [WPP_SF_ddI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45940, 0x4652 bytes
    // netio.sys .text:0x50978, 0x4dd3 bytes
    // netio.sys .text:0x522f8, 0x4e8c bytes
    // netio.sys .text:0x50938, 0x4dd3 bytes
    //
    _c04(sdk::unknown_ptr) wpp_sf_dd_i;
    
    // [WPP_SF_ddIP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cd30, 0x4652 bytes
    // netio.sys .text:0x5b330, 0x4dd3 bytes
    // netio.sys .text:0x5aacc, 0x4e8c bytes
    // netio.sys .text:0x5b2f0, 0x4dd3 bytes
    //
    _c05(sdk::unknown_ptr) wpp_sf_dd_ip;
    
    // [WPP_SF_ddIq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x459a0, 0x4652 bytes
    // netio.sys .text:0x509e0, 0x4dd3 bytes
    // netio.sys .text:0x52360, 0x4e8c bytes
    // netio.sys .text:0x509a0, 0x4dd3 bytes
    //
    _c06(sdk::unknown_ptr) wpp_sf_dd_iq;
    
    // [WPP_SF_ddIqD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cd9c, 0x4652 bytes
    // netio.sys .text:0x5b3a4, 0x4dd3 bytes
    // netio.sys .text:0x5ab40, 0x4e8c bytes
    // netio.sys .text:0x5b364, 0x4dd3 bytes
    //
    _c07(sdk::unknown_ptr) wpp_sf_dd_iq_d;
    
    // [WPP_SF_ddIqd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45a10, 0x4652 bytes
    // netio.sys .text:0x50a58, 0x4dd3 bytes
    // netio.sys .text:0x523d8, 0x4e8c bytes
    // netio.sys .text:0x50a18, 0x4dd3 bytes
    //
    _c08(sdk::unknown_ptr) wpp_sf_dd_iqd;
    
    // [WPP_SF_dddD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46374, 0x4652 bytes
    // netio.sys .text:0x51c70, 0x4dd3 bytes
    // netio.sys .text:0x53214, 0x4e8c bytes
    // netio.sys .text:0x51c30, 0x4dd3 bytes
    //
    _c09(sdk::unknown_ptr) wpp_sf_ddd_d;
    
    // [WPP_SF_dddH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x463dc, 0x4652 bytes
    // netio.sys .text:0x51ce0, 0x4dd3 bytes
    // netio.sys .text:0x53284, 0x4e8c bytes
    // netio.sys .text:0x51ca0, 0x4dd3 bytes
    //
    _c10(sdk::unknown_ptr) wpp_sf_ddd_h;
    
    // [WPP_SF_dddI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46448, 0x4652 bytes
    // netio.sys .text:0x51d54, 0x4dd3 bytes
    // netio.sys .text:0x532f8, 0x4e8c bytes
    // netio.sys .text:0x51d14, 0x4dd3 bytes
    //
    _c11(sdk::unknown_ptr) wpp_sf_ddd_i;
    
    // [WPP_SF_ddd_IPV6_]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x465e0, 0x4652 bytes
    // netio.sys .text:0x51fb4, 0x4dd3 bytes
    // netio.sys .text:0x53558, 0x4e8c bytes
    // netio.sys .text:0x51f74, 0x4dd3 bytes
    //
    _c12(sdk::unknown_ptr) wpp_sf_ddd_ipv6_;
    
    // [WPP_SF_dddLD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x464ac, 0x4652 bytes
    // netio.sys .text:0x51dc0, 0x4dd3 bytes
    // netio.sys .text:0x53364, 0x4e8c bytes
    // netio.sys .text:0x51d80, 0x4dd3 bytes
    //
    _c13(sdk::unknown_ptr) wpp_sf_ddd_ld;
    
    // [WPP_SF_dddP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ce20, 0x4652 bytes
    // netio.sys .text:0x5b42c, 0x4dd3 bytes
    // netio.sys .text:0x5abc8, 0x4e8c bytes
    // netio.sys .text:0x5b3ec, 0x4dd3 bytes
    //
    _c14(sdk::unknown_ptr) wpp_sf_ddd_p;
    
    // [WPP_SF_dddS]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46528, 0x4652 bytes
    // netio.sys .text:0x51e40, 0x4dd3 bytes
    // netio.sys .text:0x533e4, 0x4e8c bytes
    // netio.sys .text:0x51e00, 0x4dd3 bytes
    //
    _c15(sdk::unknown_ptr) wpp_sf_ddd_s;
    
    // [WPP_SF_dddh]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46654, 0x4652 bytes
    // netio.sys .text:0x520a0, 0x4dd3 bytes
    // netio.sys .text:0x535d4, 0x4e8c bytes
    // netio.sys .text:0x52060, 0x4dd3 bytes
    //
    _c16(sdk::unknown_ptr) wpp_sf_dddh;
    
    // [WPP_SF_dddi]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x466c0, 0x4652 bytes
    // netio.sys .text:0x52114, 0x4dd3 bytes
    // netio.sys .text:0x53648, 0x4e8c bytes
    // netio.sys .text:0x520d4, 0x4dd3 bytes
    //
    _c17(sdk::unknown_ptr) wpp_sf_dddi;
    
    // [WPP_SF_dddl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4672c, 0x4652 bytes
    // netio.sys .text:0x52188, 0x4dd3 bytes
    // netio.sys .text:0x536bc, 0x4e8c bytes
    // netio.sys .text:0x52148, 0x4dd3 bytes
    //
    _c18(sdk::unknown_ptr) wpp_sf_dddl;
    
    // [WPP_SF_ddi]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ce8c, 0x4652 bytes
    // netio.sys .text:0x5b4a0, 0x4dd3 bytes
    // netio.sys .text:0x5ac3c, 0x4e8c bytes
    // netio.sys .text:0x5b460, 0x4dd3 bytes
    //
    _c19(sdk::unknown_ptr) wpp_sf_ddi_;
    
    // [WPP_SF_ddiD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ceec, 0x4652 bytes
    // netio.sys .text:0x5b508, 0x4dd3 bytes
    // netio.sys .text:0x5aca4, 0x4e8c bytes
    // netio.sys .text:0x5b4c8, 0x4dd3 bytes
    //
    _c20(sdk::unknown_ptr) wpp_sf_ddi_d;
    
    // [WPP_SF_dqII]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46a20, 0x4652 bytes
    // netio.sys .text:0x52708, 0x4dd3 bytes
    // netio.sys .text:0x53ab8, 0x4e8c bytes
    // netio.sys .text:0x526c8, 0x4dd3 bytes
    //
    _c21(sdk::unknown_ptr) wpp_sf_dq_ii;
    
    // [WPP_SF_dqdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x45af4, 0x4652 bytes
    // netio.sys .text:0x50b48, 0x4dd3 bytes
    // netio.sys .text:0x524c8, 0x4e8c bytes
    // netio.sys .text:0x50b08, 0x4dd3 bytes
    //
    _c22(sdk::unknown_ptr) wpp_sf_dqdd;
    
    // [WPP_SF_hDDHHdsLIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51334, 0x4652 bytes
    // netio.sys .text:0x6047c, 0x4dd3 bytes
    // netio.sys .text:0x5ff54, 0x4e8c bytes
    // netio.sys .text:0x6043c, 0x4dd3 bytes
    //
    _c23(sdk::unknown_ptr) wpp_sf_h_ddh_hds_lih;
    
    // [WPP_SF_h_IPV6__IPV6_HHdsLIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x51644, 0x4652 bytes
    // netio.sys .text:0x607a0, 0x4dd3 bytes
    // netio.sys .text:0x600c8, 0x4e8c bytes
    // netio.sys .text:0x60760, 0x4dd3 bytes
    //
    _c24(sdk::unknown_ptr) wpp_sf_h_ipv6_ipv6_h_hds_lih;
    
    // [WPP_SF_H_MAC__MAC_DDHIDIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x50fa4, 0x4652 bytes
    // netio.sys .text:0x60080, 0x4dd3 bytes
    // netio.sys .text:0x5fc90, 0x4e8c bytes
    // netio.sys .text:0x60040, 0x4dd3 bytes
    //
    _c25(sdk::unknown_ptr) wpp_sf_h_mac_mac_ddhidih;
    
    // [WPP_SF_H_MAC__MAC_DDHIH]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x510c8, 0x4652 bytes
    // netio.sys .text:0x601ac, 0x4dd3 bytes
    // netio.sys .text:0x5fdd4, 0x4e8c bytes
    // netio.sys .text:0x6016c, 0x4dd3 bytes
    //
    _c26(sdk::unknown_ptr) wpp_sf_h_mac_mac_ddhih;
    
    // [WPP_SF_HdIqqLL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c73c, 0x4652 bytes
    // netio.sys .text:0x5acb0, 0x4dd3 bytes
    // netio.sys .text:0x5a44c, 0x4e8c bytes
    // netio.sys .text:0x5ac70, 0x4dd3 bytes
    //
    _c27(sdk::unknown_ptr) wpp_sf_hd_iqq_ll;
    
    // [WPP_SF__HEX_]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4eff0, 0x4652 bytes
    // netio.sys .text:0x5d9b4, 0x4dd3 bytes
    // netio.sys .text:0x5d048, 0x4e8c bytes
    // netio.sys .text:0x5d974, 0x4dd3 bytes
    //
    _c28(sdk::unknown_ptr) wpp_sf_hex_;
    
    // [WPP_SF_I]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x41f20, 0x4652 bytes
    // netio.sys .text:0x47654, 0x4dd3 bytes
    // netio.sys .text:0x48eb0, 0x4e8c bytes
    // netio.sys .text:0x47614, 0x4dd3 bytes
    //
    _c29(sdk::unknown_ptr) wpp_sf_i;
    
    // [WPP_SF_idd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cfdc, 0x4652 bytes
    // netio.sys .text:0x5b604, 0x4dd3 bytes
    // netio.sys .text:0x5ada0, 0x4e8c bytes
    // netio.sys .text:0x5b5c4, 0x4dd3 bytes
    //
    _c30(sdk::unknown_ptr) wpp_sf_idd;
    
    // [WPP_SF__IPV4_d_IPV4_d]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x499b8, 0x4652 bytes
    // netio.sys .text:0x57bd8, 0x4dd3 bytes
    // netio.sys .text:0x57640, 0x4e8c bytes
    // netio.sys .text:0x57b98, 0x4dd3 bytes
    //
    _c31(sdk::unknown_ptr) wpp_sf_ipv4_d_ipv4_d;
    
    // [WPP_SF__IPV4_d_IPV4_ddD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49a20, 0x4652 bytes
    // netio.sys .text:0x57c48, 0x4dd3 bytes
    // netio.sys .text:0x576b0, 0x4e8c bytes
    // netio.sys .text:0x57c08, 0x4dd3 bytes
    //
    _c32(sdk::unknown_ptr) wpp_sf_ipv4_d_ipv4_dd_d;
    
    // [WPP_SF__IPV6_d_IPV6_d]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49aac, 0x4652 bytes
    // netio.sys .text:0x57cdc, 0x4dd3 bytes
    // netio.sys .text:0x57744, 0x4e8c bytes
    // netio.sys .text:0x57c9c, 0x4dd3 bytes
    //
    _c33(sdk::unknown_ptr) wpp_sf_ipv6_d_ipv6_d;
    
    // [WPP_SF__IPV6_d_IPV6_ddD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49b28, 0x4652 bytes
    // netio.sys .text:0x57d5c, 0x4dd3 bytes
    // netio.sys .text:0x577c4, 0x4e8c bytes
    // netio.sys .text:0x57d1c, 0x4dd3 bytes
    //
    _c34(sdk::unknown_ptr) wpp_sf_ipv6_d_ipv6_dd_d;
    
    // [WPP_SF_lqPLd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d03c, 0x4652 bytes
    // netio.sys .text:0x5b66c, 0x4dd3 bytes
    // netio.sys .text:0x5ae08, 0x4e8c bytes
    // netio.sys .text:0x5b62c, 0x4dd3 bytes
    //
    _c35(sdk::unknown_ptr) wpp_sf_lq_p_ld;
    
    // [WPP_SF_P]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4efac, 0x4652 bytes
    // netio.sys .text:0x5d968, 0x4dd3 bytes
    // netio.sys .text:0x5cffc, 0x4e8c bytes
    // netio.sys .text:0x5d928, 0x4dd3 bytes
    //
    _c36(sdk::unknown_ptr) wpp_sf_p;
    
    // [WPP_SF_PPqL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c9b0, 0x4652 bytes
    // netio.sys .text:0x5aeb0, 0x4dd3 bytes
    // netio.sys .text:0x5a64c, 0x4e8c bytes
    // netio.sys .text:0x5ae70, 0x4dd3 bytes
    //
    _c37(sdk::unknown_ptr) wpp_sf_p_pq_l;
    
    // [WPP_SF_Pd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d0c0, 0x4652 bytes
    // netio.sys .text:0x5af24, 0x4dd3 bytes
    // netio.sys .text:0x5a6c0, 0x4e8c bytes
    // netio.sys .text:0x5aee4, 0x4dd3 bytes
    //
    _c38(sdk::unknown_ptr) wpp_sf_pd;
    
    // [WPP_SF_PdI]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ca1c, 0x4652 bytes
    // netio.sys .text:0x5af80, 0x4dd3 bytes
    // netio.sys .text:0x5a71c, 0x4e8c bytes
    // netio.sys .text:0x5af40, 0x4dd3 bytes
    //
    _c39(sdk::unknown_ptr) wpp_sf_pd_i;
    
    // [WPP_SF_PdIq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ca7c, 0x4652 bytes
    // netio.sys .text:0x5afe8, 0x4dd3 bytes
    // netio.sys .text:0x5a784, 0x4e8c bytes
    // netio.sys .text:0x5afa8, 0x4dd3 bytes
    //
    _c40(sdk::unknown_ptr) wpp_sf_pd_iq;
    
    // [WPP_SF_PP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c8c4, 0x4652 bytes
    // netio.sys .text:0x5adb4, 0x4dd3 bytes
    // netio.sys .text:0x5a550, 0x4e8c bytes
    // netio.sys .text:0x5ad74, 0x4dd3 bytes
    //
    _c41(sdk::unknown_ptr) wpp_sf_pp;
    
    // [WPP_SF_PPPqLqD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4c914, 0x4652 bytes
    // netio.sys .text:0x5ae0c, 0x4dd3 bytes
    // netio.sys .text:0x5a5a8, 0x4e8c bytes
    // netio.sys .text:0x5adcc, 0x4dd3 bytes
    //
    _c42(sdk::unknown_ptr) wpp_sf_pp_pq_lq_d;
    
    // [WPP_SF_Pq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49968, 0x4652 bytes
    // netio.sys .text:0x57b80, 0x4dd3 bytes
    // netio.sys .text:0x575e8, 0x4e8c bytes
    // netio.sys .text:0x57b40, 0x4dd3 bytes
    //
    _c43(sdk::unknown_ptr) wpp_sf_pq;
    
    // [WPP_SF_PqL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cae8, 0x4652 bytes
    // netio.sys .text:0x5b05c, 0x4dd3 bytes
    // netio.sys .text:0x5a7f8, 0x4e8c bytes
    // netio.sys .text:0x5b01c, 0x4dd3 bytes
    //
    _c44(sdk::unknown_ptr) wpp_sf_pq_l;
    
    // [WPP_SF_PqLdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cbb4, 0x4652 bytes
    // netio.sys .text:0x5b138, 0x4dd3 bytes
    // netio.sys .text:0x5a8d4, 0x4e8c bytes
    // netio.sys .text:0x5b0f8, 0x4dd3 bytes
    //
    _c45(sdk::unknown_ptr) wpp_sf_pq_ldd;
    
    // [WPP_SF_PqLP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cb48, 0x4652 bytes
    // netio.sys .text:0x5b0c4, 0x4dd3 bytes
    // netio.sys .text:0x5a860, 0x4e8c bytes
    // netio.sys .text:0x5b084, 0x4dd3 bytes
    //
    _c46(sdk::unknown_ptr) wpp_sf_pq_lp;
    
    // [WPP_SF_PqLq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cc34, 0x4652 bytes
    // netio.sys .text:0x5b1c0, 0x4dd3 bytes
    // netio.sys .text:0x5a95c, 0x4e8c bytes
    // netio.sys .text:0x5b180, 0x4dd3 bytes
    //
    _c47(sdk::unknown_ptr) wpp_sf_pq_lq;
    
    // [WPP_SF_PqLqdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4cca0, 0x4652 bytes
    // netio.sys .text:0x5b234, 0x4dd3 bytes
    // netio.sys .text:0x5a9d0, 0x4e8c bytes
    // netio.sys .text:0x5b1f4, 0x4dd3 bytes
    //
    _c48(sdk::unknown_ptr) wpp_sf_pq_lqdd;
    
    // [WPP_SF_PqPPd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e8d8, 0x4652 bytes
    // netio.sys .text:0x5d230, 0x4dd3 bytes
    // netio.sys .text:0x5c8c8, 0x4e8c bytes
    // netio.sys .text:0x5d1f0, 0x4dd3 bytes
    //
    _c49(sdk::unknown_ptr) wpp_sf_pq_p_pd;
    
    // [WPP_SF_PqPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e74c, 0x4652 bytes
    // netio.sys .text:0x5d090, 0x4dd3 bytes
    // netio.sys .text:0x5c728, 0x4e8c bytes
    // netio.sys .text:0x5d050, 0x4dd3 bytes
    //
    _c50(sdk::unknown_ptr) wpp_sf_pq_pp;
    
    // [WPP_SF_PqPPPd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e7b4, 0x4652 bytes
    // netio.sys .text:0x5d100, 0x4dd3 bytes
    // netio.sys .text:0x5c798, 0x4e8c bytes
    // netio.sys .text:0x5d0c0, 0x4dd3 bytes
    //
    _c51(sdk::unknown_ptr) wpp_sf_pq_pp_pd;
    
    // [WPP_SF_PqPPPdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e840, 0x4652 bytes
    // netio.sys .text:0x5d190, 0x4dd3 bytes
    // netio.sys .text:0x5c828, 0x4e8c bytes
    // netio.sys .text:0x5d150, 0x4dd3 bytes
    //
    _c52(sdk::unknown_ptr) wpp_sf_pq_pp_pdd;
    
    // [WPP_SF_Pqdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e958, 0x4652 bytes
    // netio.sys .text:0x5d2b8, 0x4dd3 bytes
    // netio.sys .text:0x5c950, 0x4e8c bytes
    // netio.sys .text:0x5d278, 0x4dd3 bytes
    //
    _c53(sdk::unknown_ptr) wpp_sf_pqdd;
    
    // [WPP_SF_qLdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d1d4, 0x4652 bytes
    // netio.sys .text:0x5b7c4, 0x4dd3 bytes
    // netio.sys .text:0x5af60, 0x4e8c bytes
    // netio.sys .text:0x5b784, 0x4dd3 bytes
    //
    _c54(sdk::unknown_ptr) wpp_sf_q_ldd;
    
    // [WPP_SF_qLqD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d240, 0x4652 bytes
    // netio.sys .text:0x5b838, 0x4dd3 bytes
    // netio.sys .text:0x5afd4, 0x4e8c bytes
    // netio.sys .text:0x5b7f8, 0x4dd3 bytes
    //
    _c55(sdk::unknown_ptr) wpp_sf_q_lq_d;
    
    // [WPP_SF_qLqDPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d2ac, 0x4652 bytes
    // netio.sys .text:0x5b8ac, 0x4dd3 bytes
    // netio.sys .text:0x5b048, 0x4e8c bytes
    // netio.sys .text:0x5b86c, 0x4dd3 bytes
    //
    _c56(sdk::unknown_ptr) wpp_sf_q_lq_dpp;
    
    // [WPP_SF_qLqdl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d33c, 0x4652 bytes
    // netio.sys .text:0x5b940, 0x4dd3 bytes
    // netio.sys .text:0x5b0dc, 0x4e8c bytes
    // netio.sys .text:0x5b900, 0x4dd3 bytes
    //
    _c57(sdk::unknown_ptr) wpp_sf_q_lqdl;
    
    // [WPP_SF_qP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49c10, 0x4652 bytes
    // netio.sys .text:0x57e10, 0x4dd3 bytes
    // netio.sys .text:0x57878, 0x4e8c bytes
    // netio.sys .text:0x57dd0, 0x4dd3 bytes
    //
    _c58(sdk::unknown_ptr) wpp_sf_q_p;
    
    // [WPP_SF_qPPdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4eb0c, 0x4652 bytes
    // netio.sys .text:0x5d48c, 0x4dd3 bytes
    // netio.sys .text:0x5cb24, 0x4e8c bytes
    // netio.sys .text:0x5d44c, 0x4dd3 bytes
    //
    _c59(sdk::unknown_ptr) wpp_sf_q_p_pdd;
    
    // [WPP_SF_qPD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4e9c8, 0x4652 bytes
    // netio.sys .text:0x5d330, 0x4dd3 bytes
    // netio.sys .text:0x5c9c8, 0x4e8c bytes
    // netio.sys .text:0x5d2f0, 0x4dd3 bytes
    //
    _c60(sdk::unknown_ptr) wpp_sf_q_pd;
    
    // [WPP_SF_qPd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4eb8c, 0x4652 bytes
    // netio.sys .text:0x5d514, 0x4dd3 bytes
    // netio.sys .text:0x5cbac, 0x4e8c bytes
    // netio.sys .text:0x5d4d4, 0x4dd3 bytes
    //
    _c61(sdk::unknown_ptr) wpp_sf_q_pd_;
    
    // [WPP_SF_qPdd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ebec, 0x4652 bytes
    // netio.sys .text:0x5d57c, 0x4dd3 bytes
    // netio.sys .text:0x5cc14, 0x4e8c bytes
    // netio.sys .text:0x5d53c, 0x4dd3 bytes
    //
    _c62(sdk::unknown_ptr) wpp_sf_q_pdd;
    
    // [WPP_SF_qPl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49c60, 0x4652 bytes
    // netio.sys .text:0x57e68, 0x4dd3 bytes
    // netio.sys .text:0x578d0, 0x4e8c bytes
    // netio.sys .text:0x57e28, 0x4dd3 bytes
    //
    _c63(sdk::unknown_ptr) wpp_sf_q_pl;
    
    // [WPP_SF_qPPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ea28, 0x4652 bytes
    // netio.sys .text:0x5d398, 0x4dd3 bytes
    // netio.sys .text:0x5ca30, 0x4e8c bytes
    // netio.sys .text:0x5d358, 0x4dd3 bytes
    //
    _c64(sdk::unknown_ptr) wpp_sf_q_ppp;
    
    // [WPP_SF_qPPPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ea90, 0x4652 bytes
    // netio.sys .text:0x5d408, 0x4dd3 bytes
    // netio.sys .text:0x5caa0, 0x4e8c bytes
    // netio.sys .text:0x5d3c8, 0x4dd3 bytes
    //
    _c65(sdk::unknown_ptr) wpp_sf_q_pppp;
    
    // [WPP_SF_qPq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49cc0, 0x4652 bytes
    // netio.sys .text:0x57ed0, 0x4dd3 bytes
    // netio.sys .text:0x57938, 0x4e8c bytes
    // netio.sys .text:0x57e90, 0x4dd3 bytes
    //
    _c66(sdk::unknown_ptr) wpp_sf_q_pq;
    
    // [WPP_SF_qPqL]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d3c0, 0x4652 bytes
    // netio.sys .text:0x5b9c8, 0x4dd3 bytes
    // netio.sys .text:0x5b164, 0x4e8c bytes
    // netio.sys .text:0x5b988, 0x4dd3 bytes
    //
    _c67(sdk::unknown_ptr) wpp_sf_q_pq_l;
    
    // [WPP_SF_qlqqPPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49dbc, 0x4652 bytes
    // netio.sys .text:0x57f34, 0x4dd3 bytes
    // netio.sys .text:0x5799c, 0x4e8c bytes
    // netio.sys .text:0x57ef4, 0x4dd3 bytes
    //
    _c68(sdk::unknown_ptr) wpp_sf_qlqq_ppp;
    
    // [WPP_SF_qqDl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d48c, 0x4652 bytes
    // netio.sys .text:0x5ba3c, 0x4dd3 bytes
    // netio.sys .text:0x5b1d8, 0x4e8c bytes
    // netio.sys .text:0x5b9fc, 0x4dd3 bytes
    //
    _c69(sdk::unknown_ptr) wpp_sf_qq_dl;
    
    // [WPP_SF_qqDlll]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d4f8, 0x4652 bytes
    // netio.sys .text:0x5bab0, 0x4dd3 bytes
    // netio.sys .text:0x5b24c, 0x4e8c bytes
    // netio.sys .text:0x5ba70, 0x4dd3 bytes
    //
    _c70(sdk::unknown_ptr) wpp_sf_qq_dlll;
    
    // [WPP_SF_qqPDPddd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4ec58, 0x4652 bytes
    // netio.sys .text:0x5d5f0, 0x4dd3 bytes
    // netio.sys .text:0x5cc88, 0x4e8c bytes
    // netio.sys .text:0x5d5b0, 0x4dd3 bytes
    //
    _c71(sdk::unknown_ptr) wpp_sf_qq_pd_pddd;
    
    // [WPP_SF_qqPl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49e54, 0x4652 bytes
    // netio.sys .text:0x57fd4, 0x4dd3 bytes
    // netio.sys .text:0x57a3c, 0x4e8c bytes
    // netio.sys .text:0x57f94, 0x4dd3 bytes
    //
    _c72(sdk::unknown_ptr) wpp_sf_qq_pl;
    
    // [WPP_SF_qqPlD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49ec0, 0x4652 bytes
    // netio.sys .text:0x58048, 0x4dd3 bytes
    // netio.sys .text:0x57ab0, 0x4e8c bytes
    // netio.sys .text:0x58008, 0x4dd3 bytes
    //
    _c73(sdk::unknown_ptr) wpp_sf_qq_pl_d;
    
    // [WPP_SF_qqPP]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4d650, 0x4652 bytes
    // netio.sys .text:0x5bc1c, 0x4dd3 bytes
    // netio.sys .text:0x5b3b8, 0x4e8c bytes
    // netio.sys .text:0x5bbdc, 0x4dd3 bytes
    //
    _c74(sdk::unknown_ptr) wpp_sf_qq_pp;
    
    // [WPP_SF_qqqPl]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x49fa0, 0x4652 bytes
    // netio.sys .text:0x58130, 0x4dd3 bytes
    // netio.sys .text:0x57b98, 0x4e8c bytes
    // netio.sys .text:0x580f0, 0x4dd3 bytes
    //
    _c75(sdk::unknown_ptr) wpp_sf_qqq_pl;
    
    // [WPP_SF_sD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48570, 0x4652 bytes
    // netio.sys .text:0x561cc, 0x4dd3 bytes
    // netio.sys .text:0x55cd8, 0x4e8c bytes
    // netio.sys .text:0x5618c, 0x4dd3 bytes
    //
    _c76(sdk::unknown_ptr) wpp_sf_s_d;
    
    // [WPP_SF_sd]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x48570, 0x4652 bytes
    // netio.sys .text:0x561cc, 0x4dd3 bytes
    // netio.sys .text:0x55cd8, 0x4e8c bytes
    // netio.sys .text:0x5618c, 0x4dd3 bytes
    //
    _c77(sdk::unknown_ptr) wpp_sf_sd;
    
    // [WPP_SF_SD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40c14, 0x4652 bytes
    // netio.sys .text:0x4a60c, 0x4dd3 bytes
    // netio.sys .text:0x4bc0c, 0x4e8c bytes
    // netio.sys .text:0x4a5cc, 0x4dd3 bytes
    //
    _c78(sdk::unknown_ptr) wpp_sf_sd_;
    
    // [WPP_SF_SDD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x40c9c, 0x4652 bytes
    // netio.sys .text:0x4a698, 0x4dd3 bytes
    // netio.sys .text:0x4bc98, 0x4e8c bytes
    // netio.sys .text:0x4a658, 0x4dd3 bytes
    //
    _c79(sdk::unknown_ptr) wpp_sf_sdd;
    
    // [WPP_SF_sqD]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x46800, 0x4652 bytes
    // netio.sys .text:0x522c4, 0x4dd3 bytes
    // netio.sys .text:0x537c0, 0x4e8c bytes
    // netio.sys .text:0x52284, 0x4dd3 bytes
    //
    _c80(sdk::unknown_ptr) wpp_sf_sq_d;
    
    // [WPP_SF_sqq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a100, 0x4652 bytes
    // netio.sys .text:0x582a4, 0x4dd3 bytes
    // netio.sys .text:0x57d0c, 0x4e8c bytes
    // netio.sys .text:0x58264, 0x4dd3 bytes
    //
    _c81(sdk::unknown_ptr) wpp_sf_sqq;
    
    // [WPP_SF_sqqq]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x4a194, 0x4652 bytes
    // netio.sys .text:0x58338, 0x4dd3 bytes
    // netio.sys .text:0x57da0, 0x4e8c bytes
    // netio.sys .text:0x582f8, 0x4dd3 bytes
    //
    _c82(sdk::unknown_ptr) wpp_sf_sqqq;
    
    // [WPP_ThisDir_CTLGUID_NETIO]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .rdata:0x57ca0, 0x4652 bytes
    // netio.sys .rdata:0x6c990, 0x4dd3 bytes
    // netio.sys .rdata:0x6d028, 0x4e8c bytes
    // netio.sys .rdata:0x6c990, 0x4dd3 bytes
    //
    _c83(sdk::unknown_ptr) wpp_this_dir_ctlguid_netio;
    
    // [WsklibNmrCallbackAttachProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x1f040, 0x4652 bytes
    // netio.sys .text:0x1ff30, 0x4dd3 bytes
    // netio.sys .text:0x5f110, 0x4e8c bytes
    // netio.sys .text:0x1ffc0, 0x4dd3 bytes
    //
    _c84(sdk::unknown_ptr) wsklib_nmr_callback_attach_provider;
    
    // [WsklibNmrCallbackCleanupProviderContext]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x199e0, 0x4652 bytes
    // netio.sys .text:0x200f0, 0x4dd3 bytes
    // netio.sys .text:0x5f230, 0x4e8c bytes
    // netio.sys .text:0x20180, 0x4dd3 bytes
    //
    _c85(sdk::unknown_ptr) wsklib_nmr_callback_cleanup_provider_context;
    
    // [WsklibNmrCallbackDetachProvider]
    // Ldr = [netio.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x19a20, 0x4652 bytes
    // netio.sys .text:0x1f6c0, 0x4dd3 bytes
    // netio.sys .text:0x5f280, 0x4e8c bytes
    // netio.sys .text:0x1f750, 0x4dd3 bytes
    //
    _c86(sdk::unknown_ptr) wsklib_nmr_callback_detach_provider;
};
#include "magic/api.end.hpp"
