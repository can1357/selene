#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/run_once_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../wdf/sleepstudy_helper_routine_block_t.hpp"

#include "magic/api.start.hpp"
namespace pci
{
    // [PCIDeref]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e350, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x11840, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x173a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x119c0, 0x1fe000 bytes
    //
    _m00(sdk::unknown_ptr) deref;
    
    // [PciAcquireSpinLockAtHighLevel]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x289cc, 0x1cf0 bytes
    //
    _m01(sdk::unknown_ptr) acquire_spin_lock_at_high_level;
    
    // [PciAddBridgeWindowRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x48d68, 0x1d08 bytes
    //
    _m02(sdk::unknown_ptr) add_bridge_window_requirement;
    
    // [PciAddChildRequirementsToBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x48d80, 0x1d08 bytes
    //
    _m03(sdk::unknown_ptr) add_child_requirements_to_bridge_requirements;
    
    // [PciAdjustBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x48ea0, 0x1d08 bytes
    //
    _m04(sdk::unknown_ptr) adjust_bridge_requirements;
    
    // [PciAllocBridgeSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x48f48, 0x1d08 bytes
    //
    _m05(sdk::unknown_ptr) alloc_bridge_subtree;
    
    // [PciAllocateBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x492f4, 0x1d08 bytes
    //
    _m06(sdk::unknown_ptr) allocate_bridge;
    
    // [PciApplyHPP]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x4a0ac, 0x1d08 bytes
    //
    _m07(sdk::unknown_ptr) apply_hpp;
    
    // [PciArbiterTrace]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4d2ac, 0x1cf0 bytes
    //
    _m08(sdk::unknown_ptr) arbiter_trace;
    
    // [PciArbiterTraceDumpAllocationParameters]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4cfe8, 0x1cf0 bytes
    //
    _m09(sdk::unknown_ptr) arbiter_trace_dump_allocation_parameters;
    
    // [PciArbiterTraceDumpAllocationState]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x49da8, 0x1cf0 bytes
    //
    _m10(sdk::unknown_ptr) arbiter_trace_dump_allocation_state;
    
    // [PciArbiterTraceDumpCmResources]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x52dbc, 0x1cf0 bytes
    //
    _m11(sdk::unknown_ptr) arbiter_trace_dump_cm_resources;
    
    // [PciArbiterTraceDumpRangeList]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4d304, 0x1cf0 bytes
    //
    _m12(sdk::unknown_ptr) arbiter_trace_dump_range_list;
    
    // [PciAssignBridgeSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x49378, 0x1d08 bytes
    //
    _m13(sdk::unknown_ptr) assign_bridge_subtree;
    
    // [PciAtsInterface]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2a818, 0x1cf0 bytes
    //
    _m14(sdk::unknown_ptr) ats_interface;
    
    // [PciAtsInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6f120, 0x1cf0 bytes
    //
    _m15(sdk::unknown_ptr) ats_interface_constructor;
    
    // [PciAtsInterface_SetAts]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6f1e0, 0x1cf0 bytes
    //
    _m16(sdk::unknown_ptr) ats_interface_set_ats;
    
    // [PciAttemptDisconnectDevice]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69400, 0x1cf0 bytes
    //
    _m17(sdk::unknown_ptr) attempt_disconnect_device;
    
    // [PciAttemptPendingResetRequest]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69488, 0x1cf0 bytes
    //
    _m18(sdk::unknown_ptr) attempt_pending_reset_request;
    
    // [PciBridgeCheckLocationCompatibility]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x47d4c, 0x1d08 bytes
    //
    _m19(sdk::unknown_ptr) bridge_check_location_compatibility;
    
    // [PciBridgeInterface_GetDelayTime]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe080, 0x1cf0 bytes
    //
    _m20(sdk::unknown_ptr) bridge_interface_get_delay_time;
    
    // [PciBridgeLogDStateTransition]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe0a0, 0x1cf0 bytes
    //
    _m21(sdk::unknown_ptr) bridge_log_d_state_transition;
    
    // [PciBridgeMaximumWindowAlignment]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x554d0, 0x1cf0 bytes
    //
    _m22(sdk::unknown_ptr) bridge_maximum_window_alignment;
    
    // [PciBridgeQueryDeviceCustomSettings]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe0d0, 0x1cf0 bytes
    //
    _m23(sdk::unknown_ptr) bridge_query_device_custom_settings;
    
    // [PciBus_SendCancelWWBusPowerAvailablePassive]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1835c, 0x1cf0 bytes
    //
    _m24(sdk::unknown_ptr) bus_send_cancel_ww_bus_power_available_passive;
    
    // [PciBusWaitForDataLinkSettle]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe0e4, 0x1cf0 bytes
    //
    _m25(sdk::unknown_ptr) bus_wait_for_data_link_settle;
    
    // [PciCheckDsmIgnoreBootConfigStrictMode]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x45638, 0x1cf0 bytes
    //
    _m26(sdk::unknown_ptr) check_dsm_ignore_boot_config_strict_mode;
    
    // [PciCheckFeatureEnabled]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x47880, 0x1cf0 bytes
    //
    _m27(sdk::unknown_ptr) check_feature_enabled;
    
    // [PciCheckFpbOptOutInNonNativeMode]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x45614, 0x1cf0 bytes
    //
    _m28(sdk::unknown_ptr) check_fpb_opt_out_in_non_native_mode;
    
    // [PciClearAerStatus]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xee8c, 0x1cf0 bytes
    //
    _m29(sdk::unknown_ptr) clear_aer_status;
    
    // [PciCommitBridgeSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x49444, 0x1d08 bytes
    //
    _m30(sdk::unknown_ptr) commit_bridge_subtree;
    
    // [PciConstructUsb4PowerDependency]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x67e2c, 0x1cf0 bytes
    //
    _m31(sdk::unknown_ptr) construct_usb4_power_dependency;
    
    // [PciD3ColdAuxPowerAndTimingDeviceInfoUnlink]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27adc, 0x1cf0 bytes
    //
    _m32(sdk::unknown_ptr) d3_cold_aux_power_and_timing_device_info_unlink;
    
    // [PciD3ColdPropertyUpdateWorker]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x47470, 0x1cf0 bytes
    //
    _m33(sdk::unknown_ptr) d3_cold_property_update_worker;
    
    // [PciDebugDevicePowerCallbackRegister]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x5a6fc, 0x1cf0 bytes
    //
    _m34(sdk::unknown_ptr) debug_device_power_callback_register;
    
    // [PciDebugDumpHotPlugAction]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x207b8, 0x1cf0 bytes
    //
    _m35(sdk::unknown_ptr) debug_dump_hot_plug_action;
    
    // [PciDebugDumpHotPlugEvent]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x20a5c, 0x1cf0 bytes
    //
    _m36(sdk::unknown_ptr) debug_dump_hot_plug_event;
    
    // [PciDeviceAllowChangeBootConfigAtRuntime]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x2a4c, 0x1cf0 bytes
    //
    _m37(sdk::unknown_ptr) device_allow_change_boot_config_at_runtime;
    
    // [PciDevice_DelayByTimePassive]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe2fc, 0x1cf0 bytes
    //
    _m38(sdk::unknown_ptr) device_delay_by_time_passive;
    
    // [PciDeviceDisableAts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16250, 0x1d08 bytes
    //
    _m39(sdk::unknown_ptr) device_disable_ats;
    
    // [PciDeviceDisablePasid]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16288, 0x1d08 bytes
    //
    _m40(sdk::unknown_ptr) device_disable_pasid;
    
    // [PciDeviceDisablePri]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x162bc, 0x1d08 bytes
    //
    _m41(sdk::unknown_ptr) device_disable_pri;
    
    // [PciDeviceEnableAts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16398, 0x1d08 bytes
    //
    _m42(sdk::unknown_ptr) device_enable_ats;
    
    // [PciDeviceEnablePasid]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x163a0, 0x1d08 bytes
    //
    _m43(sdk::unknown_ptr) device_enable_pasid;
    
    // [PciDeviceEnablePri]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x163a8, 0x1d08 bytes
    //
    _m44(sdk::unknown_ptr) device_enable_pri;
    
    // [PciDevice_GetDelayTime]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe32c, 0x1cf0 bytes
    //
    _m45(sdk::unknown_ptr) device_get_delay_time;
    
    // [PciDeviceHasBootConfiguration]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4d824, 0x1cf0 bytes
    //
    _m46(sdk::unknown_ptr) device_has_boot_configuration;
    
    // [PciDeviceQueryAts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x1646c, 0x1d08 bytes
    //
    _m47(sdk::unknown_ptr) device_query_ats;
    
    // [PciDeviceQueryPasid]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x164e4, 0x1d08 bytes
    //
    _m48(sdk::unknown_ptr) device_query_pasid;
    
    // [PciDeviceQueryPri]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16564, 0x1d08 bytes
    //
    _m49(sdk::unknown_ptr) device_query_pri;
    
    // [PciDeviceResetInterface_DeviceBusSpecificReset]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x23400, 0x1cf0 bytes
    //
    _m50(sdk::unknown_ptr) device_reset_interface_device_bus_specific_reset;
    
    // [PciDeviceResetInterface_GetDeviceResetStatus]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x23650, 0x1cf0 bytes
    //
    _m51(sdk::unknown_ptr) device_reset_interface_get_device_reset_status;
    
    // [PciDeviceResetInterface_QueryBusSpecificResetInfo]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6f650, 0x1cf0 bytes
    //
    _m52(sdk::unknown_ptr) device_reset_interface_query_bus_specific_reset_info;
    
    // [PciDeviceSetAtsControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16634, 0x1d08 bytes
    //
    _m53(sdk::unknown_ptr) device_set_ats_control;
    
    // [PciDeviceSetPasidControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x166b4, 0x1d08 bytes
    //
    _m54(sdk::unknown_ptr) device_set_pasid_control;
    
    // [PciDeviceSetPriControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16734, 0x1d08 bytes
    //
    _m55(sdk::unknown_ptr) device_set_pri_control;
    
    // [PciDsmIgnoreBootConfigStrictMode]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38758, 0x1cf0 bytes
    //
    _m56(sdk::unknown_ptr) dsm_ignore_boot_config_strict_mode;
    
    // [PciEnableArbiterTracing]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x387e8, 0x1cf0 bytes
    //
    _m57(sdk::unknown_ptr) enable_arbiter_tracing;
    
    // [PciEnableDisableWppTracing]
    // Ldr = [pci.sys]
    // => Windows 10 v20H2
    // pci.sys .text:0x11514, 0x1cf0 bytes
    //
    _m58(sdk::unknown_ptr) enable_disable_wpp_tracing;
    
    // [PciEnableHotplugTracing]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38750, 0x1cf0 bytes
    //
    _m59(sdk::unknown_ptr) enable_hotplug_tracing;
    
    // [PciEvaluateDsdForPropertyEx]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x48340, 0x1cf0 bytes
    //
    _m60(sdk::unknown_ptr) evaluate_dsd_for_property_ex;
    
    // [ExpressBridgeRegisterDeviceForAspmCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x2c348, 0x1d08 bytes
    //
    _m61(sdk::unknown_ptr) express_bridge_register_device_for_aspm_callback;
    
    // [ExpressBridgeSetAriEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x4af80, 0x1d08 bytes
    //
    _m62(sdk::unknown_ptr) express_bridge_set_ari_enable;
    
    // [ExpressBridgeUnregisterAspmPolicyCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x478c0, 0x1d08 bytes
    //
    _m63(sdk::unknown_ptr) express_bridge_unregister_aspm_policy_callback;
    
    // [ExpressBridgeUnregisterDeviceForAspmCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x478e4, 0x1d08 bytes
    //
    _m64(sdk::unknown_ptr) express_bridge_unregister_device_for_aspm_callback;
    
    // [ExpressDetermineAcsSupport]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x58b3c, 0x1cf0 bytes
    //
    _m65(sdk::unknown_ptr) express_determine_acs_support;
    
    // [ExpressRootPortAckPmeEventAtDeviceSource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16ab0, 0x1d08 bytes
    //
    _m66(sdk::unknown_ptr) express_root_port_ack_pme_event_at_device_source;
    
    // [ExpressRootPortCheckForSpuriousPmeEvent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x16d08, 0x1d08 bytes
    //
    _m67(sdk::unknown_ptr) express_root_port_check_for_spurious_pme_event;
    
    // [ExpressRootPortEnableCrsSoftwareVisibility]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xaac4, 0x1cf0 bytes
    //
    _m68(sdk::unknown_ptr) express_root_port_enable_crs_software_visibility;
    
    // [PciFilterRequirementsListInterrupts]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x58644, 0x1cf0 bytes
    //
    _m69(sdk::unknown_ptr) filter_requirements_list_interrupts;
    
    // [PciFindErrorDevice]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x29014, 0x1cf0 bytes
    //
    _m70(sdk::unknown_ptr) find_error_device;
    
    // [PciFindInterruptObjectForRootPort]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69650, 0x1cf0 bytes
    //
    _m71(sdk::unknown_ptr) find_interrupt_object_for_root_port;
    
    // [PciFindRecoveryListEntry]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x68904, 0x1cf0 bytes
    //
    _m72(sdk::unknown_ptr) find_recovery_list_entry;
    
    // [PciFpbArbMem_TraceDumpCurrentDecoding]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6b0a8, 0x1cf0 bytes
    //
    _m73(sdk::unknown_ptr) fpb_arb_mem_trace_dump_current_decoding;
    
    // [PciFpbArbMem_ValidateDecodingUpstream]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6b1f4, 0x1cf0 bytes
    //
    _m74(sdk::unknown_ptr) fpb_arb_mem_validate_decoding_upstream;
    
    // [PciFpbOptOutInNonNativeMode]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38768, 0x1cf0 bytes
    //
    _m75(sdk::unknown_ptr) fpb_opt_out_in_non_native_mode;
    
    // [PciFreeBridgeSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x494a8, 0x1d08 bytes
    //
    _m76(sdk::unknown_ptr) free_bridge_subtree;
    
    // [PciFunctionLevelDeviceReset]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x696dc, 0x1cf0 bytes
    //
    _m77(sdk::unknown_ptr) function_level_device_reset;
    
    // [PciGenericRequirementsAllowed]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4ad34, 0x1cf0 bytes
    //
    _m78(sdk::unknown_ptr) generic_requirements_allowed;
    
    // [PciGetArbiterTracingPolicyFromRegistry]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x4a238, 0x1cf0 bytes
    //
    _m79(sdk::unknown_ptr) get_arbiter_tracing_policy_from_registry;
    
    // [PciGetBridgeTypeProperty]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x3e718, 0x1d08 bytes
    //
    _m80(sdk::unknown_ptr) get_bridge_type_property;
    
    // [PciGetBusDataLinkSettleTime]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe20c, 0x1cf0 bytes
    //
    _m81(sdk::unknown_ptr) get_bus_data_link_settle_time;
    
    // [PciGetDeviceCustomSetting]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x431c0, 0x1cf0 bytes
    //
    _m82(sdk::unknown_ptr) get_device_custom_setting;
    
    // [PciGetDeviceCustomSettings]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x43008, 0x1cf0 bytes
    //
    _m83(sdk::unknown_ptr) get_device_custom_settings;
    
    // [PciGetDeviceD0DelayTime]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe790, 0x1cf0 bytes
    //
    _m84(sdk::unknown_ptr) get_device_d0_delay_time;
    
    // [PciGetDeviceD3ColdCapability]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x474f8, 0x1cf0 bytes
    //
    _m85(sdk::unknown_ptr) get_device_d3_cold_capability;
    
    // [PciGetDmaProperties]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x57cf4, 0x1cf0 bytes
    //
    _m86(sdk::unknown_ptr) get_dma_properties;
    
    // [PciGetNextAttentionIndicatorState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x14c14, 0x1d08 bytes
    //
    _m87(sdk::unknown_ptr) get_next_attention_indicator_state;
    
    // [PciGetOrCreateRecoveryListEntry]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x68a08, 0x1cf0 bytes
    //
    _m88(sdk::unknown_ptr) get_or_create_recovery_list_entry;
    
    // [PciGetUsb4HostRouterDsdInfo]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x743c0, 0x1cf0 bytes
    //
    _m89(sdk::unknown_ptr) get_usb4_host_router_dsd_info;
    
    // [GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30250, 0x1cf0 bytes
    //
    _m90(sdk::unknown_ptr) guid_devinterface_usb4_virtual_power_pdo;
    
    // [GUID_DSD_USB4_PORT_DEVICE]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2ec68, 0x1cf0 bytes
    //
    _m91(sdk::unknown_ptr) guid_dsd_usb4_port_device;
    
    // [GUID_PCI_RCEC_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2d960, 0x1cf0 bytes
    //
    _m92(sdk::unknown_ptr) guid_pci_rcec_interface;
    
    // [PciInitWheaErrorPacket]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x290b8, 0x1cf0 bytes
    //
    _m93(sdk::unknown_ptr) init_whea_error_packet;
    
    // [PciIoArbiter_CommitAllocation]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x47cf0, 0x1cf0 bytes
    //
    _m94(sdk::unknown_ptr) io_arbiter_commit_allocation;
    
    // [PciIoArbiter_TestAllocation]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x478d0, 0x1cf0 bytes
    //
    _m95(sdk::unknown_ptr) io_arbiter_test_allocation;
    
    // [PciIommuBusInterface_GetDevicePathInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x3f5a0, 0x1d08 bytes
    //
    _m96(sdk::unknown_ptr) iommu_bus_interface_get_device_path_information;
    
    // [PciIommuBusInterface_GetRootDevice]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x24350, 0x1cf0 bytes
    //
    _m97(sdk::unknown_ptr) iommu_bus_interface_get_root_device;
    
    // [PciIsDeviceContained]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xca78, 0x1cf0 bytes
    //
    _m98(sdk::unknown_ptr) is_device_contained;
    
    // [PciIsSecondaryBusResetSupported]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6988c, 0x1cf0 bytes
    //
    _m99(sdk::unknown_ptr) is_secondary_bus_reset_supported;
    
    // [PciKSREnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .data:0x23448, 0x1d08 bytes
    //
    _n00(sdk::unknown_ptr) ksr_enabled;
    
    // [PciKSRInProgress]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .data:0x23449, 0x1d08 bytes
    //
    _n01(sdk::unknown_ptr) ksr_in_progress;
    
    // [PciLateRestoreAddNode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x171fc, 0x1d08 bytes
    //
    _n02(sdk::unknown_ptr) late_restore_add_node;
    
    // [PciLateRestoreList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .data:0x23430, 0x1d08 bytes
    //
    _n03(sdk::unknown_ptr) late_restore_list;
    
    // [PciLateRestoreResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x17330, 0x1d08 bytes
    //
    _n04(sdk::unknown_ptr) late_restore_resources;
    
    // [PciLateRestoreSaveConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x176d8, 0x1d08 bytes
    //
    _n05(sdk::unknown_ptr) late_restore_save_config;
    
    // [PciLogDeviceBeginDStateTransition]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe914, 0x1cf0 bytes
    //
    _n06(sdk::unknown_ptr) log_device_begin_d_state_transition;
    
    // [PciLogDeviceEndDStateTransition]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe9dc, 0x1cf0 bytes
    //
    _n07(sdk::unknown_ptr) log_device_end_d_state_transition;
    
    // [PciLogDevicePendDStateTransition]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xeaa4, 0x1cf0 bytes
    //
    _n08(sdk::unknown_ptr) log_device_pend_d_state_transition;
    
    // [PciNextPopulatedSlot]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x49504, 0x1d08 bytes
    //
    _n09(sdk::unknown_ptr) next_populated_slot;
    
    // [PciNpemControlInterface_QueryNpemControl]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x263c0, 0x1cf0 bytes
    //
    _n10(sdk::unknown_ptr) npem_control_interface_query_npem_control;
    
    // [PciPowerSettingCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x49ee0, 0x1d08 bytes
    //
    _n11(sdk::unknown_ptr) power_setting_callback;
    
    // [PciPowerSettingCallbackHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .data:0x23598, 0x1d08 bytes
    //
    _n12(sdk::unknown_ptr) power_setting_callback_handle;
    
    // [PciPowerUpDeviceTimerDpc]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x12e0, 0x1d08 bytes
    //
    _n13(sdk::unknown_ptr) power_up_device_timer_dpc;
    
    // [PciPreScanIsDeviceOnDebugPath]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x507f8, 0x1cf0 bytes
    //
    _n14(sdk::unknown_ptr) pre_scan_is_device_on_debug_path;
    
    // [PciPreScanReconnectDevice]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x7a04, 0x1cf0 bytes
    //
    _n15(sdk::unknown_ptr) pre_scan_reconnect_device;
    
    // [PciPreScanUpdateAncestorSubordinateBuses]
    // Ldr = [pci.sys]
    // => Windows 10 v20H2
    // pci.sys PAGE:0x4dd18, 0x1cf0 bytes
    //
    _n16(sdk::unknown_ptr) pre_scan_update_ancestor_subordinate_buses;
    
    // [PciQueryDeviceID]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x560bc, 0x1cf0 bytes
    //
    _n17(sdk::unknown_ptr) query_device_id;
    
    // [PciQueryDeviceInstanceId]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x68bc4, 0x1cf0 bytes
    //
    _n18(sdk::unknown_ptr) query_device_instance_id;
    
    // [PciQueryParentResetInterface]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6f734, 0x1cf0 bytes
    //
    _n19(sdk::unknown_ptr) query_parent_reset_interface;
    
    // [PciRcecAddDevice]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x71bd8, 0x1cf0 bytes
    //
    _n20(sdk::unknown_ptr) rcec_add_device;
    
    // [PciRcec_CancelRemove]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x72640, 0x1cf0 bytes
    //
    _n21(sdk::unknown_ptr) rcec_cancel_remove;
    
    // [PciRcec_CancelStop]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x72670, 0x1cf0 bytes
    //
    _n22(sdk::unknown_ptr) rcec_cancel_stop;
    
    // [PciRcecDevicePowerCompletion]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x26ef0, 0x1cf0 bytes
    //
    _n23(sdk::unknown_ptr) rcec_device_power_completion;
    
    // [PciRcecDisableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x26f50, 0x1cf0 bytes
    //
    _n24(sdk::unknown_ptr) rcec_disable_interrupts;
    
    // [PciRcecDisconnectInterrupts]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x26fe8, 0x1cf0 bytes
    //
    _n25(sdk::unknown_ptr) rcec_disconnect_interrupts;
    
    // [PciRcec_DispatchPnpTable]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2b6a0, 0x1cf0 bytes
    //
    _n26(sdk::unknown_ptr) rcec_dispatch_pnp_table;
    
    // [PciRcec_DispatchPowerTable]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2b620, 0x1cf0 bytes
    //
    _n27(sdk::unknown_ptr) rcec_dispatch_power_table;
    
    // [PciRcecEnableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27048, 0x1cf0 bytes
    //
    _n28(sdk::unknown_ptr) rcec_enable_interrupts;
    
    // [PciRcec_FilterResourceRequirements]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x726a0, 0x1cf0 bytes
    //
    _n29(sdk::unknown_ptr) rcec_filter_resource_requirements;
    
    // [PciRcecHandleSystemPower]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x270dc, 0x1cf0 bytes
    //
    _n30(sdk::unknown_ptr) rcec_handle_system_power;
    
    // [PciRcecInitErrorReporting]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x71ecc, 0x1cf0 bytes
    //
    _n31(sdk::unknown_ptr) rcec_init_error_reporting;
    
    // [PciRcecInterface]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2a7f8, 0x1cf0 bytes
    //
    _n32(sdk::unknown_ptr) rcec_interface;
    
    // [PciRcecInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x723b0, 0x1cf0 bytes
    //
    _n33(sdk::unknown_ptr) rcec_interface_constructor;
    
    // [PciRcecInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27160, 0x1cf0 bytes
    //
    _n34(sdk::unknown_ptr) rcec_interrupt_routine;
    
    // [PciRcecLink]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x720d4, 0x1cf0 bytes
    //
    _n35(sdk::unknown_ptr) rcec_link;
    
    // [PciRcecList]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38630, 0x1cf0 bytes
    //
    _n36(sdk::unknown_ptr) rcec_list;
    
    // [PciRcecMessageServiceRoutine]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27240, 0x1cf0 bytes
    //
    _n37(sdk::unknown_ptr) rcec_message_service_routine;
    
    // [PciRcecPowerUpCompletion]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27260, 0x1cf0 bytes
    //
    _n38(sdk::unknown_ptr) rcec_power_up_completion;
    
    // [PciRcecProcessStartResources]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x72560, 0x1cf0 bytes
    //
    _n39(sdk::unknown_ptr) rcec_process_start_resources;
    
    // [PciRcecQueryHwInformation]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x721b0, 0x1cf0 bytes
    //
    _n40(sdk::unknown_ptr) rcec_query_hw_information;
    
    // [PciRcec_QueryPower]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27310, 0x1cf0 bytes
    //
    _n41(sdk::unknown_ptr) rcec_query_power;
    
    // [PciRcec_QueryRemove]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x726d0, 0x1cf0 bytes
    //
    _n42(sdk::unknown_ptr) rcec_query_remove;
    
    // [PciRcec_QueryStop]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x72700, 0x1cf0 bytes
    //
    _n43(sdk::unknown_ptr) rcec_query_stop;
    
    // [PciRcec_Remove]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27350, 0x1cf0 bytes
    //
    _n44(sdk::unknown_ptr) rcec_remove;
    
    // [PciRcec_SetPower]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x273f0, 0x1cf0 bytes
    //
    _n45(sdk::unknown_ptr) rcec_set_power;
    
    // [PciRcec_Start]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x274e0, 0x1cf0 bytes
    //
    _n46(sdk::unknown_ptr) rcec_start;
    
    // [PciRcec_Stop]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x27570, 0x1cf0 bytes
    //
    _n47(sdk::unknown_ptr) rcec_stop;
    
    // [PciRcec_SurpriseRemoval]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x275c0, 0x1cf0 bytes
    //
    _n48(sdk::unknown_ptr) rcec_surprise_removal;
    
    // [PciRcecSystemPowerCompletion]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x272a0, 0x1cf0 bytes
    //
    _n49(sdk::unknown_ptr) rcec_system_power_completion;
    
    // [PciRcecUnlink]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x26e34, 0x1cf0 bytes
    //
    _n50(sdk::unknown_ptr) rcec_unlink;
    
    // [PciRecoveryListHead]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38890, 0x1cf0 bytes
    //
    _n51(sdk::unknown_ptr) recovery_list_head;
    
    // [PciRecoveryLogTelemetry]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe350, 0x1cf0 bytes
    //
    _n52(sdk::unknown_ptr) recovery_log_telemetry;
    
    // [PciReserveUsb4PowerDependency]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x68dc0, 0x1cf0 bytes
    //
    _n53(sdk::unknown_ptr) reserve_usb4_power_dependency;
    
    // [PciRpRcecHandleAerInterrupt]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x292ec, 0x1cf0 bytes
    //
    _n54(sdk::unknown_ptr) rp_rcec_handle_aer_interrupt;
    
    // [PciRpRcecInitAerAndWheaSupport]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x546cc, 0x1cf0 bytes
    //
    _n55(sdk::unknown_ptr) rp_rcec_init_aer_and_whea_support;
    
    // [PciSaveBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x49644, 0x1d08 bytes
    //
    _n56(sdk::unknown_ptr) save_bridge_requirements;
    
    // [PciSaveRestoreExpressPort]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69920, 0x1cf0 bytes
    //
    _n57(sdk::unknown_ptr) save_restore_express_port;
    
    // [PciSecondaryBusReset]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x6997c, 0x1cf0 bytes
    //
    _n58(sdk::unknown_ptr) secondary_bus_reset;
    
    // [PciSessionStateCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x2c320, 0x1d08 bytes
    //
    _n59(sdk::unknown_ptr) session_state_callback;
    
    // [PciSessionStateCallbackHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .data:0x235a0, 0x1d08 bytes
    //
    _n60(sdk::unknown_ptr) session_state_callback_handle;
    
    // [PciSetDeviceAcsScenarios]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x73538, 0x1cf0 bytes
    //
    _n61(sdk::unknown_ptr) set_device_acs_scenarios;
    
    // [PciSetOutstandingPageRequests]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x167d4, 0x1d08 bytes
    //
    _n62(sdk::unknown_ptr) set_outstanding_page_requests;
    
    // [PciSpreadBridgesHotplug]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x496ac, 0x1d08 bytes
    //
    _n63(sdk::unknown_ptr) spread_bridges_hotplug;
    
    // [PciSynchronizedUnlinkDeviceFromParent]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69ad4, 0x1cf0 bytes
    //
    _n64(sdk::unknown_ptr) synchronized_unlink_device_from_parent;
    
    // [PciSynchronizedUnlinkDeviceFromParentRoutine]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1cb00, 0x1cf0 bytes
    //
    _n65(sdk::unknown_ptr) synchronized_unlink_device_from_parent_routine;
    
    // [PciUpdateRecoveryStateProperty]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x50c94, 0x1cf0 bytes
    //
    _n66(sdk::unknown_ptr) update_recovery_state_property;
    
    // [Usb4AddPoFxRelation]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x66ec0, 0x1cf0 bytes
    //
    _n67(sdk::unknown_ptr) usb4_add_po_fx_relation;
    
    // [Usb4CleanUpPoFxRelation]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x66ffc, 0x1cf0 bytes
    //
    _n68(sdk::unknown_ptr) usb4_clean_up_po_fx_relation;
    
    // [Usb4NhiDriverNotificationCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x670b0, 0x1cf0 bytes
    //
    _n69(sdk::unknown_ptr) usb4_nhi_driver_notification_callback;
    
    // [PciUsb4NhiDriverNotificationCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1a9e0, 0x1cf0 bytes
    //
    _n70(sdk::unknown_ptr) usb4_nhi_driver_notification_callback_;
    
    // [Usb4NhiTargetDeviceChangeCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x67240, 0x1cf0 bytes
    //
    _n71(sdk::unknown_ptr) usb4_nhi_target_device_change_callback;
    
    // [Usb4RegisterDriverCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x67338, 0x1cf0 bytes
    //
    _n72(sdk::unknown_ptr) usb4_register_driver_callback;
    
    // [PciUsb4RegisterDriverCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x68f44, 0x1cf0 bytes
    //
    _n73(sdk::unknown_ptr) usb4_register_driver_callback_;
    
    // [PciUsb4SoftwareControlGranted]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .data:0x38770, 0x1cf0 bytes
    //
    _n74(sdk::unknown_ptr) usb4_software_control_granted;
    
    // [PciUsb4UnregisterDriverCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x69b14, 0x1cf0 bytes
    //
    _n75(sdk::unknown_ptr) usb4_unregister_driver_callback;
    
    // [Usb4UnregisterDriverCallback]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys PAGE:0x673ec, 0x1cf0 bytes
    //
    _n76(sdk::unknown_ptr) usb4_unregister_driver_callback_;
    
    // [PciValidateBridgeConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys PAGE:0x4997c, 0x1d08 bytes
    //
    _n77(sdk::unknown_ptr) validate_bridge_config;
    
    // [PciWaitOnDeviceCrs]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xa594, 0x1cf0 bytes
    //
    _n78(sdk::unknown_ptr) wait_on_device_crs;
    
    // [PciWalkDevicePathFindLength]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x81a4, 0x1d08 bytes
    //
    _n79(sdk::unknown_ptr) walk_device_path_find_length;
    
    // [PciWalkDevicePathFindLengthCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x1800, 0x1d08 bytes
    //
    _n80(sdk::unknown_ptr) walk_device_path_find_length_callback;
    
    // [PciWalkDevicePathFindPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x8044, 0x1d08 bytes
    //
    _n81(sdk::unknown_ptr) walk_device_path_find_path;
    
    // [PciWheaReportSpuriousError]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x29928, 0x1cf0 bytes
    //
    _n82(sdk::unknown_ptr) whea_report_spurious_error;
    
    // [PciWnfPublishD3ColdStateChange]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x2270, 0x1cf0 bytes
    //
    _n83(sdk::unknown_ptr) wnf_publish_d3_cold_state_change;
    
    // [WPP_043667a5d0b03cdf824520766092d69a_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2cc00, 0x1cf0 bytes
    //
    _n84(sdk::unknown_ptr) wpp_043667a5d0b03cdf824520766092d69a_traceguids;
    
    // [WPP_0b2ed17e233a3889e21b16e221cd698f_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1bb20, 0x1d08 bytes
    //
    _n85(sdk::unknown_ptr) wpp_0b2ed17e233a3889e21b16e221cd698f_traceguids;
    
    // [WPP_16762347f5a43a8a3042b3d90e12868a_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1cee8, 0x1d08 bytes
    //
    _n86(sdk::unknown_ptr) wpp_16762347f5a43a8a3042b3d90e12868a_traceguids;
    
    // [WPP_1e4370c01013350354df7d4a4be00934_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1ced8, 0x1d08 bytes
    //
    _n87(sdk::unknown_ptr) wpp_1e4370c01013350354df7d4a4be00934_traceguids;
    
    // [WPP_1f05db904b0138c1186252af48ffcb15_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1bb50, 0x1d08 bytes
    //
    _n88(sdk::unknown_ptr) wpp_1f05db904b0138c1186252af48ffcb15_traceguids;
    
    // [WPP_24575641762b3418bc50028bccdaa14f_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2fec0, 0x1cf0 bytes
    //
    _n89(sdk::unknown_ptr) wpp_24575641762b3418bc50028bccdaa14f_traceguids;
    
    // [WPP_2a3990fb991b371e4961f30496e34bbd_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b4f0, 0x1d08 bytes
    //
    _n90(sdk::unknown_ptr) wpp_2a3990fb991b371e4961f30496e34bbd_traceguids;
    
    // [WPP_2e2aaf9c7e81391e890e82d2fa85ac61_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2c738, 0x1cf0 bytes
    //
    _n91(sdk::unknown_ptr) wpp_2e2aaf9c7e81391e890e82d2fa85ac61_traceguids;
    
    // [WPP_335f4c6f5b0a3ea4771a87a75f335957_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2d738, 0x1cf0 bytes
    //
    _n92(sdk::unknown_ptr) wpp_335f4c6f5b0a3ea4771a87a75f335957_traceguids;
    
    // [WPP_43c8805007583dda1a2e94fda10da8bb_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b5b0, 0x1d08 bytes
    //
    _n93(sdk::unknown_ptr) wpp_43c8805007583dda1a2e94fda10da8bb_traceguids;
    
    // [WPP_4b7351d0eb823f3d36c5d0c9cfd1af5a_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1bb30, 0x1d08 bytes
    //
    _n94(sdk::unknown_ptr) wpp_4b7351d0eb823f3d36c5d0c9cfd1af5a_traceguids;
    
    // [WPP_56106fc4f586384621a2e9db4b201860_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30c80, 0x1cf0 bytes
    //
    _n95(sdk::unknown_ptr) wpp_56106fc4f586384621a2e9db4b201860_traceguids;
    
    // [WPP_59872b8bc43435369216ca2ce5b1c09b_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b5c0, 0x1d08 bytes
    //
    _n96(sdk::unknown_ptr) wpp_59872b8bc43435369216ca2ce5b1c09b_traceguids;
    
    // [WPP_5cb698f6c3603f3df395a8a4612872a0_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b5e0, 0x1d08 bytes
    //
    _n97(sdk::unknown_ptr) wpp_5cb698f6c3603f3df395a8a4612872a0_traceguids;
    
    // [WPP_640b10e826163e01dc0c8b5abebaef77_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2fee8, 0x1cf0 bytes
    //
    _n98(sdk::unknown_ptr) wpp_640b10e826163e01dc0c8b5abebaef77_traceguids;
    
    // [WPP_6ab22a5abd58366f64216af9f1419641_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30990, 0x1cf0 bytes
    //
    _n99(sdk::unknown_ptr) wpp_6ab22a5abd58366f64216af9f1419641_traceguids;
    
    // [WPP_6fb574e39b263ed07b8660f9775f9ca5_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30af8, 0x1cf0 bytes
    //
    _o00(sdk::unknown_ptr) wpp_6fb574e39b263ed07b8660f9775f9ca5_traceguids;
    
    // [WPP_71b4463e060f3269ef4973471e8f01c8_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2cc10, 0x1cf0 bytes
    //
    _o01(sdk::unknown_ptr) wpp_71b4463e060f3269ef4973471e8f01c8_traceguids;
    
    // [WPP_821a212549a436c1315bbe496bf8fbea_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b500, 0x1d08 bytes
    //
    _o02(sdk::unknown_ptr) wpp_821a212549a436c1315bbe496bf8fbea_traceguids;
    
    // [WPP_82d9585dfa0b3b3abb662a7ee31480f1_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30c50, 0x1cf0 bytes
    //
    _o03(sdk::unknown_ptr) wpp_82d9585dfa0b3b3abb662a7ee31480f1_traceguids;
    
    // [WPP_86e95d76e4b03c42b9d598089044b214_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2d5e8, 0x1cf0 bytes
    //
    _o04(sdk::unknown_ptr) wpp_86e95d76e4b03c42b9d598089044b214_traceguids;
    
    // [WPP_9210f63625053a5bfa348b497fdb6ab8_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2cbf0, 0x1cf0 bytes
    //
    _o05(sdk::unknown_ptr) wpp_9210f63625053a5bfa348b497fdb6ab8_traceguids;
    
    // [WPP_96bbd0f8479e31aebf3da193f06f04c2_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30c70, 0x1cf0 bytes
    //
    _o06(sdk::unknown_ptr) wpp_96bbd0f8479e31aebf3da193f06f04c2_traceguids;
    
    // [WPP_993ca6f24dee30ba71c6e734933cacf4_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1cf00, 0x1d08 bytes
    //
    _o07(sdk::unknown_ptr) wpp_993ca6f24dee30ba71c6e734933cacf4_traceguids;
    
    // [WPP_9bd4f52d991a30dca4a55f27c45f51fc_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1bb40, 0x1d08 bytes
    //
    _o08(sdk::unknown_ptr) wpp_9bd4f52d991a30dca4a55f27c45f51fc_traceguids;
    
    // [WPP_c03971f6da9b3b68e6a153c28da71a91_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1cd48, 0x1d08 bytes
    //
    _o09(sdk::unknown_ptr) wpp_c03971f6da9b3b68e6a153c28da71a91_traceguids;
    
    // [WPP_c98ec781cefd3cf459b62fc9a7ba8897_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30c60, 0x1cf0 bytes
    //
    _o10(sdk::unknown_ptr) wpp_c98ec781cefd3cf459b62fc9a7ba8897_traceguids;
    
    // [WPP_cba661a5fac33a5a25e36f38510e9bbc_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1b460, 0x1d08 bytes
    //
    _o11(sdk::unknown_ptr) wpp_cba661a5fac33a5a25e36f38510e9bbc_traceguids;
    
    // [WPP_ce1cdaa4959c3a9f60f34d088c8b0090_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2cc38, 0x1cf0 bytes
    //
    _o12(sdk::unknown_ptr) wpp_ce1cdaa4959c3a9f60f34d088c8b0090_traceguids;
    
    // [WPP_d12c7456cd8732415ea4e1f748a3c39b_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .rdata:0x1cf50, 0x1d08 bytes
    //
    _o13(sdk::unknown_ptr) wpp_d12c7456cd8732415ea4e1f748a3c39b_traceguids;
    
    // [WPP_d242c87afcd935ca33c9b3510b6d6e4d_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30e08, 0x1cf0 bytes
    //
    _o14(sdk::unknown_ptr) wpp_d242c87afcd935ca33c9b3510b6d6e4d_traceguids;
    
    // [WPP_d82532cacd753ba63ac90397752536ce_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2c3b8, 0x1cf0 bytes
    //
    _o15(sdk::unknown_ptr) wpp_d82532cacd753ba63ac90397752536ce_traceguids;
    
    // [WPP_deed809b800435f56d72df44de46e69d_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2f708, 0x1cf0 bytes
    //
    _o16(sdk::unknown_ptr) wpp_deed809b800435f56d72df44de46e69d_traceguids;
    
    // [WPP_e1175e1859e43e2339610f18e6a53d7b_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2c770, 0x1cf0 bytes
    //
    _o17(sdk::unknown_ptr) wpp_e1175e1859e43e2339610f18e6a53d7b_traceguids;
    
    // [WPP_ee8a4e1aa72c3831c526ab8dd40bc763_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2ef60, 0x1cf0 bytes
    //
    _o18(sdk::unknown_ptr) wpp_ee8a4e1aa72c3831c526ab8dd40bc763_traceguids;
    
    // [WPP_ef24e18f4e0536a90dca1488ec0907a0_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x2d5f8, 0x1cf0 bytes
    //
    _o19(sdk::unknown_ptr) wpp_ef24e18f4e0536a90dca1488ec0907a0_traceguids;
    
    // [WPP_fcf02ed55dd43078b45d53a1a26b73b1_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .rdata:0x30c90, 0x1cf0 bytes
    //
    _o20(sdk::unknown_ptr) wpp_fcf02ed55dd43078b45d53a1a26b73b1_traceguids;
    
    // [WPP_RECORDER_SF_DDDddd]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xe644, 0x1cf0 bytes
    //
    _o21(sdk::unknown_ptr) wpp_recorder_sf_dd_dddd;
    
    // [WPP_RECORDER_SF_DDDdddd]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1ad64, 0x1cf0 bytes
    //
    _o22(sdk::unknown_ptr) wpp_recorder_sf_dd_ddddd;
    
    // [WPP_RECORDER_SF_DDDdddddD]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x9b8c, 0x1cf0 bytes
    //
    _o23(sdk::unknown_ptr) wpp_recorder_sf_dd_dddddd_d;
    
    // [WPP_RECORDER_SF_DDDL]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1ac54, 0x1cf0 bytes
    //
    _o24(sdk::unknown_ptr) wpp_recorder_sf_dddl;
    
    // [WPP_RECORDER_SF_qDDDsLi]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xec90, 0x1cf0 bytes
    //
    _o25(sdk::unknown_ptr) wpp_recorder_sf_q_dd_ds_li;
    
    // [WPP_RECORDER_SF_qDDDLi]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xeb30, 0x1cf0 bytes
    //
    _o26(sdk::unknown_ptr) wpp_recorder_sf_q_ddd_li;
    
    // [WPP_RECORDER_SF_qDDDDDd]
    // Ldr = [pci.sys]
    // => Windows 10 v1607
    // pci.sys .text:0x12e60, 0x1d08 bytes
    //
    _o27(sdk::unknown_ptr) wpp_recorder_sf_q_dddd_dd;
    
    // [WPP_RECORDER_SF_qDs]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x229cc, 0x1cf0 bytes
    //
    _o28(sdk::unknown_ptr) wpp_recorder_sf_q_ds;
    
    // [WPP_RECORDER_SF_sDD]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x1d520, 0x1cf0 bytes
    //
    _o29(sdk::unknown_ptr) wpp_recorder_sf_s_dd;
    
    // [WPP_RECORDER_SF_sDss]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x14868, 0x1cf0 bytes
    //
    _o30(sdk::unknown_ptr) wpp_recorder_sf_s_dss;
    
    // [WPP_RECORDER_SF_sdssqs]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0x22d94, 0x1cf0 bytes
    //
    _o31(sdk::unknown_ptr) wpp_recorder_sf_sdssqs;
    
    // [PciWriteDeviceConfigEx]
    // Ldr = [pci.sys]
    // => Windows 11
    // pci.sys .text:0xc95c, 0x1cf0 bytes
    //
    _o32(sdk::unknown_ptr) write_device_config_ex;
    
    // [PciDeviceCleanupStaleCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x3e008, 0x1cf0 bytes
    // pci.sys PAGE:0x3c008, 0x1cf0 bytes
    //
    _o33(sdk::unknown_ptr) device_cleanup_stale_custom_properties;
    
    // [PciDeviceOnDebugPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys PAGE:0x39b80, 0x1d08 bytes
    // pci.sys PAGE:0x4d460, 0x1cf0 bytes
    //
    _o34(sdk::unknown_ptr) device_on_debug_path;
    
    // [PciEnableAcsForHierarchy]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x61314, 0x1cf0 bytes
    // pci.sys PAGE:0x5f274, 0x1cf0 bytes
    //
    _o35(sdk::unknown_ptr) enable_acs_for_hierarchy;
    
    // [PciEvaluateDsdForProperty]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x413d4, 0x1cf0 bytes
    // pci.sys PAGE:0x41194, 0x1cf0 bytes
    //
    _o36(sdk::unknown_ptr) evaluate_dsd_for_property;
    
    // [ExpressBridgeProcessLinkForPowerManagement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys PAGE:0x2cf50, 0x1d08 bytes
    // pci.sys PAGE:0x532b4, 0x1cf0 bytes
    //
    _o37(sdk::unknown_ptr) express_bridge_process_link_for_power_management;
    
    // [ExpressDisableAts]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x21d04, 0x1cf0 bytes
    // pci.sys .text:0x21b04, 0x1cf0 bytes
    //
    _o38(sdk::unknown_ptr) express_disable_ats;
    
    // [ExpressPortObffDisable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x3e04, 0x1cf0 bytes
    // pci.sys .text:0x4e3c, 0x1cf0 bytes
    //
    _o39(sdk::unknown_ptr) express_port_obff_disable;
    
    // [ExpressPortPrepareForLinkPowerManagement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys PAGE:0x2c24c, 0x1d08 bytes
    // pci.sys PAGE:0x51ee0, 0x1cf0 bytes
    //
    _o40(sdk::unknown_ptr) express_port_prepare_for_link_power_management;
    
    // [ExpressRestoreTphRequesterCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys .text:0x18208, 0x1d08 bytes
    // pci.sys .text:0x27d98, 0x1cf0 bytes
    //
    _o41(sdk::unknown_ptr) express_restore_tph_requester_capability;
    
    // [PciFpbGetFirstMemoryRangeStartAtHint]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x1f36c, 0x1cf0 bytes
    // pci.sys .text:0x1f16c, 0x1cf0 bytes
    //
    _o42(sdk::unknown_ptr) fpb_get_first_memory_range_start_at_hint;
    
    // [PciIsFunctionLevelResetSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys PAGE:0x4ad78, 0x1d08 bytes
    // pci.sys PAGE:0x5a418, 0x1cf0 bytes
    //
    _o43(sdk::unknown_ptr) is_function_level_reset_supported;
    
    // [PciProbeConfigRegistersRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys .text:0x10dd4, 0x1d08 bytes
    // pci.sys .text:0x6160, 0x1cf0 bytes
    //
    _o44(sdk::unknown_ptr) probe_config_registers_raw;
    
    // [PciSkipWppTracing]
    // Ldr = [pci.sys]
    // => Windows 11, Windows 10 v20H2
    // pci.sys .data:0x387ec, 0x1cf0 bytes
    // pci.sys .data:0x3277d, 0x1cf0 bytes
    //
    _o45(sdk::unknown_ptr) skip_wpp_tracing;
    
    // [PciTraceLogInitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 11
    // pci.sys INIT:0x512f4, 0x1d08 bytes
    // pci.sys INIT:0x78a88, 0x1cf0 bytes
    //
    _o46(sdk::unknown_ptr) trace_log_initialize;
    
    // [WPP_12645fc35f693680b64add8eb81b839f_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2cb58, 0x1cf0 bytes
    // pci.sys .rdata:0x2a1b0, 0x1cf0 bytes
    //
    _o47(sdk::unknown_ptr) wpp_12645fc35f693680b64add8eb81b839f_traceguids;
    
    // [WPP_3b9b4405b6963078153d454dc54e3882_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29bd0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a160, 0x1cf0 bytes
    //
    _o48(sdk::unknown_ptr) wpp_3b9b4405b6963078153d454dc54e3882_traceguids;
    
    // [WPP_4dbce10078273b64acd8e87e8c58f300_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29bc0, 0x1cf0 bytes
    // pci.sys .rdata:0x28778, 0x1cf0 bytes
    //
    _o49(sdk::unknown_ptr) wpp_4dbce10078273b64acd8e87e8c58f300_traceguids;
    
    // [WPP_5ccef53c1c293ab0c18ecf156f9d20a7_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29b48, 0x1cf0 bytes
    // pci.sys .rdata:0x286b8, 0x1cf0 bytes
    //
    _o50(sdk::unknown_ptr) wpp_5ccef53c1c293ab0c18ecf156f9d20a7_traceguids;
    
    // [WPP_6eff7cb054b6312725e334e7732e148a_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2ca00, 0x1cf0 bytes
    // pci.sys .rdata:0x2a100, 0x1cf0 bytes
    //
    _o51(sdk::unknown_ptr) wpp_6eff7cb054b6312725e334e7732e148a_traceguids;
    
    // [WPP_6f4e4a07d7583a2eb6d1ad1e47d18375_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29b58, 0x1cf0 bytes
    // pci.sys .rdata:0x28720, 0x1cf0 bytes
    //
    _o52(sdk::unknown_ptr) wpp_6f4e4a07d7583a2eb6d1ad1e47d18375_traceguids;
    
    // [WPP_73613b36c3ae3450f641cc8daeb8aeb3_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2c698, 0x1cf0 bytes
    // pci.sys .rdata:0x29fd8, 0x1cf0 bytes
    //
    _o53(sdk::unknown_ptr) wpp_73613b36c3ae3450f641cc8daeb8aeb3_traceguids;
    
    // [WPP_76bda12172653e89e7a2cd13b706ddca_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2ca30, 0x1cf0 bytes
    // pci.sys .rdata:0x2a150, 0x1cf0 bytes
    //
    _o54(sdk::unknown_ptr) wpp_76bda12172653e89e7a2cd13b706ddca_traceguids;
    
    // [WPP_88b1b8a3bedc38b1669e3a547ae74bb7_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2a140, 0x1cf0 bytes
    // pci.sys .rdata:0x286c8, 0x1cf0 bytes
    //
    _o55(sdk::unknown_ptr) wpp_88b1b8a3bedc38b1669e3a547ae74bb7_traceguids;
    
    // [WPP_9430f67b0aa739f3909c3b2508d9448c_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2c6a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a078, 0x1cf0 bytes
    //
    _o56(sdk::unknown_ptr) wpp_9430f67b0aa739f3909c3b2508d9448c_traceguids;
    
    // [WPP_94eaaae78ec633b926311a59b4c0aa99_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2c2d0, 0x1cf0 bytes
    // pci.sys .rdata:0x29800, 0x1cf0 bytes
    //
    _o57(sdk::unknown_ptr) wpp_94eaaae78ec633b926311a59b4c0aa99_traceguids;
    
    // [WPP_a422c2781d2c31b319091104cffe4a3f_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2cab8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a170, 0x1cf0 bytes
    //
    _o58(sdk::unknown_ptr) wpp_a422c2781d2c31b319091104cffe4a3f_traceguids;
    
    // [WPP_ac25678e7cdc360885b04d52633da1f9_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2ca20, 0x1cf0 bytes
    // pci.sys .rdata:0x2a120, 0x1cf0 bytes
    //
    _o59(sdk::unknown_ptr) wpp_ac25678e7cdc360885b04d52633da1f9_traceguids;
    
    // [WPP_c388c868c099317b2141e44a32cee88a_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2a230, 0x1cf0 bytes
    // pci.sys .rdata:0x28ca8, 0x1cf0 bytes
    //
    _o60(sdk::unknown_ptr) wpp_c388c868c099317b2141e44a32cee88a_traceguids;
    
    // [WPP_cf945f224d693559240cfe5a8af82922_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29b00, 0x1cf0 bytes
    // pci.sys .rdata:0x286a8, 0x1cf0 bytes
    //
    _o61(sdk::unknown_ptr) wpp_cf945f224d693559240cfe5a8af82922_traceguids;
    
    // [WPP_d6db837f46f7329a475c585e371677b8_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2c8a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a0f0, 0x1cf0 bytes
    //
    _o62(sdk::unknown_ptr) wpp_d6db837f46f7329a475c585e371677b8_traceguids;
    
    // [WPP_d82601222a843066c5e4bf4344cde934_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x2ca10, 0x1cf0 bytes
    // pci.sys .rdata:0x2a110, 0x1cf0 bytes
    //
    _o63(sdk::unknown_ptr) wpp_d82601222a843066c5e4bf4344cde934_traceguids;
    
    // [WPP_e806777088683995918c1fbaf8c269d6_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29670, 0x1cf0 bytes
    // pci.sys .rdata:0x29fc8, 0x1cf0 bytes
    //
    _o64(sdk::unknown_ptr) wpp_e806777088683995918c1fbaf8c269d6_traceguids;
    
    // [WPP_f36aa7e5875e3361d8dd3ce4a3a14bc5_Traceguids]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x29b88, 0x1cf0 bytes
    // pci.sys .rdata:0x28740, 0x1cf0 bytes
    //
    _o65(sdk::unknown_ptr) wpp_f36aa7e5875e3361d8dd3ce4a3a14bc5_traceguids;
    
    // [PciAcsBitsForIov]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys .rdata:0x1cef8, 0x1d08 bytes
    // pci.sys .rdata:0x2ca94, 0x1cf0 bytes
    // pci.sys .rdata:0x2baa4, 0x1cf0 bytes
    //
    _o66(sdk::unknown_ptr) acs_bits_for_iov;
    
    // [PciAllocateCmResourceList]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x695f4, 0x1cf0 bytes
    // pci.sys PAGE:0x59ff8, 0x1cf0 bytes
    // pci.sys PAGE:0x67454, 0x1cf0 bytes
    //
    _o67(sdk::unknown_ptr) allocate_cm_resource_list;
    
    // [PciAsyncDispatcherPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54f80, 0x1cf0 bytes
    // pci.sys PAGE:0x5b690, 0x1cf0 bytes
    // pci.sys PAGE:0x55420, 0x1cf0 bytes
    //
    _o68(sdk::unknown_ptr) async_dispatcher_passive;
    
    // [PciBootFrameBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x346e8, 0x1cf0 bytes
    // pci.sys .data:0x38748, 0x1cf0 bytes
    // pci.sys .data:0x326e8, 0x1cf0 bytes
    //
    _o69(sdk::unknown_ptr) boot_frame_buffer;
    
    // [PciBridgeFilterRequirementsListInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x3dff0, 0x1d08 bytes
    // pci.sys PAGE:0x50fd4, 0x1cf0 bytes
    // pci.sys PAGE:0x514e4, 0x1cf0 bytes
    //
    _o70(sdk::unknown_ptr) bridge_filter_requirements_list_interrupts;
    
    // [PciBridgeFixChildrenResourceHintAlignments]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4afe4, 0x1cf0 bytes
    // pci.sys PAGE:0x46e24, 0x1cf0 bytes
    // pci.sys PAGE:0x4bba4, 0x1cf0 bytes
    //
    _o71(sdk::unknown_ptr) bridge_fix_children_resource_hint_alignments;
    
    // [PciBridgeInterface_ControlErrorReporting]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16750, 0x1cf0 bytes
    // pci.sys .text:0x15110, 0x1cf0 bytes
    // pci.sys .text:0x16750, 0x1cf0 bytes
    //
    _o72(sdk::unknown_ptr) bridge_interface_control_error_reporting;
    
    // [PciBridgeInterface_SetExternalFacingPort]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16850, 0x1cf0 bytes
    // pci.sys .text:0x15230, 0x1cf0 bytes
    // pci.sys .text:0x16850, 0x1cf0 bytes
    //
    _o73(sdk::unknown_ptr) bridge_interface_set_external_facing_port;
    
    // [PciBridgeInterface_SetLtrEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16880, 0x1cf0 bytes
    // pci.sys .text:0x15260, 0x1cf0 bytes
    // pci.sys .text:0x16880, 0x1cf0 bytes
    //
    _o74(sdk::unknown_ptr) bridge_interface_set_ltr_enable;
    
    // [PciBridgeQueryFpgaControlInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65f60, 0x1cf0 bytes
    // pci.sys PAGE:0x6e2e0, 0x1cf0 bytes
    // pci.sys PAGE:0x63dc0, 0x1cf0 bytes
    //
    _o75(sdk::unknown_ptr) bridge_query_fpga_control_interface;
    
    // [PciBridgeQueryNpemControlInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68710, 0x1cf0 bytes
    // pci.sys PAGE:0x70cf0, 0x1cf0 bytes
    // pci.sys PAGE:0x66570, 0x1cf0 bytes
    //
    _o76(sdk::unknown_ptr) bridge_query_npem_control_interface;
    
    // [PciBridgeSpreadExtraResources]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ccac, 0x1cf0 bytes
    // pci.sys PAGE:0x47714, 0x1cf0 bytes
    // pci.sys PAGE:0x4c894, 0x1cf0 bytes
    //
    _o77(sdk::unknown_ptr) bridge_spread_extra_resources;
    
    // [PciBugCheckSecondaryDumpDataCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c060, 0x1cf0 bytes
    // pci.sys .text:0x1c790, 0x1cf0 bytes
    // pci.sys .text:0x1be60, 0x1cf0 bytes
    //
    _o78(sdk::unknown_ptr) bug_check_secondary_dump_data_callback;
    
    // [PciBugcheckCallbackRecord]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x347b0, 0x1cf0 bytes
    // pci.sys .data:0x38818, 0x1cf0 bytes
    // pci.sys .data:0x327b0, 0x1cf0 bytes
    //
    _o79(sdk::unknown_ptr) bugcheck_callback_record;
    
    // [PciBus_CancelWWPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x181a8, 0x1cf0 bytes
    // pci.sys .text:0x16d28, 0x1cf0 bytes
    // pci.sys .text:0x18208, 0x1cf0 bytes
    //
    _o80(sdk::unknown_ptr) bus_cancel_ww_passive;
    
    // [PciBus_HandleDirectedDripsTransitions]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x185dc, 0x1cf0 bytes
    // pci.sys .text:0x17168, 0x1cf0 bytes
    // pci.sys .text:0x18648, 0x1cf0 bytes
    //
    _o81(sdk::unknown_ptr) bus_handle_directed_drips_transitions;
    
    // [PciBusIdleTimeout]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34418, 0x1cf0 bytes
    // pci.sys .data:0x38468, 0x1cf0 bytes
    // pci.sys .data:0x32418, 0x1cf0 bytes
    //
    _o82(sdk::unknown_ptr) bus_idle_timeout;
    
    // [PciBus_PoFxDripsWatchdogCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18740, 0x1cf0 bytes
    // pci.sys .text:0x17400, 0x1cf0 bytes
    // pci.sys .text:0x187a0, 0x1cf0 bytes
    //
    _o83(sdk::unknown_ptr) bus_po_fx_drips_watchdog_callback;
    
    // [PciBus_PoFxDripsWatchdogCallbackPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18880, 0x1cf0 bytes
    // pci.sys .text:0x17548, 0x1cf0 bytes
    // pci.sys .text:0x188e8, 0x1cf0 bytes
    //
    _o84(sdk::unknown_ptr) bus_po_fx_drips_watchdog_callback_passive;
    
    // [PciBus_QueueChildD0Irp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0xf924, 0x1d08 bytes
    // pci.sys .text:0x19144, 0x1cf0 bytes
    // pci.sys .text:0x191e4, 0x1cf0 bytes
    //
    _o85(sdk::unknown_ptr) bus_queue_child_d0_irp;
    
    // [PciCfgAccessLog]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9270, 0x1cf0 bytes
    // pci.sys .text:0x5ab0, 0x1cf0 bytes
    // pci.sys .text:0xa730, 0x1cf0 bytes
    //
    _o86(sdk::unknown_ptr) cfg_access_log;
    
    // [PciCfgAccessLogListHead]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x35880, 0x1cf0 bytes
    // pci.sys .data:0x39900, 0x1cf0 bytes
    // pci.sys .data:0x33880, 0x1cf0 bytes
    //
    _o87(sdk::unknown_ptr) cfg_access_log_list_head;
    
    // [PciCfgAccessLogListLock]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x35878, 0x1cf0 bytes
    // pci.sys .data:0x398f8, 0x1cf0 bytes
    // pci.sys .data:0x33878, 0x1cf0 bytes
    //
    _o88(sdk::unknown_ptr) cfg_access_log_list_lock;
    
    // [PciCfgAccessLogSize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34420, 0x1cf0 bytes
    // pci.sys .data:0x38464, 0x1cf0 bytes
    // pci.sys .data:0x32420, 0x1cf0 bytes
    //
    _o89(sdk::unknown_ptr) cfg_access_log_size;
    
    // [PciCfgCaptureConfigSpaceForRecord]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a0b0, 0x1cf0 bytes
    // pci.sys .text:0x19ab4, 0x1cf0 bytes
    // pci.sys .text:0x1a188, 0x1cf0 bytes
    //
    _o90(sdk::unknown_ptr) cfg_capture_config_space_for_record;
    
    // [PciCfgCaptureDataBufferForLog]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x99a0, 0x1cf0 bytes
    // pci.sys .text:0x752c, 0x1cf0 bytes
    // pci.sys .text:0xae60, 0x1cf0 bytes
    //
    _o91(sdk::unknown_ptr) cfg_capture_data_buffer_for_log;
    
    // [PciCfgCaptureHtCapabilitySize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x60650, 0x1cf0 bytes
    // pci.sys PAGE:0x67550, 0x1cf0 bytes
    // pci.sys PAGE:0x5e5b0, 0x1cf0 bytes
    //
    _o92(sdk::unknown_ptr) cfg_capture_ht_capability_size;
    
    // [PciCfgCaptureMsiCapabilitySize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54410, 0x1cf0 bytes
    // pci.sys PAGE:0x5a690, 0x1cf0 bytes
    // pci.sys PAGE:0x54930, 0x1cf0 bytes
    //
    _o93(sdk::unknown_ptr) cfg_capture_msi_capability_size;
    
    // [PciCfgCaptureTphCapabilitySize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x55140, 0x1cf0 bytes
    // pci.sys PAGE:0x675c0, 0x1cf0 bytes
    // pci.sys PAGE:0x555e0, 0x1cf0 bytes
    //
    _o94(sdk::unknown_ptr) cfg_capture_tph_capability_size;
    
    // [PciCfgCaptureVcCapabilitySize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x51790, 0x1cf0 bytes
    // pci.sys PAGE:0x67650, 0x1cf0 bytes
    // pci.sys PAGE:0x51ca0, 0x1cf0 bytes
    //
    _o95(sdk::unknown_ptr) cfg_capture_vc_capability_size;
    
    // [PciCfgCheckSecurePciManageConfigSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4df50, 0x1cf0 bytes
    // pci.sys PAGE:0x436a8, 0x1cf0 bytes
    // pci.sys PAGE:0x4e454, 0x1cf0 bytes
    //
    _o96(sdk::unknown_ptr) cfg_check_secure_pci_manage_config_space;
    
    // [PciCfgDestroyDeviceConfigSpaceCaptureOverride]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x606b4, 0x1cf0 bytes
    // pci.sys PAGE:0x6786c, 0x1cf0 bytes
    // pci.sys PAGE:0x5e614, 0x1cf0 bytes
    //
    _o97(sdk::unknown_ptr) cfg_destroy_device_config_space_capture_override;
    
    // [PciCfgDestroyRecord]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e4d8, 0x1cf0 bytes
    // pci.sys PAGE:0x678a8, 0x1cf0 bytes
    // pci.sys PAGE:0x3c618, 0x1cf0 bytes
    //
    _o98(sdk::unknown_ptr) cfg_destroy_record;
    
    // [PciCfgGetCapabilityRegistersToCapture]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x606f0, 0x1cf0 bytes
    // pci.sys PAGE:0x4d8e4, 0x1cf0 bytes
    // pci.sys PAGE:0x5e650, 0x1cf0 bytes
    //
    _o99(sdk::unknown_ptr) cfg_get_capability_registers_to_capture;
    
    // [PciCfgGetDeviceConfigSpaceCaptureOverride]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d75c, 0x1cf0 bytes
    // pci.sys PAGE:0x439e4, 0x1cf0 bytes
    // pci.sys PAGE:0x4d424, 0x1cf0 bytes
    //
    _p00(sdk::unknown_ptr) cfg_get_device_config_space_capture_override;
    
    // [PciCfgGetRawConfigSpaceRangesToCapture]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x46800, 0x1cf0 bytes
    // pci.sys PAGE:0x4beac, 0x1cf0 bytes
    // pci.sys PAGE:0x47120, 0x1cf0 bytes
    //
    _p01(sdk::unknown_ptr) cfg_get_raw_config_space_ranges_to_capture;
    
    // [PciCfgInitializeRecord]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x52150, 0x1cf0 bytes
    // pci.sys PAGE:0x574d0, 0x1cf0 bytes
    // pci.sys PAGE:0x52660, 0x1cf0 bytes
    //
    _p02(sdk::unknown_ptr) cfg_initialize_record;
    
    // [PciCfgInitializeRecordContext]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4df10, 0x1cf0 bytes
    // pci.sys PAGE:0x436d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4e414, 0x1cf0 bytes
    //
    _p03(sdk::unknown_ptr) cfg_initialize_record_context;
    
    // [PciCfgManagedBySecurePci]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x358e0, 0x1cf0 bytes
    // pci.sys .data:0x39960, 0x1cf0 bytes
    // pci.sys .data:0x338e0, 0x1cf0 bytes
    //
    _p04(sdk::unknown_ptr) cfg_managed_by_secure_pci;
    
    // [PciCfgRecordContext]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x358a0, 0x1cf0 bytes
    // pci.sys .data:0x39920, 0x1cf0 bytes
    // pci.sys .data:0x338a0, 0x1cf0 bytes
    //
    _p05(sdk::unknown_ptr) cfg_record_context;
    
    // [PCI_CFG_RECORD_GUID]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2c280, 0x1cf0 bytes
    // pci.sys .rdata:0x2ec78, 0x1cf0 bytes
    // pci.sys .rdata:0x2b6c0, 0x1cf0 bytes
    //
    _p06(sdk::unknown_ptr) cfg_record_guid;
    
    // [PciCfgUpdateAccessLog]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x98d0, 0x1cf0 bytes
    // pci.sys .text:0x19bac, 0x1cf0 bytes
    // pci.sys .text:0xad90, 0x1cf0 bytes
    //
    _p07(sdk::unknown_ptr) cfg_update_access_log;
    
    // [PciCfgpSaveData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xed20, 0x1cf0 bytes
    // pci.sys .text:0x7940, 0x1cf0 bytes
    // pci.sys .text:0x10bf8, 0x1cf0 bytes
    //
    _p08(sdk::unknown_ptr) cfgp_save_data;
    
    // [PciCheckDevicePathBusMasterEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16920, 0x1cf0 bytes
    // pci.sys .text:0x152f0, 0x1cf0 bytes
    // pci.sys .text:0x16920, 0x1cf0 bytes
    //
    _p09(sdk::unknown_ptr) check_device_path_bus_master_enabled;
    
    // [PciCleanupCfgAccessLogList]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a1b0, 0x1cf0 bytes
    // pci.sys .text:0x19c40, 0x1cf0 bytes
    // pci.sys .text:0x1a288, 0x1cf0 bytes
    //
    _p10(sdk::unknown_ptr) cleanup_cfg_access_log_list;
    
    // [PciConsoleLockCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e9e0, 0x1cf0 bytes
    // pci.sys PAGE:0x57810, 0x1cf0 bytes
    // pci.sys PAGE:0x3c860, 0x1cf0 bytes
    //
    _p11(sdk::unknown_ptr) console_lock_callback;
    
    // [PciConsoleLockCallbackHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34850, 0x1cf0 bytes
    // pci.sys .data:0x388c0, 0x1cf0 bytes
    // pci.sys .data:0x32850, 0x1cf0 bytes
    //
    _p12(sdk::unknown_ptr) console_lock_callback_handle;
    
    // [PciConsoleLockCallbackObject]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34848, 0x1cf0 bytes
    // pci.sys .data:0x388b8, 0x1cf0 bytes
    // pci.sys .data:0x32848, 0x1cf0 bytes
    //
    _p13(sdk::unknown_ptr) console_lock_callback_object;
    
    // [PciConstructMessageString]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47f80, 0x1cf0 bytes
    // pci.sys PAGE:0x4a080, 0x1cf0 bytes
    // pci.sys PAGE:0x48710, 0x1cf0 bytes
    //
    _p14(sdk::unknown_ptr) construct_message_string;
    
    // [PciCrashdumpFunctions_PoFxPowerOnHierarchy]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2185c, 0x1cf0 bytes
    // pci.sys .text:0x2336c, 0x1cf0 bytes
    // pci.sys .text:0x2165c, 0x1cf0 bytes
    //
    _p15(sdk::unknown_ptr) crashdump_functions_po_fx_power_on_hierarchy;
    
    // [PciCreateConsoleLockCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x6ff3c, 0x1cf0 bytes
    // pci.sys INIT:0x78778, 0x1cf0 bytes
    // pci.sys INIT:0x6df40, 0x1cf0 bytes
    //
    _p16(sdk::unknown_ptr) create_console_lock_callback;
    
    // [PciD3ColdAuxPowerAndTimingAggregationInfoInit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x257d8, 0x1cf0 bytes
    // pci.sys .text:0x27988, 0x1cf0 bytes
    // pci.sys .text:0x255f8, 0x1cf0 bytes
    //
    _p17(sdk::unknown_ptr) d3_cold_aux_power_and_timing_aggregation_info_init;
    
    // [PciD3ColdAuxPowerAndTimingDeviceInfoInit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15f4, 0x1cf0 bytes
    // pci.sys .text:0xccd8, 0x1cf0 bytes
    // pci.sys .text:0x1690, 0x1cf0 bytes
    //
    _p18(sdk::unknown_ptr) d3_cold_aux_power_and_timing_device_info_init;
    
    // [PciD3ColdAuxPowerAndTimingDeviceInfoLink]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x25884, 0x1cf0 bytes
    // pci.sys .text:0x27a44, 0x1cf0 bytes
    // pci.sys .text:0x256a4, 0x1cf0 bytes
    //
    _p19(sdk::unknown_ptr) d3_cold_aux_power_and_timing_device_info_link;
    
    // [PciD3ColdAuxPowerAndTimingInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x28828, 0x1cf0 bytes
    // pci.sys .rdata:0x2a898, 0x1cf0 bytes
    // pci.sys .rdata:0x27830, 0x1cf0 bytes
    //
    _p20(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface;
    
    // [PciD3ColdAuxPowerAndTimingInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69d00, 0x1cf0 bytes
    // pci.sys PAGE:0x72e50, 0x1cf0 bytes
    // pci.sys PAGE:0x67b60, 0x1cf0 bytes
    //
    _p21(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_constructor;
    
    // [PciD3ColdAuxPowerAndTimingInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e180, 0x1cf0 bytes
    // pci.sys PAGE:0x43440, 0x1cf0 bytes
    // pci.sys PAGE:0x3c2c0, 0x1cf0 bytes
    //
    _p22(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_dereference;
    
    // [PciD3ColdAuxPowerAndTimingInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e190, 0x1cf0 bytes
    // pci.sys PAGE:0x43450, 0x1cf0 bytes
    // pci.sys PAGE:0x3c2d0, 0x1cf0 bytes
    //
    _p23(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_reference;
    
    // [PciD3ColdAuxPowerAndTimingInterface_RequestAuxPower]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69dc0, 0x1cf0 bytes
    // pci.sys PAGE:0x72f70, 0x1cf0 bytes
    // pci.sys PAGE:0x67c20, 0x1cf0 bytes
    //
    _p24(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_request_aux_power;
    
    // [PciD3ColdAuxPowerAndTimingInterface_RequestCorePowerRail]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69f60, 0x1cf0 bytes
    // pci.sys PAGE:0x73110, 0x1cf0 bytes
    // pci.sys PAGE:0x67dc0, 0x1cf0 bytes
    //
    _p25(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_request_core_power_rail;
    
    // [PciD3ColdAuxPowerAndTimingInterface_RequestPerstDelay]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6a0a0, 0x1cf0 bytes
    // pci.sys PAGE:0x73260, 0x1cf0 bytes
    // pci.sys PAGE:0x67f00, 0x1cf0 bytes
    //
    _p26(sdk::unknown_ptr) d3_cold_aux_power_and_timing_interface_request_perst_delay;
    
    // [PciDecodeBusNumberOnSecondarySide]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2666c, 0x1cf0 bytes
    // pci.sys .text:0x28a10, 0x1cf0 bytes
    // pci.sys .text:0x2648c, 0x1cf0 bytes
    //
    _p27(sdk::unknown_ptr) decode_bus_number_on_secondary_side;
    
    // [PciDecodesFromDeviceResources]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x407b0, 0x1cf0 bytes
    // pci.sys PAGE:0x51054, 0x1cf0 bytes
    // pci.sys PAGE:0x3fe70, 0x1cf0 bytes
    //
    _p28(sdk::unknown_ptr) decodes_from_device_resources;
    
    // [PciDestroyResourceHint]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6899c, 0x1cf0 bytes
    // pci.sys PAGE:0x70fd8, 0x1cf0 bytes
    // pci.sys PAGE:0x667fc, 0x1cf0 bytes
    //
    _p29(sdk::unknown_ptr) destroy_resource_hint;
    
    // [PciDeviceAndBiosSystemMatchSkipMorLockActionSet]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34798, 0x1cf0 bytes
    // pci.sys .data:0x38800, 0x1cf0 bytes
    // pci.sys .data:0x32798, 0x1cf0 bytes
    //
    _p30(sdk::unknown_ptr) device_and_bios_system_match_skip_mor_lock_action_set;
    
    // [PciDeviceConstructNpemInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68728, 0x1cf0 bytes
    // pci.sys PAGE:0x70d10, 0x1cf0 bytes
    // pci.sys PAGE:0x66588, 0x1cf0 bytes
    //
    _p31(sdk::unknown_ptr) device_construct_npem_interface;
    
    // [PciDeviceSetCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x46bb0, 0x1cf0 bytes
    // pci.sys PAGE:0x49830, 0x1cf0 bytes
    // pci.sys PAGE:0x474d0, 0x1cf0 bytes
    //
    _p32(sdk::unknown_ptr) device_set_custom_properties;
    
    // [PciDeviceStartWorker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x40970, 0x1cf0 bytes
    // pci.sys PAGE:0x50890, 0x1cf0 bytes
    // pci.sys PAGE:0x40030, 0x1cf0 bytes
    //
    _p33(sdk::unknown_ptr) device_start_worker;
    
    // [PciDiagInitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x6fff8, 0x1cf0 bytes
    // pci.sys INIT:0x785f4, 0x1cf0 bytes
    // pci.sys INIT:0x6dffc, 0x1cf0 bytes
    //
    _p34(sdk::unknown_ptr) diag_initialize;
    
    // [PciDiagRebuildSleepstudyTreeWorker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x61650, 0x1cf0 bytes
    // pci.sys PAGE:0x68fb0, 0x1cf0 bytes
    // pci.sys PAGE:0x5f480, 0x1cf0 bytes
    //
    _p35(sdk::unknown_ptr) diag_rebuild_sleepstudy_tree_worker;
    
    // [PciDiagRegisterDeviceBlocker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x52cc, 0x1cf0 bytes
    // pci.sys .text:0x8028, 0x1cf0 bytes
    // pci.sys .text:0x65ac, 0x1cf0 bytes
    //
    _p36(sdk::unknown_ptr) diag_register_device_blocker;
    
    // [PciDiagSetDeviceBlockerActive]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x32f8, 0x1cf0 bytes
    // pci.sys .text:0x8c88, 0x1cf0 bytes
    // pci.sys .text:0x4128, 0x1cf0 bytes
    //
    _p37(sdk::unknown_ptr) diag_set_device_blocker_active;
    
    // [PciDiagUninitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x61828, 0x1cf0 bytes
    // pci.sys PAGE:0x69188, 0x1cf0 bytes
    // pci.sys PAGE:0x5f658, 0x1cf0 bytes
    //
    _p38(sdk::unknown_ptr) diag_uninitialize;
    
    // [PciDiagUnregisterDeviceBlocker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x190c, 0x1cf0 bytes
    // pci.sys .text:0xd5d8, 0x1cf0 bytes
    // pci.sys .text:0x1cfc, 0x1cf0 bytes
    //
    _p39(sdk::unknown_ptr) diag_unregister_device_blocker;
    
    // [PciDiagWnfCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x618c0, 0x1cf0 bytes
    // pci.sys PAGE:0x69220, 0x1cf0 bytes
    // pci.sys PAGE:0x5f6f0, 0x1cf0 bytes
    //
    _p40(sdk::unknown_ptr) diag_wnf_callback;
    
    // [PciDisableBridgeARIRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a8f8, 0x1cf0 bytes
    // pci.sys .text:0x1a3a0, 0x1cf0 bytes
    // pci.sys .text:0x1a6a0, 0x1cf0 bytes
    //
    _p41(sdk::unknown_ptr) disable_bridge_ari_raw;
    
    // [PciDoNotEnumerateHeadlessSerialDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xde6c, 0x1cf0 bytes
    // pci.sys .text:0xc3e4, 0x1cf0 bytes
    // pci.sys .text:0xf9bc, 0x1cf0 bytes
    //
    _p42(sdk::unknown_ptr) do_not_enumerate_headless_serial_device;
    
    // [PciEvaluateDsmMethodForRequestCorePowerRail]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6aa4c, 0x1cf0 bytes
    // pci.sys PAGE:0x73d6c, 0x1cf0 bytes
    // pci.sys PAGE:0x688fc, 0x1cf0 bytes
    //
    _p43(sdk::unknown_ptr) evaluate_dsm_method_for_request_core_power_rail;
    
    // [PciEvaluateDsmMethodForRequestD3ColdAuxPower]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6ac6c, 0x1cf0 bytes
    // pci.sys PAGE:0x73fbc, 0x1cf0 bytes
    // pci.sys PAGE:0x68b38, 0x1cf0 bytes
    //
    _p44(sdk::unknown_ptr) evaluate_dsm_method_for_request_d3_cold_aux_power;
    
    // [PciEvaluateDsmMethodForRequestPerstDelay]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6ae38, 0x1cf0 bytes
    // pci.sys PAGE:0x7419c, 0x1cf0 bytes
    // pci.sys PAGE:0x68d18, 0x1cf0 bytes
    //
    _p45(sdk::unknown_ptr) evaluate_dsm_method_for_request_perst_delay;
    
    // [PciEvaluateDsmMethodPrepareInputBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6afdc, 0x1cf0 bytes
    // pci.sys PAGE:0x74354, 0x1cf0 bytes
    // pci.sys PAGE:0x68ed0, 0x1cf0 bytes
    //
    _p46(sdk::unknown_ptr) evaluate_dsm_method_prepare_input_buffer;
    
    // [ExpressAspmStateOverrideCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5dde0, 0x1cf0 bytes
    // pci.sys PAGE:0x53a50, 0x1cf0 bytes
    // pci.sys PAGE:0x5bd30, 0x1cf0 bytes
    //
    _p47(sdk::unknown_ptr) express_aspm_state_override_callback;
    
    // [ExpressBridgeDisablePcInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x224d8, 0x1cf0 bytes
    // pci.sys .text:0xac3c, 0x1cf0 bytes
    // pci.sys .text:0x222d8, 0x1cf0 bytes
    //
    _p48(sdk::unknown_ptr) express_bridge_disable_pc_interrupt;
    
    // [ExpressBridgeEnablePcInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22584, 0x1cf0 bytes
    // pci.sys .text:0xaa1c, 0x1cf0 bytes
    // pci.sys .text:0x22384, 0x1cf0 bytes
    //
    _p49(sdk::unknown_ptr) express_bridge_enable_pc_interrupt;
    
    // [ExpressBridgeEnqueuePassivePmeWorkItem]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c874, 0x1cf0 bytes
    // pci.sys .text:0x1d794, 0x1cf0 bytes
    // pci.sys .text:0x1c674, 0x1cf0 bytes
    //
    _p50(sdk::unknown_ptr) express_bridge_enqueue_passive_pme_work_item;
    
    // [ExpressBridgeFindPcTriggeredDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2262c, 0x1cf0 bytes
    // pci.sys .text:0x24458, 0x1cf0 bytes
    // pci.sys .text:0x2242c, 0x1cf0 bytes
    //
    _p51(sdk::unknown_ptr) express_bridge_find_pc_triggered_device;
    
    // [ExpressBridgePcInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x228e8, 0x1cf0 bytes
    // pci.sys .text:0x2478c, 0x1cf0 bytes
    // pci.sys .text:0x226e8, 0x1cf0 bytes
    //
    _p52(sdk::unknown_ptr) express_bridge_pc_interrupt_routine;
    
    // [ExpressBridgeRegisterDeviceForAspmCallbacks]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5e108, 0x1cf0 bytes
    // pci.sys PAGE:0x53ce8, 0x1cf0 bytes
    // pci.sys PAGE:0x5c058, 0x1cf0 bytes
    //
    _p53(sdk::unknown_ptr) express_bridge_register_device_for_aspm_callbacks;
    
    // [ExpressBridgeRequestAriEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x61d20, 0x1cf0 bytes
    // pci.sys PAGE:0x69b80, 0x1cf0 bytes
    // pci.sys PAGE:0x5fb80, 0x1cf0 bytes
    //
    _p54(sdk::unknown_ptr) express_bridge_request_ari_enable;
    
    // [ExpressBridgeUnregisterBridgeForAspmCallbacks]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5e25c, 0x1cf0 bytes
    // pci.sys PAGE:0x653b8, 0x1cf0 bytes
    // pci.sys PAGE:0x5c1ac, 0x1cf0 bytes
    //
    _p55(sdk::unknown_ptr) express_bridge_unregister_bridge_for_aspm_callbacks;
    
    // [ExpressBridgeUnregisterDeviceForAspmCallbacks]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e60c, 0x1cf0 bytes
    // pci.sys PAGE:0x65424, 0x1cf0 bytes
    // pci.sys PAGE:0x3c74c, 0x1cf0 bytes
    //
    _p56(sdk::unknown_ptr) express_bridge_unregister_device_for_aspm_callbacks;
    
    // [ExpressCheckAcsHierarchyCompatibility]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x3e62c, 0x1d08 bytes
    // pci.sys PAGE:0x4c344, 0x1cf0 bytes
    // pci.sys PAGE:0x4c380, 0x1cf0 bytes
    //
    _p57(sdk::unknown_ptr) express_check_acs_hierarchy_compatibility;
    
    // [ExpressDisablePasid]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21d48, 0x1cf0 bytes
    // pci.sys .text:0x23ba4, 0x1cf0 bytes
    // pci.sys .text:0x21b48, 0x1cf0 bytes
    //
    _p58(sdk::unknown_ptr) express_disable_pasid;
    
    // [ExpressDisablePri]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21d8c, 0x1cf0 bytes
    // pci.sys .text:0x23be8, 0x1cf0 bytes
    // pci.sys .text:0x21b8c, 0x1cf0 bytes
    //
    _p59(sdk::unknown_ptr) express_disable_pri;
    
    // [ExpressDisableSvm]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21e88, 0x1cf0 bytes
    // pci.sys .text:0x23ce4, 0x1cf0 bytes
    // pci.sys .text:0x21c88, 0x1cf0 bytes
    //
    _p60(sdk::unknown_ptr) express_disable_svm;
    
    // [ExpressEnablePri]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21eb4, 0x1cf0 bytes
    // pci.sys .text:0x23d8c, 0x1cf0 bytes
    // pci.sys .text:0x21cb4, 0x1cf0 bytes
    //
    _p61(sdk::unknown_ptr) express_enable_pri;
    
    // [ExpressEnableSvm]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21f98, 0x1cf0 bytes
    // pci.sys .text:0x23e70, 0x1cf0 bytes
    // pci.sys .text:0x21d98, 0x1cf0 bytes
    //
    _p62(sdk::unknown_ptr) express_enable_svm;
    
    // [ExpressPcGetTriggerReason]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x679f8, 0x1cf0 bytes
    // pci.sys PAGE:0x70238, 0x1cf0 bytes
    // pci.sys PAGE:0x65858, 0x1cf0 bytes
    //
    _p63(sdk::unknown_ptr) express_pc_get_trigger_reason;
    
    // [ExpressPcInitWheaErrorPacket]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67a50, 0x1cf0 bytes
    // pci.sys PAGE:0x70290, 0x1cf0 bytes
    // pci.sys PAGE:0x658b0, 0x1cf0 bytes
    //
    _p64(sdk::unknown_ptr) express_pc_init_whea_error_packet;
    
    // [ExpressPcInitWorkQueue]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67cbc, 0x1cf0 bytes
    // pci.sys PAGE:0x590f4, 0x1cf0 bytes
    // pci.sys PAGE:0x65b1c, 0x1cf0 bytes
    //
    _p65(sdk::unknown_ptr) express_pc_init_work_queue;
    
    // [ExpressPcProcessWorkQueueItem]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22ec0, 0x1cf0 bytes
    // pci.sys .text:0x24d50, 0x1cf0 bytes
    // pci.sys .text:0x22cc0, 0x1cf0 bytes
    //
    _p66(sdk::unknown_ptr) express_pc_process_work_queue_item;
    
    // [ExpressPcWaitForBusTeardown]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67d40, 0x1cf0 bytes
    // pci.sys PAGE:0x70314, 0x1cf0 bytes
    // pci.sys PAGE:0x65ba0, 0x1cf0 bytes
    //
    _p67(sdk::unknown_ptr) express_pc_wait_for_bus_teardown;
    
    // [ExpressPcWaitForIniternalInit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67da8, 0x1cf0 bytes
    // pci.sys PAGE:0x70380, 0x1cf0 bytes
    // pci.sys PAGE:0x65c08, 0x1cf0 bytes
    //
    _p68(sdk::unknown_ptr) express_pc_wait_for_initernal_init;
    
    // [ExpressPcWorkQueue]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34620, 0x1cf0 bytes
    // pci.sys .data:0x38680, 0x1cf0 bytes
    // pci.sys .data:0x32620, 0x1cf0 bytes
    //
    _p69(sdk::unknown_ptr) express_pc_work_queue;
    
    // [ExpressPcWorkQueueWorkerRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x232c0, 0x1cf0 bytes
    // pci.sys .text:0x25150, 0x1cf0 bytes
    // pci.sys .text:0x230c0, 0x1cf0 bytes
    //
    _p70(sdk::unknown_ptr) express_pc_work_queue_worker_routine;
    
    // [ExpressQueryAts]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21ffc, 0x1cf0 bytes
    // pci.sys .text:0x23f70, 0x1cf0 bytes
    // pci.sys .text:0x21dfc, 0x1cf0 bytes
    //
    _p71(sdk::unknown_ptr) express_query_ats;
    
    // [ExpressQueryPasid]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22080, 0x1cf0 bytes
    // pci.sys .text:0x24000, 0x1cf0 bytes
    // pci.sys .text:0x21e80, 0x1cf0 bytes
    //
    _p72(sdk::unknown_ptr) express_query_pasid;
    
    // [ExpressQueryPri]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22110, 0x1cf0 bytes
    // pci.sys .text:0x24090, 0x1cf0 bytes
    // pci.sys .text:0x21f10, 0x1cf0 bytes
    //
    _p73(sdk::unknown_ptr) express_query_pri;
    
    // [ExpressRootPortAckPmeRequestorsAtDeviceSource]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x23310, 0x1cf0 bytes
    // pci.sys .text:0x251a0, 0x1cf0 bytes
    // pci.sys .text:0x23110, 0x1cf0 bytes
    //
    _p74(sdk::unknown_ptr) express_root_port_ack_pme_requestors_at_device_source;
    
    // [ExpressRootPortBuildPmeRequestors]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x237c0, 0x1cf0 bytes
    // pci.sys .text:0x253b8, 0x1cf0 bytes
    // pci.sys .text:0x235c0, 0x1cf0 bytes
    //
    _p75(sdk::unknown_ptr) express_root_port_build_pme_requestors;
    
    // [ExpressRootPortFindErrorDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x16e88, 0x1d08 bytes
    // pci.sys .text:0x23a64, 0x1cf0 bytes
    // pci.sys .text:0x23864, 0x1cf0 bytes
    //
    _p76(sdk::unknown_ptr) express_root_port_find_error_device;
    
    // [ExpressRootPortInitWheaErrorPacket]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys .text:0x16f04, 0x1d08 bytes
    // pci.sys .text:0x23af0, 0x1cf0 bytes
    // pci.sys .text:0x238f0, 0x1cf0 bytes
    //
    _p77(sdk::unknown_ptr) express_root_port_init_whea_error_packet;
    
    // [ExpressRootPortPmeEventWorker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x23f98, 0x1cf0 bytes
    // pci.sys .text:0x258c8, 0x1cf0 bytes
    // pci.sys .text:0x23d98, 0x1cf0 bytes
    //
    _p78(sdk::unknown_ptr) express_root_port_pme_event_worker;
    
    // [ExpressSetAtsControl]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x221e0, 0x1cf0 bytes
    // pci.sys .text:0x2415c, 0x1cf0 bytes
    // pci.sys .text:0x21fe0, 0x1cf0 bytes
    //
    _p79(sdk::unknown_ptr) express_set_ats_control;
    
    // [ExpressSetOutstandingPageRequests]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22278, 0x1cf0 bytes
    // pci.sys .text:0x241b0, 0x1cf0 bytes
    // pci.sys .text:0x22078, 0x1cf0 bytes
    //
    _p80(sdk::unknown_ptr) express_set_outstanding_page_requests;
    
    // [ExpressSetPasidControl]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x222d4, 0x1cf0 bytes
    // pci.sys .text:0x2420c, 0x1cf0 bytes
    // pci.sys .text:0x220d4, 0x1cf0 bytes
    //
    _p81(sdk::unknown_ptr) express_set_pasid_control;
    
    // [ExpressSetPriControl]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22368, 0x1cf0 bytes
    // pci.sys .text:0x242a0, 0x1cf0 bytes
    // pci.sys .text:0x22168, 0x1cf0 bytes
    //
    _p82(sdk::unknown_ptr) express_set_pri_control;
    
    // [ExpressVerifyAcsCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x3e6e4, 0x1d08 bytes
    // pci.sys PAGE:0x4c424, 0x1cf0 bytes
    // pci.sys PAGE:0x4c460, 0x1cf0 bytes
    //
    _p83(sdk::unknown_ptr) express_verify_acs_capability;
    
    // [PciExtendedCapabilityRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34010, 0x1cf0 bytes
    // pci.sys .data:0x38110, 0x1cf0 bytes
    // pci.sys .data:0x32010, 0x1cf0 bytes
    //
    _p84(sdk::unknown_ptr) extended_capability_registers;
    
    // [PciFindBusByLocation]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x40090, 0x1cf0 bytes
    // pci.sys PAGE:0x579d4, 0x1cf0 bytes
    // pci.sys PAGE:0x3d680, 0x1cf0 bytes
    //
    _p85(sdk::unknown_ptr) find_bus_by_location;
    
    // [PciFindCfgAccessLog]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x99f0, 0x1cf0 bytes
    // pci.sys .text:0x756c, 0x1cf0 bytes
    // pci.sys .text:0xaeb0, 0x1cf0 bytes
    //
    _p86(sdk::unknown_ptr) find_cfg_access_log;
    
    // [PciFindOrCreateCfgAccessLog]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5620, 0x1cf0 bytes
    // pci.sys .text:0x7740, 0x1cf0 bytes
    // pci.sys .text:0x6900, 0x1cf0 bytes
    //
    _p87(sdk::unknown_ptr) find_or_create_cfg_access_log;
    
    // [PciFindResourceHintBySlot]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b0b0, 0x1cf0 bytes
    // pci.sys PAGE:0x4565c, 0x1cf0 bytes
    // pci.sys PAGE:0x4bc70, 0x1cf0 bytes
    //
    _p88(sdk::unknown_ptr) find_resource_hint_by_slot;
    
    // [PciFpbAddBusNumberRangeToRoot]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64554, 0x1cf0 bytes
    // pci.sys PAGE:0x6c8e0, 0x1cf0 bytes
    // pci.sys PAGE:0x623b4, 0x1cf0 bytes
    //
    _p89(sdk::unknown_ptr) fpb_add_bus_number_range_to_root;
    
    // [PciFpbAddMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65978, 0x1cf0 bytes
    // pci.sys PAGE:0x6dd08, 0x1cf0 bytes
    // pci.sys PAGE:0x637d8, 0x1cf0 bytes
    //
    _p90(sdk::unknown_ptr) fpb_add_memory_range;
    
    // [PciFpbAlignMemoryIoResourceDescriptorByGranularity]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64600, 0x1cf0 bytes
    // pci.sys PAGE:0x6c98c, 0x1cf0 bytes
    // pci.sys PAGE:0x62460, 0x1cf0 bytes
    //
    _p91(sdk::unknown_ptr) fpb_align_memory_io_resource_descriptor_by_granularity;
    
    // [PciFpbArbMem_ForwardTestAllocationUpstream]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x62c80, 0x1cf0 bytes
    // pci.sys PAGE:0x6aba0, 0x1cf0 bytes
    // pci.sys PAGE:0x60ae0, 0x1cf0 bytes
    //
    _p92(sdk::unknown_ptr) fpb_arb_mem_forward_test_allocation_upstream;
    
    // [PciFpbArbMem_FreeAvailableRangesUpstream]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x62ea4, 0x1cf0 bytes
    // pci.sys PAGE:0x6ae90, 0x1cf0 bytes
    // pci.sys PAGE:0x60d04, 0x1cf0 bytes
    //
    _p93(sdk::unknown_ptr) fpb_arb_mem_free_available_ranges_upstream;
    
    // [PciFpbArbMempAddResource]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63068, 0x1cf0 bytes
    // pci.sys PAGE:0x6b3e0, 0x1cf0 bytes
    // pci.sys PAGE:0x60ec8, 0x1cf0 bytes
    //
    _p94(sdk::unknown_ptr) fpb_arb_memp_add_resource;
    
    // [PciFpbArbMempFixResourceRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63294, 0x1cf0 bytes
    // pci.sys PAGE:0x6b660, 0x1cf0 bytes
    // pci.sys PAGE:0x610f4, 0x1cf0 bytes
    //
    _p95(sdk::unknown_ptr) fpb_arb_memp_fix_resource_requirement;
    
    // [PciFpbArbMempFreeAvailableRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63694, 0x1cf0 bytes
    // pci.sys PAGE:0x6ba50, 0x1cf0 bytes
    // pci.sys PAGE:0x614f4, 0x1cf0 bytes
    //
    _p96(sdk::unknown_ptr) fpb_arb_memp_free_available_range;
    
    // [PciFpbArbMempResourcesProgramToFpb]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x637f4, 0x1cf0 bytes
    // pci.sys PAGE:0x6bbc0, 0x1cf0 bytes
    // pci.sys PAGE:0x61654, 0x1cf0 bytes
    //
    _p97(sdk::unknown_ptr) fpb_arb_memp_resources_program_to_fpb;
    
    // [PciFpbArbMempResourcesRevertFromFpb]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6397c, 0x1cf0 bytes
    // pci.sys PAGE:0x6bd48, 0x1cf0 bytes
    // pci.sys PAGE:0x617dc, 0x1cf0 bytes
    //
    _p98(sdk::unknown_ptr) fpb_arb_memp_resources_revert_from_fpb;
    
    // [PciFpbArbMempUpdateUnavailableRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63a40, 0x1cf0 bytes
    // pci.sys PAGE:0x6be0c, 0x1cf0 bytes
    // pci.sys PAGE:0x618a0, 0x1cf0 bytes
    //
    _p99(sdk::unknown_ptr) fpb_arb_memp_update_unavailable_range;
    
    // [PciFpbArbiterInitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x646f0, 0x1cf0 bytes
    // pci.sys PAGE:0x6ca7c, 0x1cf0 bytes
    // pci.sys PAGE:0x62550, 0x1cf0 bytes
    //
    _q00(sdk::unknown_ptr) fpb_arbiter_initialize;
    
    // [PciFpbConfigureChildrenBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64754, 0x1cf0 bytes
    // pci.sys PAGE:0x6cae0, 0x1cf0 bytes
    // pci.sys PAGE:0x625b4, 0x1cf0 bytes
    //
    _q01(sdk::unknown_ptr) fpb_configure_children_bus_numbers;
    
    // [PciFpbCopyMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65ad8, 0x1cf0 bytes
    // pci.sys PAGE:0x6de64, 0x1cf0 bytes
    // pci.sys PAGE:0x63938, 0x1cf0 bytes
    //
    _q02(sdk::unknown_ptr) fpb_copy_memory_range;
    
    // [PciFpbCopyResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64a3c, 0x1cf0 bytes
    // pci.sys PAGE:0x6cdc8, 0x1cf0 bytes
    // pci.sys PAGE:0x6289c, 0x1cf0 bytes
    //
    _q03(sdk::unknown_ptr) fpb_copy_resource_descriptor;
    
    // [PciFpbDefaultPolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x35bf8, 0x1cf0 bytes
    // pci.sys .data:0x39c98, 0x1cf0 bytes
    // pci.sys .data:0x33bf8, 0x1cf0 bytes
    //
    _q04(sdk::unknown_ptr) fpb_default_policy;
    
    // [PciFpbDeleteMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65b68, 0x1cf0 bytes
    // pci.sys PAGE:0x6def4, 0x1cf0 bytes
    // pci.sys PAGE:0x639c8, 0x1cf0 bytes
    //
    _q05(sdk::unknown_ptr) fpb_delete_memory_range;
    
    // [PciFpbDestroyMemoryRangeList]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65c4c, 0x1cf0 bytes
    // pci.sys PAGE:0x6dfd8, 0x1cf0 bytes
    // pci.sys PAGE:0x63aac, 0x1cf0 bytes
    //
    _q06(sdk::unknown_ptr) fpb_destroy_memory_range_list;
    
    // [PciFpbDestroyResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64a8c, 0x1cf0 bytes
    // pci.sys PAGE:0x6ce18, 0x1cf0 bytes
    // pci.sys PAGE:0x628ec, 0x1cf0 bytes
    //
    _q07(sdk::unknown_ptr) fpb_destroy_resource_descriptor;
    
    // [PciFpbFdoDestroyNode]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63be8, 0x1cf0 bytes
    // pci.sys PAGE:0x6bfa4, 0x1cf0 bytes
    // pci.sys PAGE:0x61a48, 0x1cf0 bytes
    //
    _q08(sdk::unknown_ptr) fpb_fdo_destroy_node;
    
    // [PciFpbFdoInitializeNode]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63c2c, 0x1cf0 bytes
    // pci.sys PAGE:0x6bfe8, 0x1cf0 bytes
    // pci.sys PAGE:0x61a8c, 0x1cf0 bytes
    //
    _q09(sdk::unknown_ptr) fpb_fdo_initialize_node;
    
    // [PciFpbFdopInitializeRootResources]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63d98, 0x1cf0 bytes
    // pci.sys PAGE:0x6c154, 0x1cf0 bytes
    // pci.sys PAGE:0x61bf8, 0x1cf0 bytes
    //
    _q10(sdk::unknown_ptr) fpb_fdop_initialize_root_resources;
    
    // [PciFpbFdopInsertNodeToTree]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63de4, 0x1cf0 bytes
    // pci.sys PAGE:0x6c1a0, 0x1cf0 bytes
    // pci.sys PAGE:0x61c44, 0x1cf0 bytes
    //
    _q11(sdk::unknown_ptr) fpb_fdop_insert_node_to_tree;
    
    // [PciFpbFdopRemoveNodeFromTree]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63e94, 0x1cf0 bytes
    // pci.sys PAGE:0x6c250, 0x1cf0 bytes
    // pci.sys PAGE:0x61cf4, 0x1cf0 bytes
    //
    _q12(sdk::unknown_ptr) fpb_fdop_remove_node_from_tree;
    
    // [PciFpbFindLongestConsecutiveMemoryRangeAvailable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64ab0, 0x1cf0 bytes
    // pci.sys PAGE:0x6ce3c, 0x1cf0 bytes
    // pci.sys PAGE:0x62910, 0x1cf0 bytes
    //
    _q13(sdk::unknown_ptr) fpb_find_longest_consecutive_memory_range_available;
    
    // [PciFpbGetFirstMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f354, 0x1cf0 bytes
    // pci.sys .text:0x20368, 0x1cf0 bytes
    // pci.sys .text:0x1f154, 0x1cf0 bytes
    //
    _q14(sdk::unknown_ptr) fpb_get_first_memory_range;
    
    // [PciFpbGetNextMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f3fc, 0x1cf0 bytes
    // pci.sys .text:0x20380, 0x1cf0 bytes
    // pci.sys .text:0x1f1fc, 0x1cf0 bytes
    //
    _q15(sdk::unknown_ptr) fpb_get_next_memory_range;
    
    // [PciFpbGetRootAvailableBusNumberCount]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f130, 0x1cf0 bytes
    // pci.sys .text:0x20130, 0x1cf0 bytes
    // pci.sys .text:0x1ef30, 0x1cf0 bytes
    //
    _q16(sdk::unknown_ptr) fpb_get_root_available_bus_number_count;
    
    // [PciFpbInitializeResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64c3c, 0x1cf0 bytes
    // pci.sys PAGE:0x6cfc8, 0x1cf0 bytes
    // pci.sys PAGE:0x62a9c, 0x1cf0 bytes
    //
    _q17(sdk::unknown_ptr) fpb_initialize_resource_descriptor;
    
    // [PciFpbPdoClearFpbMemoryDecodes]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63f78, 0x1cf0 bytes
    // pci.sys PAGE:0x6c334, 0x1cf0 bytes
    // pci.sys PAGE:0x61dd8, 0x1cf0 bytes
    //
    _q18(sdk::unknown_ptr) fpb_pdo_clear_fpb_memory_decodes;
    
    // [PciFpbPdoCommitResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e2c0, 0x1cf0 bytes
    // pci.sys .text:0x1f300, 0x1cf0 bytes
    // pci.sys .text:0x1e0c0, 0x1cf0 bytes
    //
    _q19(sdk::unknown_ptr) fpb_pdo_commit_resource_descriptor;
    
    // [PciFpbPdoDestroyNode]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x63fc4, 0x1cf0 bytes
    // pci.sys PAGE:0x6c380, 0x1cf0 bytes
    // pci.sys PAGE:0x61e24, 0x1cf0 bytes
    //
    _q20(sdk::unknown_ptr) fpb_pdo_destroy_node;
    
    // [PciFpbPdoEnableFpbMechanisms]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e330, 0x1cf0 bytes
    // pci.sys .text:0x1f370, 0x1cf0 bytes
    // pci.sys .text:0x1e130, 0x1cf0 bytes
    //
    _q21(sdk::unknown_ptr) fpb_pdo_enable_fpb_mechanisms;
    
    // [PciFpbPdoGetCurrentResourceList]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64010, 0x1cf0 bytes
    // pci.sys PAGE:0x6c3d0, 0x1cf0 bytes
    // pci.sys PAGE:0x61e70, 0x1cf0 bytes
    //
    _q22(sdk::unknown_ptr) fpb_pdo_get_current_resource_list;
    
    // [PciFpbPdoGetResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e4c0, 0x1cf0 bytes
    // pci.sys .text:0x1f500, 0x1cf0 bytes
    // pci.sys .text:0x1e2c0, 0x1cf0 bytes
    //
    _q23(sdk::unknown_ptr) fpb_pdo_get_resource_descriptor;
    
    // [PciFpbPdoInitializeNode]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64274, 0x1cf0 bytes
    // pci.sys PAGE:0x6c5ec, 0x1cf0 bytes
    // pci.sys PAGE:0x620d4, 0x1cf0 bytes
    //
    _q24(sdk::unknown_ptr) fpb_pdo_initialize_node;
    
    // [PciFpbPdoMarkHiberPhase]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e4f4, 0x1cf0 bytes
    // pci.sys .text:0x1f534, 0x1cf0 bytes
    // pci.sys .text:0x1e2f4, 0x1cf0 bytes
    //
    _q25(sdk::unknown_ptr) fpb_pdo_mark_hiber_phase;
    
    // [PciFpbPdoReadCapabilityByOffset]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e590, 0x1cf0 bytes
    // pci.sys .text:0x1f5c0, 0x1cf0 bytes
    // pci.sys .text:0x1e390, 0x1cf0 bytes
    //
    _q26(sdk::unknown_ptr) fpb_pdo_read_capability_by_offset;
    
    // [PciFpbPdoSetResourceDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e600, 0x1cf0 bytes
    // pci.sys .text:0x1f630, 0x1cf0 bytes
    // pci.sys .text:0x1e400, 0x1cf0 bytes
    //
    _q27(sdk::unknown_ptr) fpb_pdo_set_resource_descriptor;
    
    // [PciFpbPdoWriteCapabilityByOffset]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e660, 0x1cf0 bytes
    // pci.sys .text:0x1f690, 0x1cf0 bytes
    // pci.sys .text:0x1e460, 0x1cf0 bytes
    //
    _q28(sdk::unknown_ptr) fpb_pdo_write_capability_by_offset;
    
    // [PciFpbPdopGetBestMemoryVectorGranularity]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x644a4, 0x1cf0 bytes
    // pci.sys PAGE:0x6c830, 0x1cf0 bytes
    // pci.sys PAGE:0x62304, 0x1cf0 bytes
    //
    _q29(sdk::unknown_ptr) fpb_pdop_get_best_memory_vector_granularity;
    
    // [PciFpbPdopGetNextSupportedMemoryVectorGranularityInBytes]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e6c4, 0x1cf0 bytes
    // pci.sys .text:0x1f6f4, 0x1cf0 bytes
    // pci.sys .text:0x1e4c4, 0x1cf0 bytes
    //
    _q30(sdk::unknown_ptr) fpb_pdop_get_next_supported_memory_vector_granularity_in_bytes;
    
    // [PciFpbPdopGetVectorDataByRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e7f8, 0x1cf0 bytes
    // pci.sys .text:0x1f810, 0x1cf0 bytes
    // pci.sys .text:0x1e5f8, 0x1cf0 bytes
    //
    _q31(sdk::unknown_ptr) fpb_pdop_get_vector_data_by_range;
    
    // [PciFpbPdopMemoryVectorGranularityInBytesToEncoding]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e8cc, 0x1cf0 bytes
    // pci.sys .text:0x1f8e4, 0x1cf0 bytes
    // pci.sys .text:0x1e6cc, 0x1cf0 bytes
    //
    _q32(sdk::unknown_ptr) fpb_pdop_memory_vector_granularity_in_bytes_to_encoding;
    
    // [PciFpbPdopProgramBusNumber]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e9bc, 0x1cf0 bytes
    // pci.sys .text:0x1f9d4, 0x1cf0 bytes
    // pci.sys .text:0x1e7bc, 0x1cf0 bytes
    //
    _q33(sdk::unknown_ptr) fpb_pdop_program_bus_number;
    
    // [PciFpbPdopProgramMemory]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1ea20, 0x1cf0 bytes
    // pci.sys .text:0x1fa30, 0x1cf0 bytes
    // pci.sys .text:0x1e820, 0x1cf0 bytes
    //
    _q34(sdk::unknown_ptr) fpb_pdop_program_memory;
    
    // [PciFpbPdopTranslateVectorSpaceIndexToAddress]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1eb2c, 0x1cf0 bytes
    // pci.sys .text:0x1fb34, 0x1cf0 bytes
    // pci.sys .text:0x1e92c, 0x1cf0 bytes
    //
    _q35(sdk::unknown_ptr) fpb_pdop_translate_vector_space_index_to_address;
    
    // [PciFpbPdopUpdateHardware]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1ebb0, 0x1cf0 bytes
    // pci.sys .text:0x1fbb0, 0x1cf0 bytes
    // pci.sys .text:0x1e9b0, 0x1cf0 bytes
    //
    _q36(sdk::unknown_ptr) fpb_pdop_update_hardware;
    
    // [PciFpbPdopVectorSizeEncodingToVecotAccessOffsetMask]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1ec8c, 0x1cf0 bytes
    // pci.sys .text:0x1fc8c, 0x1cf0 bytes
    // pci.sys .text:0x1ea8c, 0x1cf0 bytes
    //
    _q37(sdk::unknown_ptr) fpb_pdop_vector_size_encoding_to_vecot_access_offset_mask;
    
    // [PciFpbPdopVectorSizeEncodingToVecotSizeInBits]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1ece0, 0x1cf0 bytes
    // pci.sys .text:0x1fce0, 0x1cf0 bytes
    // pci.sys .text:0x1eae0, 0x1cf0 bytes
    //
    _q38(sdk::unknown_ptr) fpb_pdop_vector_size_encoding_to_vecot_size_in_bits;
    
    // [PciFpbPdopWriteDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1ed58, 0x1cf0 bytes
    // pci.sys .text:0x1fd58, 0x1cf0 bytes
    // pci.sys .text:0x1eb58, 0x1cf0 bytes
    //
    _q39(sdk::unknown_ptr) fpb_pdop_write_descriptor;
    
    // [PciFpbReleaseBusNumberRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64c9c, 0x1cf0 bytes
    // pci.sys PAGE:0x6d028, 0x1cf0 bytes
    // pci.sys PAGE:0x62afc, 0x1cf0 bytes
    //
    _q40(sdk::unknown_ptr) fpb_release_bus_number_range;
    
    // [PciFpbRequestLongestConsecutiveBusNumberRangeFromRoot]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64e1c, 0x1cf0 bytes
    // pci.sys PAGE:0x6d1a8, 0x1cf0 bytes
    // pci.sys PAGE:0x62c7c, 0x1cf0 bytes
    //
    _q41(sdk::unknown_ptr) fpb_request_longest_consecutive_bus_number_range_from_root;
    
    // [PciFpbResourceDescriptorContainsRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f160, 0x1cf0 bytes
    // pci.sys .text:0x20160, 0x1cf0 bytes
    // pci.sys .text:0x1ef60, 0x1cf0 bytes
    //
    _q42(sdk::unknown_ptr) fpb_resource_descriptor_contains_range;
    
    // [PciFpbResourceDescriptorFindLongestConsecutiveRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f1d4, 0x1cf0 bytes
    // pci.sys .text:0x201cc, 0x1cf0 bytes
    // pci.sys .text:0x1efd4, 0x1cf0 bytes
    //
    _q43(sdk::unknown_ptr) fpb_resource_descriptor_find_longest_consecutive_range;
    
    // [PciFpbResourceDescriptorFindNextConsecutiveRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f27c, 0x1cf0 bytes
    // pci.sys .text:0x20270, 0x1cf0 bytes
    // pci.sys .text:0x1f07c, 0x1cf0 bytes
    //
    _q44(sdk::unknown_ptr) fpb_resource_descriptor_find_next_consecutive_range;
    
    // [PciFpbResourceDescriptorMaximumIndex]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f324, 0x1cf0 bytes
    // pci.sys .text:0x20338, 0x1cf0 bytes
    // pci.sys .text:0x1f124, 0x1cf0 bytes
    //
    _q45(sdk::unknown_ptr) fpb_resource_descriptor_maximum_index;
    
    // [PciFpbResourceDescriptorSetRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64f5c, 0x1cf0 bytes
    // pci.sys PAGE:0x6d2e8, 0x1cf0 bytes
    // pci.sys PAGE:0x62dbc, 0x1cf0 bytes
    //
    _q46(sdk::unknown_ptr) fpb_resource_descriptor_set_range;
    
    // [PciFpbResourceUpdateInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x287e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a858, 0x1cf0 bytes
    // pci.sys .rdata:0x277f0, 0x1cf0 bytes
    //
    _q47(sdk::unknown_ptr) fpb_resource_update_interface;
    
    // [PciFpbResourceUpdateInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65cb0, 0x1cf0 bytes
    // pci.sys PAGE:0x6e040, 0x1cf0 bytes
    // pci.sys PAGE:0x63b10, 0x1cf0 bytes
    //
    _q48(sdk::unknown_ptr) fpb_resource_update_interface_constructor;
    
    // [PciFpbResourceUpdateInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e0d0, 0x1cf0 bytes
    // pci.sys PAGE:0x43390, 0x1cf0 bytes
    // pci.sys PAGE:0x3c210, 0x1cf0 bytes
    //
    _q49(sdk::unknown_ptr) fpb_resource_update_interface_dereference;
    
    // [PciFpbResourceUpdateInterface_GetUpdatedBusResource]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65d40, 0x1cf0 bytes
    // pci.sys PAGE:0x6e0d0, 0x1cf0 bytes
    // pci.sys PAGE:0x63ba0, 0x1cf0 bytes
    //
    _q50(sdk::unknown_ptr) fpb_resource_update_interface_get_updated_bus_resource;
    
    // [PciFpbResourceUpdateInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e0e0, 0x1cf0 bytes
    // pci.sys PAGE:0x433a0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c220, 0x1cf0 bytes
    //
    _q51(sdk::unknown_ptr) fpb_resource_update_interface_reference;
    
    // [PciFpbVectorSpaceGranularityEncodingToNumericAlignment]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1efb0, 0x1cf0 bytes
    // pci.sys .text:0x1ffb0, 0x1cf0 bytes
    // pci.sys .text:0x1edb0, 0x1cf0 bytes
    //
    _q52(sdk::unknown_ptr) fpb_vector_space_granularity_encoding_to_numeric_alignment;
    
    // [PciFpbpAllocateBusNumber]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x64fc4, 0x1cf0 bytes
    // pci.sys PAGE:0x6d350, 0x1cf0 bytes
    // pci.sys PAGE:0x62e24, 0x1cf0 bytes
    //
    _q53(sdk::unknown_ptr) fpbp_allocate_bus_number;
    
    // [PciFpbpAllocateMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65e34, 0x1cf0 bytes
    // pci.sys PAGE:0x6e1c4, 0x1cf0 bytes
    // pci.sys PAGE:0x63c94, 0x1cf0 bytes
    //
    _q54(sdk::unknown_ptr) fpbp_allocate_memory_range;
    
    // [PciFpbpAssignDeviceConfiguredBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65100, 0x1cf0 bytes
    // pci.sys PAGE:0x6d48c, 0x1cf0 bytes
    // pci.sys PAGE:0x62f60, 0x1cf0 bytes
    //
    _q55(sdk::unknown_ptr) fpbp_assign_device_configured_bus_numbers;
    
    // [PciFpbpChangeBusNumberRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65238, 0x1cf0 bytes
    // pci.sys PAGE:0x6d5c8, 0x1cf0 bytes
    // pci.sys PAGE:0x63098, 0x1cf0 bytes
    //
    _q56(sdk::unknown_ptr) fpbp_change_bus_number_range;
    
    // [PciFpbpCleanUpMemoryRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65ef0, 0x1cf0 bytes
    // pci.sys PAGE:0x6e274, 0x1cf0 bytes
    // pci.sys PAGE:0x63d50, 0x1cf0 bytes
    //
    _q57(sdk::unknown_ptr) fpbp_clean_up_memory_range;
    
    // [PciFpbpClearBusNumberDecodeUpstream]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65348, 0x1cf0 bytes
    // pci.sys PAGE:0x6d6d8, 0x1cf0 bytes
    // pci.sys PAGE:0x631a8, 0x1cf0 bytes
    //
    _q58(sdk::unknown_ptr) fpbp_clear_bus_number_decode_upstream;
    
    // [PciFpbpCommitBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6544c, 0x1cf0 bytes
    // pci.sys PAGE:0x6d7dc, 0x1cf0 bytes
    // pci.sys PAGE:0x632ac, 0x1cf0 bytes
    //
    _q59(sdk::unknown_ptr) fpbp_commit_bus_numbers;
    
    // [PciFpbpComputeAverageBusNumberForChildrenBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x654f0, 0x1cf0 bytes
    // pci.sys PAGE:0x6d880, 0x1cf0 bytes
    // pci.sys PAGE:0x63350, 0x1cf0 bytes
    //
    _q60(sdk::unknown_ptr) fpbp_compute_average_bus_number_for_children_bridge;
    
    // [PciFpbpConfigureBestBusNumberRangeForNonFpbBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65598, 0x1cf0 bytes
    // pci.sys PAGE:0x6d928, 0x1cf0 bytes
    // pci.sys PAGE:0x633f8, 0x1cf0 bytes
    //
    _q61(sdk::unknown_ptr) fpbp_configure_best_bus_number_range_for_non_fpb_bridge;
    
    // [PciFpbpConfigureDeviceBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6570c, 0x1cf0 bytes
    // pci.sys PAGE:0x6da94, 0x1cf0 bytes
    // pci.sys PAGE:0x6356c, 0x1cf0 bytes
    //
    _q62(sdk::unknown_ptr) fpbp_configure_device_bus_numbers;
    
    // [PciFpbpRemoveBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x65784, 0x1cf0 bytes
    // pci.sys PAGE:0x6db0c, 0x1cf0 bytes
    // pci.sys PAGE:0x635e4, 0x1cf0 bytes
    //
    _q63(sdk::unknown_ptr) fpbp_remove_bus_numbers;
    
    // [PciFpbpRequestBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x658c8, 0x1cf0 bytes
    // pci.sys PAGE:0x6dc58, 0x1cf0 bytes
    // pci.sys PAGE:0x63728, 0x1cf0 bytes
    //
    _q64(sdk::unknown_ptr) fpbp_request_bus_numbers;
    
    // [PciFpbpSetBusNumberDecodeUpstream]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6590c, 0x1cf0 bytes
    // pci.sys PAGE:0x6dc9c, 0x1cf0 bytes
    // pci.sys PAGE:0x6376c, 0x1cf0 bytes
    //
    _q65(sdk::unknown_ptr) fpbp_set_bus_number_decode_upstream;
    
    // [PciFpgaControlInit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xbf0c, 0x1cf0 bytes
    // pci.sys .text:0x2098, 0x1cf0 bytes
    // pci.sys .text:0x5780, 0x1cf0 bytes
    //
    _q66(sdk::unknown_ptr) fpga_control_init;
    
    // [PciFpgaControlInterface_BusScan]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f430, 0x1cf0 bytes
    // pci.sys .text:0x203b0, 0x1cf0 bytes
    // pci.sys .text:0x1f230, 0x1cf0 bytes
    //
    _q67(sdk::unknown_ptr) fpga_control_interface_bus_scan;
    
    // [PciFpgaControlInterface_ControlConfigSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x66000, 0x1cf0 bytes
    // pci.sys PAGE:0x6e380, 0x1cf0 bytes
    // pci.sys PAGE:0x63e60, 0x1cf0 bytes
    //
    _q68(sdk::unknown_ptr) fpga_control_interface_control_config_space;
    
    // [PciFpgaControlInterface_ControlErrorReporting]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x660c0, 0x1cf0 bytes
    // pci.sys PAGE:0x6e440, 0x1cf0 bytes
    // pci.sys PAGE:0x63f20, 0x1cf0 bytes
    //
    _q69(sdk::unknown_ptr) fpga_control_interface_control_error_reporting;
    
    // [PciFpgaControlInterface_ControlLink]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f460, 0x1cf0 bytes
    // pci.sys .text:0x203e0, 0x1cf0 bytes
    // pci.sys .text:0x1f260, 0x1cf0 bytes
    //
    _q70(sdk::unknown_ptr) fpga_control_interface_control_link;
    
    // [PciFpgaControlInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e0f0, 0x1cf0 bytes
    // pci.sys PAGE:0x433b0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c230, 0x1cf0 bytes
    //
    _q71(sdk::unknown_ptr) fpga_control_interface_dereference;
    
    // [PciFpgaControlInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e100, 0x1cf0 bytes
    // pci.sys PAGE:0x433c0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c240, 0x1cf0 bytes
    //
    _q72(sdk::unknown_ptr) fpga_control_interface_reference;
    
    // [PciFpgaControlLogBusScanCount]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9b58, 0x1cf0 bytes
    // pci.sys .text:0xd18c, 0x1cf0 bytes
    // pci.sys .text:0xb018, 0x1cf0 bytes
    //
    _q73(sdk::unknown_ptr) fpga_control_log_bus_scan_count;
    
    // [PciGetCurrentDeviceSpeedAndMode]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48d90, 0x1cf0 bytes
    // pci.sys PAGE:0x48f24, 0x1cf0 bytes
    // pci.sys PAGE:0x49780, 0x1cf0 bytes
    //
    _q74(sdk::unknown_ptr) get_current_device_speed_and_mode;
    
    // [PciGetDeviceSupportedLinkSubState]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48cc4, 0x1cf0 bytes
    // pci.sys PAGE:0x48de8, 0x1cf0 bytes
    // pci.sys PAGE:0x496b4, 0x1cf0 bytes
    //
    _q75(sdk::unknown_ptr) get_device_supported_link_sub_state;
    
    // [PciGetDeviceTypeProperty]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48d2c, 0x1cf0 bytes
    // pci.sys PAGE:0x48ec0, 0x1cf0 bytes
    // pci.sys PAGE:0x4971c, 0x1cf0 bytes
    //
    _q76(sdk::unknown_ptr) get_device_type_property;
    
    // [PciGetHalReportedInterruptLine]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54174, 0x1cf0 bytes
    // pci.sys PAGE:0x5a630, 0x1cf0 bytes
    // pci.sys PAGE:0x54584, 0x1cf0 bytes
    //
    _q77(sdk::unknown_ptr) get_hal_reported_interrupt_line;
    
    // [PciGetRequirementsForVfs]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xeb74, 0x1cf0 bytes
    // pci.sys .text:0xceb4, 0x1cf0 bytes
    // pci.sys .text:0x10a00, 0x1cf0 bytes
    //
    _q78(sdk::unknown_ptr) get_requirements_for_vfs;
    
    // [GUID_D3COLD_AUX_POWER_AND_TIMING_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2af20, 0x1cf0 bytes
    // pci.sys .rdata:0x2d910, 0x1cf0 bytes
    // pci.sys .rdata:0x2a360, 0x1cf0 bytes
    //
    _q79(struct nt::guid_t*) guid_d3cold_aux_power_and_timing_interface;
    
    // [GUID_DSD_D3COLD_AUX_POWER_AND_TIMING_PREVIOUS_AUX_SAFE]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b000, 0x1cf0 bytes
    // pci.sys .rdata:0x2da60, 0x1cf0 bytes
    // pci.sys .rdata:0x2a420, 0x1cf0 bytes
    //
    _q80(sdk::unknown_ptr) guid_dsd_d3cold_aux_power_and_timing_previous_aux_safe;
    
    // [GUID_DSD_EXTERNAL_FACING_PORT]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2afe0, 0x1cf0 bytes
    // pci.sys .rdata:0x2da40, 0x1cf0 bytes
    // pci.sys .rdata:0x2a6b0, 0x1cf0 bytes
    //
    _q81(sdk::unknown_ptr) guid_dsd_external_facing_port;
    
    // [GUID_DSD_PORT_DMA_PROPERTIES]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b050, 0x1cf0 bytes
    // pci.sys .rdata:0x2db50, 0x1cf0 bytes
    // pci.sys .rdata:0x2a430, 0x1cf0 bytes
    //
    _q82(sdk::unknown_ptr) guid_dsd_port_dma_properties;
    
    // [GUID_DSD_PTM_ROOT_TIMER_SOURCE_AUX]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2c6f8, 0x1cf0 bytes
    // pci.sys .rdata:0x30270, 0x1cf0 bytes
    // pci.sys .rdata:0x2b760, 0x1cf0 bytes
    //
    _q83(sdk::unknown_ptr) guid_dsd_ptm_root_timer_source_aux;
    
    // [GUID_DSD_ROOTPORT_RESET_PROPERTIES]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b0f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2da50, 0x1cf0 bytes
    // pci.sys .rdata:0x2a6a0, 0x1cf0 bytes
    //
    _q84(sdk::unknown_ptr) guid_dsd_rootport_reset_properties;
    
    // [GUID_DSD_ROOTPORT_SUPPORTS_HOTPLUG_IN_D3]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2b100, 0x1cf0 bytes
    // pci.sys .rdata:0x2da30, 0x1cf0 bytes
    // pci.sys .rdata:0x2a6c0, 0x1cf0 bytes
    //
    _q85(sdk::unknown_ptr) guid_dsd_rootport_supports_hotplug_in_d3;
    
    // [GUID_NPEM_CONTROL_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2af50, 0x1cf0 bytes
    // pci.sys .rdata:0x2d940, 0x1cf0 bytes
    // pci.sys .rdata:0x2a390, 0x1cf0 bytes
    //
    _q86(sdk::unknown_ptr) guid_npem_control_interface;
    
    // [GUID_PCI_KSR_CONTEXT]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2ad28, 0x1cf0 bytes
    // pci.sys .rdata:0x2d5d8, 0x1cf0 bytes
    // pci.sys .rdata:0x297f0, 0x1cf0 bytes
    //
    _q87(sdk::unknown_ptr) guid_pci_ksr_context;
    
    // [GUID_PCI_PTM_CONTROL_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2af30, 0x1cf0 bytes
    // pci.sys .rdata:0x2d920, 0x1cf0 bytes
    // pci.sys .rdata:0x2a370, 0x1cf0 bytes
    //
    _q88(struct nt::guid_t*) guid_pci_ptm_control_interface;
    
    // [PciHibernateInfoLogTime]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9ac4, 0x1cf0 bytes
    // pci.sys .text:0xd9bc, 0x1cf0 bytes
    // pci.sys .text:0xaf84, 0x1cf0 bytes
    //
    _q89(sdk::unknown_ptr) hibernate_info_log_time;
    
    // [PciHibernateInfoReset]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xea08, 0x1cf0 bytes
    // pci.sys .text:0x1aa8, 0x1cf0 bytes
    // pci.sys .text:0x10938, 0x1cf0 bytes
    //
    _q90(sdk::unknown_ptr) hibernate_info_reset;
    
    // [PciHibernateInfoSetBusNeedScan]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x26700, 0x1cf0 bytes
    // pci.sys .text:0xd7c0, 0x1cf0 bytes
    // pci.sys .text:0x26520, 0x1cf0 bytes
    //
    _q91(sdk::unknown_ptr) hibernate_info_set_bus_need_scan;
    
    // [PciHibernateInfoUpdate]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5fd4, 0x1cf0 bytes
    // pci.sys .text:0xd714, 0x1cf0 bytes
    // pci.sys .text:0x7320, 0x1cf0 bytes
    //
    _q92(sdk::unknown_ptr) hibernate_info_update;
    
    // [PciInitCfgAccessLogList]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4de2c, 0x1cf0 bytes
    // pci.sys PAGE:0x43b58, 0x1cf0 bytes
    // pci.sys PAGE:0x4e330, 0x1cf0 bytes
    //
    _q93(sdk::unknown_ptr) init_cfg_access_log_list;
    
    // [PciInitializeBusIdleTimeout]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x6fc60, 0x1cf0 bytes
    // pci.sys INIT:0x78838, 0x1cf0 bytes
    // pci.sys INIT:0x6d090, 0x1cf0 bytes
    //
    _q94(sdk::unknown_ptr) initialize_bus_idle_timeout;
    
    // [PciInitializeResourceHint]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b52c, 0x1cf0 bytes
    // pci.sys PAGE:0x44e18, 0x1cf0 bytes
    // pci.sys PAGE:0x4c0ec, 0x1cf0 bytes
    //
    _q95(sdk::unknown_ptr) initialize_resource_hint;
    
    // [PciIommuBusInterface_GetDeviceId]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xd170, 0x1cf0 bytes
    // pci.sys .text:0xb3f0, 0x1cf0 bytes
    // pci.sys .text:0xecc0, 0x1cf0 bytes
    //
    _q96(sdk::unknown_ptr) iommu_bus_interface_get_device_id;
    
    // [PciIommuBusInterface_GetDeviceProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x412d0, 0x1cf0 bytes
    // pci.sys PAGE:0x57c40, 0x1cf0 bytes
    // pci.sys PAGE:0x41090, 0x1cf0 bytes
    //
    _q97(sdk::unknown_ptr) iommu_bus_interface_get_device_properties;
    
    // [PciIsD3ColdAuxPowerAndTimingSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3fc64, 0x1cf0 bytes
    // pci.sys PAGE:0x47554, 0x1cf0 bytes
    // pci.sys PAGE:0x3f2b8, 0x1cf0 bytes
    //
    _q98(sdk::unknown_ptr) is_d3_cold_aux_power_and_timing_supported;
    
    // [PciIsDeviceConfigSpaceUnavailable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xa580, 0x1cf0 bytes
    // pci.sys .text:0x3cb0, 0x1cf0 bytes
    // pci.sys .text:0xbcb0, 0x1cf0 bytes
    //
    _q99(sdk::unknown_ptr) is_device_config_space_unavailable;
    
    // [PciIsDeviceFpbRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xc008, 0x1cf0 bytes
    // pci.sys .text:0x1bd4, 0x1cf0 bytes
    // pci.sys .text:0xd8c0, 0x1cf0 bytes
    //
    _r00(sdk::unknown_ptr) is_device_fpb_raw;
    
    // [PciIsExternalFacingPort]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3eeb8, 0x1cf0 bytes
    // pci.sys PAGE:0x457cc, 0x1cf0 bytes
    // pci.sys PAGE:0x3d77c, 0x1cf0 bytes
    //
    _r01(sdk::unknown_ptr) is_external_facing_port;
    
    // [PciIsFundamentalDeviceResetTriggeredOnD3ToD0]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b60c, 0x1cf0 bytes
    // pci.sys PAGE:0x458a4, 0x1cf0 bytes
    // pci.sys PAGE:0x3e470, 0x1cf0 bytes
    //
    _r02(sdk::unknown_ptr) is_fundamental_device_reset_triggered_on_d3_to_d0;
    
    // [PciIsHotplugInD3Supported]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b734, 0x1cf0 bytes
    // pci.sys PAGE:0x456f4, 0x1cf0 bytes
    // pci.sys PAGE:0x3e398, 0x1cf0 bytes
    //
    _r03(sdk::unknown_ptr) is_hotplug_in_d3_supported;
    
    // [PciIsThunderboltDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x52fbc, 0x1cf0 bytes
    // pci.sys PAGE:0x56e3c, 0x1cf0 bytes
    // pci.sys PAGE:0x534cc, 0x1cf0 bytes
    //
    _r04(sdk::unknown_ptr) is_thunderbolt_device;
    
    // [PciIsThunderboltDeviceCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x552a0, 0x1cf0 bytes
    // pci.sys PAGE:0x5bb40, 0x1cf0 bytes
    // pci.sys PAGE:0x55740, 0x1cf0 bytes
    //
    _r05(sdk::unknown_ptr) is_thunderbolt_device_callback;
    
    // [PciKsrBoot]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34611, 0x1cf0 bytes
    // pci.sys .data:0x38669, 0x1cf0 bytes
    // pci.sys .data:0x32611, 0x1cf0 bytes
    //
    _r06(sdk::unknown_ptr) ksr_boot;
    
    // [PciKsrData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x345f8, 0x1cf0 bytes
    // pci.sys .data:0x38650, 0x1cf0 bytes
    // pci.sys .data:0x325f8, 0x1cf0 bytes
    //
    _r07(sdk::unknown_ptr) ksr_data;
    
    // [PciKsrDataCount]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34608, 0x1cf0 bytes
    // pci.sys .data:0x38660, 0x1cf0 bytes
    // pci.sys .data:0x32608, 0x1cf0 bytes
    //
    _r08(sdk::unknown_ptr) ksr_data_count;
    
    // [PciKsrEnumeratePersistedMemory]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x6f080, 0x1cf0 bytes
    // pci.sys INIT:0x78080, 0x1cf0 bytes
    // pci.sys INIT:0x6d080, 0x1cf0 bytes
    //
    _r09(sdk::unknown_ptr) ksr_enumerate_persisted_memory;
    
    // [PciKsrGetCachedData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24160, 0x1cf0 bytes
    // pci.sys .text:0x25a90, 0x1cf0 bytes
    // pci.sys .text:0x23f60, 0x1cf0 bytes
    //
    _r10(sdk::unknown_ptr) ksr_get_cached_data;
    
    // [PciKsrGetValidData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x60c4, 0x1cf0 bytes
    // pci.sys .text:0x4470, 0x1cf0 bytes
    // pci.sys .text:0x7410, 0x1cf0 bytes
    //
    _r11(sdk::unknown_ptr) ksr_get_valid_data;
    
    // [PciKsrInvalidateData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x243c8, 0x1cf0 bytes
    // pci.sys .text:0x25cec, 0x1cf0 bytes
    // pci.sys .text:0x241c8, 0x1cf0 bytes
    //
    _r12(sdk::unknown_ptr) ksr_invalidate_data;
    
    // [PciKsrIsSameDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24424, 0x1cf0 bytes
    // pci.sys .text:0x25d48, 0x1cf0 bytes
    // pci.sys .text:0x24224, 0x1cf0 bytes
    //
    _r13(sdk::unknown_ptr) ksr_is_same_device;
    
    // [PciKsrPrepare]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67f20, 0x1cf0 bytes
    // pci.sys PAGE:0x70500, 0x1cf0 bytes
    // pci.sys PAGE:0x65d80, 0x1cf0 bytes
    //
    _r14(sdk::unknown_ptr) ksr_prepare;
    
    // [PciKsrRecoveryCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24474, 0x1cf0 bytes
    // pci.sys .text:0x25d98, 0x1cf0 bytes
    // pci.sys .text:0x24274, 0x1cf0 bytes
    //
    _r15(sdk::unknown_ptr) ksr_recovery_callback;
    
    // [PciKsrRecoveryPrepared]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x244c0, 0x1cf0 bytes
    // pci.sys .text:0x25de4, 0x1cf0 bytes
    // pci.sys .text:0x242c0, 0x1cf0 bytes
    //
    _r16(sdk::unknown_ptr) ksr_recovery_prepared;
    
    // [PciKsrRestorePersistentContext]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x70ba4, 0x1cf0 bytes
    // pci.sys INIT:0x79d7c, 0x1cf0 bytes
    // pci.sys INIT:0x6eba4, 0x1cf0 bytes
    //
    _r17(sdk::unknown_ptr) ksr_restore_persistent_context;
    
    // [PciKsrRevision]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x3460c, 0x1cf0 bytes
    // pci.sys .data:0x38664, 0x1cf0 bytes
    // pci.sys .data:0x3260c, 0x1cf0 bytes
    //
    _r18(sdk::unknown_ptr) ksr_revision;
    
    // [PciKsrSaveDeviceData]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24560, 0x1cf0 bytes
    // pci.sys .text:0x25e84, 0x1cf0 bytes
    // pci.sys .text:0x24360, 0x1cf0 bytes
    //
    _r19(sdk::unknown_ptr) ksr_save_device_data;
    
    // [PciKsrShutdown]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34612, 0x1cf0 bytes
    // pci.sys .data:0x3866a, 0x1cf0 bytes
    // pci.sys .data:0x32612, 0x1cf0 bytes
    //
    _r20(sdk::unknown_ptr) ksr_shutdown;
    
    // [PciKsrShutdownContext]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34600, 0x1cf0 bytes
    // pci.sys .data:0x38658, 0x1cf0 bytes
    // pci.sys .data:0x32600, 0x1cf0 bytes
    //
    _r21(sdk::unknown_ptr) ksr_shutdown_context;
    
    // [PciMemoryArbiter_AllocateEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x52340, 0x1cf0 bytes
    // pci.sys PAGE:0x4adf0, 0x1cf0 bytes
    // pci.sys PAGE:0x52850, 0x1cf0 bytes
    //
    _r22(sdk::unknown_ptr) memory_arbiter_allocate_entry;
    
    // [PciMemoryArbiter_BootAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54900, 0x1cf0 bytes
    // pci.sys PAGE:0x4aeb0, 0x1cf0 bytes
    // pci.sys PAGE:0x54ad0, 0x1cf0 bytes
    //
    _r23(sdk::unknown_ptr) memory_arbiter_boot_allocation;
    
    // [PciMemoryArbiter_DeleteOwnerRanges]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x541e0, 0x1cf0 bytes
    // pci.sys PAGE:0x4d1e0, 0x1cf0 bytes
    // pci.sys PAGE:0x545f0, 0x1cf0 bytes
    //
    _r24(sdk::unknown_ptr) memory_arbiter_delete_owner_ranges;
    
    // [PciNpemControlEnableDisable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24a34, 0x1cf0 bytes
    // pci.sys .text:0x26308, 0x1cf0 bytes
    // pci.sys .text:0x24834, 0x1cf0 bytes
    //
    _r25(sdk::unknown_ptr) npem_control_enable_disable;
    
    // [PciNpemControlInit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x687f8, 0x1cf0 bytes
    // pci.sys PAGE:0x70e08, 0x1cf0 bytes
    // pci.sys PAGE:0x66658, 0x1cf0 bytes
    //
    _r26(sdk::unknown_ptr) npem_control_init;
    
    // [PciNpemControlInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x287c8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a838, 0x1cf0 bytes
    // pci.sys .rdata:0x277d0, 0x1cf0 bytes
    //
    _r27(sdk::unknown_ptr) npem_control_interface;
    
    // [PciNpemControlInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x688b0, 0x1cf0 bytes
    // pci.sys PAGE:0x70ec0, 0x1cf0 bytes
    // pci.sys PAGE:0x66710, 0x1cf0 bytes
    //
    _r28(sdk::unknown_ptr) npem_control_interface_constructor;
    
    // [PciNpemControlInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e140, 0x1cf0 bytes
    // pci.sys PAGE:0x43400, 0x1cf0 bytes
    // pci.sys PAGE:0x3c280, 0x1cf0 bytes
    //
    _r29(sdk::unknown_ptr) npem_control_interface_dereference;
    
    // [PciNpemControlInterface_QueryStandardCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24af0, 0x1cf0 bytes
    // pci.sys .text:0x26490, 0x1cf0 bytes
    // pci.sys .text:0x248f0, 0x1cf0 bytes
    //
    _r30(sdk::unknown_ptr) npem_control_interface_query_standard_capabilities;
    
    // [PciNpemControlInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e150, 0x1cf0 bytes
    // pci.sys PAGE:0x43410, 0x1cf0 bytes
    // pci.sys PAGE:0x3c290, 0x1cf0 bytes
    //
    _r31(sdk::unknown_ptr) npem_control_interface_reference;
    
    // [PciNpemControlInterface_SetNpemSupportState]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24b40, 0x1cf0 bytes
    // pci.sys .text:0x264e0, 0x1cf0 bytes
    // pci.sys .text:0x24940, 0x1cf0 bytes
    //
    _r32(sdk::unknown_ptr) npem_control_interface_set_npem_support_state;
    
    // [PciNpemControlInterface_SetStandardControl]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24bb0, 0x1cf0 bytes
    // pci.sys .text:0x26550, 0x1cf0 bytes
    // pci.sys .text:0x249b0, 0x1cf0 bytes
    //
    _r33(sdk::unknown_ptr) npem_control_interface_set_standard_control;
    
    // [PciNpemControlReadModifyWriteSync]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24c00, 0x1cf0 bytes
    // pci.sys .text:0x265a0, 0x1cf0 bytes
    // pci.sys .text:0x24a00, 0x1cf0 bytes
    //
    _r34(sdk::unknown_ptr) npem_control_read_modify_write_sync;
    
    // [PciNpemControlRestore]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24e18, 0x1cf0 bytes
    // pci.sys .text:0x267d8, 0x1cf0 bytes
    // pci.sys .text:0x24c38, 0x1cf0 bytes
    //
    _r35(sdk::unknown_ptr) npem_control_restore;
    
    // [PciNpemControlSetStandardControlRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24e8c, 0x1cf0 bytes
    // pci.sys .text:0x2684c, 0x1cf0 bytes
    // pci.sys .text:0x24cac, 0x1cf0 bytes
    //
    _r36(sdk::unknown_ptr) npem_control_set_standard_control_registers;
    
    // [PciOnPostPath]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ffb4, 0x1cf0 bytes
    // pci.sys PAGE:0x578f8, 0x1cf0 bytes
    // pci.sys PAGE:0x3d5a4, 0x1cf0 bytes
    //
    _r37(sdk::unknown_ptr) on_post_path;
    
    // [PciOverrideBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c188, 0x1cf0 bytes
    // pci.sys PAGE:0x553ac, 0x1cf0 bytes
    // pci.sys PAGE:0x3e118, 0x1cf0 bytes
    //
    _r38(sdk::unknown_ptr) override_bridge_requirements;
    
    // [PcieDpcEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34778, 0x1cf0 bytes
    // pci.sys .data:0x387d8, 0x1cf0 bytes
    // pci.sys .data:0x32778, 0x1cf0 bytes
    //
    _r39(sdk::unknown_ptr) pcie_dpc_enabled;
    
    // [PciPoFxComponent]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2aff0, 0x1cf0 bytes
    // pci.sys .rdata:0x2db40, 0x1cf0 bytes
    // pci.sys .rdata:0x2a440, 0x1cf0 bytes
    //
    _r40(sdk::unknown_ptr) po_fx_component;
    
    // [PciPopulateBarRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x473d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4ab90, 0x1cf0 bytes
    // pci.sys PAGE:0x47dc0, 0x1cf0 bytes
    //
    _r41(sdk::unknown_ptr) populate_bar_requirements;
    
    // [PciPostVgaDeviceId]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x345e8, 0x1cf0 bytes
    // pci.sys .data:0x38640, 0x1cf0 bytes
    // pci.sys .data:0x325e8, 0x1cf0 bytes
    //
    _r42(sdk::unknown_ptr) post_vga_device_id;
    
    // [PciPowerDownDeviceByPolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3fe0, 0x1cf0 bytes
    // pci.sys .text:0x8894, 0x1cf0 bytes
    // pci.sys .text:0x5150, 0x1cf0 bytes
    //
    _r43(sdk::unknown_ptr) power_down_device_by_policy;
    
    // [PciPowerUpDeviceTimerCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2dd0, 0x1cf0 bytes
    // pci.sys .text:0xa000, 0x1cf0 bytes
    // pci.sys .text:0x22b0, 0x1cf0 bytes
    //
    _r44(sdk::unknown_ptr) power_up_device_timer_callback;
    
    // [PciPreScanAddBridgeWindowRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x53764, 0x1cf0 bytes
    // pci.sys PAGE:0x5aff8, 0x1cf0 bytes
    // pci.sys PAGE:0x53b74, 0x1cf0 bytes
    //
    _r45(sdk::unknown_ptr) pre_scan_add_bridge_window_requirement;
    
    // [PciPreScanAddBridgeWindowRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe914, 0x1cf0 bytes
    // pci.sys .text:0xd6b8, 0x1cf0 bytes
    // pci.sys .text:0x10844, 0x1cf0 bytes
    //
    _r46(sdk::unknown_ptr) pre_scan_add_bridge_window_requirements;
    
    // [PciPreScanAddChildRequirementsToBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x40e50, 0x1cf0 bytes
    // pci.sys PAGE:0x4ee00, 0x1cf0 bytes
    // pci.sys PAGE:0x40870, 0x1cf0 bytes
    //
    _r47(sdk::unknown_ptr) pre_scan_add_child_requirements_to_bridge_requirements;
    
    // [PciPreScanAdjustBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5422c, 0x1cf0 bytes
    // pci.sys PAGE:0x5aa18, 0x1cf0 bytes
    // pci.sys PAGE:0x5463c, 0x1cf0 bytes
    //
    _r48(sdk::unknown_ptr) pre_scan_adjust_bridge_requirements;
    
    // [PciPreScanAllocateBridgeRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b258, 0x1cf0 bytes
    // pci.sys PAGE:0x44b68, 0x1cf0 bytes
    // pci.sys PAGE:0x4be18, 0x1cf0 bytes
    //
    _r49(sdk::unknown_ptr) pre_scan_allocate_bridge_raw;
    
    // [PciPreScanAssignBridgeBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68a50, 0x1cf0 bytes
    // pci.sys PAGE:0x71090, 0x1cf0 bytes
    // pci.sys PAGE:0x668b0, 0x1cf0 bytes
    //
    _r50(sdk::unknown_ptr) pre_scan_assign_bridge_bus_numbers;
    
    // [PciPreScanAssignBusNumbersSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68c70, 0x1cf0 bytes
    // pci.sys PAGE:0x712b0, 0x1cf0 bytes
    // pci.sys PAGE:0x66ad0, 0x1cf0 bytes
    //
    _r51(sdk::unknown_ptr) pre_scan_assign_bus_numbers_subtree;
    
    // [PciPreScanBuildPostVgaDeviceId]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54fdc, 0x1cf0 bytes
    // pci.sys PAGE:0x5b2e4, 0x1cf0 bytes
    // pci.sys PAGE:0x5547c, 0x1cf0 bytes
    //
    _r52(sdk::unknown_ptr) pre_scan_build_post_vga_device_id;
    
    // [PciPreScanBus]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x5447c, 0x1cf0 bytes
    // pci.sys PAGE:0x44914, 0x1cf0 bytes
    // pci.sys PAGE:0x4d6e8, 0x1cf0 bytes
    //
    _r53(sdk::unknown_ptr) pre_scan_bus;
    
    // [PciPreScanCommitBridgeBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68da0, 0x1cf0 bytes
    // pci.sys PAGE:0x713e0, 0x1cf0 bytes
    // pci.sys PAGE:0x66c00, 0x1cf0 bytes
    //
    _r54(sdk::unknown_ptr) pre_scan_commit_bridge_bus_numbers;
    
    // [PciPreScanDisconnectDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5020, 0x1cf0 bytes
    // pci.sys .text:0x7b74, 0x1cf0 bytes
    // pci.sys .text:0x62f8, 0x1cf0 bytes
    //
    _r55(sdk::unknown_ptr) pre_scan_disconnect_device;
    
    // [PciPreScanFindAvailableBusNumberRange]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x546bc, 0x1cf0 bytes
    // pci.sys PAGE:0x4480c, 0x1cf0 bytes
    // pci.sys PAGE:0x4dc2c, 0x1cf0 bytes
    //
    _r56(sdk::unknown_ptr) pre_scan_find_available_bus_number_range;
    
    // [PciPreScanFreeBridgeRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x55750, 0x1cf0 bytes
    // pci.sys PAGE:0x5bbe0, 0x1cf0 bytes
    // pci.sys PAGE:0x55ce0, 0x1cf0 bytes
    //
    _r57(sdk::unknown_ptr) pre_scan_free_bridge_raw;
    
    // [PciPreScanIsDeviceCritical]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x42aa4, 0x1cf0 bytes
    // pci.sys PAGE:0x50750, 0x1cf0 bytes
    // pci.sys PAGE:0x42e54, 0x1cf0 bytes
    //
    _r58(sdk::unknown_ptr) pre_scan_is_device_critical;
    
    // [PciPreScanNextPopulatedSlot]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x42cb0, 0x1cf0 bytes
    // pci.sys PAGE:0x501b0, 0x1cf0 bytes
    // pci.sys PAGE:0x42f00, 0x1cf0 bytes
    //
    _r59(sdk::unknown_ptr) pre_scan_next_populated_slot;
    
    // [PciPreScanProbeDeviceBars]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x425cc, 0x1cf0 bytes
    // pci.sys PAGE:0x502c0, 0x1cf0 bytes
    // pci.sys PAGE:0x427f4, 0x1cf0 bytes
    //
    _r60(sdk::unknown_ptr) pre_scan_probe_device_bars;
    
    // [PciPreScanProbeDeviceBarsCritical]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf030, 0x1cf0 bytes
    // pci.sys .text:0xdb68, 0x1cf0 bytes
    // pci.sys .text:0x10f00, 0x1cf0 bytes
    //
    _r61(sdk::unknown_ptr) pre_scan_probe_device_bars_critical;
    
    // [PciPreScanProbeDeviceBarsWorker]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xaf60, 0x1cf0 bytes
    // pci.sys .text:0x7960, 0x1cf0 bytes
    // pci.sys .text:0xc650, 0x1cf0 bytes
    //
    _r62(sdk::unknown_ptr) pre_scan_probe_device_bars_worker;
    
    // [PciPreScanSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x426b0, 0x1cf0 bytes
    // pci.sys PAGE:0x503a4, 0x1cf0 bytes
    // pci.sys PAGE:0x428e0, 0x1cf0 bytes
    //
    _r63(sdk::unknown_ptr) pre_scan_subtree;
    
    // [PciPreScanTraverseSubtree]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x538fc, 0x1cf0 bytes
    // pci.sys PAGE:0x5ac00, 0x1cf0 bytes
    // pci.sys PAGE:0x53d0c, 0x1cf0 bytes
    //
    _r64(sdk::unknown_ptr) pre_scan_traverse_subtree;
    
    // [PciPreScanUpdateParent]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x53690, 0x1cf0 bytes
    // pci.sys PAGE:0x5af24, 0x1cf0 bytes
    // pci.sys PAGE:0x53aa0, 0x1cf0 bytes
    //
    _r65(sdk::unknown_ptr) pre_scan_update_parent;
    
    // [PciProcessCompletionInPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xedc0, 0x1cf0 bytes
    // pci.sys .text:0xdcb0, 0x1cf0 bytes
    // pci.sys .text:0x10c90, 0x1cf0 bytes
    //
    _r66(sdk::unknown_ptr) process_completion_in_passive;
    
    // [PciProcessSlotEventQueue]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x20dfc, 0x1cf0 bytes
    // pci.sys .text:0x22204, 0x1cf0 bytes
    // pci.sys .text:0x20bfc, 0x1cf0 bytes
    //
    _r67(sdk::unknown_ptr) process_slot_event_queue;
    
    // [PciProcessVsmProtection]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x53784, 0x1cf0 bytes
    // pci.sys PAGE:0x5a070, 0x1cf0 bytes
    // pci.sys PAGE:0x53b94, 0x1cf0 bytes
    //
    _r68(sdk::unknown_ptr) process_vsm_protection;
    
    // [PciPtmControlInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x28808, 0x1cf0 bytes
    // pci.sys .rdata:0x2a878, 0x1cf0 bytes
    // pci.sys .rdata:0x27810, 0x1cf0 bytes
    //
    _r69(sdk::unknown_ptr) ptm_control_interface;
    
    // [PciPtmControlInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68df0, 0x1cf0 bytes
    // pci.sys PAGE:0x714e0, 0x1cf0 bytes
    // pci.sys PAGE:0x66c50, 0x1cf0 bytes
    //
    _r70(sdk::unknown_ptr) ptm_control_interface_constructor;
    
    // [PciPtmControlInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e160, 0x1cf0 bytes
    // pci.sys PAGE:0x43420, 0x1cf0 bytes
    // pci.sys PAGE:0x3c2a0, 0x1cf0 bytes
    //
    _r71(sdk::unknown_ptr) ptm_control_interface_dereference;
    
    // [PciPtmControlInterface_Disable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x68eb0, 0x1cf0 bytes
    // pci.sys PAGE:0x715a0, 0x1cf0 bytes
    // pci.sys PAGE:0x66d10, 0x1cf0 bytes
    //
    _r72(sdk::unknown_ptr) ptm_control_interface_disable;
    
    // [PciPtmControlInterface_Enable]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69070, 0x1cf0 bytes
    // pci.sys PAGE:0x71760, 0x1cf0 bytes
    // pci.sys PAGE:0x66ed0, 0x1cf0 bytes
    //
    _r73(sdk::unknown_ptr) ptm_control_interface_enable;
    
    // [PciPtmControlInterface_QueryGranularity]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69330, 0x1cf0 bytes
    // pci.sys PAGE:0x71a20, 0x1cf0 bytes
    // pci.sys PAGE:0x67190, 0x1cf0 bytes
    //
    _r74(sdk::unknown_ptr) ptm_control_interface_query_granularity;
    
    // [PciPtmControlInterface_QueryTimeSource]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69380, 0x1cf0 bytes
    // pci.sys PAGE:0x71a70, 0x1cf0 bytes
    // pci.sys PAGE:0x671e0, 0x1cf0 bytes
    //
    _r75(sdk::unknown_ptr) ptm_control_interface_query_time_source;
    
    // [PciPtmControlInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e170, 0x1cf0 bytes
    // pci.sys PAGE:0x43430, 0x1cf0 bytes
    // pci.sys PAGE:0x3c2b0, 0x1cf0 bytes
    //
    _r76(sdk::unknown_ptr) ptm_control_interface_reference;
    
    // [PciPtmDeviceIsValidConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x69420, 0x1cf0 bytes
    // pci.sys PAGE:0x71b10, 0x1cf0 bytes
    // pci.sys PAGE:0x67280, 0x1cf0 bytes
    //
    _r77(sdk::unknown_ptr) ptm_device_is_valid_config;
    
    // [PciPtmIsTimeSourceAux]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6946c, 0x1cf0 bytes
    // pci.sys PAGE:0x71b5c, 0x1cf0 bytes
    // pci.sys PAGE:0x672cc, 0x1cf0 bytes
    //
    _r78(sdk::unknown_ptr) ptm_is_time_source_aux;
    
    // [PciQueryBridgeInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c2d4, 0x1cf0 bytes
    // pci.sys PAGE:0x554f4, 0x1cf0 bytes
    // pci.sys PAGE:0x3e264, 0x1cf0 bytes
    //
    _r79(sdk::unknown_ptr) query_bridge_interface;
    
    // [PciReadDeviceConfigEx]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a430, 0x1cf0 bytes
    // pci.sys .text:0x19e78, 0x1cf0 bytes
    // pci.sys .text:0x18e0, 0x1cf0 bytes
    //
    _r80(sdk::unknown_ptr) read_device_config_ex;
    
    // [PciReadExpressDeviceTypeRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xc374, 0x1cf0 bytes
    // pci.sys .text:0x1da0, 0x1cf0 bytes
    // pci.sys .text:0xdba0, 0x1cf0 bytes
    //
    _r81(sdk::unknown_ptr) read_express_device_type_raw;
    
    // [PciRemoveDeviceFromChildList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x4af18, 0x1d08 bytes
    // pci.sys PAGE:0x3e5ac, 0x1cf0 bytes
    // pci.sys PAGE:0x3c6ec, 0x1cf0 bytes
    //
    _r82(sdk::unknown_ptr) remove_device_from_child_list;
    
    // [PciSdevIdentifierInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x28848, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8b8, 0x1cf0 bytes
    // pci.sys .rdata:0x27850, 0x1cf0 bytes
    //
    _r83(sdk::unknown_ptr) sdev_identifier_interface;
    
    // [PciSdevIdentifierInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x67170, 0x1cf0 bytes
    // pci.sys PAGE:0x6f7d0, 0x1cf0 bytes
    // pci.sys PAGE:0x64fd0, 0x1cf0 bytes
    //
    _r84(sdk::unknown_ptr) sdev_identifier_interface_constructor;
    
    // [PciSdevIdentifierInterface_GetIdentifier]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e120, 0x1cf0 bytes
    // pci.sys PAGE:0x433e0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c260, 0x1cf0 bytes
    //
    _r85(sdk::unknown_ptr) sdev_identifier_interface_get_identifier;
    
    // [PciSetAllocationAttributes]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x50034, 0x1cf0 bytes
    // pci.sys PAGE:0x48144, 0x1cf0 bytes
    // pci.sys PAGE:0x50544, 0x1cf0 bytes
    //
    _r86(sdk::unknown_ptr) set_allocation_attributes;
    
    // [PciSetPowerStateRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x68a0, 0x1cf0 bytes
    // pci.sys .text:0x64f8, 0x1cf0 bytes
    // pci.sys .text:0x7be0, 0x1cf0 bytes
    //
    _r87(sdk::unknown_ptr) set_power_state_raw;
    
    // [SleepstudyHelperInitializeOnce]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x551d0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b420, 0x1cf0 bytes
    // pci.sys PAGE:0x55670, 0x1cf0 bytes
    //
    _r88(sdk::function<uint32_t(union rtl::run_once_t*, void*, void**)>*) sleepstudy_helper_initialize_once;
    
    // [SleepstudyHelperInitializeRunOnce]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x35bc0, 0x1cf0 bytes
    // pci.sys .data:0x39c60, 0x1cf0 bytes
    // pci.sys .data:0x33bc0, 0x1cf0 bytes
    //
    _r89(union rtl::run_once_t*) sleepstudy_helper_initialize_run_once;
    
    // [SleepstudyHelperRoutineBlock]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x35ab0, 0x1cf0 bytes
    // pci.sys .data:0x39b50, 0x1cf0 bytes
    // pci.sys .data:0x33ab0, 0x1cf0 bytes
    //
    _r90(struct wdf::sleepstudy_helper_routine_block_t*) sleepstudy_helper_routine_block;
    
    // [PciStallBetweenPmcsrWrites]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1b690, 0x1cf0 bytes
    // pci.sys .text:0x1bbb8, 0x1cf0 bytes
    // pci.sys .text:0x1b488, 0x1cf0 bytes
    //
    _r91(sdk::unknown_ptr) stall_between_pmcsr_writes;
    
    // [PciStandardCapabilityRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34120, 0x1cf0 bytes
    // pci.sys .data:0x38220, 0x1cf0 bytes
    // pci.sys .data:0x32120, 0x1cf0 bytes
    //
    _r92(sdk::unknown_ptr) standard_capability_registers;
    
    // [PciSystemPrepareRebootForRecovery]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x34610, 0x1cf0 bytes
    // pci.sys .data:0x38668, 0x1cf0 bytes
    // pci.sys .data:0x32610, 0x1cf0 bytes
    //
    _r93(sdk::unknown_ptr) system_prepare_reboot_for_recovery;
    
    // [PciType1_IoBase]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x45ac, 0x1cf0 bytes
    // pci.sys .text:0xc318, 0x1cf0 bytes
    // pci.sys .text:0x5600, 0x1cf0 bytes
    //
    _r94(sdk::unknown_ptr) type1_io_base;
    
    // [PciType1_IoLimit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4c7c, 0x1cf0 bytes
    // pci.sys .text:0xc2f8, 0x1cf0 bytes
    // pci.sys .text:0x5dfc, 0x1cf0 bytes
    //
    _r95(sdk::unknown_ptr) type1_io_limit;
    
    // [PciUnconfigureTraditionalBusNumber]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x6b210, 0x1cf0 bytes
    // pci.sys PAGE:0x744e4, 0x1cf0 bytes
    // pci.sys PAGE:0x69104, 0x1cf0 bytes
    //
    _r96(sdk::unknown_ptr) unconfigure_traditional_bus_number;
    
    // [PciUnlinkResourceHint]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x54edc, 0x1cf0 bytes
    // pci.sys PAGE:0x71424, 0x1cf0 bytes
    // pci.sys PAGE:0x5537c, 0x1cf0 bytes
    //
    _r97(sdk::unknown_ptr) unlink_resource_hint;
    
    // [PciUnregisterBugcheckCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c140, 0x1cf0 bytes
    // pci.sys .text:0x1c870, 0x1cf0 bytes
    // pci.sys .text:0x1bf40, 0x1cf0 bytes
    //
    _r98(sdk::unknown_ptr) unregister_bugcheck_callback;
    
    // [PciUpdateSavedDeviceConfiguration]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x475b0, 0x1cf0 bytes
    // pci.sys PAGE:0x4a318, 0x1cf0 bytes
    // pci.sys PAGE:0x48c50, 0x1cf0 bytes
    //
    _r99(sdk::unknown_ptr) update_saved_device_configuration;
    
    // [PciVirtualizationCheckAcsSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // pci.sys PAGE:0x4e4f0, 0x1d08 bytes
    // pci.sys PAGE:0x6a3e4, 0x1cf0 bytes
    // pci.sys PAGE:0x68244, 0x1cf0 bytes
    //
    _s00(sdk::unknown_ptr) virtualization_check_acs_support;
    
    // [PciWalkDevicePathCheckBusMasterEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5a18, 0x1cf0 bytes
    // pci.sys .text:0xb948, 0x1cf0 bytes
    // pci.sys .text:0x6cf8, 0x1cf0 bytes
    //
    _s01(sdk::unknown_ptr) walk_device_path_check_bus_master_enabled;
    
    // [PciWalkDevicePathCheckBusMasterEnabledCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf128, 0x1cf0 bytes
    // pci.sys .text:0xdd8c, 0x1cf0 bytes
    // pci.sys .text:0x10ff8, 0x1cf0 bytes
    //
    _s02(sdk::unknown_ptr) walk_device_path_check_bus_master_enabled_callback;
    
    // [PciWheaUninit]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x270d8, 0x1cf0 bytes
    // pci.sys .text:0x299c8, 0x1cf0 bytes
    // pci.sys .text:0x26ef8, 0x1cf0 bytes
    //
    _s03(sdk::unknown_ptr) whea_uninit;
    
    // [PciWheaUninitErrorSource]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16a0, 0x1cf0 bytes
    // pci.sys .text:0x1940, 0x1cf0 bytes
    // pci.sys .text:0x1a90, 0x1cf0 bytes
    //
    _s04(sdk::unknown_ptr) whea_uninit_error_source;
    
    // [WPP_RECORDER_SF_dDDiiiii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5504, 0x1cf0 bytes
    // pci.sys .text:0x4360, 0x1cf0 bytes
    // pci.sys .text:0x67e4, 0x1cf0 bytes
    //
    _s05(sdk::unknown_ptr) wpp_recorder_sf_d_d_diiiii;
    
    // [WPP_RECORDER_SF_DDDdD]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5200, 0x1cf0 bytes
    // pci.sys .text:0x7aa8, 0x1cf0 bytes
    // pci.sys .text:0x64e0, 0x1cf0 bytes
    //
    _s06(sdk::unknown_ptr) wpp_recorder_sf_dd_dd_d;
    
    // [WPP_RECORDER_SF_DDDdDd]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5128, 0x1cf0 bytes
    // pci.sys .text:0x7c84, 0x1cf0 bytes
    // pci.sys .text:0x6408, 0x1cf0 bytes
    //
    _s07(sdk::unknown_ptr) wpp_recorder_sf_dd_dd_dd;
    
    // [WPP_RECORDER_SF_DDDdd]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x57a0, 0x1cf0 bytes
    // pci.sys .text:0x7668, 0x1cf0 bytes
    // pci.sys .text:0x6a80, 0x1cf0 bytes
    //
    _s08(sdk::unknown_ptr) wpp_recorder_sf_dd_ddd;
    
    // [WPP_RECORDER_SF_DDDi]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x25170, 0x1cf0 bytes
    // pci.sys .text:0x26b30, 0x1cf0 bytes
    // pci.sys .text:0x24f90, 0x1cf0 bytes
    //
    _s09(sdk::unknown_ptr) wpp_recorder_sf_dd_di;
    
    // [WPP_RECORDER_SF_DDDiii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf358, 0x1cf0 bytes
    // pci.sys .text:0x1cc44, 0x1cf0 bytes
    // pci.sys .text:0x11228, 0x1cf0 bytes
    //
    _s10(sdk::unknown_ptr) wpp_recorder_sf_dd_diii;
    
    // [WPP_RECORDER_SF_DDDsI]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c188, 0x1cf0 bytes
    // pci.sys .text:0x1cd98, 0x1cf0 bytes
    // pci.sys .text:0x1bf88, 0x1cf0 bytes
    //
    _s11(sdk::unknown_ptr) wpp_recorder_sf_dd_ds_i;
    
    // [WPP_RECORDER_SF_DDDsii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c354, 0x1cf0 bytes
    // pci.sys .text:0x1cf64, 0x1cf0 bytes
    // pci.sys .text:0x1c154, 0x1cf0 bytes
    //
    _s12(sdk::unknown_ptr) wpp_recorder_sf_dd_dsii;
    
    // [WPP_RECORDER_SF_DDDDD]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2503c, 0x1cf0 bytes
    // pci.sys .text:0x269fc, 0x1cf0 bytes
    // pci.sys .text:0x24e5c, 0x1cf0 bytes
    //
    _s13(sdk::unknown_ptr) wpp_recorder_sf_ddddd;
    
    // [WPP_RECORDER_SF_Ddi]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2c30, 0x1cf0 bytes
    // pci.sys .text:0x196c0, 0x1cf0 bytes
    // pci.sys .text:0x3bac, 0x1cf0 bytes
    //
    _s14(sdk::unknown_ptr) wpp_recorder_sf_ddi;
    
    // [WPP_RECORDER_SF_ddq]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x25284, 0x1cf0 bytes
    // pci.sys .text:0x26c44, 0x1cf0 bytes
    // pci.sys .text:0x250a4, 0x1cf0 bytes
    //
    _s15(sdk::unknown_ptr) wpp_recorder_sf_ddq;
    
    // [WPP_RECORDER_SF_Di]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x19e60, 0x1cf0 bytes
    // pci.sys .text:0x197b8, 0x1cf0 bytes
    // pci.sys .text:0x19f38, 0x1cf0 bytes
    //
    _s16(sdk::unknown_ptr) wpp_recorder_sf_di;
    
    // [WPP_RECORDER_SF_dii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2537c, 0x1cf0 bytes
    // pci.sys .text:0x26d3c, 0x1cf0 bytes
    // pci.sys .text:0x2519c, 0x1cf0 bytes
    //
    _s17(sdk::unknown_ptr) wpp_recorder_sf_dii;
    
    // [WPP_RECORDER_SF_I]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x19f34, 0x1cf0 bytes
    // pci.sys .text:0x1988c, 0x1cf0 bytes
    // pci.sys .text:0x1a00c, 0x1cf0 bytes
    //
    _s18(sdk::unknown_ptr) wpp_recorder_sf_i;
    
    // [WPP_RECORDER_SF_qDDi]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1be04, 0x1cf0 bytes
    // pci.sys .text:0x1c534, 0x1cf0 bytes
    // pci.sys .text:0x1bbfc, 0x1cf0 bytes
    //
    _s19(sdk::unknown_ptr) wpp_recorder_sf_q_d_di;
    
    // [WPP_RECORDER_SF_qDDii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1bf1c, 0x1cf0 bytes
    // pci.sys .text:0x1c64c, 0x1cf0 bytes
    // pci.sys .text:0x1bd14, 0x1cf0 bytes
    //
    _s20(sdk::unknown_ptr) wpp_recorder_sf_q_d_dii;
    
    // [WPP_RECORDER_SF_qDDD]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c98, 0x1cf0 bytes
    // pci.sys .text:0xa7e4, 0x1cf0 bytes
    // pci.sys .text:0x2088, 0x1cf0 bytes
    //
    _s21(sdk::unknown_ptr) wpp_recorder_sf_q_ddd;
    
    // [WPP_RECORDER_SF_qDDDDDDDDDDDDd]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1bb90, 0x1cf0 bytes
    // pci.sys .text:0x1c1a8, 0x1cf0 bytes
    // pci.sys .text:0x1b988, 0x1cf0 bytes
    //
    _s22(sdk::unknown_ptr) wpp_recorder_sf_q_ddddddddddd_dd;
    
    // [WPP_RECORDER_SF_qDii]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xc458, 0x1cf0 bytes
    // pci.sys .text:0x22d4, 0x1cf0 bytes
    // pci.sys .text:0xde68, 0x1cf0 bytes
    //
    _s23(sdk::unknown_ptr) wpp_recorder_sf_q_dii;
    
    // [WPP_RECORDER_SF_qDsi]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf4ac, 0x1cf0 bytes
    // pci.sys .text:0x1d384, 0x1cf0 bytes
    // pci.sys .text:0x1137c, 0x1cf0 bytes
    //
    _s24(sdk::unknown_ptr) wpp_recorder_sf_q_dsi;
    
    // [WPP_RECORDER_SF_qII]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x24f40, 0x1cf0 bytes
    // pci.sys .text:0x26900, 0x1cf0 bytes
    // pci.sys .text:0x24d60, 0x1cf0 bytes
    //
    _s25(sdk::unknown_ptr) wpp_recorder_sf_q_ii;
    
    // [WPP_RECORDER_SF_ssd]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x586c, 0x1cf0 bytes
    // pci.sys .text:0x2760, 0x1cf0 bytes
    // pci.sys .text:0x6b4c, 0x1cf0 bytes
    //
    _s26(sdk::unknown_ptr) wpp_recorder_sf_ssd;
    
    // [WPP_RECORDER_SF_ssddd]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x26a00, 0x1cf0 bytes
    // pci.sys .text:0x28bbc, 0x1cf0 bytes
    // pci.sys .text:0x26820, 0x1cf0 bytes
    //
    _s27(sdk::unknown_ptr) wpp_recorder_sf_ssddd;
    
    // [PciWriteCommandRegisterRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1aad4, 0x1cf0 bytes
    // pci.sys .text:0x1a574, 0x1cf0 bytes
    // pci.sys .text:0x1a874, 0x1cf0 bytes
    //
    _s28(sdk::unknown_ptr) write_command_register_raw;
    
    // [PciAccessRom]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17de0, 0x1d08 bytes
    // pci.sys .text:0x254d0, 0x1cf0 bytes
    // pci.sys .text:0x27680, 0x1cf0 bytes
    // pci.sys .text:0x252f0, 0x1cf0 bytes
    //
    _s29(sdk::unknown_ptr) access_rom;
    
    // [PciAddBusToTree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38d24, 0x1d08 bytes
    // pci.sys PAGE:0x4a844, 0x1cf0 bytes
    // pci.sys PAGE:0x45e04, 0x1cf0 bytes
    // pci.sys PAGE:0x3e73c, 0x1cf0 bytes
    //
    _s30(sdk::unknown_ptr) add_bus_to_tree;
    
    // [PciAddCommandToAction]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a34, 0x1d08 bytes
    // pci.sys .text:0x1f750, 0x1cf0 bytes
    // pci.sys .text:0x206d0, 0x1cf0 bytes
    // pci.sys .text:0x1f550, 0x1cf0 bytes
    //
    _s31(sdk::unknown_ptr) add_command_to_action;
    
    // [PciAddDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x386c0, 0x1d08 bytes
    // pci.sys PAGE:0x495f0, 0x1cf0 bytes
    // pci.sys PAGE:0x463b0, 0x1cf0 bytes
    // pci.sys PAGE:0x3e800, 0x1cf0 bytes
    //
    _s32(sdk::unknown_ptr) add_device;
    
    // [PciAddOrBacktrackIoAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x473e0, 0x1d08 bytes
    // pci.sys PAGE:0x5d88c, 0x1cf0 bytes
    // pci.sys PAGE:0x64c7c, 0x1cf0 bytes
    // pci.sys PAGE:0x5b7dc, 0x1cf0 bytes
    //
    _s33(sdk::unknown_ptr) add_or_backtrack_io_allocation;
    
    // [PciAdjustPmeEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x118ac, 0x1d08 bytes
    // pci.sys .text:0x2130, 0x1cf0 bytes
    // pci.sys .text:0x1b0a4, 0x1cf0 bytes
    // pci.sys .text:0x2d70, 0x1cf0 bytes
    //
    _s34(sdk::unknown_ptr) adjust_pme_enable;
    
    // [PciAgpTargetInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ad50, 0x1d08 bytes
    // pci.sys .rdata:0x28aa8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ab18, 0x1cf0 bytes
    // pci.sys .rdata:0x27ab0, 0x1cf0 bytes
    //
    _s35(sdk::unknown_ptr) agp_target_interface;
    
    // [PciAgpTargetInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49d20, 0x1d08 bytes
    // pci.sys PAGE:0x607c0, 0x1cf0 bytes
    // pci.sys PAGE:0x67980, 0x1cf0 bytes
    // pci.sys PAGE:0x5e720, 0x1cf0 bytes
    //
    _s36(sdk::unknown_ptr) agp_target_interface_constructor;
    
    // [PciAgpTargetInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49e80, 0x1d08 bytes
    // pci.sys PAGE:0x60950, 0x1cf0 bytes
    // pci.sys PAGE:0x67b10, 0x1cf0 bytes
    // pci.sys PAGE:0x5e8b0, 0x1cf0 bytes
    //
    _s37(sdk::unknown_ptr) agp_target_interface_dereference;
    
    // [PciAgpTargetInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49eb0, 0x1d08 bytes
    // pci.sys PAGE:0x60990, 0x1cf0 bytes
    // pci.sys PAGE:0x67b50, 0x1cf0 bytes
    // pci.sys PAGE:0x5e8f0, 0x1cf0 bytes
    //
    _s38(sdk::unknown_ptr) agp_target_interface_reference;
    
    // [PciAllAliasesAvailable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47528, 0x1d08 bytes
    // pci.sys PAGE:0x5d9e0, 0x1cf0 bytes
    // pci.sys PAGE:0x64dd0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b930, 0x1cf0 bytes
    //
    _s39(sdk::unknown_ptr) all_aliases_available;
    
    // [PciApplyArbiterInitializationHack]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6edc, 0x1d08 bytes
    // pci.sys .text:0xbe88, 0x1cf0 bytes
    // pci.sys .text:0x21ec, 0x1cf0 bytes
    // pci.sys .text:0xd83c, 0x1cf0 bytes
    //
    _s40(sdk::unknown_ptr) apply_arbiter_initialization_hack;
    
    // [PciApplyBrokenVideoHack]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bbb4, 0x1d08 bytes
    // pci.sys PAGE:0x66310, 0x1cf0 bytes
    // pci.sys PAGE:0x6e690, 0x1cf0 bytes
    // pci.sys PAGE:0x64170, 0x1cf0 bytes
    //
    _s41(sdk::unknown_ptr) apply_broken_video_hack;
    
    // [PciApplyHPX]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x316c, 0x1d08 bytes
    // pci.sys .text:0xe5c8, 0x1cf0 bytes
    // pci.sys .text:0xcca8, 0x1cf0 bytes
    // pci.sys .text:0x104f8, 0x1cf0 bytes
    //
    _s42(sdk::unknown_ptr) apply_hpx;
    
    // [PciApplyIdeHacks]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bbfc, 0x1d08 bytes
    // pci.sys PAGE:0x66360, 0x1cf0 bytes
    // pci.sys PAGE:0x6e6e0, 0x1cf0 bytes
    // pci.sys PAGE:0x641c0, 0x1cf0 bytes
    //
    _s43(sdk::unknown_ptr) apply_ide_hacks;
    
    // [PciApplyInitialHacks]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2ec14, 0x1d08 bytes
    // pci.sys PAGE:0x52e60, 0x1cf0 bytes
    // pci.sys PAGE:0x4d6d8, 0x1cf0 bytes
    // pci.sys PAGE:0x53370, 0x1cf0 bytes
    //
    _s44(sdk::unknown_ptr) apply_initial_hacks;
    
    // [PciArbiter_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ea50, 0x1d08 bytes
    // pci.sys PAGE:0x547d0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b020, 0x1cf0 bytes
    // pci.sys PAGE:0x549a0, 0x1cf0 bytes
    //
    _s45(sdk::unknown_ptr) arbiter_constructor;
    
    // [PciArbiter_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f580, 0x1d08 bytes
    // pci.sys PAGE:0x3e080, 0x1cf0 bytes
    // pci.sys PAGE:0x43340, 0x1cf0 bytes
    // pci.sys PAGE:0x3c080, 0x1cf0 bytes
    //
    _s46(sdk::unknown_ptr) arbiter_dereference;
    
    // [PciArbiterInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ad90, 0x1d08 bytes
    // pci.sys .rdata:0x28ae8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ab58, 0x1cf0 bytes
    // pci.sys .rdata:0x27af0, 0x1cf0 bytes
    //
    _s47(sdk::unknown_ptr) arbiter_interface;
    
    // [PciArbiter_PackResource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e770, 0x1d08 bytes
    // pci.sys PAGE:0x52520, 0x1cf0 bytes
    // pci.sys PAGE:0x577a0, 0x1cf0 bytes
    // pci.sys PAGE:0x52a30, 0x1cf0 bytes
    //
    _s48(sdk::unknown_ptr) arbiter_pack_resource;
    
    // [PciArbiter_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c010, 0x1d08 bytes
    // pci.sys PAGE:0x3e090, 0x1cf0 bytes
    // pci.sys PAGE:0x43350, 0x1cf0 bytes
    // pci.sys PAGE:0x3c090, 0x1cf0 bytes
    //
    _s49(sdk::unknown_ptr) arbiter_reference;
    
    // [PciArbiter_ScoreRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c3e0, 0x1d08 bytes
    // pci.sys PAGE:0x50710, 0x1cf0 bytes
    // pci.sys PAGE:0x57210, 0x1cf0 bytes
    // pci.sys PAGE:0x50c20, 0x1cf0 bytes
    //
    _s50(sdk::unknown_ptr) arbiter_score_requirement;
    
    // [PciArbiter_UnpackRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c0e0, 0x1d08 bytes
    // pci.sys PAGE:0x507e0, 0x1cf0 bytes
    // pci.sys PAGE:0x572e0, 0x1cf0 bytes
    // pci.sys PAGE:0x50cf0, 0x1cf0 bytes
    //
    _s51(sdk::unknown_ptr) arbiter_unpack_requirement;
    
    // [PciArbiter_UnpackResource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38400, 0x1d08 bytes
    // pci.sys PAGE:0x54e90, 0x1cf0 bytes
    // pci.sys PAGE:0x5b4f0, 0x1cf0 bytes
    // pci.sys PAGE:0x55330, 0x1cf0 bytes
    //
    _s52(sdk::unknown_ptr) arbiter_unpack_resource;
    
    // [PciArbitrateRequirementInsideBridgeWindow]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x46df4, 0x1d08 bytes
    // pci.sys PAGE:0x51c50, 0x1cf0 bytes
    // pci.sys PAGE:0x57724, 0x1cf0 bytes
    // pci.sys PAGE:0x52160, 0x1cf0 bytes
    //
    _s53(sdk::unknown_ptr) arbitrate_requirement_inside_bridge_window;
    
    // [PciAreBusNumbersConfigured]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3eff8, 0x1d08 bytes
    // pci.sys PAGE:0x54a78, 0x1cf0 bytes
    // pci.sys PAGE:0x5bac8, 0x1cf0 bytes
    // pci.sys PAGE:0x54f18, 0x1cf0 bytes
    //
    _s54(sdk::unknown_ptr) are_bus_numbers_configured;
    
    // [PciAssignSlotResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d8b0, 0x1d08 bytes
    // pci.sys PAGE:0x681f0, 0x1cf0 bytes
    // pci.sys PAGE:0x707d0, 0x1cf0 bytes
    // pci.sys PAGE:0x66050, 0x1cf0 bytes
    //
    _s55(sdk::unknown_ptr) assign_slot_resources;
    
    // [PciAttemptDeviceReset]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4aa68, 0x1d08 bytes
    // pci.sys PAGE:0x61978, 0x1cf0 bytes
    // pci.sys PAGE:0x692d8, 0x1cf0 bytes
    // pci.sys PAGE:0x5f7a8, 0x1cf0 bytes
    //
    _s56(sdk::unknown_ptr) attempt_device_reset;
    
    // [PciBeginStateTransition]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2fdb0, 0x1d08 bytes
    // pci.sys PAGE:0x41e30, 0x1cf0 bytes
    // pci.sys PAGE:0x50df8, 0x1cf0 bytes
    // pci.sys PAGE:0x41ed0, 0x1cf0 bytes
    //
    _s57(sdk::unknown_ptr) begin_state_transition;
    
    // [PciBridgeAddRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47c60, 0x1d08 bytes
    // pci.sys PAGE:0x5edd0, 0x1cf0 bytes
    // pci.sys PAGE:0x656f4, 0x1cf0 bytes
    // pci.sys PAGE:0x5cd20, 0x1cf0 bytes
    //
    _s58(sdk::unknown_ptr) bridge_add_requirements;
    
    // [PciBridgeAssembleCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e170, 0x1d08 bytes
    // pci.sys PAGE:0x4ab00, 0x1cf0 bytes
    // pci.sys PAGE:0x5988c, 0x1cf0 bytes
    // pci.sys PAGE:0x4b6c0, 0x1cf0 bytes
    //
    _s59(sdk::unknown_ptr) bridge_assemble_custom_properties;
    
    // [PciBridgeAssertSecondaryReset]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xdec8, 0x1d08 bytes
    // pci.sys .text:0x16440, 0x1cf0 bytes
    // pci.sys .text:0x14db0, 0x1cf0 bytes
    // pci.sys .text:0x163f0, 0x1cf0 bytes
    //
    _s60(sdk::unknown_ptr) bridge_assert_secondary_reset;
    
    // [PciBridgeComputeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47d9c, 0x1d08 bytes
    // pci.sys PAGE:0x5eed0, 0x1cf0 bytes
    // pci.sys PAGE:0x657f4, 0x1cf0 bytes
    // pci.sys PAGE:0x5ce20, 0x1cf0 bytes
    //
    _s61(sdk::unknown_ptr) bridge_compute_requirements;
    
    // [PciBridgeDeassertSecondaryReset]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xdf3c, 0x1d08 bytes
    // pci.sys .text:0x164c0, 0x1cf0 bytes
    // pci.sys .text:0x14e30, 0x1cf0 bytes
    // pci.sys .text:0x16470, 0x1cf0 bytes
    //
    _s62(sdk::unknown_ptr) bridge_deassert_secondary_reset;
    
    // [PciBridgeFilterRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3dd30, 0x1d08 bytes
    // pci.sys PAGE:0x50cc0, 0x1cf0 bytes
    // pci.sys PAGE:0x58338, 0x1cf0 bytes
    // pci.sys PAGE:0x511d0, 0x1cf0 bytes
    //
    _s63(sdk::unknown_ptr) bridge_filter_requirement;
    
    // [PciBridgeFilterRequirementsList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d9a0, 0x1d08 bytes
    // pci.sys PAGE:0x50910, 0x1cf0 bytes
    // pci.sys PAGE:0x57f6c, 0x1cf0 bytes
    // pci.sys PAGE:0x50e20, 0x1cf0 bytes
    //
    _s64(sdk::unknown_ptr) bridge_filter_requirements_list;
    
    // [PciBridgeGetDefaultRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d680, 0x1d08 bytes
    // pci.sys PAGE:0x4c01c, 0x1cf0 bytes
    // pci.sys PAGE:0x5524c, 0x1cf0 bytes
    // pci.sys PAGE:0x3dfac, 0x1cf0 bytes
    //
    _s65(sdk::unknown_ptr) bridge_get_default_requirements;
    
    // [PciBridgeGetRequirementsForDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48388, 0x1d08 bytes
    // pci.sys PAGE:0x5f648, 0x1cf0 bytes
    // pci.sys PAGE:0x65f70, 0x1cf0 bytes
    // pci.sys PAGE:0x5d598, 0x1cf0 bytes
    //
    _s66(sdk::unknown_ptr) bridge_get_requirements_for_device;
    
    // [PciBridgeInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ac50, 0x1d08 bytes
    // pci.sys .rdata:0x289a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa18, 0x1cf0 bytes
    // pci.sys .rdata:0x279b0, 0x1cf0 bytes
    //
    _s67(sdk::unknown_ptr) bridge_interface;
    
    // [PciBridgeInterface_AriForwardingEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe030, 0x1d08 bytes
    // pci.sys .text:0x165c0, 0x1cf0 bytes
    // pci.sys .text:0x14f30, 0x1cf0 bytes
    // pci.sys .text:0x16570, 0x1cf0 bytes
    //
    _s68(sdk::unknown_ptr) bridge_interface_ari_forwarding_enable;
    
    // [PciBridgeInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x367e0, 0x1d08 bytes
    // pci.sys PAGE:0x48e20, 0x1cf0 bytes
    // pci.sys PAGE:0x45000, 0x1cf0 bytes
    // pci.sys PAGE:0x49810, 0x1cf0 bytes
    //
    _s69(sdk::unknown_ptr) bridge_interface_constructor;
    
    // [PciBridgeInterface_Delay]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe080, 0x1d08 bytes
    // pci.sys .text:0xef80, 0x1cf0 bytes
    // pci.sys .text:0x15210, 0x1cf0 bytes
    // pci.sys .text:0x10e50, 0x1cf0 bytes
    //
    _s70(sdk::unknown_ptr) bridge_interface_delay;
    
    // [PciBridgeInterface_GetPowerParameters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x396c0, 0x1d08 bytes
    // pci.sys PAGE:0x54a30, 0x1cf0 bytes
    // pci.sys PAGE:0x5b880, 0x1cf0 bytes
    // pci.sys PAGE:0x54ed0, 0x1cf0 bytes
    //
    _s71(sdk::unknown_ptr) bridge_interface_get_power_parameters;
    
    // [PciBridgeInterface_ObffControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f60, 0x1d08 bytes
    // pci.sys .text:0xefe0, 0x1cf0 bytes
    // pci.sys .text:0xdd10, 0x1cf0 bytes
    // pci.sys .text:0x10eb0, 0x1cf0 bytes
    //
    _s72(sdk::unknown_ptr) bridge_interface_obff_control;
    
    // [PciBridgeInterface_Stall]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2450, 0x1d08 bytes
    // pci.sys .text:0x16900, 0x1cf0 bytes
    // pci.sys .text:0x152d0, 0x1cf0 bytes
    // pci.sys .text:0x16900, 0x1cf0 bytes
    //
    _s73(sdk::unknown_ptr) bridge_interface_stall;
    
    // [PciBridgeOnVGAPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x866c, 0x1d08 bytes
    // pci.sys .text:0x48f0, 0x1cf0 bytes
    // pci.sys .text:0xb904, 0x1cf0 bytes
    // pci.sys .text:0x552c, 0x1cf0 bytes
    //
    _s74(sdk::unknown_ptr) bridge_on_vga_path;
    
    // [PciBridgeOrderingList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b428, 0x1d08 bytes
    // pci.sys .rdata:0x29588, 0x1cf0 bytes
    // pci.sys .rdata:0x2b928, 0x1cf0 bytes
    // pci.sys .rdata:0x28588, 0x1cf0 bytes
    //
    _s75(sdk::unknown_ptr) bridge_ordering_list;
    
    // [PciBridgeOrderings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x233c0, 0x1d08 bytes
    // pci.sys .data:0x34430, 0x1cf0 bytes
    // pci.sys .data:0x38480, 0x1cf0 bytes
    // pci.sys .data:0x32430, 0x1cf0 bytes
    //
    _s76(sdk::unknown_ptr) bridge_orderings;
    
    // [PciBridgeProcessStartResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39270, 0x1d08 bytes
    // pci.sys PAGE:0x3f054, 0x1cf0 bytes
    // pci.sys PAGE:0x5a88c, 0x1cf0 bytes
    // pci.sys PAGE:0x4c29c, 0x1cf0 bytes
    //
    _s77(sdk::unknown_ptr) bridge_process_start_resources;
    
    // [PciBridgeReevaluateWindows]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48820, 0x1d08 bytes
    // pci.sys PAGE:0x5fc54, 0x1cf0 bytes
    // pci.sys PAGE:0x66588, 0x1cf0 bytes
    // pci.sys PAGE:0x5dba4, 0x1cf0 bytes
    //
    _s78(sdk::unknown_ptr) bridge_reevaluate_windows;
    
    // [PciBridgeStart]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x391a0, 0x1d08 bytes
    // pci.sys PAGE:0x3ef84, 0x1cf0 bytes
    // pci.sys PAGE:0x5a7bc, 0x1cf0 bytes
    // pci.sys PAGE:0x4c1cc, 0x1cf0 bytes
    //
    _s79(sdk::unknown_ptr) bridge_start;
    
    // [PciBridgeUpdateD3Availability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x22dc, 0x1d08 bytes
    // pci.sys .text:0xc6d0, 0x1cf0 bytes
    // pci.sys .text:0x1adc, 0x1cf0 bytes
    // pci.sys .text:0xe0e0, 0x1cf0 bytes
    //
    _s80(sdk::unknown_ptr) bridge_update_d3_availability;
    
    // [PciBuildCurrentResourceList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f170, 0x1d08 bytes
    // pci.sys PAGE:0x42140, 0x1cf0 bytes
    // pci.sys PAGE:0x4ea30, 0x1cf0 bytes
    // pci.sys PAGE:0x42320, 0x1cf0 bytes
    //
    _s81(sdk::unknown_ptr) build_current_resource_list;
    
    // [PciBuildDefaultIoExclusionLists]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x51b60, 0x1d08 bytes
    // pci.sys INIT:0x700e0, 0x1cf0 bytes
    // pci.sys INIT:0x78470, 0x1cf0 bytes
    // pci.sys INIT:0x6e0e0, 0x1cf0 bytes
    //
    _s82(sdk::unknown_ptr) build_default_io_exclusion_lists;
    
    // [PciBuildHackTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x51000, 0x1d08 bytes
    // pci.sys INIT:0x6fa80, 0x1cf0 bytes
    // pci.sys INIT:0x78090, 0x1cf0 bytes
    // pci.sys INIT:0x6d154, 0x1cf0 bytes
    //
    _s83(sdk::unknown_ptr) build_hack_table;
    
    // [PciBuildRequirementsList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x32800, 0x1d08 bytes
    // pci.sys PAGE:0x46cf0, 0x1cf0 bytes
    // pci.sys PAGE:0x4a600, 0x1cf0 bytes
    // pci.sys PAGE:0x47610, 0x1cf0 bytes
    //
    _s84(sdk::unknown_ptr) build_requirements_list;
    
    // [PciBusAffectedByConsoleLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3694, 0x1d08 bytes
    // pci.sys .text:0x60fc, 0x1cf0 bytes
    // pci.sys .text:0xb8ec, 0x1cf0 bytes
    // pci.sys .text:0x7448, 0x1cf0 bytes
    //
    _s85(sdk::unknown_ptr) bus_affected_by_console_lock;
    
    // [PciBus_ArmForWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x73e0, 0x1d08 bytes
    // pci.sys .text:0x2294, 0x1cf0 bytes
    // pci.sys .text:0x16ca8, 0x1cf0 bytes
    // pci.sys .text:0x2ed4, 0x1cf0 bytes
    //
    _s86(sdk::unknown_ptr) bus_arm_for_wake;
    
    // [PciBus_CancelRemove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49a20, 0x1d08 bytes
    // pci.sys PAGE:0x60240, 0x1cf0 bytes
    // pci.sys PAGE:0x66bb0, 0x1cf0 bytes
    // pci.sys PAGE:0x5e190, 0x1cf0 bytes
    //
    _s87(sdk::unknown_ptr) bus_cancel_remove;
    
    // [PciBus_CancelStop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49a40, 0x1d08 bytes
    // pci.sys PAGE:0x60260, 0x1cf0 bytes
    // pci.sys PAGE:0x66bd0, 0x1cf0 bytes
    // pci.sys PAGE:0x5e1b0, 0x1cf0 bytes
    //
    _s88(sdk::unknown_ptr) bus_cancel_stop;
    
    // [PciBus_CompleteWWPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf1ec, 0x1d08 bytes
    // pci.sys .text:0x18298, 0x1cf0 bytes
    // pci.sys .text:0x16e24, 0x1cf0 bytes
    // pci.sys .text:0x18304, 0x1cf0 bytes
    //
    _s89(sdk::unknown_ptr) bus_complete_ww_passive;
    
    // [PciBus_ConventionalWakeTriggered]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf280, 0x1d08 bytes
    // pci.sys .text:0x18354, 0x1cf0 bytes
    // pci.sys .text:0x16ee0, 0x1cf0 bytes
    // pci.sys .text:0x183c0, 0x1cf0 bytes
    //
    _s90(sdk::unknown_ptr) bus_conventional_wake_triggered;
    
    // [PciBusDevicePowerNotRequired]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xeeb0, 0x1d08 bytes
    // pci.sys .text:0x17de0, 0x1cf0 bytes
    // pci.sys .text:0x16890, 0x1cf0 bytes
    // pci.sys .text:0x17e20, 0x1cf0 bytes
    //
    _s91(sdk::unknown_ptr) bus_device_power_not_required;
    
    // [PciBusDevicePowerRequired]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xef10, 0x1d08 bytes
    // pci.sys .text:0x17e50, 0x1cf0 bytes
    // pci.sys .text:0x16910, 0x1cf0 bytes
    // pci.sys .text:0x17ea0, 0x1cf0 bytes
    //
    _s92(sdk::unknown_ptr) bus_device_power_required;
    
    // [PciBus_DeviceUsageNotification]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38f90, 0x1d08 bytes
    // pci.sys PAGE:0x4a4b0, 0x1cf0 bytes
    // pci.sys PAGE:0x43800, 0x1cf0 bytes
    // pci.sys PAGE:0x4a7f0, 0x1cf0 bytes
    //
    _s93(sdk::unknown_ptr) bus_device_usage_notification;
    
    // [PciBus_DisarmForWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf3ac, 0x1d08 bytes
    // pci.sys .text:0x184cc, 0x1cf0 bytes
    // pci.sys .text:0x17058, 0x1cf0 bytes
    // pci.sys .text:0x18538, 0x1cf0 bytes
    //
    _s94(sdk::unknown_ptr) bus_disarm_for_wake;
    
    // [PciBus_DispatchPnpTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1a2a0, 0x1d08 bytes
    // pci.sys .rdata:0x280f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a290, 0x1cf0 bytes
    // pci.sys .rdata:0x270f0, 0x1cf0 bytes
    //
    _s95(sdk::unknown_ptr) bus_dispatch_pnp_table;
    
    // [PciBus_DispatchPowerTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b330, 0x1d08 bytes
    // pci.sys .rdata:0x29510, 0x1cf0 bytes
    // pci.sys .rdata:0x2b5a0, 0x1cf0 bytes
    // pci.sys .rdata:0x28510, 0x1cf0 bytes
    //
    _s96(sdk::unknown_ptr) bus_dispatch_power_table;
    
    // [PciBus_FilterResourceRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d920, 0x1d08 bytes
    // pci.sys PAGE:0x50880, 0x1cf0 bytes
    // pci.sys PAGE:0x57ee0, 0x1cf0 bytes
    // pci.sys PAGE:0x50d90, 0x1cf0 bytes
    //
    _s97(sdk::unknown_ptr) bus_filter_resource_requirements;
    
    // [PciBus_GenericWakePower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf420, 0x1d08 bytes
    // pci.sys .text:0x18560, 0x1cf0 bytes
    // pci.sys .text:0x170ec, 0x1cf0 bytes
    // pci.sys .text:0x185cc, 0x1cf0 bytes
    //
    _s98(sdk::unknown_ptr) bus_generic_wake_power;
    
    // [PciBusGetNextSlotNumber]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4800, 0x1d08 bytes
    // pci.sys .text:0x7e50, 0x1cf0 bytes
    // pci.sys .text:0x4510, 0x1cf0 bytes
    // pci.sys .text:0x9260, 0x1cf0 bytes
    //
    _s99(sdk::unknown_ptr) bus_get_next_slot_number;
    
    // [PciBusGetSecondaryInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d7c4, 0x1d08 bytes
    // pci.sys PAGE:0x4b800, 0x1cf0 bytes
    // pci.sys PAGE:0x5b520, 0x1cf0 bytes
    // pci.sys PAGE:0x3e2d4, 0x1cf0 bytes
    //
    _t00(sdk::unknown_ptr) bus_get_secondary_interface;
    
    // [PciBusHandleSystemPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xef64, 0x1d08 bytes
    // pci.sys .text:0x17ebc, 0x1cf0 bytes
    // pci.sys .text:0x16984, 0x1cf0 bytes
    // pci.sys .text:0x17f14, 0x1cf0 bytes
    //
    _t01(sdk::unknown_ptr) bus_handle_system_power;
    
    // [PciBusHandlerInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ad70, 0x1d08 bytes
    // pci.sys .rdata:0x28ac8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ab38, 0x1cf0 bytes
    // pci.sys .rdata:0x27ad0, 0x1cf0 bytes
    //
    _t02(sdk::unknown_ptr) bus_handler_interface;
    
    // [PciBusInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x31ce0, 0x1d08 bytes
    // pci.sys PAGE:0x52de0, 0x1cf0 bytes
    // pci.sys PAGE:0x59650, 0x1cf0 bytes
    // pci.sys PAGE:0x532f0, 0x1cf0 bytes
    //
    _t03(sdk::unknown_ptr) bus_interface_constructor;
    
    // [PciBusInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9380, 0x1d08 bytes
    // pci.sys .text:0x1640, 0x1cf0 bytes
    // pci.sys .text:0x18e0, 0x1cf0 bytes
    // pci.sys .text:0x16e0, 0x1cf0 bytes
    //
    _t04(sdk::unknown_ptr) bus_interface_dereference;
    
    // [PciBusInterface_GetBusData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1010, 0x1d08 bytes
    // pci.sys .text:0x1010, 0x1cf0 bytes
    // pci.sys .text:0x1010, 0x1cf0 bytes
    // pci.sys .text:0x1010, 0x1cf0 bytes
    //
    _t05(sdk::unknown_ptr) bus_interface_get_bus_data;
    
    // [PciBusInterface_GetDmaAdapter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f1c0, 0x1d08 bytes
    // pci.sys PAGE:0x54940, 0x1cf0 bytes
    // pci.sys PAGE:0x5a750, 0x1cf0 bytes
    // pci.sys PAGE:0x54de0, 0x1cf0 bytes
    //
    _t06(sdk::unknown_ptr) bus_interface_get_dma_adapter;
    
    // [PciBusInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9390, 0x1d08 bytes
    // pci.sys .text:0x1650, 0x1cf0 bytes
    // pci.sys .text:0x18f0, 0x1cf0 bytes
    // pci.sys .text:0x16f0, 0x1cf0 bytes
    //
    _t07(sdk::unknown_ptr) bus_interface_reference;
    
    // [PciBusInterface_SetBusData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7940, 0x1d08 bytes
    // pci.sys .text:0xb750, 0x1cf0 bytes
    // pci.sys .text:0xc660, 0x1cf0 bytes
    // pci.sys .text:0xcfe0, 0x1cf0 bytes
    //
    _t08(sdk::unknown_ptr) bus_interface_set_bus_data;
    
    // [PciBusInterface_TranslateBusAddress]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f4a0, 0x1d08 bytes
    // pci.sys PAGE:0x556b0, 0x1cf0 bytes
    // pci.sys PAGE:0x5ba30, 0x1cf0 bytes
    // pci.sys PAGE:0x55c40, 0x1cf0 bytes
    //
    _t09(sdk::unknown_ptr) bus_interface_translate_bus_address;
    
    // [PciBus_LeavingS0DxDisarming]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf480, 0x1d08 bytes
    // pci.sys .text:0x186d0, 0x1cf0 bytes
    // pci.sys .text:0x17250, 0x1cf0 bytes
    // pci.sys .text:0x18730, 0x1cf0 bytes
    //
    _t10(sdk::unknown_ptr) bus_leaving_s0_dx_disarming;
    
    // [PciBusLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234e0, 0x1d08 bytes
    // pci.sys .data:0x34720, 0x1cf0 bytes
    // pci.sys .data:0x38780, 0x1cf0 bytes
    // pci.sys .data:0x32720, 0x1cf0 bytes
    //
    _t11(sdk::unknown_ptr) bus_lock;
    
    // [PciBus_PoFxActive]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf4d0, 0x1d08 bytes
    // pci.sys .text:0x2870, 0x1cf0 bytes
    // pci.sys .text:0x172c0, 0x1cf0 bytes
    // pci.sys .text:0x37c0, 0x1cf0 bytes
    //
    _t12(sdk::unknown_ptr) bus_po_fx_active;
    
    // [PciBus_PoFxIdle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x72e0, 0x1d08 bytes
    // pci.sys .text:0x2ac0, 0x1cf0 bytes
    // pci.sys .text:0x17a70, 0x1cf0 bytes
    // pci.sys .text:0x3a20, 0x1cf0 bytes
    //
    _t13(sdk::unknown_ptr) bus_po_fx_idle;
    
    // [PciBus_PoFxIdleState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8330, 0x1d08 bytes
    // pci.sys .text:0x2bc0, 0x1cf0 bytes
    // pci.sys .text:0x17b10, 0x1cf0 bytes
    // pci.sys .text:0x3b30, 0x1cf0 bytes
    //
    _t14(sdk::unknown_ptr) bus_po_fx_idle_state;
    
    // [PciBus_PowerCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf530, 0x1d08 bytes
    // pci.sys .text:0x18df0, 0x1cf0 bytes
    // pci.sys .text:0x17b90, 0x1cf0 bytes
    // pci.sys .text:0x18e50, 0x1cf0 bytes
    //
    _t15(sdk::unknown_ptr) bus_power_completion;
    
    // [PciBus_PowerDereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6350, 0x1d08 bytes
    // pci.sys .text:0x5c00, 0x1cf0 bytes
    // pci.sys .text:0x7f00, 0x1cf0 bytes
    // pci.sys .text:0x6ee0, 0x1cf0 bytes
    //
    _t16(sdk::unknown_ptr) bus_power_dereference;
    
    // [PciBusPowerDown]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xefd0, 0x1d08 bytes
    // pci.sys .text:0x17f38, 0x1cf0 bytes
    // pci.sys .text:0x16a00, 0x1cf0 bytes
    // pci.sys .text:0x17f90, 0x1cf0 bytes
    //
    _t17(sdk::unknown_ptr) bus_power_down;
    
    // [PciBus_PowerReference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x63f0, 0x1d08 bytes
    // pci.sys .text:0xbbd0, 0x1cf0 bytes
    // pci.sys .text:0x2cc0, 0x1cf0 bytes
    // pci.sys .text:0xd510, 0x1cf0 bytes
    //
    _t18(sdk::unknown_ptr) bus_power_reference;
    
    // [BusPowerRegisterPep]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38550, 0x1d08 bytes
    // pci.sys PAGE:0x3f138, 0x1cf0 bytes
    // pci.sys PAGE:0x52e08, 0x1cf0 bytes
    // pci.sys PAGE:0x4b4e8, 0x1cf0 bytes
    //
    _t19(sdk::unknown_ptr) bus_power_register_pep;
    
    // [PciBus_PowerStateM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf614, 0x1d08 bytes
    // pci.sys .text:0x18ef8, 0x1cf0 bytes
    // pci.sys .text:0x17ca8, 0x1cf0 bytes
    // pci.sys .text:0x18f64, 0x1cf0 bytes
    //
    _t20(sdk::unknown_ptr) bus_power_state_m;
    
    // [BusPowerUnregisterPep]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49c54, 0x1d08 bytes
    // pci.sys PAGE:0x60550, 0x1cf0 bytes
    // pci.sys PAGE:0x67440, 0x1cf0 bytes
    // pci.sys PAGE:0x5e4a0, 0x1cf0 bytes
    //
    _t21(sdk::unknown_ptr) bus_power_unregister_pep;
    
    // [PciBusPowerUpCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf030, 0x1d08 bytes
    // pci.sys .text:0x17fa0, 0x1cf0 bytes
    // pci.sys .text:0x16a70, 0x1cf0 bytes
    // pci.sys .text:0x18000, 0x1cf0 bytes
    //
    _t22(sdk::unknown_ptr) bus_power_up_completion;
    
    // [PciBus_ProcessDeferredPmeEvents]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf778, 0x1d08 bytes
    // pci.sys .text:0x2a90, 0x1cf0 bytes
    // pci.sys .text:0x17e8c, 0x1cf0 bytes
    // pci.sys .text:0x39f0, 0x1cf0 bytes
    //
    _t23(sdk::unknown_ptr) bus_process_deferred_pme_events;
    
    // [PciBus_QueryCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e9d0, 0x1d08 bytes
    // pci.sys PAGE:0x52cd0, 0x1cf0 bytes
    // pci.sys PAGE:0x5a990, 0x1cf0 bytes
    // pci.sys PAGE:0x531e0, 0x1cf0 bytes
    //
    _t24(sdk::unknown_ptr) bus_query_capabilities;
    
    // [PciBus_QueryDeviceRelations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37320, 0x1d08 bytes
    // pci.sys PAGE:0x41890, 0x1cf0 bytes
    // pci.sys PAGE:0x51b60, 0x1cf0 bytes
    // pci.sys PAGE:0x41760, 0x1cf0 bytes
    //
    _t25(sdk::unknown_ptr) bus_query_device_relations;
    
    // [PciBus_QueryDeviceState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f140, 0x1d08 bytes
    // pci.sys PAGE:0x549c0, 0x1cf0 bytes
    // pci.sys PAGE:0x5a960, 0x1cf0 bytes
    // pci.sys PAGE:0x54e60, 0x1cf0 bytes
    //
    _t26(sdk::unknown_ptr) bus_query_device_state;
    
    // [PciBus_QueryInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x31670, 0x1d08 bytes
    // pci.sys PAGE:0x4e1d0, 0x1cf0 bytes
    // pci.sys PAGE:0x55c10, 0x1cf0 bytes
    // pci.sys PAGE:0x4e6e0, 0x1cf0 bytes
    //
    _t27(sdk::unknown_ptr) bus_query_interface;
    
    // [PciBus_QueryLegacyBusInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e900, 0x1d08 bytes
    // pci.sys PAGE:0x53820, 0x1cf0 bytes
    // pci.sys PAGE:0x5a170, 0x1cf0 bytes
    // pci.sys PAGE:0x53c30, 0x1cf0 bytes
    //
    _t28(sdk::unknown_ptr) bus_query_legacy_bus_information;
    
    // [PciBus_QueryPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf8a0, 0x1d08 bytes
    // pci.sys .text:0x190b0, 0x1cf0 bytes
    // pci.sys .text:0x17ef0, 0x1cf0 bytes
    // pci.sys .text:0x19150, 0x1cf0 bytes
    //
    _t29(sdk::unknown_ptr) bus_query_power;
    
    // [PciBus_QueryRemove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49a90, 0x1d08 bytes
    // pci.sys PAGE:0x602b0, 0x1cf0 bytes
    // pci.sys PAGE:0x66c20, 0x1cf0 bytes
    // pci.sys PAGE:0x5e200, 0x1cf0 bytes
    //
    _t30(sdk::unknown_ptr) bus_query_remove;
    
    // [PciBus_QueryStop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49aa0, 0x1d08 bytes
    // pci.sys PAGE:0x602d0, 0x1cf0 bytes
    // pci.sys PAGE:0x66c40, 0x1cf0 bytes
    // pci.sys PAGE:0x5e220, 0x1cf0 bytes
    //
    _t31(sdk::unknown_ptr) bus_query_stop;
    
    // [PciBus_Remove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xea80, 0x1d08 bytes
    // pci.sys .text:0x177d0, 0x1cf0 bytes
    // pci.sys .text:0x160d0, 0x1cf0 bytes
    // pci.sys .text:0x17810, 0x1cf0 bytes
    //
    _t32(sdk::unknown_ptr) bus_remove;
    
    // [PciBus_RetireChildPowerIrps]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf98c, 0x1d08 bytes
    // pci.sys .text:0xe130, 0x1cf0 bytes
    // pci.sys .text:0x17f84, 0x1cf0 bytes
    // pci.sys .text:0x10064, 0x1cf0 bytes
    //
    _t33(sdk::unknown_ptr) bus_retire_child_power_irps;
    
    // [PciBus_RunDownWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49cac, 0x1d08 bytes
    // pci.sys PAGE:0x605c4, 0x1cf0 bytes
    // pci.sys PAGE:0x674c0, 0x1cf0 bytes
    // pci.sys PAGE:0x5e520, 0x1cf0 bytes
    //
    _t34(sdk::unknown_ptr) bus_run_down_wake;
    
    // [PciBus_S0Disarmed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfbd0, 0x1d08 bytes
    // pci.sys .text:0x19340, 0x1cf0 bytes
    // pci.sys .text:0x18270, 0x1cf0 bytes
    // pci.sys .text:0x193e0, 0x1cf0 bytes
    //
    _t35(sdk::unknown_ptr) bus_s0_disarmed;
    
    // [PciBus_S0Dozing]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfc20, 0x1d08 bytes
    // pci.sys .text:0x193b0, 0x1cf0 bytes
    // pci.sys .text:0x182e0, 0x1cf0 bytes
    // pci.sys .text:0x19450, 0x1cf0 bytes
    //
    _t36(sdk::unknown_ptr) bus_s0_dozing;
    
    // [PciBus_S0DozingArmed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfc40, 0x1d08 bytes
    // pci.sys .text:0x193d0, 0x1cf0 bytes
    // pci.sys .text:0x18300, 0x1cf0 bytes
    // pci.sys .text:0x19470, 0x1cf0 bytes
    //
    _t37(sdk::unknown_ptr) bus_s0_dozing_armed;
    
    // [PciBus_S0Off]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfc70, 0x1d08 bytes
    // pci.sys .text:0x19410, 0x1cf0 bytes
    // pci.sys .text:0x18340, 0x1cf0 bytes
    // pci.sys .text:0x194b0, 0x1cf0 bytes
    //
    _t38(sdk::unknown_ptr) bus_s0_off;
    
    // [PciBus_S0Stirring]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfc70, 0x1d08 bytes
    // pci.sys .text:0x19410, 0x1cf0 bytes
    // pci.sys .text:0x18340, 0x1cf0 bytes
    // pci.sys .text:0x194b0, 0x1cf0 bytes
    //
    _t39(sdk::unknown_ptr) bus_s0_stirring;
    
    // [PciBus_S0D0]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfb30, 0x1d08 bytes
    // pci.sys .text:0x191d0, 0x1cf0 bytes
    // pci.sys .text:0x18100, 0x1cf0 bytes
    // pci.sys .text:0x19270, 0x1cf0 bytes
    //
    _t40(sdk::unknown_ptr) bus_s0d0;
    
    // [PciBus_SendD0Unlocked]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfc88, 0x1d08 bytes
    // pci.sys .text:0x1942c, 0x1cf0 bytes
    // pci.sys .text:0x18418, 0x1cf0 bytes
    // pci.sys .text:0x194cc, 0x1cf0 bytes
    //
    _t41(sdk::unknown_ptr) bus_send_d0_unlocked;
    
    // [PciBus_SendDx]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfd14, 0x1d08 bytes
    // pci.sys .text:0x194e8, 0x1cf0 bytes
    // pci.sys .text:0x184ec, 0x1cf0 bytes
    // pci.sys .text:0x1959c, 0x1cf0 bytes
    //
    _t42(sdk::unknown_ptr) bus_send_dx;
    
    // [PciBus_SendWWPassive]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfe3c, 0x1d08 bytes
    // pci.sys .text:0x1965c, 0x1cf0 bytes
    // pci.sys .text:0x18668, 0x1cf0 bytes
    // pci.sys .text:0x19718, 0x1cf0 bytes
    //
    _t43(sdk::unknown_ptr) bus_send_ww_passive;
    
    // [PciBus_SetPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xff00, 0x1d08 bytes
    // pci.sys .text:0x197a0, 0x1cf0 bytes
    // pci.sys .text:0x187d0, 0x1cf0 bytes
    // pci.sys .text:0x19870, 0x1cf0 bytes
    //
    _t44(sdk::unknown_ptr) bus_set_power;
    
    // [PciBusShouldBeDisabledByConsoleLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x112fc, 0x1d08 bytes
    // pci.sys .text:0x1ab04, 0x1cf0 bytes
    // pci.sys .text:0x1a5a4, 0x1cf0 bytes
    // pci.sys .text:0x1a8a4, 0x1cf0 bytes
    //
    _t45(sdk::unknown_ptr) bus_should_be_disabled_by_console_lock;
    
    // [PciBus_SignalWorkerRetireD0Irps]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1008c, 0x1d08 bytes
    // pci.sys .text:0x2998, 0x1cf0 bytes
    // pci.sys .text:0x189fc, 0x1cf0 bytes
    // pci.sys .text:0x38f8, 0x1cf0 bytes
    //
    _t46(sdk::unknown_ptr) bus_signal_worker_retire_d0_irps;
    
    // [PciBus_Start]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x379d0, 0x1d08 bytes
    // pci.sys PAGE:0x3f940, 0x1cf0 bytes
    // pci.sys PAGE:0x52410, 0x1cf0 bytes
    // pci.sys PAGE:0x4ab90, 0x1cf0 bytes
    //
    _t47(sdk::unknown_ptr) bus_start;
    
    // [PciBus_State]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b010, 0x1d08 bytes
    // pci.sys .rdata:0x291f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2b280, 0x1cf0 bytes
    // pci.sys .rdata:0x27b10, 0x1cf0 bytes
    //
    _t48(sdk::unknown_ptr) bus_state;
    
    // [PciBus_StirringD0]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10140, 0x1d08 bytes
    // pci.sys .text:0x19970, 0x1cf0 bytes
    // pci.sys .text:0x18b10, 0x1cf0 bytes
    // pci.sys .text:0x19a40, 0x1cf0 bytes
    //
    _t49(sdk::unknown_ptr) bus_stirring_d0;
    
    // [PciBus_StirringDisarmed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xfbd0, 0x1d08 bytes
    // pci.sys .text:0x19340, 0x1cf0 bytes
    // pci.sys .text:0x18270, 0x1cf0 bytes
    // pci.sys .text:0x193e0, 0x1cf0 bytes
    //
    _t50(sdk::unknown_ptr) bus_stirring_disarmed;
    
    // [PciBus_Stop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49bb0, 0x1d08 bytes
    // pci.sys PAGE:0x60460, 0x1cf0 bytes
    // pci.sys PAGE:0x66dd0, 0x1cf0 bytes
    // pci.sys PAGE:0x5e3b0, 0x1cf0 bytes
    //
    _t51(sdk::unknown_ptr) bus_stop;
    
    // [PciBus_SurpriseRemoval]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49bf0, 0x1d08 bytes
    // pci.sys PAGE:0x604b0, 0x1cf0 bytes
    // pci.sys PAGE:0x66e20, 0x1cf0 bytes
    // pci.sys PAGE:0x5e400, 0x1cf0 bytes
    //
    _t52(sdk::unknown_ptr) bus_surprise_removal;
    
    // [PciBus_Sx]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10190, 0x1d08 bytes
    // pci.sys .text:0x199d0, 0x1cf0 bytes
    // pci.sys .text:0x18b70, 0x1cf0 bytes
    // pci.sys .text:0x19aa0, 0x1cf0 bytes
    //
    _t53(sdk::unknown_ptr) bus_sx;
    
    // [PciBus_SxArmed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x101e0, 0x1d08 bytes
    // pci.sys .text:0x19a20, 0x1cf0 bytes
    // pci.sys .text:0x18bc0, 0x1cf0 bytes
    // pci.sys .text:0x19af0, 0x1cf0 bytes
    //
    _t54(sdk::unknown_ptr) bus_sx_armed;
    
    // [PciBus_SxOn]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10200, 0x1d08 bytes
    // pci.sys .text:0x19a50, 0x1cf0 bytes
    // pci.sys .text:0x18bf0, 0x1cf0 bytes
    // pci.sys .text:0x19b20, 0x1cf0 bytes
    //
    _t55(sdk::unknown_ptr) bus_sx_on;
    
    // [PciBusSystemPowerCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xf120, 0x1d08 bytes
    // pci.sys .text:0x180b0, 0x1cf0 bytes
    // pci.sys .text:0x16bb0, 0x1cf0 bytes
    // pci.sys .text:0x18110, 0x1cf0 bytes
    //
    _t56(sdk::unknown_ptr) bus_system_power_completion;
    
    // [PciBus_WaitTimeForBusSettle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6e24, 0x1d08 bytes
    // pci.sys .text:0x5ae8, 0x1cf0 bytes
    // pci.sys .text:0x9b3c, 0x1cf0 bytes
    // pci.sys .text:0x6dc8, 0x1cf0 bytes
    //
    _t57(sdk::unknown_ptr) bus_wait_time_for_bus_settle;
    
    // [PciBus_WaitWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10220, 0x1d08 bytes
    // pci.sys .text:0x19a80, 0x1cf0 bytes
    // pci.sys .text:0x18c20, 0x1cf0 bytes
    // pci.sys .text:0x19b50, 0x1cf0 bytes
    //
    _t58(sdk::unknown_ptr) bus_wait_wake;
    
    // [PciBus_WaitWakeCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10240, 0x1d08 bytes
    // pci.sys .text:0x19ac0, 0x1cf0 bytes
    // pci.sys .text:0x18c60, 0x1cf0 bytes
    // pci.sys .text:0x19b90, 0x1cf0 bytes
    //
    _t59(sdk::unknown_ptr) bus_wait_wake_completion;
    
    // [PciBus_WakeStateM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7460, 0x1d08 bytes
    // pci.sys .text:0x2314, 0x1cf0 bytes
    // pci.sys .text:0x18e30, 0x1cf0 bytes
    // pci.sys .text:0x2f54, 0x1cf0 bytes
    //
    _t60(sdk::unknown_ptr) bus_wake_state_m;
    
    // [PciCacheLegacyDeviceRouting]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c800, 0x1d08 bytes
    // pci.sys PAGE:0x672f8, 0x1cf0 bytes
    // pci.sys PAGE:0x6f928, 0x1cf0 bytes
    // pci.sys PAGE:0x65158, 0x1cf0 bytes
    //
    _t61(sdk::unknown_ptr) cache_legacy_device_routing;
    
    // [PciCallDownIrpStack]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2fd00, 0x1d08 bytes
    // pci.sys PAGE:0x4ed30, 0x1cf0 bytes
    // pci.sys PAGE:0x52fdc, 0x1cf0 bytes
    // pci.sys PAGE:0x4f240, 0x1cf0 bytes
    //
    _t62(sdk::unknown_ptr) call_down_irp_stack;
    
    // [CallbackReg]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23010, 0x1d08 bytes
    // pci.sys .data:0x341c0, 0x1cf0 bytes
    // pci.sys .data:0x38010, 0x1cf0 bytes
    // pci.sys .data:0x321c0, 0x1cf0 bytes
    //
    _t63(sdk::unknown_ptr) callback_reg;
    
    // [PciCanDisableDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8628, 0x1d08 bytes
    // pci.sys .text:0x1ab94, 0x1cf0 bytes
    // pci.sys .text:0xd640, 0x1cf0 bytes
    // pci.sys .text:0x1a934, 0x1cf0 bytes
    //
    _t64(sdk::unknown_ptr) can_disable_device;
    
    // [PciCanDisableDeviceForPowerDown]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x113a4, 0x1d08 bytes
    // pci.sys .text:0x3560, 0x1cf0 bytes
    // pci.sys .text:0x8938, 0x1cf0 bytes
    // pci.sys .text:0x444c, 0x1cf0 bytes
    //
    _t65(sdk::unknown_ptr) can_disable_device_for_power_down;
    
    // [PciCancelStateTransition]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x375f4, 0x1d08 bytes
    // pci.sys PAGE:0x41d68, 0x1cf0 bytes
    // pci.sys PAGE:0x51a80, 0x1cf0 bytes
    // pci.sys PAGE:0x41d18, 0x1cf0 bytes
    //
    _t66(sdk::unknown_ptr) cancel_state_transition;
    
    // [PciCaptureBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48b4c, 0x1d08 bytes
    // pci.sys PAGE:0x5ffbc, 0x1cf0 bytes
    // pci.sys PAGE:0x6692c, 0x1cf0 bytes
    // pci.sys PAGE:0x5df0c, 0x1cf0 bytes
    //
    _t67(sdk::unknown_ptr) capture_bus_numbers;
    
    // [PciCardbusInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c380, 0x1d08 bytes
    // pci.sys PAGE:0x66db0, 0x1cf0 bytes
    // pci.sys PAGE:0x6f290, 0x1cf0 bytes
    // pci.sys PAGE:0x64c10, 0x1cf0 bytes
    //
    _t68(sdk::unknown_ptr) cardbus_interface_constructor;
    
    // [PciCardbusInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9410, 0x1d08 bytes
    // pci.sys .text:0x16d0, 0x1cf0 bytes
    // pci.sys .text:0x1970, 0x1cf0 bytes
    // pci.sys .text:0x1ac0, 0x1cf0 bytes
    //
    _t69(sdk::unknown_ptr) cardbus_interface_dereference;
    
    // [PciCardbusInterface_GetLocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c3e0, 0x1d08 bytes
    // pci.sys PAGE:0x66e20, 0x1cf0 bytes
    // pci.sys PAGE:0x6f300, 0x1cf0 bytes
    // pci.sys PAGE:0x64c80, 0x1cf0 bytes
    //
    _t70(sdk::unknown_ptr) cardbus_interface_get_location;
    
    // [PciCardbusInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9420, 0x1d08 bytes
    // pci.sys .text:0x16e0, 0x1cf0 bytes
    // pci.sys .text:0x1980, 0x1cf0 bytes
    // pci.sys .text:0x1ad0, 0x1cf0 bytes
    //
    _t71(sdk::unknown_ptr) cardbus_interface_reference;
    
    // [PciCardbusPrivateInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ad10, 0x1d08 bytes
    // pci.sys .rdata:0x28a68, 0x1cf0 bytes
    // pci.sys .rdata:0x2aad8, 0x1cf0 bytes
    // pci.sys .rdata:0x27a70, 0x1cf0 bytes
    //
    _t72(sdk::unknown_ptr) cardbus_private_interface;
    
    // [PciCheckDevicePresence]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c430, 0x1d08 bytes
    // pci.sys PAGE:0x66e7c, 0x1cf0 bytes
    // pci.sys PAGE:0x6f35c, 0x1cf0 bytes
    // pci.sys PAGE:0x64cdc, 0x1cf0 bytes
    //
    _t73(sdk::unknown_ptr) check_device_presence;
    
    // [PciCleanupCtrlDevExt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49fb0, 0x1d08 bytes
    // pci.sys PAGE:0x60a64, 0x1cf0 bytes
    // pci.sys PAGE:0x67c24, 0x1cf0 bytes
    // pci.sys PAGE:0x5e9c4, 0x1cf0 bytes
    //
    _t74(sdk::unknown_ptr) cleanup_ctrl_dev_ext;
    
    // [PciCommitStateTransition]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38424, 0x1d08 bytes
    // pci.sys PAGE:0x41cdc, 0x1cf0 bytes
    // pci.sys PAGE:0x50d64, 0x1cf0 bytes
    // pci.sys PAGE:0x41e34, 0x1cf0 bytes
    //
    _t75(sdk::unknown_ptr) commit_state_transition;
    
    // [PciCompareOperator]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14720, 0x1d08 bytes
    // pci.sys .text:0x1f52c, 0x1cf0 bytes
    // pci.sys .text:0x204ac, 0x1cf0 bytes
    // pci.sys .text:0x1f32c, 0x1cf0 bytes
    //
    _t76(sdk::unknown_ptr) compare_operator;
    
    // [PciConfigDoubleBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x235c0, 0x1d08 bytes
    // pci.sys .data:0x34860, 0x1cf0 bytes
    // pci.sys .data:0x388e0, 0x1cf0 bytes
    // pci.sys .data:0x32860, 0x1cf0 bytes
    //
    _t77(sdk::unknown_ptr) config_double_buffer;
    
    // [PciConfigDoubleBufferLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x245c0, 0x1d08 bytes
    // pci.sys .data:0x35860, 0x1cf0 bytes
    // pci.sys .data:0x398e0, 0x1cf0 bytes
    // pci.sys .data:0x33860, 0x1cf0 bytes
    //
    _t78(sdk::unknown_ptr) config_double_buffer_lock;
    
    // [PciConfigureBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c8b0, 0x1d08 bytes
    // pci.sys PAGE:0x4d24c, 0x1cf0 bytes
    // pci.sys PAGE:0x46c5c, 0x1cf0 bytes
    // pci.sys PAGE:0x4ce6c, 0x1cf0 bytes
    //
    _t79(sdk::unknown_ptr) configure_bus_numbers;
    
    // [PciConfigureIdeController]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15894, 0x1d08 bytes
    // pci.sys .text:0x21634, 0x1cf0 bytes
    // pci.sys .text:0x23148, 0x1cf0 bytes
    // pci.sys .text:0x21434, 0x1cf0 bytes
    //
    _t80(sdk::unknown_ptr) configure_ide_controller;
    
    // [PciConnectDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3e00, 0x1d08 bytes
    // pci.sys .text:0x9bec, 0x1cf0 bytes
    // pci.sys .text:0x3128, 0x1cf0 bytes
    // pci.sys .text:0xb0ac, 0x1cf0 bytes
    //
    _t81(sdk::unknown_ptr) connect_device;
    
    // [PciConsoleState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23590, 0x1d08 bytes
    // pci.sys .data:0x34840, 0x1cf0 bytes
    // pci.sys .data:0x388b0, 0x1cf0 bytes
    // pci.sys .data:0x32840, 0x1cf0 bytes
    //
    _t82(sdk::unknown_ptr) console_state;
    
    // [PciControlDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23588, 0x1d08 bytes
    // pci.sys .data:0x34838, 0x1cf0 bytes
    // pci.sys .data:0x388a8, 0x1cf0 bytes
    // pci.sys .data:0x32838, 0x1cf0 bytes
    //
    _t83(sdk::unknown_ptr) control_device;
    
    // [PciControl_DeviceControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49fe0, 0x1d08 bytes
    // pci.sys PAGE:0x60aa4, 0x1cf0 bytes
    // pci.sys PAGE:0x67c64, 0x1cf0 bytes
    // pci.sys PAGE:0x5ea04, 0x1cf0 bytes
    //
    _t84(sdk::unknown_ptr) control_device_control;
    
    // [PciConventionalWakeStates]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c9c0, 0x1d08 bytes
    // pci.sys .rdata:0x2c310, 0x1cf0 bytes
    // pci.sys .rdata:0x2f760, 0x1cf0 bytes
    // pci.sys .rdata:0x29840, 0x1cf0 bytes
    //
    _t85(sdk::unknown_ptr) conventional_wake_states;
    
    // [PciCrashdumpFunctions_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f270, 0x1d08 bytes
    // pci.sys PAGE:0x554e0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b750, 0x1cf0 bytes
    // pci.sys PAGE:0x55a70, 0x1cf0 bytes
    //
    _t86(sdk::unknown_ptr) crashdump_functions_constructor;
    
    // [PciCrashdumpFunctions_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9430, 0x1d08 bytes
    // pci.sys .text:0x16f0, 0x1cf0 bytes
    // pci.sys .text:0x1990, 0x1cf0 bytes
    // pci.sys .text:0x1ae0, 0x1cf0 bytes
    //
    _t87(sdk::unknown_ptr) crashdump_functions_dereference;
    
    // [PciCrashdumpFunctionsInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ab90, 0x1d08 bytes
    // pci.sys .rdata:0x288e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a958, 0x1cf0 bytes
    // pci.sys .rdata:0x278f0, 0x1cf0 bytes
    //
    _t88(sdk::unknown_ptr) crashdump_functions_interface;
    
    // [PciCrashdumpFunctions_PowerOn]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15a60, 0x1d08 bytes
    // pci.sys .text:0x218c0, 0x1cf0 bytes
    // pci.sys .text:0x233d0, 0x1cf0 bytes
    // pci.sys .text:0x216c0, 0x1cf0 bytes
    //
    _t89(sdk::unknown_ptr) crashdump_functions_power_on;
    
    // [PciCrashdumpFunctions_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1810, 0x1d08 bytes
    // pci.sys .text:0x1700, 0x1cf0 bytes
    // pci.sys .text:0x19a0, 0x1cf0 bytes
    // pci.sys .text:0x1af0, 0x1cf0 bytes
    //
    _t90(sdk::unknown_ptr) crashdump_functions_reference;
    
    // [PciCrashdumpFunctionsReferenceCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x2344c, 0x1d08 bytes
    // pci.sys .data:0x34668, 0x1cf0 bytes
    // pci.sys .data:0x386c8, 0x1cf0 bytes
    // pci.sys .data:0x32668, 0x1cf0 bytes
    //
    _t91(sdk::unknown_ptr) crashdump_functions_reference_count;
    
    // [PciCreateControlDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a6b0, 0x1d08 bytes
    // pci.sys PAGE:0x4d97c, 0x1cf0 bytes
    // pci.sys PAGE:0x44530, 0x1cf0 bytes
    // pci.sys PAGE:0x54b04, 0x1cf0 bytes
    //
    _t92(sdk::unknown_ptr) create_control_device;
    
    // [PciCreateControlDeviceCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247b0, 0x1d08 bytes
    // pci.sys .data:0x35bc8, 0x1cf0 bytes
    // pci.sys .data:0x39c68, 0x1cf0 bytes
    // pci.sys .data:0x33bc8, 0x1cf0 bytes
    //
    _t93(sdk::unknown_ptr) create_control_device_count;
    
    // [PciCreateHotPlugAction]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1a64, 0x1d08 bytes
    // pci.sys .text:0x1f788, 0x1cf0 bytes
    // pci.sys .text:0x20708, 0x1cf0 bytes
    // pci.sys .text:0x1f588, 0x1cf0 bytes
    //
    _t94(sdk::unknown_ptr) create_hot_plug_action;
    
    // [PciCreateHotPlugController]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c050, 0x1d08 bytes
    // pci.sys PAGE:0x664ec, 0x1cf0 bytes
    // pci.sys PAGE:0x6e86c, 0x1cf0 bytes
    // pci.sys PAGE:0x6434c, 0x1cf0 bytes
    //
    _t95(sdk::unknown_ptr) create_hot_plug_controller;
    
    // [PciD3ColdSupportInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1abb0, 0x1d08 bytes
    // pci.sys .rdata:0x28908, 0x1cf0 bytes
    // pci.sys .rdata:0x2a978, 0x1cf0 bytes
    // pci.sys .rdata:0x27910, 0x1cf0 bytes
    //
    _t96(sdk::unknown_ptr) d3_cold_support_interface;
    
    // [PciD3ColdSupportInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x31d50, 0x1d08 bytes
    // pci.sys PAGE:0x52600, 0x1cf0 bytes
    // pci.sys PAGE:0x57b20, 0x1cf0 bytes
    // pci.sys PAGE:0x52b10, 0x1cf0 bytes
    //
    _t97(sdk::unknown_ptr) d3_cold_support_interface_constructor;
    
    // [PciD3ColdSupportInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6b10, 0x1d08 bytes
    // pci.sys .text:0xea40, 0x1cf0 bytes
    // pci.sys .text:0xd030, 0x1cf0 bytes
    // pci.sys .text:0x10970, 0x1cf0 bytes
    //
    _t98(sdk::unknown_ptr) d3_cold_support_interface_dereference;
    
    // [PciD3ColdSupportInterface_GetD3ColdBusDriverSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f590, 0x1d08 bytes
    // pci.sys PAGE:0x3e0a0, 0x1cf0 bytes
    // pci.sys PAGE:0x43360, 0x1cf0 bytes
    // pci.sys PAGE:0x3c0a0, 0x1cf0 bytes
    //
    _t99(sdk::unknown_ptr) d3_cold_support_interface_get_d3_cold_bus_driver_support;
    
    // [PciD3ColdSupportInterface_GetD3ColdCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35450, 0x1d08 bytes
    // pci.sys PAGE:0x54120, 0x1cf0 bytes
    // pci.sys PAGE:0x5a500, 0x1cf0 bytes
    // pci.sys PAGE:0x54530, 0x1cf0 bytes
    //
    _u00(sdk::unknown_ptr) d3_cold_support_interface_get_d3_cold_capability;
    
    // [PciD3ColdSupportInterface_GetIdleWakeInfo]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39370, 0x1d08 bytes
    // pci.sys PAGE:0x531d0, 0x1cf0 bytes
    // pci.sys PAGE:0x51840, 0x1cf0 bytes
    // pci.sys PAGE:0x536e0, 0x1cf0 bytes
    //
    _u01(sdk::unknown_ptr) d3_cold_support_interface_get_idle_wake_info;
    
    // [PciD3ColdSupportInterface_GetLastTransitionStatus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x119b0, 0x1d08 bytes
    // pci.sys .text:0x1af60, 0x1cf0 bytes
    // pci.sys .text:0x1b180, 0x1cf0 bytes
    // pci.sys .text:0x1ad10, 0x1cf0 bytes
    //
    _u02(sdk::unknown_ptr) d3_cold_support_interface_get_last_transition_status;
    
    // [PciD3ColdSupportInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x68a0, 0x1d08 bytes
    // pci.sys .text:0xe9d0, 0x1cf0 bytes
    // pci.sys .text:0xcf70, 0x1cf0 bytes
    // pci.sys .text:0x10900, 0x1cf0 bytes
    //
    _u03(sdk::unknown_ptr) d3_cold_support_interface_reference;
    
    // [PciD3ColdSupportInterface_SetD3ColdSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8700, 0x1d08 bytes
    // pci.sys .text:0x1af90, 0x1cf0 bytes
    // pci.sys .text:0x94a0, 0x1cf0 bytes
    // pci.sys .text:0x1ad40, 0x1cf0 bytes
    //
    _u04(sdk::unknown_ptr) d3_cold_support_interface_set_d3_cold_support;
    
    // [PciDebugDevicePowerCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe090, 0x1d08 bytes
    // pci.sys .text:0x169b0, 0x1cf0 bytes
    // pci.sys .text:0x15380, 0x1cf0 bytes
    // pci.sys .text:0x169b0, 0x1cf0 bytes
    //
    _u05(sdk::unknown_ptr) debug_device_power_callback;
    
    // [PciDebugDevicePowerCallbackDeregister]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48904, 0x1d08 bytes
    // pci.sys PAGE:0x3e6d4, 0x1cf0 bytes
    // pci.sys PAGE:0x66684, 0x1cf0 bytes
    // pci.sys PAGE:0x3c814, 0x1cf0 bytes
    //
    _u06(sdk::unknown_ptr) debug_device_power_callback_deregister;
    
    // [PciDebugExpressCompatibilitySaveDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23558, 0x1d08 bytes
    // pci.sys .data:0x3479c, 0x1cf0 bytes
    // pci.sys .data:0x38804, 0x1cf0 bytes
    // pci.sys .data:0x3279c, 0x1cf0 bytes
    //
    _u07(sdk::unknown_ptr) debug_express_compatibility_save_done;
    
    // [PciDebugExpressCompatibilitySaveNotDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x2355c, 0x1d08 bytes
    // pci.sys .data:0x347a0, 0x1cf0 bytes
    // pci.sys .data:0x38808, 0x1cf0 bytes
    // pci.sys .data:0x327a0, 0x1cf0 bytes
    //
    _u08(sdk::unknown_ptr) debug_express_compatibility_save_not_done;
    
    // [PciDebugExpressNativeSaveDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23560, 0x1d08 bytes
    // pci.sys .data:0x347a4, 0x1cf0 bytes
    // pci.sys .data:0x3880c, 0x1cf0 bytes
    // pci.sys .data:0x327a4, 0x1cf0 bytes
    //
    _u09(sdk::unknown_ptr) debug_express_native_save_done;
    
    // [PciDebugExpressNativeSaveNotDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23564, 0x1d08 bytes
    // pci.sys .data:0x347a8, 0x1cf0 bytes
    // pci.sys .data:0x38810, 0x1cf0 bytes
    // pci.sys .data:0x327a8, 0x1cf0 bytes
    //
    _u10(sdk::unknown_ptr) debug_express_native_save_not_done;
    
    // [PciDebugPorts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23500, 0x1d08 bytes
    // pci.sys .data:0x34740, 0x1cf0 bytes
    // pci.sys .data:0x387a0, 0x1cf0 bytes
    // pci.sys .data:0x32740, 0x1cf0 bytes
    //
    _u11(sdk::unknown_ptr) debug_ports;
    
    // [PciDebugPortsCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234f8, 0x1d08 bytes
    // pci.sys .data:0x34738, 0x1cf0 bytes
    // pci.sys .data:0x38798, 0x1cf0 bytes
    // pci.sys .data:0x32738, 0x1cf0 bytes
    //
    _u12(sdk::unknown_ptr) debug_ports_count;
    
    // [PciDebugSaveDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23580, 0x1d08 bytes
    // pci.sys .data:0x34830, 0x1cf0 bytes
    // pci.sys .data:0x388a0, 0x1cf0 bytes
    // pci.sys .data:0x32830, 0x1cf0 bytes
    //
    _u13(sdk::unknown_ptr) debug_save_done;
    
    // [PciDebugSaveNotDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23584, 0x1d08 bytes
    // pci.sys .data:0x34834, 0x1cf0 bytes
    // pci.sys .data:0x388a4, 0x1cf0 bytes
    // pci.sys .data:0x32834, 0x1cf0 bytes
    //
    _u14(sdk::unknown_ptr) debug_save_not_done;
    
    // [PciDebugTphSaveDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23420, 0x1d08 bytes
    // pci.sys .data:0x345e0, 0x1cf0 bytes
    // pci.sys .data:0x38620, 0x1cf0 bytes
    // pci.sys .data:0x325e0, 0x1cf0 bytes
    //
    _u15(sdk::unknown_ptr) debug_tph_save_done;
    
    // [PciDebugTphSaveNotDone]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23424, 0x1d08 bytes
    // pci.sys .data:0x345e4, 0x1cf0 bytes
    // pci.sys .data:0x38624, 0x1cf0 bytes
    // pci.sys .data:0x325e4, 0x1cf0 bytes
    //
    _u16(sdk::unknown_ptr) debug_tph_save_not_done;
    
    // [PciDeinitConsoleLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11324, 0x1d08 bytes
    // pci.sys .text:0x1ab38, 0x1cf0 bytes
    // pci.sys .text:0x1a5d8, 0x1cf0 bytes
    // pci.sys .text:0x1a8d8, 0x1cf0 bytes
    //
    _u17(sdk::unknown_ptr) deinit_console_lock;
    
    // [PciDeleteVolatileInterruptRoutingData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c928, 0x1d08 bytes
    // pci.sys PAGE:0x3e358, 0x1cf0 bytes
    // pci.sys PAGE:0x6fa54, 0x1cf0 bytes
    // pci.sys PAGE:0x3c498, 0x1cf0 bytes
    //
    _u18(sdk::unknown_ptr) delete_volatile_interrupt_routing_data;
    
    // [PciDeregisterWithEM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bc78, 0x1d08 bytes
    // pci.sys PAGE:0x663e4, 0x1cf0 bytes
    // pci.sys PAGE:0x6e75c, 0x1cf0 bytes
    // pci.sys PAGE:0x64244, 0x1cf0 bytes
    //
    _u19(sdk::unknown_ptr) deregister_with_em;
    
    // [PciDestroyArbiters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x46fa0, 0x1d08 bytes
    // pci.sys PAGE:0x5d410, 0x1cf0 bytes
    // pci.sys PAGE:0x646e8, 0x1cf0 bytes
    // pci.sys PAGE:0x5b358, 0x1cf0 bytes
    //
    _u20(sdk::unknown_ptr) destroy_arbiters;
    
    // [PciDestroyDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12fcc, 0x1d08 bytes
    // pci.sys .text:0x1770, 0x1cf0 bytes
    // pci.sys .text:0x1c8b8, 0x1cf0 bytes
    // pci.sys .text:0x1b60, 0x1cf0 bytes
    //
    _u21(sdk::unknown_ptr) destroy_device;
    
    // [PciDestroyHotPlugController]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14978, 0x1d08 bytes
    // pci.sys .text:0x1f844, 0x1cf0 bytes
    // pci.sys .text:0x20b94, 0x1cf0 bytes
    // pci.sys .text:0x1f644, 0x1cf0 bytes
    //
    _u22(sdk::unknown_ptr) destroy_hot_plug_controller;
    
    // [PciDestroyRootBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17f84, 0x1d08 bytes
    // pci.sys .text:0x256a4, 0x1cf0 bytes
    // pci.sys .text:0x27854, 0x1cf0 bytes
    // pci.sys .text:0x254c4, 0x1cf0 bytes
    //
    _u23(sdk::unknown_ptr) destroy_root_bus;
    
    // [PciDeviceAssembleCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35fc0, 0x1d08 bytes
    // pci.sys PAGE:0x484c0, 0x1cf0 bytes
    // pci.sys PAGE:0x486d0, 0x1cf0 bytes
    // pci.sys PAGE:0x48eb0, 0x1cf0 bytes
    //
    _u24(sdk::unknown_ptr) device_assemble_custom_properties;
    
    // [PciDeviceCallCritical]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3a4c, 0x1d08 bytes
    // pci.sys .text:0x4dd4, 0x1cf0 bytes
    // pci.sys .text:0x83f0, 0x1cf0 bytes
    // pci.sys .text:0x5f1c, 0x1cf0 bytes
    //
    _u25(sdk::unknown_ptr) device_call_critical;
    
    // [PciDevice_CancelRemove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a390, 0x1d08 bytes
    // pci.sys PAGE:0x60e40, 0x1cf0 bytes
    // pci.sys PAGE:0x67ef0, 0x1cf0 bytes
    // pci.sys PAGE:0x5eda0, 0x1cf0 bytes
    //
    _u26(sdk::unknown_ptr) device_cancel_remove;
    
    // [PciDevice_CancelStop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a3b0, 0x1d08 bytes
    // pci.sys PAGE:0x60e60, 0x1cf0 bytes
    // pci.sys PAGE:0x67f10, 0x1cf0 bytes
    // pci.sys PAGE:0x5edc0, 0x1cf0 bytes
    //
    _u27(sdk::unknown_ptr) device_cancel_stop;
    
    // [PciDeviceDefaultPropertyList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1a6b0, 0x1d08 bytes
    // pci.sys .rdata:0x28d70, 0x1cf0 bytes
    // pci.sys .rdata:0x2ab80, 0x1cf0 bytes
    // pci.sys .rdata:0x28090, 0x1cf0 bytes
    //
    _u28(sdk::unknown_ptr) device_default_property_list;
    
    // [PciDevice_Delay]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1136c, 0x1d08 bytes
    // pci.sys .text:0xef98, 0x1cf0 bytes
    // pci.sys .text:0x1a634, 0x1cf0 bytes
    // pci.sys .text:0x10e68, 0x1cf0 bytes
    //
    _u29(sdk::unknown_ptr) device_delay;
    
    // [PciDevice_DeviceEnumerated]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x341a0, 0x1d08 bytes
    // pci.sys PAGE:0x45e00, 0x1cf0 bytes
    // pci.sys PAGE:0x4c310, 0x1cf0 bytes
    // pci.sys PAGE:0x46610, 0x1cf0 bytes
    //
    _u30(sdk::unknown_ptr) device_device_enumerated;
    
    // [PciDevice_DeviceUsageNotification]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38ed0, 0x1d08 bytes
    // pci.sys PAGE:0x4a3c0, 0x1cf0 bytes
    // pci.sys PAGE:0x43710, 0x1cf0 bytes
    // pci.sys PAGE:0x4a700, 0x1cf0 bytes
    //
    _u31(sdk::unknown_ptr) device_device_usage_notification;
    
    // [PciDeviceDisableAtomics]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xde58, 0x1d08 bytes
    // pci.sys .text:0x163bc, 0x1cf0 bytes
    // pci.sys .text:0x14d24, 0x1cf0 bytes
    // pci.sys .text:0x16370, 0x1cf0 bytes
    //
    _u32(sdk::unknown_ptr) device_disable_atomics;
    
    // [PciDevice_DispatchPnpTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1a010, 0x1d08 bytes
    // pci.sys .rdata:0x28380, 0x1cf0 bytes
    // pci.sys .rdata:0x2a000, 0x1cf0 bytes
    // pci.sys .rdata:0x27380, 0x1cf0 bytes
    //
    _u33(sdk::unknown_ptr) device_dispatch_pnp_table;
    
    // [PciDevice_DispatchPowerTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b3b0, 0x1d08 bytes
    // pci.sys .rdata:0x28610, 0x1cf0 bytes
    // pci.sys .rdata:0x2a520, 0x1cf0 bytes
    // pci.sys .rdata:0x27610, 0x1cf0 bytes
    //
    _u34(sdk::unknown_ptr) device_dispatch_power_table;
    
    // [PciDevice_Eject]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a3d0, 0x1d08 bytes
    // pci.sys PAGE:0x60e80, 0x1cf0 bytes
    // pci.sys PAGE:0x67f30, 0x1cf0 bytes
    // pci.sys PAGE:0x5ede0, 0x1cf0 bytes
    //
    _u35(sdk::unknown_ptr) device_eject;
    
    // [PciDeviceEjectCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14af0, 0x1d08 bytes
    // pci.sys .text:0x1fa20, 0x1cf0 bytes
    // pci.sys .text:0x20db0, 0x1cf0 bytes
    // pci.sys .text:0x1f820, 0x1cf0 bytes
    //
    _u36(sdk::unknown_ptr) device_eject_callback;
    
    // [PciDeviceEnableAtomics]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6e68, 0x1d08 bytes
    // pci.sys .text:0x484c, 0x1cf0 bytes
    // pci.sys .text:0x9208, 0x1cf0 bytes
    // pci.sys .text:0x5a18, 0x1cf0 bytes
    //
    _u37(sdk::unknown_ptr) device_enable_atomics;
    
    // [PciDeviceIsInHigherSlot]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3fa0, 0x1d08 bytes
    // pci.sys .text:0xe8dc, 0x1cf0 bytes
    // pci.sys .text:0xc528, 0x1cf0 bytes
    // pci.sys .text:0x1080c, 0x1cf0 bytes
    //
    _u38(sdk::unknown_ptr) device_is_in_higher_slot;
    
    // [PciDeviceMatchCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b6d0, 0x1d08 bytes
    // pci.sys PAGE:0x4e170, 0x1cf0 bytes
    // pci.sys PAGE:0x55570, 0x1cf0 bytes
    // pci.sys PAGE:0x4e680, 0x1cf0 bytes
    //
    _u39(sdk::unknown_ptr) device_match_callback;
    
    // [PciDevicePresentInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1acb0, 0x1d08 bytes
    // pci.sys .rdata:0x28a08, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa78, 0x1cf0 bytes
    // pci.sys .rdata:0x27a10, 0x1cf0 bytes
    //
    _u40(sdk::unknown_ptr) device_present_interface;
    
    // [PciDevicePresentInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f350, 0x1d08 bytes
    // pci.sys PAGE:0x555d0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b8d0, 0x1cf0 bytes
    // pci.sys PAGE:0x55b60, 0x1cf0 bytes
    //
    _u41(sdk::unknown_ptr) device_present_interface_constructor;
    
    // [PciDevicePresentInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9440, 0x1d08 bytes
    // pci.sys .text:0x1710, 0x1cf0 bytes
    // pci.sys .text:0x19b0, 0x1cf0 bytes
    // pci.sys .text:0x1b00, 0x1cf0 bytes
    //
    _u42(sdk::unknown_ptr) device_present_interface_dereference;
    
    // [PciDevicePresentInterface_DevicePresent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c530, 0x1d08 bytes
    // pci.sys PAGE:0x66fb0, 0x1cf0 bytes
    // pci.sys PAGE:0x6f490, 0x1cf0 bytes
    // pci.sys PAGE:0x64e10, 0x1cf0 bytes
    //
    _u43(sdk::unknown_ptr) device_present_interface_device_present;
    
    // [PciDevicePresentInterface_DevicePresentEx]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c580, 0x1d08 bytes
    // pci.sys PAGE:0x67010, 0x1cf0 bytes
    // pci.sys PAGE:0x6f4f0, 0x1cf0 bytes
    // pci.sys PAGE:0x64e70, 0x1cf0 bytes
    //
    _u44(sdk::unknown_ptr) device_present_interface_device_present_ex;
    
    // [PciDevicePresentInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1840, 0x1d08 bytes
    // pci.sys .text:0x1720, 0x1cf0 bytes
    // pci.sys .text:0x19c0, 0x1cf0 bytes
    // pci.sys .text:0x1b10, 0x1cf0 bytes
    //
    _u45(sdk::unknown_ptr) device_present_interface_reference;
    
    // [PciDevicePresentOnBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c588, 0x1d08 bytes
    // pci.sys PAGE:0x67028, 0x1cf0 bytes
    // pci.sys PAGE:0x6f508, 0x1cf0 bytes
    // pci.sys PAGE:0x64e88, 0x1cf0 bytes
    //
    _u46(sdk::unknown_ptr) device_present_on_bus;
    
    // [PciDeviceQueryAtomics]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6e98, 0x1d08 bytes
    // pci.sys .text:0x489c, 0x1cf0 bytes
    // pci.sys .text:0x9258, 0x1cf0 bytes
    // pci.sys .text:0x5a68, 0x1cf0 bytes
    //
    _u47(sdk::unknown_ptr) device_query_atomics;
    
    // [PciDevice_QueryBusInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e970, 0x1d08 bytes
    // pci.sys PAGE:0x53890, 0x1cf0 bytes
    // pci.sys PAGE:0x5a1e0, 0x1cf0 bytes
    // pci.sys PAGE:0x53ca0, 0x1cf0 bytes
    //
    _u48(sdk::unknown_ptr) device_query_bus_information;
    
    // [PciDevice_QueryCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x310e0, 0x1d08 bytes
    // pci.sys PAGE:0x4e630, 0x1cf0 bytes
    // pci.sys PAGE:0x555d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4eb40, 0x1cf0 bytes
    //
    _u49(sdk::unknown_ptr) device_query_capabilities;
    
    // [PciDevice_QueryDeviceRelations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f460, 0x1d08 bytes
    // pci.sys PAGE:0x532f0, 0x1cf0 bytes
    // pci.sys PAGE:0x43260, 0x1cf0 bytes
    // pci.sys PAGE:0x539c0, 0x1cf0 bytes
    //
    _u50(sdk::unknown_ptr) device_query_device_relations;
    
    // [PciDevice_QueryDeviceState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x30570, 0x1d08 bytes
    // pci.sys PAGE:0x53a20, 0x1cf0 bytes
    // pci.sys PAGE:0x59fa0, 0x1cf0 bytes
    // pci.sys PAGE:0x53e30, 0x1cf0 bytes
    //
    _u51(sdk::unknown_ptr) device_query_device_state;
    
    // [PciDevice_QueryDeviceText]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x32040, 0x1d08 bytes
    // pci.sys PAGE:0x481c0, 0x1cf0 bytes
    // pci.sys PAGE:0x49df0, 0x1cf0 bytes
    // pci.sys PAGE:0x48950, 0x1cf0 bytes
    //
    _u52(sdk::unknown_ptr) device_query_device_text;
    
    // [PciDevice_QueryId]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x314c0, 0x1d08 bytes
    // pci.sys PAGE:0x4efe0, 0x1cf0 bytes
    // pci.sys PAGE:0x56290, 0x1cf0 bytes
    // pci.sys PAGE:0x4f4f0, 0x1cf0 bytes
    //
    _u53(sdk::unknown_ptr) device_query_id;
    
    // [PciDevice_QueryInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x319c0, 0x1d08 bytes
    // pci.sys PAGE:0x4e500, 0x1cf0 bytes
    // pci.sys PAGE:0x55f90, 0x1cf0 bytes
    // pci.sys PAGE:0x4ea10, 0x1cf0 bytes
    //
    _u54(sdk::unknown_ptr) device_query_interface;
    
    // [PciDevice_QueryPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9450, 0x1d08 bytes
    // pci.sys .text:0x1660, 0x1cf0 bytes
    // pci.sys .text:0x1900, 0x1cf0 bytes
    // pci.sys .text:0x1a50, 0x1cf0 bytes
    //
    _u55(sdk::unknown_ptr) device_query_power;
    
    // [PciDevice_QueryRemove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a470, 0x1d08 bytes
    // pci.sys PAGE:0x60f40, 0x1cf0 bytes
    // pci.sys PAGE:0x67ff0, 0x1cf0 bytes
    // pci.sys PAGE:0x5eea0, 0x1cf0 bytes
    //
    _u56(sdk::unknown_ptr) device_query_remove;
    
    // [PciDevice_QueryResourceRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x355a0, 0x1d08 bytes
    // pci.sys PAGE:0x47810, 0x1cf0 bytes
    // pci.sys PAGE:0x4a5a0, 0x1cf0 bytes
    // pci.sys PAGE:0x47fa0, 0x1cf0 bytes
    //
    _u57(sdk::unknown_ptr) device_query_resource_requirements;
    
    // [PciDevice_QueryResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2ed70, 0x1d08 bytes
    // pci.sys PAGE:0x420f0, 0x1cf0 bytes
    // pci.sys PAGE:0x4e9e0, 0x1cf0 bytes
    // pci.sys PAGE:0x422d0, 0x1cf0 bytes
    //
    _u58(sdk::unknown_ptr) device_query_resources;
    
    // [PciDevice_QueryStop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a4d0, 0x1d08 bytes
    // pci.sys PAGE:0x60fb0, 0x1cf0 bytes
    // pci.sys PAGE:0x68070, 0x1cf0 bytes
    // pci.sys PAGE:0x5ef10, 0x1cf0 bytes
    //
    _u59(sdk::unknown_ptr) device_query_stop;
    
    // [PciDevice_ReadConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a590, 0x1d08 bytes
    // pci.sys PAGE:0x61070, 0x1cf0 bytes
    // pci.sys PAGE:0x68350, 0x1cf0 bytes
    // pci.sys PAGE:0x5efd0, 0x1cf0 bytes
    //
    _u60(sdk::unknown_ptr) device_read_config;
    
    // [PciDevice_Remove]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x84e0, 0x1d08 bytes
    // pci.sys .text:0x19b0, 0x1cf0 bytes
    // pci.sys .text:0xd470, 0x1cf0 bytes
    // pci.sys .text:0x1da0, 0x1cf0 bytes
    //
    _u61(sdk::unknown_ptr) device_remove;
    
    // [PciDeviceRequirementsToBridgeRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39108, 0x1d08 bytes
    // pci.sys PAGE:0x4b1a8, 0x1cf0 bytes
    // pci.sys PAGE:0x44ee8, 0x1cf0 bytes
    // pci.sys PAGE:0x4bd68, 0x1cf0 bytes
    //
    _u62(sdk::unknown_ptr) device_requirements_to_bridge_requirements;
    
    // [PciDeviceResetInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c6a0, 0x1d08 bytes
    // pci.sys PAGE:0x54d30, 0x1cf0 bytes
    // pci.sys PAGE:0x5a280, 0x1cf0 bytes
    // pci.sys PAGE:0x551d0, 0x1cf0 bytes
    //
    _u63(sdk::unknown_ptr) device_reset_interface_constructor;
    
    // [PciDeviceResetInterface_DeviceReset]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15a70, 0x1d08 bytes
    // pci.sys .text:0x218f0, 0x1cf0 bytes
    // pci.sys .text:0x23570, 0x1cf0 bytes
    // pci.sys .text:0x216f0, 0x1cf0 bytes
    //
    _u64(sdk::unknown_ptr) device_reset_interface_device_reset;
    
    // [PciDeviceResetStandardInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ab30, 0x1d08 bytes
    // pci.sys .rdata:0x28888, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8f8, 0x1cf0 bytes
    // pci.sys .rdata:0x27890, 0x1cf0 bytes
    //
    _u65(sdk::unknown_ptr) device_reset_standard_interface;
    
    // [PciDeviceResourcesToBridgeResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x390ac, 0x1d08 bytes
    // pci.sys PAGE:0x4b144, 0x1cf0 bytes
    // pci.sys PAGE:0x44f98, 0x1cf0 bytes
    // pci.sys PAGE:0x4bd04, 0x1cf0 bytes
    //
    _u66(sdk::unknown_ptr) device_resources_to_bridge_resources;
    
    // [PciDevice_RetireD0Irp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11ab8, 0x1d08 bytes
    // pci.sys .text:0x1d60, 0x1cf0 bytes
    // pci.sys .text:0xa628, 0x1cf0 bytes
    // pci.sys .text:0x2150, 0x1cf0 bytes
    //
    _u67(sdk::unknown_ptr) device_retire_d0_irp;
    
    // [PciDeviceSequenceNumber]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23240, 0x1d08 bytes
    // pci.sys .data:0x34410, 0x1cf0 bytes
    // pci.sys .data:0x38460, 0x1cf0 bytes
    // pci.sys .data:0x32410, 0x1cf0 bytes
    //
    _u68(sdk::unknown_ptr) device_sequence_number;
    
    // [PciDevice_SetPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11b40, 0x1d08 bytes
    // pci.sys .text:0x30a0, 0x1cf0 bytes
    // pci.sys .text:0x8dd0, 0x1cf0 bytes
    // pci.sys .text:0x3d50, 0x1cf0 bytes
    //
    _u69(sdk::unknown_ptr) device_set_power;
    
    // [PciDevice_Start]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2fe90, 0x1d08 bytes
    // pci.sys PAGE:0x3e920, 0x1cf0 bytes
    // pci.sys PAGE:0x52350, 0x1cf0 bytes
    // pci.sys PAGE:0x3c880, 0x1cf0 bytes
    //
    _u70(sdk::unknown_ptr) device_start;
    
    // [PciDevice_Stop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a5e0, 0x1d08 bytes
    // pci.sys PAGE:0x61150, 0x1cf0 bytes
    // pci.sys PAGE:0x68430, 0x1cf0 bytes
    // pci.sys PAGE:0x5f0b0, 0x1cf0 bytes
    //
    _u71(sdk::unknown_ptr) device_stop;
    
    // [PciDeviceSupportsNativeExpressPme]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x82d0, 0x1d08 bytes
    // pci.sys .text:0x20a4, 0x1cf0 bytes
    // pci.sys .text:0xd874, 0x1cf0 bytes
    // pci.sys .text:0x2ca4, 0x1cf0 bytes
    //
    _u72(sdk::unknown_ptr) device_supports_native_express_pme;
    
    // [PciDevice_SurpriseRemoval]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a6d0, 0x1d08 bytes
    // pci.sys PAGE:0x3e1f0, 0x1cf0 bytes
    // pci.sys PAGE:0x68550, 0x1cf0 bytes
    // pci.sys PAGE:0x3c330, 0x1cf0 bytes
    //
    _u73(sdk::unknown_ptr) device_surprise_removal;
    
    // [PciDevice_WaitWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11d90, 0x1d08 bytes
    // pci.sys .text:0x1e40, 0x1cf0 bytes
    // pci.sys .text:0x1b300, 0x1cf0 bytes
    // pci.sys .text:0x28e0, 0x1cf0 bytes
    //
    _u74(sdk::unknown_ptr) device_wait_wake;
    
    // [PciDeviceWaitWakeCancel]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x119d0, 0x1d08 bytes
    // pci.sys .text:0x1b070, 0x1cf0 bytes
    // pci.sys .text:0x1b1b0, 0x1cf0 bytes
    // pci.sys .text:0x1ae30, 0x1cf0 bytes
    //
    _u75(sdk::unknown_ptr) device_wait_wake_cancel;
    
    // [PciDevice_WakeTriggered]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11fd4, 0x1d08 bytes
    // pci.sys .text:0x1b1b8, 0x1cf0 bytes
    // pci.sys .text:0x1b60c, 0x1cf0 bytes
    // pci.sys .text:0x1af80, 0x1cf0 bytes
    //
    _u76(sdk::unknown_ptr) device_wake_triggered;
    
    // [PciDevice_WriteConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a880, 0x1d08 bytes
    // pci.sys PAGE:0x61270, 0x1cf0 bytes
    // pci.sys PAGE:0x68860, 0x1cf0 bytes
    // pci.sys PAGE:0x5f1d0, 0x1cf0 bytes
    //
    _u77(sdk::unknown_ptr) device_write_config;
    
    // [PciDiagHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23568, 0x1d08 bytes
    // pci.sys .data:0x347b8, 0x1cf0 bytes
    // pci.sys .data:0x38820, 0x1cf0 bytes
    // pci.sys .data:0x327b8, 0x1cf0 bytes
    //
    _u78(sdk::unknown_ptr) diag_handle;
    
    // [PciDiagTraceControlCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4aa30, 0x1d08 bytes
    // pci.sys PAGE:0x617e0, 0x1cf0 bytes
    // pci.sys PAGE:0x69140, 0x1cf0 bytes
    // pci.sys PAGE:0x5f610, 0x1cf0 bytes
    //
    _u79(sdk::unknown_ptr) diag_trace_control_callback;
    
    // [PciDisableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15c40, 0x1d08 bytes
    // pci.sys .text:0x35fc, 0x1cf0 bytes
    // pci.sys .text:0x8374, 0x1cf0 bytes
    // pci.sys .text:0x44e8, 0x1cf0 bytes
    //
    _u80(sdk::unknown_ptr) disable_interrupts;
    
    // [PciDisablePme]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12178, 0x1d08 bytes
    // pci.sys .text:0x1b3cc, 0x1cf0 bytes
    // pci.sys .text:0x1b828, 0x1cf0 bytes
    // pci.sys .text:0x1b19c, 0x1cf0 bytes
    //
    _u81(sdk::unknown_ptr) disable_pme;
    
    // [PciDisableSriovDecodes]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18b58, 0x1d08 bytes
    // pci.sys .text:0x264b8, 0x1cf0 bytes
    // pci.sys .text:0x287f8, 0x1cf0 bytes
    // pci.sys .text:0x262d8, 0x1cf0 bytes
    //
    _u82(sdk::unknown_ptr) disable_sriov_decodes;
    
    // [PciDisconnectDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3bb0, 0x1d08 bytes
    // pci.sys .text:0x3840, 0x1cf0 bytes
    // pci.sys .text:0x3428, 0x1cf0 bytes
    // pci.sys .text:0x4850, 0x1cf0 bytes
    //
    _u83(sdk::unknown_ptr) disconnect_device;
    
    // [PciDispatchCreate]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f100, 0x1d08 bytes
    // pci.sys PAGE:0x61930, 0x1cf0 bytes
    // pci.sys PAGE:0x69290, 0x1cf0 bytes
    // pci.sys PAGE:0x5f760, 0x1cf0 bytes
    //
    _u84(sdk::unknown_ptr) dispatch_create;
    
    // [PciDispatchDeviceControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8130, 0x1d08 bytes
    // pci.sys .text:0xdc00, 0x1cf0 bytes
    // pci.sys .text:0xacf0, 0x1cf0 bytes
    // pci.sys .text:0xf750, 0x1cf0 bytes
    //
    _u85(sdk::unknown_ptr) dispatch_device_control;
    
    // [PciDispatchPnpPower]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x64d0, 0x1d08 bytes
    // pci.sys .text:0xc760, 0x1cf0 bytes
    // pci.sys .text:0x1590, 0x1cf0 bytes
    // pci.sys .text:0xe210, 0x1cf0 bytes
    //
    _u86(sdk::unknown_ptr) dispatch_pnp_power;
    
    // [PciDispatchSystemControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f520, 0x1d08 bytes
    // pci.sys PAGE:0x55780, 0x1cf0 bytes
    // pci.sys PAGE:0x5bb80, 0x1cf0 bytes
    // pci.sys PAGE:0x55d10, 0x1cf0 bytes
    //
    _u87(sdk::unknown_ptr) dispatch_system_control;
    
    // [PciDoNotEnumerate]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4618, 0x1d08 bytes
    // pci.sys .text:0xddf8, 0x1cf0 bytes
    // pci.sys .text:0xc370, 0x1cf0 bytes
    // pci.sys .text:0xf948, 0x1cf0 bytes
    //
    _u88(sdk::unknown_ptr) do_not_enumerate;
    
    // [PciDriverObject]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23540, 0x1d08 bytes
    // pci.sys .data:0x34780, 0x1cf0 bytes
    // pci.sys .data:0x387e0, 0x1cf0 bytes
    // pci.sys .data:0x32780, 0x1cf0 bytes
    //
    _u89(sdk::unknown_ptr) driver_object;
    
    // [PciDriverUnload]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bef0, 0x1d08 bytes
    // pci.sys PAGE:0x66850, 0x1cf0 bytes
    // pci.sys PAGE:0x6ebc0, 0x1cf0 bytes
    // pci.sys PAGE:0x646b0, 0x1cf0 bytes
    //
    _u90(sdk::unknown_ptr) driver_unload;
    
    // [PCI_DSM_UUID]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b5a0, 0x1d08 bytes
    // pci.sys .rdata:0x29b78, 0x1cf0 bytes
    // pci.sys .rdata:0x2c780, 0x1cf0 bytes
    // pci.sys .rdata:0x2a0e0, 0x1cf0 bytes
    //
    _u91(sdk::unknown_ptr) dsm_uuid;
    
    // [PciEarlyRestoreAddListItem]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39a58, 0x1d08 bytes
    // pci.sys PAGE:0x4d604, 0x1cf0 bytes
    // pci.sys PAGE:0x438cc, 0x1cf0 bytes
    // pci.sys PAGE:0x4d2cc, 0x1cf0 bytes
    //
    _u92(sdk::unknown_ptr) early_restore_add_list_item;
    
    // [PciEarlyRestoreBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe1b0, 0x1d08 bytes
    // pci.sys .text:0x16aec, 0x1cf0 bytes
    // pci.sys .text:0x154bc, 0x1cf0 bytes
    // pci.sys .text:0x16aec, 0x1cf0 bytes
    //
    _u93(sdk::unknown_ptr) early_restore_bus;
    
    // [PciEarlyRestoreDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe2e0, 0x1d08 bytes
    // pci.sys .text:0x16d00, 0x1cf0 bytes
    // pci.sys .text:0x156b0, 0x1cf0 bytes
    // pci.sys .text:0x16d00, 0x1cf0 bytes
    //
    _u94(sdk::unknown_ptr) early_restore_device;
    
    // [PciEarlyRestoreExecuteRestore]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe3fc, 0x1d08 bytes
    // pci.sys .text:0x16ed0, 0x1cf0 bytes
    // pci.sys .text:0x15880, 0x1cf0 bytes
    // pci.sys .text:0x16ed0, 0x1cf0 bytes
    //
    _u95(sdk::unknown_ptr) early_restore_execute_restore;
    
    // [PciEarlyRestoreList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x245e0, 0x1d08 bytes
    // pci.sys .data:0x358f0, 0x1cf0 bytes
    // pci.sys .data:0x39970, 0x1cf0 bytes
    // pci.sys .data:0x338f0, 0x1cf0 bytes
    //
    _u96(sdk::unknown_ptr) early_restore_list;
    
    // [PciEarlyRestoreResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe460, 0x1d08 bytes
    // pci.sys .text:0x17030, 0x1cf0 bytes
    // pci.sys .text:0x159f0, 0x1cf0 bytes
    // pci.sys .text:0x17030, 0x1cf0 bytes
    //
    _u97(sdk::unknown_ptr) early_restore_resources;
    
    // [PciEarlyRestoreResourcesInternal]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe484, 0x1d08 bytes
    // pci.sys .text:0x17060, 0x1cf0 bytes
    // pci.sys .text:0x15a3c, 0x1cf0 bytes
    // pci.sys .text:0x17088, 0x1cf0 bytes
    //
    _u98(sdk::unknown_ptr) early_restore_resources_internal;
    
    // [PciEarlyRestoreSkipAllowed]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe51c, 0x1d08 bytes
    // pci.sys .text:0x17108, 0x1cf0 bytes
    // pci.sys .text:0x15ae4, 0x1cf0 bytes
    // pci.sys .text:0x17130, 0x1cf0 bytes
    //
    _u99(sdk::unknown_ptr) early_restore_skip_allowed;
    
    // [PciEmProviderHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23550, 0x1d08 bytes
    // pci.sys .data:0x34790, 0x1cf0 bytes
    // pci.sys .data:0x387f8, 0x1cf0 bytes
    // pci.sys .data:0x32790, 0x1cf0 bytes
    //
    _v00(sdk::unknown_ptr) em_provider_handle;
    
    // [PciEnableConsoleLockHandling]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247b8, 0x1d08 bytes
    // pci.sys .data:0x35be8, 0x1cf0 bytes
    // pci.sys .data:0x39c88, 0x1cf0 bytes
    // pci.sys .data:0x33be8, 0x1cf0 bytes
    //
    _v01(sdk::unknown_ptr) enable_console_lock_handling;
    
    // [PciEnableDisableHotPlugInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1b14, 0x1d08 bytes
    // pci.sys .text:0x1fb88, 0x1cf0 bytes
    // pci.sys .text:0x20f18, 0x1cf0 bytes
    // pci.sys .text:0x1f988, 0x1cf0 bytes
    //
    _v02(sdk::unknown_ptr) enable_disable_hot_plug_interrupts;
    
    // [PciEnableLegacyPcieRuntimePme]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234dc, 0x1d08 bytes
    // pci.sys .data:0x34704, 0x1cf0 bytes
    // pci.sys .data:0x3876c, 0x1cf0 bytes
    // pci.sys .data:0x32704, 0x1cf0 bytes
    //
    _v03(sdk::unknown_ptr) enable_legacy_pcie_runtime_pme;
    
    // [PciEnableNativeModeATA]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234c8, 0x1d08 bytes
    // pci.sys .data:0x346f0, 0x1cf0 bytes
    // pci.sys .data:0x38754, 0x1cf0 bytes
    // pci.sys .data:0x326f0, 0x1cf0 bytes
    //
    _v04(sdk::unknown_ptr) enable_native_mode_ata;
    
    // [PciEnablePme]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1222c, 0x1d08 bytes
    // pci.sys .text:0x2100, 0x1cf0 bytes
    // pci.sys .text:0x1b91c, 0x1cf0 bytes
    // pci.sys .text:0x2d00, 0x1cf0 bytes
    //
    _v05(sdk::unknown_ptr) enable_pme;
    
    // [PciEnableSriovDecodes]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18bb8, 0x1d08 bytes
    // pci.sys .text:0x26524, 0x1cf0 bytes
    // pci.sys .text:0x2887c, 0x1cf0 bytes
    // pci.sys .text:0x26344, 0x1cf0 bytes
    //
    _v06(sdk::unknown_ptr) enable_sriov_decodes;
    
    // [EntryReg]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x230b0, 0x1d08 bytes
    // pci.sys .data:0x34270, 0x1cf0 bytes
    // pci.sys .data:0x380c0, 0x1cf0 bytes
    // pci.sys .data:0x32270, 0x1cf0 bytes
    //
    _v07(sdk::unknown_ptr) entry_reg;
    
    // [PCI_ETW_EVENT_ASPM_ERRATA_RUNDOWN]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1cd58, 0x1d08 bytes
    // pci.sys .rdata:0x2c6b8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ff38, 0x1cf0 bytes
    // pci.sys .rdata:0x2b730, 0x1cf0 bytes
    //
    _v08(sdk::unknown_ptr) etw_event_aspm_errata_rundown;
    
    // [PCI_ETW_PROVIDER]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bac8, 0x1d08 bytes
    // pci.sys .rdata:0x2a768, 0x1cf0 bytes
    // pci.sys .rdata:0x2bbd8, 0x1cf0 bytes
    // pci.sys .rdata:0x290c8, 0x1cf0 bytes
    //
    _v09(sdk::unknown_ptr) etw_provider;
    
    // [PciEvaluateDsmMethodForDelayOnSxResume]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f1e0, 0x1d08 bytes
    // pci.sys PAGE:0x553d0, 0x1cf0 bytes
    // pci.sys PAGE:0x44498, 0x1cf0 bytes
    // pci.sys PAGE:0x55870, 0x1cf0 bytes
    //
    _v10(sdk::unknown_ptr) evaluate_dsm_method_for_delay_on_sx_resume;
    
    // [PciEvaluateDsmMethodForDelayOptimization]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35cb0, 0x1d08 bytes
    // pci.sys PAGE:0x41254, 0x1cf0 bytes
    // pci.sys PAGE:0x49478, 0x1cf0 bytes
    // pci.sys PAGE:0x40e54, 0x1cf0 bytes
    //
    _v11(sdk::unknown_ptr) evaluate_dsm_method_for_delay_optimization;
    
    // [PciEvaluateDsmMethodForLtr]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39538, 0x1d08 bytes
    // pci.sys PAGE:0x3ee3c, 0x1cf0 bytes
    // pci.sys PAGE:0x53e80, 0x1cf0 bytes
    // pci.sys PAGE:0x3d018, 0x1cf0 bytes
    //
    _v12(sdk::unknown_ptr) evaluate_dsm_method_for_ltr;
    
    // [PciEvaluateDsmMethodForObff]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39444, 0x1d08 bytes
    // pci.sys PAGE:0x3ed2c, 0x1cf0 bytes
    // pci.sys PAGE:0x5391c, 0x1cf0 bytes
    // pci.sys PAGE:0x3d264, 0x1cf0 bytes
    //
    _v13(sdk::unknown_ptr) evaluate_dsm_method_for_obff;
    
    // [PciEvaluateDsmMethodToIgnoreBootConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35a80, 0x1d08 bytes
    // pci.sys PAGE:0x411c0, 0x1cf0 bytes
    // pci.sys PAGE:0x4937c, 0x1cf0 bytes
    // pci.sys PAGE:0x40c00, 0x1cf0 bytes
    //
    _v14(sdk::unknown_ptr) evaluate_dsm_method_to_ignore_boot_config;
    
    // [PciExcludeRangesFromWindow]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a020, 0x1d08 bytes
    // pci.sys PAGE:0x3ea00, 0x1cf0 bytes
    // pci.sys PAGE:0x64f40, 0x1cf0 bytes
    // pci.sys PAGE:0x4d224, 0x1cf0 bytes
    //
    _v15(sdk::unknown_ptr) exclude_ranges_from_window;
    
    // [PciExecuteCriticalSystemRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x27f0, 0x1d08 bytes
    // pci.sys .text:0xcfa0, 0x1cf0 bytes
    // pci.sys .text:0xb240, 0x1cf0 bytes
    // pci.sys .text:0xeaf0, 0x1cf0 bytes
    //
    _v16(sdk::unknown_ptr) execute_critical_system_routine;
    
    // [ExpressAddIntegratedPortToRootComplex]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c50c, 0x1d08 bytes
    // pci.sys PAGE:0x51b6c, 0x1cf0 bytes
    // pci.sys PAGE:0x591f8, 0x1cf0 bytes
    // pci.sys PAGE:0x5207c, 0x1cf0 bytes
    //
    _v17(sdk::unknown_ptr) express_add_integrated_port_to_root_complex;
    
    // [ExpressAllocTphStEntries]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1813c, 0x1d08 bytes
    // pci.sys .text:0x25a28, 0x1cf0 bytes
    // pci.sys .text:0x27cb0, 0x1cf0 bytes
    // pci.sys .text:0x25848, 0x1cf0 bytes
    //
    _v18(sdk::unknown_ptr) express_alloc_tph_st_entries;
    
    // [ExpressApplyHPXSettings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13c80, 0x1d08 bytes
    // pci.sys .text:0x1d6bc, 0x1cf0 bytes
    // pci.sys .text:0x1e5d8, 0x1cf0 bytes
    // pci.sys .text:0x1d4bc, 0x1cf0 bytes
    //
    _v19(sdk::unknown_ptr) express_apply_hpx_settings;
    
    // [ExpressBridgeClearSpuriousHotPlugStatus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x21b8, 0x1d08 bytes
    // pci.sys .text:0x22460, 0x1cf0 bytes
    // pci.sys .text:0x243e0, 0x1cf0 bytes
    // pci.sys .text:0x22260, 0x1cf0 bytes
    //
    _v20(sdk::unknown_ptr) express_bridge_clear_spurious_hot_plug_status;
    
    // [ExpressBridgeConnectInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d670, 0x1d08 bytes
    // pci.sys PAGE:0x677f4, 0x1cf0 bytes
    // pci.sys PAGE:0x70034, 0x1cf0 bytes
    // pci.sys PAGE:0x65654, 0x1cf0 bytes
    //
    _v21(sdk::unknown_ptr) express_bridge_connect_interrupt;
    
    // [ExpressBridgeConnectMessageInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d490, 0x1d08 bytes
    // pci.sys PAGE:0x3ec80, 0x1cf0 bytes
    // pci.sys PAGE:0x54298, 0x1cf0 bytes
    // pci.sys PAGE:0x4c680, 0x1cf0 bytes
    //
    _v22(sdk::unknown_ptr) express_bridge_connect_message_interrupt;
    
    // [ExpressBridgeDisableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13378, 0x1d08 bytes
    // pci.sys .text:0x1c774, 0x1cf0 bytes
    // pci.sys .text:0x1d690, 0x1cf0 bytes
    // pci.sys .text:0x1c574, 0x1cf0 bytes
    //
    _v23(sdk::unknown_ptr) express_bridge_disable_interrupts;
    
    // [ExpressBridgeDisconnectInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4af5c, 0x1d08 bytes
    // pci.sys PAGE:0x61cf8, 0x1cf0 bytes
    // pci.sys PAGE:0x69b58, 0x1cf0 bytes
    // pci.sys PAGE:0x5fb58, 0x1cf0 bytes
    //
    _v24(sdk::unknown_ptr) express_bridge_disconnect_interrupt;
    
    // [ExpressBridgeEnableCommonClockConfiguration]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2cbd8, 0x1d08 bytes
    // pci.sys PAGE:0x5df68, 0x1cf0 bytes
    // pci.sys PAGE:0x5313c, 0x1cf0 bytes
    // pci.sys PAGE:0x5beb8, 0x1cf0 bytes
    //
    _v25(sdk::unknown_ptr) express_bridge_enable_common_clock_configuration;
    
    // [ExpressBridgeEnableDisableControllerInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2100, 0x1d08 bytes
    // pci.sys .text:0x1c7a0, 0x1cf0 bytes
    // pci.sys .text:0x1d6c0, 0x1cf0 bytes
    // pci.sys .text:0x1c5a0, 0x1cf0 bytes
    //
    _v26(sdk::unknown_ptr) express_bridge_enable_disable_controller_interrupts;
    
    // [ExpressBridgeExecuteHotPlugCommands]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1fa0, 0x1d08 bytes
    // pci.sys .text:0x1c9a0, 0x1cf0 bytes
    // pci.sys .text:0x1d8c0, 0x1cf0 bytes
    // pci.sys .text:0x1c7a0, 0x1cf0 bytes
    //
    _v27(sdk::unknown_ptr) express_bridge_execute_hot_plug_commands;
    
    // [ExpressBridgeExecuteHotPlugCommandsTimer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x133a0, 0x1d08 bytes
    // pci.sys .text:0x1cc10, 0x1cf0 bytes
    // pci.sys .text:0x1db30, 0x1cf0 bytes
    // pci.sys .text:0x1ca10, 0x1cf0 bytes
    //
    _v28(sdk::unknown_ptr) express_bridge_execute_hot_plug_commands_timer;
    
    // [ExpressBridgeExecuteHotPlugCommandsWorker]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x133e0, 0x1d08 bytes
    // pci.sys .text:0x1cc60, 0x1cf0 bytes
    // pci.sys .text:0x1db80, 0x1cf0 bytes
    // pci.sys .text:0x1ca60, 0x1cf0 bytes
    //
    _v29(sdk::unknown_ptr) express_bridge_execute_hot_plug_commands_worker;
    
    // [ExpressBridgeGetDevicePresenceState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8c50, 0x1d08 bytes
    // pci.sys .text:0x1cea0, 0x1cf0 bytes
    // pci.sys .text:0x1ddc0, 0x1cf0 bytes
    // pci.sys .text:0x1cca0, 0x1cf0 bytes
    //
    _v30(sdk::unknown_ptr) express_bridge_get_device_presence_state;
    
    // [ExpressBridgeGetHotPlugInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8ca0, 0x1d08 bytes
    // pci.sys .text:0x226d0, 0x1cf0 bytes
    // pci.sys .text:0x244f0, 0x1cf0 bytes
    // pci.sys .text:0x224d0, 0x1cf0 bytes
    //
    _v31(sdk::unknown_ptr) express_bridge_get_hot_plug_interrupts;
    
    // [ExpressBridgeGetLatchState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x135f0, 0x1d08 bytes
    // pci.sys .text:0x1cf00, 0x1cf0 bytes
    // pci.sys .text:0x1de20, 0x1cf0 bytes
    // pci.sys .text:0x1cd00, 0x1cf0 bytes
    //
    _v32(sdk::unknown_ptr) express_bridge_get_latch_state;
    
    // [ExpressBridgeGetLinkState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13640, 0x1d08 bytes
    // pci.sys .text:0x1cf60, 0x1cf0 bytes
    // pci.sys .text:0x1de80, 0x1cf0 bytes
    // pci.sys .text:0x1cd60, 0x1cf0 bytes
    //
    _v33(sdk::unknown_ptr) express_bridge_get_link_state;
    
    // [ExpressBridgeHotPlugInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2328, 0x1d08 bytes
    // pci.sys .text:0x2271c, 0x1cf0 bytes
    // pci.sys .text:0x2453c, 0x1cf0 bytes
    // pci.sys .text:0x2251c, 0x1cf0 bytes
    //
    _v34(sdk::unknown_ptr) express_bridge_hot_plug_interrupt_routine;
    
    // [ExpressBridgeInitializeLinkPowerManagement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d2c8, 0x1d08 bytes
    // pci.sys PAGE:0x4ca8c, 0x1cf0 bytes
    // pci.sys PAGE:0x53e44, 0x1cf0 bytes
    // pci.sys PAGE:0x3cf60, 0x1cf0 bytes
    //
    _v35(sdk::unknown_ptr) express_bridge_initialize_link_power_management;
    
    // [ExpressBridgePowerDown]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x136a8, 0x1d08 bytes
    // pci.sys .text:0x1cfd0, 0x1cf0 bytes
    // pci.sys .text:0x1deec, 0x1cf0 bytes
    // pci.sys .text:0x1cdd0, 0x1cf0 bytes
    //
    _v36(sdk::unknown_ptr) express_bridge_power_down;
    
    // [ExpressBridgePowerUp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13764, 0x1d08 bytes
    // pci.sys .text:0x1d0ec, 0x1cf0 bytes
    // pci.sys .text:0x1e008, 0x1cf0 bytes
    // pci.sys .text:0x1ceec, 0x1cf0 bytes
    //
    _v37(sdk::unknown_ptr) express_bridge_power_up;
    
    // [ExpressBridgeProcessAsyncHotPlugEvents]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1860, 0x1d08 bytes
    // pci.sys .text:0x229f4, 0x1cf0 bytes
    // pci.sys .text:0x24898, 0x1cf0 bytes
    // pci.sys .text:0x227f4, 0x1cf0 bytes
    //
    _v38(sdk::unknown_ptr) express_bridge_process_async_hot_plug_events;
    
    // [ExpressBridgeProcessMaxPayloadSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2cd14, 0x1d08 bytes
    // pci.sys PAGE:0x4d414, 0x1cf0 bytes
    // pci.sys PAGE:0x5ad24, 0x1cf0 bytes
    // pci.sys PAGE:0x4d034, 0x1cf0 bytes
    //
    _v39(sdk::unknown_ptr) express_bridge_process_max_payload_size;
    
    // [ExpressBridgeProcessNewHotPlugController]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d130, 0x1d08 bytes
    // pci.sys PAGE:0x4cab4, 0x1cf0 bytes
    // pci.sys PAGE:0x54640, 0x1cf0 bytes
    // pci.sys PAGE:0x3cf88, 0x1cf0 bytes
    //
    _v40(sdk::unknown_ptr) express_bridge_process_new_hot_plug_controller;
    
    // [ExpressBridgeRetrainLink]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2a80, 0x1d08 bytes
    // pci.sys .text:0x15980, 0x1cf0 bytes
    // pci.sys .text:0x8794, 0x1cf0 bytes
    // pci.sys .text:0x15934, 0x1cf0 bytes
    //
    _v41(sdk::unknown_ptr) express_bridge_retrain_link;
    
    // [ExpressBridgeSetInitialSlotState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2cea8, 0x1d08 bytes
    // pci.sys PAGE:0x61dd0, 0x1cf0 bytes
    // pci.sys PAGE:0x69c30, 0x1cf0 bytes
    // pci.sys PAGE:0x5fc30, 0x1cf0 bytes
    //
    _v42(sdk::unknown_ptr) express_bridge_set_initial_slot_state;
    
    // [ExpressBridgeSimulateHotPlugInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1f20, 0x1d08 bytes
    // pci.sys .text:0x22a90, 0x1cf0 bytes
    // pci.sys .text:0x24930, 0x1cf0 bytes
    // pci.sys .text:0x22890, 0x1cf0 bytes
    //
    _v43(sdk::unknown_ptr) express_bridge_simulate_hot_plug_interrupt;
    
    // [ExpressBridgeStallForLinkRetrain]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2fdc, 0x1d08 bytes
    // pci.sys .text:0x15a80, 0x1cf0 bytes
    // pci.sys .text:0x9350, 0x1cf0 bytes
    // pci.sys .text:0x15a34, 0x1cf0 bytes
    //
    _v44(sdk::unknown_ptr) express_bridge_stall_for_link_retrain;
    
    // [ExpressBridgeStart]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d530, 0x1d08 bytes
    // pci.sys PAGE:0x3eaa8, 0x1cf0 bytes
    // pci.sys PAGE:0x521ec, 0x1cf0 bytes
    // pci.sys PAGE:0x4c4a8, 0x1cf0 bytes
    //
    _v45(sdk::unknown_ptr) express_bridge_start;
    
    // [ExpressBridgeStop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4afe4, 0x1d08 bytes
    // pci.sys PAGE:0x61ebc, 0x1cf0 bytes
    // pci.sys PAGE:0x69d20, 0x1cf0 bytes
    // pci.sys PAGE:0x5fd1c, 0x1cf0 bytes
    //
    _v46(sdk::unknown_ptr) express_bridge_stop;
    
    // [ExpressCheckDeviceOnRootPort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ed44, 0x1d08 bytes
    // pci.sys PAGE:0x5537c, 0x1cf0 bytes
    // pci.sys PAGE:0x5b294, 0x1cf0 bytes
    // pci.sys PAGE:0x5581c, 0x1cf0 bytes
    //
    _v47(sdk::unknown_ptr) express_check_device_on_root_port;
    
    // [ExpressCheckForPendingTransactions]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13f24, 0x1d08 bytes
    // pci.sys .text:0x1d9c4, 0x1cf0 bytes
    // pci.sys .text:0x1e8d8, 0x1cf0 bytes
    // pci.sys .text:0x1d7c4, 0x1cf0 bytes
    //
    _v48(sdk::unknown_ptr) express_check_for_pending_transactions;
    
    // [ExpressCompatibilityRestorePortRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13f58, 0x1d08 bytes
    // pci.sys .text:0x1da00, 0x1cf0 bytes
    // pci.sys .text:0x1e914, 0x1cf0 bytes
    // pci.sys .text:0x1d800, 0x1cf0 bytes
    //
    _v49(sdk::unknown_ptr) express_compatibility_restore_port_registers;
    
    // [ExpressCompatibilitySaveExtendedCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b3f4, 0x1d08 bytes
    // pci.sys PAGE:0x62464, 0x1cf0 bytes
    // pci.sys PAGE:0x6a2d4, 0x1cf0 bytes
    // pci.sys PAGE:0x602c4, 0x1cf0 bytes
    //
    _v50(sdk::unknown_ptr) express_compatibility_save_extended_capabilities;
    
    // [ExpressCompatibilitySavePortRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13fcc, 0x1d08 bytes
    // pci.sys .text:0x1db00, 0x1cf0 bytes
    // pci.sys .text:0x1ea14, 0x1cf0 bytes
    // pci.sys .text:0x1d900, 0x1cf0 bytes
    //
    _v51(sdk::unknown_ptr) express_compatibility_save_port_registers;
    
    // [ExpressDestroyCompatibilityPort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1411c, 0x1d08 bytes
    // pci.sys .text:0x1dc68, 0x1cf0 bytes
    // pci.sys .text:0x1eb7c, 0x1cf0 bytes
    // pci.sys .text:0x1da68, 0x1cf0 bytes
    //
    _v52(sdk::unknown_ptr) express_destroy_compatibility_port;
    
    // [ExpressDestroyPort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1413c, 0x1d08 bytes
    // pci.sys .text:0x18a4, 0x1cf0 bytes
    // pci.sys .text:0x1ebb0, 0x1cf0 bytes
    // pci.sys .text:0x1c94, 0x1cf0 bytes
    //
    _v53(sdk::unknown_ptr) express_destroy_port;
    
    // [ExpressDestroyRootComplex]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e348, 0x1d08 bytes
    // pci.sys PAGE:0x69c80, 0x1cf0 bytes
    // pci.sys PAGE:0x72dc8, 0x1cf0 bytes
    // pci.sys PAGE:0x67ae0, 0x1cf0 bytes
    //
    _v54(sdk::unknown_ptr) express_destroy_root_complex;
    
    // [ExpressDestroyVirtualBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x138c0, 0x1d08 bytes
    // pci.sys .text:0x1d2e0, 0x1cf0 bytes
    // pci.sys .text:0x1e1fc, 0x1cf0 bytes
    // pci.sys .text:0x1d0e0, 0x1cf0 bytes
    //
    _v55(sdk::unknown_ptr) express_destroy_virtual_bridge;
    
    // [ExpressDevicesEnabledForWake]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23570, 0x1d08 bytes
    // pci.sys .data:0x34824, 0x1cf0 bytes
    // pci.sys .data:0x38884, 0x1cf0 bytes
    // pci.sys .data:0x32824, 0x1cf0 bytes
    //
    _v56(sdk::unknown_ptr) express_devices_enabled_for_wake;
    
    // [ExpressDownstreamSwitchPortDisableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16858, 0x1d08 bytes
    // pci.sys .text:0x22b00, 0x1cf0 bytes
    // pci.sys .text:0x249a0, 0x1cf0 bytes
    // pci.sys .text:0x22900, 0x1cf0 bytes
    //
    _v57(sdk::unknown_ptr) express_downstream_switch_port_disable_interrupts;
    
    // [ExpressDownstreamSwitchPortDisconnectInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d800, 0x1d08 bytes
    // pci.sys PAGE:0x67994, 0x1cf0 bytes
    // pci.sys PAGE:0x701d4, 0x1cf0 bytes
    // pci.sys PAGE:0x657f4, 0x1cf0 bytes
    //
    _v58(sdk::unknown_ptr) express_downstream_switch_port_disconnect_interrupt;
    
    // [ExpressDownstreamSwitchPortEnableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x168cc, 0x1d08 bytes
    // pci.sys .text:0x22b80, 0x1cf0 bytes
    // pci.sys .text:0x24a20, 0x1cf0 bytes
    // pci.sys .text:0x22980, 0x1cf0 bytes
    //
    _v59(sdk::unknown_ptr) express_downstream_switch_port_enable_interrupts;
    
    // [ExpressDownstreamSwitchPortInterruptDpc]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16960, 0x1d08 bytes
    // pci.sys .text:0x22cd0, 0x1cf0 bytes
    // pci.sys .text:0x24b70, 0x1cf0 bytes
    // pci.sys .text:0x22ad0, 0x1cf0 bytes
    //
    _v60(sdk::unknown_ptr) express_downstream_switch_port_interrupt_dpc;
    
    // [ExpressDownstreamSwitchPortInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16a40, 0x1d08 bytes
    // pci.sys .text:0x22e10, 0x1cf0 bytes
    // pci.sys .text:0x24ca0, 0x1cf0 bytes
    // pci.sys .text:0x22c10, 0x1cf0 bytes
    //
    _v61(sdk::unknown_ptr) express_downstream_switch_port_interrupt_routine;
    
    // [ExpressDownstreamSwitchPortProcessAspmPolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47924, 0x1d08 bytes
    // pci.sys PAGE:0x5e2c8, 0x1cf0 bytes
    // pci.sys PAGE:0x65464, 0x1cf0 bytes
    // pci.sys PAGE:0x5c218, 0x1cf0 bytes
    //
    _v62(sdk::unknown_ptr) express_downstream_switch_port_process_aspm_policy;
    
    // [ExpressEnableDisableDownstreamLinkStatesForRetrain]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2980, 0x1d08 bytes
    // pci.sys .text:0x15b20, 0x1cf0 bytes
    // pci.sys .text:0x93ac, 0x1cf0 bytes
    // pci.sys .text:0x15ad4, 0x1cf0 bytes
    //
    _v63(sdk::unknown_ptr) express_enable_disable_downstream_link_states_for_retrain;
    
    // [PciExpressErrorHandler]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8d90, 0x1d08 bytes
    // pci.sys .text:0x16a0, 0x1cf0 bytes
    // pci.sys .text:0x1940, 0x1cf0 bytes
    // pci.sys .text:0x1a90, 0x1cf0 bytes
    //
    _v64(sdk::unknown_ptr) express_error_handler;
    
    // [ExpressInitErrorSourceInfo]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c584, 0x1d08 bytes
    // pci.sys PAGE:0x51a10, 0x1cf0 bytes
    // pci.sys PAGE:0x58fc4, 0x1cf0 bytes
    // pci.sys PAGE:0x51f20, 0x1cf0 bytes
    //
    _v65(sdk::unknown_ptr) express_init_error_source_info;
    
    // [ExpressInitializeLtrValue]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x396fc, 0x1d08 bytes
    // pci.sys PAGE:0x3fcdc, 0x1cf0 bytes
    // pci.sys PAGE:0x520dc, 0x1cf0 bytes
    // pci.sys PAGE:0x3f330, 0x1cf0 bytes
    //
    _v66(sdk::unknown_ptr) express_initialize_ltr_value;
    
    // [ExpressInitializeNewCompatibilityPort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b4f8, 0x1d08 bytes
    // pci.sys PAGE:0x625e8, 0x1cf0 bytes
    // pci.sys PAGE:0x6a458, 0x1cf0 bytes
    // pci.sys PAGE:0x60448, 0x1cf0 bytes
    //
    _v67(sdk::unknown_ptr) express_initialize_new_compatibility_port;
    
    // [ExpressInitializeObffValue]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x395ac, 0x1d08 bytes
    // pci.sys PAGE:0x3fd98, 0x1cf0 bytes
    // pci.sys PAGE:0x51fa0, 0x1cf0 bytes
    // pci.sys PAGE:0x3f59c, 0x1cf0 bytes
    //
    _v68(sdk::unknown_ptr) express_initialize_obff_value;
    
    // [ExpressLinkDisableL0sL1State]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x245c, 0x1d08 bytes
    // pci.sys .text:0x15c14, 0x1cf0 bytes
    // pci.sys .text:0x982c, 0x1cf0 bytes
    // pci.sys .text:0x15bc8, 0x1cf0 bytes
    //
    _v69(sdk::unknown_ptr) express_link_disable_l0s_l1_state;
    
    // [ExpressLinkEnableL0sL1State]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xda78, 0x1d08 bytes
    // pci.sys .text:0x15e2c, 0x1cf0 bytes
    // pci.sys .text:0x14a88, 0x1cf0 bytes
    // pci.sys .text:0x15de0, 0x1cf0 bytes
    //
    _v70(sdk::unknown_ptr) express_link_enable_l0s_l1_state;
    
    // [ExpressLinkEnableL0sState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xdc38, 0x1d08 bytes
    // pci.sys .text:0x160c8, 0x1cf0 bytes
    // pci.sys .text:0x9cd4, 0x1cf0 bytes
    // pci.sys .text:0x1607c, 0x1cf0 bytes
    //
    _v71(sdk::unknown_ptr) express_link_enable_l0s_state;
    
    // [ExpressLinkPowerSchemeCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c430, 0x1d08 bytes
    // pci.sys PAGE:0x5e3a0, 0x1cf0 bytes
    // pci.sys PAGE:0x53b90, 0x1cf0 bytes
    // pci.sys PAGE:0x5c2f0, 0x1cf0 bytes
    //
    _v72(sdk::unknown_ptr) express_link_power_scheme_callback;
    
    // [ExpressLinkQuiescentDereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b670, 0x1d08 bytes
    // pci.sys PAGE:0x62790, 0x1cf0 bytes
    // pci.sys PAGE:0x6a5e0, 0x1cf0 bytes
    // pci.sys PAGE:0x605f0, 0x1cf0 bytes
    //
    _v73(sdk::unknown_ptr) express_link_quiescent_dereference;
    
    // [ExpressLinkQuiescentInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ac30, 0x1d08 bytes
    // pci.sys .rdata:0x28988, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9f8, 0x1cf0 bytes
    // pci.sys .rdata:0x27990, 0x1cf0 bytes
    //
    _v74(sdk::unknown_ptr) express_link_quiescent_interface;
    
    // [ExpressLinkQuiescentInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3eb80, 0x1d08 bytes
    // pci.sys PAGE:0x552e0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b200, 0x1cf0 bytes
    // pci.sys PAGE:0x55780, 0x1cf0 bytes
    //
    _v75(sdk::unknown_ptr) express_link_quiescent_interface_constructor;
    
    // [ExpressLinkQuiescentReference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c030, 0x1d08 bytes
    // pci.sys PAGE:0x3e0b0, 0x1cf0 bytes
    // pci.sys PAGE:0x43370, 0x1cf0 bytes
    // pci.sys PAGE:0x3c1f0, 0x1cf0 bytes
    //
    _v76(sdk::unknown_ptr) express_link_quiescent_reference;
    
    // [ExpressOverrideLinkPowerManagement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2ca18, 0x1d08 bytes
    // pci.sys PAGE:0x5e564, 0x1cf0 bytes
    // pci.sys PAGE:0x53874, 0x1cf0 bytes
    // pci.sys PAGE:0x5c4b4, 0x1cf0 bytes
    //
    _v77(sdk::unknown_ptr) express_override_link_power_management;
    
    // [ExpressPortEnterLinkQuiescentMode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b6a0, 0x1d08 bytes
    // pci.sys PAGE:0x627c0, 0x1cf0 bytes
    // pci.sys PAGE:0x6a610, 0x1cf0 bytes
    // pci.sys PAGE:0x60620, 0x1cf0 bytes
    //
    _v78(sdk::unknown_ptr) express_port_enter_link_quiescent_mode;
    
    // [ExpressPortExitLinkQuiescentMode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b7f0, 0x1d08 bytes
    // pci.sys PAGE:0x62960, 0x1cf0 bytes
    // pci.sys PAGE:0x6a7c0, 0x1cf0 bytes
    // pci.sys PAGE:0x607c0, 0x1cf0 bytes
    //
    _v79(sdk::unknown_ptr) express_port_exit_link_quiescent_mode;
    
    // [ExpressPortFindOptInOptOutPolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c1d4, 0x1d08 bytes
    // pci.sys PAGE:0x5e60c, 0x1cf0 bytes
    // pci.sys PAGE:0x54180, 0x1cf0 bytes
    // pci.sys PAGE:0x5c55c, 0x1cf0 bytes
    //
    _v80(sdk::unknown_ptr) express_port_find_opt_in_opt_out_policy;
    
    // [ExpressPortInitializeLinkPowerManagement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d0c4, 0x1d08 bytes
    // pci.sys PAGE:0x5e6b0, 0x1cf0 bytes
    // pci.sys PAGE:0x53604, 0x1cf0 bytes
    // pci.sys PAGE:0x5c600, 0x1cf0 bytes
    //
    _v81(sdk::unknown_ptr) express_port_initialize_link_power_management;
    
    // [ExpressPortObffEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3578, 0x1d08 bytes
    // pci.sys .text:0x3e94, 0x1cf0 bytes
    // pci.sys .text:0xd8d0, 0x1cf0 bytes
    // pci.sys .text:0x4f3c, 0x1cf0 bytes
    //
    _v82(sdk::unknown_ptr) express_port_obff_enable;
    
    // [ExpressPortUpdateLatencyBound]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x479ec, 0x1d08 bytes
    // pci.sys PAGE:0x5e7b8, 0x1cf0 bytes
    // pci.sys PAGE:0x536bc, 0x1cf0 bytes
    // pci.sys PAGE:0x5c708, 0x1cf0 bytes
    //
    _v83(sdk::unknown_ptr) express_port_update_latency_bound;
    
    // [ExpressProcessAerCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c674, 0x1d08 bytes
    // pci.sys PAGE:0x518bc, 0x1cf0 bytes
    // pci.sys PAGE:0x58e40, 0x1cf0 bytes
    // pci.sys PAGE:0x51dcc, 0x1cf0 bytes
    //
    _v84(sdk::unknown_ptr) express_process_aer_capability;
    
    // [ExpressProcessAriCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b8dc, 0x1d08 bytes
    // pci.sys PAGE:0x62a80, 0x1cf0 bytes
    // pci.sys PAGE:0x6a8e0, 0x1cf0 bytes
    // pci.sys PAGE:0x608e0, 0x1cf0 bytes
    //
    _v85(sdk::unknown_ptr) express_process_ari_capability;
    
    // [ExpressProcessExtendedPortCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e710, 0x1d08 bytes
    // pci.sys PAGE:0x51370, 0x1cf0 bytes
    // pci.sys PAGE:0x58bc8, 0x1cf0 bytes
    // pci.sys PAGE:0x51880, 0x1cf0 bytes
    //
    _v86(sdk::unknown_ptr) express_process_extended_port_capabilities;
    
    // [ExpressProcessNewDownstreamSwitchPortBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b0bc, 0x1d08 bytes
    // pci.sys PAGE:0x61fe4, 0x1cf0 bytes
    // pci.sys PAGE:0x69e48, 0x1cf0 bytes
    // pci.sys PAGE:0x5fe44, 0x1cf0 bytes
    //
    _v87(sdk::unknown_ptr) express_process_new_downstream_switch_port_bridge;
    
    // [ExpressProcessNewPort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e5e0, 0x1d08 bytes
    // pci.sys PAGE:0x5114c, 0x1cf0 bytes
    // pci.sys PAGE:0x5893c, 0x1cf0 bytes
    // pci.sys PAGE:0x5165c, 0x1cf0 bytes
    //
    _v88(sdk::unknown_ptr) express_process_new_port;
    
    // [ExpressProcessNewRootComplex]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a608, 0x1d08 bytes
    // pci.sys PAGE:0x53db4, 0x1cf0 bytes
    // pci.sys PAGE:0x440e8, 0x1cf0 bytes
    // pci.sys PAGE:0x541c4, 0x1cf0 bytes
    //
    _v89(sdk::unknown_ptr) express_process_new_root_complex;
    
    // [ExpressProcessNewRootPortBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e1c0, 0x1d08 bytes
    // pci.sys PAGE:0x4c80c, 0x1cf0 bytes
    // pci.sys PAGE:0x54344, 0x1cf0 bytes
    // pci.sys PAGE:0x3cce0, 0x1cf0 bytes
    //
    _v90(sdk::unknown_ptr) express_process_new_root_port_bridge;
    
    // [ExpressProcessNewUpstreamSwitchPortBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b268, 0x1d08 bytes
    // pci.sys PAGE:0x622a4, 0x1cf0 bytes
    // pci.sys PAGE:0x6a128, 0x1cf0 bytes
    // pci.sys PAGE:0x60104, 0x1cf0 bytes
    //
    _v91(sdk::unknown_ptr) express_process_new_upstream_switch_port_bridge;
    
    // [ExpressProcessNewVirtualBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d870, 0x1d08 bytes
    // pci.sys PAGE:0x4c46c, 0x1cf0 bytes
    // pci.sys PAGE:0x547f0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c940, 0x1cf0 bytes
    //
    _v92(sdk::unknown_ptr) express_process_new_virtual_bridge;
    
    // [ExpressProcessPortRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f8e0, 0x1d08 bytes
    // pci.sys PAGE:0x434d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4e53c, 0x1cf0 bytes
    // pci.sys PAGE:0x43bd8, 0x1cf0 bytes
    //
    _v93(sdk::unknown_ptr) express_process_port_registers;
    
    // [ExpressProcessSerialNumberCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b944, 0x1d08 bytes
    // pci.sys PAGE:0x51aec, 0x1cf0 bytes
    // pci.sys PAGE:0x59178, 0x1cf0 bytes
    // pci.sys PAGE:0x51ffc, 0x1cf0 bytes
    //
    _v94(sdk::unknown_ptr) express_process_serial_number_capability;
    
    // [ExpressProcessSriovCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b9b4, 0x1d08 bytes
    // pci.sys PAGE:0x62b08, 0x1cf0 bytes
    // pci.sys PAGE:0x6a960, 0x1cf0 bytes
    // pci.sys PAGE:0x60968, 0x1cf0 bytes
    //
    _v95(sdk::unknown_ptr) express_process_sriov_capability;
    
    // [ExpressRemoveIntegratedPortFromRootComplex]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4badc, 0x1d08 bytes
    // pci.sys PAGE:0x3e62c, 0x1cf0 bytes
    // pci.sys PAGE:0x6aa9c, 0x1cf0 bytes
    // pci.sys PAGE:0x3c76c, 0x1cf0 bytes
    //
    _v96(sdk::unknown_ptr) express_remove_integrated_port_from_root_complex;
    
    // [ExpressRestorePortRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x52b4, 0x1d08 bytes
    // pci.sys .text:0xe44c, 0x1cf0 bytes
    // pci.sys .text:0xcaa8, 0x1cf0 bytes
    // pci.sys .text:0x1037c, 0x1cf0 bytes
    //
    _v97(sdk::unknown_ptr) express_restore_port_registers;
    
    // [ExpressRestoreTphMsiXStEntries]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18174, 0x1d08 bytes
    // pci.sys .text:0x25a6c, 0x1cf0 bytes
    // pci.sys .text:0x27cf4, 0x1cf0 bytes
    // pci.sys .text:0x2588c, 0x1cf0 bytes
    //
    _v98(sdk::unknown_ptr) express_restore_tph_msi_x_st_entries;
    
    // [ExpressRootPortAckPmeEvent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13b44, 0x1d08 bytes
    // pci.sys .text:0x1d5d4, 0x1cf0 bytes
    // pci.sys .text:0x1e4f0, 0x1cf0 bytes
    // pci.sys .text:0x1d3d4, 0x1cf0 bytes
    //
    _v99(sdk::unknown_ptr) express_root_port_ack_pme_event;
    
    // [ExpressRootPortAerInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8760, 0x1d08 bytes
    // pci.sys .text:0x23468, 0x1cf0 bytes
    // pci.sys .text:0x252f8, 0x1cf0 bytes
    // pci.sys .text:0x23268, 0x1cf0 bytes
    //
    _w00(sdk::unknown_ptr) express_root_port_aer_interrupt_routine;
    
    // [ExpressRootPortConnectInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d418, 0x1d08 bytes
    // pci.sys PAGE:0x3ebf8, 0x1cf0 bytes
    // pci.sys PAGE:0x54210, 0x1cf0 bytes
    // pci.sys PAGE:0x4c5f8, 0x1cf0 bytes
    //
    _w01(sdk::unknown_ptr) express_root_port_connect_interrupt;
    
    // [ExpressRootPortDisableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2848, 0x1d08 bytes
    // pci.sys .text:0xc3b8, 0x1cf0 bytes
    // pci.sys .text:0xab18, 0x1cf0 bytes
    // pci.sys .text:0x51f4, 0x1cf0 bytes
    //
    _w02(sdk::unknown_ptr) express_root_port_disable_interrupts;
    
    // [ExpressRootPortDisablePmeInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16e48, 0x1d08 bytes
    // pci.sys .text:0x23a1c, 0x1cf0 bytes
    // pci.sys .text:0x25614, 0x1cf0 bytes
    // pci.sys .text:0x2381c, 0x1cf0 bytes
    //
    _w03(sdk::unknown_ptr) express_root_port_disable_pme_interrupt;
    
    // [ExpressRootPortDisconnectInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d858, 0x1d08 bytes
    // pci.sys PAGE:0x67ddc, 0x1cf0 bytes
    // pci.sys PAGE:0x703b4, 0x1cf0 bytes
    // pci.sys PAGE:0x65c3c, 0x1cf0 bytes
    //
    _w04(sdk::unknown_ptr) express_root_port_disconnect_interrupt;
    
    // [ExpressRootPortEnableInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x28dc, 0x1d08 bytes
    // pci.sys .text:0x4084, 0x1cf0 bytes
    // pci.sys .text:0xa8ac, 0x1cf0 bytes
    // pci.sys .text:0xdbe4, 0x1cf0 bytes
    //
    _w05(sdk::unknown_ptr) express_root_port_enable_interrupts;
    
    // [ExpressRootPortEnablePmeInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2a44, 0x1d08 bytes
    // pci.sys .text:0x4120, 0x1cf0 bytes
    // pci.sys .text:0xa9d8, 0x1cf0 bytes
    // pci.sys .text:0xdc80, 0x1cf0 bytes
    //
    _w06(sdk::unknown_ptr) express_root_port_enable_pme_interrupt;
    
    // [ExpressRootPortHandlePmeEventOnPowerUp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13b84, 0x1d08 bytes
    // pci.sys .text:0x1d618, 0x1cf0 bytes
    // pci.sys .text:0x1e534, 0x1cf0 bytes
    // pci.sys .text:0x1d418, 0x1cf0 bytes
    //
    _w07(sdk::unknown_ptr) express_root_port_handle_pme_event_on_power_up;
    
    // [ExpressRootPortInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ac10, 0x1d08 bytes
    // pci.sys .rdata:0x28968, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9d8, 0x1cf0 bytes
    // pci.sys .rdata:0x27970, 0x1cf0 bytes
    //
    _w08(sdk::unknown_ptr) express_root_port_interface;
    
    // [ExpressRootPortInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ec60, 0x1d08 bytes
    // pci.sys PAGE:0x55340, 0x1cf0 bytes
    // pci.sys PAGE:0x5b260, 0x1cf0 bytes
    // pci.sys PAGE:0x557e0, 0x1cf0 bytes
    //
    _w09(sdk::unknown_ptr) express_root_port_interface_constructor;
    
    // [ExpressRootPortInterfaceDereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bb90, 0x1d08 bytes
    // pci.sys PAGE:0x62c50, 0x1cf0 bytes
    // pci.sys PAGE:0x6ab70, 0x1cf0 bytes
    // pci.sys PAGE:0x60ab0, 0x1cf0 bytes
    //
    _w10(sdk::unknown_ptr) express_root_port_interface_dereference;
    
    // [ExpressRootPortInterfaceReference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c020, 0x1d08 bytes
    // pci.sys PAGE:0x3e0c0, 0x1cf0 bytes
    // pci.sys PAGE:0x43380, 0x1cf0 bytes
    // pci.sys PAGE:0x3c200, 0x1cf0 bytes
    //
    _w11(sdk::unknown_ptr) express_root_port_interface_reference;
    
    // [ExpressRootPortInterruptDpc]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8a20, 0x1d08 bytes
    // pci.sys .text:0x23d20, 0x1cf0 bytes
    // pci.sys .text:0x25660, 0x1cf0 bytes
    // pci.sys .text:0x23b20, 0x1cf0 bytes
    //
    _w12(sdk::unknown_ptr) express_root_port_interrupt_dpc;
    
    // [ExpressRootPortInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15c0, 0x1d08 bytes
    // pci.sys .text:0x23e80, 0x1cf0 bytes
    // pci.sys .text:0x257b0, 0x1cf0 bytes
    // pci.sys .text:0x23c80, 0x1cf0 bytes
    //
    _w13(sdk::unknown_ptr) express_root_port_interrupt_routine;
    
    // [ExpressRootPortMessageRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8cf0, 0x1d08 bytes
    // pci.sys .text:0x23f80, 0x1cf0 bytes
    // pci.sys .text:0x258b0, 0x1cf0 bytes
    // pci.sys .text:0x23d80, 0x1cf0 bytes
    //
    _w14(sdk::unknown_ptr) express_root_port_message_routine;
    
    // [ExpressRootPortPmeInterruptRoutine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1710c, 0x1d08 bytes
    // pci.sys .text:0x24058, 0x1cf0 bytes
    // pci.sys .text:0x25988, 0x1cf0 bytes
    // pci.sys .text:0x23e58, 0x1cf0 bytes
    //
    _w15(sdk::unknown_ptr) express_root_port_pme_interrupt_routine;
    
    // [ExpressRootPortReadConfigSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x141c0, 0x1d08 bytes
    // pci.sys .text:0x1dca0, 0x1cf0 bytes
    // pci.sys .text:0x1ec50, 0x1cf0 bytes
    // pci.sys .text:0x1daa0, 0x1cf0 bytes
    //
    _w16(sdk::unknown_ptr) express_root_port_read_config_space;
    
    // [ExpressRootPortUpdateMaxPayloadSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4b358, 0x1d08 bytes
    // pci.sys PAGE:0x623bc, 0x1cf0 bytes
    // pci.sys PAGE:0x6a22c, 0x1cf0 bytes
    // pci.sys PAGE:0x6021c, 0x1cf0 bytes
    //
    _w17(sdk::unknown_ptr) express_root_port_update_max_payload_size;
    
    // [ExpressRootPortWriteConfigSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x142c0, 0x1d08 bytes
    // pci.sys .text:0x1ddc0, 0x1cf0 bytes
    // pci.sys .text:0x1ed80, 0x1cf0 bytes
    // pci.sys .text:0x1dbc0, 0x1cf0 bytes
    //
    _w18(sdk::unknown_ptr) express_root_port_write_config_space;
    
    // [ExpressSaveExtendedPortCapabilityPointers]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f4b0, 0x1d08 bytes
    // pci.sys PAGE:0x51440, 0x1cf0 bytes
    // pci.sys PAGE:0x4e7c4, 0x1cf0 bytes
    // pci.sys PAGE:0x51950, 0x1cf0 bytes
    //
    _w19(sdk::unknown_ptr) express_save_extended_port_capability_pointers;
    
    // [ExpressSaveLtrCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17bbc, 0x1d08 bytes
    // pci.sys .text:0x248bc, 0x1cf0 bytes
    // pci.sys .text:0x9a24, 0x1cf0 bytes
    // pci.sys .text:0x246bc, 0x1cf0 bytes
    //
    _w20(sdk::unknown_ptr) express_save_ltr_capability;
    
    // [ExpressSavePortRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x143a4, 0x1d08 bytes
    // pci.sys .text:0x1dec8, 0x1cf0 bytes
    // pci.sys .text:0x1ee94, 0x1cf0 bytes
    // pci.sys .text:0x1dcc8, 0x1cf0 bytes
    //
    _w21(sdk::unknown_ptr) express_save_port_registers;
    
    // [ExpressSaveTphMsiXStEntries]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x182ac, 0x1d08 bytes
    // pci.sys .text:0x25b10, 0x1cf0 bytes
    // pci.sys .text:0x27e44, 0x1cf0 bytes
    // pci.sys .text:0x25930, 0x1cf0 bytes
    //
    _w22(sdk::unknown_ptr) express_save_tph_msi_x_st_entries;
    
    // [ExpressSaveTphRequesterCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18340, 0x1d08 bytes
    // pci.sys .text:0x25bb4, 0x1cf0 bytes
    // pci.sys .text:0x27ee8, 0x1cf0 bytes
    // pci.sys .text:0x259d4, 0x1cf0 bytes
    //
    _w23(sdk::unknown_ptr) express_save_tph_requester_capability;
    
    // [ExpressSaveTphStEntries]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x184b4, 0x1d08 bytes
    // pci.sys .text:0x25d3c, 0x1cf0 bytes
    // pci.sys .text:0x28070, 0x1cf0 bytes
    // pci.sys .text:0x25b5c, 0x1cf0 bytes
    //
    _w24(sdk::unknown_ptr) express_save_tph_st_entries;
    
    // [ExpressSwitchUpdateLinkLatency]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47ae8, 0x1d08 bytes
    // pci.sys PAGE:0x5e8b8, 0x1cf0 bytes
    // pci.sys PAGE:0x6553c, 0x1cf0 bytes
    // pci.sys PAGE:0x5c808, 0x1cf0 bytes
    //
    _w25(sdk::unknown_ptr) express_switch_update_link_latency;
    
    // [ExpressUpdateBaselineLinkPowerManagementSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2ca94, 0x1d08 bytes
    // pci.sys PAGE:0x5ea70, 0x1cf0 bytes
    // pci.sys PAGE:0x53534, 0x1cf0 bytes
    // pci.sys PAGE:0x5c9c0, 0x1cf0 bytes
    //
    _w26(sdk::unknown_ptr) express_update_baseline_link_power_management_support;
    
    // [ExpressUpdateBaselineVersion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2cb38, 0x1d08 bytes
    // pci.sys PAGE:0x5eb3c, 0x1cf0 bytes
    // pci.sys PAGE:0x53468, 0x1cf0 bytes
    // pci.sys PAGE:0x5ca8c, 0x1cf0 bytes
    //
    _w27(sdk::unknown_ptr) express_update_baseline_version;
    
    // [ExpressUpdateLinkPowerManagementSupport]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d3c8, 0x1d08 bytes
    // pci.sys PAGE:0x5ec20, 0x1cf0 bytes
    // pci.sys PAGE:0x53824, 0x1cf0 bytes
    // pci.sys PAGE:0x5cb70, 0x1cf0 bytes
    //
    _w28(sdk::unknown_ptr) express_update_link_power_management_support;
    
    // [ExpressUpdatePortLineage]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e550, 0x1d08 bytes
    // pci.sys PAGE:0x51654, 0x1cf0 bytes
    // pci.sys PAGE:0x58d10, 0x1cf0 bytes
    // pci.sys PAGE:0x51b64, 0x1cf0 bytes
    //
    _w29(sdk::unknown_ptr) express_update_port_lineage;
    
    // [ExpressUpdateReceiveLaneExitLatency]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2d300, 0x1d08 bytes
    // pci.sys PAGE:0x5ec78, 0x1cf0 bytes
    // pci.sys PAGE:0x53758, 0x1cf0 bytes
    // pci.sys PAGE:0x5cbc8, 0x1cf0 bytes
    //
    _w30(sdk::unknown_ptr) express_update_receive_lane_exit_latency;
    
    // [ExpressUpdateWakeControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1181c, 0x1d08 bytes
    // pci.sys .text:0x1ff0, 0x1cf0 bytes
    // pci.sys .text:0x1affc, 0x1cf0 bytes
    // pci.sys .text:0x2be8, 0x1cf0 bytes
    //
    _w31(sdk::unknown_ptr) express_update_wake_control;
    
    // [ExpressValidateFabricTopology]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e4d8, 0x1d08 bytes
    // pci.sys PAGE:0x51700, 0x1cf0 bytes
    // pci.sys PAGE:0x58db8, 0x1cf0 bytes
    // pci.sys PAGE:0x51c10, 0x1cf0 bytes
    //
    _w32(sdk::unknown_ptr) express_validate_fabric_topology;
    
    // [ExpressWaitForPendingTransactions]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x146e0, 0x1d08 bytes
    // pci.sys .text:0x1e26c, 0x1cf0 bytes
    // pci.sys .text:0x1f2b8, 0x1cf0 bytes
    // pci.sys .text:0x1e06c, 0x1cf0 bytes
    //
    _w33(sdk::unknown_ptr) express_wait_for_pending_transactions;
    
    // [ExpressWakeControlLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23578, 0x1d08 bytes
    // pci.sys .data:0x34828, 0x1cf0 bytes
    // pci.sys .data:0x38888, 0x1cf0 bytes
    // pci.sys .data:0x32828, 0x1cf0 bytes
    //
    _w34(sdk::unknown_ptr) express_wake_control_lock;
    
    // [PciExpressWakeStates]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b670, 0x1d08 bytes
    // pci.sys .rdata:0x29730, 0x1cf0 bytes
    // pci.sys .rdata:0x2faf0, 0x1cf0 bytes
    // pci.sys .rdata:0x29bd0, 0x1cf0 bytes
    //
    _w35(sdk::unknown_ptr) express_wake_states;
    
    // [PciExtendBusNumberRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48c04, 0x1d08 bytes
    // pci.sys PAGE:0x6008c, 0x1cf0 bytes
    // pci.sys PAGE:0x669fc, 0x1cf0 bytes
    // pci.sys PAGE:0x5dfdc, 0x1cf0 bytes
    //
    _w36(sdk::unknown_ptr) extend_bus_number_range;
    
    // [PciExternalReadDeviceConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10f0, 0x1d08 bytes
    // pci.sys .text:0x1a210, 0x1cf0 bytes
    // pci.sys .text:0x19ca0, 0x1cf0 bytes
    // pci.sys .text:0x1700, 0x1cf0 bytes
    //
    _w37(sdk::unknown_ptr) external_read_device_config;
    
    // [PciExternalWriteDeviceConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x79c0, 0x1d08 bytes
    // pci.sys .text:0xb440, 0x1cf0 bytes
    // pci.sys .text:0xc7a4, 0x1cf0 bytes
    // pci.sys .text:0xcb50, 0x1cf0 bytes
    //
    _w38(sdk::unknown_ptr) external_write_device_config;
    
    // [PciFindAddressForRom]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4de00, 0x1d08 bytes
    // pci.sys PAGE:0x696e8, 0x1cf0 bytes
    // pci.sys PAGE:0x72830, 0x1cf0 bytes
    // pci.sys PAGE:0x67548, 0x1cf0 bytes
    //
    _w39(sdk::unknown_ptr) find_address_for_rom;
    
    // [PciFindCapOffsetRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x109c8, 0x1d08 bytes
    // pci.sys .text:0x6120, 0x1cf0 bytes
    // pci.sys .text:0x6a00, 0x1cf0 bytes
    // pci.sys .text:0x7460, 0x1cf0 bytes
    //
    _w40(sdk::unknown_ptr) find_cap_offset_raw;
    
    // [PciFindDeviceByLocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17a90, 0x1d08 bytes
    // pci.sys .text:0x24748, 0x1cf0 bytes
    // pci.sys .text:0x2606c, 0x1cf0 bytes
    // pci.sys .text:0x24548, 0x1cf0 bytes
    //
    _w41(sdk::unknown_ptr) find_device_by_location;
    
    // [PciFindDeviceInTree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38dc0, 0x1d08 bytes
    // pci.sys PAGE:0x4a900, 0x1cf0 bytes
    // pci.sys PAGE:0x45c08, 0x1cf0 bytes
    // pci.sys PAGE:0x3e5fc, 0x1cf0 bytes
    //
    _w42(sdk::unknown_ptr) find_device_in_tree;
    
    // [PciFindExtCapOffsetRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10ac8, 0x1d08 bytes
    // pci.sys .text:0xc2b8, 0x1cf0 bytes
    // pci.sys .text:0x60a4, 0x1cf0 bytes
    // pci.sys .text:0xdae4, 0x1cf0 bytes
    //
    _w43(sdk::unknown_ptr) find_ext_cap_offset_raw;
    
    // [PciFindIntelTbVsecCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10b90, 0x1d08 bytes
    // pci.sys .text:0x1a990, 0x1cf0 bytes
    // pci.sys .text:0x1a430, 0x1cf0 bytes
    // pci.sys .text:0x1a730, 0x1cf0 bytes
    //
    _w44(sdk::unknown_ptr) find_intel_tb_vsec_callback;
    
    // [PciFindLargestBusNumberGap]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48cac, 0x1d08 bytes
    // pci.sys PAGE:0x60150, 0x1cf0 bytes
    // pci.sys PAGE:0x66ac0, 0x1cf0 bytes
    // pci.sys PAGE:0x5e0a0, 0x1cf0 bytes
    //
    _w45(sdk::unknown_ptr) find_largest_bus_number_gap;
    
    // [PciFindSuitableIsaBitRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47688, 0x1d08 bytes
    // pci.sys PAGE:0x5db50, 0x1cf0 bytes
    // pci.sys PAGE:0x6500c, 0x1cf0 bytes
    // pci.sys PAGE:0x5baa0, 0x1cf0 bytes
    //
    _w46(sdk::unknown_ptr) find_suitable_isa_bit_range;
    
    // [PciFixupBridgeBusNumbers]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e3e4, 0x1d08 bytes
    // pci.sys PAGE:0x42084, 0x1cf0 bytes
    // pci.sys PAGE:0x5b6ec, 0x1cf0 bytes
    // pci.sys PAGE:0x42174, 0x1cf0 bytes
    //
    _w47(sdk::unknown_ptr) fixup_bridge_bus_numbers;
    
    // [PciFreeNumaInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c03c, 0x1d08 bytes
    // pci.sys PAGE:0x66a20, 0x1cf0 bytes
    // pci.sys PAGE:0x6ed90, 0x1cf0 bytes
    // pci.sys PAGE:0x64880, 0x1cf0 bytes
    //
    _w48(sdk::unknown_ptr) free_numa_information;
    
    // [PciGetAcpiTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x51aac, 0x1d08 bytes
    // pci.sys INIT:0x6f9c0, 0x1cf0 bytes
    // pci.sys INIT:0x79590, 0x1cf0 bytes
    // pci.sys INIT:0x6dcc8, 0x1cf0 bytes
    //
    _w49(sdk::unknown_ptr) get_acpi_table;
    
    // [PciGetAssignmentSetOverride]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ca48, 0x1d08 bytes
    // pci.sys PAGE:0x43a5c, 0x1cf0 bytes
    // pci.sys PAGE:0x4ca90, 0x1cf0 bytes
    // pci.sys PAGE:0x44278, 0x1cf0 bytes
    //
    _w50(sdk::unknown_ptr) get_assignment_set_override;
    
    // [PciGetBusHackFlags]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37170, 0x1d08 bytes
    // pci.sys PAGE:0x4aa40, 0x1cf0 bytes
    // pci.sys PAGE:0x45d48, 0x1cf0 bytes
    // pci.sys PAGE:0x4a398, 0x1cf0 bytes
    //
    _w51(sdk::unknown_ptr) get_bus_hack_flags;
    
    // [PciGetConfigSlotAndBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9398, 0x1d08 bytes
    // pci.sys .text:0x1a3e4, 0x1cf0 bytes
    // pci.sys .text:0xca2c, 0x1cf0 bytes
    // pci.sys .text:0x1a2e8, 0x1cf0 bytes
    //
    _w52(sdk::unknown_ptr) get_config_slot_and_bus;
    
    // [PciGetDebugPorts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x51338, 0x1d08 bytes
    // pci.sys INIT:0x702ec, 0x1cf0 bytes
    // pci.sys INIT:0x78270, 0x1cf0 bytes
    // pci.sys INIT:0x6e2ec, 0x1cf0 bytes
    //
    _w53(sdk::unknown_ptr) get_debug_ports;
    
    // [PciGetDeviceProperty]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ef10, 0x1d08 bytes
    // pci.sys PAGE:0x408a0, 0x1cf0 bytes
    // pci.sys PAGE:0x51144, 0x1cf0 bytes
    // pci.sys PAGE:0x3ff60, 0x1cf0 bytes
    //
    _w54(sdk::unknown_ptr) get_device_property;
    
    // [PciGetHackFlagsFromEM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x42f0, 0x1d08 bytes
    // pci.sys .text:0xda24, 0x1cf0 bytes
    // pci.sys .text:0xb9f4, 0x1cf0 bytes
    // pci.sys .text:0xf574, 0x1cf0 bytes
    //
    _w55(sdk::unknown_ptr) get_hack_flags_from_em;
    
    // [PciGetHackFlagsFromRegistry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x446c, 0x1d08 bytes
    // pci.sys .text:0xeb1c, 0x1cf0 bytes
    // pci.sys .text:0xcfcc, 0x1cf0 bytes
    // pci.sys .text:0x109a8, 0x1cf0 bytes
    //
    _w56(sdk::unknown_ptr) get_hack_flags_from_registry;
    
    // [PciGetHardwarePowerState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x81d8, 0x1d08 bytes
    // pci.sys .text:0xec8c, 0x1cf0 bytes
    // pci.sys .text:0xd154, 0x1cf0 bytes
    // pci.sys .text:0x10b18, 0x1cf0 bytes
    //
    _w57(sdk::unknown_ptr) get_hardware_power_state;
    
    // [PciGetHPPParameters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7060, 0x1d08 bytes
    // pci.sys .text:0x4780, 0x1cf0 bytes
    // pci.sys .text:0x2394, 0x1cf0 bytes
    // pci.sys .text:0x594c, 0x1cf0 bytes
    //
    _w58(sdk::unknown_ptr) get_hpp_parameters;
    
    // [PciGetHPXParameters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6f40, 0x1d08 bytes
    // pci.sys .text:0x466c, 0x1cf0 bytes
    // pci.sys .text:0x25b4, 0x1cf0 bytes
    // pci.sys .text:0x5838, 0x1cf0 bytes
    //
    _w59(sdk::unknown_ptr) get_hpx_parameters;
    
    // [PciGetInterruptConnectionData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d820, 0x1d08 bytes
    // pci.sys PAGE:0x4018c, 0x1cf0 bytes
    // pci.sys PAGE:0x51724, 0x1cf0 bytes
    // pci.sys PAGE:0x3f84c, 0x1cf0 bytes
    //
    _w60(sdk::unknown_ptr) get_interrupt_connection_data;
    
    // [PciGetInterruptRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e7d0, 0x1d08 bytes
    // pci.sys PAGE:0x5288c, 0x1cf0 bytes
    // pci.sys PAGE:0x59290, 0x1cf0 bytes
    // pci.sys PAGE:0x52d9c, 0x1cf0 bytes
    //
    _w61(sdk::unknown_ptr) get_interrupt_requirement;
    
    // [PciGetLengthFromBar]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3134, 0x1d08 bytes
    // pci.sys .text:0x4560, 0x1cf0 bytes
    // pci.sys .text:0x4304, 0x1cf0 bytes
    // pci.sys .text:0x10b50, 0x1cf0 bytes
    //
    _w62(sdk::unknown_ptr) get_length_from_bar;
    
    // [PciGetMessageAffinityMask]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4cb58, 0x1d08 bytes
    // pci.sys PAGE:0x67434, 0x1cf0 bytes
    // pci.sys PAGE:0x4cd80, 0x1cf0 bytes
    // pci.sys PAGE:0x65294, 0x1cf0 bytes
    //
    _w63(sdk::unknown_ptr) get_message_affinity_mask;
    
    // [PciGetMessageCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35910, 0x1d08 bytes
    // pci.sys PAGE:0x47bd0, 0x1cf0 bytes
    // pci.sys PAGE:0x4a3f8, 0x1cf0 bytes
    // pci.sys PAGE:0x48360, 0x1cf0 bytes
    //
    _w64(sdk::unknown_ptr) get_message_count;
    
    // [PciGetMessageDevicePolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ccb4, 0x1d08 bytes
    // pci.sys PAGE:0x49e04, 0x1cf0 bytes
    // pci.sys PAGE:0x6fbd4, 0x1cf0 bytes
    // pci.sys PAGE:0x49fe0, 0x1cf0 bytes
    //
    _w65(sdk::unknown_ptr) get_message_device_policy;
    
    // [PciGetMessagePolicy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ce28, 0x1d08 bytes
    // pci.sys PAGE:0x49ff0, 0x1cf0 bytes
    // pci.sys PAGE:0x4bb80, 0x1cf0 bytes
    // pci.sys PAGE:0x4a1cc, 0x1cf0 bytes
    //
    _w66(sdk::unknown_ptr) get_message_policy;
    
    // [PciGetMessageRangeElements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4cf88, 0x1d08 bytes
    // pci.sys PAGE:0x47d74, 0x1cf0 bytes
    // pci.sys PAGE:0x4c710, 0x1cf0 bytes
    // pci.sys PAGE:0x48504, 0x1cf0 bytes
    //
    _w67(sdk::unknown_ptr) get_message_range_elements;
    
    // [PciGetNumaInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b298, 0x1d08 bytes
    // pci.sys PAGE:0x4dbf8, 0x1cf0 bytes
    // pci.sys PAGE:0x43b90, 0x1cf0 bytes
    // pci.sys PAGE:0x4e0fc, 0x1cf0 bytes
    //
    _w68(sdk::unknown_ptr) get_numa_information;
    
    // [PciGetPmeInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3744, 0x1d08 bytes
    // pci.sys .text:0x2cfc, 0x1cf0 bytes
    // pci.sys .text:0xd08c, 0x1cf0 bytes
    // pci.sys .text:0x3c7c, 0x1cf0 bytes
    //
    _w69(sdk::unknown_ptr) get_pme_information;
    
    // [PciGetRegistryValue]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x349a0, 0x1d08 bytes
    // pci.sys PAGE:0x46350, 0x1cf0 bytes
    // pci.sys PAGE:0x4cb70, 0x1cf0 bytes
    // pci.sys PAGE:0x46c70, 0x1cf0 bytes
    //
    _w70(sdk::unknown_ptr) get_registry_value;
    
    // [PciGetRootBusNumbersFromBootConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ed9c, 0x1d08 bytes
    // pci.sys PAGE:0x54b84, 0x1cf0 bytes
    // pci.sys PAGE:0x442f8, 0x1cf0 bytes
    // pci.sys PAGE:0x55024, 0x1cf0 bytes
    //
    _w71(sdk::unknown_ptr) get_root_bus_numbers_from_boot_config;
    
    // [PciGetSaveRestoreData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x46a0, 0x1d08 bytes
    // pci.sys .text:0xaa88, 0x1cf0 bytes
    // pci.sys .text:0x3cec, 0x1cf0 bytes
    // pci.sys .text:0xc1b8, 0x1cf0 bytes
    //
    _w72(sdk::unknown_ptr) get_save_restore_data;
    
    // [PciGetSavedSlotInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37074, 0x1d08 bytes
    // pci.sys PAGE:0x46a9c, 0x1cf0 bytes
    // pci.sys PAGE:0x4c020, 0x1cf0 bytes
    // pci.sys PAGE:0x473bc, 0x1cf0 bytes
    //
    _w73(sdk::unknown_ptr) get_saved_slot_information;
    
    // [PciGetSegmentForRootBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3ee5c, 0x1d08 bytes
    // pci.sys PAGE:0x54c54, 0x1cf0 bytes
    // pci.sys PAGE:0x443c8, 0x1cf0 bytes
    // pci.sys PAGE:0x550f4, 0x1cf0 bytes
    //
    _w74(sdk::unknown_ptr) get_segment_for_root_bus;
    
    // [PciGetSystemWideHackFlags]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x511b4, 0x1d08 bytes
    // pci.sys INIT:0x6fd24, 0x1cf0 bytes
    // pci.sys INIT:0x78a0c, 0x1cf0 bytes
    // pci.sys INIT:0x6d334, 0x1cf0 bytes
    //
    _w75(sdk::unknown_ptr) get_system_wide_hack_flags;
    
    // [PciGetSystemWideHackFlagsFromEM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x5120c, 0x1d08 bytes
    // pci.sys INIT:0x6fd84, 0x1cf0 bytes
    // pci.sys INIT:0x788fc, 0x1cf0 bytes
    // pci.sys INIT:0x6dd88, 0x1cf0 bytes
    //
    _w76(sdk::unknown_ptr) get_system_wide_hack_flags_from_em;
    
    // [PciGetSystemWideHackFlagsFromRegistry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x510f8, 0x1d08 bytes
    // pci.sys INIT:0x6f890, 0x1cf0 bytes
    // pci.sys INIT:0x793a8, 0x1cf0 bytes
    // pci.sys INIT:0x6db98, 0x1cf0 bytes
    //
    _w77(sdk::unknown_ptr) get_system_wide_hack_flags_from_registry;
    
    // [PciGlobalLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23520, 0x1d08 bytes
    // pci.sys .data:0x34760, 0x1cf0 bytes
    // pci.sys .data:0x387c0, 0x1cf0 bytes
    // pci.sys .data:0x32760, 0x1cf0 bytes
    //
    _w78(sdk::unknown_ptr) global_lock;
    
    // [PciGroupZeroNumaNodeCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x2469c, 0x1d08 bytes
    // pci.sys .data:0x359bc, 0x1cf0 bytes
    // pci.sys .data:0x39a3c, 0x1cf0 bytes
    // pci.sys .data:0x339bc, 0x1cf0 bytes
    //
    _w79(sdk::unknown_ptr) group_zero_numa_node_count;
    
    // [GUID_AGP_TARGET_BUS_INTERFACE_STANDARD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bbe8, 0x1d08 bytes
    // pci.sys .rdata:0x2ae10, 0x1cf0 bytes
    // pci.sys .rdata:0x2d800, 0x1cf0 bytes
    // pci.sys .rdata:0x2a250, 0x1cf0 bytes
    //
    _w80(struct nt::guid_t*) guid_agp_target_bus_interface_standard;
    
    // [GUID_D3COLD_SUPPORT_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b518, 0x1d08 bytes
    // pci.sys .rdata:0x29cf8, 0x1cf0 bytes
    // pci.sys .rdata:0x2c3c8, 0x1cf0 bytes
    // pci.sys .rdata:0x297d0, 0x1cf0 bytes
    //
    _w81(struct nt::guid_t*) guid_d3cold_support_interface;
    
    // [GUID_DEVICE_RESET_INTERFACE_STANDARD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bcd8, 0x1d08 bytes
    // pci.sys .rdata:0x2ad08, 0x1cf0 bytes
    // pci.sys .rdata:0x2d4e0, 0x1cf0 bytes
    // pci.sys .rdata:0x297c0, 0x1cf0 bytes
    //
    _w82(struct nt::guid_t*) guid_device_reset_interface_standard;
    
    // [GUID_EM_CPU_TYPE_AMD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1cd68, 0x1d08 bytes
    // pci.sys .rdata:0x2c6e8, 0x1cf0 bytes
    // pci.sys .rdata:0x30260, 0x1cf0 bytes
    // pci.sys .rdata:0x2b750, 0x1cf0 bytes
    //
    _w83(sdk::unknown_ptr) guid_em_cpu_type_amd;
    
    // [GUID_EM_PCI_ARBITER_UNREPORTED_MEMORY_AT_F8_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b5d0, 0x1d08 bytes
    // pci.sys .rdata:0x2a130, 0x1cf0 bytes
    // pci.sys .rdata:0x2c3f8, 0x1cf0 bytes
    // pci.sys .rdata:0x28c28, 0x1cf0 bytes
    //
    _w84(sdk::unknown_ptr) guid_em_pci_arbiter_unreported_memory_at_f8_rule;
    
    // [GUID_EM_PCI_D0_DELAY_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b480, 0x1d08 bytes
    // pci.sys .rdata:0x2acc8, 0x1cf0 bytes
    // pci.sys .rdata:0x2d478, 0x1cf0 bytes
    // pci.sys .rdata:0x29628, 0x1cf0 bytes
    //
    _w85(sdk::unknown_ptr) guid_em_pci_d0_delay_rule;
    
    // [GUID_EM_PCI_DEVICE_DISABLE_PCI_EXPRESS_ASPM_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b4c0, 0x1d08 bytes
    // pci.sys .rdata:0x2ac88, 0x1cf0 bytes
    // pci.sys .rdata:0x2d438, 0x1cf0 bytes
    // pci.sys .rdata:0x295e8, 0x1cf0 bytes
    //
    _w86(sdk::unknown_ptr) guid_em_pci_device_disable_pci_express_aspm_rule;
    
    // [GUID_EM_PCI_DEVICE_DMA_REMAPPING_ERROR_HANDLING_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b4d0, 0x1d08 bytes
    // pci.sys .rdata:0x2ac78, 0x1cf0 bytes
    // pci.sys .rdata:0x2d428, 0x1cf0 bytes
    // pci.sys .rdata:0x295d8, 0x1cf0 bytes
    //
    _w87(sdk::unknown_ptr) guid_em_pci_device_dma_remapping_error_handling_rule;
    
    // [GUID_EM_PCI_DEVICE_HACK_BIOS_MATCH_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b4a0, 0x1d08 bytes
    // pci.sys .rdata:0x2aca8, 0x1cf0 bytes
    // pci.sys .rdata:0x2d458, 0x1cf0 bytes
    // pci.sys .rdata:0x29608, 0x1cf0 bytes
    //
    _w88(sdk::unknown_ptr) guid_em_pci_device_hack_bios_match_rule;
    
    // [GUID_EM_PCI_DEVICE_HACK_CPU_MATCH_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b4b0, 0x1d08 bytes
    // pci.sys .rdata:0x2ac98, 0x1cf0 bytes
    // pci.sys .rdata:0x2d448, 0x1cf0 bytes
    // pci.sys .rdata:0x295f8, 0x1cf0 bytes
    //
    _w89(sdk::unknown_ptr) guid_em_pci_device_hack_cpu_match_rule;
    
    // [GUID_EM_PCI_DEVICE_HACK_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b470, 0x1d08 bytes
    // pci.sys .rdata:0x2acd8, 0x1cf0 bytes
    // pci.sys .rdata:0x2d488, 0x1cf0 bytes
    // pci.sys .rdata:0x29638, 0x1cf0 bytes
    //
    _w90(sdk::unknown_ptr) guid_em_pci_device_hack_rule;
    
    // [GUID_EM_PCI_DEVICE_INTERRUPT_REMAPPING_NOT_ALL_REMAPPED_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b4e0, 0x1d08 bytes
    // pci.sys .rdata:0x2ac68, 0x1cf0 bytes
    // pci.sys .rdata:0x2d418, 0x1cf0 bytes
    // pci.sys .rdata:0x295c8, 0x1cf0 bytes
    //
    _w91(sdk::unknown_ptr) guid_em_pci_device_interrupt_remapping_not_all_remapped_rule;
    
    // [GUID_EM_PCI_DEVICE_MATCH_CALLBACK]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c038, 0x1d08 bytes
    // pci.sys .rdata:0x2afa0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d9b0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3e0, 0x1cf0 bytes
    //
    _w92(sdk::unknown_ptr) guid_em_pci_device_match_callback;
    
    // [GUID_EM_PCI_DEVICE_QUERY_RULE_CALLBACK]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bff8, 0x1d08 bytes
    // pci.sys .rdata:0x2af60, 0x1cf0 bytes
    // pci.sys .rdata:0x2d970, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3a0, 0x1cf0 bytes
    //
    _w93(sdk::unknown_ptr) guid_em_pci_device_query_rule_callback;
    
    // [GUID_EM_PCI_DEVICE_SET_D0DELAY_CALLBACK]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c018, 0x1d08 bytes
    // pci.sys .rdata:0x2af80, 0x1cf0 bytes
    // pci.sys .rdata:0x2d990, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3c0, 0x1cf0 bytes
    //
    _w94(sdk::unknown_ptr) guid_em_pci_device_set_d0delay_callback;
    
    // [GUID_EM_PCI_DEVICE_SET_HACKFLAGS_CALLBACK]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c028, 0x1d08 bytes
    // pci.sys .rdata:0x2af90, 0x1cf0 bytes
    // pci.sys .rdata:0x2d9a0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3d0, 0x1cf0 bytes
    //
    _w95(sdk::unknown_ptr) guid_em_pci_device_set_hackflags_callback;
    
    // [GUID_EM_PCI_DEVICE_SET_MPSSIZE_CALLBACK]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c008, 0x1d08 bytes
    // pci.sys .rdata:0x2af70, 0x1cf0 bytes
    // pci.sys .rdata:0x2d980, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3b0, 0x1cf0 bytes
    //
    _w96(sdk::unknown_ptr) guid_em_pci_device_set_mpssize_callback;
    
    // [GUID_EM_PCI_DEVICE_SET_MPSSIZE_RULE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b490, 0x1d08 bytes
    // pci.sys .rdata:0x2acb8, 0x1cf0 bytes
    // pci.sys .rdata:0x2d468, 0x1cf0 bytes
    // pci.sys .rdata:0x29618, 0x1cf0 bytes
    //
    _w97(sdk::unknown_ptr) guid_em_pci_device_set_mpssize_rule;
    
    // [GUID_EM_PCI_DEVICE_TYPE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c048, 0x1d08 bytes
    // pci.sys .rdata:0x2afb0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d9c0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a3f0, 0x1cf0 bytes
    //
    _w98(sdk::unknown_ptr) guid_em_pci_device_type;
    
    // [GUID_EM_RULE_AVOID_ASSERT_ON_BAD_ID_DATA_FOR_HOST_BRIDGE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b630, 0x1d08 bytes
    // pci.sys .rdata:0x2a3c0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c098, 0x1cf0 bytes
    // pci.sys .rdata:0x28e78, 0x1cf0 bytes
    //
    _w99(sdk::unknown_ptr) guid_em_rule_avoid_assert_on_bad_id_data_for_host_bridge;
    
    // [GUID_EM_RULE_DISABLE_PCI_EXPRESS_ASPM]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b610, 0x1d08 bytes
    // pci.sys .rdata:0x2a3a0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c0b8, 0x1cf0 bytes
    // pci.sys .rdata:0x28e58, 0x1cf0 bytes
    //
    _x00(sdk::unknown_ptr) guid_em_rule_disable_pci_express_aspm;
    
    // [GUID_EM_RULE_IGNORE_CB_MEM_LIMITS]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b640, 0x1d08 bytes
    // pci.sys .rdata:0x2a3d0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c088, 0x1cf0 bytes
    // pci.sys .rdata:0x28e88, 0x1cf0 bytes
    //
    _x01(sdk::unknown_ptr) guid_em_rule_ignore_cb_mem_limits;
    
    // [GUID_EM_RULE_IGNORE_ISA_VGA_BIT_CONFLICT]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b620, 0x1d08 bytes
    // pci.sys .rdata:0x2a3b0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c0a8, 0x1cf0 bytes
    // pci.sys .rdata:0x28e68, 0x1cf0 bytes
    //
    _x02(sdk::unknown_ptr) guid_em_rule_ignore_isa_vga_bit_conflict;
    
    // [GUID_EM_RULE_IGNORE_OVERLAPPING_PCI_ROOTBUS_NUMBER_RANGES]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b650, 0x1d08 bytes
    // pci.sys .rdata:0x2a3e0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c078, 0x1cf0 bytes
    // pci.sys .rdata:0x28e98, 0x1cf0 bytes
    //
    _x03(sdk::unknown_ptr) guid_em_rule_ignore_overlapping_pci_rootbus_number_ranges;
    
    // [GUID_EM_RULE_IGNORE_PCI_ROOTBUS_NUMBER_RANGE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b660, 0x1d08 bytes
    // pci.sys .rdata:0x2a3f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2c068, 0x1cf0 bytes
    // pci.sys .rdata:0x28ea8, 0x1cf0 bytes
    //
    _x04(sdk::unknown_ptr) guid_em_rule_ignore_pci_rootbus_number_range;
    
    // [GUID_INT_ROUTE_INTERFACE_STANDARD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bbf8, 0x1d08 bytes
    // pci.sys .rdata:0x2ae20, 0x1cf0 bytes
    // pci.sys .rdata:0x2d810, 0x1cf0 bytes
    // pci.sys .rdata:0x2a260, 0x1cf0 bytes
    //
    _x05(struct nt::guid_t*) guid_int_route_interface_standard;
    
    // [GUID_MSIX_TABLE_CONFIG_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc88, 0x1d08 bytes
    // pci.sys .rdata:0x2aeb0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d8a0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a2f0, 0x1cf0 bytes
    //
    _x06(struct nt::guid_t*) guid_msix_table_config_interface;
    
    // [GUID_PCI_BRIDGE_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b450, 0x1d08 bytes
    // pci.sys .rdata:0x2a1e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2ce48, 0x1cf0 bytes
    // pci.sys .rdata:0x286d8, 0x1cf0 bytes
    //
    _x07(sdk::unknown_ptr) guid_pci_bridge_interface;
    
    // [GUID_PCI_BUS_INTERFACE_STANDARD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b5f0, 0x1d08 bytes
    // pci.sys .rdata:0x2ace8, 0x1cf0 bytes
    // pci.sys .rdata:0x2be88, 0x1cf0 bytes
    // pci.sys .rdata:0x29648, 0x1cf0 bytes
    //
    _x08(struct nt::guid_t*) guid_pci_bus_interface_standard;
    
    // [GUID_PCI_BUS_INTERFACE_STANDARD2]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b600, 0x1d08 bytes
    // pci.sys .rdata:0x2acf8, 0x1cf0 bytes
    // pci.sys .rdata:0x2be98, 0x1cf0 bytes
    // pci.sys .rdata:0x29658, 0x1cf0 bytes
    //
    _x09(struct nt::guid_t*) guid_pci_bus_interface_standard2;
    
    // [GUID_PCI_CARDBUS_INTERFACE_PRIVATE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc08, 0x1d08 bytes
    // pci.sys .rdata:0x2ae30, 0x1cf0 bytes
    // pci.sys .rdata:0x2d820, 0x1cf0 bytes
    // pci.sys .rdata:0x2a270, 0x1cf0 bytes
    //
    _x10(sdk::unknown_ptr) guid_pci_cardbus_interface_private;
    
    // [GUID_PCI_DEVICE_PRESENT_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc38, 0x1d08 bytes
    // pci.sys .rdata:0x2ae60, 0x1cf0 bytes
    // pci.sys .rdata:0x2d850, 0x1cf0 bytes
    // pci.sys .rdata:0x2a2a0, 0x1cf0 bytes
    //
    _x11(struct nt::guid_t*) guid_pci_device_present_interface;
    
    // [GUID_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc68, 0x1d08 bytes
    // pci.sys .rdata:0x2ae90, 0x1cf0 bytes
    // pci.sys .rdata:0x2d880, 0x1cf0 bytes
    // pci.sys .rdata:0x2a2d0, 0x1cf0 bytes
    //
    _x12(struct nt::guid_t*) guid_pci_express_link_quiescent_interface;
    
    // [GUID_PCI_EXPRESS_ROOT_PORT_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc78, 0x1d08 bytes
    // pci.sys .rdata:0x2aea0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d890, 0x1cf0 bytes
    // pci.sys .rdata:0x2a2e0, 0x1cf0 bytes
    //
    _x13(struct nt::guid_t*) guid_pci_express_root_port_interface;
    
    // [GUID_PCI_NATIVE_IDE_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc48, 0x1d08 bytes
    // pci.sys .rdata:0x2ae70, 0x1cf0 bytes
    // pci.sys .rdata:0x2d860, 0x1cf0 bytes
    // pci.sys .rdata:0x2a2b0, 0x1cf0 bytes
    //
    _x14(sdk::unknown_ptr) guid_pci_native_ide_interface;
    
    // [GUID_PCI_PME_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc28, 0x1d08 bytes
    // pci.sys .rdata:0x2ae50, 0x1cf0 bytes
    // pci.sys .rdata:0x2d840, 0x1cf0 bytes
    // pci.sys .rdata:0x2a290, 0x1cf0 bytes
    //
    _x15(sdk::unknown_ptr) guid_pci_pme_interface;
    
    // [GUID_PCI_SECURITY_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bce8, 0x1d08 bytes
    // pci.sys .rdata:0x2af00, 0x1cf0 bytes
    // pci.sys .rdata:0x2d8f0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a340, 0x1cf0 bytes
    //
    _x16(struct nt::guid_t*) guid_pci_security_interface;
    
    // [GUID_PCI_VIRTUALIZATION_INTERFACE]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bc98, 0x1d08 bytes
    // pci.sys .rdata:0x2aec0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d8b0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a300, 0x1cf0 bytes
    //
    _x17(struct nt::guid_t*) guid_pci_virtualization_interface;
    
    // [GUID_PCIEXPRESS_ASPM_POLICY]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b440, 0x1d08 bytes
    // pci.sys .rdata:0x2c6d8, 0x1cf0 bytes
    // pci.sys .rdata:0x2cdc8, 0x1cf0 bytes
    // pci.sys .rdata:0x2b740, 0x1cf0 bytes
    //
    _x18(struct nt::guid_t*) guid_pciexpress_aspm_policy;
    
    // [GUID_QUERY_CRASHDUMP_FUNCTIONS]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bca8, 0x1d08 bytes
    // pci.sys .rdata:0x2aed0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d8c0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a310, 0x1cf0 bytes
    //
    _x19(struct nt::guid_t*) guid_query_crashdump_functions;
    
    // [GUID_REENUMERATE_SELF_INTERFACE_STANDARD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bcb8, 0x1d08 bytes
    // pci.sys .rdata:0x2aee0, 0x1cf0 bytes
    // pci.sys .rdata:0x2d8d0, 0x1cf0 bytes
    // pci.sys .rdata:0x2a320, 0x1cf0 bytes
    //
    _x20(struct nt::guid_t*) guid_reenumerate_self_interface_standard;
    
    // [PciHackTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23548, 0x1d08 bytes
    // pci.sys .data:0x34788, 0x1cf0 bytes
    // pci.sys .data:0x387f0, 0x1cf0 bytes
    // pci.sys .data:0x32788, 0x1cf0 bytes
    //
    _x21(sdk::unknown_ptr) hack_table;
    
    // [PciHandleHotPlugCommandFailure]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14c34, 0x1d08 bytes
    // pci.sys .text:0x1fd10, 0x1cf0 bytes
    // pci.sys .text:0x210ec, 0x1cf0 bytes
    // pci.sys .text:0x1fb10, 0x1cf0 bytes
    //
    _x22(sdk::unknown_ptr) handle_hot_plug_command_failure;
    
    // [PciHandleHotPlugDriverRemoval]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bdd4, 0x1d08 bytes
    // pci.sys PAGE:0x66618, 0x1cf0 bytes
    // pci.sys PAGE:0x6e98c, 0x1cf0 bytes
    // pci.sys PAGE:0x64478, 0x1cf0 bytes
    //
    _x23(sdk::unknown_ptr) handle_hot_plug_driver_removal;
    
    // [PciHeaderOperations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1adb0, 0x1d08 bytes
    // pci.sys .rdata:0x28b10, 0x1cf0 bytes
    // pci.sys .rdata:0x2b020, 0x1cf0 bytes
    // pci.sys .rdata:0x28070, 0x1cf0 bytes
    //
    _x24(sdk::unknown_ptr) header_operations;
    
    // [PciHeadlessInfo]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247e0, 0x1d08 bytes
    // pci.sys .data:0x35bd0, 0x1cf0 bytes
    // pci.sys .data:0x39c70, 0x1cf0 bytes
    // pci.sys .data:0x33bd0, 0x1cf0 bytes
    //
    _x25(sdk::unknown_ptr) headless_info;
    
    // [PciHeadlessInfoInitialized]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247d8, 0x1d08 bytes
    // pci.sys .data:0x35a80, 0x1cf0 bytes
    // pci.sys .data:0x39b10, 0x1cf0 bytes
    // pci.sys .data:0x33a80, 0x1cf0 bytes
    //
    _x26(sdk::unknown_ptr) headless_info_initialized;
    
    // [PciHotPlugCommandTimer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14cf0, 0x1d08 bytes
    // pci.sys .text:0x1fdf0, 0x1cf0 bytes
    // pci.sys .text:0x211b0, 0x1cf0 bytes
    // pci.sys .text:0x1fbf0, 0x1cf0 bytes
    //
    _x27(sdk::unknown_ptr) hot_plug_command_timer;
    
    // [PciHotPlugSlotTimer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8bd0, 0x1d08 bytes
    // pci.sys .text:0x1fea0, 0x1cf0 bytes
    // pci.sys .text:0x21260, 0x1cf0 bytes
    // pci.sys .text:0x1fca0, 0x1cf0 bytes
    //
    _x28(sdk::unknown_ptr) hot_plug_slot_timer;
    
    // [PciInitConsoleLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x76c4, 0x1d08 bytes
    // pci.sys INIT:0x6fe94, 0x1cf0 bytes
    // pci.sys INIT:0x786d0, 0x1cf0 bytes
    // pci.sys INIT:0x6de98, 0x1cf0 bytes
    //
    _x29(sdk::unknown_ptr) init_console_lock;
    
    // [PciInitializeArbiters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3848c, 0x1d08 bytes
    // pci.sys PAGE:0x4a780, 0x1cf0 bytes
    // pci.sys PAGE:0x47034, 0x1cf0 bytes
    // pci.sys PAGE:0x4aac0, 0x1cf0 bytes
    //
    _x30(sdk::unknown_ptr) initialize_arbiters;
    
    // [PciInitializeBusNumberArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37214, 0x1d08 bytes
    // pci.sys PAGE:0x4a118, 0x1cf0 bytes
    // pci.sys PAGE:0x47614, 0x1cf0 bytes
    // pci.sys PAGE:0x4a454, 0x1cf0 bytes
    //
    _x31(sdk::unknown_ptr) initialize_bus_number_arbiter;
    
    // [PciInitializeHotPlugEventMap]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c140, 0x1d08 bytes
    // pci.sys PAGE:0x666f0, 0x1cf0 bytes
    // pci.sys PAGE:0x6ea64, 0x1cf0 bytes
    // pci.sys PAGE:0x64550, 0x1cf0 bytes
    //
    _x32(sdk::unknown_ptr) initialize_hot_plug_event_map;
    
    // [PciInitializeIoArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37694, 0x1d08 bytes
    // pci.sys PAGE:0x4a22c, 0x1cf0 bytes
    // pci.sys PAGE:0x472e0, 0x1cf0 bytes
    // pci.sys PAGE:0x4a568, 0x1cf0 bytes
    //
    _x33(sdk::unknown_ptr) initialize_io_arbiter;
    
    // [PciInitializeMemoryArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37804, 0x1d08 bytes
    // pci.sys PAGE:0x4a578, 0x1cf0 bytes
    // pci.sys PAGE:0x470f8, 0x1cf0 bytes
    // pci.sys PAGE:0x4a8b8, 0x1cf0 bytes
    //
    _x34(sdk::unknown_ptr) initialize_memory_arbiter;
    
    // [PciInitializeMemoryOrderingLists]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x37d00, 0x1d08 bytes
    // pci.sys PAGE:0x3f3a0, 0x1cf0 bytes
    // pci.sys PAGE:0x528b8, 0x1cf0 bytes
    // pci.sys PAGE:0x4af48, 0x1cf0 bytes
    //
    _x35(sdk::unknown_ptr) initialize_memory_ordering_lists;
    
    // [PciInterface_Noop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9450, 0x1d08 bytes
    // pci.sys .text:0x1660, 0x1cf0 bytes
    // pci.sys .text:0x1900, 0x1cf0 bytes
    // pci.sys .text:0x1a50, 0x1cf0 bytes
    //
    _x36(sdk::unknown_ptr) interface_noop;
    
    // [PciInterfaces]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1a530, 0x1d08 bytes
    // pci.sys .rdata:0x28000, 0x1cf0 bytes
    // pci.sys .rdata:0x2a5a0, 0x1cf0 bytes
    // pci.sys .rdata:0x27000, 0x1cf0 bytes
    //
    _x37(sdk::unknown_ptr) interfaces;
    
    // [PciInterfacesLastResort]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1a000, 0x1d08 bytes
    // pci.sys .rdata:0x280d8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a688, 0x1cf0 bytes
    // pci.sys .rdata:0x270d8, 0x1cf0 bytes
    //
    _x38(sdk::unknown_ptr) interfaces_last_resort;
    
    // [InterruptNonworkingListDev]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247c8, 0x1d08 bytes
    // pci.sys .data:0x35be9, 0x1cf0 bytes
    // pci.sys .data:0x39c89, 0x1cf0 bytes
    // pci.sys .data:0x33be9, 0x1cf0 bytes
    //
    _x39(sdk::unknown_ptr) interrupt_nonworking_list_dev;
    
    // [PciInterruptSteeringEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23538, 0x1d08 bytes
    // pci.sys .data:0x3477c, 0x1cf0 bytes
    // pci.sys .data:0x38732, 0x1cf0 bytes
    // pci.sys .data:0x3277c, 0x1cf0 bytes
    //
    _x40(sdk::unknown_ptr) interrupt_steering_enabled;
    
    // [PciIoArbiter_AddAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3cdd0, 0x1d08 bytes
    // pci.sys PAGE:0x52590, 0x1cf0 bytes
    // pci.sys PAGE:0x57da0, 0x1cf0 bytes
    // pci.sys PAGE:0x52aa0, 0x1cf0 bytes
    //
    _x41(sdk::unknown_ptr) io_arbiter_add_allocation;
    
    // [PciIoArbiter_BacktrackAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47810, 0x1d08 bytes
    // pci.sys PAGE:0x5dcf0, 0x1cf0 bytes
    // pci.sys PAGE:0x651b0, 0x1cf0 bytes
    // pci.sys PAGE:0x5bc40, 0x1cf0 bytes
    //
    _x42(sdk::unknown_ptr) io_arbiter_backtrack_allocation;
    
    // [PciIoArbiter_FindSuitableRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3cc20, 0x1d08 bytes
    // pci.sys PAGE:0x51cb0, 0x1cf0 bytes
    // pci.sys PAGE:0x5a5a0, 0x1cf0 bytes
    // pci.sys PAGE:0x521c0, 0x1cf0 bytes
    //
    _x43(sdk::unknown_ptr) io_arbiter_find_suitable_range;
    
    // [PciIoArbiter_GetNextAllocationRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3cb30, 0x1d08 bytes
    // pci.sys PAGE:0x4ffc0, 0x1cf0 bytes
    // pci.sys PAGE:0x480d0, 0x1cf0 bytes
    // pci.sys PAGE:0x504d0, 0x1cf0 bytes
    //
    _x44(sdk::unknown_ptr) io_arbiter_get_next_allocation_range;
    
    // [PciIoArbiter_OverrideConflict]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d010, 0x1d08 bytes
    // pci.sys PAGE:0x53ff0, 0x1cf0 bytes
    // pci.sys PAGE:0x651d0, 0x1cf0 bytes
    // pci.sys PAGE:0x54400, 0x1cf0 bytes
    //
    _x45(sdk::unknown_ptr) io_arbiter_override_conflict;
    
    // [PciIoArbiter_PreprocessEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c170, 0x1d08 bytes
    // pci.sys PAGE:0x504d0, 0x1cf0 bytes
    // pci.sys PAGE:0x56ff0, 0x1cf0 bytes
    // pci.sys PAGE:0x509e0, 0x1cf0 bytes
    //
    _x46(sdk::unknown_ptr) io_arbiter_preprocess_entry;
    
    // [PciIoArbiter_QueryArbitrate]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e7e0, 0x1d08 bytes
    // pci.sys PAGE:0x51c10, 0x1cf0 bytes
    // pci.sys PAGE:0x576a0, 0x1cf0 bytes
    // pci.sys PAGE:0x52120, 0x1cf0 bytes
    //
    _x47(sdk::unknown_ptr) io_arbiter_query_arbitrate;
    
    // [PciIoArbiter_ReinitializeArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47820, 0x1d08 bytes
    // pci.sys PAGE:0x5dd10, 0x1cf0 bytes
    // pci.sys PAGE:0x652f0, 0x1cf0 bytes
    // pci.sys PAGE:0x5bc60, 0x1cf0 bytes
    //
    _x48(sdk::unknown_ptr) io_arbiter_reinitialize_arbiter;
    
    // [PciIommuBusInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x31e70, 0x1d08 bytes
    // pci.sys PAGE:0x52010, 0x1cf0 bytes
    // pci.sys PAGE:0x57380, 0x1cf0 bytes
    // pci.sys PAGE:0x52520, 0x1cf0 bytes
    //
    _x49(sdk::unknown_ptr) iommu_bus_interface_constructor;
    
    // [PciIommuBusInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3efc0, 0x1d08 bytes
    // pci.sys PAGE:0x53a60, 0x1cf0 bytes
    // pci.sys PAGE:0x5a250, 0x1cf0 bytes
    // pci.sys PAGE:0x53e70, 0x1cf0 bytes
    //
    _x50(sdk::unknown_ptr) iommu_bus_interface_dereference;
    
    // [PciIommuBusInterface_DisableSvmCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d410, 0x1d08 bytes
    // pci.sys PAGE:0x675b0, 0x1cf0 bytes
    // pci.sys PAGE:0x6fd80, 0x1cf0 bytes
    // pci.sys PAGE:0x65410, 0x1cf0 bytes
    //
    _x51(sdk::unknown_ptr) iommu_bus_interface_disable_svm_capabilities;
    
    // [PciIommuBusInterface_EnableSvmCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d490, 0x1d08 bytes
    // pci.sys PAGE:0x67620, 0x1cf0 bytes
    // pci.sys PAGE:0x6fe10, 0x1cf0 bytes
    // pci.sys PAGE:0x65480, 0x1cf0 bytes
    //
    _x52(sdk::unknown_ptr) iommu_bus_interface_enable_svm_capabilities;
    
    // [PciIommuBusInterface_GetSvmCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d570, 0x1d08 bytes
    // pci.sys PAGE:0x676d0, 0x1cf0 bytes
    // pci.sys PAGE:0x6ff00, 0x1cf0 bytes
    // pci.sys PAGE:0x65530, 0x1cf0 bytes
    //
    _x53(sdk::unknown_ptr) iommu_bus_interface_get_svm_capabilities;
    
    // [PciIommuBusInterfaceInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ab50, 0x1d08 bytes
    // pci.sys .rdata:0x288a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a918, 0x1cf0 bytes
    // pci.sys .rdata:0x278b0, 0x1cf0 bytes
    //
    _x54(sdk::unknown_ptr) iommu_bus_interface_interface;
    
    // [PciIommuBusInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c000, 0x1d08 bytes
    // pci.sys PAGE:0x3e130, 0x1cf0 bytes
    // pci.sys PAGE:0x433f0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c270, 0x1cf0 bytes
    //
    _x55(sdk::unknown_ptr) iommu_bus_interface_reference;
    
    // [PciIrpNotSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1850, 0x1d08 bytes
    // pci.sys .text:0x1690, 0x1cf0 bytes
    // pci.sys .text:0x1930, 0x1cf0 bytes
    // pci.sys .text:0x1a80, 0x1cf0 bytes
    //
    _x56(sdk::unknown_ptr) irp_not_supported;
    
    // [PciIsDeviceFeatureEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x352e0, 0x1d08 bytes
    // pci.sys PAGE:0x46090, 0x1cf0 bytes
    // pci.sys PAGE:0x4c9c0, 0x1cf0 bytes
    // pci.sys PAGE:0x469b0, 0x1cf0 bytes
    //
    _x57(sdk::unknown_ptr) is_device_feature_enabled;
    
    // [PciIsDeviceHotplugCapableRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10bc0, 0x1d08 bytes
    // pci.sys .text:0xc0bc, 0x1cf0 bytes
    // pci.sys .text:0x1c80, 0x1cf0 bytes
    // pci.sys .text:0xd974, 0x1cf0 bytes
    //
    _x58(sdk::unknown_ptr) is_device_hotplug_capable_raw;
    
    // [PciIsDeviceMultifunction]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10c64, 0x1d08 bytes
    // pci.sys .text:0xece8, 0x1cf0 bytes
    // pci.sys .text:0xd680, 0x1cf0 bytes
    // pci.sys .text:0x10bc0, 0x1cf0 bytes
    //
    _x59(sdk::unknown_ptr) is_device_multifunction;
    
    // [PciIsDevicePresentRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10c94, 0x1d08 bytes
    // pci.sys .text:0x7c90, 0x1cf0 bytes
    // pci.sys .text:0x46a0, 0x1cf0 bytes
    // pci.sys .text:0x90a0, 0x1cf0 bytes
    //
    _x60(sdk::unknown_ptr) is_device_present_raw;
    
    // [PciIsDeviceSlotImplementedRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10cd0, 0x1d08 bytes
    // pci.sys .text:0xc178, 0x1cf0 bytes
    // pci.sys .text:0x1d3c, 0x1cf0 bytes
    // pci.sys .text:0xda30, 0x1cf0 bytes
    //
    _x61(sdk::unknown_ptr) is_device_slot_implemented_raw;
    
    // [PciIsDeviceThunderboltRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10d20, 0x1d08 bytes
    // pci.sys .text:0xc028, 0x1cf0 bytes
    // pci.sys .text:0x1bf4, 0x1cf0 bytes
    // pci.sys .text:0xd8e0, 0x1cf0 bytes
    //
    _x62(sdk::unknown_ptr) is_device_thunderbolt_raw;
    
    // [PciIsDsmFunctionSupported]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x36e40, 0x1d08 bytes
    // pci.sys PAGE:0x415f0, 0x1cf0 bytes
    // pci.sys PAGE:0x49500, 0x1cf0 bytes
    // pci.sys PAGE:0x41420, 0x1cf0 bytes
    //
    _x63(sdk::unknown_ptr) is_dsm_function_supported;
    
    // [PciIsExtendedConfigAvailable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2eae8, 0x1d08 bytes
    // pci.sys PAGE:0x540cc, 0x1cf0 bytes
    // pci.sys PAGE:0x5a4a4, 0x1cf0 bytes
    // pci.sys PAGE:0x544dc, 0x1cf0 bytes
    //
    _x64(sdk::unknown_ptr) is_extended_config_available;
    
    // [PciIsFixedRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x790c, 0x1d08 bytes
    // pci.sys .text:0xd618, 0x1cf0 bytes
    // pci.sys .text:0xbbcc, 0x1cf0 bytes
    // pci.sys .text:0xf168, 0x1cf0 bytes
    //
    _x65(sdk::unknown_ptr) is_fixed_requirement;
    
    // [PciIsInTransitionToState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3efe4, 0x1d08 bytes
    // pci.sys PAGE:0x3e900, 0x1cf0 bytes
    // pci.sys PAGE:0x5af08, 0x1cf0 bytes
    // pci.sys PAGE:0x3c83c, 0x1cf0 bytes
    //
    _x66(sdk::unknown_ptr) is_in_transition_to_state;
    
    // [PciIsNonHotplugBridgeWithNoChildren]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2ea64, 0x1d08 bytes
    // pci.sys PAGE:0x52d54, 0x1cf0 bytes
    // pci.sys PAGE:0x596d0, 0x1cf0 bytes
    // pci.sys PAGE:0x53264, 0x1cf0 bytes
    //
    _x67(sdk::unknown_ptr) is_non_hotplug_bridge_with_no_children;
    
    // [PciIsSameDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4dc0, 0x1d08 bytes
    // pci.sys .text:0xaef0, 0x1cf0 bytes
    // pci.sys .text:0x44a8, 0x1cf0 bytes
    // pci.sys .text:0x8fd0, 0x1cf0 bytes
    //
    _x68(sdk::unknown_ptr) is_same_device;
    
    // [PciIsSameResource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1146c, 0x1d08 bytes
    // pci.sys .text:0x1abf4, 0x1cf0 bytes
    // pci.sys .text:0x1a664, 0x1cf0 bytes
    // pci.sys .text:0x1a994, 0x1cf0 bytes
    //
    _x69(sdk::unknown_ptr) is_same_resource;
    
    // [PciIsSriovDriverAvailable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e428, 0x1d08 bytes
    // pci.sys PAGE:0x6a2fc, 0x1cf0 bytes
    // pci.sys PAGE:0x73450, 0x1cf0 bytes
    // pci.sys PAGE:0x6815c, 0x1cf0 bytes
    //
    _x70(sdk::unknown_ptr) is_sriov_driver_available;
    
    // [PciIsUnconfiguredBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10d98, 0x1d08 bytes
    // pci.sys .text:0xc1dc, 0x1cf0 bytes
    // pci.sys .text:0x1de4, 0x1cf0 bytes
    // pci.sys .text:0xda94, 0x1cf0 bytes
    //
    _x71(sdk::unknown_ptr) is_unconfigured_bridge;
    
    // [PciIsVgaResource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x397ac, 0x1d08 bytes
    // pci.sys PAGE:0x69698, 0x1cf0 bytes
    // pci.sys PAGE:0x514bc, 0x1cf0 bytes
    // pci.sys PAGE:0x674f8, 0x1cf0 bytes
    //
    _x72(sdk::unknown_ptr) is_vga_resource;
    
    // [PciIsaBitExclusionList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24620, 0x1d08 bytes
    // pci.sys .data:0x35940, 0x1cf0 bytes
    // pci.sys .data:0x399c0, 0x1cf0 bytes
    // pci.sys .data:0x33940, 0x1cf0 bytes
    //
    _x73(sdk::unknown_ptr) isa_bit_exclusion_list;
    
    // [PciKsrCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x171e0, 0x1d08 bytes
    // pci.sys PAGE:0x67e40, 0x1cf0 bytes
    // pci.sys PAGE:0x70420, 0x1cf0 bytes
    // pci.sys PAGE:0x65ca0, 0x1cf0 bytes
    //
    _x74(sdk::unknown_ptr) ksr_callback;
    
    // [PciKsrCallbackObject]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23440, 0x1d08 bytes
    // pci.sys .data:0x345f0, 0x1cf0 bytes
    // pci.sys .data:0x38648, 0x1cf0 bytes
    // pci.sys .data:0x325f0, 0x1cf0 bytes
    //
    _x75(sdk::unknown_ptr) ksr_callback_object;
    
    // [PciLegacyDescriptionLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24600, 0x1d08 bytes
    // pci.sys .data:0x35920, 0x1cf0 bytes
    // pci.sys .data:0x399a0, 0x1cf0 bytes
    // pci.sys .data:0x33920, 0x1cf0 bytes
    //
    _x76(sdk::unknown_ptr) legacy_description_lock;
    
    // [PciLegacyDeviceDetectionInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1acf0, 0x1d08 bytes
    // pci.sys .rdata:0x28a48, 0x1cf0 bytes
    // pci.sys .rdata:0x2aab8, 0x1cf0 bytes
    // pci.sys .rdata:0x27a50, 0x1cf0 bytes
    //
    _x77(sdk::unknown_ptr) legacy_device_detection_interface;
    
    // [PciLegacyDeviceHead]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247c0, 0x1d08 bytes
    // pci.sys .data:0x35be0, 0x1cf0 bytes
    // pci.sys .data:0x39c80, 0x1cf0 bytes
    // pci.sys .data:0x33be0, 0x1cf0 bytes
    //
    _x78(sdk::unknown_ptr) legacy_device_head;
    
    // [PciLegacyDeviceInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4dc00, 0x1d08 bytes
    // pci.sys PAGE:0x685b0, 0x1cf0 bytes
    // pci.sys PAGE:0x70b90, 0x1cf0 bytes
    // pci.sys PAGE:0x66410, 0x1cf0 bytes
    //
    _x79(sdk::unknown_ptr) legacy_device_interface_constructor;
    
    // [PciLegacyDeviceInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9470, 0x1d08 bytes
    // pci.sys .text:0x1750, 0x1cf0 bytes
    // pci.sys .text:0x19f0, 0x1cf0 bytes
    // pci.sys .text:0x1b40, 0x1cf0 bytes
    //
    _x80(sdk::unknown_ptr) legacy_device_interface_dereference;
    
    // [PciLegacyDeviceInterface_GetLegacyDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4dc40, 0x1d08 bytes
    // pci.sys PAGE:0x68600, 0x1cf0 bytes
    // pci.sys PAGE:0x70be0, 0x1cf0 bytes
    // pci.sys PAGE:0x66460, 0x1cf0 bytes
    //
    _x81(sdk::unknown_ptr) legacy_device_interface_get_legacy_device;
    
    // [PciLegacyDeviceInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9480, 0x1d08 bytes
    // pci.sys .text:0x1760, 0x1cf0 bytes
    // pci.sys .text:0x1a00, 0x1cf0 bytes
    // pci.sys .text:0x1b50, 0x1cf0 bytes
    //
    _x82(sdk::unknown_ptr) legacy_device_interface_reference;
    
    // [PciLocalDeviceUsage]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38fa0, 0x1d08 bytes
    // pci.sys PAGE:0x4a538, 0x1cf0 bytes
    // pci.sys PAGE:0x43888, 0x1cf0 bytes
    // pci.sys PAGE:0x4a878, 0x1cf0 bytes
    //
    _x83(sdk::unknown_ptr) local_device_usage;
    
    // [PciLocationInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ac70, 0x1d08 bytes
    // pci.sys .rdata:0x289c8, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa38, 0x1cf0 bytes
    // pci.sys .rdata:0x279d0, 0x1cf0 bytes
    //
    _x84(sdk::unknown_ptr) location_interface;
    
    // [PciLocationInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x32000, 0x1d08 bytes
    // pci.sys PAGE:0x52840, 0x1cf0 bytes
    // pci.sys PAGE:0x588f0, 0x1cf0 bytes
    // pci.sys PAGE:0x52d50, 0x1cf0 bytes
    //
    _x85(sdk::unknown_ptr) location_interface_constructor;
    
    // [PciLocationInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8290, 0x1d08 bytes
    // pci.sys .text:0xe970, 0x1cf0 bytes
    // pci.sys .text:0xcd90, 0x1cf0 bytes
    // pci.sys .text:0x108a0, 0x1cf0 bytes
    //
    _x86(sdk::unknown_ptr) location_interface_dereference;
    
    // [PciLocationInterface_GetLocationStrings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d360, 0x1d08 bytes
    // pci.sys PAGE:0x4faa0, 0x1cf0 bytes
    // pci.sys PAGE:0x56d10, 0x1cf0 bytes
    // pci.sys PAGE:0x4ffb0, 0x1cf0 bytes
    //
    _x87(sdk::unknown_ptr) location_interface_get_location_strings;
    
    // [PciLocationInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x68f0, 0x1d08 bytes
    // pci.sys .text:0xe9a0, 0x1cf0 bytes
    // pci.sys .text:0xcdc0, 0x1cf0 bytes
    // pci.sys .text:0x108d0, 0x1cf0 bytes
    //
    _x88(sdk::unknown_ptr) location_interface_reference;
    
    // [PciLockDeviceResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234b0, 0x1d08 bytes
    // pci.sys .data:0x346d0, 0x1cf0 bytes
    // pci.sys .data:0x38730, 0x1cf0 bytes
    // pci.sys .data:0x326d0, 0x1cf0 bytes
    //
    _x89(sdk::unknown_ptr) lock_device_resources;
    
    // [PciMarkHiberPhase]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe620, 0x1d08 bytes
    // pci.sys .text:0x17250, 0x1cf0 bytes
    // pci.sys .text:0x15c40, 0x1cf0 bytes
    // pci.sys .text:0x17270, 0x1cf0 bytes
    //
    _x90(sdk::unknown_ptr) mark_hiber_phase;
    
    // [PciMaskMsiInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7f40, 0x1d08 bytes
    // pci.sys .text:0xb3d8, 0x1cf0 bytes
    // pci.sys .text:0x33c4, 0x1cf0 bytes
    // pci.sys .text:0xcae8, 0x1cf0 bytes
    //
    _x91(sdk::unknown_ptr) mask_msi_interrupt;
    
    // [PciMaskMsiXInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15ca8, 0x1d08 bytes
    // pci.sys .text:0xed3c, 0x1cf0 bytes
    // pci.sys .text:0xdc30, 0x1cf0 bytes
    // pci.sys .text:0x10c14, 0x1cf0 bytes
    //
    _x92(sdk::unknown_ptr) mask_msi_x_interrupt;
    
    // [PciMaximumBusNumbersToCapture]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2220, 0x1d08 bytes
    // pci.sys .text:0xc518, 0x1cf0 bytes
    // pci.sys .text:0x21c4, 0x1cf0 bytes
    // pci.sys .text:0xdf28, 0x1cf0 bytes
    //
    _x93(sdk::unknown_ptr) maximum_bus_numbers_to_capture;
    
    // [PciMemoryArbiter_CommitAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3cf20, 0x1d08 bytes
    // pci.sys PAGE:0x53140, 0x1cf0 bytes
    // pci.sys PAGE:0x48580, 0x1cf0 bytes
    // pci.sys PAGE:0x53650, 0x1cf0 bytes
    //
    _x94(sdk::unknown_ptr) memory_arbiter_commit_allocation;
    
    // [PciMemoryArbiter_FindSuitableRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c760, 0x1d08 bytes
    // pci.sys PAGE:0x51d40, 0x1cf0 bytes
    // pci.sys PAGE:0x49cf0, 0x1cf0 bytes
    // pci.sys PAGE:0x52250, 0x1cf0 bytes
    //
    _x95(sdk::unknown_ptr) memory_arbiter_find_suitable_range;
    
    // [PciMemoryArbiter_GetNextAllocationRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c870, 0x1d08 bytes
    // pci.sys PAGE:0x500c0, 0x1cf0 bytes
    // pci.sys PAGE:0x49c70, 0x1cf0 bytes
    // pci.sys PAGE:0x505d0, 0x1cf0 bytes
    //
    _x96(sdk::unknown_ptr) memory_arbiter_get_next_allocation_range;
    
    // [PciMemoryArbiter_OverrideConflict]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47130, 0x1d08 bytes
    // pci.sys PAGE:0x5d5f0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b5e0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b540, 0x1cf0 bytes
    //
    _x97(sdk::unknown_ptr) memory_arbiter_override_conflict;
    
    // [PciMemoryArbiter_PreprocessEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3c490, 0x1d08 bytes
    // pci.sys PAGE:0x52c50, 0x1cf0 bytes
    // pci.sys PAGE:0x58870, 0x1cf0 bytes
    // pci.sys PAGE:0x53160, 0x1cf0 bytes
    //
    _x98(sdk::unknown_ptr) memory_arbiter_preprocess_entry;
    
    // [PciMemoryArbiter_QueryArbitrate]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e870, 0x1d08 bytes
    // pci.sys PAGE:0x51c10, 0x1cf0 bytes
    // pci.sys PAGE:0x576e0, 0x1cf0 bytes
    // pci.sys PAGE:0x52120, 0x1cf0 bytes
    //
    _x99(sdk::unknown_ptr) memory_arbiter_query_arbitrate;
    
    // [PciMemoryArbiter_ReinitializeArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47200, 0x1d08 bytes
    // pci.sys PAGE:0x5d6e0, 0x1cf0 bytes
    // pci.sys PAGE:0x649b0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b630, 0x1cf0 bytes
    //
    _y00(sdk::unknown_ptr) memory_arbiter_reinitialize_arbiter;
    
    // [PciMemoryArbiter_RetestAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x472b0, 0x1d08 bytes
    // pci.sys PAGE:0x5d7c0, 0x1cf0 bytes
    // pci.sys PAGE:0x64b00, 0x1cf0 bytes
    // pci.sys PAGE:0x5b710, 0x1cf0 bytes
    //
    _y01(sdk::unknown_ptr) memory_arbiter_retest_allocation;
    
    // [PciMemoryArbiter_RollbackAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x472e0, 0x1d08 bytes
    // pci.sys PAGE:0x5d800, 0x1cf0 bytes
    // pci.sys PAGE:0x64bf0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b750, 0x1cf0 bytes
    //
    _y02(sdk::unknown_ptr) memory_arbiter_rollback_allocation;
    
    // [PciMemoryArbiter_TestAllocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3cef0, 0x1d08 bytes
    // pci.sys PAGE:0x4fbd0, 0x1cf0 bytes
    // pci.sys PAGE:0x4d050, 0x1cf0 bytes
    // pci.sys PAGE:0x500e0, 0x1cf0 bytes
    //
    _y03(sdk::unknown_ptr) memory_arbiter_test_allocation;
    
    // [PciMsiXInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d230, 0x1d08 bytes
    // pci.sys PAGE:0x54af0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b160, 0x1cf0 bytes
    // pci.sys PAGE:0x54f90, 0x1cf0 bytes
    //
    _y04(sdk::unknown_ptr) msi_x_interface_constructor;
    
    // [PciMsiXInterface_GetTableEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15d20, 0x1d08 bytes
    // pci.sys .text:0x21a30, 0x1cf0 bytes
    // pci.sys .text:0x237a0, 0x1cf0 bytes
    // pci.sys .text:0x21830, 0x1cf0 bytes
    //
    _y05(sdk::unknown_ptr) msi_x_interface_get_table_entry;
    
    // [PciMsiXInterface_GetTableSize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15d70, 0x1d08 bytes
    // pci.sys .text:0x21a80, 0x1cf0 bytes
    // pci.sys .text:0x237f0, 0x1cf0 bytes
    // pci.sys .text:0x21880, 0x1cf0 bytes
    //
    _y06(sdk::unknown_ptr) msi_x_interface_get_table_size;
    
    // [PciMsiXInterface_MaskTableEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15da0, 0x1d08 bytes
    // pci.sys .text:0x21ab0, 0x1cf0 bytes
    // pci.sys .text:0x23820, 0x1cf0 bytes
    // pci.sys .text:0x218b0, 0x1cf0 bytes
    //
    _y07(sdk::unknown_ptr) msi_x_interface_mask_table_entry;
    
    // [PciMsiXInterface_RefDeref]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9450, 0x1d08 bytes
    // pci.sys .text:0x1660, 0x1cf0 bytes
    // pci.sys .text:0x1900, 0x1cf0 bytes
    // pci.sys .text:0x1a50, 0x1cf0 bytes
    //
    _y08(sdk::unknown_ptr) msi_x_interface_ref_deref;
    
    // [PciMsiXInterface_SetTableEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15e40, 0x1d08 bytes
    // pci.sys .text:0xd660, 0x1cf0 bytes
    // pci.sys .text:0x238d0, 0x1cf0 bytes
    // pci.sys .text:0xf1b0, 0x1cf0 bytes
    //
    _y09(sdk::unknown_ptr) msi_x_interface_set_table_entry;
    
    // [PciMsiXInterface_UnmaskTableEntry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15f50, 0x1d08 bytes
    // pci.sys .text:0x21b60, 0x1cf0 bytes
    // pci.sys .text:0x23a00, 0x1cf0 bytes
    // pci.sys .text:0x21960, 0x1cf0 bytes
    //
    _y10(sdk::unknown_ptr) msi_x_interface_unmask_table_entry;
    
    // [PciMsiXTableConfigInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1abf0, 0x1d08 bytes
    // pci.sys .rdata:0x28948, 0x1cf0 bytes
    // pci.sys .rdata:0x2a9b8, 0x1cf0 bytes
    // pci.sys .rdata:0x27950, 0x1cf0 bytes
    //
    _y11(sdk::unknown_ptr) msi_x_table_config_interface;
    
    // [PciMultiStageResumeCapable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xe960, 0x1d08 bytes
    // pci.sys .text:0x17660, 0x1cf0 bytes
    // pci.sys .text:0x16070, 0x1cf0 bytes
    // pci.sys .text:0x176a0, 0x1cf0 bytes
    //
    _y12(sdk::unknown_ptr) multi_stage_resume_capable;
    
    // [PciMungeHackFlags]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x44bc, 0x1d08 bytes
    // pci.sys .text:0xdc80, 0x1cf0 bytes
    // pci.sys .text:0xbc10, 0x1cf0 bytes
    // pci.sys .text:0xf7d0, 0x1cf0 bytes
    //
    _y13(sdk::unknown_ptr) munge_hack_flags;
    
    // [PciNativeIdeInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ac90, 0x1d08 bytes
    // pci.sys .rdata:0x289e8, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa58, 0x1cf0 bytes
    // pci.sys .rdata:0x279f0, 0x1cf0 bytes
    //
    _y14(sdk::unknown_ptr) native_ide_interface;
    
    // [PciNativeIdeInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4be80, 0x1d08 bytes
    // pci.sys PAGE:0x667e0, 0x1cf0 bytes
    // pci.sys PAGE:0x6eb50, 0x1cf0 bytes
    // pci.sys PAGE:0x64640, 0x1cf0 bytes
    //
    _y15(sdk::unknown_ptr) native_ide_interface_constructor;
    
    // [PciNativeIdeInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x93f0, 0x1d08 bytes
    // pci.sys .text:0x16b0, 0x1cf0 bytes
    // pci.sys .text:0x1950, 0x1cf0 bytes
    // pci.sys .text:0x1aa0, 0x1cf0 bytes
    //
    _y16(sdk::unknown_ptr) native_ide_interface_dereference;
    
    // [PciNativeIdeInterface_InterruptControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x159a0, 0x1d08 bytes
    // pci.sys .text:0x21760, 0x1cf0 bytes
    // pci.sys .text:0x23270, 0x1cf0 bytes
    // pci.sys .text:0x21560, 0x1cf0 bytes
    //
    _y17(sdk::unknown_ptr) native_ide_interface_interrupt_control;
    
    // [PciNativeIdeInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9400, 0x1d08 bytes
    // pci.sys .text:0x16c0, 0x1cf0 bytes
    // pci.sys .text:0x1960, 0x1cf0 bytes
    // pci.sys .text:0x1ab0, 0x1cf0 bytes
    //
    _y18(sdk::unknown_ptr) native_ide_interface_reference;
    
    // [PciNextBusInSegment]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3104, 0x1d08 bytes
    // pci.sys .text:0x4ca4, 0x1cf0 bytes
    // pci.sys .text:0xb8b4, 0x1cf0 bytes
    // pci.sys .text:0x54f4, 0x1cf0 bytes
    //
    _y19(sdk::unknown_ptr) next_bus_in_segment;
    
    // [NullResourceRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15b0, 0x1d08 bytes
    // pci.sys .text:0x15e0, 0x1cf0 bytes
    // pci.sys .text:0x18bc, 0x1cf0 bytes
    // pci.sys .text:0x167c, 0x1cf0 bytes
    //
    _y20(sdk::unknown_ptr) null_resource_requirement;
    
    // [PciNumaInformationLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24680, 0x1d08 bytes
    // pci.sys .data:0x359a0, 0x1cf0 bytes
    // pci.sys .data:0x39a20, 0x1cf0 bytes
    // pci.sys .data:0x339a0, 0x1cf0 bytes
    //
    _y21(sdk::unknown_ptr) numa_information_lock;
    
    // [PciNumaNodeCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x246a8, 0x1d08 bytes
    // pci.sys .data:0x359c8, 0x1cf0 bytes
    // pci.sys .data:0x39a48, 0x1cf0 bytes
    // pci.sys .data:0x339c8, 0x1cf0 bytes
    //
    _y22(sdk::unknown_ptr) numa_node_count;
    
    // [PciNumaNodesProcessorMask]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24660, 0x1d08 bytes
    // pci.sys .data:0x35980, 0x1cf0 bytes
    // pci.sys .data:0x39a00, 0x1cf0 bytes
    // pci.sys .data:0x33980, 0x1cf0 bytes
    //
    _y23(sdk::unknown_ptr) numa_nodes_processor_mask;
    
    // [PciOpenKey]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x36db0, 0x1d08 bytes
    // pci.sys PAGE:0x4d81c, 0x1cf0 bytes
    // pci.sys PAGE:0x4c910, 0x1cf0 bytes
    // pci.sys PAGE:0x4a2f4, 0x1cf0 bytes
    //
    _y24(sdk::unknown_ptr) open_key;
    
    // [PciOverrideRequirement]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49620, 0x1d08 bytes
    // pci.sys PAGE:0x4c2a4, 0x1cf0 bytes
    // pci.sys PAGE:0x554a0, 0x1cf0 bytes
    // pci.sys PAGE:0x3e234, 0x1cf0 bytes
    //
    _y25(sdk::unknown_ptr) override_requirement;
    
    // [PciPassIrp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x68d0, 0x1d08 bytes
    // pci.sys .text:0xc724, 0x1cf0 bytes
    // pci.sys .text:0xad58, 0x1cf0 bytes
    // pci.sys .text:0xe1d8, 0x1cf0 bytes
    //
    _y26(sdk::unknown_ptr) pass_irp;
    
    // [PCIe_NOTIFY_TYPE_GUID]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1cf20, 0x1d08 bytes
    // pci.sys .rdata:0x2cb18, 0x1cf0 bytes
    // pci.sys .rdata:0x30df8, 0x1cf0 bytes
    // pci.sys .rdata:0x2bb10, 0x1cf0 bytes
    //
    _y27(sdk::unknown_ptr) pc_ie_notify_type_guid;
    
    // [PCIEXPRESS_ERROR_SECTION_GUID]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1cf40, 0x1d08 bytes
    // pci.sys .rdata:0x2cb48, 0x1cf0 bytes
    // pci.sys .rdata:0x30de8, 0x1cf0 bytes
    // pci.sys .rdata:0x2bb40, 0x1cf0 bytes
    //
    _y28(sdk::unknown_ptr) pciexpress_error_section_guid;
    
    // [PfnIoCreateDeviceSecure]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x246f0, 0x1d08 bytes
    // pci.sys .data:0x35a98, 0x1cf0 bytes
    // pci.sys .data:0x39b30, 0x1cf0 bytes
    // pci.sys .data:0x33a98, 0x1cf0 bytes
    //
    _y29(sdk::function<int32_t(struct nt::driver_object_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t, uint8_t, const nt::unicode_view*, const struct nt::guid_t*, struct nt::device_object_t**)>**) pfn_io_create_device_secure;
    
    // [PciPmeInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1acd0, 0x1d08 bytes
    // pci.sys .rdata:0x28a28, 0x1cf0 bytes
    // pci.sys .rdata:0x2aa98, 0x1cf0 bytes
    // pci.sys .rdata:0x27a30, 0x1cf0 bytes
    //
    _y30(sdk::unknown_ptr) pme_interface;
    
    // [PciPmeInterface_ClearPmeStatus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12280, 0x1d08 bytes
    // pci.sys .text:0x1b4b0, 0x1cf0 bytes
    // pci.sys .text:0x1b990, 0x1cf0 bytes
    // pci.sys .text:0x1b290, 0x1cf0 bytes
    //
    _y31(sdk::unknown_ptr) pme_interface_clear_pme_status;
    
    // [PciPmeInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f3c0, 0x1d08 bytes
    // pci.sys PAGE:0x55640, 0x1cf0 bytes
    // pci.sys PAGE:0x5b9c0, 0x1cf0 bytes
    // pci.sys PAGE:0x55bd0, 0x1cf0 bytes
    //
    _y32(sdk::unknown_ptr) pme_interface_constructor;
    
    // [PciPmeInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x93e0, 0x1d08 bytes
    // pci.sys .text:0x1670, 0x1cf0 bytes
    // pci.sys .text:0x1910, 0x1cf0 bytes
    // pci.sys .text:0x1a60, 0x1cf0 bytes
    //
    _y33(sdk::unknown_ptr) pme_interface_dereference;
    
    // [PciPmeInterface_GetInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x36b0, 0x1d08 bytes
    // pci.sys .text:0x2ce0, 0x1cf0 bytes
    // pci.sys .text:0xd070, 0x1cf0 bytes
    // pci.sys .text:0x3c60, 0x1cf0 bytes
    //
    _y34(sdk::unknown_ptr) pme_interface_get_information;
    
    // [PciPmeInterface_GetPmeControl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x82b0, 0x1d08 bytes
    // pci.sys .text:0x2080, 0x1cf0 bytes
    // pci.sys .text:0xd850, 0x1cf0 bytes
    // pci.sys .text:0x2c80, 0x1cf0 bytes
    //
    _y35(sdk::unknown_ptr) pme_interface_get_pme_control;
    
    // [PciPmeInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1830, 0x1d08 bytes
    // pci.sys .text:0x1680, 0x1cf0 bytes
    // pci.sys .text:0x1920, 0x1cf0 bytes
    // pci.sys .text:0x1a70, 0x1cf0 bytes
    //
    _y36(sdk::unknown_ptr) pme_interface_reference;
    
    // [PciPmeInterface_UpdateEnable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12290, 0x1d08 bytes
    // pci.sys .text:0x1980, 0x1cf0 bytes
    // pci.sys .text:0x1b9b0, 0x1cf0 bytes
    // pci.sys .text:0x1d70, 0x1cf0 bytes
    //
    _y37(sdk::unknown_ptr) pme_interface_update_enable;
    
    // [PciPopulateMsiRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f154, 0x1d08 bytes
    // pci.sys PAGE:0x494d8, 0x1cf0 bytes
    // pci.sys PAGE:0x4ba64, 0x1cf0 bytes
    // pci.sys PAGE:0x49ec8, 0x1cf0 bytes
    //
    _y38(sdk::unknown_ptr) populate_msi_requirements;
    
    // [PciPowerCallbackRegistrationHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234c0, 0x1d08 bytes
    // pci.sys .data:0x346e0, 0x1cf0 bytes
    // pci.sys .data:0x38740, 0x1cf0 bytes
    // pci.sys .data:0x326e0, 0x1cf0 bytes
    //
    _y39(sdk::unknown_ptr) power_callback_registration_handle;
    
    // [PciPowerDelayTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1c980, 0x1d08 bytes
    // pci.sys .rdata:0x2b010, 0x1cf0 bytes
    // pci.sys .rdata:0x2db00, 0x1cf0 bytes
    // pci.sys .rdata:0x2a660, 0x1cf0 bytes
    //
    _y40(sdk::unknown_ptr) power_delay_table;
    
    // [PciPowerDownDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x122a8, 0x1d08 bytes
    // pci.sys .text:0x3418, 0x1cf0 bytes
    // pci.sys .text:0x89d4, 0x1cf0 bytes
    // pci.sys .text:0x4248, 0x1cf0 bytes
    //
    _y41(sdk::unknown_ptr) power_down_device;
    
    // [PciPowerDownDeviceTimerDpc]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12470, 0x1d08 bytes
    // pci.sys .text:0x1b4d0, 0x1cf0 bytes
    // pci.sys .text:0x1b9e0, 0x1cf0 bytes
    // pci.sys .text:0x1b2b0, 0x1cf0 bytes
    //
    _y42(sdk::unknown_ptr) power_down_device_timer_dpc;
    
    // [PciPowerStateCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f570, 0x1d08 bytes
    // pci.sys PAGE:0x557e0, 0x1cf0 bytes
    // pci.sys PAGE:0x5bc10, 0x1cf0 bytes
    // pci.sys PAGE:0x55d70, 0x1cf0 bytes
    //
    _y43(sdk::unknown_ptr) power_state_callback;
    
    // [PciPowerUpDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14ac, 0x1d08 bytes
    // pci.sys .text:0x2fb8, 0x1cf0 bytes
    // pci.sys .text:0x9f18, 0x1cf0 bytes
    // pci.sys .text:0x27f4, 0x1cf0 bytes
    //
    _y44(sdk::unknown_ptr) power_up_device;
    
    // [PciPrepareInputParametersForDsmMethod]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4eb74, 0x1d08 bytes
    // pci.sys PAGE:0x6b048, 0x1cf0 bytes
    // pci.sys PAGE:0x540d8, 0x1cf0 bytes
    // pci.sys PAGE:0x68f3c, 0x1cf0 bytes
    //
    _y45(sdk::unknown_ptr) prepare_input_parameters_for_dsm_method;
    
    // [PciProbeDeviceConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x105ec, 0x1d08 bytes
    // pci.sys .text:0xa0a4, 0x1cf0 bytes
    // pci.sys .text:0x3980, 0x1cf0 bytes
    // pci.sys .text:0xb5c4, 0x1cf0 bytes
    //
    _y46(sdk::unknown_ptr) probe_device_config;
    
    // [PciProbeForRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3ae0, 0x1d08 bytes
    // pci.sys .text:0x3680, 0x1cf0 bytes
    // pci.sys .text:0xc560, 0x1cf0 bytes
    // pci.sys .text:0x4560, 0x1cf0 bytes
    //
    _y47(sdk::unknown_ptr) probe_for_requirements;
    
    // [PciProcessBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c7b4, 0x1d08 bytes
    // pci.sys PAGE:0x4cb44, 0x1cf0 bytes
    // pci.sys PAGE:0x46eec, 0x1cf0 bytes
    // pci.sys PAGE:0x4c72c, 0x1cf0 bytes
    //
    _y48(sdk::unknown_ptr) process_bus;
    
    // [PciProcessCommandCompleteInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14d78, 0x1d08 bytes
    // pci.sys .text:0x1ff2c, 0x1cf0 bytes
    // pci.sys .text:0x212ec, 0x1cf0 bytes
    // pci.sys .text:0x1fd2c, 0x1cf0 bytes
    //
    _y49(sdk::unknown_ptr) process_command_complete_interrupt;
    
    // [PciProcessControllerActionQueue]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1d58, 0x1d08 bytes
    // pci.sys .text:0x1ffb4, 0x1cf0 bytes
    // pci.sys .text:0x21374, 0x1cf0 bytes
    // pci.sys .text:0x1fdb4, 0x1cf0 bytes
    //
    _y50(sdk::unknown_ptr) process_controller_action_queue;
    
    // [PciProcessDeviceIdData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4240, 0x1d08 bytes
    // pci.sys .text:0xe35c, 0x1cf0 bytes
    // pci.sys .text:0xc46c, 0x1cf0 bytes
    // pci.sys .text:0x10290, 0x1cf0 bytes
    //
    _y51(sdk::unknown_ptr) process_device_id_data;
    
    // [PciProcessEventInDisabledState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14dd8, 0x1d08 bytes
    // pci.sys .text:0x20110, 0x1cf0 bytes
    // pci.sys .text:0x214f8, 0x1cf0 bytes
    // pci.sys .text:0x1ff10, 0x1cf0 bytes
    //
    _y52(sdk::unknown_ptr) process_event_in_disabled_state;
    
    // [PciProcessEventInFullyFunctionalState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x14f24, 0x1d08 bytes
    // pci.sys .text:0x202bc, 0x1cf0 bytes
    // pci.sys .text:0x216a4, 0x1cf0 bytes
    // pci.sys .text:0x200bc, 0x1cf0 bytes
    //
    _y53(sdk::unknown_ptr) process_event_in_fully_functional_state;
    
    // [PciProcessEventInLinkActiveTimerQueuedState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15090, 0x1d08 bytes
    // pci.sys .text:0x20450, 0x1cf0 bytes
    // pci.sys .text:0x21838, 0x1cf0 bytes
    // pci.sys .text:0x20250, 0x1cf0 bytes
    //
    _y54(sdk::unknown_ptr) process_event_in_link_active_timer_queued_state;
    
    // [PciProcessEventInPowerOffTimerQueuedState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1684, 0x1d08 bytes
    // pci.sys .text:0x204e4, 0x1cf0 bytes
    // pci.sys .text:0x218cc, 0x1cf0 bytes
    // pci.sys .text:0x202e4, 0x1cf0 bytes
    //
    _y55(sdk::unknown_ptr) process_event_in_power_off_timer_queued_state;
    
    // [PciProcessEventInSettleTimerQueuedState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15114, 0x1d08 bytes
    // pci.sys .text:0x205b4, 0x1cf0 bytes
    // pci.sys .text:0x2199c, 0x1cf0 bytes
    // pci.sys .text:0x203b4, 0x1cf0 bytes
    //
    _y56(sdk::unknown_ptr) process_event_in_settle_timer_queued_state;
    
    // [PciProcessEventInWaitingWhileDisabledState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15184, 0x1d08 bytes
    // pci.sys .text:0x2062c, 0x1cf0 bytes
    // pci.sys .text:0x21a14, 0x1cf0 bytes
    // pci.sys .text:0x2042c, 0x1cf0 bytes
    //
    _y57(sdk::unknown_ptr) process_event_in_waiting_while_disabled_state;
    
    // [PciProcessEventInWaitingWhileEnabledState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1527c, 0x1d08 bytes
    // pci.sys .text:0x2073c, 0x1cf0 bytes
    // pci.sys .text:0x21b24, 0x1cf0 bytes
    // pci.sys .text:0x2053c, 0x1cf0 bytes
    //
    _y58(sdk::unknown_ptr) process_event_in_waiting_while_enabled_state;
    
    // [PciProcessHotPlugCommand]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1e5c, 0x1d08 bytes
    // pci.sys .text:0x208b0, 0x1cf0 bytes
    // pci.sys .text:0x21c98, 0x1cf0 bytes
    // pci.sys .text:0x206b0, 0x1cf0 bytes
    //
    _y59(sdk::unknown_ptr) process_hot_plug_command;
    
    // [PciProcessHotPlugEvent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x153c4, 0x1d08 bytes
    // pci.sys .text:0x20ba8, 0x1cf0 bytes
    // pci.sys .text:0x21f90, 0x1cf0 bytes
    // pci.sys .text:0x209a8, 0x1cf0 bytes
    //
    _y60(sdk::unknown_ptr) process_hot_plug_event;
    
    // [PciProcessHotPlugInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1550c, 0x1d08 bytes
    // pci.sys .text:0x20cfc, 0x1cf0 bytes
    // pci.sys .text:0x22104, 0x1cf0 bytes
    // pci.sys .text:0x20afc, 0x1cf0 bytes
    //
    _y61(sdk::unknown_ptr) process_hot_plug_interrupts;
    
    // [PciProcessHotPlugQueues]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1c80, 0x1d08 bytes
    // pci.sys .text:0x20d44, 0x1cf0 bytes
    // pci.sys .text:0x2214c, 0x1cf0 bytes
    // pci.sys .text:0x20b44, 0x1cf0 bytes
    //
    _y62(sdk::unknown_ptr) process_hot_plug_queues;
    
    // [PciProcessHtCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2eb30, 0x1d08 bytes
    // pci.sys PAGE:0x53034, 0x1cf0 bytes
    // pci.sys PAGE:0x5875c, 0x1cf0 bytes
    // pci.sys PAGE:0x53544, 0x1cf0 bytes
    //
    _y63(sdk::unknown_ptr) process_ht_capabilities;
    
    // [PciProcessInitialConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x324e0, 0x1d08 bytes
    // pci.sys PAGE:0x44e10, 0x1cf0 bytes
    // pci.sys PAGE:0x4b5e4, 0x1cf0 bytes
    // pci.sys PAGE:0x45620, 0x1cf0 bytes
    //
    _y64(sdk::unknown_ptr) process_initial_config;
    
    // [PciProcessInterruptDescriptor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d71c, 0x1d08 bytes
    // pci.sys PAGE:0x40598, 0x1cf0 bytes
    // pci.sys PAGE:0x51500, 0x1cf0 bytes
    // pci.sys PAGE:0x3fc58, 0x1cf0 bytes
    //
    _y65(sdk::unknown_ptr) process_interrupt_descriptor;
    
    // [PciProcessInterruptMessageData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3470, 0x1d08 bytes
    // pci.sys .text:0xd8f0, 0x1cf0 bytes
    // pci.sys .text:0xb780, 0x1cf0 bytes
    // pci.sys .text:0xf440, 0x1cf0 bytes
    //
    _y66(sdk::unknown_ptr) process_interrupt_message_data;
    
    // [PciProcessNewBridgedBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2dba0, 0x1d08 bytes
    // pci.sys PAGE:0x4b8d0, 0x1cf0 bytes
    // pci.sys PAGE:0x54bb0, 0x1cf0 bytes
    // pci.sys PAGE:0x3d860, 0x1cf0 bytes
    //
    _y67(sdk::unknown_ptr) process_new_bridged_bus;
    
    // [PciProcessNewDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x305a0, 0x1d08 bytes
    // pci.sys PAGE:0x43d80, 0x1cf0 bytes
    // pci.sys PAGE:0x4d9b0, 0x1cf0 bytes
    // pci.sys PAGE:0x44590, 0x1cf0 bytes
    //
    _y68(sdk::unknown_ptr) process_new_device;
    
    // [PciProcessNewRootBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a3d8, 0x1d08 bytes
    // pci.sys PAGE:0x53b00, 0x1cf0 bytes
    // pci.sys PAGE:0x43e08, 0x1cf0 bytes
    // pci.sys PAGE:0x53f10, 0x1cf0 bytes
    //
    _y69(sdk::unknown_ptr) process_new_root_bus;
    
    // [PciProcessPowerCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f720, 0x1d08 bytes
    // pci.sys PAGE:0x42b4c, 0x1cf0 bytes
    // pci.sys PAGE:0x4f1e8, 0x1cf0 bytes
    // pci.sys PAGE:0x44114, 0x1cf0 bytes
    //
    _y70(sdk::unknown_ptr) process_power_capability;
    
    // [PciProcessSlotInterrupts]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1554c, 0x1d08 bytes
    // pci.sys .text:0x20edc, 0x1cf0 bytes
    // pci.sys .text:0x22318, 0x1cf0 bytes
    // pci.sys .text:0x20cdc, 0x1cf0 bytes
    //
    _y71(sdk::unknown_ptr) process_slot_interrupts;
    
    // [PciProcessStartResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d480, 0x1d08 bytes
    // pci.sys PAGE:0x402b0, 0x1cf0 bytes
    // pci.sys PAGE:0x51210, 0x1cf0 bytes
    // pci.sys PAGE:0x3f970, 0x1cf0 bytes
    //
    _y72(sdk::unknown_ptr) process_start_resources;
    
    // [PciProcessStateAgnosticEvent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15640, 0x1d08 bytes
    // pci.sys .text:0x20fd4, 0x1cf0 bytes
    // pci.sys .text:0x22410, 0x1cf0 bytes
    // pci.sys .text:0x20dd4, 0x1cf0 bytes
    //
    _y73(sdk::unknown_ptr) process_state_agnostic_event;
    
    // [PciProcessorCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24698, 0x1d08 bytes
    // pci.sys .data:0x359b8, 0x1cf0 bytes
    // pci.sys .data:0x39a38, 0x1cf0 bytes
    // pci.sys .data:0x339b8, 0x1cf0 bytes
    //
    _y74(sdk::unknown_ptr) processor_count;
    
    // [PciProgramHtMsiMapCapability]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15fe8, 0x1d08 bytes
    // pci.sys .text:0x21c08, 0x1cf0 bytes
    // pci.sys .text:0x23aa8, 0x1cf0 bytes
    // pci.sys .text:0x21a08, 0x1cf0 bytes
    //
    _y75(sdk::unknown_ptr) program_ht_msi_map_capability;
    
    // [PciProgramInterruptResource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3240, 0x1d08 bytes
    // pci.sys .text:0xb860, 0x1cf0 bytes
    // pci.sys .text:0x8278, 0x1cf0 bytes
    // pci.sys .text:0xd0f0, 0x1cf0 bytes
    //
    _y76(sdk::unknown_ptr) program_interrupt_resource;
    
    // [PciProgramIoArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38180, 0x1d08 bytes
    // pci.sys PAGE:0x3f688, 0x1cf0 bytes
    // pci.sys PAGE:0x52b90, 0x1cf0 bytes
    // pci.sys PAGE:0x4b230, 0x1cf0 bytes
    //
    _y77(sdk::unknown_ptr) program_io_arbiter;
    
    // [PciProgramMemoryArbiter]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47300, 0x1d08 bytes
    // pci.sys PAGE:0x3f30c, 0x1cf0 bytes
    // pci.sys PAGE:0x52764, 0x1cf0 bytes
    // pci.sys PAGE:0x4aeb4, 0x1cf0 bytes
    //
    _y78(sdk::unknown_ptr) program_memory_arbiter;
    
    // [PciProgramMsiInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5490, 0x1d08 bytes
    // pci.sys .text:0xb21c, 0x1cf0 bytes
    // pci.sys .text:0x2f6c, 0x1cf0 bytes
    // pci.sys .text:0xc92c, 0x1cf0 bytes
    //
    _y79(sdk::unknown_ptr) program_msi_interrupt;
    
    // [PciProgramMsiXInterrupt]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x160d4, 0x1d08 bytes
    // pci.sys .text:0xd780, 0x1cf0 bytes
    // pci.sys .text:0xb610, 0x1cf0 bytes
    // pci.sys .text:0xf2d0, 0x1cf0 bytes
    //
    _y80(sdk::unknown_ptr) program_msi_x_interrupt;
    
    // [PciQueryCompatibleIDs]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x34b50, 0x1d08 bytes
    // pci.sys PAGE:0x4f1a0, 0x1cf0 bytes
    // pci.sys PAGE:0x563d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4f6b0, 0x1cf0 bytes
    //
    _y81(sdk::unknown_ptr) query_compatible_i_ds;
    
    // [PciQueryDeviceText]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x32070, 0x1d08 bytes
    // pci.sys PAGE:0x48200, 0x1cf0 bytes
    // pci.sys PAGE:0x49e2c, 0x1cf0 bytes
    // pci.sys PAGE:0x48990, 0x1cf0 bytes
    //
    _y82(sdk::unknown_ptr) query_device_text;
    
    // [PciQueryDeviceUsage]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a060, 0x1d08 bytes
    // pci.sys PAGE:0x60b30, 0x1cf0 bytes
    // pci.sys PAGE:0x67cf0, 0x1cf0 bytes
    // pci.sys PAGE:0x5ea90, 0x1cf0 bytes
    //
    _y83(sdk::unknown_ptr) query_device_usage;
    
    // [PciQueryDeviceUsageInTree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48934, 0x1d08 bytes
    // pci.sys PAGE:0x5fd50, 0x1cf0 bytes
    // pci.sys PAGE:0x666c0, 0x1cf0 bytes
    // pci.sys PAGE:0x5dca0, 0x1cf0 bytes
    //
    _y84(sdk::unknown_ptr) query_device_usage_in_tree;
    
    // [PciQueryEjectionRelations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a8d0, 0x1d08 bytes
    // pci.sys PAGE:0x6136c, 0x1cf0 bytes
    // pci.sys PAGE:0x68c18, 0x1cf0 bytes
    // pci.sys PAGE:0x5f2cc, 0x1cf0 bytes
    //
    _y85(sdk::unknown_ptr) query_ejection_relations;
    
    // [PciQueryHardwareIDs]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35060, 0x1d08 bytes
    // pci.sys PAGE:0x4f6b0, 0x1cf0 bytes
    // pci.sys PAGE:0x568e0, 0x1cf0 bytes
    // pci.sys PAGE:0x4fbc0, 0x1cf0 bytes
    //
    _y86(sdk::unknown_ptr) query_hardware_i_ds;
    
    // [PciQueryInstanceID]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x354a0, 0x1d08 bytes
    // pci.sys PAGE:0x4ee60, 0x1cf0 bytes
    // pci.sys PAGE:0x561a4, 0x1cf0 bytes
    // pci.sys PAGE:0x4f370, 0x1cf0 bytes
    //
    _y87(sdk::unknown_ptr) query_instance_id;
    
    // [PciQueryInterruptSteeringInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x51cb4, 0x1d08 bytes
    // pci.sys INIT:0x70264, 0x1cf0 bytes
    // pci.sys INIT:0x783e0, 0x1cf0 bytes
    // pci.sys INIT:0x6e264, 0x1cf0 bytes
    //
    _y88(sdk::unknown_ptr) query_interrupt_steering_information;
    
    // [PciQueryPowerCapabilities]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x31230, 0x1d08 bytes
    // pci.sys PAGE:0x4e870, 0x1cf0 bytes
    // pci.sys PAGE:0x557f0, 0x1cf0 bytes
    // pci.sys PAGE:0x4ed80, 0x1cf0 bytes
    //
    _y89(sdk::unknown_ptr) query_power_capabilities;
    
    // [PciQueryRootBusInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39924, 0x1d08 bytes
    // pci.sys PAGE:0x53e94, 0x1cf0 bytes
    // pci.sys PAGE:0x441b4, 0x1cf0 bytes
    // pci.sys PAGE:0x542a4, 0x1cf0 bytes
    //
    _y90(sdk::unknown_ptr) query_root_bus_interface;
    
    // [PciQueryRuleCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bca0, 0x1d08 bytes
    // pci.sys PAGE:0x52790, 0x1cf0 bytes
    // pci.sys PAGE:0x57e30, 0x1cf0 bytes
    // pci.sys PAGE:0x52ca0, 0x1cf0 bytes
    //
    _y91(sdk::unknown_ptr) query_rule_callback;
    
    // [PciQuerySupportedResetTypes]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ae4c, 0x1d08 bytes
    // pci.sys PAGE:0x54d88, 0x1cf0 bytes
    // pci.sys PAGE:0x5a33c, 0x1cf0 bytes
    // pci.sys PAGE:0x55228, 0x1cf0 bytes
    //
    _y92(sdk::unknown_ptr) query_supported_reset_types;
    
    // [PciQueryTargetDeviceRelations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f428, 0x1d08 bytes
    // pci.sys PAGE:0x53348, 0x1cf0 bytes
    // pci.sys PAGE:0x432b8, 0x1cf0 bytes
    // pci.sys PAGE:0x53a18, 0x1cf0 bytes
    //
    _y93(sdk::unknown_ptr) query_target_device_relations;
    
    // [PciQueueHotPlugEvent]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1744, 0x1d08 bytes
    // pci.sys .text:0x21214, 0x1cf0 bytes
    // pci.sys .text:0x22650, 0x1cf0 bytes
    // pci.sys .text:0x21014, 0x1cf0 bytes
    //
    _y94(sdk::unknown_ptr) queue_hot_plug_event;
    
    // [PciRangeListFromResourceList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x382e0, 0x1d08 bytes
    // pci.sys PAGE:0x3f810, 0x1cf0 bytes
    // pci.sys PAGE:0x52c34, 0x1cf0 bytes
    // pci.sys PAGE:0x4b3b8, 0x1cf0 bytes
    //
    _y95(sdk::unknown_ptr) range_list_from_resource_list;
    
    // [PciReadBusNumsRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10e90, 0x1d08 bytes
    // pci.sys .text:0x7818, 0x1cf0 bytes
    // pci.sys .text:0x84d8, 0x1cf0 bytes
    // pci.sys .text:0x8b58, 0x1cf0 bytes
    //
    _y96(sdk::unknown_ptr) read_bus_nums_raw;
    
    // [PciReadConfigRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10f0c, 0x1d08 bytes
    // pci.sys .text:0x78a0, 0x1cf0 bytes
    // pci.sys .text:0x6620, 0x1cf0 bytes
    // pci.sys .text:0x8be0, 0x1cf0 bytes
    //
    _y97(sdk::unknown_ptr) read_config_raw;
    
    // [PciReadDeviceConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5f90, 0x1d08 bytes
    // pci.sys .text:0xab60, 0x1cf0 bytes
    // pci.sys .text:0x3fe0, 0x1cf0 bytes
    // pci.sys .text:0xc290, 0x1cf0 bytes
    //
    _y98(sdk::unknown_ptr) read_device_config;
    
    // [PciReadDeviceSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1067c, 0x1d08 bytes
    // pci.sys .text:0x1a58c, 0x1cf0 bytes
    // pci.sys .text:0x19fe4, 0x1cf0 bytes
    // pci.sys .text:0x1a334, 0x1cf0 bytes
    //
    _y99(sdk::unknown_ptr) read_device_space;
    
    // [PciReadHeaderTypeRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10f74, 0x1d08 bytes
    // pci.sys .text:0x5ab4, 0x1cf0 bytes
    // pci.sys .text:0x7634, 0x1cf0 bytes
    // pci.sys .text:0x6d94, 0x1cf0 bytes
    //
    _z00(sdk::unknown_ptr) read_header_type_raw;
    
    // [PciReadNextARIFunctionRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10fa0, 0x1d08 bytes
    // pci.sys .text:0x1a9cc, 0x1cf0 bytes
    // pci.sys .text:0x1a46c, 0x1cf0 bytes
    // pci.sys .text:0x1a76c, 0x1cf0 bytes
    //
    _z01(sdk::unknown_ptr) read_next_ari_function_raw;
    
    // [PciReadRomImage]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4dfd0, 0x1d08 bytes
    // pci.sys PAGE:0x698e4, 0x1cf0 bytes
    // pci.sys PAGE:0x72a2c, 0x1cf0 bytes
    // pci.sys PAGE:0x67744, 0x1cf0 bytes
    //
    _z02(sdk::unknown_ptr) read_rom_image;
    
    // [PciReadSlotConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3080, 0x1d08 bytes
    // pci.sys .text:0x94b0, 0x1cf0 bytes
    // pci.sys .text:0x5cf0, 0x1cf0 bytes
    // pci.sys .text:0xa970, 0x1cf0 bytes
    //
    _z03(sdk::unknown_ptr) read_slot_config;
    
    // [PciReadSlotIdData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4930, 0x1d08 bytes
    // pci.sys .text:0x7fc0, 0x1cf0 bytes
    // pci.sys .text:0x4830, 0x1cf0 bytes
    // pci.sys .text:0x9480, 0x1cf0 bytes
    //
    _z04(sdk::unknown_ptr) read_slot_id_data;
    
    // [PciReconnectDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11500, 0x1d08 bytes
    // pci.sys .text:0x36cc, 0x1cf0 bytes
    // pci.sys .text:0xc5ac, 0x1cf0 bytes
    // pci.sys .text:0x45ac, 0x1cf0 bytes
    //
    _z05(sdk::unknown_ptr) reconnect_device;
    
    // [PciReenumerateSelfInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ab70, 0x1d08 bytes
    // pci.sys .rdata:0x288c8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a938, 0x1cf0 bytes
    // pci.sys .rdata:0x278d0, 0x1cf0 bytes
    //
    _z06(sdk::unknown_ptr) reenumerate_self_interface;
    
    // [PciReenumerateSelfInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f0c0, 0x1d08 bytes
    // pci.sys PAGE:0x550f0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b3d0, 0x1cf0 bytes
    // pci.sys PAGE:0x55590, 0x1cf0 bytes
    //
    _z07(sdk::unknown_ptr) reenumerate_self_interface_constructor;
    
    // [PciRefDereferenceNoop]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2c040, 0x1d08 bytes
    // pci.sys PAGE:0x3e110, 0x1cf0 bytes
    // pci.sys PAGE:0x433d0, 0x1cf0 bytes
    // pci.sys PAGE:0x3c250, 0x1cf0 bytes
    //
    _z08(sdk::unknown_ptr) ref_dereference_noop;
    
    // [PciRegisterVideoAdapterBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7bd8, 0x1d08 bytes
    // pci.sys .text:0xcae4, 0x1cf0 bytes
    // pci.sys .text:0xada4, 0x1cf0 bytes
    // pci.sys .text:0xe634, 0x1cf0 bytes
    //
    _z09(sdk::unknown_ptr) register_video_adapter_bus;
    
    // [PciRegistryPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x246e0, 0x1d08 bytes
    // pci.sys .data:0x35a88, 0x1cf0 bytes
    // pci.sys .data:0x39b18, 0x1cf0 bytes
    // pci.sys .data:0x33a88, 0x1cf0 bytes
    //
    _z10(sdk::unknown_ptr) registry_path;
    
    // [PciRemoveBusFromTree]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48aa0, 0x1d08 bytes
    // pci.sys PAGE:0x5feec, 0x1cf0 bytes
    // pci.sys PAGE:0x6685c, 0x1cf0 bytes
    // pci.sys PAGE:0x5de3c, 0x1cf0 bytes
    //
    _z11(sdk::unknown_ptr) remove_bus_from_tree;
    
    // [PciRequirementFromBar]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x36bc, 0x1d08 bytes
    // pci.sys .text:0x5380, 0x1cf0 bytes
    // pci.sys .text:0x3284, 0x1cf0 bytes
    // pci.sys .text:0x6660, 0x1cf0 bytes
    //
    _z12(sdk::unknown_ptr) requirement_from_bar;
    
    // [PciRequirementFromRomBar]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x86a4, 0x1d08 bytes
    // pci.sys .text:0x4604, 0x1cf0 bytes
    // pci.sys .text:0xc338, 0x1cf0 bytes
    // pci.sys .text:0x5658, 0x1cf0 bytes
    //
    _z13(sdk::unknown_ptr) requirement_from_rom_bar;
    
    // [PciRequirementInsideWindow]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x470dc, 0x1d08 bytes
    // pci.sys PAGE:0x5d584, 0x1cf0 bytes
    // pci.sys PAGE:0x6485c, 0x1cf0 bytes
    // pci.sys PAGE:0x5b4cc, 0x1cf0 bytes
    //
    _z14(sdk::unknown_ptr) requirement_inside_window;
    
    // [PciResetBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x115bc, 0x1d08 bytes
    // pci.sys .text:0x1ae78, 0x1cf0 bytes
    // pci.sys .text:0x1a8f4, 0x1cf0 bytes
    // pci.sys .text:0x1ac18, 0x1cf0 bytes
    //
    _z15(sdk::unknown_ptr) reset_bridge;
    
    // [PciResizableBarGetInfoPtr]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x698c, 0x1d08 bytes
    // pci.sys .text:0xbd28, 0x1cf0 bytes
    // pci.sys .text:0x2a68, 0x1cf0 bytes
    // pci.sys .text:0xd758, 0x1cf0 bytes
    //
    _z16(sdk::unknown_ptr) resizable_bar_get_info_ptr;
    
    // [PciResizableBarInitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4dd0c, 0x1d08 bytes
    // pci.sys PAGE:0x694e8, 0x1cf0 bytes
    // pci.sys PAGE:0x72728, 0x1cf0 bytes
    // pci.sys PAGE:0x67348, 0x1cf0 bytes
    //
    _z17(sdk::unknown_ptr) resizable_bar_initialize;
    
    // [PciResourceFromBar]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17d1c, 0x1d08 bytes
    // pci.sys .text:0x4cdc, 0x1cf0 bytes
    // pci.sys .text:0x2c54, 0x1cf0 bytes
    // pci.sys .text:0x5e24, 0x1cf0 bytes
    //
    _z18(sdk::unknown_ptr) resource_from_bar;
    
    // [PciResourceFromRomBar]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17d88, 0x1d08 bytes
    // pci.sys .text:0x25474, 0x1cf0 bytes
    // pci.sys .text:0x2761c, 0x1cf0 bytes
    // pci.sys .text:0x25294, 0x1cf0 bytes
    //
    _z19(sdk::unknown_ptr) resource_from_rom_bar;
    
    // [PciRestoreDeviceRegisters]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4e20, 0x1d08 bytes
    // pci.sys .text:0xa13c, 0x1cf0 bytes
    // pci.sys .text:0x37e0, 0x1cf0 bytes
    // pci.sys .text:0xb65c, 0x1cf0 bytes
    //
    _z20(sdk::unknown_ptr) restore_device_registers;
    
    // [PciRollbackMemoryOrderingLists]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x47388, 0x1d08 bytes
    // pci.sys PAGE:0x5d828, 0x1cf0 bytes
    // pci.sys PAGE:0x64c18, 0x1cf0 bytes
    // pci.sys PAGE:0x5b778, 0x1cf0 bytes
    //
    _z21(sdk::unknown_ptr) rollback_memory_ordering_lists;
    
    // [PciRomTestWriteAccessToBuffer]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e27c, 0x1d08 bytes
    // pci.sys PAGE:0x69b98, 0x1cf0 bytes
    // pci.sys PAGE:0x72ce0, 0x1cf0 bytes
    // pci.sys PAGE:0x679f8, 0x1cf0 bytes
    //
    _z22(sdk::unknown_ptr) rom_test_write_access_to_buffer;
    
    // [PciRootAssembleCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a1d4, 0x1d08 bytes
    // pci.sys PAGE:0x53500, 0x1cf0 bytes
    // pci.sys PAGE:0x59e08, 0x1cf0 bytes
    // pci.sys PAGE:0x4df10, 0x1cf0 bytes
    //
    _z23(sdk::unknown_ptr) root_assemble_custom_properties;
    
    // [PciRootBusDefaultPropertyList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1add0, 0x1d08 bytes
    // pci.sys .rdata:0x28b30, 0x1cf0 bytes
    // pci.sys .rdata:0x2b040, 0x1cf0 bytes
    // pci.sys .rdata:0x27e30, 0x1cf0 bytes
    //
    _z24(sdk::unknown_ptr) root_bus_default_property_list;
    
    // [PciRootFilterRequirementsList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3e110, 0x1d08 bytes
    // pci.sys PAGE:0x510f0, 0x1cf0 bytes
    // pci.sys PAGE:0x58700, 0x1cf0 bytes
    // pci.sys PAGE:0x51600, 0x1cf0 bytes
    //
    _z25(sdk::unknown_ptr) root_filter_requirements_list;
    
    // [PciRootFilterStartResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a370, 0x1d08 bytes
    // pci.sys PAGE:0x53a90, 0x1cf0 bytes
    // pci.sys PAGE:0x5a100, 0x1cf0 bytes
    // pci.sys PAGE:0x53ea0, 0x1cf0 bytes
    //
    _z26(sdk::unknown_ptr) root_filter_start_resources;
    
    // [RootPmeEventDispatcher]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8430, 0x1d08 bytes
    // pci.sys .text:0xdf00, 0x1cf0 bytes
    // pci.sys .text:0xd220, 0x1cf0 bytes
    // pci.sys .text:0xfa50, 0x1cf0 bytes
    //
    _z27(sdk::unknown_ptr) root_pme_event_dispatcher;
    
    // [PciRootSetCustomProperties]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a0b0, 0x1d08 bytes
    // pci.sys PAGE:0x533d0, 0x1cf0 bytes
    // pci.sys PAGE:0x59cd8, 0x1cf0 bytes
    // pci.sys PAGE:0x4dde0, 0x1cf0 bytes
    //
    _z28(sdk::unknown_ptr) root_set_custom_properties;
    
    // [PciRoundRobinCurrentProcessor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x246a0, 0x1d08 bytes
    // pci.sys .data:0x359c0, 0x1cf0 bytes
    // pci.sys .data:0x39a40, 0x1cf0 bytes
    // pci.sys .data:0x339c0, 0x1cf0 bytes
    //
    _z29(sdk::unknown_ptr) round_robin_current_processor;
    
    // [PciRoundRobinIndex]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247ec, 0x1d08 bytes
    // pci.sys .data:0x35bfc, 0x1cf0 bytes
    // pci.sys .data:0x39b28, 0x1cf0 bytes
    // pci.sys .data:0x33bfc, 0x1cf0 bytes
    //
    _z30(sdk::unknown_ptr) round_robin_index;
    
    // [PciRoutingInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ad30, 0x1d08 bytes
    // pci.sys .rdata:0x28a88, 0x1cf0 bytes
    // pci.sys .rdata:0x2aaf8, 0x1cf0 bytes
    // pci.sys .rdata:0x27a90, 0x1cf0 bytes
    //
    _z31(sdk::unknown_ptr) routing_interface;
    
    // [PciRoutingInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f4d0, 0x1d08 bytes
    // pci.sys PAGE:0x556f0, 0x1cf0 bytes
    // pci.sys PAGE:0x5ba70, 0x1cf0 bytes
    // pci.sys PAGE:0x55c80, 0x1cf0 bytes
    //
    _z32(sdk::unknown_ptr) routing_interface_constructor;
    
    // [PciRoutingInterface_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9460, 0x1d08 bytes
    // pci.sys .text:0x1730, 0x1cf0 bytes
    // pci.sys .text:0x19d0, 0x1cf0 bytes
    // pci.sys .text:0x1b20, 0x1cf0 bytes
    //
    _z33(sdk::unknown_ptr) routing_interface_dereference;
    
    // [PciRoutingInterface_GetRoutingInfo]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3d200, 0x1d08 bytes
    // pci.sys PAGE:0x4f930, 0x1cf0 bytes
    // pci.sys PAGE:0x56b90, 0x1cf0 bytes
    // pci.sys PAGE:0x4fe40, 0x1cf0 bytes
    //
    _z34(sdk::unknown_ptr) routing_interface_get_routing_info;
    
    // [PciRoutingInterface_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1820, 0x1d08 bytes
    // pci.sys .text:0x1740, 0x1cf0 bytes
    // pci.sys .text:0x19e0, 0x1cf0 bytes
    // pci.sys .text:0x1b30, 0x1cf0 bytes
    //
    _z35(sdk::unknown_ptr) routing_interface_reference;
    
    // [PciRoutingInterface_UpdateInterruptLine]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2f870, 0x1d08 bytes
    // pci.sys PAGE:0x43770, 0x1cf0 bytes
    // pci.sys PAGE:0x4f340, 0x1cf0 bytes
    // pci.sys PAGE:0x43e70, 0x1cf0 bytes
    //
    _z36(sdk::unknown_ptr) routing_interface_update_interrupt_line;
    
    // [s_PciId]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1b510, 0x1d08 bytes
    // pci.sys .rdata:0x2a848, 0x1cf0 bytes
    // pci.sys .rdata:0x2cff8, 0x1cf0 bytes
    // pci.sys .rdata:0x291a8, 0x1cf0 bytes
    //
    _z37(sdk::unknown_ptr) s_pci_id;
    
    // [s_VmProxyId]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bb10, 0x1d08 bytes
    // pci.sys .rdata:0x2ad18, 0x1cf0 bytes
    // pci.sys .rdata:0x2ec58, 0x1cf0 bytes
    // pci.sys .rdata:0x297e0, 0x1cf0 bytes
    //
    _z38(sdk::unknown_ptr) s_vm_proxy_id;
    
    // [s_VmProxyRegPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ba50, 0x1d08 bytes
    // pci.sys .rdata:0x2a410, 0x1cf0 bytes
    // pci.sys .rdata:0x2bf10, 0x1cf0 bytes
    // pci.sys .rdata:0x296d0, 0x1cf0 bytes
    //
    _z39(sdk::unknown_ptr) s_vm_proxy_reg_path;
    
    // [s_VmProxyValue]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ba40, 0x1d08 bytes
    // pci.sys .rdata:0x2a400, 0x1cf0 bytes
    // pci.sys .rdata:0x2bf00, 0x1cf0 bytes
    // pci.sys .rdata:0x296c0, 0x1cf0 bytes
    //
    _z40(sdk::unknown_ptr) s_vm_proxy_value;
    
    // [PciSaveCapabilityPointers]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2fb40, 0x1d08 bytes
    // pci.sys PAGE:0x437e0, 0x1cf0 bytes
    // pci.sys PAGE:0x4f3b0, 0x1cf0 bytes
    // pci.sys PAGE:0x43ee0, 0x1cf0 bytes
    //
    _z41(sdk::unknown_ptr) save_capability_pointers;
    
    // [PciSaveSlotInformation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a134, 0x1d08 bytes
    // pci.sys PAGE:0x60b84, 0x1cf0 bytes
    // pci.sys PAGE:0x4b424, 0x1cf0 bytes
    // pci.sys PAGE:0x5eae4, 0x1cf0 bytes
    //
    _z42(sdk::unknown_ptr) save_slot_information;
    
    // [PciScanBus]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2edb0, 0x1d08 bytes
    // pci.sys PAGE:0x42dd0, 0x1cf0 bytes
    // pci.sys PAGE:0x4f5f0, 0x1cf0 bytes
    // pci.sys PAGE:0x43020, 0x1cf0 bytes
    //
    _z43(sdk::unknown_ptr) scan_bus;
    
    // [PciScanBusCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x35ed0, 0x1d08 bytes
    // pci.sys PAGE:0x41f40, 0x1cf0 bytes
    // pci.sys PAGE:0x49198, 0x1cf0 bytes
    // pci.sys PAGE:0x42030, 0x1cf0 bytes
    //
    _z44(sdk::unknown_ptr) scan_bus_completion;
    
    // [PciSecurityInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1ab10, 0x1d08 bytes
    // pci.sys .rdata:0x28868, 0x1cf0 bytes
    // pci.sys .rdata:0x2a8d8, 0x1cf0 bytes
    // pci.sys .rdata:0x27870, 0x1cf0 bytes
    //
    _z45(sdk::unknown_ptr) security_interface;
    
    // [PciSecurityInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c6f0, 0x1d08 bytes
    // pci.sys PAGE:0x671d0, 0x1cf0 bytes
    // pci.sys PAGE:0x6f830, 0x1cf0 bytes
    // pci.sys PAGE:0x65030, 0x1cf0 bytes
    //
    _z46(sdk::unknown_ptr) security_interface_constructor;
    
    // [PciSecurityInterface_SetAcs]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4c750, 0x1d08 bytes
    // pci.sys PAGE:0x67240, 0x1cf0 bytes
    // pci.sys PAGE:0x6f910, 0x1cf0 bytes
    // pci.sys PAGE:0x650a0, 0x1cf0 bytes
    //
    _z47(sdk::unknown_ptr) security_interface_set_acs;
    
    // [PciSegmentList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x245f0, 0x1d08 bytes
    // pci.sys .data:0x35900, 0x1cf0 bytes
    // pci.sys .data:0x39980, 0x1cf0 bytes
    // pci.sys .data:0x33900, 0x1cf0 bytes
    //
    _z48(sdk::unknown_ptr) segment_list;
    
    // [PciSendIoctl]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38c58, 0x1d08 bytes
    // pci.sys PAGE:0x414d0, 0x1cf0 bytes
    // pci.sys PAGE:0x4845c, 0x1cf0 bytes
    // pci.sys PAGE:0x41300, 0x1cf0 bytes
    //
    _z49(sdk::unknown_ptr) send_ioctl;
    
    // [PciSendIoctlForDsmEvaluation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ec20, 0x1d08 bytes
    // pci.sys PAGE:0x6b0f8, 0x1cf0 bytes
    // pci.sys PAGE:0x53fe0, 0x1cf0 bytes
    // pci.sys PAGE:0x68fec, 0x1cf0 bytes
    //
    _z50(sdk::unknown_ptr) send_ioctl_for_dsm_evaluation;
    
    // [PciSendPnpIrp]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x38fe0, 0x1d08 bytes
    // pci.sys PAGE:0x46970, 0x1cf0 bytes
    // pci.sys PAGE:0x4d350, 0x1cf0 bytes
    // pci.sys PAGE:0x47290, 0x1cf0 bytes
    //
    _z51(sdk::unknown_ptr) send_pnp_irp;
    
    // [PciSetBusDisabledByConsoleLock]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x49f1c, 0x1d08 bytes
    // pci.sys PAGE:0x609c8, 0x1cf0 bytes
    // pci.sys PAGE:0x67b88, 0x1cf0 bytes
    // pci.sys PAGE:0x5e928, 0x1cf0 bytes
    //
    _z52(sdk::unknown_ptr) set_bus_disabled_by_console_lock;
    
    // [PciSetConsoleState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e434, 0x1d08 bytes
    // pci.sys PAGE:0x3feec, 0x1cf0 bytes
    // pci.sys PAGE:0x57830, 0x1cf0 bytes
    // pci.sys PAGE:0x3d4dc, 0x1cf0 bytes
    //
    _z53(sdk::unknown_ptr) set_console_state;
    
    // [PciSetD0DelayCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bd10, 0x1d08 bytes
    // pci.sys PAGE:0x66410, 0x1cf0 bytes
    // pci.sys PAGE:0x6e790, 0x1cf0 bytes
    // pci.sys PAGE:0x64270, 0x1cf0 bytes
    //
    _z54(sdk::unknown_ptr) set_d0_delay_callback;
    
    // [PciSetEventCompletion]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8270, 0x1d08 bytes
    // pci.sys .text:0xe420, 0x1cf0 bytes
    // pci.sys .text:0xcd60, 0x1cf0 bytes
    // pci.sys .text:0x10350, 0x1cf0 bytes
    //
    _z55(sdk::unknown_ptr) set_event_completion;
    
    // [PciSetHackFlagsByClass]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x4588, 0x1d08 bytes
    // pci.sys .text:0xdd5c, 0x1cf0 bytes
    // pci.sys .text:0xbce0, 0x1cf0 bytes
    // pci.sys .text:0xf8ac, 0x1cf0 bytes
    //
    _z56(sdk::unknown_ptr) set_hack_flags_by_class;
    
    // [PciSetHackflagsCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bd50, 0x1d08 bytes
    // pci.sys PAGE:0x66450, 0x1cf0 bytes
    // pci.sys PAGE:0x6e7d0, 0x1cf0 bytes
    // pci.sys PAGE:0x642b0, 0x1cf0 bytes
    //
    _z57(sdk::unknown_ptr) set_hackflags_callback;
    
    // [PciSetHardwarePowerStateDispatch]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12508, 0x1d08 bytes
    // pci.sys .text:0x4308, 0x1cf0 bytes
    // pci.sys .text:0x8560, 0x1cf0 bytes
    // pci.sys .text:0x5294, 0x1cf0 bytes
    //
    _z58(sdk::unknown_ptr) set_hardware_power_state_dispatch;
    
    // [PciSetHardwarePowerStateLogError]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1263c, 0x1d08 bytes
    // pci.sys .text:0x1b578, 0x1cf0 bytes
    // pci.sys .text:0x1ba88, 0x1cf0 bytes
    // pci.sys .text:0x1b358, 0x1cf0 bytes
    //
    _z59(sdk::unknown_ptr) set_hardware_power_state_log_error;
    
    // [PciSetHardwarePowerStatePassive]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x2e970, 0x1d08 bytes
    // pci.sys PAGE:0x61514, 0x1cf0 bytes
    // pci.sys PAGE:0x50f20, 0x1cf0 bytes
    // pci.sys PAGE:0x3c0b0, 0x1cf0 bytes
    //
    _z60(sdk::unknown_ptr) set_hardware_power_state_passive;
    
    // [PciSetHardwarePowerStatePreamble]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3820, 0x1d08 bytes
    // pci.sys .text:0x4e84, 0x1cf0 bytes
    // pci.sys .text:0x81cc, 0x1cf0 bytes
    // pci.sys .text:0x5fcc, 0x1cf0 bytes
    //
    _z61(sdk::unknown_ptr) set_hardware_power_state_preamble;
    
    // [PciSetHardwarePowerStateReset]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17f0, 0x1d08 bytes
    // pci.sys .text:0x1628, 0x1cf0 bytes
    // pci.sys .text:0x18d0, 0x1cf0 bytes
    // pci.sys .text:0x16c4, 0x1cf0 bytes
    //
    _z62(sdk::unknown_ptr) set_hardware_power_state_reset;
    
    // [PciSetHotPlugEventCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x15860, 0x1d08 bytes
    // pci.sys .text:0x212f0, 0x1cf0 bytes
    // pci.sys .text:0x22760, 0x1cf0 bytes
    // pci.sys .text:0x210f0, 0x1cf0 bytes
    //
    _z63(sdk::unknown_ptr) set_hot_plug_event_callback;
    
    // [PciSetMpsSizeCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4bd90, 0x1d08 bytes
    // pci.sys PAGE:0x664a0, 0x1cf0 bytes
    // pci.sys PAGE:0x6e820, 0x1cf0 bytes
    // pci.sys PAGE:0x64300, 0x1cf0 bytes
    //
    _z64(sdk::unknown_ptr) set_mps_size_callback;
    
    // [PciSlotPresentInParentMethod]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4a2b0, 0x1d08 bytes
    // pci.sys PAGE:0x60d44, 0x1cf0 bytes
    // pci.sys PAGE:0x67d44, 0x1cf0 bytes
    // pci.sys PAGE:0x5eca4, 0x1cf0 bytes
    //
    _z65(sdk::unknown_ptr) slot_present_in_parent_method;
    
    // [PciSriovBusNumbersRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11000, 0x1d08 bytes
    // pci.sys .text:0xe800, 0x1cf0 bytes
    // pci.sys .text:0x78c0, 0x1cf0 bytes
    // pci.sys .text:0x10730, 0x1cf0 bytes
    //
    _z66(sdk::unknown_ptr) sriov_bus_numbers_raw;
    
    // [PciStallForPowerChange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3910, 0x1d08 bytes
    // pci.sys .text:0x4f34, 0x1cf0 bytes
    // pci.sys .text:0x80dc, 0x1cf0 bytes
    // pci.sys .text:0x612c, 0x1cf0 bytes
    //
    _z67(sdk::unknown_ptr) stall_for_power_change;
    
    // [PciStartHotPlugController]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18c8, 0x1d08 bytes
    // pci.sys .text:0x21314, 0x1cf0 bytes
    // pci.sys .text:0x22784, 0x1cf0 bytes
    // pci.sys .text:0x21114, 0x1cf0 bytes
    //
    _z68(sdk::unknown_ptr) start_hot_plug_controller;
    
    // [PciStringToUSHORT]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys INIT:0x52524, 0x1d08 bytes
    // pci.sys INIT:0x70b44, 0x1cf0 bytes
    // pci.sys INIT:0x79d1c, 0x1cf0 bytes
    // pci.sys INIT:0x6eb44, 0x1cf0 bytes
    //
    _z69(sdk::unknown_ptr) string_to_ushort;
    
    // [PciSubtractiveDecodeBridge]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7238, 0x1d08 bytes
    // pci.sys .text:0x463c, 0x1cf0 bytes
    // pci.sys .text:0x9ca4, 0x1cf0 bytes
    // pci.sys .text:0x5690, 0x1cf0 bytes
    //
    _z70(sdk::unknown_ptr) subtractive_decode_bridge;
    
    // [PciSurpriseRemoveAndReenumerateSelf]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13140, 0x1d08 bytes
    // pci.sys .text:0xf0c0, 0x1cf0 bytes
    // pci.sys .text:0x1cae0, 0x1cf0 bytes
    // pci.sys .text:0x10f90, 0x1cf0 bytes
    //
    _z71(sdk::unknown_ptr) surprise_remove_and_reenumerate_self;
    
    // [PciSystemMsiEnabled]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234b1, 0x1d08 bytes
    // pci.sys .data:0x346d1, 0x1cf0 bytes
    // pci.sys .data:0x38731, 0x1cf0 bytes
    // pci.sys .data:0x326d1, 0x1cf0 bytes
    //
    _z72(sdk::unknown_ptr) system_msi_enabled;
    
    // [PciSystemPowerStateTransitionActive]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234d8, 0x1d08 bytes
    // pci.sys .data:0x34700, 0x1cf0 bytes
    // pci.sys .data:0x38769, 0x1cf0 bytes
    // pci.sys .data:0x32700, 0x1cf0 bytes
    //
    _z73(sdk::unknown_ptr) system_power_state_transition_active;
    
    // [PciSystemWideHackFlags]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x233a0, 0x1d08 bytes
    // pci.sys .data:0x34400, 0x1cf0 bytes
    // pci.sys .data:0x38450, 0x1cf0 bytes
    // pci.sys .data:0x32400, 0x1cf0 bytes
    //
    _z74(sdk::unknown_ptr) system_wide_hack_flags;
    
    // [PciTraceLogUninitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e3a4, 0x1d08 bytes
    // pci.sys PAGE:0x6a1e0, 0x1cf0 bytes
    // pci.sys PAGE:0x733b4, 0x1cf0 bytes
    // pci.sys PAGE:0x68040, 0x1cf0 bytes
    //
    _z75(sdk::unknown_ptr) trace_log_uninitialize;
    
    // [PciTranslateBusAddress]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x25b0, 0x1d08 bytes
    // pci.sys .text:0x25f0, 0x1cf0 bytes
    // pci.sys .text:0x95b0, 0x1cf0 bytes
    // pci.sys .text:0x3540, 0x1cf0 bytes
    //
    _z76(sdk::unknown_ptr) translate_bus_address;
    
    // [PciTranslateHostBridgeToDeviceSpeedAndMode]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6c10, 0x1d08 bytes
    // pci.sys .text:0xbddc, 0x1cf0 bytes
    // pci.sys .text:0x2938, 0x1cf0 bytes
    // pci.sys .text:0xd80c, 0x1cf0 bytes
    //
    _z77(sdk::unknown_ptr) translate_host_bridge_to_device_speed_and_mode;
    
    // [PciTranslateRomAddress]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e2a4, 0x1d08 bytes
    // pci.sys PAGE:0x69bc8, 0x1cf0 bytes
    // pci.sys PAGE:0x72d10, 0x1cf0 bytes
    // pci.sys PAGE:0x67a28, 0x1cf0 bytes
    //
    _z78(sdk::unknown_ptr) translate_rom_address;
    
    // [PciTranslatorInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1aaf0, 0x1d08 bytes
    // pci.sys .rdata:0x287a8, 0x1cf0 bytes
    // pci.sys .rdata:0x2a7d8, 0x1cf0 bytes
    // pci.sys .rdata:0x277b0, 0x1cf0 bytes
    //
    _z79(sdk::unknown_ptr) translator_interface;
    
    // [PciTranslatorInterface_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3eaf0, 0x1d08 bytes
    // pci.sys PAGE:0x54870, 0x1cf0 bytes
    // pci.sys PAGE:0x5b0c0, 0x1cf0 bytes
    // pci.sys PAGE:0x54a40, 0x1cf0 bytes
    //
    _z80(sdk::unknown_ptr) translator_interface_constructor;
    
    // [PciTryEnableBridgeARIRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11138, 0x1d08 bytes
    // pci.sys .text:0xc624, 0x1cf0 bytes
    // pci.sys .text:0xdabc, 0x1cf0 bytes
    // pci.sys .text:0xe034, 0x1cf0 bytes
    //
    _z81(sdk::unknown_ptr) try_enable_bridge_ari_raw;
    
    // [PciType0_GetRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5630, 0x1d08 bytes
    // pci.sys .text:0x9d30, 0x1cf0 bytes
    // pci.sys .text:0x3550, 0x1cf0 bytes
    // pci.sys .text:0xb250, 0x1cf0 bytes
    //
    _z82(sdk::unknown_ptr) type0_get_requirements;
    
    // [PciType0_GetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6020, 0x1d08 bytes
    // pci.sys .text:0xa870, 0x1cf0 bytes
    // pci.sys .text:0x3dc0, 0x1cf0 bytes
    // pci.sys .text:0xbfa0, 0x1cf0 bytes
    //
    _z83(sdk::unknown_ptr) type0_get_resources;
    
    // [PciType0HeaderOperations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x231a0, 0x1d08 bytes
    // pci.sys .data:0x34350, 0x1cf0 bytes
    // pci.sys .data:0x38350, 0x1cf0 bytes
    // pci.sys .data:0x32350, 0x1cf0 bytes
    //
    _z84(sdk::unknown_ptr) type0_header_operations;
    
    // [PciType0_SetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x40b0, 0x1d08 bytes
    // pci.sys .text:0xb9c0, 0x1cf0 bytes
    // pci.sys .text:0x2db0, 0x1cf0 bytes
    // pci.sys .text:0xd300, 0x1cf0 bytes
    //
    _z85(sdk::unknown_ptr) type0_set_resources;
    
    // [PciType1_GetRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5ad0, 0x1d08 bytes
    // pci.sys .text:0x4940, 0x1cf0 bytes
    // pci.sys .text:0xbd80, 0x1cf0 bytes
    // pci.sys .text:0x5ac0, 0x1cf0 bytes
    //
    _z86(sdk::unknown_ptr) type1_get_requirements;
    
    // [PciType1_GetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2c00, 0x1d08 bytes
    // pci.sys .text:0xa5c0, 0x1cf0 bytes
    // pci.sys .text:0xc070, 0x1cf0 bytes
    // pci.sys .text:0xbcf0, 0x1cf0 bytes
    //
    _z87(sdk::unknown_ptr) type1_get_resources;
    
    // [PciType1HeaderOperations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23188, 0x1d08 bytes
    // pci.sys .data:0x34338, 0x1cf0 bytes
    // pci.sys .data:0x38338, 0x1cf0 bytes
    // pci.sys .data:0x32338, 0x1cf0 bytes
    //
    _z88(sdk::unknown_ptr) type1_header_operations;
    
    // [PciType1_PrefetchMemoryBase]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x86d4, 0x1d08 bytes
    // pci.sys .text:0x45d4, 0x1cf0 bytes
    // pci.sys .text:0xc2c8, 0x1cf0 bytes
    // pci.sys .text:0x5628, 0x1cf0 bytes
    //
    _z89(sdk::unknown_ptr) type1_prefetch_memory_base;
    
    // [PciType1_PrefetchMemoryLimit]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3718, 0x1d08 bytes
    // pci.sys .text:0x4c4c, 0x1cf0 bytes
    // pci.sys .text:0xc298, 0x1cf0 bytes
    // pci.sys .text:0x5dcc, 0x1cf0 bytes
    //
    _z90(sdk::unknown_ptr) type1_prefetch_memory_limit;
    
    // [PciType1_SetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5080, 0x1d08 bytes
    // pci.sys .text:0xe600, 0x1cf0 bytes
    // pci.sys .text:0xd2e0, 0x1cf0 bytes
    // pci.sys .text:0x10530, 0x1cf0 bytes
    //
    _z91(sdk::unknown_ptr) type1_set_resources;
    
    // [PciType2_GetRequirements]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18510, 0x1d08 bytes
    // pci.sys .text:0x25db0, 0x1cf0 bytes
    // pci.sys .text:0x280e0, 0x1cf0 bytes
    // pci.sys .text:0x25bd0, 0x1cf0 bytes
    //
    _z92(sdk::unknown_ptr) type2_get_requirements;
    
    // [PciType2_GetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18740, 0x1d08 bytes
    // pci.sys .text:0x26050, 0x1cf0 bytes
    // pci.sys .text:0x28390, 0x1cf0 bytes
    // pci.sys .text:0x25e70, 0x1cf0 bytes
    //
    _z93(sdk::unknown_ptr) type2_get_resources;
    
    // [PciType2HeaderOperations]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23170, 0x1d08 bytes
    // pci.sys .data:0x34320, 0x1cf0 bytes
    // pci.sys .data:0x38320, 0x1cf0 bytes
    // pci.sys .data:0x32320, 0x1cf0 bytes
    //
    _z94(sdk::unknown_ptr) type2_header_operations;
    
    // [PciType2_SetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x189a0, 0x1d08 bytes
    // pci.sys .text:0x262e0, 0x1cf0 bytes
    // pci.sys .text:0x28620, 0x1cf0 bytes
    // pci.sys .text:0x26100, 0x1cf0 bytes
    //
    _z95(sdk::unknown_ptr) type2_set_resources;
    
    // [PciUnicodeStringStrStr]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b4a0, 0x1d08 bytes
    // pci.sys PAGE:0x4de64, 0x1cf0 bytes
    // pci.sys PAGE:0x43ab0, 0x1cf0 bytes
    // pci.sys PAGE:0x4e368, 0x1cf0 bytes
    //
    _z96(sdk::unknown_ptr) unicode_string_str_str;
    
    // [PciUpdateAncestorSubordinateBuses]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x48d1c, 0x1d08 bytes
    // pci.sys PAGE:0x601e4, 0x1cf0 bytes
    // pci.sys PAGE:0x66b54, 0x1cf0 bytes
    // pci.sys PAGE:0x5e134, 0x1cf0 bytes
    //
    _z97(sdk::unknown_ptr) update_ancestor_subordinate_buses;
    
    // [PciUpdateHardware]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3d30, 0x1d08 bytes
    // pci.sys .text:0x3760, 0x1cf0 bytes
    // pci.sys .text:0xcdf0, 0x1cf0 bytes
    // pci.sys .text:0x4690, 0x1cf0 bytes
    //
    _z98(sdk::unknown_ptr) update_hardware;
    
    // [PciUpdateHotPlugSlotAfterBusScan]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2240, 0x1d08 bytes
    // pci.sys .text:0xc540, 0x1cf0 bytes
    // pci.sys .text:0x20d4, 0x1cf0 bytes
    // pci.sys .text:0xdf50, 0x1cf0 bytes
    //
    _z99(sdk::unknown_ptr) update_hot_plug_slot_after_bus_scan;
    
    // [PciUpdateLegacyHardwareDescription]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x33be0, 0x1d08 bytes
    // pci.sys PAGE:0x45700, 0x1cf0 bytes
    // pci.sys PAGE:0x45eb8, 0x1cf0 bytes
    // pci.sys PAGE:0x45f10, 0x1cf0 bytes
    //
    _a00(sdk::unknown_ptr) update_legacy_hardware_description;
    
    // [PciUpdateSaveRestoreData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11678, 0x1d08 bytes
    // pci.sys .text:0x3230, 0x1cf0 bytes
    // pci.sys .text:0x8d00, 0x1cf0 bytes
    // pci.sys .text:0x4060, 0x1cf0 bytes
    //
    _a01(sdk::unknown_ptr) update_save_restore_data;
    
    // [PciValidateMsiXMemorySpaceStructures]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4d2c4, 0x1d08 bytes
    // pci.sys PAGE:0x52ad8, 0x1cf0 bytes
    // pci.sys PAGE:0x594e0, 0x1cf0 bytes
    // pci.sys PAGE:0x52fe8, 0x1cf0 bytes
    //
    _a02(sdk::unknown_ptr) validate_msi_x_memory_space_structures;
    
    // [PciVerifierEnsureTreeConsistancy]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18cf4, 0x1d08 bytes
    // pci.sys .text:0x26bc8, 0x1cf0 bytes
    // pci.sys .text:0x28dc4, 0x1cf0 bytes
    // pci.sys .text:0x269e8, 0x1cf0 bytes
    //
    _a03(sdk::unknown_ptr) verifier_ensure_tree_consistancy;
    
    // [PciVerifierFailureTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x23110, 0x1d08 bytes
    // pci.sys .data:0x342c0, 0x1cf0 bytes
    // pci.sys .data:0x382c0, 0x1cf0 bytes
    // pci.sys .data:0x322c0, 0x1cf0 bytes
    //
    _a04(sdk::unknown_ptr) verifier_failure_table;
    
    // [PciVerifierNotificationHandle]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247f8, 0x1d08 bytes
    // pci.sys .data:0x35c08, 0x1cf0 bytes
    // pci.sys .data:0x39ca8, 0x1cf0 bytes
    // pci.sys .data:0x33c08, 0x1cf0 bytes
    //
    _a05(sdk::unknown_ptr) verifier_notification_handle;
    
    // [PciVerifierProfileChangeCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ecf0, 0x1d08 bytes
    // pci.sys PAGE:0x6b270, 0x1cf0 bytes
    // pci.sys PAGE:0x74550, 0x1cf0 bytes
    // pci.sys PAGE:0x69170, 0x1cf0 bytes
    //
    _a06(sdk::unknown_ptr) verifier_profile_change_callback;
    
    // [PciVerifierRegistered]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24800, 0x1d08 bytes
    // pci.sys .data:0x35c10, 0x1cf0 bytes
    // pci.sys .data:0x39cb0, 0x1cf0 bytes
    // pci.sys .data:0x33c10, 0x1cf0 bytes
    //
    _a07(sdk::unknown_ptr) verifier_registered;
    
    // [PciVerifierRetrieveFailureData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x8410, 0x1d08 bytes
    // pci.sys .text:0xecc4, 0x1cf0 bytes
    // pci.sys .text:0xcfa8, 0x1cf0 bytes
    // pci.sys .text:0x10b9c, 0x1cf0 bytes
    //
    _a08(sdk::unknown_ptr) verifier_retrieve_failure_data;
    
    // [PciVgaAndIsaBitExclusionList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x24640, 0x1d08 bytes
    // pci.sys .data:0x35960, 0x1cf0 bytes
    // pci.sys .data:0x399e0, 0x1cf0 bytes
    // pci.sys .data:0x33960, 0x1cf0 bytes
    //
    _a09(sdk::unknown_ptr) vga_and_isa_bit_exclusion_list;
    
    // [PciVirtualizationConfigureAcs]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e5dc, 0x1d08 bytes
    // pci.sys PAGE:0x6a53c, 0x1cf0 bytes
    // pci.sys PAGE:0x73780, 0x1cf0 bytes
    // pci.sys PAGE:0x683d8, 0x1cf0 bytes
    //
    _a10(sdk::unknown_ptr) virtualization_configure_acs;
    
    // [PciVirtualization_Constructor]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e7a0, 0x1d08 bytes
    // pci.sys PAGE:0x55470, 0x1cf0 bytes
    // pci.sys PAGE:0x73910, 0x1cf0 bytes
    // pci.sys PAGE:0x55a00, 0x1cf0 bytes
    //
    _a11(sdk::unknown_ptr) virtualization_constructor;
    
    // [PciVirtualization_Dereference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9380, 0x1d08 bytes
    // pci.sys .text:0x1640, 0x1cf0 bytes
    // pci.sys .text:0x18e0, 0x1cf0 bytes
    // pci.sys .text:0x16e0, 0x1cf0 bytes
    //
    _a12(sdk::unknown_ptr) virtualization_dereference;
    
    // [PciVirtualization_EnableVirtualization]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4e880, 0x1d08 bytes
    // pci.sys PAGE:0x6a750, 0x1cf0 bytes
    // pci.sys PAGE:0x739e0, 0x1cf0 bytes
    // pci.sys PAGE:0x68600, 0x1cf0 bytes
    //
    _a13(sdk::unknown_ptr) virtualization_enable_virtualization;
    
    // [PciVirtualization_GetFunctionData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18c20, 0x1d08 bytes
    // pci.sys .text:0x26590, 0x1cf0 bytes
    // pci.sys .text:0x288f0, 0x1cf0 bytes
    // pci.sys .text:0x263b0, 0x1cf0 bytes
    //
    _a14(sdk::unknown_ptr) virtualization_get_function_data;
    
    // [PciVirtualization_GetLocation]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4eaa0, 0x1d08 bytes
    // pci.sys PAGE:0x6a960, 0x1cf0 bytes
    // pci.sys PAGE:0x73c80, 0x1cf0 bytes
    // pci.sys PAGE:0x68810, 0x1cf0 bytes
    //
    _a15(sdk::unknown_ptr) virtualization_get_location;
    
    // [PciVirtualization_GetResources]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3f5b0, 0x1d08 bytes
    // pci.sys PAGE:0x3e1a0, 0x1cf0 bytes
    // pci.sys PAGE:0x43460, 0x1cf0 bytes
    // pci.sys PAGE:0x3c2e0, 0x1cf0 bytes
    //
    _a16(sdk::unknown_ptr) virtualization_get_resources;
    
    // [PciVirtualization_GetVirtualFunctionProbedBars]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4eb30, 0x1d08 bytes
    // pci.sys PAGE:0x6aa00, 0x1cf0 bytes
    // pci.sys PAGE:0x73d20, 0x1cf0 bytes
    // pci.sys PAGE:0x688b0, 0x1cf0 bytes
    //
    _a17(sdk::unknown_ptr) virtualization_get_virtual_function_probed_bars;
    
    // [PciVirtualizationInterface]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1abd0, 0x1d08 bytes
    // pci.sys .rdata:0x28928, 0x1cf0 bytes
    // pci.sys .rdata:0x2a998, 0x1cf0 bytes
    // pci.sys .rdata:0x27930, 0x1cf0 bytes
    //
    _a18(sdk::unknown_ptr) virtualization_interface;
    
    // [PciVirtualization_Reference]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x9390, 0x1d08 bytes
    // pci.sys .text:0x1650, 0x1cf0 bytes
    // pci.sys .text:0x18f0, 0x1cf0 bytes
    // pci.sys .text:0x16f0, 0x1cf0 bytes
    //
    _a19(sdk::unknown_ptr) virtualization_reference;
    
    // [PciVirtualization_SetFunctionData]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18c90, 0x1d08 bytes
    // pci.sys .text:0x26600, 0x1cf0 bytes
    // pci.sys .text:0x28960, 0x1cf0 bytes
    // pci.sys .text:0x26420, 0x1cf0 bytes
    //
    _a20(sdk::unknown_ptr) virtualization_set_function_data;
    
    // [VmProxyAddPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ed3c, 0x1d08 bytes
    // pci.sys PAGE:0x6b2e4, 0x1cf0 bytes
    // pci.sys PAGE:0x74584, 0x1cf0 bytes
    // pci.sys PAGE:0x691e4, 0x1cf0 bytes
    //
    _a21(sdk::unknown_ptr) vm_proxy_add_path;
    
    // [VmProxyAddRemovePath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4eef8, 0x1d08 bytes
    // pci.sys PAGE:0x6b4d8, 0x1cf0 bytes
    // pci.sys PAGE:0x74768, 0x1cf0 bytes
    // pci.sys PAGE:0x693e4, 0x1cf0 bytes
    //
    _a22(sdk::unknown_ptr) vm_proxy_add_remove_path;
    
    // [VmProxyCheckTearDown]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x190d4, 0x1d08 bytes
    // pci.sys .text:0xae88, 0x1cf0 bytes
    // pci.sys .text:0x299ec, 0x1cf0 bytes
    // pci.sys .text:0x9038, 0x1cf0 bytes
    //
    _a23(sdk::unknown_ptr) vm_proxy_check_tear_down;
    
    // [VmProxyClearPath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f040, 0x1d08 bytes
    // pci.sys PAGE:0x6b688, 0x1cf0 bytes
    // pci.sys PAGE:0x74938, 0x1cf0 bytes
    // pci.sys PAGE:0x695b4, 0x1cf0 bytes
    //
    _a24(sdk::unknown_ptr) vm_proxy_clear_path;
    
    // [VmProxyGetDeviceLocationString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f128, 0x1d08 bytes
    // pci.sys PAGE:0x6b7b4, 0x1cf0 bytes
    // pci.sys PAGE:0x74a70, 0x1cf0 bytes
    // pci.sys PAGE:0x696ec, 0x1cf0 bytes
    //
    _a25(sdk::unknown_ptr) vm_proxy_get_device_location_string;
    
    // [VmProxyGetDeviceState]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f3ac, 0x1d08 bytes
    // pci.sys PAGE:0x6baa0, 0x1cf0 bytes
    // pci.sys PAGE:0x74d64, 0x1cf0 bytes
    // pci.sys PAGE:0x699f0, 0x1cf0 bytes
    //
    _a26(sdk::unknown_ptr) vm_proxy_get_device_state;
    
    // [VmProxyIsProxyDevice]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f538, 0x1d08 bytes
    // pci.sys PAGE:0x43a14, 0x1cf0 bytes
    // pci.sys PAGE:0x5a554, 0x1cf0 bytes
    // pci.sys PAGE:0x427ac, 0x1cf0 bytes
    //
    _a27(sdk::unknown_ptr) vm_proxy_is_proxy_device;
    
    // [VmProxyIsSubString]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f5c4, 0x1d08 bytes
    // pci.sys PAGE:0x6bc6c, 0x1cf0 bytes
    // pci.sys PAGE:0x74f2c, 0x1cf0 bytes
    // pci.sys PAGE:0x69bbc, 0x1cf0 bytes
    //
    _a28(sdk::unknown_ptr) vm_proxy_is_sub_string;
    
    // [VmProxyReadDevicePathsFromRegistry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3a81c, 0x1d08 bytes
    // pci.sys PAGE:0x4d8c0, 0x1cf0 bytes
    // pci.sys PAGE:0x446cc, 0x1cf0 bytes
    // pci.sys PAGE:0x54ca0, 0x1cf0 bytes
    //
    _a29(sdk::unknown_ptr) vm_proxy_read_device_paths_from_registry;
    
    // [VmProxyRemovePath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f6a0, 0x1d08 bytes
    // pci.sys PAGE:0x6bd50, 0x1cf0 bytes
    // pci.sys PAGE:0x75010, 0x1cf0 bytes
    // pci.sys PAGE:0x69ca0, 0x1cf0 bytes
    //
    _a30(sdk::unknown_ptr) vm_proxy_remove_path;
    
    // [VmProxyWriteDevicePathsToRegistry]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4f7bc, 0x1d08 bytes
    // pci.sys PAGE:0x6be8c, 0x1cf0 bytes
    // pci.sys PAGE:0x7515c, 0x1cf0 bytes
    // pci.sys PAGE:0x69dec, 0x1cf0 bytes
    //
    _a31(sdk::unknown_ptr) vm_proxy_write_device_paths_to_registry;
    
    // [PciWalkDevicePath]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11794, 0x1d08 bytes
    // pci.sys .text:0xe2d0, 0x1cf0 bytes
    // pci.sys .text:0xb584, 0x1cf0 bytes
    // pci.sys .text:0x10204, 0x1cf0 bytes
    //
    _a32(sdk::unknown_ptr) walk_device_path;
    
    // [PciWalkDevicePathCheckAtomicOpCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0xdeb0, 0x1d08 bytes
    // pci.sys .text:0x16420, 0x1cf0 bytes
    // pci.sys .text:0x14d90, 0x1cf0 bytes
    // pci.sys .text:0x163d0, 0x1cf0 bytes
    //
    _a33(sdk::unknown_ptr) walk_device_path_check_atomic_op_callback;
    
    // [PciWalkDevicePathCheckE2ETLPPrefix]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16824, 0x1d08 bytes
    // pci.sys .text:0x22410, 0x1cf0 bytes
    // pci.sys .text:0x2438c, 0x1cf0 bytes
    // pci.sys .text:0x22210, 0x1cf0 bytes
    //
    _a34(sdk::unknown_ptr) walk_device_path_check_e2etlp_prefix;
    
    // [PciWalkDevicePathCheckE2ETLPPrefixCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x16840, 0x1d08 bytes
    // pci.sys .text:0x22440, 0x1cf0 bytes
    // pci.sys .text:0x243c0, 0x1cf0 bytes
    // pci.sys .text:0x22240, 0x1cf0 bytes
    //
    _a35(sdk::unknown_ptr) walk_device_path_check_e2etlp_prefix_callback;
    
    // [PciWalkDevicePathFindPathCallback]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x80d0, 0x1d08 bytes
    // pci.sys .text:0xec20, 0x1cf0 bytes
    // pci.sys .text:0xda50, 0x1cf0 bytes
    // pci.sys .text:0x10aac, 0x1cf0 bytes
    //
    _a36(sdk::unknown_ptr) walk_device_path_find_path_callback;
    
    // [PciWatchdogTable]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234d0, 0x1d08 bytes
    // pci.sys .data:0x346f8, 0x1cf0 bytes
    // pci.sys .data:0x38760, 0x1cf0 bytes
    // pci.sys .data:0x326f8, 0x1cf0 bytes
    //
    _a37(sdk::unknown_ptr) watchdog_table;
    
    // [WdmlibInit]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3b234, 0x1d08 bytes
    // pci.sys PAGE:0x4db18, 0x1cf0 bytes
    // pci.sys PAGE:0x44788, 0x1cf0 bytes
    // pci.sys PAGE:0x54d5c, 0x1cf0 bytes
    //
    _a38(sdk::function<void()>*) wdmlib_init;
    
    // [WdmlibInitialized]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x246f8, 0x1d08 bytes
    // pci.sys .data:0x35aa0, 0x1cf0 bytes
    // pci.sys .data:0x39b38, 0x1cf0 bytes
    // pci.sys .data:0x33aa0, 0x1cf0 bytes
    //
    _a39(uint8_t*) wdmlib_initialized;
    
    // [WdmlibRtlInitUnicodeStringEx]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x19148, 0x1d08 bytes
    // pci.sys .text:0x270fc, 0x1cf0 bytes
    // pci.sys .text:0x29a5c, 0x1cf0 bytes
    // pci.sys .text:0x26f1c, 0x1cf0 bytes
    //
    _a40(sdk::function<int32_t(nt::unicode_view*, const wchar_t*)>*) wdmlib_rtl_init_unicode_string_ex;
    
    // [PciWheaCorrectErrorSource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18ee0, 0x1d08 bytes
    // pci.sys .text:0x26e20, 0x1cf0 bytes
    // pci.sys .text:0xdd60, 0x1cf0 bytes
    // pci.sys .text:0x26c40, 0x1cf0 bytes
    //
    _a41(sdk::unknown_ptr) whea_correct_error_source;
    
    // [PciWheaCreateErrorRecord]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x18f10, 0x1d08 bytes
    // pci.sys .text:0x26e50, 0x1cf0 bytes
    // pci.sys .text:0x296a0, 0x1cf0 bytes
    // pci.sys .text:0x26c70, 0x1cf0 bytes
    //
    _a42(sdk::unknown_ptr) whea_create_error_record;
    
    // [PciWheaInitErrorSource]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x4ed20, 0x1d08 bytes
    // pci.sys PAGE:0x6b2b0, 0x1cf0 bytes
    // pci.sys PAGE:0x5b850, 0x1cf0 bytes
    // pci.sys PAGE:0x691b0, 0x1cf0 bytes
    //
    _a43(sdk::unknown_ptr) whea_init_error_source;
    
    // [PciWHEARecordPreallocationCount]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x233b0, 0x1d08 bytes
    // pci.sys .data:0x34424, 0x1cf0 bytes
    // pci.sys .data:0x38470, 0x1cf0 bytes
    // pci.sys .data:0x32424, 0x1cf0 bytes
    //
    _a44(sdk::unknown_ptr) whea_record_preallocation_count;
    
    // [WPP_RECORDER_SF_DDd]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3fd4, 0x1d08 bytes
    // pci.sys .text:0x447c, 0x1cf0 bytes
    // pci.sys .text:0x2968, 0x1cf0 bytes
    // pci.sys .text:0x5410, 0x1cf0 bytes
    //
    _a45(sdk::unknown_ptr) wpp_recorder_sf_d_dd;
    
    // [WPP_RECORDER_SF_DDLdd]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x6b40, 0x1d08 bytes
    // pci.sys .text:0x5948, 0x1cf0 bytes
    // pci.sys .text:0x2868, 0x1cf0 bytes
    // pci.sys .text:0x6c28, 0x1cf0 bytes
    //
    _a46(sdk::unknown_ptr) wpp_recorder_sf_dd_ldd;
    
    // [WPP_RECORDER_SF_DDDDDD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10888, 0x1d08 bytes
    // pci.sys .text:0x1a7ac, 0x1cf0 bytes
    // pci.sys .text:0x1a100, 0x1cf0 bytes
    // pci.sys .text:0x1a554, 0x1cf0 bytes
    //
    _a47(sdk::unknown_ptr) wpp_recorder_sf_dddddd;
    
    // [WPP_RECORDER_SF_DDL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x3fd4, 0x1d08 bytes
    // pci.sys .text:0x447c, 0x1cf0 bytes
    // pci.sys .text:0x2968, 0x1cf0 bytes
    // pci.sys .text:0x5410, 0x1cf0 bytes
    //
    _a48(sdk::unknown_ptr) wpp_recorder_sf_ddl;
    
    // [WPP_RECORDER_SF_DDLLL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x17bf8, 0x1d08 bytes
    // pci.sys .text:0x24900, 0x1cf0 bytes
    // pci.sys .text:0x261d4, 0x1cf0 bytes
    // pci.sys .text:0x24700, 0x1cf0 bytes
    //
    _a49(sdk::unknown_ptr) wpp_recorder_sf_ddlll;
    
    // [WPP_RECORDER_SF_DL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7640, 0x1d08 bytes
    // pci.sys .text:0x2550, 0x1cf0 bytes
    // pci.sys .text:0x193dc, 0x1cf0 bytes
    // pci.sys .text:0x34a0, 0x1cf0 bytes
    //
    _a50(sdk::unknown_ptr) wpp_recorder_sf_dl;
    
    // [WPP_RECORDER_SF_DLL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x75a8, 0x1d08 bytes
    // pci.sys .text:0x24ac, 0x1cf0 bytes
    // pci.sys .text:0x194ac, 0x1cf0 bytes
    // pci.sys .text:0x33fc, 0x1cf0 bytes
    //
    _a51(sdk::unknown_ptr) wpp_recorder_sf_dll;
    
    // [WPP_RECORDER_SF_DqD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12a98, 0x1d08 bytes
    // pci.sys .text:0x1b82c, 0x1cf0 bytes
    // pci.sys .text:0x1be44, 0x1cf0 bytes
    // pci.sys .text:0x1b624, 0x1cf0 bytes
    //
    _a52(sdk::unknown_ptr) wpp_recorder_sf_dq_d;
    
    // [WPP_RECORDER_SF_DqL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12b80, 0x1d08 bytes
    // pci.sys .text:0x3370, 0x1cf0 bytes
    // pci.sys .text:0x8be0, 0x1cf0 bytes
    // pci.sys .text:0x41a0, 0x1cf0 bytes
    //
    _a53(sdk::unknown_ptr) wpp_recorder_sf_dq_l;
    
    // [WPP_RECORDER_SF_DqLL]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12c68, 0x1d08 bytes
    // pci.sys .text:0x1b980, 0x1cf0 bytes
    // pci.sys .text:0x1bf98, 0x1cf0 bytes
    // pci.sys .text:0x1b778, 0x1cf0 bytes
    //
    _a54(sdk::unknown_ptr) wpp_recorder_sf_dq_ll;
    
    // [WPP_RECORDER_SF_Dqq]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x12d74, 0x1d08 bytes
    // pci.sys .text:0x1ba98, 0x1cf0 bytes
    // pci.sys .text:0x1c0b0, 0x1cf0 bytes
    // pci.sys .text:0x1b890, 0x1cf0 bytes
    //
    _a55(sdk::unknown_ptr) wpp_recorder_sf_dqq;
    
    // [WPP_RECORDER_SF_Ldd]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x7348, 0x1d08 bytes
    // pci.sys .text:0xedf4, 0x1cf0 bytes
    // pci.sys .text:0x1ec8, 0x1cf0 bytes
    // pci.sys .text:0x10cc4, 0x1cf0 bytes
    //
    _a56(sdk::unknown_ptr) wpp_recorder_sf_ldd;
    
    // [WPP_RECORDER_SF_qDDLD]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x13248, 0x1d08 bytes
    // pci.sys .text:0x1c638, 0x1cf0 bytes
    // pci.sys .text:0x1d248, 0x1cf0 bytes
    // pci.sys .text:0x1c438, 0x1cf0 bytes
    //
    _a57(sdk::unknown_ptr) wpp_recorder_sf_q_ddld;
    
    // [WPP_ThisDir_CTLGUID_PciDriverTraceGuid]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x1bad8, 0x1d08 bytes
    // pci.sys .rdata:0x2a748, 0x1cf0 bytes
    // pci.sys .rdata:0x2bd08, 0x1cf0 bytes
    // pci.sys .rdata:0x28fb8, 0x1cf0 bytes
    //
    _a58(sdk::unknown_ptr) wpp_this_dir_ctlguid_pci_driver_trace_guid;
    
    // [PciWriteBusNumsRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11214, 0x1d08 bytes
    // pci.sys .text:0x1aa44, 0x1cf0 bytes
    // pci.sys .text:0x1a4e4, 0x1cf0 bytes
    // pci.sys .text:0x1a7e4, 0x1cf0 bytes
    //
    _a59(sdk::unknown_ptr) write_bus_nums_raw;
    
    // [PciWriteConfigRaw]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x11298, 0x1d08 bytes
    // pci.sys .text:0xd300, 0x1cf0 bytes
    // pci.sys .text:0x6220, 0x1cf0 bytes
    // pci.sys .text:0xee50, 0x1cf0 bytes
    //
    _a60(sdk::unknown_ptr) write_config_raw;
    
    // [PciWriteDeviceConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x5f10, 0x1d08 bytes
    // pci.sys .text:0xa2e0, 0x1cf0 bytes
    // pci.sys .text:0x3a20, 0x1cf0 bytes
    // pci.sys .text:0xb9a0, 0x1cf0 bytes
    //
    _a61(sdk::unknown_ptr) write_device_config;
    
    // [PciWriteDeviceSpace]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x10788, 0x1d08 bytes
    // pci.sys .text:0x1a6a8, 0x1cf0 bytes
    // pci.sys .text:0xc714, 0x1cf0 bytes
    // pci.sys .text:0x1a450, 0x1cf0 bytes
    //
    _a62(sdk::unknown_ptr) write_device_space;
    
    // [PciWriteSlotConfig]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x2b80, 0x1d08 bytes
    // pci.sys .text:0x4170, 0x1cf0 bytes
    // pci.sys .text:0x7420, 0x1cf0 bytes
    // pci.sys .text:0xdcd0, 0x1cf0 bytes
    //
    _a63(sdk::unknown_ptr) write_slot_config;
};
#include "magic/api.end.hpp"
