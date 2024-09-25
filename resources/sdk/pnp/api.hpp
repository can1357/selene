#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/irp_t.hpp"
#include "../nt/device_node_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../io/stack_location_t.hpp"
#include "../nt/group_affinity_t.hpp"
#include "../nt/event_descriptor_t.hpp"
#include "../nt/event_data_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace pnp
{
    // [PnpAllocateAndEnableEventWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x71efc4, 0x1fd000 bytes
    //
    _m00(sdk::unknown_ptr) allocate_and_enable_event_watchdog;
    
    // [PnpAsyncOptionsIoStatusBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5d1a0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) async_options_io_status_block;
    
    // [PnpAsyncOptionsWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5d1c0, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) async_options_work_item;
    
    // [PnpCancelRemoveLockedDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x953558, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) cancel_remove_locked_device_node;
    
    // [PnpCompareGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4fa9a8, 0x32828 bytes
    //
    _m04(sdk::unknown_ptr) compare_guid;
    
    // [PnpComputerIdNamespaceGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9a80, 0x32828 bytes
    //
    _m05(sdk::unknown_ptr) computer_id_namespace_guid;
    
    // [_PnpContainerRaiseDevicesChangedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6dea10, 0x32828 bytes
    //
    _m06(sdk::unknown_ptr) container_raise_devices_changed_event;
    
    // [_PnpCtxRegDeletePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6d9b08, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) ctx_reg_delete_path;
    
    // [_PnpCtxRegOpenCurrentUserKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6d9b68, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) ctx_reg_open_current_user_key;
    
    // [_PnpCtxUnregisterMachineNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0xa51cc8, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) ctx_unregister_machine_node;
    
    // [PnpDelayedRemoveWorkerContextCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9535b0, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) delayed_remove_worker_context_create;
    
    // [PnpDeviceObjectFromDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4f5c24, 0x32828 bytes
    //
    _m11(sdk::unknown_ptr) device_object_from_device_instance;
    
    // [PnpDiagRundownConnectionResourceForEachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x952230, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) diag_rundown_connection_resource_for_each_device;
    
    // [PnpDiagRundownInterruptResourceForEachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x952380, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) diag_rundown_interrupt_resource_for_each_device;
    
    // [PnpDisableAndFreeEventWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x71ff70, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) disable_and_free_event_watchdog;
    
    // [PnpDisableRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3430ec, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) disable_rebalance;
    
    // [PnpDriverStarted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x528e38, 0x32828 bytes
    //
    _m16(sdk::unknown_ptr) driver_started;
    
    // [PnpFinalizeDeviceRemovalForReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x951efc, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) finalize_device_removal_for_reset;
    
    // [PnpFreeVetoInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x647bcc, 0x32828 bytes
    //
    _m18(sdk::unknown_ptr) free_veto_information;
    
    // [PnpGetDeviceInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54bfbc, 0x1fd000 bytes
    //
    _m19(sdk::function<nt::unicode_view*(struct nt::device_node_t*)>*) get_device_instance_path;
    
    // [PnpGetProcessCommandLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x95ab60, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) get_process_command_line;
    
    // [_PnpHasDerivedKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x448068, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) has_derived_keys;
    
    // [PnpInitPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7a86a4, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) init_phase0;
    
    // [PnpInitializeInheritedRestrictedSd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7dbf60, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) initialize_inherited_restricted_sd;
    
    // [PnpInitializeTriageBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54ce80, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) initialize_triage_block;
    
    // [PnpIommuBlockUnblockDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96370c, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) iommu_block_unblock_device;
    
    // [PnpIsAnyDeviceInstanceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x528e94, 0x32828 bytes
    //
    _m26(sdk::unknown_ptr) is_any_device_instance_enabled;
    
    // [PnpKsrIsHhrPrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5aba9, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) ksr_is_hhr_prepare;
    
    // [PnpPdcActivatorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) pdc_activator_callback;
    
    // [PnpPdcClientHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5abf8, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) pdc_client_handle;
    
    // [PnpPowerStateTransitionWatchdogCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54cef0, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) power_state_transition_watchdog_callback;
    
    // [PnpPowerStateTransitionWatchdogPopRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9521b4, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) power_state_transition_watchdog_pop_record;
    
    // [PnpPowerStateTransitionWatchdogPushRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9521cc, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) power_state_transition_watchdog_push_record;
    
    // [PnpQueryProximityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x327170, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) query_proximity_id;
    
    // [PnpRebuildPowerRelationsQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5c7e0, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) rebuild_power_relations_queue_lock;
    
    // [PnpSaveGlobalsToMinidump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54cf00, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) save_globals_to_minidump;
    
    // [PnpSetupPhaseInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3430e8, 0x32828 bytes
    //
    _m36(sdk::unknown_ptr) setup_phase_in_progress;
    
    // [PnpSetupTypeInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3430e7, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) setup_type_in_progress;
    
    // [PnpSurpriseFailUnsafeDmaDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x960840, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) surprise_fail_unsafe_dma_devices;
    
    // [PnpTraceDmaGuardSystemPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86e80c, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) trace_dma_guard_system_policy;
    
    // [PnpTraceQueryStopFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x64e224, 0x32828 bytes
    //
    _m40(sdk::unknown_ptr) trace_query_stop_failure;
    
    // [PnpTraceWatchdogViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x550e04, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) trace_watchdog_violation;
    
    // [PnpWatchdogFirstChanceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x952200, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) watchdog_first_chance_callback;
    
    // [PnpWatchdogSecondChanceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54d6f0, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) watchdog_second_chance_callback;
    
    // [PnpWatchdogTimerPause]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x720064, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) watchdog_timer_pause;
    
    // [PnpWatchdogTimerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x720034, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) watchdog_timer_start;
    
    // [PnpFreeWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210a44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b354, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) free_watchdog;
    
    // [PnpQueryWatchdogTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210c9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35bbbc, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) query_watchdog_timeout;
    
    // [PnpSynchronizeDeviceEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x538188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7e8804, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) synchronize_device_event_queue;
    
    // [PnpWatchdogGetElapsedTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x508ff8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508db8, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) watchdog_get_elapsed_time;
    
    // [PnpWatchdogWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a8ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8a7680, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) watchdog_work_item;
    
    // [PnpAllocateWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210c08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8d1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35bb28, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) allocate_watchdog;
    
    // [PnpCallDriverEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7533e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75aca8, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) call_driver_entry;
    
    // [PnpCancelDeviceActionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5087a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54e9ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508568, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) cancel_device_action_request;
    
    // [PnpCancelRemoveOnHungDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632f60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f6c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89de70, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) cancel_remove_on_hung_devices;
    
    // [PnpClearDeviceTemporaryProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7521b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf77c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759df8, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) clear_device_temporary_properties;
    
    // [_PnpContainerRaiseDevicesChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7362b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1c04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73def0, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) container_raise_devices_change_event;
    
    // [PnpCopyResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af9e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961758, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae190, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) copy_resource_list;
    
    // [_PnpCtxCreateNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x781628, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x860388, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78b3c8, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) ctx_create_node;
    
    // [_PnpCtxDestroyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x971400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa517e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fce0, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) ctx_destroy_node;
    
    // [_PnpCtxFindNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x971500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa518e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fde0, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) ctx_find_node;
    
    // [_PnpCtxGetCachedNodeBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5da760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x617168, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) ctx_get_cached_node_base_key;
    
    // [_PnpCtxOpenContextNodeBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9715c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa519ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fea8, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) ctx_open_context_node_base_key;
    
    // [_PnpCtxRegQueryKeyPathName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77ff20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864668, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789cc0, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) ctx_reg_query_key_path_name;
    
    // [_PnpCtxRegisterMachineNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x971780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51b64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x970060, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) ctx_register_machine_node;
    
    // [PnpDelayedRemoveWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc45220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cde0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc451e0, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) delayed_remove_worker_thread;
    
    // [PnpDeleteAllDependencyRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60452c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f511c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70fe1c, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) delete_all_dependency_relations;
    
    // [PnpDeleteDeviceActionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36b070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d4c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36c3f0, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) delete_device_action_request;
    
    // [PnpDeviceCompletionRequestDestroyWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x379d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b0a0, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) device_completion_request_destroy_work_item;
    
    // [PnpDeviceObjectFromDeviceInstanceWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x60489c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710394, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71018c, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) device_object_from_device_instance_with_tag;
    
    // [PnpDevicePropertyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320f80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc45140, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) device_property_lock;
    
    // [PnpDiagRundownForEachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631d54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89cbc0, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) diag_rundown_for_each_device;
    
    // [PnpDisableWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f55ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72268c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a9c0, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) disable_watchdog;
    
    // [_PnpDispatchDevicePanel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78d700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x863c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7974a0, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) dispatch_device_panel;
    
    // [PnpEnableWatchdog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f5620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fc60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70aa34, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) enable_watchdog;
    
    // [PnpFreeSystemPdoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x607540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dcf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e31d0, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) free_system_pdo_list;
    
    // [PnpGetRegistryDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1bac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355788, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2464, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) get_registry_dword;
    
    // [PnpInitializePnpWatchdogs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4c03c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d188, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bec0, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) initialize_pnp_watchdogs;
    
    // [PnpInsertNoopEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7894, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8864, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6b94, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) insert_noop_event;
    
    // [PnpKsrCallbackObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc42fe0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aba0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42fa0, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) ksr_callback_object;
    
    // [PnpKsrEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43038, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ac00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ff8, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) ksr_enabled;
    
    // [PnpKsrNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc42ff0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5abb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42fb0, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) ksr_notify_list;
    
    // [PnpKsrNotifyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43000, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5abc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42fc0, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) ksr_notify_lock;
    
    // [PnpKsrPrepared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc42fe8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aba8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42fa8, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) ksr_prepared;
    
    // [_PnpMultiSzDeleteString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2a60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x979170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x977a50, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) multi_sz_delete_string;
    
    // [PnpNotifyTargetDeviceChangeNotifyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c77cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c6acc, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) notify_target_device_change_notify_entry;
    
    // [_PnpObjectRaiseDevicesChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x736270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73deb0, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) object_raise_devices_change_event;
    
    // [PnpOpenCCSPnpRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4c10c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d1f4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bf90, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) open_ccs_pnp_reg_key;
    
    // [PnpQueryWatchdogTimeoutConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa4c0a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d280, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bf2c, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) query_watchdog_timeout_configuration;
    
    // [PnpRecordBlackbox]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f567c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70aa90, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) record_blackbox;
    
    // [PnpRecordBlackboxDelayedRemoveWorkerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8b6158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9634a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4908, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) record_blackbox_delayed_remove_worker_information;
    
    // [PnpRecordBlackboxDeviceCompletionQueueInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74eabc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7225fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7566fc, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) record_blackbox_device_completion_queue_information;
    
    // [PnpRecordBlackboxPnpEventInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x729ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fcb84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7324b8, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) record_blackbox_pnp_event_information;
    
    // [PnpRecordBlackboxPnpEventWorkerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f57c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x720170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70ac14, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) record_blackbox_pnp_event_worker_information;
    
    // [PnpRemoveDeviceActionRequestFromQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x508800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54ea44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5085c0, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) remove_device_action_request_from_queue;
    
    // [PnpResetMaximumRetryAttempts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3211e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc453f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc45398, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) reset_maximum_retry_attempts;
    
    // [PnpResetRetryInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3211d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc453f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc453a0, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) reset_retry_interval;
    
    // [PnpSetupIoStatusBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc45600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d160, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455a0, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) setup_io_status_block;
    
    // [PnpSetupWnfSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf5170, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17be8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5170, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) setup_wnf_subscription;
    
    // [PnpSetupWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc455e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45580, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) setup_work_item;
    
    // [PnpTraceDeviceRemoveProcessVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aee54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ad604, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) trace_device_remove_process_veto;
    
    // [PnpTraceDmaGuardDevicePolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7549e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c2a4, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) trace_dma_guard_device_policy;
    
    // [PnpTraceDriverBlocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960bf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad7e8, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) trace_driver_blocked;
    
    // [PnpTraceInterruptConnection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x742a70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7edd3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a6b0, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) trace_interrupt_connection;
    
    // [PnpTraceIommuDeviceProperties]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960cfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad8f0, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) trace_iommu_device_properties;
    
    // [PnpTraceSecureDeviceEnumeration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8add40, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) trace_secure_device_enumeration;
    
    // [PnpTrackQueryRemoveDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x718250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6759f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71fcb0, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) track_query_remove_devices;
    
    // [PnpUpdateRebootRequiredReason]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89f544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9533dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89dcf4, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) update_reboot_required_reason;
    
    // [PnpWatchdogBugcheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x508b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54cf54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508900, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) watchdog_bugcheck;
    
    // [PnpWatchdogBugcheckConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc4335c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cf94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4331c, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) watchdog_bugcheck_config;
    
    // [PnpWatchdogBugcheckRegName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd920, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x13098, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd538, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) watchdog_bugcheck_reg_name;
    
    // [PnpWatchdogEtwWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8a8cd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54d2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7484, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) watchdog_etw_write;
    
    // [PnpWatchdogExtractTriageInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x508f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54d5dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508cd0, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) watchdog_extract_triage_information;
    
    // [PnpWatchdogFirstChanceRegName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd988, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x130c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd5a0, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) watchdog_first_chance_reg_name;
    
    // [PnpWatchdogSecondChanceRegName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xd950, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x130f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd568, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) watchdog_second_chance_reg_name;
    
    // [PnpWatchdogTimeoutFirstChance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43360, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cf90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43320, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) watchdog_timeout_first_chance;
    
    // [PnpWatchdogTimeoutSecondChance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc43358, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cf98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43318, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) watchdog_timeout_second_chance;
    
    // [PnpWatchdogTimerAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f56bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fcbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70ab10, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) watchdog_timer_allocate;
    
    // [PnpAcquireDependencyRelationsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f5914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710224, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) acquire_dependency_relations_lock;
    
    // [PnpAddVetoInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6478e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a824, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a76ac, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) add_veto_information;
    
    // [PnpAllocateCriticalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430428, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c3c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732b1c, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) allocate_critical_memory;
    
    // [PnpAllocateDeviceInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78be20, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) allocate_device_instance_path;
    
    // [PnpAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a273c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ccb0, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) allocate_generic_table_entry;
    
    // [PnpAllocateMultiSZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4325d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ba8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7536cc, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) allocate_multi_sz;
    
    // [PnpAllocatePWSTR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4437cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9ca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715928, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9a78, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) allocate_pwstr;
    
    // [PnpAllocateResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4335f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72feb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ef52c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x737ec8, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) allocate_resources;
    
    // [PnpAssignResourcesToDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4334e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72fda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f10fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x737db0, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) assign_resources_to_devices;
    
    // [PnpAsyncOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ee4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09924, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f44, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) async_options;
    
    // [PnpAsynchronousCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ae40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c29c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x722b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753edc, 0x1fe000 bytes
    //
    _n28(sdk::function<int32_t(struct nt::device_object_t*, struct io::stack_location_t*, sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*, void*)>*, void*)>*) asynchronous_call;
    
    // [PnpBootDeviceWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1379c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2c84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c4b48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3534, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) boot_device_wait;
    
    // [PnpBootDriverCallbackObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce540, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546b8, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6a0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546b8, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) boot_driver_callback_object;
    
    // [PnpBootDriverCallbackRegistrationClosed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3212f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc454f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d098, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc454b8, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) boot_driver_callback_registration_closed;
    
    // [PnpBootMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ed8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0998c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f31c, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) boot_mode;
    
    // [PnpBootOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11f34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f94, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) boot_options;
    
    // [PnpBootPhaseComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570d38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x780074, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789e14, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) boot_phase_complete;
    
    // [PnpBugcheckPowerTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0600, 0x32828 bytes
    // ntoskrnl.exe .text:0x5077b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54d8c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507570, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) bugcheck_power_timeout;
    
    // [PnpBuildCmResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b29c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x731350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f9488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x739360, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) build_cm_resource_list;
    
    // [PnpBuildCmResourceLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54aaa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72f71c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7faa20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73772c, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) build_cm_resource_lists;
    
    // [PnpBuildRemovalRelationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42ee70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc5d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734198, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) build_removal_relation_list;
    
    // [PnpBuildUnsafeRemovalDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42fb00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72af48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb95c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732fd0, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) build_unsafe_removal_device_list;
    
    // [PnpBusTypeGuidArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3210d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45278, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cde8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc452b8, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) bus_type_guid_array;
    
    // [PnpBusTypeGuidCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3210e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45338, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cefc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45268, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) bus_type_guid_count;
    
    // [PnpBusTypeGuidCountMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3210e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4533c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cef8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4526c, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) bus_type_guid_count_max;
    
    // [PnpBusTypeGuidGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678e7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec25c, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) bus_type_guid_get;
    
    // [PnpBusTypeGuidGetIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49be9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7500ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757d2c, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) bus_type_guid_get_index;
    
    // [PnpBusTypeGuidInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a92d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bd74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb430b8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bbf8, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) bus_type_guid_initialize;
    
    // [PnpBusTypeGuidLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321100, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc452c0, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) bus_type_guid_lock;
    
    // [PnpCallAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b9ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da4d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72380c, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) call_add_device;
    
    // [PnpCallDriverQueryServiceHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f6738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71f3cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x732f40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7271ec, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) call_driver_query_service_helper;
    
    // [PnpCancelStopDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6350dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5724, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962ba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3ed4, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) cancel_stop_device_node;
    
    // [PnpCancelStopDeviceSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b57b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962c38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3f64, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) cancel_stop_device_subtree;
    
    // [PnpChainDereferenceComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e334, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72ea20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0b04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736a2c, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) chain_dereference_complete;
    
    // [PnpCheckDeviceIdsChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5180a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74d458, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d19f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755098, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) check_device_ids_changed;
    
    // [PnpCheckDriverDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63255c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ee88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d638, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) check_driver_dependencies;
    
    // [PnpCheckForActiveDependencies]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f5a48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71e970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715f54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x726790, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) check_for_active_dependencies;
    
    // [PnpCheckPossibleBootStartDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e5c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x858c60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a67e4, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) check_possible_boot_start_driver;
    
    // [PnpClassificationRank]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1d20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96550, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb89fe0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95740, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) classification_rank;
    
    // [PnpCleanupDeviceRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42dc14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74ed00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d8440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x756940, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) cleanup_device_registry_values;
    
    // [_PnpCmMatchCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa587d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9777a0, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) cm_match_callback_routine;
    
    // [PnpCmResourcesToIoResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c8ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834eac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d150, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) cm_resources_to_io_resources;
    
    // [PnpCollectOpenHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647a3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a9044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a96c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a77f4, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) collect_open_handles;
    
    // [PnpCollectOpenHandlesCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647ad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a90e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95aa10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7890, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) collect_open_handles_call_back;
    
    // [PnpCompareInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441368, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b4780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4c70, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) compare_instance_path;
    
    // [PnpCompareInterruptInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9ae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d81c, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) compare_interrupt_information;
    
    // [PnpCompareMultiSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6327c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8af6c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ade74, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) compare_multi_sz;
    
    // [PnpCompareResourceRequestPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5692f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86abd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1d70, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) compare_resource_request_priority;
    
    // [PnpCompileDeviceInstancePaths]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43001c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fbe7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7333f0, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) compile_device_instance_paths;
    
    // [PnpCompleteDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5498, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71dee0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a8ac, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) complete_device_event;
    
    // [PnpCompleteSystemStartProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143370, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be624, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5f8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf364, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) complete_system_start_process;
    
    // [PnpCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1c0, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) completion_routine;
    
    // [PnpConcatPWSTR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432884, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6f44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e44f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680584, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) concat_pwstr;
    
    // [PnpConcatenateUnicodeStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x528e04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f290, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) concatenate_unicode_strings;
    
    // [PnpConvertDevpropcompkeyArrayToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63283c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952f4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d890, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) convert_devpropcompkey_array_to_string;
    
    // [PnpCopyDevProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432470, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b924, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8688, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753564, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) copy_dev_property;
    
    // [PnpCopyDevPropertyArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4323ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74b84c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f85b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75348c, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) copy_dev_property_array;
    
    // [PnpCopyDeviceInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x782064, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8704c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78be04, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) copy_device_instance_path;
    
    // [PnpCoreDriverGroupLoadPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4563c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d1e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455b4, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) core_driver_group_load_phase;
    
    // [PnpCreateDeviceEventEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fb27c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6ef4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726c54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684988, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) create_device_event_entry;
    
    // [_PnpCreateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd66c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71607c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e438, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71dabc, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) create_object;
    
    // [_PnpCreateObjectDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd7d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71618c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71dbcc, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) create_object_dispatch;
    
    // [_PnpCtxCloseMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97133c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5171c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fc1c, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) ctx_close_machine;
    
    // [_PnpCtxGetCachedContextBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43f874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da6f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x714804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6170fc, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) ctx_get_cached_context_base_key;
    
    // [_PnpCtxGetNtPlugPlayRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43cdac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dc440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ee54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b09b0, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) ctx_get_nt_plug_play_routine;
    
    // [_PnpCtxGetObjectContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e0b78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x679b54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad3b8, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) ctx_get_object_context;
    
    // [_PnpCtxGetObjectDispatchCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9ae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71281c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a98b8, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) ctx_get_object_dispatch_callback;
    
    // [_PnpCtxInternalEnumKeyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13dcc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bfd00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0b10, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) ctx_internal_enum_key_callback;
    
    // [_PnpCtxOpenContextBaseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d99ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75fc68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7676b8, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) ctx_open_context_base_key;
    
    // [_PnpCtxOpenMachine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569e18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7813dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x860174, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78b17c, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) ctx_open_machine;
    
    // [_PnpCtxRegCloseKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9a74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e292c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afba0, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) ctx_reg_close_key;
    
    // [_PnpCtxRegCopyTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9a7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971674, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ff54, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) ctx_reg_copy_tree;
    
    // [_PnpCtxRegCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50230c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667cc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x730478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0094, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) ctx_reg_create_key;
    
    // [_PnpCtxRegCreateTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c480, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5de4b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x715734, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6add14, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) ctx_reg_create_tree;
    
    // [_PnpCtxRegDeleteKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9adc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9716d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51ab8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96ffb4, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) ctx_reg_delete_key;
    
    // [_PnpCtxRegDeleteTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545aac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b12c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7926c8, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) ctx_reg_delete_tree;
    
    // [_PnpCtxRegDeleteValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x971710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x96fff0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) ctx_reg_delete_value;
    
    // [_PnpCtxRegEnumKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6d9b4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a5a74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b1f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7adb84, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) ctx_reg_enum_key;
    
    // [_PnpCtxRegEnumKeyWithCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555c28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78efa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x798d48, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) ctx_reg_enum_key_with_callback;
    
    // [_PnpCtxRegEnumValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a8ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e45e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8048bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1f24, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) ctx_reg_enum_value;
    
    // [_PnpCtxRegOpenKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43e8dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dba34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b1b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ad838, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) ctx_reg_open_key;
    
    // [_PnpCtxRegQueryInfoKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a938, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e471c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80487c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b205c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) ctx_reg_query_info_key;
    
    // [_PnpCtxRegQueryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x445af0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e30b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b168, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b0b18, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) ctx_reg_query_value;
    
    // [_PnpCtxRegQueryValueIndirect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442ff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e1d34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7137e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6afb44, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) ctx_reg_query_value_indirect;
    
    // [_PnpCtxRegSetValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97174c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa51b30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97002c, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) ctx_reg_set_value;
    
    // [_PnpCtxSetNtPlugPlayRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78035c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78a0fc, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) ctx_set_nt_plug_play_routine;
    
    // [PnpCurrentHardwareConfigurationGuidString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e98, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ab0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41e0, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) current_hardware_configuration_guid_string;
    
    // [PnpCurrentHardwareConfigurationIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327138, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8b4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50adc, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) current_hardware_configuration_index;
    
    // [PnpDefaultInterfaceType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5edc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f320, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) default_interface_type;
    
    // [PnpDeferNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51cda4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5564, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8127d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3224, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) defer_notification;
    
    // [PnpDeferredRegistrationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b070, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb58, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb58, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) deferred_registration_list;
    
    // [PnpDeferredRegistrationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3212c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc454c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d060, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45400, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) deferred_registration_lock;
    
    // [PnpDelayedRemovePending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324388, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503c1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6440d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503c1, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) delayed_remove_pending;
    
    // [PnpDelayedRemoveWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321000, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cdc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc451c0, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) delayed_remove_work_item;
    
    // [PnpDelayedRemoveWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e454, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72eb60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e0c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736b70, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) delayed_remove_worker;
    
    // [PnpDeleteDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630ae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89cce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b498, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) delete_device_interfaces;
    
    // [PnpDeleteLockedDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430238, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b57c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733604, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) delete_locked_device_node;
    
    // [PnpDeleteLockedDeviceNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42ff28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fbd58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733290, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) delete_locked_device_nodes;
    
    // [_PnpDeleteObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd8d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973398, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa53fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971c78, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) delete_object;
    
    // [_PnpDeleteObjectDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dd9f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9734bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa540f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971d9c, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) delete_object_dispatch;
    
    // [_PnpDeletePropertyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a357c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75052c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75816c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) delete_property_worker;
    
    // [PnpDereferenceNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726f4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6849d8, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) dereference_notify;
    
    // [PnpDetermineResourceListSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4342a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x730bec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f022c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738bfc, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) determine_resource_list_size;
    
    // [PnpDeviceActionThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e560, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec940, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bb40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec940, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) device_action_thread;
    
    // [PnpDeviceActionWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d788, 0x32828 bytes
    // ntoskrnl.exe .text:0x36aa10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38cc90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36bd90, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) device_action_worker;
    
    // [PnpDeviceClassNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b8b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d4b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd54080, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2d4b0, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) device_class_notify_list;
    
    // [PnpDeviceClassNotifyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45440, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) device_class_notify_lock;
    
    // [PnpDeviceCompletionProcessCompletedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x722c4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b9d0, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) device_completion_process_completed_request;
    
    // [PnpDeviceCompletionProcessCompletedRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f59bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71e8dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716544, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7266fc, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) device_completion_process_completed_requests;
    
    // [PnpDeviceCompletionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3207c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc449c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c5c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc449a0, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) device_completion_queue;
    
    // [PnpDeviceCompletionQueueAddDispatchedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8eb2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a36c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa338, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b6ec, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) device_completion_queue_add_dispatched_request;
    
    // [PnpDeviceCompletionQueueDispatchedEntryCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e74c, 0x32828 bytes
    // ntoskrnl.exe .text:0x369e18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa544, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b198, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) device_completion_queue_dispatched_entry_completed;
    
    // [PnpDeviceCompletionQueueGetCompletedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ed2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b6c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x380440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ca48, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) device_completion_queue_get_completed_request;
    
    // [PnpDeviceCompletionQueueIsEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107984, 0x32828 bytes
    // ntoskrnl.exe .text:0x369bec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f79e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36af9c, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) device_completion_queue_is_empty;
    
    // [PnpDeviceCompletionQueueRemoveCompletedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e960, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b488, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) device_completion_queue_remove_completed_request;
    
    // [PnpDeviceCompletionRequestCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435d18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72406c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x722568, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72be8c, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) device_completion_request_create;
    
    // [PnpDeviceCompletionRequestDestroy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e72c, 0x32828 bytes
    // ntoskrnl.exe .text:0x369dc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa494, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b144, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) device_completion_request_destroy;
    
    // [PnpDeviceCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e66c, 0x32828 bytes
    // ntoskrnl.exe .text:0x369d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b080, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) device_completion_routine;
    
    // [PnpDeviceEnumerationWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43420, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5afe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc433e0, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) device_enumeration_work_item;
    
    // [PnpDeviceEventList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a050, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b058, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51048, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b058, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) device_event_list;
    
    // [PnpDeviceEventThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c358, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c338, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) device_event_thread;
    
    // [PnpDeviceEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71e160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709bd0, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) device_event_worker;
    
    // [PnpDeviceObjectToDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501058, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7241b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f369c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72bfd4, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) device_object_to_device_instance;
    
    // [PnpDeviceOverrideHashList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327130, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ad8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ad0, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) device_override_hash_list;
    
    // [PnpDeviceOverrideHashListSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32712c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ad0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ad8, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) device_override_hash_list_size;
    
    // [_PnpDeviceRaisePropertyChangeEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x447d58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fc1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b090, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) device_raise_property_change_event_worker;
    
    // [PnpDeviceReferenceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321020, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ce40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45200, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) device_reference_table;
    
    // [PnpDeviceReferenceTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3210a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ce00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45280, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) device_reference_table_lock;
    
    // [PnpDiagInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78175c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bb48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb432ac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4b9cc, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) diag_initialize;
    
    // [PnpDiagRundownParentDevNodeForEachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631e8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89cd10, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) diag_rundown_parent_dev_node_for_each_device;
    
    // [PnpDiagRundownParentPdoForEachDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631f0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9525f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89cdd0, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) diag_rundown_parent_pdo_for_each_device;
    
    // [PnpDiagRundownRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631fa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e6c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ce70, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) diag_rundown_register_callback;
    
    // [PnpDiagnosticCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3a24, 0x32828 bytes
    // ntoskrnl.exe .text:0x369320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a6d0, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) diagnostic_completion_routine;
    
    // [PnpDiagnosticTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e468, 0x32828 bytes
    // ntoskrnl.exe .text:0x3781f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x374384, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379578, 0x1fe000 bytes
    //
    _o51(sdk::function<int32_t(const struct nt::event_descriptor_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) diagnostic_trace;
    
    // [PnpDiagnosticTraceAppVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d2894, 0x32828 bytes
    // ntoskrnl.exe .text:0x509024, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54ee24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x508de4, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) diagnostic_trace_app_veto;
    
    // [PnpDiagnosticTraceDeviceOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e38c, 0x32828 bytes
    // ntoskrnl.exe .text:0x378114, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3742a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379494, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) diagnostic_trace_device_operation;
    
    // [PnpDiagnosticTraceDriverFullInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8df54, 0x32828 bytes
    // ntoskrnl.exe .text:0x377fd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x374160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379358, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) diagnostic_trace_driver_full_info;
    
    // [PnpDiagnosticTraceElamDecision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137ddc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2b0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c4c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b33bc, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) diagnostic_trace_elam_decision;
    
    // [PnpDiagnosticTraceElamStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137d48, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2bd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c4d28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3488, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) diagnostic_trace_elam_status;
    
    // [PnpDiagnosticTraceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e7e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x360b9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x361fdc, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) diagnostic_trace_object;
    
    // [PnpDiagnosticTraceObjectWithStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e56c, 0x32828 bytes
    // ntoskrnl.exe .text:0x360d14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e494, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362154, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) diagnostic_trace_object_with_status;
    
    // [PnpDisableDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f1cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953038, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d97c, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) disable_device;
    
    // [PnpDisableDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75245c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736788, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) disable_device_interfaces;
    
    // [PnpDisableUserModeNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0824, 0x32828 bytes
    // ntoskrnl.exe .text:0x507b2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54dd38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5078ec, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) disable_user_mode_notifications;
    
    // [_PnpDispatchDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5df040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab880, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) dispatch_device;
    
    // [_PnpDispatchDeviceContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5015e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9190, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) dispatch_device_container;
    
    // [_PnpDispatchDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442b3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5deeb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x710ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ab6f0, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) dispatch_device_interface;
    
    // [_PnpDispatchInstallerClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d2e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71bea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x731890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723cc0, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) dispatch_installer_class;
    
    // [_PnpDispatchInterfaceClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x438268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3c00, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) dispatch_interface_class;
    
    // [PnpDoPolicyCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780b24, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57c74, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45c10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57b14, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) do_policy_check;
    
    // [PnpDriverImageLoadPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce4f8, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54664, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f664, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54664, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) driver_image_load_policy;
    
    // [PnpDriverInitPhaseActivityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9a90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11458, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bed8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114b8, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) driver_init_phase_activity_id;
    
    // [PnpDriverLoadingFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56fd54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86d0b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc240, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) driver_loading_failed;
    
    // [PnpDriverObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c888, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44bf0, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) driver_object;
    
    // [PnpDuplicateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e8cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a740, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) duplicate_unicode_string;
    
    // [PnpEarlyLaunchImageNotificationPostProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a19d0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67a80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb54170, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67070, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) early_launch_image_notification_post_process;
    
    // [PnpEarlyLaunchImageNotificationPreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a0068, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67610, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52d30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66c00, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) early_launch_image_notification_pre_process;
    
    // [PnpEarlyLaunchStatusNotificationPreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77a2e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36700, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb211a0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa360a0, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) early_launch_status_notification_pre_process;
    
    // [PnpEmptyUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0ebc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09098, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0ec08, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) empty_unicode_string;
    
    // [PnpEnumerationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f3f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43418, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b018, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc433d8, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) enumeration_in_progress;
    
    // [PnpEnumerationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f3e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b000, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc433c0, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) enumeration_lock;
    
    // [PnpEnumerationRequestList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b020, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43400, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) enumeration_request_list;
    
    // [PnpEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327148, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50af8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50af0, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) etw_handle;
    
    // [PnpEventQueueEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f2e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aee0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc432c0, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) event_queue_empty;
    
    // [PNP_EVT_DP_REPLACE_FAILURE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2809f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x332e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ed60, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33620, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) evt_dp_replace_failure;
    
    // [PNP_EVT_DP_REPLACE_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2809e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x332c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ed40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33610, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) evt_dp_replace_start;
    
    // [PNP_EVT_DP_REPLACE_SUCCESS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280cb0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33620, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f300, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33970, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) evt_dp_replace_success;
    
    // [PnpFilterResourceRequirementsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d2b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78b2fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79509c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) filter_resource_requirements_list;
    
    // [PnpFinalizeVetoedRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647b38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a9150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95aa7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7900, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) finalize_vetoed_remove;
    
    // [PnpFindAlternateStringData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e475c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f62c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b2428, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) find_alternate_string_data;
    
    // [PnpFindBestConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ac8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7327e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a7f0, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) find_best_configuration;
    
    // [PnpFindBestConfigurationTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9bb4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c99c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f40, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) find_best_configuration_timeout;
    
    // [PnpFindBestConfigurationWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54acdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce7c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a848, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) find_best_configuration_worker;
    
    // [PnpFindMountableDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d6e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36b528, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e37c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36c7a0, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) find_mountable_device;
    
    // [PnpFindRebalanceCandidates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b57e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962c6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b3f98, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) find_rebalance_candidates;
    
    // [PnpFixupID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4496c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724398, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7332b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72c1b8, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) fixup_id;
    
    // [PnpFreeDevProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4441e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d529c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x719244, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5068, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) free_dev_property;
    
    // [PnpFreeDevPropertyArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44418c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d523c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7191e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a5008, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) free_dev_property_array;
    
    // [PnpFreeDeviceInstancePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42db0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74eca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d83e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7568e8, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) free_device_instance_path;
    
    // [PnpFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3d34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e8a0, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) free_generic_table_entry;
    
    // [PnpFreeInterruptInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e59ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f95d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f82f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7023f8, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) free_interrupt_information;
    
    // [PnpFreeResourceRequirementsForAssignTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54afb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73310c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d92e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b11c, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) free_resource_requirements_for_assign_table;
    
    // [PnpFreeUnicodeStringList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x143414, 0x32828 bytes
    // ntoskrnl.exe .text:0x3be6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6038, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf410, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) free_unicode_string_list;
    
    // [PnpGenerateDeviceIdsHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4990e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e1a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755de4, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) generate_device_ids_hash;
    
    // [PnpGetCallerSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6329b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f26c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89da1c, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) get_caller_session_id;
    
    // [PnpGetDeviceDependencyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89b514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94f218, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x899cc4, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) get_device_dependency_list;
    
    // [PnpGetDeviceInstanceCsConfigFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ae88, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) get_device_instance_cs_config_flags;
    
    // [PnpGetDeviceInstancePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c920, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) get_device_instance_property_data;
    
    // [PnpGetDeviceInstanceRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8524, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9520a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ca80, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) get_device_instance_registry_value;
    
    // [PnpGetDeviceInterfacePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6334b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fda0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e550, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) get_device_interface_property_data;
    
    // [PnpGetDeviceLocationStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487390, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x746d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c63a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e940, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) get_device_location_strings;
    
    // [PnpGetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4392f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a5a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0d28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed928, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) get_device_property_data;
    
    // [PnpGetDeviceResourcesFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4340c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7309f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f003c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738a04, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) get_device_resources_from_registry;
    
    // [_PnpGetEnumSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b86c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae44c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x864b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b606c, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) get_enum_security_descriptor;
    
    // [_PnpGetGenericObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x554cd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78e1b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a0c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797f54, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) get_generic_object_list;
    
    // [_PnpGetGenericStoreProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c6dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712b4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa948, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) get_generic_store_property;
    
    // [_PnpGetGenericStorePropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dec4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804108, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x750e10, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) get_generic_store_property_keys;
    
    // [_PnpGetGenericStorePropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6def50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x976044, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8487d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x974924, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) get_generic_store_property_locales;
    
    // [PnpGetLogString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1cec, 0x32828 bytes
    // ntoskrnl.exe .text:0x36b570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e598, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36c7e8, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) get_log_string;
    
    // [_PnpGetMappedPropertyDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9a1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a97ec, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) get_mapped_property_dispatch;
    
    // [_PnpGetMappedPropertyKeysDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ddab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848cf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971e70, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) get_mapped_property_keys_dispatch;
    
    // [_PnpGetMappedPropertyLocalesDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ddb7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84870c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x971f40, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) get_mapped_property_locales_dispatch;
    
    // [PnpGetMultiSzLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x432698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74bb50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8a14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x753790, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) get_multi_sz_length;
    
    // [_PnpGetObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e3eec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72d2c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b182c, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) get_object_list;
    
    // [_PnpGetObjectListDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x444258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e4034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72d410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b1974, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) get_object_list_dispatch;
    
    // [_PnpGetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x440360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d96fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71243c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a94cc, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) get_object_property;
    
    // [PnpGetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43d824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d95bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7119f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a938c, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) get_object_property_;
    
    // [_PnpGetObjectPropertyKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ddc50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973728, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972008, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) get_object_property_keys;
    
    // [_PnpGetObjectPropertyKeysWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dddb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9738a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972180, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) get_object_property_keys_worker;
    
    // [_PnpGetObjectPropertyLocales]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ddf20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973a08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8484f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9722e8, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) get_object_property_locales;
    
    // [_PnpGetObjectPropertyLocalesWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6de084, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x973b7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97245c, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) get_object_property_locales_worker;
    
    // [_PnpGetObjectPropertyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4410dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d9888, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7125c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a9658, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) get_object_property_worker;
    
    // [_PnpGetPropertiesSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e269c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x749804, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ace8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7510c4, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) get_properties_security_descriptor;
    
    // [PnpGetRelatedTargetDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94450, 0x32828 bytes
    // ntoskrnl.exe .text:0x21160c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa12c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0900, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) get_related_target_device;
    
    // [PnpGetResourceRequirementsForAssignTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4339c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73029c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ef8cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7382ac, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) get_resource_requirements_for_assign_table;
    
    // [PnpGetServiceStartType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5297d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71fe34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73543c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727c54, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) get_service_start_type;
    
    // [PnpGetStableSystemBootTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6329f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89da70, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) get_stable_system_boot_time;
    
    // [PnpGetSystemPdoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43178c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6074a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dce80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3130, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) get_system_pdo_list;
    
    // [PnpHandleEnumerateHandlesAgainstDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e78c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89cf3c, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) handle_enumerate_handles_against_device_object;
    
    // [PnpHandleEnumerateHandlesAgainstPdoStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0128, 0x32828 bytes
    // ntoskrnl.exe .text:0x506ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54d748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506cb0, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) handle_enumerate_handles_against_pdo_stack;
    
    // [PnpHandleProcessWalkWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d000, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) handle_process_walk_worker;
    
    // [PnpHardwareConfigCreateBootDriverFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7889f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83b35c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792794, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) hardware_config_create_boot_driver_flags;
    
    // [PnpHwProfileNotifyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321280, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cfa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc453c0, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) hw_profile_notify_lock;
    
    // [PnpInitializeBootStartDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780524, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57608, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb455cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa574a8, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) initialize_boot_start_driver;
    
    // [PnpInitializeDeviceEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7f70, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4bf44, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42bf0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bdc8, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) initialize_device_events;
    
    // [PnpInitializeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4b7c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4be00, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a2c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4bc84, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) initialize_notification;
    
    // [PnpInitializeNotifyEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ce68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8128cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b3324, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) initialize_notify_entry;
    
    // [PnpInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf510, 0x32828 bytes
    // ntoskrnl.exe .text:0x506328, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54bfc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5060e8, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) initialize_processor;
    
    // [PnpInitializeSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x751dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7df144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x759a2c, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) initialize_session_id;
    
    // [PnpInitializeTargetDeviceRemoveEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e7cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd77c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731e30, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) initialize_target_device_remove_event;
    
    // [PnpInsertEventInQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71dff4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a758, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) insert_event_in_queue;
    
    // [_PnpInstallerClassRaisePropertyChangeEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6deac0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71861c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678cb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72007c, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) installer_class_raise_property_change_event_worker;
    
    // [_PnpInterfaceClassRaisePropertyChangeEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6deb58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x974484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa548f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x972d64, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) interface_class_raise_property_change_event_worker;
    
    // [_PnpInterfaceRaisePropertyChangeEventWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a03f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x722758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7304f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72a578, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) interface_raise_property_change_event_worker;
    
    // [PnpInvalidateRelationsInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42fe3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b094, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fbbe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73311c, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) invalidate_relations_in_list;
    
    // [PnpIrpDeviceEnumerated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd45a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b3cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3800dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c74c, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) irp_device_enumerated;
    
    // [PnpIrpQueryID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448d94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e32ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72c130, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) irp_query_id;
    
    // [PnpIsAnyDeviceInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d314, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d844, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) is_any_device_in_use;
    
    // [PnpIsBeingRemovedSafely]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e55c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eb800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7336bc, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) is_being_removed_safely;
    
    // [PnpIsChainDereferenced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d1d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c358, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f014, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d6dc, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) is_chain_dereferenced;
    
    // [PnpIsDeviceInstanceEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a6cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732d18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf3d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ad28, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) is_device_instance_enabled;
    
    // [PnpIsDuplicateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89a65c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94e62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x898e0c, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) is_duplicate_device;
    
    // [PnpIsLegacyDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2144, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d3ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x735670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7251cc, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) is_legacy_driver;
    
    // [PnpIsNullGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50497c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f4d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71e7f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709b9c, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) is_null_guid;
    
    // [PnpIsRangeWithin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x552908, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ac70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834dcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794a10, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) is_range_within;
    
    // [PnpIsSafeToExamineUserModeTeb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108e34, 0x32828 bytes
    // ntoskrnl.exe .text:0x210994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f90e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b2a4, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) is_safe_to_examine_user_mode_teb;
    
    // [_PnpIsValidGuidString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x439b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5daf58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa07c, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) is_valid_guid_string;
    
    // [PnpIsValidGuidString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632c14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755454, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cea4, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) is_valid_guid_string_;
    
    // [PnpLoadBootFilterDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f034, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa546f4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb58760, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa54594, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) load_boot_filter_driver;
    
    // [PnpLockDeviceActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f630, 0x32828 bytes
    // ntoskrnl.exe .text:0x2147c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bddc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ff1c, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) lock_device_action_queue;
    
    // [PnpLockMountableDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0664, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f7ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b674, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3907fc, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) lock_mountable_device;
    
    // [PnpLogActionQueueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8de68, 0x32828 bytes
    // ntoskrnl.exe .text:0x36af08, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36c288, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) log_action_queue_event;
    
    // [PnpLogDeviceConflictingResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a394, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b2358, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e00c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9ee8, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) log_device_conflicting_resource;
    
    // [PnpLogDuplicateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ec48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fc80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953ac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e430, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) log_duplicate_device;
    
    // [PnpLogEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632c78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f33c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9531d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89daec, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) log_event;
    
    // [PnpLogVetoInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647c64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x716534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673f34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71df74, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) log_veto_information;
    
    // [PnpLookupArbitersNewResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54aec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732a44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cea40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73aa54, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) lookup_arbiters_new_resources;
    
    // [_PnpMapCmStatusToDispatchStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x91b48, 0x32828 bytes
    // ntoskrnl.exe .text:0x203560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6fb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e68a0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) map_cm_status_to_dispatch_status;
    
    // [PnpMapDeviceObjectToDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732cbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf29c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73accc, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) map_device_object_to_device_instance;
    
    // [PnpMarkDeviceForRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d06b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f5b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b34c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390604, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) mark_device_for_remove;
    
    // [PnpMarkHalDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7570, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6de88, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d964, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6d440, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) mark_hal_device_node;
    
    // [PnpMergeFilteredResourceRequirementsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56e308, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b26e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8680b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba278, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) merge_filtered_resource_requirements_list;
    
    // [_PnpMultiSzAppend]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e2910, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x978fec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d08a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9778cc, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) multi_sz_append;
    
    // [PnpMultiSzContainsString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1d04, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e5b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f840, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) multi_sz_contains_string;
    
    // [_PnpMultiSzGetLen]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a040, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e2dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7be350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b05d0, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) multi_sz_get_len;
    
    // [PnpNeedToReleaseBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5527b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73334c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b03f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b35c, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) need_to_release_boot_resources;
    
    // [PnpNewDeviceNodeDependencyCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f418, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7287b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4f9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7305d0, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) new_device_node_dependency_check;
    
    // [PnpNotificationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a00b, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b003, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51003, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b003, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) notification_in_progress;
    
    // [PnpNotificationInProgressLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f300, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43320, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5af00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc432e0, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) notification_in_progress_lock;
    
    // [_PnpNotifyDerivedKeys]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4480f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7300dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b530, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) notify_derived_keys;
    
    // [PnpNotifyDeviceClassChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71a78c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7225ac, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) notify_device_class_change;
    
    // [PnpNotifyDriverCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812a84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70cb40, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) notify_driver_callback;
    
    // [PnpNotifyEarlyLaunchImageLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780ad0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa57cd4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45c70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57b74, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) notify_early_launch_image_load;
    
    // [PnpNotifyEarlyLaunchStatusUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f59c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa58034, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45fec, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa57ed4, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) notify_early_launch_status_update;
    
    // [PnpNotifyHwProfileChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89cf08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x950dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b6b8, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) notify_hw_profile_change;
    
    // [PnpNotifyTargetDeviceChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa9c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x725ef8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x684118, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) notify_target_device_change;
    
    // [PnpNotifyUserModeDeviceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42ed34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fccf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732648, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) notify_user_mode_device_removal;
    
    // [_PnpObjectListCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555d28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1ee0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) object_list_callback;
    
    // [_PnpObjectRaiseCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6debf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74a6a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ccf7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7522e8, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) object_raise_create_event;
    
    // [_PnpObjectRaiseDeleteEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6dec1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7120a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671324, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x719a38, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) object_raise_delete_event;
    
    // [_PnpObjectRaisePropertyChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4481c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fb20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72af94, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) object_raise_property_change_event;
    
    // [PnpOpenFirstMatchingSubKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f464, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9532f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89dc14, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) open_first_matching_sub_key;
    
    // [_PnpOpenObjectRegKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43defc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d93e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a91b4, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) open_object_reg_key;
    
    // [_PnpOpenObjectRegKeyDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43dffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d94d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x711c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a92a8, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) open_object_reg_key_dispatch;
    
    // [_PnpOpenPropertiesKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43c8f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5da120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x712d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aa720, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) open_properties_key;
    
    // [PnpOrphanNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e0f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754134, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e67a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75b9f4, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) orphan_notification;
    
    // [_PnpParseIndirectInfString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x479e30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x669bfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4954, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dcc3c, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) parse_indirect_inf_string;
    
    // [_PnpParseIndirectResourceString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4719e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6423c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x804fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b73ec, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) parse_indirect_resource_string;
    
    // [PnpPrepareDriverLoading]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71abb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7354f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7229d0, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) prepare_driver_loading;
    
    // [PnpProcessAssignResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43495c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d64c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f15a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72546c, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) process_assign_resources;
    
    // [PnpProcessAssignResourcesWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434b38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f176c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x725650, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) process_assign_resources_worker;
    
    // [PnpProcessBusRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f6d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd46c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731b20, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) process_bus_relations;
    
    // [PnpProcessCompletedEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63317c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89f8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e0a0, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) process_completed_eject;
    
    // [PnpProcessCustomDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6cac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724b94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683570, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) process_custom_device_event;
    
    // [PnpProcessDeferredRegistrations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f5160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71ee48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70a574, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) process_deferred_registrations;
    
    // [PnpProcessDependencyRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731a98, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) process_dependency_relations;
    
    // [PnpProcessQueryRemoveAndEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e90c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x729b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731fec, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) process_query_remove_and_eject;
    
    // [PnpProcessRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0ed8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a46c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x551280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50a22c, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) process_rebalance;
    
    // [PnpProcessRelation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42ef0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a4b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd204, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731834, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) process_relation;
    
    // [PnpProcessTargetDeviceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9fa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72843c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x726c84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73025c, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) process_target_device_event;
    
    // [PnpProfileNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b0b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb88, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb88, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) profile_notify_list;
    
    // [PnpProfileUpdateHardwareProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a85bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a10c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a6d6c, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) profile_update_hardware_profile;
    
    // [PnpQueryAndSaveDeviceNodeCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500d88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7286c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f2bdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7304e0, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) query_and_save_device_node_capabilities;
    
    // [PnpQueryBusInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49bdd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x750014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d97ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x757c54, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) query_bus_information;
    
    // [PnpQueryDeviceRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435cac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723ff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x722ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72be18, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) query_device_relations;
    
    // [PnpQueryDeviceText]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49a8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74d940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a9384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755580, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) query_device_text;
    
    // [PnpQueryID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x449198, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x724210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7331c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72c030, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) query_id;
    
    // [PnpQueryInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4879bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x747360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e316c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74efa0, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) query_interface;
    
    // [PnpQueryProximityNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327178, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b08, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) query_proximity_node;
    
    // [PnpQueryRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6352a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962d98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b40b0, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) query_rebalance;
    
    // [PnpQueryRebalanceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x635354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b59b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4168, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) query_rebalance_worker;
    
    // [PnpQueryRemoveLockedDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63329c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x717f7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x675458, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71f9dc, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) query_remove_locked_device_node;
    
    // [PnpQueryStopDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6354f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5b54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4304, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) query_stop_device_node;
    
    // [PnpQueuePendingEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6333e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89fa44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953758, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e1f4, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) queue_pending_eject;
    
    // [PnpQueuePendingSurpriseRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72aae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb64c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732b6c, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) queue_pending_surprise_removal;
    
    // [PnpQueueQueryAndRemoveEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6503d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x713348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ad94, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) queue_query_and_remove_event;
    
    // [_PnpRaiseNtPlugPlayDevicePropertyChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x448244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72ef30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72af20, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) raise_nt_plug_play_device_property_change_event;
    
    // [PnpReadDeviceConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x730fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ee75c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738fb0, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) read_device_configuration;
    
    // [PnpReallocateResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650c80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b05a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x962208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aed50, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) reallocate_resources;
    
    // [PnpRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63558c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5be4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96306c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4394, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) rebalance;
    
    // [PnpRegMultiSzToUnicodeStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b0c8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56054, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4e944, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa55ef4, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) reg_multi_sz_to_unicode_strings;
    
    // [_PnpRegQueryValueIndirect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x441958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ce2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aed60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69ee90, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) reg_query_value_indirect;
    
    // [PnpRegSzToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529a60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d0ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7366bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724f0c, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) reg_sz_to_string;
    
    // [PnpRegistryDeviceResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c8c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44c40, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) registry_device_resource;
    
    // [PnpRegistryValueExists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1d6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3907c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3839a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391818, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) registry_value_exists;
    
    // [PnpReleaseBootResourcesForFilteredRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d09d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ba6fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54de14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bb0ac, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) release_boot_resources_for_filtered_requirements;
    
    // [PnpReleaseDependencyRelationsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f53b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84723c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7307a0, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) release_dependency_relations_lock;
    
    // [PnpReleaseResourcesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a89c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x731164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x739174, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) release_resources_internal;
    
    // [PnpRemoveDeviceActionRequests]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd5394, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ce14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e194, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) remove_device_action_requests;
    
    // [PnpRemoveEventFromQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647dd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a91ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95abf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a799c, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) remove_event_from_queue;
    
    // [PnpRemoveLockedDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d358, 0x32828 bytes
    // ntoskrnl.exe .text:0x36b1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38dfac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36c418, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) remove_locked_device_node;
    
    // [PnpReplaceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f2c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc432e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc432a0, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) replace_event;
    
    // [PnpReplacePartitionUnit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x648258, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a96b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95b0c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7e60, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) replace_partition_unit;
    
    // [PnpReportTargetDeviceChangeAsyncWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630f3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9510e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b930, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) report_target_device_change_async_worker;
    
    // [PnpRequestDeviceAction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8dbb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a634, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b9b4, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) request_device_action;
    
    // [PnpRequestDeviceEjectExWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62fa0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9518b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c100, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) request_device_eject_ex_worker;
    
    // [PnpRequestDeviceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e5c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e85ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c780, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) request_device_removal;
    
    // [PnpRequestDeviceRemovalWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e838, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8668, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c848, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) request_device_removal_worker;
    
    // [PnpRequestHwProfileChangeNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x630f84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d1d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89b988, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) request_hw_profile_change_notification;
    
    // [PnpResizeTargetDeviceBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f8c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72aa04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc3b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733fa4, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) resize_target_device_block;
    
    // [PnpRestartDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632e68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7155d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x674818, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71d018, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) restart_device_node;
    
    // [PnpRestoreResourcesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650e4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9623f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aef38, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) restore_resources_internal;
    
    // [PnpRundownEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341ea8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41f0, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) rundown_etw_handle;
    
    // [PnpSaveDeviceCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500dd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x720f18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f3028, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x728d38, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) save_device_capabilities;
    
    // [PnpSelectFirstConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54af24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732aa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ceaa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73aab8, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) select_first_configuration;
    
    // [PnpSendIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x94364, 0x32828 bytes
    // ntoskrnl.exe .text:0x21ba50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa22c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0c80, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) send_irp;
    
    // [PnpSerializeBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c95f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca4e0, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) serialize_boot;
    
    // [PnpSetBlockedDriverEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a9274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ac80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7a24, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) set_blocked_driver_event;
    
    // [PnpSetCustomTargetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd2fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f6da8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x683424, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) set_custom_target_event;
    
    // [PnpSetDeviceAffinityThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x943f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21baf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa2d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e0d28, 0x1fe000 bytes
    //
    _q67(sdk::function<uint32_t(struct nt::device_object_t*, struct nt::group_affinity_t*)>*) set_device_affinity_thread;
    
    // [PnpSetDeviceClassChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd9bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727dbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72fbdc, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) set_device_class_change;
    
    // [PnpSetDeviceInstancePropertyChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134db0, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a35c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b6dc, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) set_device_instance_property_change_event;
    
    // [PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134dbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b2cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37b6f8, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) set_device_instance_property_change_event_from_device_instance;
    
    // [PnpSetDeviceInstanceRemovalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c9a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d15c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3836a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e4dc, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) set_device_instance_removal_event;
    
    // [PnpSetDeviceInstanceStartedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109cb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a544, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bb24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b8c4, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) set_device_instance_started_event;
    
    // [PnpSetDeviceInstanceStartedEventFromDeviceInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109bf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a478, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bcd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b7f8, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) set_device_instance_started_event_from_device_instance;
    
    // [PnpSetDeviceInterfacePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560d14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7613d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768678, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) set_device_interface_property_data;
    
    // [PnpSetDevicePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53dda4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f06b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72babc, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) set_device_property_data;
    
    // [PnpSetDeviceRemovalSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a92e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95acf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7a94, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) set_device_removal_safe;
    
    // [_PnpSetGenericStoreProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502470, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723858, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7301b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b678, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) set_generic_store_property;
    
    // [PnpSetHwProfileChangeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647fb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a93f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95adfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7ba0, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) set_hw_profile_change_event;
    
    // [PnpSetInterruptInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53df24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ea444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d8a0, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) set_interrupt_information;
    
    // [PnpSetInvalidIDEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64804c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a948c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95ae98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7c3c, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) set_invalid_id_event;
    
    // [_PnpSetMappedPropertyDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5023a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x723038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72fa58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72ae58, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) set_mapped_property_dispatch;
    
    // [_PnpSetObjectProperty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44ab2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x722ce4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72f4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72ab04, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) set_object_property;
    
    // [_PnpSetObjectPropertyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5024b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x722e5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72f650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72ac7c, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) set_object_property_worker;
    
    // [PnpSetPlugPlayEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fa89c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x728304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x724a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x730124, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) set_plug_play_event;
    
    // [PnpSetPowerVetoEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6480f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a9544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95af50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7cf4, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) set_power_veto_event;
    
    // [_PnpSetPropertyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7238a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7301fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72b6c0, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) set_property_worker;
    
    // [PnpSetRegistryDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549b88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78cb3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83412c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7968dc, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) set_registry_dword;
    
    // [PnpSetRegistryRequirementsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x63244c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89ed50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952bb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d500, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) set_registry_requirements_list;
    
    // [PnpSetRegistryResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6324a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89edb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x952c1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d568, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) set_registry_resource_list;
    
    // [PnpSetTargetDeviceRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72bf1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7327c4, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) set_target_device_remove;
    
    // [PnpSetupInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430e9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ae5, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8b9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ae0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) setup_in_progress;
    
    // [PnpSetupOOBEInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430e6, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ae4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ae1, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) setup_oobe_in_progress;
    
    // [PnpSetupRollbackActiveInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430e4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5178, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17bf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5179, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) setup_rollback_active_in_progress;
    
    // [PnpSetupUpgradeInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430e5, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5179, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17bf1, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5178, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) setup_upgrade_in_progress;
    
    // [PnpShutdownDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ec00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898d8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94caac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89753c, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) shutdown_devices;
    
    // [PnpShutdownEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c8a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44c20, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) shutdown_event;
    
    // [PnpSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f430, 0x32828 bytes
    // ntoskrnl.exe .data:0xc43450, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5b030, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc43410, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) spin_lock;
    
    // [PnpStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e038, 0x32828 bytes
    // ntoskrnl.exe .text:0x369744, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b6bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36aaf4, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) start_device;
    
    // [PnpStartDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435570, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0ab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722ef8, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) start_device_node;
    
    // [PnpStartedDeviceNodeDependencyCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f4d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72861c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f484c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73043c, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) started_device_node_dependency_check;
    
    // [PnpStopDeviceSubtree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6358e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x963444, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b46d8, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) stop_device_subtree;
    
    // [PnpStringFromGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4385fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddf00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7153e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aac44, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) string_from_guid;
    
    // [_PnpStringFromGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4385fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddf00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7153e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6aac44, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) string_from_guid_;
    
    // [PnpStringToDwordValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1dcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d5dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f1bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e95c, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) string_to_dword_value;
    
    // [PnpSurpriseRemoveLockedDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d6d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x752264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e37a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736590, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) surprise_remove_locked_device_node;
    
    // [PnpSystemDeviceEnumerationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d200, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455c0, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) system_device_enumeration_complete;
    
    // [PnpSystemHiveLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327158, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b00, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) system_hive_limits;
    
    // [PnpSystemHiveTooLarge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327150, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50af8, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) system_hive_too_large;
    
    // [PnpTargetDeviceNotifyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45440, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5cfe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45480, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) target_device_notify_lock;
    
    // [PnpTearDownPnpStacksOnShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45638, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d1e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455b0, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) tear_down_pnp_stacks_on_shutdown;
    
    // [PnpTraceClearDevNodeProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64dbd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e4f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fdf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736310, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) trace_clear_dev_node_problem;
    
    // [PnpTraceDeviceConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64dcf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72d8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x801f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x735708, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) trace_device_config;
    
    // [PnpTraceDeviceRemovalForResetComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64de88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aec80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960934, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad430, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) trace_device_removal_for_reset_complete;
    
    // [PnpTraceDockDeviceEnumeration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8aef54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad704, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) trace_dock_device_enumeration;
    
    // [PnpTraceRebalanceResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8af204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x960ddc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ad9b4, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) trace_rebalance_result;
    
    // [PnpTraceRequestDeviceRemovalForReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64e55c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8af430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961184, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8adbe0, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) trace_request_device_removal_for_reset;
    
    // [PnpTraceSetDevNodeProblem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c5c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fde30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7343e0, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) trace_set_dev_node_problem;
    
    // [PnpTraceStartDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e33c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3780c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37424c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379440, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) trace_start_device;
    
    // [PnpUnicodeStringToWstr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x442a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d90dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6db670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a8eac, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) unicode_string_to_wstr;
    
    // [PnpUnicodeStringToWstrFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4429dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5d7314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728b24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6a70e4, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) unicode_string_to_wstr_free;
    
    // [PnpUnlinkDeviceRemovalRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42fb90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72ac60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb7c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x732ce8, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) unlink_device_removal_relations;
    
    // [PnpUnloadAttachedDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53516c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b6c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fae48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7234e8, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) unload_attached_driver;
    
    // [PnpUnlockDeviceActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10f5a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21483c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38be54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35fe78, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) unlock_device_action_queue;
    
    // [PnpUnlockMountableDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0794, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b9f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390858, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) unlock_mountable_device;
    
    // [PnpUnregisterPlugPlayNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1108dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8a48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37cae0, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) unregister_plug_play_notification;
    
    // [PnpUpdateExtensionFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8d2ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f18c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d814, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) update_extension_flags;
    
    // [_PnpUpdateInterfacesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538914, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e1c0, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) update_interfaces_callback;
    
    // [PnpValidateMultiSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502d1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ced58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f8e5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f298, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) validate_multi_sz;
    
    // [PnpValidateMultiSzData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3693f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e898, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a7a8, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) validate_multi_sz_data;
    
    // [_PnpValidateObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558648, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfbc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7295f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ff78, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) validate_object_name;
    
    // [_PnpValidateObjectNameDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x558708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cfc80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7296b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x680038, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) validate_object_name_dispatch;
    
    // [_PnpValidatePropertyData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cef98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72f80c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f4d8, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) validate_property_data;
    
    // [PnpValidateRegistryDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1e58, 0x32828 bytes
    // ntoskrnl.exe .text:0x396348, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973a8, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) validate_registry_dword;
    
    // [PnpValidateRegistryMultiSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1e70, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e86c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38f8bc, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) validate_registry_multi_sz;
    
    // [PnpValidateRegistryString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36942c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a7dc, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) validate_registry_string;
    
    // [PnpValidateRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1ed0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5085f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202fe8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5083b8, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) validate_registry_value;
    
    // [PnpValidateStringData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d1f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x369468, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38e874, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a818, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) validate_string_data;
    
    // [PnpWaitForDevicesToStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f584, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56560, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45fcc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56400, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) wait_for_devices_to_start;
    
    // [PnpWaitForEmptyDeviceActionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ae7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792c64, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) wait_for_empty_device_action_queue;
    
    // [PnpWaitForEmptyDeviceEventQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545b1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ae50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792c38, 0x1fe000 bytes
    //
    _r40(sdk::function<int32_t()>*) wait_for_empty_device_event_queue;
    
    // [PnpWstrRaw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2602d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa320, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb260, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) wstr_raw;
    
    // [PnpWstrTranslated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2602b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa308, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10e58, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb248, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) wstr_translated;
    
    // [PnpNotifyForRemoteSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9034, 0x1eb80 bytes
    // win32kbase.sys .text:0x12d300, 0x243e0 bytes
    // win32kbase.sys .text:0x160ef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x12ab80, 0x243e0 bytes
    //
    _r43(sdk::unknown_ptr) notify_for_remote_session;
    
    // [PnpStateTransitionArray]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c070, 0x1d08 bytes
    // pci.sys .rdata:0x2b060, 0x1cf0 bytes
    // pci.sys .rdata:0x2da70, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa20, 0x1cf0 bytes
    //
    _r44(sdk::unknown_ptr) state_transition_array;
    
    // [PnpExclusiveRequestsInQueue]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72dc, 0x774 bytes
    // tdi.sys .data:0x7360, 0x798 bytes
    //
    _r45(sdk::unknown_ptr) exclusive_requests_in_queue;
    
    // [PnpHandlerClientList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7290, 0x774 bytes
    // tdi.sys .data:0x7290, 0x798 bytes
    //
    _r46(sdk::unknown_ptr) handler_client_list;
    
    // [PnpHandlerProviderList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7270, 0x774 bytes
    // tdi.sys .data:0x7270, 0x798 bytes
    //
    _r47(sdk::unknown_ptr) handler_provider_list;
    
    // [PnpHandlerRequestList]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7280, 0x774 bytes
    // tdi.sys .data:0x7280, 0x798 bytes
    //
    _r48(sdk::unknown_ptr) handler_request_list;
    
    // [PnpHandlerRequestThread]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7028, 0x774 bytes
    // tdi.sys .data:0x7028, 0x798 bytes
    //
    _r49(sdk::unknown_ptr) handler_request_thread;
    
    // [PnpRequestsExecuting]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72e0, 0x774 bytes
    // tdi.sys .data:0x7368, 0x798 bytes
    //
    _r50(sdk::unknown_ptr) requests_executing;
    
    // [PnpRequestsInQueue]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72d8, 0x774 bytes
    // tdi.sys .data:0x735c, 0x798 bytes
    //
    _r51(sdk::unknown_ptr) requests_in_queue;
    
    // [PnpTdiWorkItem]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x7040, 0x774 bytes
    // tdi.sys .data:0x7040, 0x798 bytes
    //
    _r52(sdk::unknown_ptr) tdi_work_item;
    
    // [PnpWorkerThreadActive]
    // Ldr = [tdi.sys]
    // => Windows 10 v1607, Windows 10 v2004
    // tdi.sys .data:0x72d4, 0x774 bytes
    // tdi.sys .data:0x7354, 0x798 bytes
    //
    _r53(sdk::unknown_ptr) worker_thread_active;
};
#include "magic/api.end.hpp"
