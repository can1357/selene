#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/irp_t.hpp"
#include "nvme_command_t.hpp"
#include "../../nt/guid_t.hpp"
#include "../../io/queue_t.hpp"
#include "vpd_enumerator_t.hpp"
#include "scsi_device_type_t.hpp"
#include "stor_pofx_device_t.hpp"
#include "mfnd_operation_mode_t.hpp"
#include "raid_deferred_queue_t.hpp"
#include "raid_unit_extension_t.hpp"
#include "stor_pofx_component_t.hpp"
#include "stor_pofx_perf_state_t.hpp"
#include "raid_driver_extension_t.hpp"
#include "storage_request_block_t.hpp"
#include "../../nt/device_object_t.hpp"
#include "raid_adapter_extension_t.hpp"
#include "scsi_notification_type_t.hpp"
#include "storport_function_code_t.hpp"
#include "raid_active_ref_context_t.hpp"
#include "vpd_identification_page_t.hpp"
#include "mfnd_operation_privilege_t.hpp"
#include "srbex_data_bidirectional_t.hpp"
#include "../../nt/event_descriptor_t.hpp"
#include "scsi_adapter_control_type_t.hpp"
#include "../../nt/mcgen_trace_context_t.hpp"
#include "srbex_data_nvme_command_type_t.hpp"
#include "stor_pofx_component_perf_set_t.hpp"
#include "vpd_identification_descriptor_t.hpp"
#include "stor_pofx_component_idle_state_t.hpp"
#include "../../nt/event_filter_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace stor::port
{
    // [CreateControlObject]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b88, 0x440c8 bytes
    //
    _m00(sdk::unknown_ptr) create_control_object;
    
    // [DeviceLogPage]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f828, 0x440c8 bytes
    //
    _m01(sdk::unknown_ptr) device_log_page;
    
    // [DeviceTelemetryLiveDumpConfig]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7943c, 0x440c8 bytes
    //
    _m02(sdk::unknown_ptr) device_telemetry_live_dump_config;
    
    // [DeviceWarning]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f230, 0x440c8 bytes
    //
    _m03(sdk::unknown_ptr) device_warning;
    
    // [DisableExtensionDriver]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ad8, 0x440c8 bytes
    //
    _m04(sdk::unknown_ptr) disable_extension_driver;
    
    // [EnableExtensionCalls]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ad9, 0x440c8 bytes
    //
    _m05(sdk::unknown_ptr) enable_extension_calls;
    
    // [EventAdapterPowerRetryWithWorkItem]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f578, 0x440c8 bytes
    //
    _m06(sdk::unknown_ptr) event_adapter_power_retry_with_work_item;
    
    // [EventCaptureLiveDump]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f080, 0x440c8 bytes
    //
    _m07(sdk::unknown_ptr) event_capture_live_dump;
    
    // [EventDeviceReset]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6ef40, 0x440c8 bytes
    //
    _m08(sdk::unknown_ptr) event_device_reset;
    
    // [EventExtensionDriverLoad]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f290, 0x440c8 bytes
    //
    _m09(sdk::unknown_ptr) event_extension_driver_load;
    
    // [EventExtensionDriverUnload]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6ee70, 0x440c8 bytes
    //
    _m10(sdk::unknown_ptr) event_extension_driver_unload;
    
    // [EventGetMFNDCapability]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f888, 0x440c8 bytes
    //
    _m11(sdk::unknown_ptr) event_get_mfnd_capability;
    
    // [EventInsufficientGatewayInitialized]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6ede0, 0x440c8 bytes
    //
    _m12(sdk::unknown_ptr) event_insufficient_gateway_initialized;
    
    // [EventMFNDChildPFControl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f3e0, 0x440c8 bytes
    //
    _m13(sdk::unknown_ptr) event_mfnd_child_pf_control;
    
    // [EventMFNDQueryChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f380, 0x440c8 bytes
    //
    _m14(sdk::unknown_ptr) event_mfnd_query_child_pf_command_permission;
    
    // [EventMFNDQueryChildPFList]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f0b0, 0x440c8 bytes
    //
    _m15(sdk::unknown_ptr) event_mfnd_query_child_pf_list;
    
    // [EventMFNDQueryChildPFProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f0e0, 0x440c8 bytes
    //
    _m16(sdk::unknown_ptr) event_mfnd_query_child_pf_property;
    
    // [EventMFNDQueryChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f010, 0x440c8 bytes
    //
    _m17(sdk::unknown_ptr) event_mfnd_query_child_pf_settings;
    
    // [EventMFNDQueryOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f1f0, 0x440c8 bytes
    //
    _m18(sdk::unknown_ptr) event_mfnd_query_operation_info;
    
    // [EventMFNDSetChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f4a0, 0x440c8 bytes
    //
    _m19(sdk::unknown_ptr) event_mfnd_set_child_pf_command_permission;
    
    // [EventMFNDSetChildPFProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f758, 0x440c8 bytes
    //
    _m20(sdk::unknown_ptr) event_mfnd_set_child_pf_property;
    
    // [EventMFNDSetChildPFQoS]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f548, 0x440c8 bytes
    //
    _m21(sdk::unknown_ptr) event_mfnd_set_child_pf_qo_s;
    
    // [EventMFNDSetChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f3a0, 0x440c8 bytes
    //
    _m22(sdk::unknown_ptr) event_mfnd_set_child_pf_settings;
    
    // [EventMFNDSetOperationInformation]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f450, 0x440c8 bytes
    //
    _m23(sdk::unknown_ptr) event_mfnd_set_operation_information;
    
    // [EventMiniportDiagnosticByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f260, 0x440c8 bytes
    //
    _m24(sdk::unknown_ptr) event_miniport_diagnostic_byte_stream;
    
    // [EventMiniportHealthErrorByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f6a8, 0x440c8 bytes
    //
    _m25(sdk::unknown_ptr) event_miniport_health_error_byte_stream;
    
    // [EventMiniportHealthInformationalByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f4c8, 0x440c8 bytes
    //
    _m26(sdk::unknown_ptr) event_miniport_health_informational_byte_stream;
    
    // [EventMiniportHealthWarningByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f440, 0x440c8 bytes
    //
    _m27(sdk::unknown_ptr) event_miniport_health_warning_byte_stream;
    
    // [EventMiniportOperationalErrorByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f350, 0x440c8 bytes
    //
    _m28(sdk::unknown_ptr) event_miniport_operational_error_byte_stream;
    
    // [EventMiniportOperationalInformationalByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f170, 0x440c8 bytes
    //
    _m29(sdk::unknown_ptr) event_miniport_operational_informational_byte_stream;
    
    // [EventMiniportOperationalWarningByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f490, 0x440c8 bytes
    //
    _m30(sdk::unknown_ptr) event_miniport_operational_warning_byte_stream;
    
    // [EventMiniportSystemThreadsNotTerminated]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f0f0, 0x440c8 bytes
    //
    _m31(sdk::unknown_ptr) event_miniport_system_threads_not_terminated;
    
    // [EventReconfigureMFND]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f2f0, 0x440c8 bytes
    //
    _m32(sdk::unknown_ptr) event_reconfigure_mfnd;
    
    // [EventRegisterMFNDInterface]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f678, 0x440c8 bytes
    //
    _m33(sdk::unknown_ptr) event_register_mfnd_interface;
    
    // [EventSMRUnsupportedZoneSizeError]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f310, 0x440c8 bytes
    //
    _m34(sdk::unknown_ptr) event_smr_unsupported_zone_size_error;
    
    // [EventStorportControlCreationFailed]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f330, 0x440c8 bytes
    //
    _m35(sdk::unknown_ptr) event_storport_control_creation_failed;
    
    // [EventTooManyActiveGatewayRequired]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f270, 0x440c8 bytes
    //
    _m36(sdk::unknown_ptr) event_too_many_active_gateway_required;
    
    // [EventUnitMaintenanceTimeStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47b90, 0x1b430 bytes
    //
    _m37(sdk::unknown_ptr) event_unit_maintenance_time_start;
    
    // [EventUnitMaintenanceTimeStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47730, 0x1b430 bytes
    //
    _m38(sdk::unknown_ptr) event_unit_maintenance_time_stop;
    
    // [EventUnitPeriodicDeviceStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x478c0, 0x1b430 bytes
    //
    _m39(sdk::unknown_ptr) event_unit_periodic_device_statistics;
    
    // [EventUnitPeriodicNvmeHealthStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47910, 0x1b430 bytes
    //
    _m40(sdk::unknown_ptr) event_unit_periodic_nvme_health_statistics;
    
    // [EventUnitPeriodicPerformance]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47c00, 0x1b430 bytes
    //
    _m41(sdk::unknown_ptr) event_unit_periodic_performance;
    
    // [EventUnitPeriodicQosSummary]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x477b0, 0x1b430 bytes
    //
    _m42(sdk::unknown_ptr) event_unit_periodic_qos_summary;
    
    // [EventUnitPeriodicSmartStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47af0, 0x1b430 bytes
    //
    _m43(sdk::unknown_ptr) event_unit_periodic_smart_statistics;
    
    // [EventUnitPeriodicUniqueError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47720, 0x1b430 bytes
    //
    _m44(sdk::unknown_ptr) event_unit_periodic_unique_error;
    
    // [EventUnitScsiDiagnostics]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f340, 0x440c8 bytes
    //
    _m45(sdk::unknown_ptr) event_unit_scsi_diagnostics;
    
    // [ExtensionExtendedFuncPost]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3dedc, 0x440c8 bytes
    //
    _m46(sdk::unknown_ptr) extension_extended_func_post;
    
    // [ExtensionExtendedFuncPre]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3df30, 0x440c8 bytes
    //
    _m47(sdk::unknown_ptr) extension_extended_func_pre;
    
    // [ExtensionExtendedFuncReplace]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3df84, 0x440c8 bytes
    //
    _m48(sdk::unknown_ptr) extension_extended_func_replace;
    
    // [ExtensionSendMiniportData]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3dfd8, 0x440c8 bytes
    //
    _m49(sdk::unknown_ptr) extension_send_miniport_data;
    
    // [ExtensionSendStorportData]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3e04c, 0x440c8 bytes
    //
    _m50(sdk::unknown_ptr) extension_send_storport_data;
    
    // [g_MaximumProcessorCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b6c, 0x440c8 bytes
    //
    _m51(sdk::unknown_ptr) g_maximum_processor_count;
    
    // [g_OSisClient]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79af8, 0x440c8 bytes
    //
    _m52(sdk::unknown_ptr) g_o_sis_client;
    
    // [g_ProcessorCountPerGateway]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b64, 0x440c8 bytes
    //
    _m53(sdk::unknown_ptr) g_processor_count_per_gateway;
    
    // [g_RaidSQMAndETWRefCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6a8, 0x1b430 bytes
    //
    _m54(sdk::unknown_ptr) g_raid_sqm_and_etw_ref_count;
    
    // [g_RaidSQMInitialized]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6f4, 0x1b430 bytes
    //
    _m55(sdk::unknown_ptr) g_raid_sqm_initialized;
    
    // [g_RaidSQMLastLogTick]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6f8, 0x1b430 bytes
    //
    _m56(sdk::unknown_ptr) g_raid_sqm_last_log_tick;
    
    // [g_RaidSQMLogInProgress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6f0, 0x1b430 bytes
    //
    _m57(sdk::unknown_ptr) g_raid_sqm_log_in_progress;
    
    // [g_RaidSqmPassthroughCdbs]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6d0, 0x1b430 bytes
    //
    _m58(sdk::unknown_ptr) g_raid_sqm_passthrough_cdbs;
    
    // [g_RaidSQMTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e5c0, 0x1b430 bytes
    //
    _m59(sdk::unknown_ptr) g_raid_sqm_timer;
    
    // [g_RaidSQMTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e580, 0x1b430 bytes
    //
    _m60(sdk::unknown_ptr) g_raid_sqm_timer_dpc;
    
    // [g_StorpTraceLoggingDeviceLogPagesPeriod]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x793a0, 0x440c8 bytes
    //
    _m61(sdk::unknown_ptr) g_storp_trace_logging_device_log_pages_period;
    
    // [g_StorpTraceLoggingDeviceLogPagesTimer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79560, 0x440c8 bytes
    //
    _m62(sdk::unknown_ptr) g_storp_trace_logging_device_log_pages_timer;
    
    // [g_StorpTraceLoggingDeviceLogPagesTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79620, 0x440c8 bytes
    //
    _m63(sdk::unknown_ptr) g_storp_trace_logging_device_log_pages_timer_dpc;
    
    // [g_StorpTraceLoggingIoSizeDistributionEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b20, 0x440c8 bytes
    //
    _m64(sdk::unknown_ptr) g_storp_trace_logging_io_size_distribution_enabled;
    
    // [GatewayBusyStateRaceConditionCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a090, 0x440c8 bytes
    //
    _m65(sdk::unknown_ptr) gateway_busy_state_race_condition_count;
    
    // [GUID_DEVINTERFACE_MFND_STORAGE]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f180, 0x440c8 bytes
    //
    _m66(sdk::unknown_ptr) guid_devinterface_mfnd_storage;
    
    // [GUID_DEVINTERFACE_ZNSDISK]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6ff98, 0x440c8 bytes
    //
    _m67(sdk::unknown_ptr) guid_devinterface_znsdisk;
    
    // [GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x70248, 0x440c8 bytes
    //
    _m68(sdk::unknown_ptr) guid_storage_live_dump_device_telemetry_log;
    
    // [GUID_STORAGE_LIVE_DUMP_DEVICE_TELEMETRY_LOG_HEADER]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x70258, 0x440c8 bytes
    //
    _m69(sdk::unknown_ptr) guid_storage_live_dump_device_telemetry_log_header;
    
    // [InitializeCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b7c, 0x440c8 bytes
    //
    _m70(sdk::unknown_ptr) initialize_count;
    
    // [IsWppInitialized]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b78, 0x440c8 bytes
    //
    _m71(sdk::unknown_ptr) is_wpp_initialized;
    
    // [LoadExtensionDriver]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3e0b4, 0x440c8 bytes
    //
    _m72(sdk::unknown_ptr) load_extension_driver;
    
    // [McTemplateK0jqzzqxtqqtt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x30f68, 0x440c8 bytes
    //
    _m73(sdk::unknown_ptr) mc_template_k0jqzzqxtqqtt_etw_write_transfer;
    
    // [McTemplateK0pqtqqt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31468, 0x440c8 bytes
    //
    _m74(sdk::unknown_ptr) mc_template_k0pqtqqt_etw_write_transfer;
    
    // [McTemplateK0qjzzqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4c154, 0x440c8 bytes
    //
    _m75(sdk::unknown_ptr) mc_template_k0qjzzqq_etw_write_transfer;
    
    // [McTemplateK0qjzztqdq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x40c54, 0x440c8 bytes
    //
    _m76(sdk::unknown_ptr) mc_template_k0qjzztqdq_etw_write_transfer;
    
    // [McTemplateK0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31630, 0x440c8 bytes
    //
    _m77(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const int32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t)>*) mc_template_k0qjzztqqquuhhhhhhhhqqqqqqqqqqqqu_etw_write_transfer;
    
    // [McTemplateK0qjzzzhhhhhqqqqqqqqqqqqquuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65720, 0x440c8 bytes
    //
    _m78(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzhhhhhqqqqqqqqqqqqquuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzhhhhqqqqhhqqqqqqqqquuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65a2c, 0x440c8 bytes
    //
    _m79(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint16_t, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzhhhhqqqqhhqqqqqqqqquuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzhhuuuuuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65d50, 0x440c8 bytes
    //
    _m80(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint16_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzhhuuuuuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzhqqqqqqqqquuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65f20, 0x440c8 bytes
    //
    _m81(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint16_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzhqqqqqqqqquuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31984, 0x440c8 bytes
    //
    _m82(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t)>*) mc_template_k0qjzzzq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqqbr6uuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66164, 0x440c8 bytes
    //
    _m83(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint8_t*, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqqbr6uuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqqqqbr8uuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66304, 0x440c8 bytes
    //
    _m84(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t*, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqqqqbr8uuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqqqqhuuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31abc, 0x440c8 bytes
    //
    _m85(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint16_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqqqqhuuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqqqqquuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31c8c, 0x440c8 bytes
    //
    _m86(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqqqqquuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqquuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x31e5c, 0x440c8 bytes
    //
    _m87(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const uint32_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqquuq_etw_write_transfer;
    
    // [McTemplateK0qjzzzqtuuuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x664dc, 0x440c8 bytes
    //
    _m88(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const uint32_t, const struct nt::guid_t*, const wchar_t*, const wchar_t*, const wchar_t*, const uint32_t, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint32_t)>*) mc_template_k0qjzzzqtuuuq_etw_write_transfer;
    
    // [McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x40d88, 0x440c8 bytes
    //
    _m89(sdk::unknown_ptr) mc_template_k0qqqqquuujjzssszshzhbr18hbr20q_etw_write_transfer;
    
    // [McTemplateK0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5b548, 0x440c8 bytes
    //
    _m90(sdk::unknown_ptr) mc_template_k0quuujjqzssszstuzzxssssssssssssssssssssssssssssssssssss_etw_write_transfer;
    
    // [McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5c038, 0x440c8 bytes
    //
    _m91(sdk::unknown_ptr) mc_template_k0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_etw_write_transfer;
    
    // [McTemplateK0quuujjzssssxqtqbr14_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1008, 0x440c8 bytes
    //
    _m92(sdk::unknown_ptr) mc_template_k0quuujjzssssxqtqbr14_etw_write_transfer;
    
    // [McTemplateK0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5c3ec, 0x440c8 bytes
    //
    _m93(sdk::unknown_ptr) mc_template_k0quuujjzssstxuuzqqqqxxxxxxhuuqqbr29qbr31qbr33qbr35qbr37qbr39qbr41qbr43_etw_write_transfer;
    
    // [McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5c958, 0x440c8 bytes
    //
    _m94(sdk::unknown_ptr) mc_template_k0quuujjzssstzzxzxzxzx_etw_write_transfer;
    
    // [McTemplateK0quuujjzssszqqd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4c264, 0x440c8 bytes
    //
    _m95(sdk::unknown_ptr) mc_template_k0quuujjzssszqqd_etw_write_transfer;
    
    // [McTemplateK0quuujjzssszstuqbr14_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5cc00, 0x440c8 bytes
    //
    _m96(sdk::unknown_ptr) mc_template_k0quuujjzssszstuqbr14_etw_write_transfer;
    
    // [McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5ce80, 0x440c8 bytes
    //
    _m97(sdk::unknown_ptr) mc_template_k0quuujjzsszstxqqbr14uhqbr18_etw_write_transfer;
    
    // [McTemplateK0qzzuqqqqqqd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x32148, 0x440c8 bytes
    //
    _m98(sdk::unknown_ptr) mc_template_k0qzzuqqqqqqd_etw_write_transfer;
    
    // [McTemplateK0zqjdz_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x47bf8, 0x440c8 bytes
    //
    _m99(sdk::unknown_ptr) mc_template_k0zqjdz_etw_write_transfer;
    
    // [McTemplateK0zqjuuussssq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4fc04, 0x440c8 bytes
    //
    _n00(sdk::unknown_ptr) mc_template_k0zqjuuussssq_etw_write_transfer;
    
    // [McTemplateK0zqjuuussssx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4fdc0, 0x440c8 bytes
    //
    _n01(sdk::unknown_ptr) mc_template_k0zqjuuussssx_etw_write_transfer;
    
    // [MFNDCommandSpecificationVersion]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79478, 0x440c8 bytes
    //
    _n02(sdk::unknown_ptr) mfnd_command_specification_version;
    
    // [MFNDEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b71, 0x440c8 bytes
    //
    _n03(sdk::unknown_ptr) mfnd_enabled;
    
    // [Microsoft_Windows_StorPortHandle]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .data:0x4e6a0, 0x1b430 bytes
    //
    _n04(sdk::unknown_ptr) microsoft_windows_stor_port_handle;
    
    // [OnDemandDataProviderInitialized]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a0a0, 0x440c8 bytes
    //
    _n05(sdk::unknown_ptr) on_demand_data_provider_initialized;
    
    // [OverrideDeviceUniqueIDCapability]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79400, 0x440c8 bytes
    //
    _n06(sdk::unknown_ptr) override_device_unique_id_capability;
    
    // [PortFreeRegistryBuffer]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x67a34, 0x440c8 bytes
    //
    _n07(sdk::unknown_ptr) port_free_registry_buffer;
    
    // [PortPassThroughBuildIrpEx]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x118cc, 0x440c8 bytes
    //
    _n08(sdk::unknown_ptr) port_pass_through_build_irp_ex;
    
    // [PortPassThroughFreeIrpEx]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x11b88, 0x440c8 bytes
    //
    _n09(sdk::unknown_ptr) port_pass_through_free_irp_ex;
    
    // [RaAdapterUpdateAssociatedUnitsIdentity]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3257c, 0x440c8 bytes
    //
    _n10(sdk::unknown_ptr) ra_adapter_update_associated_units_identity;
    
    // [RaAddSecondaryDataforDeviceTelemetry]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4c48c, 0x440c8 bytes
    //
    _n11(sdk::unknown_ptr) ra_add_secondary_datafor_device_telemetry;
    
    // [RaBuildDiagnosticBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4c510, 0x440c8 bytes
    //
    _n12(sdk::unknown_ptr) ra_build_diagnostic_buffer_for_miniport;
    
    // [RaCallMiniportResetBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x26624, 0x1b430 bytes
    //
    _n13(sdk::unknown_ptr) ra_call_miniport_reset_bus;
    
    // [RaCaptureLiveDumpAllowed]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4d0f0, 0x440c8 bytes
    //
    _n14(sdk::unknown_ptr) ra_capture_live_dump_allowed;
    
    // [RaCheckAllMiniportSystemThreadsExit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4d140, 0x440c8 bytes
    //
    _n15(sdk::unknown_ptr) ra_check_all_miniport_system_threads_exit;
    
    // [RaMiniportIsFeatureSupported]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1ec28, 0x440c8 bytes
    //
    _n16(sdk::unknown_ptr) ra_miniport_is_feature_supported;
    
    // [RaSqmAndEtwCleanup]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys PAGE:0x5da98, 0x1b430 bytes
    //
    _n17(sdk::unknown_ptr) ra_sqm_and_etw_cleanup;
    
    // [RaSqmLogAdapterStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2b8b8, 0x1b430 bytes
    //
    _n18(sdk::unknown_ptr) ra_sqm_log_adapter_statistics;
    
    // [RaSqmLogScsiPassthroughStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2bb80, 0x1b430 bytes
    //
    _n19(sdk::unknown_ptr) ra_sqm_log_scsi_passthrough_statistics;
    
    // [RaSqmLogStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2bc4c, 0x1b430 bytes
    //
    _n20(sdk::unknown_ptr) ra_sqm_log_statistics;
    
    // [RaSqmTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2bd10, 0x1b430 bytes
    //
    _n21(sdk::unknown_ptr) ra_sqm_timer_dpc;
    
    // [RaUnitStorageDataCollectionIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8e980, 0x440c8 bytes
    //
    _n22(sdk::unknown_ptr) ra_unit_storage_data_collection_ioctl;
    
    // [RaUnitStorageGetInternalDataIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8ece4, 0x440c8 bytes
    //
    _n23(sdk::unknown_ptr) ra_unit_storage_get_internal_data_ioctl;
    
    // [RaUnitStorageInternalQueryPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8ee84, 0x440c8 bytes
    //
    _n24(sdk::unknown_ptr) ra_unit_storage_internal_query_property_ioctl;
    
    // [RaUnitStorageInternalSetPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8efa0, 0x440c8 bytes
    //
    _n25(sdk::unknown_ptr) ra_unit_storage_internal_set_property_ioctl;
    
    // [RaUnitStorageManageBypassIOIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8f070, 0x440c8 bytes
    //
    _n26(sdk::unknown_ptr) ra_unit_storage_manage_bypass_io_ioctl;
    
    // [RaUnitStorageQueryDeviceFruIdPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1eb0c, 0x440c8 bytes
    //
    _n27(sdk::unknown_ptr) ra_unit_storage_query_device_fru_id_property_ioctl;
    
    // [RaUnitStorageQueryDeviceLedStatePropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1e924, 0x440c8 bytes
    //
    _n28(sdk::unknown_ptr) ra_unit_storage_query_device_led_state_property_ioctl;
    
    // [RaUnitStorageQueryDeviceSelfEncryptionPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x52f14, 0x440c8 bytes
    //
    _n29(sdk::unknown_ptr) ra_unit_storage_query_device_self_encryption_property_ioctl;
    
    // [RaValidateMiniportSystemThreadPriority]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4d580, 0x440c8 bytes
    //
    _n30(sdk::unknown_ptr) ra_validate_miniport_system_thread_priority;
    
    // [RaidAdapterCancelWaitCheckTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x26a68, 0x1b430 bytes
    //
    _n31(sdk::unknown_ptr) raid_adapter_cancel_wait_check_timer;
    
    // [RaidAdapterDisableMFNDInterface]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x33d90, 0x440c8 bytes
    //
    _n32(sdk::unknown_ptr) raid_adapter_disable_mfnd_interface;
    
    // [RaidAdapterEnableIoResourceAutoReclaim]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x33e9c, 0x440c8 bytes
    //
    _n33(sdk::unknown_ptr) raid_adapter_enable_io_resource_auto_reclaim;
    
    // [RaidAdapterMapBuffers]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x34a78, 0x440c8 bytes
    //
    _n34(sdk::unknown_ptr) raid_adapter_map_buffers;
    
    // [RaidAdapterMFNDChildPFControl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3497c, 0x440c8 bytes
    //
    _n35(sdk::unknown_ptr) raid_adapter_mfnd_child_pf_control;
    
    // [RaidAdapterPoFxSetDeviceIdleTimeout]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x481a0, 0x440c8 bytes
    //
    _n36(sdk::unknown_ptr) raid_adapter_po_fx_set_device_idle_timeout;
    
    // [RaidAdapterReclaimIoResourceTimerDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x35480, 0x440c8 bytes
    //
    _n37(sdk::unknown_ptr) raid_adapter_reclaim_io_resource_timer_dpc_routine;
    
    // [RaidAdapterReconfigureMFND]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x35504, 0x440c8 bytes
    //
    _n38(sdk::unknown_ptr) raid_adapter_reconfigure_mfnd;
    
    // [RaidAdapterRegisterMFNDInterface]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x35690, 0x440c8 bytes
    //
    _n39(sdk::unknown_ptr) raid_adapter_register_mfnd_interface;
    
    // [RaidAdapterSendPowerToMiniportWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x48490, 0x440c8 bytes
    //
    _n40(sdk::unknown_ptr) raid_adapter_send_power_to_miniport_work_item_routine;
    
    // [RaidAdapterStorageGetInternalDataIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8c604, 0x440c8 bytes
    //
    _n41(sdk::unknown_ptr) raid_adapter_storage_get_internal_data_ioctl;
    
    // [RaidAdapterStorageInternalQueryPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x37e18, 0x440c8 bytes
    //
    _n42(sdk::unknown_ptr) raid_adapter_storage_internal_query_property_ioctl;
    
    // [RaidAdapterStorageInternalSetPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x37f98, 0x440c8 bytes
    //
    _n43(sdk::unknown_ptr) raid_adapter_storage_internal_set_property_ioctl;
    
    // [RaidAdapterSystemPowerHintsEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3817c, 0x440c8 bytes
    //
    _n44(sdk::unknown_ptr) raid_adapter_system_power_hints_enabled;
    
    // [RaidAllocateDeferredItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x18b50, 0x1b430 bytes
    //
    _n45(sdk::unknown_ptr) raid_allocate_deferred_item;
    
    // [RaidCaptureLiveDump]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4d8a0, 0x440c8 bytes
    //
    _n46(sdk::unknown_ptr) raid_capture_live_dump;
    
    // [RaidCaptureLiveDumpCallBack]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4daf0, 0x440c8 bytes
    //
    _n47(sdk::unknown_ptr) raid_capture_live_dump_call_back;
    
    // [RaidCheckPerProcessorCompletions]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x18004, 0x1b430 bytes
    //
    _n48(sdk::unknown_ptr) raid_check_per_processor_completions;
    
    // [RaidCreateBusEnumerator]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x11f8c, 0x440c8 bytes
    //
    _n49(sdk::unknown_ptr) raid_create_bus_enumerator;
    
    // [RaidDiagnosticIoctlStatusToNtStatus]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x38f18, 0x440c8 bytes
    //
    _n50(sdk::unknown_ptr) raid_diagnostic_ioctl_status_to_nt_status;
    
    // [RaidDriverDeviceControlIrp]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3d044, 0x440c8 bytes
    //
    _n51(sdk::unknown_ptr) raid_driver_device_control_irp;
    
    // [RaidGetStorageAdapterFruIdProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8c930, 0x440c8 bytes
    //
    _n52(sdk::unknown_ptr) raid_get_storage_adapter_fru_id_property;
    
    // [RaidHexFromUchar]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x64d64, 0x440c8 bytes
    //
    _n53(sdk::function<void(uint8_t, char*, uint32_t)>*) raid_hex_from_uchar;
    
    // [RaidHexFromUshort]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x53410, 0x440c8 bytes
    //
    _n54(sdk::unknown_ptr) raid_hex_from_ushort;
    
    // [RaidInitializeBusEnumerator]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x11fcc, 0x440c8 bytes
    //
    _n55(sdk::unknown_ptr) raid_initialize_bus_enumerator;
    
    // [RaidMaskUnmaskPciMsixEntry]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4e394, 0x440c8 bytes
    //
    _n56(sdk::unknown_ptr) raid_mask_unmask_pci_msix_entry;
    
    // [RaidQueryLedState]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4e6d0, 0x440c8 bytes
    //
    _n57(sdk::unknown_ptr) raid_query_led_state;
    
    // [RaidQueryLedStateByAcpiDsm]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4e738, 0x440c8 bytes
    //
    _n58(sdk::unknown_ptr) raid_query_led_state_by_acpi_dsm;
    
    // [RaidQueryLedStateByNpem]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4e7c8, 0x440c8 bytes
    //
    _n59(sdk::unknown_ptr) raid_query_led_state_by_npem;
    
    // [RaidQueryPciDeviceType]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4e92c, 0x440c8 bytes
    //
    _n60(sdk::unknown_ptr) raid_query_pci_device_type;
    
    // [RaidReleaseUnitListLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2a450, 0x1b430 bytes
    //
    _n61(sdk::unknown_ptr) raid_release_unit_list_lock;
    
    // [RaidSqmRecordPassthroughData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2a4d4, 0x1b430 bytes
    //
    _n62(sdk::unknown_ptr) raid_sqm_record_passthrough_data;
    
    // [RaidStartUnit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1acec, 0x440c8 bytes
    //
    _n63(sdk::unknown_ptr) raid_start_unit;
    
    // [RaidUnitAssignAddress]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x53d18, 0x440c8 bytes
    //
    _n64(sdk::unknown_ptr) raid_unit_assign_address;
    
    // [RaidUnitLogSenseCommandSrb]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1d2f8, 0x440c8 bytes
    //
    _n65(sdk::unknown_ptr) raid_unit_log_sense_command_srb;
    
    // [RaidUnitNotifyHardwareGone]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1ebdc, 0x440c8 bytes
    //
    _n66(sdk::unknown_ptr) raid_unit_notify_hardware_gone;
    
    // [RaidUnitPoFxActivateComponentFromIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x37640, 0x1b430 bytes
    //
    _n67(sdk::unknown_ptr) raid_unit_po_fx_activate_component_from_ioctl;
    
    // [RaidUnitPoFxIdleComponentFromIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x376a0, 0x1b430 bytes
    //
    _n68(sdk::unknown_ptr) raid_unit_po_fx_idle_component_from_ioctl;
    
    // [RaidUnitReady]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x37840, 0x1b430 bytes
    //
    _n69(sdk::unknown_ptr) raid_unit_ready;
    
    // [RaidUnitReleasePoFx]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3af6c, 0x440c8 bytes
    //
    _n70(sdk::function<void(struct stor::port::raid_unit_extension_t*)>*) raid_unit_release_po_fx;
    
    // [RaidUpdateUnitIdentityWorkRoutine]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x55af0, 0x440c8 bytes
    //
    _n71(sdk::unknown_ptr) raid_update_unit_identity_work_routine;
    
    // [RaidUpdateZoneIoMetadata]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x14e78, 0x440c8 bytes
    //
    _n72(sdk::unknown_ptr) raid_update_zone_io_metadata;
    
    // [RaidpPortGetAdapter]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0xc634, 0x440c8 bytes
    //
    _n73(sdk::unknown_ptr) raidp_port_get_adapter;
    
    // [ReportAllWheaErrorsAsNonFatal]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79c00, 0x440c8 bytes
    //
    _n74(sdk::unknown_ptr) report_all_whea_errors_as_non_fatal;
    
    // [RuntimePowerDisabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79b18, 0x440c8 bytes
    //
    _n75(sdk::unknown_ptr) runtime_power_disabled;
    
    // [SQM_ADD_STREAMROW_EX]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47eb0, 0x1b430 bytes
    //
    _n76(sdk::unknown_ptr) sqm_add_streamrow_ex;
    
    // [SQM_SET_DWORD64]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47ea0, 0x1b430 bytes
    //
    _n77(sdk::unknown_ptr) sqm_set_dword64;
    
    // [SQM_SETIFMAX_DWORD]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47f18, 0x1b430 bytes
    //
    _n78(sdk::unknown_ptr) sqm_setifmax_dword;
    
    // [SQM_SETIFMIN_DWORD]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47ee0, 0x1b430 bytes
    //
    _n79(sdk::unknown_ptr) sqm_setifmin_dword;
    
    // [StRtlIoStorInfoGetHybridWriteThrough]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x9380, 0x1b430 bytes
    //
    _n80(sdk::unknown_ptr) st_rtl_io_stor_info_get_hybrid_write_through;
    
    // [StorAdapterDereferenceDeviceObject]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b140, 0x440c8 bytes
    //
    _n81(sdk::unknown_ptr) stor_adapter_dereference_device_object;
    
    // [StorAdapterNeedsUpdate]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x59870, 0x440c8 bytes
    //
    _n82(sdk::unknown_ptr) stor_adapter_needs_update;
    
    // [StorAdapterNVMeEnumerate]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x858ac, 0x440c8 bytes
    //
    _n83(sdk::unknown_ptr) stor_adapter_nv_me_enumerate;
    
    // [StorAdapterQueryAdapterObjectProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b16c, 0x440c8 bytes
    //
    _n84(sdk::unknown_ptr) stor_adapter_query_adapter_object_property;
    
    // [StorAdapterQueryIdentifyControllerProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8fe54, 0x440c8 bytes
    //
    _n85(sdk::unknown_ptr) stor_adapter_query_identify_controller_property;
    
    // [StorAllocateContiguousIoResourcesWithPreferredNode]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x4eec4, 0x440c8 bytes
    //
    _n86(sdk::unknown_ptr) stor_allocate_contiguous_io_resources_with_preferred_node;
    
    // [StorBuildMFNDGetSetCommandsPermissionCommand]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x6666c, 0x440c8 bytes
    //
    _n87(sdk::unknown_ptr) stor_build_mfnd_get_set_commands_permission_command;
    
    // [StorBuildMFNDGetSetFeatureCommand]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b21c, 0x440c8 bytes
    //
    _n88(sdk::function<void(struct stor::port::nvme_command_t*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint32_t)>*) stor_build_mfnd_get_set_feature_command;
    
    // [StorBuildMFNDManagementCommand]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x666b8, 0x440c8 bytes
    //
    _n89(sdk::unknown_ptr) stor_build_mfnd_management_command;
    
    // [StorBuildNVMeSerialNumber]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x64d94, 0x440c8 bytes
    //
    _n90(sdk::unknown_ptr) stor_build_nv_me_serial_number;
    
    // [StorCopyNVMeFirmwareRevision]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x55d60, 0x440c8 bytes
    //
    _n91(sdk::unknown_ptr) stor_copy_nv_me_firmware_revision;
    
    // [StorCreateIoGateways]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58598, 0x440c8 bytes
    //
    _n92(sdk::unknown_ptr) stor_create_io_gateways;
    
    // [StorDeleteIoGateway]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x586b8, 0x440c8 bytes
    //
    _n93(sdk::unknown_ptr) stor_delete_io_gateway;
    
    // [StorDeleteNVMeIdentity]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65230, 0x440c8 bytes
    //
    _n94(sdk::unknown_ptr) stor_delete_nv_me_identity;
    
    // [StorEnableAdapterDiagnosticEvents]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x59938, 0x440c8 bytes
    //
    _n95(sdk::unknown_ptr) stor_enable_adapter_diagnostic_events;
    
    // [StorEnableAdapterEtwTracing]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x599c0, 0x440c8 bytes
    //
    _n96(sdk::unknown_ptr) stor_enable_adapter_etw_tracing;
    
    // [StorEnableAdapterHealthEvents]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x59a3c, 0x440c8 bytes
    //
    _n97(sdk::unknown_ptr) stor_enable_adapter_health_events;
    
    // [StorEnableAdapterOperationalEvents]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x59acc, 0x440c8 bytes
    //
    _n98(sdk::unknown_ptr) stor_enable_adapter_operational_events;
    
    // [StorEnableSortedEventQueue]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3d0b0, 0x440c8 bytes
    //
    _n99(sdk::unknown_ptr) stor_enable_sorted_event_queue;
    
    // [StorEtwErrorEventThrottleLimit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79408, 0x440c8 bytes
    //
    _o00(sdk::unknown_ptr) stor_etw_error_event_throttle_limit;
    
    // [StorEtwInfoEventThrottleLimit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7944c, 0x440c8 bytes
    //
    _o01(sdk::unknown_ptr) stor_etw_info_event_throttle_limit;
    
    // [StorEtwMiniportLogByteStream]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5b004, 0x440c8 bytes
    //
    _o02(sdk::unknown_ptr) stor_etw_miniport_log_byte_stream;
    
    // [StorEtwResetCounters]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x2aa4, 0x440c8 bytes
    //
    _o03(sdk::unknown_ptr) stor_etw_reset_counters;
    
    // [StorEtwWarningEventThrottleLimit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79404, 0x440c8 bytes
    //
    _o04(sdk::unknown_ptr) stor_etw_warning_event_throttle_limit;
    
    // [StorFreeAnsiString]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x18460, 0x440c8 bytes
    //
    _o05(sdk::function<void(nt::ascii_view*)>*) stor_free_ansi_string;
    
    // [StorFreeExtraIoResourceForAdapter]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x586fc, 0x440c8 bytes
    //
    _o06(sdk::unknown_ptr) stor_free_extra_io_resource_for_adapter;
    
    // [StorFreeExtraIoResourceForGateway]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58788, 0x440c8 bytes
    //
    _o07(sdk::unknown_ptr) stor_free_extra_io_resource_for_gateway;
    
    // [StorGetActiveGatewayCountRequired]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x588e8, 0x440c8 bytes
    //
    _o08(sdk::unknown_ptr) stor_get_active_gateway_count_required;
    
    // [StorGetMFNDCapabilities]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x90218, 0x440c8 bytes
    //
    _o09(sdk::unknown_ptr) stor_get_mfnd_capabilities;
    
    // [StorGetNVMeIdentifyInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x85a78, 0x440c8 bytes
    //
    _o10(sdk::unknown_ptr) stor_get_nv_me_identify_info;
    
    // [StorGetOutstandingIoCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58954, 0x440c8 bytes
    //
    _o11(sdk::unknown_ptr) stor_get_outstanding_io_count;
    
    // [StorGetPendingIoCount]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1cfd4, 0x440c8 bytes
    //
    _o12(sdk::unknown_ptr) stor_get_pending_io_count;
    
    // [StorGetPreferredNodeNumber]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x589a4, 0x440c8 bytes
    //
    _o13(sdk::unknown_ptr) stor_get_preferred_node_number;
    
    // [StorIsIoGatewayPaused]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x68f8, 0x440c8 bytes
    //
    _o14(sdk::unknown_ptr) stor_is_io_gateway_paused;
    
    // [StorIsSoftNumaOptIn]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58a58, 0x440c8 bytes
    //
    _o15(sdk::unknown_ptr) stor_is_soft_numa_opt_in;
    
    // [StorLogMFNDCapability]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b274, 0x440c8 bytes
    //
    _o16(sdk::unknown_ptr) stor_log_mfnd_capability;
    
    // [StorLogMFNDChildPFControl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b45c, 0x440c8 bytes
    //
    _o17(sdk::unknown_ptr) stor_log_mfnd_child_pf_control;
    
    // [StorLogMFNDQueryChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66700, 0x440c8 bytes
    //
    _o18(sdk::unknown_ptr) stor_log_mfnd_query_child_pf_command_permission;
    
    // [StorLogMFNDQueryChildPFList]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66840, 0x440c8 bytes
    //
    _o19(sdk::unknown_ptr) stor_log_mfnd_query_child_pf_list;
    
    // [StorLogMFNDQueryChildPFProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66998, 0x440c8 bytes
    //
    _o20(sdk::unknown_ptr) stor_log_mfnd_query_child_pf_property;
    
    // [StorLogMFNDQueryChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66afc, 0x440c8 bytes
    //
    _o21(sdk::unknown_ptr) stor_log_mfnd_query_child_pf_settings;
    
    // [StorLogMFNDQueryOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b5a4, 0x440c8 bytes
    //
    _o22(sdk::function<void(struct stor::port::raid_adapter_extension_t*, enum stor::port::mfnd_operation_mode_t, enum stor::port::mfnd_operation_privilege_t, uint32_t, uint32_t)>*) stor_log_mfnd_query_operation_info;
    
    // [StorLogMFNDReconfigure]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b6bc, 0x440c8 bytes
    //
    _o23(sdk::unknown_ptr) stor_log_mfnd_reconfigure;
    
    // [StorLogMFNDSetChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66df0, 0x440c8 bytes
    //
    _o24(sdk::unknown_ptr) stor_log_mfnd_set_child_pf_command_permission;
    
    // [StorLogMFNDSetChildPFProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x66f30, 0x440c8 bytes
    //
    _o25(sdk::unknown_ptr) stor_log_mfnd_set_child_pf_property;
    
    // [StorLogMFNDSetChildPFQoS]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x67094, 0x440c8 bytes
    //
    _o26(sdk::unknown_ptr) stor_log_mfnd_set_child_pf_qo_s;
    
    // [StorLogMFNDSetChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x6726c, 0x440c8 bytes
    //
    _o27(sdk::unknown_ptr) stor_log_mfnd_set_child_pf_settings;
    
    // [StorLogMFNDSetOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x67540, 0x440c8 bytes
    //
    _o28(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint32_t, uint8_t, uint8_t, uint32_t, uint32_t)>*) stor_log_mfnd_set_operation_info;
    
    // [StorLogRegisterMFNDInterface]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b818, 0x440c8 bytes
    //
    _o29(sdk::unknown_ptr) stor_log_register_mfnd_interface;
    
    // [StorMFNDChildPFControl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x9036c, 0x440c8 bytes
    //
    _o30(sdk::unknown_ptr) stor_mfnd_child_pf_control;
    
    // [StorMiniportDiagnosticEventsEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a094, 0x440c8 bytes
    //
    _o31(sdk::unknown_ptr) stor_miniport_diagnostic_events_enabled;
    
    // [StorMiniportHealthEventsEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a096, 0x440c8 bytes
    //
    _o32(sdk::unknown_ptr) stor_miniport_health_events_enabled;
    
    // [StorMiniportOperationalEventsEnabled]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a095, 0x440c8 bytes
    //
    _o33(sdk::unknown_ptr) stor_miniport_operational_events_enabled;
    
    // [StorProcessNVMeEnumeratorFillInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65280, 0x440c8 bytes
    //
    _o34(sdk::unknown_ptr) stor_process_nv_me_enumerator_fill_info;
    
    // [StorProcessNVMeModifiedNodes]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x654a8, 0x440c8 bytes
    //
    _o35(sdk::unknown_ptr) stor_process_nv_me_modified_nodes;
    
    // [StorProcessNVMeNewUnit]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x90048, 0x440c8 bytes
    //
    _o36(sdk::unknown_ptr) stor_process_nv_me_new_unit;
    
    // [StorProcessNVMeUnitEnumerator]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x6556c, 0x440c8 bytes
    //
    _o37(sdk::unknown_ptr) stor_process_nv_me_unit_enumerator;
    
    // [StorQueryAndUpdateCachedMFNDOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b8e4, 0x440c8 bytes
    //
    _o38(sdk::unknown_ptr) stor_query_and_update_cached_mfnd_operation_info;
    
    // [StorQueryMFNDCapability]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x904a4, 0x440c8 bytes
    //
    _o39(sdk::unknown_ptr) stor_query_mfnd_capability;
    
    // [StorQueryMFNDChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x905b8, 0x440c8 bytes
    //
    _o40(sdk::unknown_ptr) stor_query_mfnd_child_pf_command_permission;
    
    // [StorQueryMFNDChildPFGlobalProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x907f0, 0x440c8 bytes
    //
    _o41(sdk::unknown_ptr) stor_query_mfnd_child_pf_global_property;
    
    // [StorQueryMFNDChildPFList]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x9099c, 0x440c8 bytes
    //
    _o42(sdk::unknown_ptr) stor_query_mfnd_child_pf_list;
    
    // [StorQueryMFNDChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x90d4c, 0x440c8 bytes
    //
    _o43(sdk::unknown_ptr) stor_query_mfnd_child_pf_settings;
    
    // [StorQueryMFNDOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91024, 0x440c8 bytes
    //
    _o44(sdk::unknown_ptr) stor_query_mfnd_operation_info;
    
    // [StorResetMFND]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91190, 0x440c8 bytes
    //
    _o45(sdk::unknown_ptr) stor_reset_mfnd;
    
    // [StorSendMFNDCommand]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x9127c, 0x440c8 bytes
    //
    _o46(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*, void*, uint32_t, struct stor::port::nvme_command_t*, enum stor::port::srbex_data_nvme_command_type_t, uint32_t, uint8_t, uint32_t, uint32_t*, uint32_t*)>*) stor_send_mfnd_command;
    
    // [StorSerialNumberFromNvmeId]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x64ea8, 0x440c8 bytes
    //
    _o47(sdk::unknown_ptr) stor_serial_number_from_nvme_id;
    
    // [StorSetAllIoGatewayBusy]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58a80, 0x440c8 bytes
    //
    _o48(sdk::unknown_ptr) stor_set_all_io_gateway_busy;
    
    // [StorSetAllIoGatewayNotBusy]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58b9c, 0x440c8 bytes
    //
    _o49(sdk::unknown_ptr) stor_set_all_io_gateway_not_busy;
    
    // [StorSetIoGatewayBusy]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x58c08, 0x440c8 bytes
    //
    _o50(sdk::unknown_ptr) stor_set_io_gateway_busy;
    
    // [StorSetMFNDChildPFCommandPermission]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91704, 0x440c8 bytes
    //
    _o51(sdk::unknown_ptr) stor_set_mfnd_child_pf_command_permission;
    
    // [StorSetMFNDChildPFGlobalProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91910, 0x440c8 bytes
    //
    _o52(sdk::unknown_ptr) stor_set_mfnd_child_pf_global_property;
    
    // [StorSetMFNDChildPFQoS]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91af4, 0x440c8 bytes
    //
    _o53(sdk::unknown_ptr) stor_set_mfnd_child_pf_qo_s;
    
    // [StorSetMFNDChildPFSettings]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91d34, 0x440c8 bytes
    //
    _o54(sdk::unknown_ptr) stor_set_mfnd_child_pf_settings;
    
    // [StorSetMFNDOperationInfo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x91fc0, 0x440c8 bytes
    //
    _o55(sdk::unknown_ptr) stor_set_mfnd_operation_info;
    
    // [StorSetMFNDOperationPrivilege]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x6766c, 0x440c8 bytes
    //
    _o56(sdk::unknown_ptr) stor_set_mfnd_operation_privilege;
    
    // [StorSqmAddToStream]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x43d60, 0x1b430 bytes
    //
    _o57(sdk::unknown_ptr) stor_sqm_add_to_stream;
    
    // [StorSqmCleanup]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x43f1c, 0x1b430 bytes
    //
    _o58(sdk::unknown_ptr) stor_sqm_cleanup;
    
    // [StorSqmCreateStringStreamEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x43f44, 0x1b430 bytes
    //
    _o59(sdk::unknown_ptr) stor_sqm_create_string_stream_entry;
    
    // [StorSqmInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0xc130, 0x1b430 bytes
    //
    _o60(sdk::unknown_ptr) stor_sqm_initialize;
    
    // [StorSqmProvider]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x44570, 0x1b430 bytes
    //
    _o61(sdk::unknown_ptr) stor_sqm_provider;
    
    // [StorUnitAssignNVMeIdentity]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x90134, 0x440c8 bytes
    //
    _o62(sdk::unknown_ptr) stor_unit_assign_nv_me_identity;
    
    // [StorUnitDereferenceDeviceObject]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x55f00, 0x440c8 bytes
    //
    _o63(sdk::unknown_ptr) stor_unit_dereference_device_object;
    
    // [StorUnitExecuteNvmeSrb]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x64f34, 0x440c8 bytes
    //
    _o64(sdk::unknown_ptr) stor_unit_execute_nvme_srb;
    
    // [StorUnitExecuteNvmeSrbComplete]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x65140, 0x440c8 bytes
    //
    _o65(sdk::unknown_ptr) stor_unit_execute_nvme_srb_complete;
    
    // [StorUnitQueryBypassIOProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x55f1c, 0x440c8 bytes
    //
    _o66(sdk::unknown_ptr) stor_unit_query_bypass_io_property;
    
    // [StorUnitQueryDeviceIdentifyIoCommandSetProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8fec0, 0x440c8 bytes
    //
    _o67(sdk::unknown_ptr) stor_unit_query_device_identify_io_command_set_property;
    
    // [StorUnitQueryDeviceIdentifyNamespaceProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8ff44, 0x440c8 bytes
    //
    _o68(sdk::unknown_ptr) stor_unit_query_device_identify_namespace_property;
    
    // [StorUnitQueryNamespaceIdProperty]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8ffc8, 0x440c8 bytes
    //
    _o69(sdk::unknown_ptr) stor_unit_query_namespace_id_property;
    
    // [StorUnitStartBypassIo]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x55ff0, 0x440c8 bytes
    //
    _o70(sdk::unknown_ptr) stor_unit_start_bypass_io;
    
    // [StorValidateMFNDCapabilities]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3b9c0, 0x440c8 bytes
    //
    _o71(sdk::unknown_ptr) stor_validate_mfnd_capabilities;
    
    // [StorWaitForSingleObject]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x34504, 0x1b430 bytes
    //
    _o72(sdk::unknown_ptr) stor_wait_for_single_object;
    
    // [StorpControl]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x79ac0, 0x440c8 bytes
    //
    _o73(sdk::unknown_ptr) storp_control;
    
    // [StorpDeviceLogPagesWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5e080, 0x440c8 bytes
    //
    _o74(sdk::unknown_ptr) storp_device_log_pages_work_item_routine;
    
    // [StorpFreePool]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1a3a4, 0x440c8 bytes
    //
    _o75(sdk::unknown_ptr) storp_free_pool;
    
    // [StorpGetDeviceObjects]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x45098, 0x440c8 bytes
    //
    _o76(sdk::unknown_ptr) storp_get_device_objects;
    
    // [StorpInitializePerUnitIoSizeDistribution]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x8f814, 0x440c8 bytes
    //
    _o77(sdk::unknown_ptr) storp_initialize_per_unit_io_size_distribution;
    
    // [StorpInitializePerUnitPerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys PAGE:0x86a00, 0x440c8 bytes
    //
    _o78(sdk::unknown_ptr) storp_initialize_per_unit_perf_telemetry;
    
    // [StorpTelemetryEnumUnitNvmeLogPages]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5f6b4, 0x440c8 bytes
    //
    _o79(sdk::unknown_ptr) storp_telemetry_enum_unit_nvme_log_pages;
    
    // [StorpTelemetryFindUnitNvmeLogPages]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5f880, 0x440c8 bytes
    //
    _o80(sdk::unknown_ptr) storp_telemetry_find_unit_nvme_log_pages;
    
    // [StorpTelemetryGetReadErrorCounter]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5fc80, 0x440c8 bytes
    //
    _o81(sdk::unknown_ptr) storp_telemetry_get_read_error_counter;
    
    // [StorpTelemetryGetStartStopCycleCounter]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5fce0, 0x440c8 bytes
    //
    _o82(sdk::unknown_ptr) storp_telemetry_get_start_stop_cycle_counter;
    
    // [StorpTelemetryGetWriteErrorCounter]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x5fdb8, 0x440c8 bytes
    //
    _o83(sdk::unknown_ptr) storp_telemetry_get_write_error_counter;
    
    // [StorpTelemetrySendUnitErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3ff50, 0x1b430 bytes
    //
    _o84(sdk::unknown_ptr) storp_telemetry_send_unit_error_data;
    
    // [StorpTelemetrySendUnitIoSizeDistributionData]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x62b48, 0x440c8 bytes
    //
    _o85(sdk::unknown_ptr) storp_telemetry_send_unit_io_size_distribution_data;
    
    // [StorpTelemetrySendUnitNvmeLogPage]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x637c0, 0x440c8 bytes
    //
    _o86(sdk::unknown_ptr) storp_telemetry_send_unit_nvme_log_page;
    
    // [StorpTelemetrySendUnitScsiDiagnostics]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1d178, 0x440c8 bytes
    //
    _o87(sdk::unknown_ptr) storp_telemetry_send_unit_scsi_diagnostics;
    
    // [StorpUninitializePerUnitIoSizeDistribution]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1ea28, 0x440c8 bytes
    //
    _o88(sdk::unknown_ptr) storp_uninitialize_per_unit_io_size_distribution;
    
    // [StorpUninitializePerUnitPerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x1e998, 0x440c8 bytes
    //
    _o89(sdk::unknown_ptr) storp_uninitialize_per_unit_perf_telemetry;
    
    // [StringCchCatA]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x63ca8, 0x440c8 bytes
    //
    _o90(sdk::unknown_ptr) string_cch_cat_a;
    
    // [TelemetryProviderInitialized]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .data:0x7a0a1, 0x440c8 bytes
    //
    _o91(sdk::unknown_ptr) telemetry_provider_initialized;
    
    // [Template_ccccxqbcppxxx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3ae2c, 0x1b430 bytes
    //
    _o92(sdk::unknown_ptr) template_ccccxqbcppxxx;
    
    // [Template_pcxxpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3af68, 0x1b430 bytes
    //
    _o93(sdk::unknown_ptr) template_pcxxpc;
    
    // [Template_pqccc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2fa58, 0x1b430 bytes
    //
    _o94(sdk::unknown_ptr) template_pqccc;
    
    // [Template_pqcccccp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2a880, 0x1b430 bytes
    //
    _o95(sdk::function<uint32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const void*)>*) template_pqcccccp;
    
    // [Template_pqcccq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x322f8, 0x1b430 bytes
    //
    _o96(sdk::unknown_ptr) template_pqcccq;
    
    // [Template_pqcccqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x323ac, 0x1b430 bytes
    //
    _o97(sdk::unknown_ptr) template_pqcccqq;
    
    // [Template_pqcccqttqqttq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32470, 0x1b430 bytes
    //
    _o98(sdk::unknown_ptr) template_pqcccqttqqttq;
    
    // [Template_pqccct]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x322f8, 0x1b430 bytes
    //
    _o99(sdk::unknown_ptr) template_pqccct;
    
    // [Template_pqccctq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x325b4, 0x1b430 bytes
    //
    _p00(sdk::unknown_ptr) template_pqccctq;
    
    // [Template_pqccctx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32688, 0x1b430 bytes
    //
    _p01(sdk::unknown_ptr) template_pqccctx;
    
    // [Template_pqccqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2c17c, 0x1b430 bytes
    //
    _p02(sdk::unknown_ptr) template_pqccqqq;
    
    // [Template_pqqccc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2fb04, 0x1b430 bytes
    //
    _p03(sdk::unknown_ptr) template_pqqccc;
    
    // [Template_pqqcccqpp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2fbc0, 0x1b430 bytes
    //
    _p04(sdk::unknown_ptr) template_pqqcccqpp;
    
    // [Template_pqqp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2a9cc, 0x1b430 bytes
    //
    _p05(sdk::unknown_ptr) template_pqqp;
    
    // [Template_pqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2aa5c, 0x1b430 bytes
    //
    _p06(sdk::unknown_ptr) template_pqqq;
    
    // [Template_pqqx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2aae0, 0x1b430 bytes
    //
    _p07(sdk::unknown_ptr) template_pqqx;
    
    // [Template_pqt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3275c, 0x1b430 bytes
    //
    _p08(sdk::unknown_ptr) template_pqt;
    
    // [Template_pqtq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x327d8, 0x1b430 bytes
    //
    _p09(sdk::unknown_ptr) template_pqtq;
    
    // [Template_pqtqcccqqqqt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b01c, 0x1b430 bytes
    //
    _p10(sdk::unknown_ptr) template_pqtqcccqqqqt;
    
    // [Template_pqtqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2ab74, 0x1b430 bytes
    //
    _p11(sdk::unknown_ptr) template_pqtqq;
    
    // [Template_pqtx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3286c, 0x1b430 bytes
    //
    _p12(sdk::unknown_ptr) template_pqtx;
    
    // [Template_pzqqxxtt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2ac20, 0x1b430 bytes
    //
    _p13(sdk::unknown_ptr) template_pzqqxxtt;
    
    // [Template_qcc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x38a38, 0x1b430 bytes
    //
    _p14(sdk::unknown_ptr) template_qcc;
    
    // [Template_qccc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32908, 0x1b430 bytes
    //
    _p15(sdk::unknown_ptr) template_qccc;
    
    // [Template_qcccjczxxxxxqqqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41894, 0x1b430 bytes
    //
    _p16(sdk::unknown_ptr) template_qcccjczxxxxxqqqb;
    
    // [Template_qcccjq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x38abc, 0x1b430 bytes
    //
    _p17(sdk::unknown_ptr) template_qcccjq;
    
    // [Template_qcccjqqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41a54, 0x1b430 bytes
    //
    _p18(sdk::unknown_ptr) template_qcccjqqb;
    
    // [Template_qcccjqqbqbqbqbqbqbqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41b38, 0x1b430 bytes
    //
    _p19(sdk::unknown_ptr) template_qcccjqqbqbqbqbqbqbqb;
    
    // [Template_qcccjqqbqt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b144, 0x1b430 bytes
    //
    _p20(sdk::unknown_ptr) template_qcccjqqbqt;
    
    // [Template_qcccjqqccccccqqxq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41d40, 0x1b430 bytes
    //
    _p21(sdk::unknown_ptr) template_qcccjqqccccccqqxq;
    
    // [Template_qcccjqqqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b248, 0x1b430 bytes
    //
    _p22(sdk::unknown_ptr) template_qcccjqqqb;
    
    // [Template_qcccjqtqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41ee8, 0x1b430 bytes
    //
    _p23(sdk::unknown_ptr) template_qcccjqtqb;
    
    // [Template_qcccjxxcxxqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x41fe0, 0x1b430 bytes
    //
    _p24(sdk::unknown_ptr) template_qcccjxxcxxqqq;
    
    // [Template_qcccpq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32998, 0x1b430 bytes
    //
    _p25(sdk::unknown_ptr) template_qcccpq;
    
    // [Template_qcccpqcqqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32a58, 0x1b430 bytes
    //
    _p26(sdk::unknown_ptr) template_qcccpqcqqqq;
    
    // [Template_qcccqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32b70, 0x1b430 bytes
    //
    _p27(sdk::unknown_ptr) template_qcccqqq;
    
    // [Template_qcccqqtt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32c3c, 0x1b430 bytes
    //
    _p28(sdk::unknown_ptr) template_qcccqqtt;
    
    // [Template_qccctq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32d18, 0x1b430 bytes
    //
    _p29(sdk::unknown_ptr) template_qccctq;
    
    // [Template_qcj]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x38b70, 0x1b430 bytes
    //
    _p30(sdk::unknown_ptr) template_qcj;
    
    // [Template_qcq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x38bf4, 0x1b430 bytes
    //
    _p31(sdk::unknown_ptr) template_qcq;
    
    // [Template_qpqcqqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x32e54, 0x1b430 bytes
    //
    _p32(sdk::unknown_ptr) template_qpqcqqqq;
    
    // [Template_qqqqqqqqqqcccqqtt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2c800, 0x1b430 bytes
    //
    _p33(sdk::unknown_ptr) template_qqqqqqqqqqcccqqtt;
    
    // [Template_qqqqqqqqxxxxx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2c2ac, 0x1b430 bytes
    //
    _p34(sdk::unknown_ptr) template_qqqqqqqqxxxxx;
    
    // [Template_xpccpcccccqxx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b338, 0x1b430 bytes
    //
    _p35(sdk::unknown_ptr) template_xpccpcccccqxx;
    
    // [Template_zqcccjqqb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b470, 0x1b430 bytes
    //
    _p36(sdk::unknown_ptr) template_zqcccjqqb;
    
    // [Template_zqcccjqqbx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x3b58c, 0x1b430 bytes
    //
    _p37(sdk::unknown_ptr) template_zqcccjqqbx;
    
    // [Template_zqcccqqqt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2fcac, 0x1b430 bytes
    //
    _p38(sdk::unknown_ptr) template_zqcccqqqt;
    
    // [Template_zqqcccqpp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2ae90, 0x1b430 bytes
    //
    _p39(sdk::unknown_ptr) template_zqqcccqpp;
    
    // [Template_zqqqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x394a0, 0x1b430 bytes
    //
    _p40(sdk::unknown_ptr) template_zqqqqq;
    
    // [Template_zqqqqqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x39588, 0x1b430 bytes
    //
    _p41(sdk::unknown_ptr) template_zqqqqqqq;
    
    // [Template_zqqqqx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x39690, 0x1b430 bytes
    //
    _p42(sdk::unknown_ptr) template_zqqqqx;
    
    // [Template_zx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x330f4, 0x1b430 bytes
    //
    _p43(sdk::unknown_ptr) template_zx;
    
    // [Template_zzqqq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2c9a0, 0x1b430 bytes
    //
    _p44(sdk::unknown_ptr) template_zzqqq;
    
    // [UnloadExtensionDriver]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x3fbe4, 0x440c8 bytes
    //
    _p45(sdk::unknown_ptr) unload_extension_driver;
    
    // [WPP_0f528954af03336098861edcd0252264_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47ce0, 0x1b430 bytes
    //
    _p46(sdk::unknown_ptr) wpp_0f528954af03336098861edcd0252264_traceguids;
    
    // [WPP_22dbf8d6d8ed332b22c627201937f270_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x70060, 0x440c8 bytes
    //
    _p47(sdk::unknown_ptr) wpp_22dbf8d6d8ed332b22c627201937f270_traceguids;
    
    // [WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47da0, 0x1b430 bytes
    //
    _p48(sdk::unknown_ptr) wpp_2cdf5e3a8b473e064111cab9dd01f326_traceguids;
    
    // [WPP_716b3cea72f038ef7c20d60d254d0ae6_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6a170, 0x440c8 bytes
    //
    _p49(sdk::unknown_ptr) wpp_716b3cea72f038ef7c20d60d254d0ae6_traceguids;
    
    // [WPP_829f864e54213ce604c5c92b3588a0eb_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6a1d8, 0x440c8 bytes
    //
    _p50(sdk::unknown_ptr) wpp_829f864e54213ce604c5c92b3588a0eb_traceguids;
    
    // [WPP_83e99e9612423e7e45f941ca5e9f9701_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47de0, 0x1b430 bytes
    //
    _p51(sdk::unknown_ptr) wpp_83e99e9612423e7e45f941ca5e9f9701_traceguids;
    
    // [WPP_853dacc0765f33640d40b8b391c2a4b7_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47d00, 0x1b430 bytes
    //
    _p52(sdk::unknown_ptr) wpp_853dacc0765f33640d40b8b391c2a4b7_traceguids;
    
    // [WPP_8629c91f542f3f4c40fd99d44e5decef_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47cf0, 0x1b430 bytes
    //
    _p53(sdk::unknown_ptr) wpp_8629c91f542f3f4c40fd99d44e5decef_traceguids;
    
    // [WPP_9cef3b4c60973fc161441df373a78906_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f930, 0x440c8 bytes
    //
    _p54(sdk::unknown_ptr) wpp_9cef3b4c60973fc161441df373a78906_traceguids;
    
    // [WPP_a20461f3f5ed3320672766c26a257c80_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6a1e8, 0x440c8 bytes
    //
    _p55(sdk::unknown_ptr) wpp_a20461f3f5ed3320672766c26a257c80_traceguids;
    
    // [WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47dc0, 0x1b430 bytes
    //
    _p56(sdk::unknown_ptr) wpp_a3dcb199dfb635f773f8f8e69f1de7fa_traceguids;
    
    // [WPP_aa86bbaa58c539f4643e2dd9379cd1c7_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x71558, 0x440c8 bytes
    //
    _p57(sdk::unknown_ptr) wpp_aa86bbaa58c539f4643e2dd9379cd1c7_traceguids;
    
    // [WPP_adf5a490639137350fe391398fd0549f_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x44540, 0x1b430 bytes
    //
    _p58(sdk::unknown_ptr) wpp_adf5a490639137350fe391398fd0549f_traceguids;
    
    // [WPP_afacbaaa0b96371c79aad0ae05c61007_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x446b0, 0x1b430 bytes
    //
    _p59(sdk::unknown_ptr) wpp_afacbaaa0b96371c79aad0ae05c61007_traceguids;
    
    // [WPP_b8aa5dc78a713cf38c391f4110a2b647_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47e58, 0x1b430 bytes
    //
    _p60(sdk::unknown_ptr) wpp_b8aa5dc78a713cf38c391f4110a2b647_traceguids;
    
    // [WPP_de08c5d1b9c93a1c8032742bdb9082ca_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x70700, 0x440c8 bytes
    //
    _p61(sdk::unknown_ptr) wpp_de08c5d1b9c93a1c8032742bdb9082ca_traceguids;
    
    // [WPP_e288614d163b3ceea713389723084ed3_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6f8d0, 0x440c8 bytes
    //
    _p62(sdk::unknown_ptr) wpp_e288614d163b3ceea713389723084ed3_traceguids;
    
    // [WPP_e2ad347556083c3f7a7362b05d162079_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47e48, 0x1b430 bytes
    //
    _p63(sdk::unknown_ptr) wpp_e2ad347556083c3f7a7362b05d162079_traceguids;
    
    // [WPP_ec4466e6a4c430629de8bf8b70e6b5a7_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47e10, 0x1b430 bytes
    //
    _p64(sdk::unknown_ptr) wpp_ec4466e6a4c430629de8bf8b70e6b5a7_traceguids;
    
    // [WPP_eef62bd4cf0436f547a05fa28d824b44_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47d50, 0x1b430 bytes
    //
    _p65(sdk::unknown_ptr) wpp_eef62bd4cf0436f547a05fa28d824b44_traceguids;
    
    // [WPP_f43134d441e031b6c1d900c8b3e044b0_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .rdata:0x47dd0, 0x1b430 bytes
    //
    _p66(sdk::unknown_ptr) wpp_f43134d441e031b6c1d900c8b3e044b0_traceguids;
    
    // [WPP_f8f94deaddf8302c4a0838369eef3321_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x6fef8, 0x440c8 bytes
    //
    _p67(sdk::unknown_ptr) wpp_f8f94deaddf8302c4a0838369eef3321_traceguids;
    
    // [WPP_fa495b127642376557d8e88f34c20653_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .rdata:0x70290, 0x440c8 bytes
    //
    _p68(sdk::unknown_ptr) wpp_fa495b127642376557d8e88f34c20653_traceguids;
    
    // [WPP_SF_xs]
    // Ldr = [storport.sys]
    // => Windows 10 v1607
    // storport.sys .text:0x2fe2c, 0x1b430 bytes
    //
    _p69(sdk::unknown_ptr) wpp_sf_xs;
    
    // [EventMiniportLogError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5f5c8, 0x2be18 bytes
    // storport.sys .rdata:0x5f5c8, 0x2be18 bytes
    //
    _p70(sdk::unknown_ptr) event_miniport_log_error;
    
    // [g_StorpWheaInitialized]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .data:0x678cc, 0x2be18 bytes
    // storport.sys .data:0x678cc, 0x2be18 bytes
    //
    _p71(sdk::unknown_ptr) g_storp_whea_initialized;
    
    // [McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x4e938, 0x2be18 bytes
    // storport.sys .text:0x4e938, 0x2be18 bytes
    //
    _p72(sdk::unknown_ptr) mc_template_k0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_etw_write_transfer;
    
    // [McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x1744, 0x2be18 bytes
    // storport.sys .text:0x1744, 0x2be18 bytes
    //
    _p73(sdk::unknown_ptr) mc_template_k0quuujjzsssxqtqbr13_etw_write_transfer;
    
    // [McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x35160, 0x2be18 bytes
    // storport.sys .text:0x35160, 0x2be18 bytes
    //
    _p74(sdk::unknown_ptr) mc_template_k0quuujjzssszhzhbr13hbr15q_etw_write_transfer;
    
    // [McTemplateK0quuujjzssztxqqbr13uhqbr17_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x4ecb0, 0x2be18 bytes
    // storport.sys .text:0x4ecb0, 0x2be18 bytes
    //
    _p75(sdk::unknown_ptr) mc_template_k0quuujjzssztxqqbr13uhqbr17_etw_write_transfer;
    
    // [McTemplateK0qzzqxtqqt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x28438, 0x2be18 bytes
    // storport.sys .text:0x28438, 0x2be18 bytes
    //
    _p76(sdk::unknown_ptr) mc_template_k0qzzqxtqqt_etw_write_transfer;
    
    // [McTemplateK0zqjuuuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x443dc, 0x2be18 bytes
    // storport.sys .text:0x443dc, 0x2be18 bytes
    //
    _p77(sdk::unknown_ptr) mc_template_k0zqjuuuq_etw_write_transfer;
    
    // [RaidAdapterPoFxActivateComponentFromMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 11
    // storport.sys .text:0x2cb44, 0x1b430 bytes
    // storport.sys .text:0x20398, 0x440c8 bytes
    //
    _p78(sdk::unknown_ptr) raid_adapter_po_fx_activate_component_from_miniport;
    
    // [RaidAdapterPoFxIdleComponentFromMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 11
    // storport.sys .text:0x27860, 0x1b430 bytes
    // storport.sys .text:0x34d64, 0x440c8 bytes
    //
    _p79(sdk::unknown_ptr) raid_adapter_po_fx_idle_component_from_miniport;
    
    // [RaidAdapterRequestDirectComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x2bb2c, 0x2be18 bytes
    // storport.sys .text:0x2bb2c, 0x2be18 bytes
    //
    _p80(sdk::unknown_ptr) raid_adapter_request_direct_complete;
    
    // [RaidCheckD3AllowedOnCurrentPlatform]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x56738, 0x2be18 bytes
    // storport.sys .text:0x56738, 0x2be18 bytes
    //
    _p81(sdk::unknown_ptr) raid_check_d3_allowed_on_current_platform;
    
    // [StorAcquireSpinLockEx]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x35a98, 0x2be18 bytes
    // storport.sys .text:0x35a98, 0x2be18 bytes
    //
    _p82(sdk::unknown_ptr) stor_acquire_spin_lock_ex;
    
    // [StorEtwAdapterNeedsUpdate]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x4caa4, 0x2be18 bytes
    // storport.sys .text:0x4caa4, 0x2be18 bytes
    //
    _p83(sdk::unknown_ptr) stor_etw_adapter_needs_update;
    
    // [StorEtwEnableAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x4cad0, 0x2be18 bytes
    // storport.sys .text:0x4cad0, 0x2be18 bytes
    //
    _p84(sdk::unknown_ptr) stor_etw_enable_adapter;
    
    // [StorpGetPfns]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x39870, 0x2be18 bytes
    // storport.sys .text:0x39870, 0x2be18 bytes
    //
    _p85(sdk::unknown_ptr) storp_get_pfns;
    
    // [WPP_17dc98e2663d35e70a4d2a2e32da527b_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5fcc8, 0x2be18 bytes
    // storport.sys .rdata:0x5fcc8, 0x2be18 bytes
    //
    _p86(sdk::unknown_ptr) wpp_17dc98e2663d35e70a4d2a2e32da527b_traceguids;
    
    // [WPP_1d6032c9664a36275945883370c93be0_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5f630, 0x2be18 bytes
    // storport.sys .rdata:0x5f630, 0x2be18 bytes
    //
    _p87(sdk::unknown_ptr) wpp_1d6032c9664a36275945883370c93be0_traceguids;
    
    // [WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x59f68, 0x2be18 bytes
    // storport.sys .rdata:0x59f68, 0x2be18 bytes
    //
    _p88(sdk::unknown_ptr) wpp_258a4a2f60cd3686bc4022bc720d1057_traceguids;
    
    // [WPP_409ece23a875318e2a3b5ac826db135a_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5f9f8, 0x2be18 bytes
    // storport.sys .rdata:0x5f9f8, 0x2be18 bytes
    //
    _p89(sdk::unknown_ptr) wpp_409ece23a875318e2a3b5ac826db135a_traceguids;
    
    // [WPP_4131ae18f80433647a9f36ec3f2e372c_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x60818, 0x2be18 bytes
    // storport.sys .rdata:0x60818, 0x2be18 bytes
    //
    _p90(sdk::unknown_ptr) wpp_4131ae18f80433647a9f36ec3f2e372c_traceguids;
    
    // [WPP_5f72e236ae1c38856314d349f42dc3f9_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5a150, 0x2be18 bytes
    // storport.sys .rdata:0x5a150, 0x2be18 bytes
    //
    _p91(sdk::unknown_ptr) wpp_5f72e236ae1c38856314d349f42dc3f9_traceguids;
    
    // [WPP_9747ab02b70f36f376c6173defc22901_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5fae0, 0x2be18 bytes
    // storport.sys .rdata:0x5fae0, 0x2be18 bytes
    //
    _p92(sdk::unknown_ptr) wpp_9747ab02b70f36f376c6173defc22901_traceguids;
    
    // [WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5fb70, 0x2be18 bytes
    // storport.sys .rdata:0x5fb70, 0x2be18 bytes
    //
    _p93(sdk::unknown_ptr) wpp_9beceae3e67f3ebeaf45b51d134464fb_traceguids;
    
    // [WPP_c75ef678420536b919220fd58d40bf93_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5f658, 0x2be18 bytes
    // storport.sys .rdata:0x5f658, 0x2be18 bytes
    //
    _p94(sdk::unknown_ptr) wpp_c75ef678420536b919220fd58d40bf93_traceguids;
    
    // [WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .rdata:0x5ed90, 0x2be18 bytes
    // storport.sys .rdata:0x5ed90, 0x2be18 bytes
    //
    _p95(sdk::unknown_ptr) wpp_f9ccab431b9635edeca76e3554be04bb_traceguids;
    
    // [ATADeviceIdList]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67770, 0x2be18 bytes
    // storport.sys .data:0x798f0, 0x440c8 bytes
    // storport.sys .data:0x67770, 0x2be18 bytes
    //
    _p96(sdk::unknown_ptr) ata_device_id_list;
    
    // [ATADeviceIdListLock]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67700, 0x2be18 bytes
    // storport.sys .data:0x79880, 0x440c8 bytes
    // storport.sys .data:0x67700, 0x2be18 bytes
    //
    _p97(sdk::unknown_ptr) ata_device_id_list_lock;
    
    // [ATADeviceIdShim]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x672b0, 0x2be18 bytes
    // storport.sys .data:0x792f0, 0x440c8 bytes
    // storport.sys .data:0x672b0, 0x2be18 bytes
    //
    _p98(sdk::unknown_ptr) ata_device_id_shim;
    
    // [ATADeviceIdShimHookCollections]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67210, 0x2be18 bytes
    // storport.sys .data:0x79288, 0x440c8 bytes
    // storport.sys .data:0x67210, 0x2be18 bytes
    //
    _p99(sdk::unknown_ptr) ata_device_id_shim_hook_collections;
    
    // [ATADeviceIdShimHookDeviceControl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x55d00, 0x2be18 bytes
    // storport.sys .text:0x642f0, 0x440c8 bytes
    // storport.sys .text:0x55d00, 0x2be18 bytes
    //
    _q00(sdk::unknown_ptr) ata_device_id_shim_hook_device_control;
    
    // [ATADeviceIdShimHooks]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67130, 0x2be18 bytes
    // storport.sys .data:0x791a0, 0x440c8 bytes
    // storport.sys .data:0x67130, 0x2be18 bytes
    //
    _q01(sdk::unknown_ptr) ata_device_id_shim_hooks;
    
    // [ATADeviceIdShimStorageDeviceIdCompletionHook]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x55e00, 0x2be18 bytes
    // storport.sys .text:0x643f0, 0x440c8 bytes
    // storport.sys .text:0x55e00, 0x2be18 bytes
    //
    _q02(sdk::unknown_ptr) ata_device_id_shim_storage_device_id_completion_hook;
    
    // [ATAShimGetMsftId]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x55e70, 0x2be18 bytes
    // storport.sys .text:0x64460, 0x440c8 bytes
    // storport.sys .text:0x55e70, 0x2be18 bytes
    //
    _q03(sdk::unknown_ptr) ata_shim_get_msft_id;
    
    // [DFxEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67d71, 0x2be18 bytes
    // storport.sys .data:0x79424, 0x440c8 bytes
    // storport.sys .data:0x67d71, 0x2be18 bytes
    //
    _q04(sdk::unknown_ptr) d_fx_enabled;
    
    // [DeviceQueueIoWaitThreshold]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67310, 0x2be18 bytes
    // storport.sys .data:0x793e8, 0x440c8 bytes
    // storport.sys .data:0x67310, 0x2be18 bytes
    //
    _q05(sdk::unknown_ptr) device_queue_io_wait_threshold;
    
    // [EnclosureIdList]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67830, 0x2be18 bytes
    // storport.sys .data:0x799b0, 0x440c8 bytes
    // storport.sys .data:0x67830, 0x2be18 bytes
    //
    _q06(sdk::unknown_ptr) enclosure_id_list;
    
    // [EnclosureIdListLock]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x677c0, 0x2be18 bytes
    // storport.sys .data:0x79940, 0x440c8 bytes
    // storport.sys .data:0x677c0, 0x2be18 bytes
    //
    _q07(sdk::unknown_ptr) enclosure_id_list_lock;
    
    // [EventAdapterDirectedPowerDownStart]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5eed0, 0x2be18 bytes
    // storport.sys .rdata:0x6f030, 0x440c8 bytes
    // storport.sys .rdata:0x5eed0, 0x2be18 bytes
    //
    _q08(sdk::unknown_ptr) event_adapter_directed_power_down_start;
    
    // [EventAdapterDirectedPowerDownStop]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f3e8, 0x2be18 bytes
    // storport.sys .rdata:0x6f688, 0x440c8 bytes
    // storport.sys .rdata:0x5f3e8, 0x2be18 bytes
    //
    _q09(sdk::unknown_ptr) event_adapter_directed_power_down_stop;
    
    // [EventAdapterDirectedPowerUpStart]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f200, 0x2be18 bytes
    // storport.sys .rdata:0x6f470, 0x440c8 bytes
    // storport.sys .rdata:0x5f200, 0x2be18 bytes
    //
    _q10(sdk::unknown_ptr) event_adapter_directed_power_up_start;
    
    // [EventAdapterDirectedPowerUpStop]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f3c8, 0x2be18 bytes
    // storport.sys .rdata:0x6f658, 0x440c8 bytes
    // storport.sys .rdata:0x5f3c8, 0x2be18 bytes
    //
    _q11(sdk::unknown_ptr) event_adapter_directed_power_up_stop;
    
    // [EventAdapterRescan]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x596e0, 0x2be18 bytes
    // storport.sys .rdata:0x697e8, 0x440c8 bytes
    // storport.sys .rdata:0x596e0, 0x2be18 bytes
    //
    _q12(sdk::unknown_ptr) event_adapter_rescan;
    
    // [EventHierarchicalReset]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f090, 0x2be18 bytes
    // storport.sys .rdata:0x6f250, 0x440c8 bytes
    // storport.sys .rdata:0x5f090, 0x2be18 bytes
    //
    _q13(sdk::unknown_ptr) event_hierarchical_reset;
    
    // [EventHighLatencyIo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f4a8, 0x2be18 bytes
    // storport.sys .rdata:0x6a078, 0x440c8 bytes
    // storport.sys .rdata:0x5f4a8, 0x2be18 bytes
    //
    _q14(sdk::unknown_ptr) event_high_latency_io;
    
    // [EventHmbAllocation]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f4d8, 0x2be18 bytes
    // storport.sys .rdata:0x6f788, 0x440c8 bytes
    // storport.sys .rdata:0x5f4d8, 0x2be18 bytes
    //
    _q15(sdk::unknown_ptr) event_hmb_allocation;
    
    // [EventInitializeStorageD3]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f210, 0x2be18 bytes
    // storport.sys .rdata:0x6f480, 0x440c8 bytes
    // storport.sys .rdata:0x5f210, 0x2be18 bytes
    //
    _q16(sdk::unknown_ptr) event_initialize_storage_d3;
    
    // [EventMarkAndRemoveFailedDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x59f58, 0x2be18 bytes
    // storport.sys .rdata:0x6f798, 0x440c8 bytes
    // storport.sys .rdata:0x59f58, 0x2be18 bytes
    //
    _q17(sdk::unknown_ptr) event_mark_and_remove_failed_device;
    
    // [EventMarkDeviceFailed]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x59f28, 0x2be18 bytes
    // storport.sys .rdata:0x6f140, 0x440c8 bytes
    // storport.sys .rdata:0x59f28, 0x2be18 bytes
    //
    _q18(sdk::unknown_ptr) event_mark_device_failed;
    
    // [EventMarkDevicePotentiallyFailed]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x59f08, 0x2be18 bytes
    // storport.sys .rdata:0x6eeb0, 0x440c8 bytes
    // storport.sys .rdata:0x59f08, 0x2be18 bytes
    //
    _q19(sdk::unknown_ptr) event_mark_device_potentially_failed;
    
    // [EventMiniportHealthError2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f010, 0x2be18 bytes
    // storport.sys .rdata:0x6f1c0, 0x440c8 bytes
    // storport.sys .rdata:0x5f010, 0x2be18 bytes
    //
    _q20(sdk::unknown_ptr) event_miniport_health_error2;
    
    // [EventMiniportHealthError4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ee90, 0x2be18 bytes
    // storport.sys .rdata:0x6efe0, 0x440c8 bytes
    // storport.sys .rdata:0x5ee90, 0x2be18 bytes
    //
    _q21(sdk::unknown_ptr) event_miniport_health_error4;
    
    // [EventMiniportHealthError8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ed60, 0x2be18 bytes
    // storport.sys .rdata:0x6eea0, 0x440c8 bytes
    // storport.sys .rdata:0x5ed60, 0x2be18 bytes
    //
    _q22(sdk::unknown_ptr) event_miniport_health_error8;
    
    // [EventMiniportHealthErrorLun2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ed70, 0x2be18 bytes
    // storport.sys .rdata:0x6eec0, 0x440c8 bytes
    // storport.sys .rdata:0x5ed70, 0x2be18 bytes
    //
    _q23(sdk::unknown_ptr) event_miniport_health_error_lun2;
    
    // [EventMiniportHealthErrorLun4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f170, 0x2be18 bytes
    // storport.sys .rdata:0x6f3b0, 0x440c8 bytes
    // storport.sys .rdata:0x5f170, 0x2be18 bytes
    //
    _q24(sdk::unknown_ptr) event_miniport_health_error_lun4;
    
    // [EventMiniportHealthErrorLun8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ecb0, 0x2be18 bytes
    // storport.sys .rdata:0x6edf0, 0x440c8 bytes
    // storport.sys .rdata:0x5ecb0, 0x2be18 bytes
    //
    _q25(sdk::unknown_ptr) event_miniport_health_error_lun8;
    
    // [EventMiniportHealthWarning2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f0a0, 0x2be18 bytes
    // storport.sys .rdata:0x6f280, 0x440c8 bytes
    // storport.sys .rdata:0x5f0a0, 0x2be18 bytes
    //
    _q26(sdk::unknown_ptr) event_miniport_health_warning2;
    
    // [EventMiniportHealthWarning4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ed00, 0x2be18 bytes
    // storport.sys .rdata:0x6ee30, 0x440c8 bytes
    // storport.sys .rdata:0x5ed00, 0x2be18 bytes
    //
    _q27(sdk::unknown_ptr) event_miniport_health_warning4;
    
    // [EventMiniportHealthWarning8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f2d8, 0x2be18 bytes
    // storport.sys .rdata:0x6f568, 0x440c8 bytes
    // storport.sys .rdata:0x5f2d8, 0x2be18 bytes
    //
    _q28(sdk::unknown_ptr) event_miniport_health_warning8;
    
    // [EventMiniportHealthWarningLun2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ef00, 0x2be18 bytes
    // storport.sys .rdata:0x6f060, 0x440c8 bytes
    // storport.sys .rdata:0x5ef00, 0x2be18 bytes
    //
    _q29(sdk::unknown_ptr) event_miniport_health_warning_lun2;
    
    // [EventMiniportHealthWarningLun4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f4f8, 0x2be18 bytes
    // storport.sys .rdata:0x6f7a8, 0x440c8 bytes
    // storport.sys .rdata:0x5f4f8, 0x2be18 bytes
    //
    _q30(sdk::unknown_ptr) event_miniport_health_warning_lun4;
    
    // [EventMiniportHealthWarningLun8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f000, 0x2be18 bytes
    // storport.sys .rdata:0x6a7f8, 0x440c8 bytes
    // storport.sys .rdata:0x5f000, 0x2be18 bytes
    //
    _q31(sdk::unknown_ptr) event_miniport_health_warning_lun8;
    
    // [EventMiniportOperationalError2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f070, 0x2be18 bytes
    // storport.sys .rdata:0x6f220, 0x440c8 bytes
    // storport.sys .rdata:0x5f070, 0x2be18 bytes
    //
    _q32(sdk::unknown_ptr) event_miniport_operational_error2;
    
    // [EventMiniportOperationalError4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f5b8, 0x2be18 bytes
    // storport.sys .rdata:0x6f858, 0x440c8 bytes
    // storport.sys .rdata:0x5f5b8, 0x2be18 bytes
    //
    _q33(sdk::unknown_ptr) event_miniport_operational_error4;
    
    // [EventMiniportOperationalError8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ee00, 0x2be18 bytes
    // storport.sys .rdata:0x6ef50, 0x440c8 bytes
    // storport.sys .rdata:0x5ee00, 0x2be18 bytes
    //
    _q34(sdk::unknown_ptr) event_miniport_operational_error8;
    
    // [EventMiniportOperationalErrorLun2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f2c8, 0x2be18 bytes
    // storport.sys .rdata:0x6f558, 0x440c8 bytes
    // storport.sys .rdata:0x5f2c8, 0x2be18 bytes
    //
    _q35(sdk::unknown_ptr) event_miniport_operational_error_lun2;
    
    // [EventMiniportOperationalErrorLun4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f288, 0x2be18 bytes
    // storport.sys .rdata:0x6f518, 0x440c8 bytes
    // storport.sys .rdata:0x5f288, 0x2be18 bytes
    //
    _q36(sdk::unknown_ptr) event_miniport_operational_error_lun4;
    
    // [EventMiniportOperationalErrorLun8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5edf0, 0x2be18 bytes
    // storport.sys .rdata:0x6ef30, 0x440c8 bytes
    // storport.sys .rdata:0x5edf0, 0x2be18 bytes
    //
    _q37(sdk::unknown_ptr) event_miniport_operational_error_lun8;
    
    // [EventMiniportOperationalErrorRequest2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ecd0, 0x2be18 bytes
    // storport.sys .rdata:0x6ee10, 0x440c8 bytes
    // storport.sys .rdata:0x5ecd0, 0x2be18 bytes
    //
    _q38(sdk::unknown_ptr) event_miniport_operational_error_request2;
    
    // [EventMiniportOperationalErrorRequest4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ef10, 0x2be18 bytes
    // storport.sys .rdata:0x6f070, 0x440c8 bytes
    // storport.sys .rdata:0x5ef10, 0x2be18 bytes
    //
    _q39(sdk::unknown_ptr) event_miniport_operational_error_request4;
    
    // [EventMiniportOperationalErrorRequest8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f398, 0x2be18 bytes
    // storport.sys .rdata:0x6a808, 0x440c8 bytes
    // storport.sys .rdata:0x5f398, 0x2be18 bytes
    //
    _q40(sdk::unknown_ptr) event_miniport_operational_error_request8;
    
    // [EventMiniportOperationalWarning2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f438, 0x2be18 bytes
    // storport.sys .rdata:0x6f6e8, 0x440c8 bytes
    // storport.sys .rdata:0x5f438, 0x2be18 bytes
    //
    _q41(sdk::unknown_ptr) event_miniport_operational_warning2;
    
    // [EventMiniportOperationalWarning4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5edb0, 0x2be18 bytes
    // storport.sys .rdata:0x6eef0, 0x440c8 bytes
    // storport.sys .rdata:0x5edb0, 0x2be18 bytes
    //
    _q42(sdk::unknown_ptr) event_miniport_operational_warning4;
    
    // [EventMiniportOperationalWarning8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f3b8, 0x2be18 bytes
    // storport.sys .rdata:0x6f648, 0x440c8 bytes
    // storport.sys .rdata:0x5f3b8, 0x2be18 bytes
    //
    _q43(sdk::unknown_ptr) event_miniport_operational_warning8;
    
    // [EventMiniportOperationalWarningLun2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f150, 0x2be18 bytes
    // storport.sys .rdata:0x6f390, 0x440c8 bytes
    // storport.sys .rdata:0x5f150, 0x2be18 bytes
    //
    _q44(sdk::unknown_ptr) event_miniport_operational_warning_lun2;
    
    // [EventMiniportOperationalWarningLun4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f418, 0x2be18 bytes
    // storport.sys .rdata:0x6f6c8, 0x440c8 bytes
    // storport.sys .rdata:0x5f418, 0x2be18 bytes
    //
    _q45(sdk::unknown_ptr) event_miniport_operational_warning_lun4;
    
    // [EventMiniportOperationalWarningLun8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f1b0, 0x2be18 bytes
    // storport.sys .rdata:0x6f400, 0x440c8 bytes
    // storport.sys .rdata:0x5f1b0, 0x2be18 bytes
    //
    _q46(sdk::unknown_ptr) event_miniport_operational_warning_lun8;
    
    // [EventMiniportOperationalWarningRequest2]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5efe0, 0x2be18 bytes
    // storport.sys .rdata:0x6f1a0, 0x440c8 bytes
    // storport.sys .rdata:0x5efe0, 0x2be18 bytes
    //
    _q47(sdk::unknown_ptr) event_miniport_operational_warning_request2;
    
    // [EventMiniportOperationalWarningRequest4]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ee80, 0x2be18 bytes
    // storport.sys .rdata:0x6efd0, 0x440c8 bytes
    // storport.sys .rdata:0x5ee80, 0x2be18 bytes
    //
    _q48(sdk::unknown_ptr) event_miniport_operational_warning_request4;
    
    // [EventMiniportOperationalWarningRequest8]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f458, 0x2be18 bytes
    // storport.sys .rdata:0x6f708, 0x440c8 bytes
    // storport.sys .rdata:0x5f458, 0x2be18 bytes
    //
    _q49(sdk::unknown_ptr) event_miniport_operational_warning_request8;
    
    // [EventQueuedIoExceededThreshold]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5eca0, 0x2be18 bytes
    // storport.sys .rdata:0x6a048, 0x440c8 bytes
    // storport.sys .rdata:0x5eca0, 0x2be18 bytes
    //
    _q50(sdk::unknown_ptr) event_queued_io_exceeded_threshold;
    
    // [EventSMRUnsupportedError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f0f0, 0x2be18 bytes
    // storport.sys .rdata:0x6f2c0, 0x440c8 bytes
    // storport.sys .rdata:0x5f0f0, 0x2be18 bytes
    //
    _q51(sdk::unknown_ptr) event_smr_unsupported_error;
    
    // [EventUnitArrived]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x596b0, 0x2be18 bytes
    // storport.sys .rdata:0x69808, 0x440c8 bytes
    // storport.sys .rdata:0x596b0, 0x2be18 bytes
    //
    _q52(sdk::unknown_ptr) event_unit_arrived;
    
    // [EventUnitDeviceStatisticsLogs]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f388, 0x2be18 bytes
    // storport.sys .rdata:0x6f628, 0x440c8 bytes
    // storport.sys .rdata:0x5f388, 0x2be18 bytes
    //
    _q53(sdk::unknown_ptr) event_unit_device_statistics_logs;
    
    // [EventUnitDirectedPowerDownStart]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5edc0, 0x2be18 bytes
    // storport.sys .rdata:0x6ef00, 0x440c8 bytes
    // storport.sys .rdata:0x5edc0, 0x2be18 bytes
    //
    _q54(sdk::unknown_ptr) event_unit_directed_power_down_start;
    
    // [EventUnitDirectedPowerDownStop]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5eeb0, 0x2be18 bytes
    // storport.sys .rdata:0x6f000, 0x440c8 bytes
    // storport.sys .rdata:0x5eeb0, 0x2be18 bytes
    //
    _q55(sdk::unknown_ptr) event_unit_directed_power_down_stop;
    
    // [EventUnitDirectedPowerUpStart]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f0e0, 0x2be18 bytes
    // storport.sys .rdata:0x6f2b0, 0x440c8 bytes
    // storport.sys .rdata:0x5f0e0, 0x2be18 bytes
    //
    _q56(sdk::unknown_ptr) event_unit_directed_power_up_start;
    
    // [EventUnitDirectedPowerUpStop]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ecf0, 0x2be18 bytes
    // storport.sys .rdata:0x6a0b0, 0x440c8 bytes
    // storport.sys .rdata:0x5ecf0, 0x2be18 bytes
    //
    _q57(sdk::unknown_ptr) event_unit_directed_power_up_stop;
    
    // [EventUnitErrorDataSummary]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x596d0, 0x2be18 bytes
    // storport.sys .rdata:0x697d8, 0x440c8 bytes
    // storport.sys .rdata:0x596d0, 0x2be18 bytes
    //
    _q58(sdk::unknown_ptr) event_unit_error_data_summary;
    
    // [EventUnitMaintenanceStartOperational]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ef80, 0x2be18 bytes
    // storport.sys .rdata:0x6f110, 0x440c8 bytes
    // storport.sys .rdata:0x5ef80, 0x2be18 bytes
    //
    _q59(sdk::unknown_ptr) event_unit_maintenance_start_operational;
    
    // [EventUnitMaintenanceStopOperational]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f368, 0x2be18 bytes
    // storport.sys .rdata:0x6f608, 0x440c8 bytes
    // storport.sys .rdata:0x5f368, 0x2be18 bytes
    //
    _q60(sdk::unknown_ptr) event_unit_maintenance_stop_operational;
    
    // [EventUnitNvmeHealthLog]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5ecc0, 0x2be18 bytes
    // storport.sys .rdata:0x6ee00, 0x440c8 bytes
    // storport.sys .rdata:0x5ecc0, 0x2be18 bytes
    //
    _q61(sdk::unknown_ptr) event_unit_nvme_health_log;
    
    // [EventUnitPerformance]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x597b8, 0x2be18 bytes
    // storport.sys .rdata:0x69678, 0x440c8 bytes
    // storport.sys .rdata:0x597b8, 0x2be18 bytes
    //
    _q62(sdk::unknown_ptr) event_unit_performance;
    
    // [EventUnitQosData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f238, 0x2be18 bytes
    // storport.sys .rdata:0x6f4d8, 0x440c8 bytes
    // storport.sys .rdata:0x5f238, 0x2be18 bytes
    //
    _q63(sdk::unknown_ptr) event_unit_qos_data;
    
    // [EventUnitSmartAttributes]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x59610, 0x2be18 bytes
    // storport.sys .rdata:0x6a038, 0x440c8 bytes
    // storport.sys .rdata:0x59610, 0x2be18 bytes
    //
    _q64(sdk::unknown_ptr) event_unit_smart_attributes;
    
    // [EventUnitSurpriseRemoved]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x596c0, 0x2be18 bytes
    // storport.sys .rdata:0x697f8, 0x440c8 bytes
    // storport.sys .rdata:0x596c0, 0x2be18 bytes
    //
    _q65(sdk::unknown_ptr) event_unit_surprise_removed;
    
    // [EventUnitUniqueErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x597a8, 0x2be18 bytes
    // storport.sys .rdata:0x69740, 0x440c8 bytes
    // storport.sys .rdata:0x597a8, 0x2be18 bytes
    //
    _q66(sdk::unknown_ptr) event_unit_unique_error_data;
    
    // [ExtendedDSMCommandsSupported]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67da8, 0x2be18 bytes
    // storport.sys .data:0x79b24, 0x440c8 bytes
    // storport.sys .data:0x67da8, 0x2be18 bytes
    //
    _q67(sdk::unknown_ptr) extended_dsm_commands_supported;
    
    // [FUAEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67d72, 0x2be18 bytes
    // storport.sys .data:0x79abb, 0x440c8 bytes
    // storport.sys .data:0x67d72, 0x2be18 bytes
    //
    _q68(sdk::unknown_ptr) fua_enabled;
    
    // [g_QosFlags]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x676b8, 0x2be18 bytes
    // storport.sys .data:0x79838, 0x440c8 bytes
    // storport.sys .data:0x676b8, 0x2be18 bytes
    //
    _q69(sdk::unknown_ptr) g_qos_flags;
    
    // [g_RaidEtwRefCount]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e10, 0x2be18 bytes
    // storport.sys .data:0x79b60, 0x440c8 bytes
    // storport.sys .data:0x67e10, 0x2be18 bytes
    //
    _q70(sdk::unknown_ptr) g_raid_etw_ref_count;
    
    // [g_RaidPassthroughCdbs]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67df0, 0x2be18 bytes
    // storport.sys .data:0x79a88, 0x440c8 bytes
    // storport.sys .data:0x67df0, 0x2be18 bytes
    //
    _q71(sdk::unknown_ptr) g_raid_passthrough_cdbs;
    
    // [g_StorpSourceGuid]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5fc20, 0x2be18 bytes
    // storport.sys .rdata:0x701a0, 0x440c8 bytes
    // storport.sys .rdata:0x5fc20, 0x2be18 bytes
    //
    _q72(sdk::unknown_ptr) g_storp_source_guid;
    
    // [g_StorpTraceLoggingCriticalEventEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x678d0, 0x2be18 bytes
    // storport.sys .data:0x79a7c, 0x440c8 bytes
    // storport.sys .data:0x678d0, 0x2be18 bytes
    //
    _q73(sdk::unknown_ptr) g_storp_trace_logging_critical_event_enabled;
    
    // [g_StorpTraceLoggingCriticalEventEnabledSetByRegistry]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67d8c, 0x2be18 bytes
    // storport.sys .data:0x79b00, 0x440c8 bytes
    // storport.sys .data:0x67d8c, 0x2be18 bytes
    //
    _q74(sdk::unknown_ptr) g_storp_trace_logging_critical_event_enabled_set_by_registry;
    
    // [g_StorpTraceLoggingCriticalEventsLogged]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67d90, 0x2be18 bytes
    // storport.sys .data:0x79b04, 0x440c8 bytes
    // storport.sys .data:0x67d90, 0x2be18 bytes
    //
    _q75(sdk::unknown_ptr) g_storp_trace_logging_critical_events_logged;
    
    // [g_StorpTraceLoggingDeviceHealthEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67384, 0x2be18 bytes
    // storport.sys .data:0x79450, 0x440c8 bytes
    // storport.sys .data:0x67384, 0x2be18 bytes
    //
    _q76(sdk::unknown_ptr) g_storp_trace_logging_device_health_enabled;
    
    // [g_StorpTraceLoggingDeviceHealthPeriod]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67338, 0x2be18 bytes
    // storport.sys .data:0x793c0, 0x440c8 bytes
    // storport.sys .data:0x67338, 0x2be18 bytes
    //
    _q77(sdk::unknown_ptr) g_storp_trace_logging_device_health_period;
    
    // [g_StorpTraceLoggingDeviceHealthTick]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67340, 0x2be18 bytes
    // storport.sys .data:0x793c8, 0x440c8 bytes
    // storport.sys .data:0x67340, 0x2be18 bytes
    //
    _q78(sdk::unknown_ptr) g_storp_trace_logging_device_health_tick;
    
    // [g_StorpTraceLoggingDeviceHealthTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67520, 0x2be18 bytes
    // storport.sys .data:0x79660, 0x440c8 bytes
    // storport.sys .data:0x67520, 0x2be18 bytes
    //
    _q79(sdk::unknown_ptr) g_storp_trace_logging_device_health_timer;
    
    // [g_StorpTraceLoggingDeviceHealthTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67560, 0x2be18 bytes
    // storport.sys .data:0x796a0, 0x440c8 bytes
    // storport.sys .data:0x67560, 0x2be18 bytes
    //
    _q80(sdk::unknown_ptr) g_storp_trace_logging_device_health_timer_dpc;
    
    // [g_StorpTraceLoggingInitialized]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .data:0x4e670, 0x1b430 bytes
    // storport.sys .data:0x67e50, 0x2be18 bytes
    // storport.sys .data:0x67e50, 0x2be18 bytes
    //
    _q81(sdk::unknown_ptr) g_storp_trace_logging_initialized;
    
    // [g_StorpTraceLoggingPerformancePeriod]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67328, 0x2be18 bytes
    // storport.sys .data:0x793b0, 0x440c8 bytes
    // storport.sys .data:0x67328, 0x2be18 bytes
    //
    _q82(sdk::unknown_ptr) g_storp_trace_logging_performance_period;
    
    // [g_StorpWheaConfiguration]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67090, 0x2be18 bytes
    // storport.sys .data:0x79140, 0x440c8 bytes
    // storport.sys .data:0x67090, 0x2be18 bytes
    //
    _q83(sdk::unknown_ptr) g_storp_whea_configuration;
    
    // [g_StorpWheaErrorSourceId]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x678c8, 0x2be18 bytes
    // storport.sys .data:0x79a78, 0x440c8 bytes
    // storport.sys .data:0x678c8, 0x2be18 bytes
    //
    _q84(sdk::unknown_ptr) g_storp_whea_error_source_id;
    
    // [g_SystemUptime_s]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x678d8, 0x2be18 bytes
    // storport.sys .data:0x79a80, 0x440c8 bytes
    // storport.sys .data:0x678d8, 0x2be18 bytes
    //
    _q85(sdk::unknown_ptr) g_system_uptime_s;
    
    // [GatewayCheckWaitTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x38ed0, 0x1b430 bytes
    // storport.sys .text:0x4b2f0, 0x2be18 bytes
    // storport.sys .text:0x4b2f0, 0x2be18 bytes
    //
    _q86(sdk::unknown_ptr) gateway_check_wait_timeout;
    
    // [GatewayRegisterForEmptyNotification]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x104a0, 0x2be18 bytes
    // storport.sys .text:0x11688, 0x440c8 bytes
    // storport.sys .text:0x104a0, 0x2be18 bytes
    //
    _q87(sdk::unknown_ptr) gateway_register_for_empty_notification;
    
    // [GUID_ACPI_DSM_PCI_SSD_LED_STATE]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5fcd8, 0x2be18 bytes
    // storport.sys .rdata:0x70268, 0x440c8 bytes
    // storport.sys .rdata:0x5fcd8, 0x2be18 bytes
    //
    _q88(sdk::unknown_ptr) guid_acpi_dsm_pci_ssd_led_state;
    
    // [GUID_DIAGNOSTIC_PROVIDER_STORPORT]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f328, 0x2be18 bytes
    // storport.sys .rdata:0x6f5c8, 0x440c8 bytes
    // storport.sys .rdata:0x5f328, 0x2be18 bytes
    //
    _q89(sdk::unknown_ptr) guid_diagnostic_provider_storport;
    
    // [GUID_STORAGE_ACPI_DSD_D3_ENABLE]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5fcb8, 0x2be18 bytes
    // storport.sys .rdata:0x70238, 0x440c8 bytes
    // storport.sys .rdata:0x5fcb8, 0x2be18 bytes
    //
    _q90(sdk::unknown_ptr) guid_storage_acpi_dsd_d3_enable;
    
    // [GUID_STORAGE_DEVICE_D3_ALLOWED_RULE]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x60828, 0x2be18 bytes
    // storport.sys .rdata:0x71568, 0x440c8 bytes
    // storport.sys .rdata:0x60828, 0x2be18 bytes
    //
    _q91(sdk::unknown_ptr) guid_storage_device_d3_allowed_rule;
    
    // [GUID_STORPORT_NON_POFX_MINIPORT]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f258, 0x2be18 bytes
    // storport.sys .rdata:0x6f4e8, 0x440c8 bytes
    // storport.sys .rdata:0x5f258, 0x2be18 bytes
    //
    _q92(sdk::unknown_ptr) guid_storport_non_pofx_miniport;
    
    // [HighLatencyIoThreshold]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67308, 0x2be18 bytes
    // storport.sys .data:0x79390, 0x440c8 bytes
    // storport.sys .data:0x67308, 0x2be18 bytes
    //
    _q93(sdk::unknown_ptr) high_latency_io_threshold;
    
    // [HmbMaximumSize]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x6737c, 0x2be18 bytes
    // storport.sys .data:0x79440, 0x440c8 bytes
    // storport.sys .data:0x6737c, 0x2be18 bytes
    //
    _q94(sdk::unknown_ptr) hmb_maximum_size;
    
    // [IsSMREnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e20, 0x2be18 bytes
    // storport.sys .data:0x79ba0, 0x440c8 bytes
    // storport.sys .data:0x67e20, 0x2be18 bytes
    //
    _q95(sdk::unknown_ptr) is_smr_enabled;
    
    // [IsUntaggedRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x7090, 0x1b430 bytes
    // storport.sys .text:0xb318, 0x2be18 bytes
    // storport.sys .text:0xb318, 0x2be18 bytes
    //
    _q96(sdk::unknown_ptr) is_untagged_request;
    
    // [IsZonedWriteRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12550, 0x2be18 bytes
    // storport.sys .text:0x3d2f4, 0x440c8 bytes
    // storport.sys .text:0x12550, 0x2be18 bytes
    //
    _q97(sdk::unknown_ptr) is_zoned_write_request;
    
    // [McTemplateK0ddqqqqqqdduuuqqtt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34264, 0x2be18 bytes
    // storport.sys .text:0x3ff94, 0x440c8 bytes
    // storport.sys .text:0x34264, 0x2be18 bytes
    //
    _q98(sdk::unknown_ptr) mc_template_k0ddqqqqqqdduuuqqtt_etw_write_transfer;
    
    // [McTemplateK0dqddddddiiiii_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32afc, 0x2be18 bytes
    // storport.sys .text:0x3e49c, 0x440c8 bytes
    // storport.sys .text:0x32afc, 0x2be18 bytes
    //
    _q99(sdk::unknown_ptr) mc_template_k0dqddddddiiiii_etw_write_transfer;
    
    // [McTemplateK0dud_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43b00, 0x2be18 bytes
    // storport.sys .text:0x4f53c, 0x440c8 bytes
    // storport.sys .text:0x43b00, 0x2be18 bytes
    //
    _r00(sdk::unknown_ptr) mc_template_k0dud_etw_write_transfer;
    
    // [McTemplateK0pd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27d84, 0x2be18 bytes
    // storport.sys .text:0x310dc, 0x440c8 bytes
    // storport.sys .text:0x27d84, 0x2be18 bytes
    //
    _r01(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t)>*) mc_template_k0pd_etw_write_transfer;
    
    // [McTemplateK0pddd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27df4, 0x2be18 bytes
    // storport.sys .text:0x3114c, 0x440c8 bytes
    // storport.sys .text:0x27df4, 0x2be18 bytes
    //
    _r02(sdk::unknown_ptr) mc_template_k0pddd_etw_write_transfer;
    
    // [McTemplateK0pddp_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27e84, 0x2be18 bytes
    // storport.sys .text:0x311dc, 0x440c8 bytes
    // storport.sys .text:0x27e84, 0x2be18 bytes
    //
    _r03(sdk::unknown_ptr) mc_template_k0pddp_etw_write_transfer;
    
    // [McTemplateK0pdtquuuddddt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c018, 0x2be18 bytes
    // storport.sys .text:0x58de4, 0x440c8 bytes
    // storport.sys .text:0x4c018, 0x2be18 bytes
    //
    _r04(sdk::unknown_ptr) mc_template_k0pdtquuuddddt_etw_write_transfer;
    
    // [McTemplateK0pduuuuup_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27f1c, 0x2be18 bytes
    // storport.sys .text:0x31274, 0x440c8 bytes
    // storport.sys .text:0x27f1c, 0x2be18 bytes
    //
    _r05(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const int32_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const void*)>*) mc_template_k0pduuuuup_etw_write_transfer;
    
    // [McTemplateK0pqd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27ff4, 0x2be18 bytes
    // storport.sys .text:0x3134c, 0x440c8 bytes
    // storport.sys .text:0x27ff4, 0x2be18 bytes
    //
    _r06(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const void*, const uint32_t, const int32_t)>*) mc_template_k0pqd_etw_write_transfer;
    
    // [McTemplateK0pqquuu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34cc0, 0x2be18 bytes
    // storport.sys .text:0x40a00, 0x440c8 bytes
    // storport.sys .text:0x34cc0, 0x2be18 bytes
    //
    _r07(sdk::unknown_ptr) mc_template_k0pqquuu_etw_write_transfer;
    
    // [McTemplateK0pqquuuqpp_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34d7c, 0x2be18 bytes
    // storport.sys .text:0x40abc, 0x440c8 bytes
    // storport.sys .text:0x34d7c, 0x2be18 bytes
    //
    _r08(sdk::unknown_ptr) mc_template_k0pqquuuqpp_etw_write_transfer;
    
    // [McTemplateK0pqqx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28074, 0x2be18 bytes
    // storport.sys .text:0x313cc, 0x440c8 bytes
    // storport.sys .text:0x28074, 0x2be18 bytes
    //
    _r09(sdk::unknown_ptr) mc_template_k0pqqx_etw_write_transfer;
    
    // [McTemplateK0pqt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34bb0, 0x2be18 bytes
    // storport.sys .text:0x408f0, 0x440c8 bytes
    // storport.sys .text:0x34bb0, 0x2be18 bytes
    //
    _r10(sdk::unknown_ptr) mc_template_k0pqt_etw_write_transfer;
    
    // [McTemplateK0pqtq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b16c, 0x2be18 bytes
    // storport.sys .text:0x46e54, 0x440c8 bytes
    // storport.sys .text:0x3b16c, 0x2be18 bytes
    //
    _r11(sdk::unknown_ptr) mc_template_k0pqtq_etw_write_transfer;
    
    // [McTemplateK0pqtx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b204, 0x2be18 bytes
    // storport.sys .text:0x46eec, 0x440c8 bytes
    // storport.sys .text:0x3b204, 0x2be18 bytes
    //
    _r12(sdk::unknown_ptr) mc_template_k0pqtx_etw_write_transfer;
    
    // [McTemplateK0pquuqqd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x323d4, 0x2be18 bytes
    // storport.sys .text:0x3d528, 0x440c8 bytes
    // storport.sys .text:0x323d4, 0x2be18 bytes
    //
    _r13(sdk::unknown_ptr) mc_template_k0pquuqqd_etw_write_transfer;
    
    // [McTemplateK0pquuu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34e68, 0x2be18 bytes
    // storport.sys .text:0x40ba8, 0x440c8 bytes
    // storport.sys .text:0x34e68, 0x2be18 bytes
    //
    _r14(sdk::unknown_ptr) mc_template_k0pquuu_etw_write_transfer;
    
    // [McTemplateK0pquuudttqqttq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b2a4, 0x2be18 bytes
    // storport.sys .text:0x46f8c, 0x440c8 bytes
    // storport.sys .text:0x3b2a4, 0x2be18 bytes
    //
    _r15(sdk::unknown_ptr) mc_template_k0pquuudttqqttq_etw_write_transfer;
    
    // [McTemplateK0pquuuq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b3ec, 0x2be18 bytes
    // storport.sys .text:0x470d4, 0x440c8 bytes
    // storport.sys .text:0x3b3ec, 0x2be18 bytes
    //
    _r16(sdk::unknown_ptr) mc_template_k0pquuuq_etw_write_transfer;
    
    // [McTemplateK0pquuuqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b4a0, 0x2be18 bytes
    // storport.sys .text:0x47188, 0x440c8 bytes
    // storport.sys .text:0x3b4a0, 0x2be18 bytes
    //
    _r17(sdk::unknown_ptr) mc_template_k0pquuuqq_etw_write_transfer;
    
    // [McTemplateK0pquuut_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b3ec, 0x2be18 bytes
    // storport.sys .text:0x470d4, 0x440c8 bytes
    // storport.sys .text:0x3b3ec, 0x2be18 bytes
    //
    _r18(sdk::unknown_ptr) mc_template_k0pquuut_etw_write_transfer;
    
    // [McTemplateK0pquuutq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b560, 0x2be18 bytes
    // storport.sys .text:0x47248, 0x440c8 bytes
    // storport.sys .text:0x3b560, 0x2be18 bytes
    //
    _r19(sdk::unknown_ptr) mc_template_k0pquuutq_etw_write_transfer;
    
    // [McTemplateK0pquuutx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b628, 0x2be18 bytes
    // storport.sys .text:0x47310, 0x440c8 bytes
    // storport.sys .text:0x3b628, 0x2be18 bytes
    //
    _r20(sdk::unknown_ptr) mc_template_k0pquuutx_etw_write_transfer;
    
    // [McTemplateK0puxipu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c144, 0x2be18 bytes
    // storport.sys .text:0x58f10, 0x440c8 bytes
    // storport.sys .text:0x4c144, 0x2be18 bytes
    //
    _r21(sdk::unknown_ptr) mc_template_k0puxipu_etw_write_transfer;
    
    // [McTemplateK0pzqqxxtt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x281bc, 0x2be18 bytes
    // storport.sys .text:0x31524, 0x440c8 bytes
    // storport.sys .text:0x281bc, 0x2be18 bytes
    //
    _r22(sdk::unknown_ptr) mc_template_k0pzqqxxtt_etw_write_transfer;
    
    // [McTemplateK0qpd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b6e8, 0x2be18 bytes
    // storport.sys .text:0x473d0, 0x440c8 bytes
    // storport.sys .text:0x3b6e8, 0x2be18 bytes
    //
    _r23(sdk::unknown_ptr) mc_template_k0qpd_etw_write_transfer;
    
    // [McTemplateK0qpdudddd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b768, 0x2be18 bytes
    // storport.sys .text:0x47450, 0x440c8 bytes
    // storport.sys .text:0x3b768, 0x2be18 bytes
    //
    _r24(sdk::unknown_ptr) mc_template_k0qpdudddd_etw_write_transfer;
    
    // [McTemplateK0qqdqqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x282c8, 0x2be18 bytes
    // storport.sys .text:0x31fd8, 0x440c8 bytes
    // storport.sys .text:0x282c8, 0x2be18 bytes
    //
    _r25(sdk::unknown_ptr) mc_template_k0qqdqqqq_etw_write_transfer;
    
    // [McTemplateK0quu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43b88, 0x2be18 bytes
    // storport.sys .text:0x4f5c4, 0x440c8 bytes
    // storport.sys .text:0x43b88, 0x2be18 bytes
    //
    _r26(sdk::unknown_ptr) mc_template_k0quu_etw_write_transfer;
    
    // [McTemplateK0quuu_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43c0c, 0x2be18 bytes
    // storport.sys .text:0x4f648, 0x440c8 bytes
    // storport.sys .text:0x43c0c, 0x2be18 bytes
    //
    _r27(sdk::unknown_ptr) mc_template_k0quuu_etw_write_transfer;
    
    // [McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3698, 0x2be18 bytes
    // storport.sys .text:0xf4a8, 0x440c8 bytes
    // storport.sys .text:0x3698, 0x2be18 bytes
    //
    _r28(sdk::unknown_ptr) mc_template_k0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_etw_write_transfer;
    
    // [McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3374, 0x2be18 bytes
    // storport.sys .text:0xf184, 0x440c8 bytes
    // storport.sys .text:0x3374, 0x2be18 bytes
    //
    _r29(sdk::unknown_ptr) mc_template_k0quuujjqzsssztuqquuuuuuqqi_etw_write_transfer;
    
    // [McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f4c, 0x2be18 bytes
    // storport.sys .text:0xed5c, 0x440c8 bytes
    // storport.sys .text:0x2f4c, 0x2be18 bytes
    //
    _r30(sdk::unknown_ptr) mc_template_k0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33_etw_write_transfer;
    
    // [McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34f14, 0x2be18 bytes
    // storport.sys .text:0x410e4, 0x440c8 bytes
    // storport.sys .text:0x34f14, 0x2be18 bytes
    //
    _r31(sdk::unknown_ptr) mc_template_k0quuujjzssstqbr11qz_etw_write_transfer;
    
    // [McTemplateK0quuujqqqbr7_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c1f4, 0x2be18 bytes
    // storport.sys .text:0x58fc0, 0x440c8 bytes
    // storport.sys .text:0x4c1f4, 0x2be18 bytes
    //
    _r32(sdk::unknown_ptr) mc_template_k0quuujqqqbr7_etw_write_transfer;
    
    // [McTemplateK0quuupd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b848, 0x2be18 bytes
    // storport.sys .text:0x47530, 0x440c8 bytes
    // storport.sys .text:0x3b848, 0x2be18 bytes
    //
    _r33(sdk::unknown_ptr) mc_template_k0quuupd_etw_write_transfer;
    
    // [McTemplateK0quuupdudddd_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b908, 0x2be18 bytes
    // storport.sys .text:0x475f0, 0x440c8 bytes
    // storport.sys .text:0x3b908, 0x2be18 bytes
    //
    _r34(sdk::unknown_ptr) mc_template_k0quuupdudddd_etw_write_transfer;
    
    // [McTemplateK0quuuqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ba24, 0x2be18 bytes
    // storport.sys .text:0x4770c, 0x440c8 bytes
    // storport.sys .text:0x3ba24, 0x2be18 bytes
    //
    _r35(sdk::unknown_ptr) mc_template_k0quuuqqq_etw_write_transfer;
    
    // [McTemplateK0quuuqqtt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3baf0, 0x2be18 bytes
    // storport.sys .text:0x477d8, 0x440c8 bytes
    // storport.sys .text:0x3baf0, 0x2be18 bytes
    //
    _r36(sdk::unknown_ptr) mc_template_k0quuuqqtt_etw_write_transfer;
    
    // [McTemplateK0uuuuxqbr5uppxxx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c2e4, 0x2be18 bytes
    // storport.sys .text:0x590b0, 0x440c8 bytes
    // storport.sys .text:0x4c2e4, 0x2be18 bytes
    //
    _r37(sdk::unknown_ptr) mc_template_k0uuuuxqbr5uppxxx_etw_write_transfer;
    
    // [McTemplateK0xpuupuuuuuqxx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c424, 0x2be18 bytes
    // storport.sys .text:0x591f0, 0x440c8 bytes
    // storport.sys .text:0x4c424, 0x2be18 bytes
    //
    _r38(sdk::unknown_ptr) mc_template_k0xpuupuuuuuqxx_etw_write_transfer;
    
    // [McTemplateK0zdqqqqqqqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3541c, 0x2be18 bytes
    // storport.sys .text:0x41330, 0x440c8 bytes
    // storport.sys .text:0x3541c, 0x2be18 bytes
    //
    _r39(sdk::unknown_ptr) mc_template_k0zdqqqqqqqqq_etw_write_transfer;
    
    // [McTemplateK0zjquuujsss_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3bbcc, 0x2be18 bytes
    // storport.sys .text:0x478b4, 0x440c8 bytes
    // storport.sys .text:0x3bbcc, 0x2be18 bytes
    //
    _r40(sdk::unknown_ptr) mc_template_k0zjquuujsss_etw_write_transfer;
    
    // [McTemplateK0zjquuujssstq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3bd58, 0x2be18 bytes
    // storport.sys .text:0x47a40, 0x440c8 bytes
    // storport.sys .text:0x3bd58, 0x2be18 bytes
    //
    _r41(sdk::unknown_ptr) mc_template_k0zjquuujssstq_etw_write_transfer;
    
    // [McTemplateK0zqjqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17334, 0x2be18 bytes
    // storport.sys .text:0x1aa1c, 0x440c8 bytes
    // storport.sys .text:0x17334, 0x2be18 bytes
    //
    _r42(sdk::unknown_ptr) mc_template_k0zqjqq_etw_write_transfer;
    
    // [McTemplateK0zqjujssstq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43ca8, 0x2be18 bytes
    // storport.sys .text:0x4f6e4, 0x440c8 bytes
    // storport.sys .text:0x43ca8, 0x2be18 bytes
    //
    _r43(sdk::unknown_ptr) mc_template_k0zqjujssstq_etw_write_transfer;
    
    // [McTemplateK0zqjuuujsssq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43e3c, 0x2be18 bytes
    // storport.sys .text:0x4f878, 0x440c8 bytes
    // storport.sys .text:0x43e3c, 0x2be18 bytes
    //
    _r44(sdk::unknown_ptr) mc_template_k0zqjuuujsssq_etw_write_transfer;
    
    // [McTemplateK0zqjuuujsssqqbr11x_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c560, 0x2be18 bytes
    // storport.sys .text:0x5932c, 0x440c8 bytes
    // storport.sys .text:0x4c560, 0x2be18 bytes
    //
    _r45(sdk::unknown_ptr) mc_template_k0zqjuuujsssqqbr11x_etw_write_transfer;
    
    // [McTemplateK0zqjuuujssstqqbr12qt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c758, 0x2be18 bytes
    // storport.sys .text:0x59524, 0x440c8 bytes
    // storport.sys .text:0x4c758, 0x2be18 bytes
    //
    _r46(sdk::unknown_ptr) mc_template_k0zqjuuujssstqqbr12qt_etw_write_transfer;
    
    // [McTemplateK0zqjuuujssstsxx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43fe4, 0x2be18 bytes
    // storport.sys .text:0x12070, 0x440c8 bytes
    // storport.sys .text:0x43fe4, 0x2be18 bytes
    //
    _r47(sdk::unknown_ptr) mc_template_k0zqjuuujssstsxx_etw_write_transfer;
    
    // [McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4ef4c, 0x2be18 bytes
    // storport.sys .text:0x143f0, 0x440c8 bytes
    // storport.sys .text:0x4ef4c, 0x2be18 bytes
    //
    _r48(sdk::unknown_ptr) mc_template_k0zqjuuujssstxqquqiq_etw_write_transfer;
    
    // [McTemplateK0zqjuuujsssudxx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x441f8, 0x2be18 bytes
    // storport.sys .text:0x4fa20, 0x440c8 bytes
    // storport.sys .text:0x441f8, 0x2be18 bytes
    //
    _r49(sdk::unknown_ptr) mc_template_k0zqjuuujsssudxx_etw_write_transfer;
    
    // [McTemplateK0zqjuuujsssxxuxxqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4f194, 0x2be18 bytes
    // storport.sys .text:0x5d154, 0x440c8 bytes
    // storport.sys .text:0x4f194, 0x2be18 bytes
    //
    _r50(sdk::unknown_ptr) mc_template_k0zqjuuujsssxxuxxqqq_etw_write_transfer;
    
    // [McTemplateK0zqjuuujsssztt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x175c8, 0x2be18 bytes
    // storport.sys .text:0x1a814, 0x440c8 bytes
    // storport.sys .text:0x175c8, 0x2be18 bytes
    //
    _r51(sdk::unknown_ptr) mc_template_k0zqjuuujsssztt_etw_write_transfer;
    
    // [McTemplateK0zqjuuusssz_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17404, 0x2be18 bytes
    // storport.sys .text:0x1a650, 0x440c8 bytes
    // storport.sys .text:0x17404, 0x2be18 bytes
    //
    _r52(sdk::unknown_ptr) mc_template_k0zqjuuusssz_etw_write_transfer;
    
    // [McTemplateK0zqqqqi_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4b474, 0x2be18 bytes
    // storport.sys .text:0x57a70, 0x440c8 bytes
    // storport.sys .text:0x4b474, 0x2be18 bytes
    //
    _r53(sdk::unknown_ptr) mc_template_k0zqqqqi_etw_write_transfer;
    
    // [McTemplateK0zqqqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4b560, 0x2be18 bytes
    // storport.sys .text:0x57b5c, 0x440c8 bytes
    // storport.sys .text:0x4b560, 0x2be18 bytes
    //
    _r54(sdk::unknown_ptr) mc_template_k0zqqqqq_etw_write_transfer;
    
    // [McTemplateK0zqqqqqqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4b644, 0x2be18 bytes
    // storport.sys .text:0x57c40, 0x440c8 bytes
    // storport.sys .text:0x4b644, 0x2be18 bytes
    //
    _r55(sdk::unknown_ptr) mc_template_k0zqqqqqqq_etw_write_transfer;
    
    // [McTemplateK0zqquuuqpp_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28594, 0x2be18 bytes
    // storport.sys .text:0x322dc, 0x440c8 bytes
    // storport.sys .text:0x28594, 0x2be18 bytes
    //
    _r56(sdk::unknown_ptr) mc_template_k0zqquuuqpp_etw_write_transfer;
    
    // [McTemplateK0zquuujqqbr7_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4c98c, 0x2be18 bytes
    // storport.sys .text:0x59758, 0x440c8 bytes
    // storport.sys .text:0x4c98c, 0x2be18 bytes
    //
    _r57(sdk::unknown_ptr) mc_template_k0zquuujqqbr7_etw_write_transfer;
    
    // [McTemplateK0zquuuqqqt_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35574, 0x2be18 bytes
    // storport.sys .text:0x41488, 0x440c8 bytes
    // storport.sys .text:0x35574, 0x2be18 bytes
    //
    _r58(sdk::unknown_ptr) mc_template_k0zquuuqqqt_etw_write_transfer;
    
    // [McTemplateK0zx_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40468, 0x2be18 bytes
    // storport.sys .text:0x4bbd8, 0x440c8 bytes
    // storport.sys .text:0x40468, 0x2be18 bytes
    //
    _r59(sdk::unknown_ptr) mc_template_k0zx_etw_write_transfer;
    
    // [McTemplateK0zzdqq_EtwWriteTransfer]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34404, 0x2be18 bytes
    // storport.sys .text:0x40134, 0x440c8 bytes
    // storport.sys .text:0x34404, 0x2be18 bytes
    //
    _r60(sdk::unknown_ptr) mc_template_k0zzdqq_etw_write_transfer;
    
    // [PortGetBusyPauseTimeValue]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x79e34, 0x2be18 bytes
    // storport.sys PAGE:0x92180, 0x440c8 bytes
    // storport.sys PAGE:0x79e34, 0x2be18 bytes
    //
    _r61(sdk::unknown_ptr) port_get_busy_pause_time_value;
    
    // [PortGetBusyRetryCountValue]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x79f50, 0x2be18 bytes
    // storport.sys PAGE:0x92298, 0x440c8 bytes
    // storport.sys PAGE:0x79f50, 0x2be18 bytes
    //
    _r62(sdk::unknown_ptr) port_get_busy_retry_count_value;
    
    // [PortPassThroughBuildIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys PAGE:0x56000, 0x1b430 bytes
    // storport.sys PAGE:0x70008, 0x2be18 bytes
    // storport.sys PAGE:0x70008, 0x2be18 bytes
    //
    _r63(sdk::unknown_ptr) port_pass_through_build_irp;
    
    // [PortPassThroughFreeIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x12fc, 0x1b430 bytes
    // storport.sys .text:0x1e3c, 0x2be18 bytes
    // storport.sys .text:0x1e3c, 0x2be18 bytes
    //
    _r64(sdk::unknown_ptr) port_pass_through_free_irp;
    
    // [RaAttemptHighWaterMarkIncreasePassive]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4ba20, 0x2be18 bytes
    // storport.sys .text:0x20980, 0x440c8 bytes
    // storport.sys .text:0x4ba20, 0x2be18 bytes
    //
    _r65(sdk::unknown_ptr) ra_attempt_high_water_mark_increase_passive;
    
    // [RaBuildDsmRequestForLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41230, 0x2be18 bytes
    // storport.sys .text:0x4c630, 0x440c8 bytes
    // storport.sys .text:0x41230, 0x2be18 bytes
    //
    _r66(sdk::unknown_ptr) ra_build_dsm_request_for_led_state;
    
    // [RaBuildQueryBootLunsBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41608, 0x2be18 bytes
    // storport.sys .text:0x4c9e4, 0x440c8 bytes
    // storport.sys .text:0x41608, 0x2be18 bytes
    //
    _r67(sdk::unknown_ptr) ra_build_query_boot_luns_buffer_for_miniport;
    
    // [RaBuildQueryEnduranceInfoPropertyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x416b8, 0x2be18 bytes
    // storport.sys .text:0x4ca78, 0x440c8 bytes
    // storport.sys .text:0x416b8, 0x2be18 bytes
    //
    _r68(sdk::unknown_ptr) ra_build_query_endurance_info_property_buffer_for_miniport;
    
    // [RaBuildSetBootLunBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x419c0, 0x2be18 bytes
    // storport.sys .text:0x4cdac, 0x440c8 bytes
    // storport.sys .text:0x419c0, 0x2be18 bytes
    //
    _r69(sdk::unknown_ptr) ra_build_set_boot_lun_buffer_for_miniport;
    
    // [RaBuildSetProtocolSpecificPropertyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41ab4, 0x2be18 bytes
    // storport.sys .text:0x4ce8c, 0x440c8 bytes
    // storport.sys .text:0x41ab4, 0x2be18 bytes
    //
    _r70(sdk::unknown_ptr) ra_build_set_protocol_specific_property_buffer_for_miniport;
    
    // [RaDsmLedStatusToNtStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41ccc, 0x2be18 bytes
    // storport.sys .text:0x4d218, 0x440c8 bytes
    // storport.sys .text:0x41ccc, 0x2be18 bytes
    //
    _r71(sdk::unknown_ptr) ra_dsm_led_status_to_nt_status;
    
    // [RaFlushDFxQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31e34, 0x2be18 bytes
    // storport.sys .text:0x3ccb8, 0x440c8 bytes
    // storport.sys .text:0x31e34, 0x2be18 bytes
    //
    _r72(sdk::unknown_ptr) ra_flush_d_fx_queue;
    
    // [RaInsertDFxQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31ec4, 0x2be18 bytes
    // storport.sys .text:0x3cd48, 0x440c8 bytes
    // storport.sys .text:0x31ec4, 0x2be18 bytes
    //
    _r73(sdk::unknown_ptr) ra_insert_d_fx_queue;
    
    // [RaIsDeviceDFxPoweredDown]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc568, 0x2be18 bytes
    // storport.sys .text:0xa3a4, 0x440c8 bytes
    // storport.sys .text:0xc568, 0x2be18 bytes
    //
    _r74(sdk::unknown_ptr) ra_is_device_d_fx_powered_down;
    
    // [RaMiniportSaveFeatureList]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34ae4, 0x2be18 bytes
    // storport.sys .text:0x40818, 0x440c8 bytes
    // storport.sys .text:0x34ae4, 0x2be18 bytes
    //
    _r75(sdk::unknown_ptr) ra_miniport_save_feature_list;
    
    // [RaProcessDFxPendingIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31fe0, 0x2be18 bytes
    // storport.sys .text:0x3ce64, 0x440c8 bytes
    // storport.sys .text:0x31fe0, 0x2be18 bytes
    //
    _r76(sdk::unknown_ptr) ra_process_d_fx_pending_irp;
    
    // [RaProcessDFxQueuedRequests]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32070, 0x2be18 bytes
    // storport.sys .text:0x3cef0, 0x440c8 bytes
    // storport.sys .text:0x32070, 0x2be18 bytes
    //
    _r77(sdk::unknown_ptr) ra_process_d_fx_queued_requests;
    
    // [RaTranslateMiniportQueryBootLunsToHwQueryBootLuns]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42118, 0x2be18 bytes
    // storport.sys .text:0x4d49c, 0x440c8 bytes
    // storport.sys .text:0x42118, 0x2be18 bytes
    //
    _r78(sdk::unknown_ptr) ra_translate_miniport_query_boot_luns_to_hw_query_boot_luns;
    
    // [RaUnitBuildSrbForSmartReadData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x44900, 0x2be18 bytes
    // storport.sys .text:0x503a4, 0x440c8 bytes
    // storport.sys .text:0x44900, 0x2be18 bytes
    //
    _r79(sdk::unknown_ptr) ra_unit_build_srb_for_smart_read_data;
    
    // [RaUnitBuildSrbForSmartReturnStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x44b48, 0x2be18 bytes
    // storport.sys .text:0x5062c, 0x440c8 bytes
    // storport.sys .text:0x44b48, 0x2be18 bytes
    //
    _r80(sdk::unknown_ptr) ra_unit_build_srb_for_smart_return_status;
    
    // [RaUnitIsSMRDisabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13240, 0x2be18 bytes
    // storport.sys .text:0x1a20c, 0x440c8 bytes
    // storport.sys .text:0x13240, 0x2be18 bytes
    //
    _r81(sdk::unknown_ptr) ra_unit_is_smr_disabled;
    
    // [RaUnitSmartDataIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x45de8, 0x2be18 bytes
    // storport.sys .text:0x51d8c, 0x440c8 bytes
    // storport.sys .text:0x45de8, 0x2be18 bytes
    //
    _r82(sdk::unknown_ptr) ra_unit_smart_data_ioctl;
    
    // [RaUnitSmartReturnStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x46340, 0x2be18 bytes
    // storport.sys .text:0x522b0, 0x440c8 bytes
    // storport.sys .text:0x46340, 0x2be18 bytes
    //
    _r83(sdk::unknown_ptr) ra_unit_smart_return_status;
    
    // [RaUnitStorageDumpControl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x790e0, 0x2be18 bytes
    // storport.sys PAGE:0x85200, 0x440c8 bytes
    // storport.sys PAGE:0x790e0, 0x2be18 bytes
    //
    _r84(sdk::unknown_ptr) ra_unit_storage_dump_control;
    
    // [RaUnitStorageDumpNotification]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x79170, 0x2be18 bytes
    // storport.sys PAGE:0x85dd0, 0x440c8 bytes
    // storport.sys PAGE:0x79170, 0x2be18 bytes
    //
    _r85(sdk::unknown_ptr) ra_unit_storage_dump_notification;
    
    // [RaUnitStorageFreeDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x469a8, 0x2be18 bytes
    // storport.sys .text:0x134b4, 0x440c8 bytes
    // storport.sys .text:0x469a8, 0x2be18 bytes
    //
    _r86(sdk::unknown_ptr) ra_unit_storage_free_dump_info;
    
    // [RaUnitStorageGetDumpInfoIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x791ec, 0x2be18 bytes
    // storport.sys PAGE:0x85074, 0x440c8 bytes
    // storport.sys PAGE:0x791ec, 0x2be18 bytes
    //
    _r87(sdk::unknown_ptr) ra_unit_storage_get_dump_info_ioctl;
    
    // [RaUnitStorageQueryDeviceEndurancePropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x46b60, 0x2be18 bytes
    // storport.sys .text:0x52a00, 0x440c8 bytes
    // storport.sys .text:0x46b60, 0x2be18 bytes
    //
    _r88(sdk::unknown_ptr) ra_unit_storage_query_device_endurance_property_ioctl;
    
    // [RaUnitStorageQueryDeviceNumaPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x46cc4, 0x2be18 bytes
    // storport.sys .text:0xc898, 0x440c8 bytes
    // storport.sys .text:0x46cc4, 0x2be18 bytes
    //
    _r89(sdk::unknown_ptr) ra_unit_storage_query_device_numa_property_ioctl;
    
    // [RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x47200, 0x2be18 bytes
    // storport.sys .text:0x53178, 0x440c8 bytes
    // storport.sys .text:0x47200, 0x2be18 bytes
    //
    _r90(sdk::unknown_ptr) ra_unit_storage_set_device_protocol_specific_property_ioctl;
    
    // [RaUnitStorageSetPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x47358, 0x2be18 bytes
    // storport.sys PAGE:0x8f380, 0x440c8 bytes
    // storport.sys .text:0x47358, 0x2be18 bytes
    //
    _r91(sdk::unknown_ptr) ra_unit_storage_set_property_ioctl;
    
    // [RaUnitStreamsIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19220, 0x2be18 bytes
    // storport.sys .text:0x1d004, 0x440c8 bytes
    // storport.sys .text:0x19220, 0x2be18 bytes
    //
    _r92(sdk::unknown_ptr) ra_unit_streams_ioctl;
    
    // [RaidAdapterAcquireCryptoKeyResources]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28cdc, 0x2be18 bytes
    // storport.sys .text:0x32a20, 0x440c8 bytes
    // storport.sys .text:0x28cdc, 0x2be18 bytes
    //
    _r93(sdk::unknown_ptr) raid_adapter_acquire_crypto_key_resources;
    
    // [RaidAdapterCancelWaitWakeIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3c218, 0x2be18 bytes
    // storport.sys .text:0x47fe0, 0x440c8 bytes
    // storport.sys .text:0x3c218, 0x2be18 bytes
    //
    _r94(sdk::unknown_ptr) raid_adapter_cancel_wait_wake_irp;
    
    // [RaidAdapterClearCryptoKeyTable]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2957c, 0x2be18 bytes
    // storport.sys .text:0x32ecc, 0x440c8 bytes
    // storport.sys .text:0x2957c, 0x2be18 bytes
    //
    _r95(sdk::unknown_ptr) raid_adapter_clear_crypto_key_table;
    
    // [RaidAdapterCreateDriverInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x750fc, 0x2be18 bytes
    // storport.sys PAGE:0x84b20, 0x440c8 bytes
    // storport.sys PAGE:0x750fc, 0x2be18 bytes
    //
    _r96(sdk::unknown_ptr) raid_adapter_create_driver_info;
    
    // [RaidAdapterCreateDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x75388, 0x2be18 bytes
    // storport.sys PAGE:0x84d0c, 0x440c8 bytes
    // storport.sys PAGE:0x75388, 0x2be18 bytes
    //
    _r97(sdk::unknown_ptr) raid_adapter_create_dump_info;
    
    // [RaidAdapterDeviceReset]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29f4c, 0x2be18 bytes
    // storport.sys .text:0x33b04, 0x440c8 bytes
    // storport.sys .text:0x29f4c, 0x2be18 bytes
    //
    _r98(sdk::unknown_ptr) raid_adapter_device_reset;
    
    // [RaidAdapterDiagnosticIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x757c4, 0x2be18 bytes
    // storport.sys PAGE:0x8b76c, 0x440c8 bytes
    // storport.sys PAGE:0x757c4, 0x2be18 bytes
    //
    _r99(sdk::unknown_ptr) raid_adapter_diagnostic_ioctl;
    
    // [RaidAdapterDisableNonPoFxMiniportInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a1d8, 0x2be18 bytes
    // storport.sys .text:0x33dc0, 0x440c8 bytes
    // storport.sys .text:0x2a1d8, 0x2be18 bytes
    //
    _s00(sdk::unknown_ptr) raid_adapter_disable_non_po_fx_miniport_interface;
    
    // [RaidAdapterFindUnitByIdentifier]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a350, 0x2be18 bytes
    // storport.sys .text:0x33fc8, 0x440c8 bytes
    // storport.sys .text:0x2a350, 0x2be18 bytes
    //
    _s01(sdk::unknown_ptr) raid_adapter_find_unit_by_identifier;
    
    // [RaidAdapterFreeDriverInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a3fc, 0x2be18 bytes
    // storport.sys .text:0x136a8, 0x440c8 bytes
    // storport.sys .text:0x2a3fc, 0x2be18 bytes
    //
    _s02(sdk::unknown_ptr) raid_adapter_free_driver_info;
    
    // [RaidAdapterFreeDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a4e4, 0x2be18 bytes
    // storport.sys .text:0x13780, 0x440c8 bytes
    // storport.sys .text:0x2a4e4, 0x2be18 bytes
    //
    _s03(sdk::unknown_ptr) raid_adapter_free_dump_info;
    
    // [RaidAdapterFreeMiniportDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x76074, 0x2be18 bytes
    // storport.sys PAGE:0x85654, 0x440c8 bytes
    // storport.sys PAGE:0x76074, 0x2be18 bytes
    //
    _s04(sdk::unknown_ptr) raid_adapter_free_miniport_dump_info;
    
    // [RaidAdapterGetCryptoKeyIndex]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a558, 0x2be18 bytes
    // storport.sys .text:0x34074, 0x440c8 bytes
    // storport.sys .text:0x2a558, 0x2be18 bytes
    //
    _s05(sdk::unknown_ptr) raid_adapter_get_crypto_key_index;
    
    // [RaidAdapterGetFirstUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a5e8, 0x2be18 bytes
    // storport.sys .text:0x34104, 0x440c8 bytes
    // storport.sys .text:0x2a5e8, 0x2be18 bytes
    //
    _s06(sdk::unknown_ptr) raid_adapter_get_first_unit;
    
    // [RaidAdapterGetMiniportDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x76388, 0x2be18 bytes
    // storport.sys PAGE:0x85330, 0x440c8 bytes
    // storport.sys PAGE:0x76388, 0x2be18 bytes
    //
    _s07(sdk::unknown_ptr) raid_adapter_get_miniport_dump_info;
    
    // [RaidAdapterPopulateMiniportDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x7686c, 0x2be18 bytes
    // storport.sys PAGE:0x85290, 0x440c8 bytes
    // storport.sys PAGE:0x7686c, 0x2be18 bytes
    //
    _s08(sdk::unknown_ptr) raid_adapter_populate_miniport_dump_info;
    
    // [RaidAdapterProgramCryptoKeyRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b110, 0x2be18 bytes
    // storport.sys .text:0x34e80, 0x440c8 bytes
    // storport.sys .text:0x2b110, 0x2be18 bytes
    //
    _s09(sdk::unknown_ptr) raid_adapter_program_crypto_key_routine;
    
    // [RaidAdapterQueryBootLunsIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b330, 0x2be18 bytes
    // storport.sys .text:0x350a0, 0x440c8 bytes
    // storport.sys .text:0x2b330, 0x2be18 bytes
    //
    _s10(sdk::unknown_ptr) raid_adapter_query_boot_luns_ioctl;
    
    // [RaidAdapterRegisterNonPoFxMiniportInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b780, 0x2be18 bytes
    // storport.sys .text:0x35718, 0x440c8 bytes
    // storport.sys .text:0x2b780, 0x2be18 bytes
    //
    _s11(sdk::unknown_ptr) raid_adapter_register_non_po_fx_miniport_interface;
    
    // [RaidAdapterRegisterRpmbInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b7e4, 0x2be18 bytes
    // storport.sys .text:0x3577c, 0x440c8 bytes
    // storport.sys .text:0x2b7e4, 0x2be18 bytes
    //
    _s12(sdk::unknown_ptr) raid_adapter_register_rpmb_interface;
    
    // [RaidAdapterReleaseCryptoKeyResources]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b85c, 0x2be18 bytes
    // storport.sys .text:0x357f4, 0x440c8 bytes
    // storport.sys .text:0x2b85c, 0x2be18 bytes
    //
    _s13(sdk::unknown_ptr) raid_adapter_release_crypto_key_resources;
    
    // [RaidAdapterReleaseStartIoLock]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc4c4, 0x2be18 bytes
    // storport.sys .text:0xa970, 0x440c8 bytes
    // storport.sys .text:0xc4c4, 0x2be18 bytes
    //
    _s14(sdk::unknown_ptr) raid_adapter_release_start_io_lock;
    
    // [RaidAdapterResumeUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe264, 0x2be18 bytes
    // storport.sys .text:0x2958, 0x440c8 bytes
    // storport.sys .text:0xe264, 0x2be18 bytes
    //
    _s15(sdk::unknown_ptr) raid_adapter_resume_unit;
    
    // [RaidAdapterScsiGetAddressIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c364, 0x2be18 bytes
    // storport.sys .text:0x361d0, 0x440c8 bytes
    // storport.sys .text:0x2c364, 0x2be18 bytes
    //
    _s16(sdk::unknown_ptr) raid_adapter_scsi_get_address_ioctl;
    
    // [RaidAdapterSendCryptoOperationSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c730, 0x2be18 bytes
    // storport.sys .text:0x3658c, 0x440c8 bytes
    // storport.sys .text:0x2c730, 0x2be18 bytes
    //
    _s17(sdk::unknown_ptr) raid_adapter_send_crypto_operation_synchronously;
    
    // [RaidAdapterSendPoFxActiveToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x185d0, 0x1b430 bytes
    // storport.sys .text:0x3c398, 0x2be18 bytes
    // storport.sys .text:0x3c398, 0x2be18 bytes
    //
    _s18(sdk::unknown_ptr) raid_adapter_send_po_fx_active_to_miniport;
    
    // [RaidAdapterSetBootLunIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d1b8, 0x2be18 bytes
    // storport.sys .text:0x37004, 0x440c8 bytes
    // storport.sys .text:0x2d1b8, 0x2be18 bytes
    //
    _s19(sdk::unknown_ptr) raid_adapter_set_boot_lun_ioctl;
    
    // [RaidAdapterSetLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d294, 0x2be18 bytes
    // storport.sys .text:0x370e0, 0x440c8 bytes
    // storport.sys .text:0x2d294, 0x2be18 bytes
    //
    _s20(sdk::unknown_ptr) raid_adapter_set_led_state;
    
    // [RaidAdapterStartDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d3ac, 0x2be18 bytes
    // storport.sys .text:0x3723c, 0x440c8 bytes
    // storport.sys .text:0x2d3ac, 0x2be18 bytes
    //
    _s21(sdk::unknown_ptr) raid_adapter_start_device;
    
    // [RaidAdapterStorageDeviceResetIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dd3c, 0x2be18 bytes
    // storport.sys .text:0x37dc8, 0x440c8 bytes
    // storport.sys .text:0x2dd3c, 0x2be18 bytes
    //
    _s22(sdk::unknown_ptr) raid_adapter_storage_device_reset_ioctl;
    
    // [RaidAdapterStorageResetBusIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dd80, 0x2be18 bytes
    // storport.sys .text:0x380b8, 0x440c8 bytes
    // storport.sys .text:0x2dd80, 0x2be18 bytes
    //
    _s23(sdk::unknown_ptr) raid_adapter_storage_reset_bus_ioctl;
    
    // [RaidAdapterStorageSetPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ddc4, 0x2be18 bytes
    // storport.sys .text:0x380fc, 0x440c8 bytes
    // storport.sys .text:0x2ddc4, 0x2be18 bytes
    //
    _s24(sdk::unknown_ptr) raid_adapter_storage_set_property_ioctl;
    
    // [RaidAddATADeviceIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32c44, 0x2be18 bytes
    // storport.sys .text:0x3e5e4, 0x440c8 bytes
    // storport.sys .text:0x32c44, 0x2be18 bytes
    //
    _s25(sdk::unknown_ptr) raid_add_ata_device_id_mapping;
    
    // [RaidAddEnclosureIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32d80, 0x2be18 bytes
    // storport.sys .text:0x3e700, 0x440c8 bytes
    // storport.sys .text:0x32d80, 0x2be18 bytes
    //
    _s26(sdk::unknown_ptr) raid_add_enclosure_id_mapping;
    
    // [RaidAreDriversDmarCompatible]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x317d8, 0x2be18 bytes
    // storport.sys .text:0x3c654, 0x440c8 bytes
    // storport.sys .text:0x317d8, 0x2be18 bytes
    //
    _s27(sdk::unknown_ptr) raid_are_drivers_dmar_compatible;
    
    // [RaidBuildMdlAndLockPagesForXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19ac0, 0x2be18 bytes
    // storport.sys .text:0x1e420, 0x440c8 bytes
    // storport.sys .text:0x19ac0, 0x2be18 bytes
    //
    _s28(sdk::unknown_ptr) raid_build_mdl_and_lock_pages_for_xrb;
    
    // [RaidBusEnumeratorProcessBlockDeviceCharacteristics]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x311e0, 0x2be18 bytes
    // storport.sys .text:0x3c010, 0x440c8 bytes
    // storport.sys .text:0x311e0, 0x2be18 bytes
    //
    _s29(sdk::unknown_ptr) raid_bus_enumerator_process_block_device_characteristics;
    
    // [RaidCheckATADeviceIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32f30, 0x2be18 bytes
    // storport.sys .text:0x3e86c, 0x440c8 bytes
    // storport.sys .text:0x32f30, 0x2be18 bytes
    //
    _s30(sdk::unknown_ptr) raid_check_ata_device_id_mapping;
    
    // [RaidCheckEnclosureIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32fac, 0x2be18 bytes
    // storport.sys .text:0x3e8e8, 0x440c8 bytes
    // storport.sys .text:0x32fac, 0x2be18 bytes
    //
    _s31(sdk::unknown_ptr) raid_check_enclosure_id_mapping;
    
    // [RaidDmaAllocateUncachedExtension]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31860, 0x2be18 bytes
    // storport.sys .text:0x3c6dc, 0x440c8 bytes
    // storport.sys .text:0x31860, 0x2be18 bytes
    //
    _s32(sdk::unknown_ptr) raid_dma_allocate_uncached_extension;
    
    // [RaidDmaFlushDmaBuffers]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19df4, 0x2be18 bytes
    // storport.sys .text:0x3b94, 0x440c8 bytes
    // storport.sys .text:0x19df4, 0x2be18 bytes
    //
    _s33(sdk::unknown_ptr) raid_dma_flush_dma_buffers;
    
    // [RaidDsmGetLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42698, 0x2be18 bytes
    // storport.sys .text:0x4dcc8, 0x440c8 bytes
    // storport.sys .text:0x42698, 0x2be18 bytes
    //
    _s34(sdk::unknown_ptr) raid_dsm_get_led_state;
    
    // [RaidDsmGetSupportedLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42750, 0x2be18 bytes
    // storport.sys .text:0x4dd80, 0x440c8 bytes
    // storport.sys .text:0x42750, 0x2be18 bytes
    //
    _s35(sdk::unknown_ptr) raid_dsm_get_supported_led_state;
    
    // [RaidDsmQuerySupportedFunctionForLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42818, 0x2be18 bytes
    // storport.sys .text:0x4de48, 0x440c8 bytes
    // storport.sys .text:0x42818, 0x2be18 bytes
    //
    _s36(sdk::unknown_ptr) raid_dsm_query_supported_function_for_led_state;
    
    // [RaidDsmSetLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x428d0, 0x2be18 bytes
    // storport.sys .text:0x4df00, 0x440c8 bytes
    // storport.sys .text:0x428d0, 0x2be18 bytes
    //
    _s37(sdk::unknown_ptr) raid_dsm_set_led_state;
    
    // [RaidEnumBlockDeviceCharacteristics]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x59470, 0x2be18 bytes
    // storport.sys .rdata:0x69470, 0x440c8 bytes
    // storport.sys .rdata:0x59470, 0x2be18 bytes
    //
    _s38(sdk::unknown_ptr) raid_enum_block_device_characteristics;
    
    // [RaidEvaluateDsmLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4293c, 0x2be18 bytes
    // storport.sys .text:0x4df6c, 0x440c8 bytes
    // storport.sys .text:0x4293c, 0x2be18 bytes
    //
    _s39(sdk::unknown_ptr) raid_evaluate_dsm_led_state;
    
    // [RaidFreeRemappedScatterGatherListMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4b180, 0x2be18 bytes
    // storport.sys .text:0x578fc, 0x440c8 bytes
    // storport.sys .text:0x4b180, 0x2be18 bytes
    //
    _s40(sdk::unknown_ptr) raid_free_remapped_scatter_gather_list_mdl;
    
    // [RaidGetIoStartingLbaAndLength]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4f3d0, 0x2be18 bytes
    // storport.sys .text:0x5d390, 0x440c8 bytes
    // storport.sys .text:0x4f3d0, 0x2be18 bytes
    //
    _s41(sdk::unknown_ptr) raid_get_io_starting_lba_and_length;
    
    // [RaidGetNpemControlInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42a7c, 0x2be18 bytes
    // storport.sys .text:0x4e0ac, 0x440c8 bytes
    // storport.sys .text:0x42a7c, 0x2be18 bytes
    //
    _s42(sdk::unknown_ptr) raid_get_npem_control_interface;
    
    // [RaidGetResetInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42b64, 0x2be18 bytes
    // storport.sys .text:0x4e190, 0x440c8 bytes
    // storport.sys .text:0x42b64, 0x2be18 bytes
    //
    _s43(sdk::unknown_ptr) raid_get_reset_interface;
    
    // [RaidGetStorageAdapterCryptoProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2eb34, 0x2be18 bytes
    // storport.sys .text:0x38f64, 0x440c8 bytes
    // storport.sys .text:0x2eb34, 0x2be18 bytes
    //
    _s44(sdk::unknown_ptr) raid_get_storage_adapter_crypto_property;
    
    // [RaidInitializeCryptoEngine]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ef58, 0x2be18 bytes
    // storport.sys .text:0x3946c, 0x440c8 bytes
    // storport.sys .text:0x2ef58, 0x2be18 bytes
    //
    _s45(sdk::unknown_ptr) raid_initialize_crypto_engine;
    
    // [RaidLoadATADeviceIdMappings]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33020, 0x2be18 bytes
    // storport.sys .text:0x3e95c, 0x440c8 bytes
    // storport.sys .text:0x33020, 0x2be18 bytes
    //
    _s46(sdk::unknown_ptr) raid_load_ata_device_id_mappings;
    
    // [RaidLoadEnclosureIdMappings]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3323c, 0x2be18 bytes
    // storport.sys .text:0x3eb6c, 0x440c8 bytes
    // storport.sys .text:0x3323c, 0x2be18 bytes
    //
    _s47(sdk::unknown_ptr) raid_load_enclosure_id_mappings;
    
    // [RaidLockUnitQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x19dbc, 0x1b430 bytes
    // storport.sys .text:0x31390, 0x2be18 bytes
    // storport.sys .text:0x31390, 0x2be18 bytes
    //
    _s48(sdk::unknown_ptr) raid_lock_unit_queue;
    
    // [RaidNotifyPoAboutAdaptiveD3Engagement]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x56938, 0x2be18 bytes
    // storport.sys .text:0x64cac, 0x440c8 bytes
    // storport.sys .text:0x56938, 0x2be18 bytes
    //
    _s49(sdk::unknown_ptr) raid_notify_po_about_adaptive_d3_engagement;
    
    // [RaidNotifyPoAboutSpecialDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x569a0, 0x2be18 bytes
    // storport.sys .text:0x64d14, 0x440c8 bytes
    // storport.sys .text:0x569a0, 0x2be18 bytes
    //
    _s50(sdk::unknown_ptr) raid_notify_po_about_special_device;
    
    // [RaidPnPAsyncStartComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x301f0, 0x2be18 bytes
    // storport.sys .text:0x3a720, 0x440c8 bytes
    // storport.sys .text:0x301f0, 0x2be18 bytes
    //
    _s51(sdk::unknown_ptr) raid_pn_p_async_start_complete;
    
    // [RaidPnPAsyncStartCompleteWorker]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30240, 0x2be18 bytes
    // storport.sys .text:0x3a770, 0x440c8 bytes
    // storport.sys .text:0x30240, 0x2be18 bytes
    //
    _s52(sdk::unknown_ptr) raid_pn_p_async_start_complete_worker;
    
    // [RaidQosSupportedCommand]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x2c580, 0x1b430 bytes
    // storport.sys .text:0x340a4, 0x2be18 bytes
    // storport.sys .text:0x340a4, 0x2be18 bytes
    //
    _s53(sdk::unknown_ptr) raid_qos_supported_command;
    
    // [RaidQueryAcpiDsdStorageD3Property]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42de0, 0x2be18 bytes
    // storport.sys .text:0x4e464, 0x440c8 bytes
    // storport.sys .text:0x42de0, 0x2be18 bytes
    //
    _s54(sdk::unknown_ptr) raid_query_acpi_dsd_storage_d3_property;
    
    // [RaidQueryAcpiDsdSynchronous]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42eb4, 0x2be18 bytes
    // storport.sys .text:0x4e538, 0x440c8 bytes
    // storport.sys .text:0x42eb4, 0x2be18 bytes
    //
    _s55(sdk::unknown_ptr) raid_query_acpi_dsd_synchronous;
    
    // [RaidQueryNpemControlInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43044, 0x2be18 bytes
    // storport.sys .text:0x4e830, 0x440c8 bytes
    // storport.sys .text:0x43044, 0x2be18 bytes
    //
    _s56(sdk::unknown_ptr) raid_query_npem_control_interface;
    
    // [RaidQueryResetInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43154, 0x2be18 bytes
    // storport.sys .text:0x4e998, 0x440c8 bytes
    // storport.sys .text:0x43154, 0x2be18 bytes
    //
    _s57(sdk::unknown_ptr) raid_query_reset_interface;
    
    // [RaidRecordPassthroughData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3065c, 0x2be18 bytes
    // storport.sys .text:0x1de58, 0x440c8 bytes
    // storport.sys .text:0x3065c, 0x2be18 bytes
    //
    _s58(sdk::unknown_ptr) raid_record_passthrough_data;
    
    // [RaidRemovePendingDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x2c090, 0x1b430 bytes
    // storport.sys .text:0x16ed0, 0x2be18 bytes
    // storport.sys .text:0x16ed0, 0x2be18 bytes
    //
    _s59(sdk::unknown_ptr) raid_remove_pending_device_queue;
    
    // [RaidSaveATADeviceIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x334d8, 0x2be18 bytes
    // storport.sys .text:0x3edfc, 0x440c8 bytes
    // storport.sys .text:0x334d8, 0x2be18 bytes
    //
    _s60(sdk::unknown_ptr) raid_save_ata_device_id_mapping;
    
    // [RaidSaveEnclosureIdMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3361c, 0x2be18 bytes
    // storport.sys .text:0x3ef44, 0x440c8 bytes
    // storport.sys .text:0x3361c, 0x2be18 bytes
    //
    _s61(sdk::unknown_ptr) raid_save_enclosure_id_mapping;
    
    // [RaidSetLedStateByAcpiDsm]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x432dc, 0x2be18 bytes
    // storport.sys .text:0x4eb28, 0x440c8 bytes
    // storport.sys .text:0x432dc, 0x2be18 bytes
    //
    _s62(sdk::unknown_ptr) raid_set_led_state_by_acpi_dsm;
    
    // [RaidSetLedStateByNpem]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x433d8, 0x2be18 bytes
    // storport.sys .text:0x4ec24, 0x440c8 bytes
    // storport.sys .text:0x433d8, 0x2be18 bytes
    //
    _s63(sdk::unknown_ptr) raid_set_led_state_by_npem;
    
    // [RaidSetStorageAdapterProtocolSpecificProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30774, 0x2be18 bytes
    // storport.sys .text:0x3ad28, 0x440c8 bytes
    // storport.sys .text:0x30774, 0x2be18 bytes
    //
    _s64(sdk::unknown_ptr) raid_set_storage_adapter_protocol_specific_property;
    
    // [RaidUnitCreateDumpData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x7963c, 0x2be18 bytes
    // storport.sys PAGE:0x84990, 0x440c8 bytes
    // storport.sys PAGE:0x7963c, 0x2be18 bytes
    //
    _s65(sdk::unknown_ptr) raid_unit_create_dump_data;
    
    // [RaidUnitCreateDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x7977c, 0x2be18 bytes
    // storport.sys PAGE:0x84a58, 0x440c8 bytes
    // storport.sys PAGE:0x7977c, 0x2be18 bytes
    //
    _s66(sdk::unknown_ptr) raid_unit_create_dump_info;
    
    // [RaidUnitDeviceHealthTelemetrySupported]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xcb04, 0x2be18 bytes
    // storport.sys .text:0x3604, 0x440c8 bytes
    // storport.sys .text:0xcb04, 0x2be18 bytes
    //
    _s67(sdk::unknown_ptr) raid_unit_device_health_telemetry_supported;
    
    // [RaidUnitFreeDumpInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x48150, 0x2be18 bytes
    // storport.sys .text:0x13658, 0x440c8 bytes
    // storport.sys .text:0x48150, 0x2be18 bytes
    //
    _s68(sdk::unknown_ptr) raid_unit_free_dump_info;
    
    // [RaidUnitHandleSpecialErrorConditions]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc13c, 0x2be18 bytes
    // storport.sys .text:0xaf40, 0x440c8 bytes
    // storport.sys .text:0xc13c, 0x2be18 bytes
    //
    _s69(sdk::unknown_ptr) raid_unit_handle_special_error_conditions;
    
    // [RaidUnitIdentityUpdateWorkRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x37180, 0x1b430 bytes
    // storport.sys .text:0x48650, 0x2be18 bytes
    // storport.sys .text:0x48650, 0x2be18 bytes
    //
    _s70(sdk::unknown_ptr) raid_unit_identity_update_work_routine;
    
    // [RaidUnitSetLedState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x499bc, 0x2be18 bytes
    // storport.sys .text:0x55698, 0x440c8 bytes
    // storport.sys .text:0x499bc, 0x2be18 bytes
    //
    _s71(sdk::unknown_ptr) raid_unit_set_led_state;
    
    // [RaidUnlockUnitQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x98a4, 0x1b430 bytes
    // storport.sys .text:0xea48, 0x2be18 bytes
    // storport.sys .text:0xea48, 0x2be18 bytes
    //
    _s72(sdk::unknown_ptr) raid_unlock_unit_queue;
    
    // [RaidUpdateZoneIoReceiveWithStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32690, 0x2be18 bytes
    // storport.sys .text:0x3da98, 0x440c8 bytes
    // storport.sys .text:0x32690, 0x2be18 bytes
    //
    _s73(sdk::unknown_ptr) raid_update_zone_io_receive_with_status;
    
    // [RaidUpdateZoneIoSubmission]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x328c4, 0x2be18 bytes
    // storport.sys .text:0x3dcb8, 0x440c8 bytes
    // storport.sys .text:0x328c4, 0x2be18 bytes
    //
    _s74(sdk::unknown_ptr) raid_update_zone_io_submission;
    
    // [RaidpAdapterEnumerateUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xea60, 0x2be18 bytes
    // storport.sys .text:0x11fe0, 0x440c8 bytes
    // storport.sys .text:0xea60, 0x2be18 bytes
    //
    _s75(sdk::unknown_ptr) raidp_adapter_enumerate_unit;
    
    // [RaidpIsControlledUpdateOSEnvironment]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4add4, 0x2be18 bytes
    // storport.sys .text:0x5754c, 0x440c8 bytes
    // storport.sys .text:0x4add4, 0x2be18 bytes
    //
    _s76(sdk::unknown_ptr) raidp_is_controlled_update_os_environment;
    
    // [RaidpIsControlledWinPEEnvironment]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4afb8, 0x2be18 bytes
    // storport.sys .text:0x57730, 0x440c8 bytes
    // storport.sys .text:0x4afb8, 0x2be18 bytes
    //
    _s77(sdk::unknown_ptr) raidp_is_controlled_win_pe_environment;
    
    // [ReplaceDeviceId]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x56150, 0x2be18 bytes
    // storport.sys .text:0x64740, 0x440c8 bytes
    // storport.sys .text:0x56150, 0x2be18 bytes
    //
    _s78(sdk::unknown_ptr) replace_device_id;
    
    // [RiIsDeviceQueueBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb420, 0x2be18 bytes
    // storport.sys .text:0xa4a0, 0x440c8 bytes
    // storport.sys .text:0xb420, 0x2be18 bytes
    //
    _s79(sdk::unknown_ptr) ri_is_device_queue_busy;
    
    // [StorCreateIoGateway]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x1595c, 0x1b430 bytes
    // storport.sys .text:0x4bf1c, 0x2be18 bytes
    // storport.sys .text:0x4bf1c, 0x2be18 bytes
    //
    _s80(sdk::unknown_ptr) stor_create_io_gateway;
    
    // [StorDumpAdapterPowerOn]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d8e0, 0x2be18 bytes
    // storport.sys .text:0x49b20, 0x440c8 bytes
    // storport.sys .text:0x3d8e0, 0x2be18 bytes
    //
    _s81(sdk::unknown_ptr) stor_dump_adapter_power_on;
    
    // [StorDumpDiskPowerOn]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3da70, 0x2be18 bytes
    // storport.sys .text:0x49cb0, 0x440c8 bytes
    // storport.sys .text:0x3da70, 0x2be18 bytes
    //
    _s82(sdk::unknown_ptr) stor_dump_disk_power_on;
    
    // [StorEnablePassiveInitialization]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35ecc, 0x2be18 bytes
    // storport.sys .text:0x41bd8, 0x440c8 bytes
    // storport.sys .text:0x35ecc, 0x2be18 bytes
    //
    _s83(sdk::unknown_ptr) stor_enable_passive_initialization;
    
    // [StorEtwEnableCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4cb48, 0x2be18 bytes
    // storport.sys .text:0x59b5c, 0x440c8 bytes
    // storport.sys .text:0x4cb48, 0x2be18 bytes
    //
    _s84(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*) stor_etw_enable_callback;
    
    // [StorEtwMiniportGetKeyword]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4e758, 0x2be18 bytes
    // storport.sys .text:0x16090, 0x440c8 bytes
    // storport.sys .text:0x4e758, 0x2be18 bytes
    //
    _s85(sdk::unknown_ptr) stor_etw_miniport_get_keyword;
    
    // [StorEtwMiniportLogError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36070, 0x2be18 bytes
    // storport.sys .text:0x41c40, 0x440c8 bytes
    // storport.sys .text:0x36070, 0x2be18 bytes
    //
    _s86(sdk::unknown_ptr) stor_etw_miniport_log_error;
    
    // [StorFreeContiguousIoResources]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7568, 0x2be18 bytes
    // storport.sys .text:0xc938, 0x440c8 bytes
    // storport.sys .text:0x7568, 0x2be18 bytes
    //
    _s87(sdk::unknown_ptr) stor_free_contiguous_io_resources;
    
    // [StorMaximumTimeInterval]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e24, 0x2be18 bytes
    // storport.sys .data:0x79af0, 0x440c8 bytes
    // storport.sys .data:0x67e24, 0x2be18 bytes
    //
    _s88(sdk::unknown_ptr) stor_maximum_time_interval;
    
    // [StorMinimumTimeInterval]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e2c, 0x2be18 bytes
    // storport.sys .data:0x79af4, 0x440c8 bytes
    // storport.sys .data:0x67e2c, 0x2be18 bytes
    //
    _s89(sdk::unknown_ptr) stor_minimum_time_interval;
    
    // [StorPortAdapterDirectedPowerDown]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3dbc0, 0x2be18 bytes
    // storport.sys .text:0x49d10, 0x440c8 bytes
    // storport.sys .text:0x3dbc0, 0x2be18 bytes
    //
    _s90(sdk::unknown_ptr) stor_port_adapter_directed_power_down;
    
    // [StorPortAdapterDirectedPowerDownCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3dc40, 0x2be18 bytes
    // storport.sys .text:0x49d90, 0x440c8 bytes
    // storport.sys .text:0x3dc40, 0x2be18 bytes
    //
    _s91(sdk::unknown_ptr) stor_port_adapter_directed_power_down_completion;
    
    // [StorPortAdapterDirectedPowerDownRequestD3]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3dcf4, 0x2be18 bytes
    // storport.sys .text:0x49e40, 0x440c8 bytes
    // storport.sys .text:0x3dcf4, 0x2be18 bytes
    //
    _s92(sdk::unknown_ptr) stor_port_adapter_directed_power_down_request_d3;
    
    // [StorPortAdapterDirectedPowerDownRequestD3Passive]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3df20, 0x2be18 bytes
    // storport.sys .text:0x4a060, 0x440c8 bytes
    // storport.sys .text:0x3df20, 0x2be18 bytes
    //
    _s93(sdk::unknown_ptr) stor_port_adapter_directed_power_down_request_d3_passive;
    
    // [StorPortAdapterDirectedPowerUp]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3df40, 0x2be18 bytes
    // storport.sys .text:0x4a080, 0x440c8 bytes
    // storport.sys .text:0x3df40, 0x2be18 bytes
    //
    _s94(sdk::unknown_ptr) stor_port_adapter_directed_power_up;
    
    // [StorPortAdapterDirectedPowerUpCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e040, 0x2be18 bytes
    // storport.sys .text:0x4a180, 0x440c8 bytes
    // storport.sys .text:0x3e040, 0x2be18 bytes
    //
    _s95(sdk::unknown_ptr) stor_port_adapter_directed_power_up_completion;
    
    // [StorPortAdapterDirectedPowerUpRequestD0]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e10c, 0x2be18 bytes
    // storport.sys .text:0x4a254, 0x440c8 bytes
    // storport.sys .text:0x3e10c, 0x2be18 bytes
    //
    _s96(sdk::unknown_ptr) stor_port_adapter_directed_power_up_request_d0;
    
    // [StorPortAdapterPoFxWaitWakeCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e540, 0x2be18 bytes
    // storport.sys .text:0x4a360, 0x440c8 bytes
    // storport.sys .text:0x3e540, 0x2be18 bytes
    //
    _s97(sdk::unknown_ptr) stor_port_adapter_po_fx_wait_wake_completion;
    
    // [StorPortAdapterPowerNotRequiredStep2Passive]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e950, 0x2be18 bytes
    // storport.sys .text:0x4a4d0, 0x440c8 bytes
    // storport.sys .text:0x3e950, 0x2be18 bytes
    //
    _s98(sdk::unknown_ptr) stor_port_adapter_power_not_required_step2_passive;
    
    // [StorPortReleaseAdditionalCrashDumpArea]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11708, 0x2be18 bytes
    // storport.sys .text:0x137f4, 0x440c8 bytes
    // storport.sys .text:0x11708, 0x2be18 bytes
    //
    _s99(sdk::unknown_ptr) stor_port_release_additional_crash_dump_area;
    
    // [StorPortUnitDirectedPowerDown]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3eb70, 0x2be18 bytes
    // storport.sys .text:0x4a4f0, 0x440c8 bytes
    // storport.sys .text:0x3eb70, 0x2be18 bytes
    //
    _t00(sdk::unknown_ptr) stor_port_unit_directed_power_down;
    
    // [StorPortUnitDirectedPowerDownCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ec90, 0x2be18 bytes
    // storport.sys .text:0x4a610, 0x440c8 bytes
    // storport.sys .text:0x3ec90, 0x2be18 bytes
    //
    _t01(sdk::unknown_ptr) stor_port_unit_directed_power_down_completion;
    
    // [StorPortUnitDirectedPowerDownRequestD3]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ede8, 0x2be18 bytes
    // storport.sys .text:0x4a760, 0x440c8 bytes
    // storport.sys .text:0x3ede8, 0x2be18 bytes
    //
    _t02(sdk::unknown_ptr) stor_port_unit_directed_power_down_request_d3;
    
    // [StorPortUnitDirectedPowerDownRequestD3Passive]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f010, 0x2be18 bytes
    // storport.sys .text:0x4a990, 0x440c8 bytes
    // storport.sys .text:0x3f010, 0x2be18 bytes
    //
    _t03(sdk::unknown_ptr) stor_port_unit_directed_power_down_request_d3_passive;
    
    // [StorPortUnitDirectedPowerUp]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f030, 0x2be18 bytes
    // storport.sys .text:0x4a9b0, 0x440c8 bytes
    // storport.sys .text:0x3f030, 0x2be18 bytes
    //
    _t04(sdk::unknown_ptr) stor_port_unit_directed_power_up;
    
    // [StorPortUnitDirectedPowerUpCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f1b0, 0x2be18 bytes
    // storport.sys .text:0x4ab30, 0x440c8 bytes
    // storport.sys .text:0x3f1b0, 0x2be18 bytes
    //
    _t05(sdk::unknown_ptr) stor_port_unit_directed_power_up_completion;
    
    // [StorPortUnitDirectedPowerUpRequestD0]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f1e0, 0x2be18 bytes
    // storport.sys .text:0x4ab68, 0x440c8 bytes
    // storport.sys .text:0x3f1e0, 0x2be18 bytes
    //
    _t06(sdk::unknown_ptr) stor_port_unit_directed_power_up_request_d0;
    
    // [StorPreAllocatedMaxIoResourceCount]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67318, 0x2be18 bytes
    // storport.sys .data:0x79444, 0x440c8 bytes
    // storport.sys .data:0x67318, 0x2be18 bytes
    //
    _t07(sdk::unknown_ptr) stor_pre_allocated_max_io_resource_count;
    
    // [StorReset]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37ee0, 0x2be18 bytes
    // storport.sys .text:0x43b28, 0x440c8 bytes
    // storport.sys .text:0x37ee0, 0x2be18 bytes
    //
    _t08(sdk::unknown_ptr) stor_reset;
    
    // [StorResetCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37fb0, 0x2be18 bytes
    // storport.sys .text:0x43cd0, 0x440c8 bytes
    // storport.sys .text:0x37fb0, 0x2be18 bytes
    //
    _t09(sdk::unknown_ptr) stor_reset_completion;
    
    // [StorageAsyncStart]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e14, 0x2be18 bytes
    // storport.sys .data:0x79b68, 0x440c8 bytes
    // storport.sys .data:0x67e14, 0x2be18 bytes
    //
    _t10(sdk::unknown_ptr) storage_async_start;
    
    // [StorageD3AllowedOnCurrentPlatform]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e17, 0x2be18 bytes
    // storport.sys .data:0x79b70, 0x440c8 bytes
    // storport.sys .data:0x67e17, 0x2be18 bytes
    //
    _t11(sdk::unknown_ptr) storage_d3_allowed_on_current_platform;
    
    // [StorageD3InModernStandbyEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67e16, 0x2be18 bytes
    // storport.sys .data:0x79aba, 0x440c8 bytes
    // storport.sys .data:0x67e16, 0x2be18 bytes
    //
    _t12(sdk::unknown_ptr) storage_d3_in_modern_standby_enabled;
    
    // [StorageD3RegistryState]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x67364, 0x2be18 bytes
    // storport.sys .data:0x79428, 0x440c8 bytes
    // storport.sys .data:0x67364, 0x2be18 bytes
    //
    _t13(sdk::unknown_ptr) storage_d3_registry_state;
    
    // [StorpAllocateContiguousMemorySpecifyCacheNodeEx]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38470, 0x2be18 bytes
    // storport.sys .text:0xbae8, 0x440c8 bytes
    // storport.sys .text:0x38470, 0x2be18 bytes
    //
    _t14(sdk::unknown_ptr) storp_allocate_contiguous_memory_specify_cache_node_ex;
    
    // [StorpFreeContiguousMemorySpecifyCacheEx]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38dc4, 0x2be18 bytes
    // storport.sys .text:0xbbe0, 0x440c8 bytes
    // storport.sys .text:0x38dc4, 0x2be18 bytes
    //
    _t15(sdk::unknown_ptr) storp_free_contiguous_memory_specify_cache_ex;
    
    // [StorpGetGroupAffinity]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x396ac, 0x2be18 bytes
    // storport.sys .text:0x4536c, 0x440c8 bytes
    // storport.sys .text:0x396ac, 0x2be18 bytes
    //
    _t16(sdk::unknown_ptr) storp_get_group_affinity;
    
    // [StorpInititalizePerUnitPerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys PAGE:0x58034, 0x1b430 bytes
    // storport.sys PAGE:0x71f08, 0x2be18 bytes
    // storport.sys PAGE:0x71f08, 0x2be18 bytes
    //
    _t17(sdk::unknown_ptr) storp_inititalize_per_unit_perf_telemetry;
    
    // [StorpMarkDeviceFailed]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3a0f8, 0x2be18 bytes
    // storport.sys .text:0x45d58, 0x440c8 bytes
    // storport.sys .text:0x3a0f8, 0x2be18 bytes
    //
    _t18(sdk::unknown_ptr) storp_mark_device_failed;
    
    // [StorpMeasuresMiniportEventAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x51048, 0x2be18 bytes
    // storport.sys .text:0x5eecc, 0x440c8 bytes
    // storport.sys .text:0x51048, 0x2be18 bytes
    //
    _t19(sdk::unknown_ptr) storp_measures_miniport_event_adapter;
    
    // [StorpMeasuresMiniportEventUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x51364, 0x2be18 bytes
    // storport.sys .text:0x5f1e8, 0x440c8 bytes
    // storport.sys .text:0x51364, 0x2be18 bytes
    //
    _t20(sdk::unknown_ptr) storp_measures_miniport_event_unit;
    
    // [StorpPopulateErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40d74, 0x2be18 bytes
    // storport.sys .text:0x4bc78, 0x440c8 bytes
    // storport.sys .text:0x40d74, 0x2be18 bytes
    //
    _t21(sdk::unknown_ptr) storp_populate_error_data;
    
    // [StorpPopulateLogData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40ed4, 0x2be18 bytes
    // storport.sys .text:0x4bdd8, 0x440c8 bytes
    // storport.sys .text:0x40ed4, 0x2be18 bytes
    //
    _t22(sdk::unknown_ptr) storp_populate_log_data;
    
    // [StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf7e0, 0x2be18 bytes
    // storport.sys .text:0x12fac, 0x440c8 bytes
    // storport.sys .text:0xf7e0, 0x2be18 bytes
    //
    _t23(sdk::unknown_ptr) storp_telemetry_log_unit_s4_when_adaptive_idle_engaged;
    
    // [StorpTelemetryMiniportEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x532e8, 0x2be18 bytes
    // storport.sys .text:0x618e8, 0x440c8 bytes
    // storport.sys .text:0x532e8, 0x2be18 bytes
    //
    _t24(sdk::unknown_ptr) storp_telemetry_miniport_event;
    
    // [StorpTelemetryMiniportEventAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x533a0, 0x2be18 bytes
    // storport.sys .text:0x619a0, 0x440c8 bytes
    // storport.sys .text:0x533a0, 0x2be18 bytes
    //
    _t25(sdk::unknown_ptr) storp_telemetry_miniport_event_adapter;
    
    // [StorpTelemetryMiniportEventUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x536bc, 0x2be18 bytes
    // storport.sys .text:0x61cbc, 0x440c8 bytes
    // storport.sys .text:0x536bc, 0x2be18 bytes
    //
    _t26(sdk::unknown_ptr) storp_telemetry_miniport_event_unit;
    
    // [StorpTelemetryMiniportEventWStr]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x53b88, 0x2be18 bytes
    // storport.sys .text:0x14f20, 0x440c8 bytes
    // storport.sys .text:0x53b88, 0x2be18 bytes
    //
    _t27(sdk::unknown_ptr) storp_telemetry_miniport_event_w_str;
    
    // [StorpTelemetryMiniportLogError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x546fc, 0x2be18 bytes
    // storport.sys .text:0x62188, 0x440c8 bytes
    // storport.sys .text:0x546fc, 0x2be18 bytes
    //
    _t28(sdk::unknown_ptr) storp_telemetry_miniport_log_error;
    
    // [StorpTelemetryNvmeGetLogPage]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x54930, 0x2be18 bytes
    // storport.sys .text:0x623bc, 0x440c8 bytes
    // storport.sys .text:0x54930, 0x2be18 bytes
    //
    _t29(sdk::unknown_ptr) storp_telemetry_nvme_get_log_page;
    
    // [StorpTelemetryNvmeHealthCriticalInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x54a84, 0x2be18 bytes
    // storport.sys .text:0x62510, 0x440c8 bytes
    // storport.sys .text:0x54a84, 0x2be18 bytes
    //
    _t30(sdk::unknown_ptr) storp_telemetry_nvme_health_critical_info;
    
    // [StorpTelemetryNvmeHealthInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x54da0, 0x2be18 bytes
    // storport.sys .text:0x6282c, 0x440c8 bytes
    // storport.sys .text:0x54da0, 0x2be18 bytes
    //
    _t31(sdk::unknown_ptr) storp_telemetry_nvme_health_info;
    
    // [StorpTelemetrySendUnitErrorDataSummary]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ef0, 0x2be18 bytes
    // storport.sys .text:0x3be8, 0x440c8 bytes
    // storport.sys .text:0x3ef0, 0x2be18 bytes
    //
    _t32(sdk::unknown_ptr) storp_telemetry_send_unit_error_data_summary;
    
    // [StorpTelemetrySendUnitUniqueErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2df0, 0x2be18 bytes
    // storport.sys .text:0x100e4, 0x440c8 bytes
    // storport.sys .text:0x2df0, 0x2be18 bytes
    //
    _t33(sdk::unknown_ptr) storp_telemetry_send_unit_unique_error_data;
    
    // [StorpUninititalizePerUnitPerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x41828, 0x1b430 bytes
    // storport.sys .text:0x19eec, 0x2be18 bytes
    // storport.sys .text:0x19eec, 0x2be18 bytes
    //
    _t34(sdk::unknown_ptr) storp_uninititalize_per_unit_perf_telemetry;
    
    // [StorpUpdateDynamicRegistrySettings]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33bb0, 0x2be18 bytes
    // storport.sys .text:0x3f5a0, 0x440c8 bytes
    // storport.sys .text:0x33bb0, 0x2be18 bytes
    //
    _t35(sdk::unknown_ptr) storp_update_dynamic_registry_settings;
    
    // [StorpWatchForRegistryChanges]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33ce0, 0x2be18 bytes
    // storport.sys .text:0x3f9c0, 0x440c8 bytes
    // storport.sys .text:0x33ce0, 0x2be18 bytes
    //
    _t36(sdk::unknown_ptr) storp_watch_for_registry_changes;
    
    // [StorpWheaAddErrorSource]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x78cb4, 0x2be18 bytes
    // storport.sys PAGE:0x8e578, 0x440c8 bytes
    // storport.sys PAGE:0x78cb4, 0x2be18 bytes
    //
    _t37(sdk::unknown_ptr) storp_whea_add_error_source;
    
    // [StorpWheaInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x708f0, 0x2be18 bytes
    // storport.sys PAGE:0x84970, 0x440c8 bytes
    // storport.sys PAGE:0x708f0, 0x2be18 bytes
    //
    _t38(sdk::unknown_ptr) storp_whea_initialize;
    
    // [StorpWheaReportError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40f48, 0x2be18 bytes
    // storport.sys .text:0x4be4c, 0x440c8 bytes
    // storport.sys .text:0x40f48, 0x2be18 bytes
    //
    _t39(sdk::unknown_ptr) storp_whea_report_error;
    
    // [StorpWheaUninitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x70910, 0x2be18 bytes
    // storport.sys PAGE:0x84980, 0x440c8 bytes
    // storport.sys PAGE:0x70910, 0x2be18 bytes
    //
    _t40(sdk::unknown_ptr) storp_whea_uninitialize;
    
    // [TranslateScsiRequestBlockToScsiCdb16SrbExData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4083c, 0x2be18 bytes
    // storport.sys .text:0x1c944, 0x440c8 bytes
    // storport.sys .text:0x4083c, 0x2be18 bytes
    //
    _t41(sdk::unknown_ptr) translate_scsi_request_block_to_scsi_cdb16_srb_ex_data;
    
    // [TrimString]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x56620, 0x2be18 bytes
    // storport.sys .text:0x64ab4, 0x440c8 bytes
    // storport.sys .text:0x56620, 0x2be18 bytes
    //
    _t42(sdk::unknown_ptr) trim_string;
    
    // [WPP_8b02d11292aa33fe882393334494a07b_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x5f668, 0x2be18 bytes
    // storport.sys .rdata:0x6f940, 0x440c8 bytes
    // storport.sys .rdata:0x5f668, 0x2be18 bytes
    //
    _t43(sdk::unknown_ptr) wpp_8b02d11292aa33fe882393334494a07b_traceguids;
    
    // [WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x60590, 0x2be18 bytes
    // storport.sys .rdata:0x71010, 0x440c8 bytes
    // storport.sys .rdata:0x60590, 0x2be18 bytes
    //
    _t44(sdk::unknown_ptr) wpp_ad50ae595d343b84980c7edcc7a41d05_traceguids;
    
    // [WPP_dee983de6f5935136af426d994ba468e_Traceguids]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x607a0, 0x2be18 bytes
    // storport.sys .rdata:0x714f0, 0x440c8 bytes
    // storport.sys .rdata:0x607a0, 0x2be18 bytes
    //
    _t45(sdk::unknown_ptr) wpp_dee983de6f5935136af426d994ba468e_traceguids;
    
    // [WPPInitCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // storport.sys .data:0x4e6ac, 0x1b430 bytes
    // storport.sys .data:0x67e1c, 0x2be18 bytes
    // storport.sys .data:0x67e1c, 0x2be18 bytes
    //
    _t46(sdk::unknown_ptr) wpp_init_count;
    
    // [WPP_SF_is]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b0e0, 0x2be18 bytes
    // storport.sys .text:0x46dc8, 0x440c8 bytes
    // storport.sys .text:0x3b0e0, 0x2be18 bytes
    //
    _t47(sdk::unknown_ptr) wpp_sf_is;
    
    // [AsciiToWChar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x429f0, 0x1b430 bytes
    // storport.sys .text:0x56a80, 0x2be18 bytes
    // storport.sys .text:0x677f4, 0x440c8 bytes
    // storport.sys .text:0x56a80, 0x2be18 bytes
    //
    _t48(sdk::unknown_ptr) ascii_to_w_char;
    
    // [DeviceIdShim]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e098, 0x1b430 bytes
    // storport.sys .data:0x67240, 0x2be18 bytes
    // storport.sys .data:0x792b8, 0x440c8 bytes
    // storport.sys .data:0x67240, 0x2be18 bytes
    //
    _t49(sdk::unknown_ptr) device_id_shim;
    
    // [DeviceIdShimHookCollections]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e150, 0x1b430 bytes
    // storport.sys .data:0x671e0, 0x2be18 bytes
    // storport.sys .data:0x79258, 0x440c8 bytes
    // storport.sys .data:0x671e0, 0x2be18 bytes
    //
    _t50(sdk::unknown_ptr) device_id_shim_hook_collections;
    
    // [DeviceIdShimHookDeviceControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42540, 0x1b430 bytes
    // storport.sys .text:0x55fd0, 0x2be18 bytes
    // storport.sys .text:0x645c0, 0x440c8 bytes
    // storport.sys .text:0x55fd0, 0x2be18 bytes
    //
    _t51(sdk::unknown_ptr) device_id_shim_hook_device_control;
    
    // [DeviceIdShimHooks]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e110, 0x1b430 bytes
    // storport.sys .data:0x67170, 0x2be18 bytes
    // storport.sys .data:0x791e0, 0x440c8 bytes
    // storport.sys .data:0x67170, 0x2be18 bytes
    //
    _t52(sdk::unknown_ptr) device_id_shim_hooks;
    
    // [DeviceIdShimStorageDeviceIdCompletionHook]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42640, 0x1b430 bytes
    // storport.sys .text:0x560e0, 0x2be18 bytes
    // storport.sys .text:0x646d0, 0x440c8 bytes
    // storport.sys .text:0x560e0, 0x2be18 bytes
    //
    _t53(sdk::unknown_ptr) device_id_shim_storage_device_id_completion_hook;
    
    // [DeviceStateTable]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44cf0, 0x1b430 bytes
    // storport.sys .rdata:0x5a688, 0x2be18 bytes
    // storport.sys .rdata:0x6a7d8, 0x440c8 bytes
    // storport.sys .rdata:0x5a688, 0x2be18 bytes
    //
    _t54(sdk::unknown_ptr) device_state_table;
    
    // [Disk1667CompatibleIdString]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47d30, 0x1b430 bytes
    // storport.sys .rdata:0x5f988, 0x2be18 bytes
    // storport.sys .rdata:0x6ff08, 0x440c8 bytes
    // storport.sys .rdata:0x5f988, 0x2be18 bytes
    //
    _t55(sdk::unknown_ptr) disk1667_compatible_id_string;
    
    // [DpcCompletionLimit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e214, 0x1b430 bytes
    // storport.sys .data:0x67300, 0x2be18 bytes
    // storport.sys .data:0x793d0, 0x440c8 bytes
    // storport.sys .data:0x67300, 0x2be18 bytes
    //
    _t56(sdk::unknown_ptr) dpc_completion_limit;
    
    // [EventAdapterActiveConditionStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47890, 0x1b430 bytes
    // storport.sys .rdata:0x5ef50, 0x2be18 bytes
    // storport.sys .rdata:0x6f0d0, 0x440c8 bytes
    // storport.sys .rdata:0x5ef50, 0x2be18 bytes
    //
    _t57(sdk::unknown_ptr) event_adapter_active_condition_start;
    
    // [EventAdapterActiveConditionStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c70, 0x1b430 bytes
    // storport.sys .rdata:0x5f558, 0x2be18 bytes
    // storport.sys .rdata:0x6f7f8, 0x440c8 bytes
    // storport.sys .rdata:0x5f558, 0x2be18 bytes
    //
    _t58(sdk::unknown_ptr) event_adapter_active_condition_stop;
    
    // [EventAdapterFinalPerfConfigData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47980, 0x1b430 bytes
    // storport.sys .rdata:0x5f080, 0x2be18 bytes
    // storport.sys .rdata:0x6f240, 0x440c8 bytes
    // storport.sys .rdata:0x5f080, 0x2be18 bytes
    //
    _t59(sdk::unknown_ptr) event_adapter_final_perf_config_data;
    
    // [EventAdapterFinalPortConfigInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a20, 0x1b430 bytes
    // storport.sys .rdata:0x5f190, 0x2be18 bytes
    // storport.sys .rdata:0x6f3d0, 0x440c8 bytes
    // storport.sys .rdata:0x5f190, 0x2be18 bytes
    //
    _t60(sdk::unknown_ptr) event_adapter_final_port_config_info;
    
    // [EventAdapterIdleConditionStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c50, 0x1b430 bytes
    // storport.sys .rdata:0x5f528, 0x2be18 bytes
    // storport.sys .rdata:0x6f7c8, 0x440c8 bytes
    // storport.sys .rdata:0x5f528, 0x2be18 bytes
    //
    _t61(sdk::unknown_ptr) event_adapter_idle_condition_start;
    
    // [EventAdapterIdleConditionStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47960, 0x1b430 bytes
    // storport.sys .rdata:0x5f050, 0x2be18 bytes
    // storport.sys .rdata:0x6f200, 0x440c8 bytes
    // storport.sys .rdata:0x5f050, 0x2be18 bytes
    //
    _t62(sdk::unknown_ptr) event_adapter_idle_condition_stop;
    
    // [EventAdapterIdleStateStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a00, 0x1b430 bytes
    // storport.sys .rdata:0x5f140, 0x2be18 bytes
    // storport.sys .rdata:0x6f370, 0x440c8 bytes
    // storport.sys .rdata:0x5f140, 0x2be18 bytes
    //
    _t63(sdk::unknown_ptr) event_adapter_idle_state_start;
    
    // [EventAdapterIdleStateStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479c0, 0x1b430 bytes
    // storport.sys .rdata:0x5f110, 0x2be18 bytes
    // storport.sys .rdata:0x6f2e0, 0x440c8 bytes
    // storport.sys .rdata:0x5f110, 0x2be18 bytes
    //
    _t64(sdk::unknown_ptr) event_adapter_idle_state_stop;
    
    // [EventAdapterIdleTimeoutSet]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x446c0, 0x1b430 bytes
    // storport.sys .rdata:0x5ee50, 0x2be18 bytes
    // storport.sys .rdata:0x6efa0, 0x440c8 bytes
    // storport.sys .rdata:0x5ee50, 0x2be18 bytes
    //
    _t65(sdk::unknown_ptr) event_adapter_idle_timeout_set;
    
    // [EventAdapterInitPerfConfigData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47740, 0x1b430 bytes
    // storport.sys .rdata:0x5ece0, 0x2be18 bytes
    // storport.sys .rdata:0x6ee20, 0x440c8 bytes
    // storport.sys .rdata:0x5ece0, 0x2be18 bytes
    //
    _t66(sdk::unknown_ptr) event_adapter_init_perf_config_data;
    
    // [EventAdapterInitPortConfigInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a70, 0x1b430 bytes
    // storport.sys .rdata:0x5f1f0, 0x2be18 bytes
    // storport.sys .rdata:0x6f460, 0x440c8 bytes
    // storport.sys .rdata:0x5f1f0, 0x2be18 bytes
    //
    _t67(sdk::unknown_ptr) event_adapter_init_port_config_info;
    
    // [EventAdapterPoFxRegistered]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c90, 0x1b430 bytes
    // storport.sys .rdata:0x5f578, 0x2be18 bytes
    // storport.sys .rdata:0x6a1b8, 0x440c8 bytes
    // storport.sys .rdata:0x5f578, 0x2be18 bytes
    //
    _t68(sdk::unknown_ptr) event_adapter_po_fx_registered;
    
    // [EventAdapterPowerNotRequiredStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c20, 0x1b430 bytes
    // storport.sys .rdata:0x5f4c8, 0x2be18 bytes
    // storport.sys .rdata:0x6f778, 0x440c8 bytes
    // storport.sys .rdata:0x5f4c8, 0x2be18 bytes
    //
    _t69(sdk::unknown_ptr) event_adapter_power_not_required_start;
    
    // [EventAdapterPowerNotRequiredStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47750, 0x1b430 bytes
    // storport.sys .rdata:0x5ed10, 0x2be18 bytes
    // storport.sys .rdata:0x6ee40, 0x440c8 bytes
    // storport.sys .rdata:0x5ed10, 0x2be18 bytes
    //
    _t70(sdk::unknown_ptr) event_adapter_power_not_required_stop;
    
    // [EventAdapterPowerRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b80, 0x1b430 bytes
    // storport.sys .rdata:0x5f408, 0x2be18 bytes
    // storport.sys .rdata:0x6f6b8, 0x440c8 bytes
    // storport.sys .rdata:0x5f408, 0x2be18 bytes
    //
    _t71(sdk::unknown_ptr) event_adapter_power_request;
    
    // [EventAdapterPowerRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47be0, 0x1b430 bytes
    // storport.sys .rdata:0x5f488, 0x2be18 bytes
    // storport.sys .rdata:0x6f738, 0x440c8 bytes
    // storport.sys .rdata:0x5f488, 0x2be18 bytes
    //
    _t72(sdk::unknown_ptr) event_adapter_power_request_complete;
    
    // [EventAdapterPowerRequiredStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47930, 0x1b430 bytes
    // storport.sys .rdata:0x5eff0, 0x2be18 bytes
    // storport.sys .rdata:0x6f1b0, 0x440c8 bytes
    // storport.sys .rdata:0x5eff0, 0x2be18 bytes
    //
    _t73(sdk::unknown_ptr) event_adapter_power_required_start;
    
    // [EventAdapterPowerRequiredStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a10, 0x1b430 bytes
    // storport.sys .rdata:0x5f180, 0x2be18 bytes
    // storport.sys .rdata:0x6f3c0, 0x440c8 bytes
    // storport.sys .rdata:0x5f180, 0x2be18 bytes
    //
    _t74(sdk::unknown_ptr) event_adapter_power_required_stop;
    
    // [EventAdapterResourceListFailure]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c60, 0x1b430 bytes
    // storport.sys .rdata:0x5f548, 0x2be18 bytes
    // storport.sys .rdata:0x6f7e8, 0x440c8 bytes
    // storport.sys .rdata:0x5f548, 0x2be18 bytes
    //
    _t75(sdk::unknown_ptr) event_adapter_resource_list_failure;
    
    // [EventAdapterSystemPowerHint]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x478a0, 0x1b430 bytes
    // storport.sys .rdata:0x5ef60, 0x2be18 bytes
    // storport.sys .rdata:0x6a0e0, 0x440c8 bytes
    // storport.sys .rdata:0x5ef60, 0x2be18 bytes
    //
    _t76(sdk::unknown_ptr) event_adapter_system_power_hint;
    
    // [EventBusChangeDetected]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47cb0, 0x1b430 bytes
    // storport.sys .rdata:0x5f598, 0x2be18 bytes
    // storport.sys .rdata:0x6f838, 0x440c8 bytes
    // storport.sys .rdata:0x5f598, 0x2be18 bytes
    //
    _t77(sdk::unknown_ptr) event_bus_change_detected;
    
    // [EventBusReset]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47bd0, 0x1b430 bytes
    // storport.sys .rdata:0x5f478, 0x2be18 bytes
    // storport.sys .rdata:0x6f728, 0x440c8 bytes
    // storport.sys .rdata:0x5f478, 0x2be18 bytes
    //
    _t78(sdk::unknown_ptr) event_bus_reset;
    
    // [EventDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x446a0, 0x1b430 bytes
    // storport.sys .rdata:0x5eda0, 0x2be18 bytes
    // storport.sys .rdata:0x6eee0, 0x440c8 bytes
    // storport.sys .rdata:0x5eda0, 0x2be18 bytes
    //
    _t79(sdk::unknown_ptr) event_dpc;
    
    // [EventEnumerationComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x477d0, 0x1b430 bytes
    // storport.sys .rdata:0x5ede0, 0x2be18 bytes
    // storport.sys .rdata:0x6ef20, 0x440c8 bytes
    // storport.sys .rdata:0x5ede0, 0x2be18 bytes
    //
    _t80(sdk::unknown_ptr) event_enumeration_complete;
    
    // [EventHwInitData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47940, 0x1b430 bytes
    // storport.sys .rdata:0x5f020, 0x2be18 bytes
    // storport.sys .rdata:0x6f1d0, 0x440c8 bytes
    // storport.sys .rdata:0x5f020, 0x2be18 bytes
    //
    _t81(sdk::unknown_ptr) event_hw_init_data;
    
    // [EventIncreaseAdapterResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479d0, 0x1b430 bytes
    // storport.sys .rdata:0x5f120, 0x2be18 bytes
    // storport.sys .rdata:0x6f300, 0x440c8 bytes
    // storport.sys .rdata:0x5f120, 0x2be18 bytes
    //
    _t82(sdk::unknown_ptr) event_increase_adapter_resource_list;
    
    // [EventIOPerformanceMeasurement]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ca0, 0x1b430 bytes
    // storport.sys .rdata:0x5f588, 0x2be18 bytes
    // storport.sys .rdata:0x6f818, 0x440c8 bytes
    // storport.sys .rdata:0x5f588, 0x2be18 bytes
    //
    _t83(sdk::unknown_ptr) event_io_performance_measurement;
    
    // [EventIOPerformanceMeasurementTarget]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479b0, 0x1b430 bytes
    // storport.sys .rdata:0x5f100, 0x2be18 bytes
    // storport.sys .rdata:0x6f2d0, 0x440c8 bytes
    // storport.sys .rdata:0x5f100, 0x2be18 bytes
    //
    _t84(sdk::unknown_ptr) event_io_performance_measurement_target;
    
    // [EventIORequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a60, 0x1b430 bytes
    // storport.sys .rdata:0x5f1e0, 0x2be18 bytes
    // storport.sys .rdata:0x6f430, 0x440c8 bytes
    // storport.sys .rdata:0x5f1e0, 0x2be18 bytes
    //
    _t85(sdk::unknown_ptr) event_io_request_complete;
    
    // [EventIOCTL]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47840, 0x1b430 bytes
    // storport.sys .rdata:0x5eec0, 0x2be18 bytes
    // storport.sys .rdata:0x6f020, 0x440c8 bytes
    // storport.sys .rdata:0x5eec0, 0x2be18 bytes
    //
    _t86(sdk::unknown_ptr) event_ioctl;
    
    // [EventIsr]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x446d0, 0x1b430 bytes
    // storport.sys .rdata:0x5ee70, 0x2be18 bytes
    // storport.sys .rdata:0x6efc0, 0x440c8 bytes
    // storport.sys .rdata:0x5ee70, 0x2be18 bytes
    //
    _t87(sdk::unknown_ptr) event_isr;
    
    // [EventLinkDown]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x477a0, 0x1b430 bytes
    // storport.sys .rdata:0x5ed80, 0x2be18 bytes
    // storport.sys .rdata:0x6eed0, 0x440c8 bytes
    // storport.sys .rdata:0x5ed80, 0x2be18 bytes
    //
    _t88(sdk::unknown_ptr) event_link_down;
    
    // [EventLinkUp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47920, 0x1b430 bytes
    // storport.sys .rdata:0x5efd0, 0x2be18 bytes
    // storport.sys .rdata:0x6f190, 0x440c8 bytes
    // storport.sys .rdata:0x5efd0, 0x2be18 bytes
    //
    _t89(sdk::unknown_ptr) event_link_up;
    
    // [EventLogoPerformanceMeasurement]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47830, 0x1b430 bytes
    // storport.sys .rdata:0x5eea0, 0x2be18 bytes
    // storport.sys .rdata:0x6eff0, 0x440c8 bytes
    // storport.sys .rdata:0x5eea0, 0x2be18 bytes
    //
    _t90(sdk::unknown_ptr) event_logo_performance_measurement;
    
    // [EventLogoPerformanceMeasurementTarget]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47cc0, 0x1b430 bytes
    // storport.sys .rdata:0x5f5a8, 0x2be18 bytes
    // storport.sys .rdata:0x6f848, 0x440c8 bytes
    // storport.sys .rdata:0x5f5a8, 0x2be18 bytes
    //
    _t91(sdk::unknown_ptr) event_logo_performance_measurement_target;
    
    // [EventLUReset]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47780, 0x1b430 bytes
    // storport.sys .rdata:0x5ed40, 0x2be18 bytes
    // storport.sys .rdata:0x6ee80, 0x440c8 bytes
    // storport.sys .rdata:0x5ed40, 0x2be18 bytes
    //
    _t92(sdk::unknown_ptr) event_lu_reset;
    
    // [EventMiniport2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a50, 0x1b430 bytes
    // storport.sys .rdata:0x5f1d0, 0x2be18 bytes
    // storport.sys .rdata:0x6f420, 0x440c8 bytes
    // storport.sys .rdata:0x5f1d0, 0x2be18 bytes
    //
    _t93(sdk::unknown_ptr) event_miniport2;
    
    // [EventMiniport4]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c80, 0x1b430 bytes
    // storport.sys .rdata:0x5f568, 0x2be18 bytes
    // storport.sys .rdata:0x6f808, 0x440c8 bytes
    // storport.sys .rdata:0x5f568, 0x2be18 bytes
    //
    _t94(sdk::unknown_ptr) event_miniport4;
    
    // [EventMiniport8]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47860, 0x1b430 bytes
    // storport.sys .rdata:0x5eef0, 0x2be18 bytes
    // storport.sys .rdata:0x6f050, 0x440c8 bytes
    // storport.sys .rdata:0x5eef0, 0x2be18 bytes
    //
    _t95(sdk::unknown_ptr) event_miniport8;
    
    // [EventMiniportBugAbortBroken]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47880, 0x1b430 bytes
    // storport.sys .rdata:0x5ef40, 0x2be18 bytes
    // storport.sys .rdata:0x6f0c0, 0x440c8 bytes
    // storport.sys .rdata:0x5ef40, 0x2be18 bytes
    //
    _t96(sdk::unknown_ptr) event_miniport_bug_abort_broken;
    
    // [EventMiniportBugResetBroken]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x478d0, 0x1b430 bytes
    // storport.sys .rdata:0x5ef90, 0x2be18 bytes
    // storport.sys .rdata:0x6f120, 0x440c8 bytes
    // storport.sys .rdata:0x5ef90, 0x2be18 bytes
    //
    _t97(sdk::unknown_ptr) event_miniport_bug_reset_broken;
    
    // [EventMiniportLun2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a40, 0x1b430 bytes
    // storport.sys .rdata:0x5f1c0, 0x2be18 bytes
    // storport.sys .rdata:0x6f410, 0x440c8 bytes
    // storport.sys .rdata:0x5f1c0, 0x2be18 bytes
    //
    _t98(sdk::unknown_ptr) event_miniport_lun2;
    
    // [EventMiniportLun4]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479f0, 0x1b430 bytes
    // storport.sys .rdata:0x5f130, 0x2be18 bytes
    // storport.sys .rdata:0x6f360, 0x440c8 bytes
    // storport.sys .rdata:0x5f130, 0x2be18 bytes
    //
    _t99(sdk::unknown_ptr) event_miniport_lun4;
    
    // [EventMiniportLun8]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a30, 0x1b430 bytes
    // storport.sys .rdata:0x5f1a0, 0x2be18 bytes
    // storport.sys .rdata:0x6f3f0, 0x440c8 bytes
    // storport.sys .rdata:0x5f1a0, 0x2be18 bytes
    //
    _u00(sdk::unknown_ptr) event_miniport_lun8;
    
    // [EventMiniportRequest2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b70, 0x1b430 bytes
    // storport.sys .rdata:0x5f3f8, 0x2be18 bytes
    // storport.sys .rdata:0x6f698, 0x440c8 bytes
    // storport.sys .rdata:0x5f3f8, 0x2be18 bytes
    //
    _u01(sdk::unknown_ptr) event_miniport_request2;
    
    // [EventMiniportRequest4]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b50, 0x1b430 bytes
    // storport.sys .rdata:0x5f378, 0x2be18 bytes
    // storport.sys .rdata:0x6f618, 0x440c8 bytes
    // storport.sys .rdata:0x5f378, 0x2be18 bytes
    //
    _u02(sdk::unknown_ptr) event_miniport_request4;
    
    // [EventMiniportRequest8]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b10, 0x1b430 bytes
    // storport.sys .rdata:0x5f308, 0x2be18 bytes
    // storport.sys .rdata:0x6f5a8, 0x440c8 bytes
    // storport.sys .rdata:0x5f308, 0x2be18 bytes
    //
    _u03(sdk::unknown_ptr) event_miniport_request8;
    
    // [EventNonReadWriteRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a90, 0x1b430 bytes
    // storport.sys .rdata:0x5f268, 0x2be18 bytes
    // storport.sys .rdata:0x6f4f8, 0x440c8 bytes
    // storport.sys .rdata:0x5f268, 0x2be18 bytes
    //
    _u04(sdk::unknown_ptr) event_non_read_write_request_complete;
    
    // [EventOperationDuration]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44690, 0x1b430 bytes
    // storport.sys .rdata:0x5ec90, 0x2be18 bytes
    // storport.sys .rdata:0x6edd0, 0x440c8 bytes
    // storport.sys .rdata:0x5ec90, 0x2be18 bytes
    //
    _u05(sdk::unknown_ptr) event_operation_duration;
    
    // [EventPagingReadRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47790, 0x1b430 bytes
    // storport.sys .rdata:0x5ed50, 0x2be18 bytes
    // storport.sys .rdata:0x6ee90, 0x440c8 bytes
    // storport.sys .rdata:0x5ed50, 0x2be18 bytes
    //
    _u06(sdk::unknown_ptr) event_paging_read_request;
    
    // [EventPagingWriteRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47770, 0x1b430 bytes
    // storport.sys .rdata:0x5ed30, 0x2be18 bytes
    // storport.sys .rdata:0x6ee60, 0x440c8 bytes
    // storport.sys .rdata:0x5ed30, 0x2be18 bytes
    //
    _u07(sdk::unknown_ptr) event_paging_write_request;
    
    // [EventPassThrough]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47bc0, 0x1b430 bytes
    // storport.sys .rdata:0x5f468, 0x2be18 bytes
    // storport.sys .rdata:0x6f718, 0x440c8 bytes
    // storport.sys .rdata:0x5f468, 0x2be18 bytes
    //
    _u08(sdk::unknown_ptr) event_pass_through;
    
    // [EventPassThroughProtocolCommand]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47970, 0x1b430 bytes
    // storport.sys .rdata:0x5f060, 0x2be18 bytes
    // storport.sys .rdata:0x6f210, 0x440c8 bytes
    // storport.sys .rdata:0x5f060, 0x2be18 bytes
    //
    _u09(sdk::unknown_ptr) event_pass_through_protocol_command;
    
    // [EventPnpRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ab0, 0x1b430 bytes
    // storport.sys .rdata:0x5f298, 0x2be18 bytes
    // storport.sys .rdata:0x6f528, 0x440c8 bytes
    // storport.sys .rdata:0x5f298, 0x2be18 bytes
    //
    _u10(sdk::unknown_ptr) event_pnp_request;
    
    // [EventPnpRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47800, 0x1b430 bytes
    // storport.sys .rdata:0x5ee30, 0x2be18 bytes
    // storport.sys .rdata:0x6ef80, 0x440c8 bytes
    // storport.sys .rdata:0x5ee30, 0x2be18 bytes
    //
    _u11(sdk::unknown_ptr) event_pnp_request_complete;
    
    // [EventPortConfigChange]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x477f0, 0x1b430 bytes
    // storport.sys .rdata:0x5ee20, 0x2be18 bytes
    // storport.sys .rdata:0x6ef70, 0x440c8 bytes
    // storport.sys .rdata:0x5ee20, 0x2be18 bytes
    //
    _u12(sdk::unknown_ptr) event_port_config_change;
    
    // [EventPortPause]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b20, 0x1b430 bytes
    // storport.sys .rdata:0x5f318, 0x2be18 bytes
    // storport.sys .rdata:0x6f5b8, 0x440c8 bytes
    // storport.sys .rdata:0x5f318, 0x2be18 bytes
    //
    _u13(sdk::unknown_ptr) event_port_pause;
    
    // [EventPortPauseDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x477e0, 0x1b430 bytes
    // storport.sys .rdata:0x5ee10, 0x2be18 bytes
    // storport.sys .rdata:0x6ef60, 0x440c8 bytes
    // storport.sys .rdata:0x5ee10, 0x2be18 bytes
    //
    _u14(sdk::unknown_ptr) event_port_pause_device;
    
    // [EventPortResume]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47bf0, 0x1b430 bytes
    // storport.sys .rdata:0x5f498, 0x2be18 bytes
    // storport.sys .rdata:0x6f748, 0x440c8 bytes
    // storport.sys .rdata:0x5f498, 0x2be18 bytes
    //
    _u15(sdk::unknown_ptr) event_port_resume;
    
    // [EventPortResumeDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b30, 0x1b430 bytes
    // storport.sys .rdata:0x5f338, 0x2be18 bytes
    // storport.sys .rdata:0x6f5d8, 0x440c8 bytes
    // storport.sys .rdata:0x5f338, 0x2be18 bytes
    //
    _u16(sdk::unknown_ptr) event_port_resume_device;
    
    // [EventQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x446e0, 0x1b430 bytes
    // storport.sys .rdata:0x59f18, 0x2be18 bytes
    // storport.sys .rdata:0x6a0d0, 0x440c8 bytes
    // storport.sys .rdata:0x59f18, 0x2be18 bytes
    //
    _u17(sdk::unknown_ptr) event_queue;
    
    // [EventReadRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b00, 0x1b430 bytes
    // storport.sys .rdata:0x5f2f8, 0x2be18 bytes
    // storport.sys .rdata:0x6f598, 0x440c8 bytes
    // storport.sys .rdata:0x5f2f8, 0x2be18 bytes
    //
    _u18(sdk::unknown_ptr) event_read_request;
    
    // [EventRequestTimerCall]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47aa0, 0x1b430 bytes
    // storport.sys .rdata:0x5f278, 0x2be18 bytes
    // storport.sys .rdata:0x6f508, 0x440c8 bytes
    // storport.sys .rdata:0x5f278, 0x2be18 bytes
    //
    _u19(sdk::unknown_ptr) event_request_timer_call;
    
    // [EventResetDetected]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47820, 0x1b430 bytes
    // storport.sys .rdata:0x5ee60, 0x2be18 bytes
    // storport.sys .rdata:0x6efb0, 0x440c8 bytes
    // storport.sys .rdata:0x5ee60, 0x2be18 bytes
    //
    _u20(sdk::unknown_ptr) event_reset_detected;
    
    // [EventSetAdapterResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479e0, 0x1b430 bytes
    // storport.sys .rdata:0x59f38, 0x2be18 bytes
    // storport.sys .rdata:0x6f320, 0x440c8 bytes
    // storport.sys .rdata:0x59f38, 0x2be18 bytes
    //
    _u21(sdk::unknown_ptr) event_set_adapter_resource_list;
    
    // [EventSetLunQueueDepthBtl8]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b40, 0x1b430 bytes
    // storport.sys .rdata:0x5f348, 0x2be18 bytes
    // storport.sys .rdata:0x6f5e8, 0x440c8 bytes
    // storport.sys .rdata:0x5f348, 0x2be18 bytes
    //
    _u22(sdk::unknown_ptr) event_set_lun_queue_depth_btl8;
    
    // [EventStateChangeDetected]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x478e0, 0x1b430 bytes
    // storport.sys .rdata:0x5efa0, 0x2be18 bytes
    // storport.sys .rdata:0x6f130, 0x440c8 bytes
    // storport.sys .rdata:0x5efa0, 0x2be18 bytes
    //
    _u23(sdk::unknown_ptr) event_state_change_detected;
    
    // [EventTargetReset]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47870, 0x1b430 bytes
    // storport.sys .rdata:0x5ef30, 0x2be18 bytes
    // storport.sys .rdata:0x6f0a0, 0x440c8 bytes
    // storport.sys .rdata:0x5ef30, 0x2be18 bytes
    //
    _u24(sdk::unknown_ptr) event_target_reset;
    
    // [EventTargetedReenumeration]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ae0, 0x1b430 bytes
    // storport.sys .rdata:0x5f2e8, 0x2be18 bytes
    // storport.sys .rdata:0x6f588, 0x440c8 bytes
    // storport.sys .rdata:0x5f2e8, 0x2be18 bytes
    //
    _u25(sdk::unknown_ptr) event_targeted_reenumeration;
    
    // [EventUnitAbortTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47b60, 0x1b430 bytes
    // storport.sys .rdata:0x5f3d8, 0x2be18 bytes
    // storport.sys .rdata:0x6f668, 0x440c8 bytes
    // storport.sys .rdata:0x5f3d8, 0x2be18 bytes
    //
    _u26(sdk::unknown_ptr) event_unit_abort_timeout;
    
    // [EventUnitActiveConditionStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c10, 0x1b430 bytes
    // storport.sys .rdata:0x5f4b8, 0x2be18 bytes
    // storport.sys .rdata:0x6f768, 0x440c8 bytes
    // storport.sys .rdata:0x5f4b8, 0x2be18 bytes
    //
    _u27(sdk::unknown_ptr) event_unit_active_condition_start;
    
    // [EventUnitActiveConditionStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47900, 0x1b430 bytes
    // storport.sys .rdata:0x5efc0, 0x2be18 bytes
    // storport.sys .rdata:0x6f160, 0x440c8 bytes
    // storport.sys .rdata:0x5efc0, 0x2be18 bytes
    //
    _u28(sdk::unknown_ptr) event_unit_active_condition_stop;
    
    // [EventUnitHwTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47cd0, 0x1b430 bytes
    // storport.sys .rdata:0x5f5d8, 0x2be18 bytes
    // storport.sys .rdata:0x6f868, 0x440c8 bytes
    // storport.sys .rdata:0x5f5d8, 0x2be18 bytes
    //
    _u29(sdk::unknown_ptr) event_unit_hw_timeout;
    
    // [EventUnitIdleConditionStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44530, 0x1b430 bytes
    // storport.sys .rdata:0x5ef20, 0x2be18 bytes
    // storport.sys .rdata:0x6f090, 0x440c8 bytes
    // storport.sys .rdata:0x5ef20, 0x2be18 bytes
    //
    _u30(sdk::unknown_ptr) event_unit_idle_condition_start;
    
    // [EventUnitIdleConditionStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44520, 0x1b430 bytes
    // storport.sys .rdata:0x5f5e8, 0x2be18 bytes
    // storport.sys .rdata:0x6f878, 0x440c8 bytes
    // storport.sys .rdata:0x5f5e8, 0x2be18 bytes
    //
    _u31(sdk::unknown_ptr) event_unit_idle_condition_stop;
    
    // [EventUnitIdleStateQueued]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x478b0, 0x1b430 bytes
    // storport.sys .rdata:0x5ef70, 0x2be18 bytes
    // storport.sys .rdata:0x6a0f0, 0x440c8 bytes
    // storport.sys .rdata:0x5ef70, 0x2be18 bytes
    //
    _u32(sdk::unknown_ptr) event_unit_idle_state_queued;
    
    // [EventUnitIdleStateStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c40, 0x1b430 bytes
    // storport.sys .rdata:0x5f508, 0x2be18 bytes
    // storport.sys .rdata:0x6a1a8, 0x440c8 bytes
    // storport.sys .rdata:0x5f508, 0x2be18 bytes
    //
    _u33(sdk::unknown_ptr) event_unit_idle_state_start;
    
    // [EventUnitIdleStateStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47a80, 0x1b430 bytes
    // storport.sys .rdata:0x5f248, 0x2be18 bytes
    // storport.sys .rdata:0x6a150, 0x440c8 bytes
    // storport.sys .rdata:0x5f248, 0x2be18 bytes
    //
    _u34(sdk::unknown_ptr) event_unit_idle_state_stop;
    
    // [EventUnitIdleTimeoutValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44700, 0x1b430 bytes
    // storport.sys .rdata:0x5f518, 0x2be18 bytes
    // storport.sys .rdata:0x6f7b8, 0x440c8 bytes
    // storport.sys .rdata:0x5f518, 0x2be18 bytes
    //
    _u35(sdk::unknown_ptr) event_unit_idle_timeout_value;
    
    // [EventUnitPoFxRegistered]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ba0, 0x1b430 bytes
    // storport.sys .rdata:0x5f428, 0x2be18 bytes
    // storport.sys .rdata:0x6f6d8, 0x440c8 bytes
    // storport.sys .rdata:0x5f428, 0x2be18 bytes
    //
    _u36(sdk::unknown_ptr) event_unit_po_fx_registered;
    
    // [EventUnitPowerCycleCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47850, 0x1b430 bytes
    // storport.sys .rdata:0x5eee0, 0x2be18 bytes
    // storport.sys .rdata:0x6f040, 0x440c8 bytes
    // storport.sys .rdata:0x5eee0, 0x2be18 bytes
    //
    _u37(sdk::unknown_ptr) event_unit_power_cycle_count;
    
    // [EventUnitPowerNotRequiredStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x479a0, 0x1b430 bytes
    // storport.sys .rdata:0x5f0d0, 0x2be18 bytes
    // storport.sys .rdata:0x6f2a0, 0x440c8 bytes
    // storport.sys .rdata:0x5f0d0, 0x2be18 bytes
    //
    _u38(sdk::unknown_ptr) event_unit_power_not_required_start;
    
    // [EventUnitPowerNotRequiredStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47c30, 0x1b430 bytes
    // storport.sys .rdata:0x5f4e8, 0x2be18 bytes
    // storport.sys .rdata:0x6a180, 0x440c8 bytes
    // storport.sys .rdata:0x5f4e8, 0x2be18 bytes
    //
    _u39(sdk::unknown_ptr) event_unit_power_not_required_stop;
    
    // [EventUnitPowerRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x478f0, 0x1b430 bytes
    // storport.sys .rdata:0x5efb0, 0x2be18 bytes
    // storport.sys .rdata:0x6f150, 0x440c8 bytes
    // storport.sys .rdata:0x5efb0, 0x2be18 bytes
    //
    _u40(sdk::unknown_ptr) event_unit_power_request;
    
    // [EventUnitPowerRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47950, 0x1b430 bytes
    // storport.sys .rdata:0x5f040, 0x2be18 bytes
    // storport.sys .rdata:0x6a100, 0x440c8 bytes
    // storport.sys .rdata:0x5f040, 0x2be18 bytes
    //
    _u41(sdk::unknown_ptr) event_unit_power_request_complete;
    
    // [EventUnitPowerRequiredStart]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x477c0, 0x1b430 bytes
    // storport.sys .rdata:0x5edd0, 0x2be18 bytes
    // storport.sys .rdata:0x6ef10, 0x440c8 bytes
    // storport.sys .rdata:0x5edd0, 0x2be18 bytes
    //
    _u42(sdk::unknown_ptr) event_unit_power_required_start;
    
    // [EventUnitPowerRequiredStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ad0, 0x1b430 bytes
    // storport.sys .rdata:0x5f2b8, 0x2be18 bytes
    // storport.sys .rdata:0x6a160, 0x440c8 bytes
    // storport.sys .rdata:0x5f2b8, 0x2be18 bytes
    //
    _u43(sdk::unknown_ptr) event_unit_power_required_stop;
    
    // [EventUnitResponsive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47ac0, 0x1b430 bytes
    // storport.sys .rdata:0x5f2a8, 0x2be18 bytes
    // storport.sys .rdata:0x6f538, 0x440c8 bytes
    // storport.sys .rdata:0x5f2a8, 0x2be18 bytes
    //
    _u44(sdk::unknown_ptr) event_unit_responsive;
    
    // [EventUnitUnresponsive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47bb0, 0x1b430 bytes
    // storport.sys .rdata:0x5f448, 0x2be18 bytes
    // storport.sys .rdata:0x6f6f8, 0x440c8 bytes
    // storport.sys .rdata:0x5f448, 0x2be18 bytes
    //
    _u45(sdk::unknown_ptr) event_unit_unresponsive;
    
    // [EventWriteRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47810, 0x1b430 bytes
    // storport.sys .rdata:0x5ee40, 0x2be18 bytes
    // storport.sys .rdata:0x6ef90, 0x440c8 bytes
    // storport.sys .rdata:0x5ee40, 0x2be18 bytes
    //
    _u46(sdk::unknown_ptr) event_write_request;
    
    // [FillBufferWithDriverTelemetryDump]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42150, 0x1b430 bytes
    // storport.sys .text:0x55864, 0x2be18 bytes
    // storport.sys .text:0x63e3c, 0x440c8 bytes
    // storport.sys .text:0x55864, 0x2be18 bytes
    //
    _u47(sdk::unknown_ptr) fill_buffer_with_driver_telemetry_dump;
    
    // [g_InWinPE]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e661, 0x1b430 bytes
    // storport.sys .data:0x67e29, 0x2be18 bytes
    // storport.sys .data:0x7a075, 0x440c8 bytes
    // storport.sys .data:0x67e29, 0x2be18 bytes
    //
    _u48(sdk::unknown_ptr) g_in_win_pe;
    
    // [g_OSisUpgrade]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e660, 0x1b430 bytes
    // storport.sys .data:0x67e28, 0x2be18 bytes
    // storport.sys .data:0x7a074, 0x440c8 bytes
    // storport.sys .data:0x67e28, 0x2be18 bytes
    //
    _u49(sdk::unknown_ptr) g_o_sis_upgrade;
    
    // [g_RaidDPCRedirectionInitLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e690, 0x1b430 bytes
    // storport.sys .data:0x67db0, 0x2be18 bytes
    // storport.sys .data:0x79aa8, 0x440c8 bytes
    // storport.sys .data:0x67db0, 0x2be18 bytes
    //
    _u50(sdk::unknown_ptr) g_raid_dpc_redirection_init_lock;
    
    // [g_RaidDPCRedirectionProcessors]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e608, 0x1b430 bytes
    // storport.sys .data:0x67d58, 0x2be18 bytes
    // storport.sys .data:0x79a60, 0x440c8 bytes
    // storport.sys .data:0x67d58, 0x2be18 bytes
    //
    _u51(sdk::unknown_ptr) g_raid_dpc_redirection_processors;
    
    // [g_RaidLogControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e1f0, 0x1b430 bytes
    // storport.sys .data:0x67348, 0x2be18 bytes
    // storport.sys .data:0x793d8, 0x440c8 bytes
    // storport.sys .data:0x67348, 0x2be18 bytes
    //
    _u52(sdk::unknown_ptr) g_raid_log_control;
    
    // [g_RaidNumaHighestNodeNumber]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e678, 0x1b430 bytes
    // storport.sys .data:0x67d94, 0x2be18 bytes
    // storport.sys .data:0x79b08, 0x440c8 bytes
    // storport.sys .data:0x67d94, 0x2be18 bytes
    //
    _u53(sdk::unknown_ptr) g_raid_numa_highest_node_number;
    
    // [g_RaidNumberProcessors]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e674, 0x1b430 bytes
    // storport.sys .data:0x67da4, 0x2be18 bytes
    // storport.sys .data:0x79b1c, 0x440c8 bytes
    // storport.sys .data:0x67da4, 0x2be18 bytes
    //
    _u54(sdk::unknown_ptr) g_raid_number_processors;
    
    // [g_RaidPerProcessorState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e630, 0x1b430 bytes
    // storport.sys .data:0x67d68, 0x2be18 bytes
    // storport.sys .data:0x79a70, 0x440c8 bytes
    // storport.sys .data:0x67d68, 0x2be18 bytes
    //
    _u55(sdk::unknown_ptr) g_raid_per_processor_state;
    
    // [g_RaidPerfRedirectGroupCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e62c, 0x1b430 bytes
    // storport.sys .data:0x67d60, 0x2be18 bytes
    // storport.sys .data:0x79a68, 0x440c8 bytes
    // storport.sys .data:0x67d60, 0x2be18 bytes
    //
    _u56(sdk::unknown_ptr) g_raid_perf_redirect_group_count;
    
    // [g_RaidPerfRedirectRefCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e698, 0x1b430 bytes
    // storport.sys .data:0x67db8, 0x2be18 bytes
    // storport.sys .data:0x79ab0, 0x440c8 bytes
    // storport.sys .data:0x67db8, 0x2be18 bytes
    //
    _u57(sdk::unknown_ptr) g_raid_perf_redirect_ref_count;
    
    // [g_StorpTraceLoggingCriticalEventMaximum]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e21c, 0x1b430 bytes
    // storport.sys .data:0x67330, 0x2be18 bytes
    // storport.sys .data:0x793b8, 0x440c8 bytes
    // storport.sys .data:0x67330, 0x2be18 bytes
    //
    _u58(sdk::unknown_ptr) g_storp_trace_logging_critical_event_maximum;
    
    // [g_StorpTraceLoggingDailyTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e3e0, 0x1b430 bytes
    // storport.sys .data:0x674a0, 0x2be18 bytes
    // storport.sys .data:0x795a0, 0x440c8 bytes
    // storport.sys .data:0x674a0, 0x2be18 bytes
    //
    _u59(sdk::unknown_ptr) g_storp_trace_logging_daily_timer;
    
    // [g_StorpTraceLoggingDailyTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e2e0, 0x1b430 bytes
    // storport.sys .data:0x67420, 0x2be18 bytes
    // storport.sys .data:0x794e0, 0x440c8 bytes
    // storport.sys .data:0x67420, 0x2be18 bytes
    //
    _u60(sdk::unknown_ptr) g_storp_trace_logging_daily_timer_dpc;
    
    // [g_StorpTraceLoggingErrorDataEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e218, 0x1b430 bytes
    // storport.sys .data:0x67320, 0x2be18 bytes
    // storport.sys .data:0x793a8, 0x440c8 bytes
    // storport.sys .data:0x67320, 0x2be18 bytes
    //
    _u61(sdk::unknown_ptr) g_storp_trace_logging_error_data_enabled;
    
    // [g_StorpTraceLoggingHierarchicalResetTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e2a0, 0x1b430 bytes
    // storport.sys .data:0x673e0, 0x2be18 bytes
    // storport.sys .data:0x794a0, 0x440c8 bytes
    // storport.sys .data:0x673e0, 0x2be18 bytes
    //
    _u62(sdk::unknown_ptr) g_storp_trace_logging_hierarchical_reset_timer;
    
    // [g_StorpTraceLoggingHierarchicalResetTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e420, 0x1b430 bytes
    // storport.sys .data:0x674e0, 0x2be18 bytes
    // storport.sys .data:0x795e0, 0x440c8 bytes
    // storport.sys .data:0x674e0, 0x2be18 bytes
    //
    _u63(sdk::unknown_ptr) g_storp_trace_logging_hierarchical_reset_timer_dpc;
    
    // [g_StorpTraceLoggingPerformanceEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e220, 0x1b430 bytes
    // storport.sys .data:0x67358, 0x2be18 bytes
    // storport.sys .data:0x793f0, 0x440c8 bytes
    // storport.sys .data:0x67358, 0x2be18 bytes
    //
    _u64(sdk::unknown_ptr) g_storp_trace_logging_performance_enabled;
    
    // [g_StorpTraceLoggingPerformanceHighResolutionTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e208, 0x1b430 bytes
    // storport.sys .data:0x6731c, 0x2be18 bytes
    // storport.sys .data:0x79398, 0x440c8 bytes
    // storport.sys .data:0x6731c, 0x2be18 bytes
    //
    _u65(sdk::unknown_ptr) g_storp_trace_logging_performance_high_resolution_timer;
    
    // [g_StorpTraceLoggingPerformanceTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e320, 0x1b430 bytes
    // storport.sys .data:0x67460, 0x2be18 bytes
    // storport.sys .data:0x79520, 0x440c8 bytes
    // storport.sys .data:0x67460, 0x2be18 bytes
    //
    _u66(sdk::unknown_ptr) g_storp_trace_logging_performance_timer;
    
    // [g_StorpTraceLoggingPerformanceTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e460, 0x1b430 bytes
    // storport.sys .data:0x675a0, 0x2be18 bytes
    // storport.sys .data:0x796e0, 0x440c8 bytes
    // storport.sys .data:0x675a0, 0x2be18 bytes
    //
    _u67(sdk::unknown_ptr) g_storp_trace_logging_performance_timer_dpc;
    
    // [GUID_DEVICEDUMP_DRIVER_STORAGE_PORT]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47d90, 0x1b430 bytes
    // storport.sys .rdata:0x5fa28, 0x2be18 bytes
    // storport.sys .rdata:0x6ffa8, 0x440c8 bytes
    // storport.sys .rdata:0x5fa28, 0x2be18 bytes
    //
    _u68(sdk::unknown_ptr) guid_devicedump_driver_storage_port;
    
    // [GUID_DEVINTERFACE_SES]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47d60, 0x1b430 bytes
    // storport.sys .rdata:0x5f9b8, 0x2be18 bytes
    // storport.sys .rdata:0x6ff38, 0x440c8 bytes
    // storport.sys .rdata:0x5f9b8, 0x2be18 bytes
    //
    _u69(struct nt::guid_t*) guid_devinterface_ses;
    
    // [GUID_DEVINTERFACE_STORAGEPORT]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x445a0, 0x1b430 bytes
    // storport.sys .rdata:0x5f678, 0x2be18 bytes
    // storport.sys .rdata:0x6f950, 0x440c8 bytes
    // storport.sys .rdata:0x5f678, 0x2be18 bytes
    //
    _u70(struct nt::guid_t*) guid_devinterface_storageport;
    
    // [GUID_DEVINTERFACE_THERMAL_COOLING]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47990, 0x1b430 bytes
    // storport.sys .rdata:0x5f0c0, 0x2be18 bytes
    // storport.sys .rdata:0x6a120, 0x440c8 bytes
    // storport.sys .rdata:0x5f0c0, 0x2be18 bytes
    //
    _u71(struct nt::guid_t*) guid_devinterface_thermal_cooling;
    
    // [GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47d10, 0x1b430 bytes
    // storport.sys .rdata:0x5f688, 0x2be18 bytes
    // storport.sys .rdata:0x6f960, 0x440c8 bytes
    // storport.sys .rdata:0x5f688, 0x2be18 bytes
    //
    _u72(struct nt::guid_t*) guid_devinterface_unified_access_rpmb;
    
    // [GUID_DEVINTERFACE_VMLUN]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47d70, 0x1b430 bytes
    // storport.sys .rdata:0x5f9e8, 0x2be18 bytes
    // storport.sys .rdata:0x6ff68, 0x440c8 bytes
    // storport.sys .rdata:0x5f9e8, 0x2be18 bytes
    //
    _u73(struct nt::guid_t*) guid_devinterface_vmlun;
    
    // [GUID_DISK_MAX_POWER]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44580, 0x1b430 bytes
    // storport.sys .rdata:0x5f0b0, 0x2be18 bytes
    // storport.sys .rdata:0x6a110, 0x440c8 bytes
    // storport.sys .rdata:0x5f0b0, 0x2be18 bytes
    //
    _u74(struct nt::guid_t*) guid_disk_max_power;
    
    // [GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44680, 0x1b430 bytes
    // storport.sys .rdata:0x60838, 0x2be18 bytes
    // storport.sys .rdata:0x71578, 0x440c8 bytes
    // storport.sys .rdata:0x60838, 0x2be18 bytes
    //
    _u75(sdk::unknown_ptr) guid_keep_io_port_resource_requirement_rule;
    
    // [GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x445e0, 0x1b430 bytes
    // storport.sys .rdata:0x5f3a8, 0x2be18 bytes
    // storport.sys .rdata:0x6f638, 0x440c8 bytes
    // storport.sys .rdata:0x5f3a8, 0x2be18 bytes
    //
    _u76(sdk::unknown_ptr) guid_storage_query_fdo_device_relations;
    
    // [GUID_STORAGE_QUERY_FDO_INFO]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x445f0, 0x1b430 bytes
    // storport.sys .rdata:0x5f030, 0x2be18 bytes
    // storport.sys .rdata:0x6f1e0, 0x440c8 bytes
    // storport.sys .rdata:0x5f030, 0x2be18 bytes
    //
    _u77(sdk::unknown_ptr) guid_storage_query_fdo_info;
    
    // [GUID_STORAGE_QUERY_PDO_INFO]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x445d0, 0x1b430 bytes
    // storport.sys .rdata:0x59ef8, 0x2be18 bytes
    // storport.sys .rdata:0x6a098, 0x440c8 bytes
    // storport.sys .rdata:0x59ef8, 0x2be18 bytes
    //
    _u78(sdk::unknown_ptr) guid_storage_query_pdo_info;
    
    // [HiberFileHybridPriority]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e264, 0x1b430 bytes
    // storport.sys .data:0x67368, 0x2be18 bytes
    // storport.sys .data:0x793f4, 0x440c8 bytes
    // storport.sys .data:0x67368, 0x2be18 bytes
    //
    _u79(sdk::unknown_ptr) hiber_file_hybrid_priority;
    
    // [HighestPhysicalAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e200, 0x1b430 bytes
    // storport.sys .data:0x67370, 0x2be18 bytes
    // storport.sys .data:0x79430, 0x440c8 bytes
    // storport.sys .data:0x67370, 0x2be18 bytes
    //
    _u80(sdk::unknown_ptr) highest_physical_address;
    
    // [HmbAllocationPolicy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e704, 0x1b430 bytes
    // storport.sys .data:0x67378, 0x2be18 bytes
    // storport.sys .data:0x79438, 0x440c8 bytes
    // storport.sys .data:0x67378, 0x2be18 bytes
    //
    _u81(sdk::unknown_ptr) hmb_allocation_policy;
    
    // [InitSecurityCookie]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e649, 0x1b430 bytes
    // storport.sys .data:0x67e21, 0x2be18 bytes
    // storport.sys .data:0x79ba1, 0x440c8 bytes
    // storport.sys .data:0x67e21, 0x2be18 bytes
    //
    _u82(sdk::unknown_ptr) init_security_cookie;
    
    // [InitializeBusesWithVmLunsBitmap]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xd1a4, 0x1b430 bytes
    // storport.sys .text:0x27cd4, 0x2be18 bytes
    // storport.sys .text:0x30ecc, 0x440c8 bytes
    // storport.sys .text:0x27cd4, 0x2be18 bytes
    //
    _u83(sdk::unknown_ptr) initialize_buses_with_vm_luns_bitmap;
    
    // [IsBlankIdPage]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13870, 0x1b430 bytes
    // storport.sys .text:0x10764, 0x2be18 bytes
    // storport.sys .text:0x13a14, 0x440c8 bytes
    // storport.sys .text:0x10764, 0x2be18 bytes
    //
    _u84(sdk::function<uint8_t(struct stor::port::vpd_identification_page_t*)>*) is_blank_id_page;
    
    // [IsSystemAoAC]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e6c4, 0x1b430 bytes
    // storport.sys .data:0x67e15, 0x2be18 bytes
    // storport.sys .data:0x79ab9, 0x440c8 bytes
    // storport.sys .data:0x67e15, 0x2be18 bytes
    //
    _u85(sdk::unknown_ptr) is_system_ao_ac;
    
    // [LunQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x446f0, 0x1b430 bytes
    // storport.sys .rdata:0x59f48, 0x2be18 bytes
    // storport.sys .rdata:0x6a140, 0x440c8 bytes
    // storport.sys .rdata:0x59f48, 0x2be18 bytes
    //
    _u86(sdk::unknown_ptr) lun_queue;
    
    // [Microsoft_Windows_StorPortEnableBits]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e600, 0x1b430 bytes
    // storport.sys .data:0x67840, 0x2be18 bytes
    // storport.sys .data:0x799c0, 0x440c8 bytes
    // storport.sys .data:0x67840, 0x2be18 bytes
    //
    _u87(sdk::unknown_ptr) microsoft_windows_stor_port_enable_bits;
    
    // [Microsoft_Windows_StorPortKeywords]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44bb0, 0x1b430 bytes
    // storport.sys .rdata:0x5a4d0, 0x2be18 bytes
    // storport.sys .rdata:0x6a5d0, 0x440c8 bytes
    // storport.sys .rdata:0x5a4d0, 0x2be18 bytes
    //
    _u88(sdk::unknown_ptr) microsoft_windows_stor_port_keywords;
    
    // [Microsoft_Windows_StorPortLevels]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44cc8, 0x1b430 bytes
    // storport.sys .rdata:0x5a650, 0x2be18 bytes
    // storport.sys .rdata:0x6a798, 0x440c8 bytes
    // storport.sys .rdata:0x5a650, 0x2be18 bytes
    //
    _u89(sdk::unknown_ptr) microsoft_windows_stor_port_levels;
    
    // [MiniportBugActionPolicy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e260, 0x1b430 bytes
    // storport.sys .data:0x6736c, 0x2be18 bytes
    // storport.sys .data:0x7942c, 0x440c8 bytes
    // storport.sys .data:0x6736c, 0x2be18 bytes
    //
    _u90(sdk::unknown_ptr) miniport_bug_action_policy;
    
    // [NumDllInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e6b0, 0x1b430 bytes
    // storport.sys .data:0x67e30, 0x2be18 bytes
    // storport.sys .data:0x7a078, 0x440c8 bytes
    // storport.sys .data:0x67e30, 0x2be18 bytes
    //
    _u91(sdk::unknown_ptr) num_dll_initialize;
    
    // [PhysicalMemorySize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e650, 0x1b430 bytes
    // storport.sys .data:0x67d78, 0x2be18 bytes
    // storport.sys .data:0x79bc0, 0x440c8 bytes
    // storport.sys .data:0x67d78, 0x2be18 bytes
    //
    _u92(sdk::unknown_ptr) physical_memory_size;
    
    // [PortAllocateRegistryBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16890, 0x1b430 bytes
    // storport.sys .text:0x56af0, 0x2be18 bytes
    // storport.sys .text:0x67864, 0x440c8 bytes
    // storport.sys .text:0x56af0, 0x2be18 bytes
    //
    _u93(sdk::unknown_ptr) port_allocate_registry_buffer;
    
    // [PortAllowIrpFromPdoToFdo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ed2c, 0x1b430 bytes
    // storport.sys PAGE:0x7addc, 0x2be18 bytes
    // storport.sys PAGE:0x9310c, 0x440c8 bytes
    // storport.sys PAGE:0x7addc, 0x2be18 bytes
    //
    _u94(sdk::unknown_ptr) port_allow_irp_from_pdo_to_fdo;
    
    // [PortBuildRegKeyName]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16108, 0x1b430 bytes
    // storport.sys .text:0x56b84, 0x2be18 bytes
    // storport.sys .text:0x678d8, 0x440c8 bytes
    // storport.sys .text:0x56b84, 0x2be18 bytes
    //
    _u95(sdk::unknown_ptr) port_build_reg_key_name;
    
    // [PortFreeDriverParameters]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ef48, 0x1b430 bytes
    // storport.sys PAGE:0x79e14, 0x2be18 bytes
    // storport.sys PAGE:0x92160, 0x440c8 bytes
    // storport.sys PAGE:0x79e14, 0x2be18 bytes
    //
    _u96(sdk::unknown_ptr) port_free_driver_parameters;
    
    // [PortGetDeviceType]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59828, 0x1b430 bytes
    // storport.sys PAGE:0x71484, 0x2be18 bytes
    // storport.sys PAGE:0x87778, 0x440c8 bytes
    // storport.sys PAGE:0x71484, 0x2be18 bytes
    //
    _u97(sdk::function<const struct stor::port::scsi_device_type_t*(uint32_t)>*) port_get_device_type;
    
    // [PortGetDriverParameters]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57aac, 0x1b430 bytes
    // storport.sys PAGE:0x7a06c, 0x2be18 bytes
    // storport.sys PAGE:0x923b0, 0x440c8 bytes
    // storport.sys PAGE:0x7a06c, 0x2be18 bytes
    //
    _u98(sdk::unknown_ptr) port_get_driver_parameters;
    
    // [PortGetIoLatencyCapValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x598d4, 0x1b430 bytes
    // storport.sys PAGE:0x7a0fc, 0x2be18 bytes
    // storport.sys PAGE:0x92440, 0x440c8 bytes
    // storport.sys PAGE:0x7a0fc, 0x2be18 bytes
    //
    _u99(sdk::unknown_ptr) port_get_io_latency_cap_value;
    
    // [PortGetIoTimeoutValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x599b8, 0x1b430 bytes
    // storport.sys PAGE:0x7a218, 0x2be18 bytes
    // storport.sys PAGE:0x92558, 0x440c8 bytes
    // storport.sys PAGE:0x7a218, 0x2be18 bytes
    //
    _v00(sdk::unknown_ptr) port_get_io_timeout_value;
    
    // [PortGetLinkTimeoutValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf89c, 0x1b430 bytes
    // storport.sys .text:0x57520, 0x2be18 bytes
    // storport.sys .text:0x6822c, 0x440c8 bytes
    // storport.sys .text:0x57520, 0x2be18 bytes
    //
    _v01(sdk::unknown_ptr) port_get_link_timeout_value;
    
    // [PortGetRegistrySettings]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57b18, 0x1b430 bytes
    // storport.sys PAGE:0x7a33c, 0x2be18 bytes
    // storport.sys PAGE:0x92674, 0x440c8 bytes
    // storport.sys PAGE:0x7a33c, 0x2be18 bytes
    //
    _v02(sdk::unknown_ptr) port_get_registry_settings;
    
    // [PortMapBuildAdapterEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x102ec, 0x1b430 bytes
    // storport.sys .text:0x571c4, 0x2be18 bytes
    // storport.sys .text:0x67ecc, 0x440c8 bytes
    // storport.sys .text:0x571c4, 0x2be18 bytes
    //
    _v03(sdk::unknown_ptr) port_map_build_adapter_entry;
    
    // [PortMapBuildBusEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12f08, 0x1b430 bytes
    // storport.sys .text:0x572d8, 0x2be18 bytes
    // storport.sys .text:0x67fe0, 0x440c8 bytes
    // storport.sys .text:0x572d8, 0x2be18 bytes
    //
    _v04(sdk::unknown_ptr) port_map_build_bus_entry;
    
    // [PortMapBuildLunEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x103d0, 0x1b430 bytes
    // storport.sys .text:0x189f4, 0x2be18 bytes
    // storport.sys .text:0x1b59c, 0x440c8 bytes
    // storport.sys .text:0x189f4, 0x2be18 bytes
    //
    _v05(sdk::unknown_ptr) port_map_build_lun_entry;
    
    // [PortMapDeleteAdapterEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42c14, 0x1b430 bytes
    // storport.sys .text:0x57358, 0x2be18 bytes
    // storport.sys .text:0x68060, 0x440c8 bytes
    // storport.sys .text:0x57358, 0x2be18 bytes
    //
    _v06(sdk::unknown_ptr) port_map_delete_adapter_entry;
    
    // [PortMapDeleteLunEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42ce8, 0x1b430 bytes
    // storport.sys .text:0x18c04, 0x2be18 bytes
    // storport.sys .text:0x1b7b4, 0x440c8 bytes
    // storport.sys .text:0x18c04, 0x2be18 bytes
    //
    _v07(sdk::unknown_ptr) port_map_delete_lun_entry;
    
    // [PortMapOpenKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe2c4, 0x1b430 bytes
    // storport.sys .text:0x57460, 0x2be18 bytes
    // storport.sys .text:0x6816c, 0x440c8 bytes
    // storport.sys .text:0x57460, 0x2be18 bytes
    //
    _v08(sdk::unknown_ptr) port_map_open_key;
    
    // [PortMiniportRegistryRead]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15fb4, 0x1b430 bytes
    // storport.sys .text:0x56cec, 0x2be18 bytes
    // storport.sys .text:0x67a88, 0x440c8 bytes
    // storport.sys .text:0x56cec, 0x2be18 bytes
    //
    _v09(sdk::unknown_ptr) port_miniport_registry_read;
    
    // [PortMiniportRegistryWrite]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42a5c, 0x1b430 bytes
    // storport.sys .text:0x56f10, 0x2be18 bytes
    // storport.sys .text:0x67cac, 0x440c8 bytes
    // storport.sys .text:0x56f10, 0x2be18 bytes
    //
    _v10(sdk::unknown_ptr) port_miniport_registry_write;
    
    // [PortOpenDeviceKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58414, 0x1b430 bytes
    // storport.sys PAGE:0x7a3cc, 0x2be18 bytes
    // storport.sys PAGE:0x92704, 0x440c8 bytes
    // storport.sys PAGE:0x7a3cc, 0x2be18 bytes
    //
    _v11(sdk::unknown_ptr) port_open_device_key;
    
    // [PortPassThroughApplyNormalizedRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42dc0, 0x1b430 bytes
    // storport.sys .text:0x575b0, 0x2be18 bytes
    // storport.sys .text:0x1e1ac, 0x440c8 bytes
    // storport.sys .text:0x575b0, 0x2be18 bytes
    //
    _v12(sdk::unknown_ptr) port_pass_through_apply_normalized_request;
    
    // [PortPassThroughBasicValidation]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42e2c, 0x1b430 bytes
    // storport.sys .text:0x57628, 0x2be18 bytes
    // storport.sys .text:0x1dea4, 0x440c8 bytes
    // storport.sys .text:0x57628, 0x2be18 bytes
    //
    _v13(sdk::unknown_ptr) port_pass_through_basic_validation;
    
    // [PortPassThroughBuildSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f02c, 0x1b430 bytes
    // storport.sys PAGE:0x7b030, 0x2be18 bytes
    // storport.sys PAGE:0x87ddc, 0x440c8 bytes
    // storport.sys PAGE:0x7b030, 0x2be18 bytes
    //
    _v14(sdk::unknown_ptr) port_pass_through_build_srb;
    
    // [PortPassThroughExApplyNormalizedRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42e5c, 0x1b430 bytes
    // storport.sys .text:0x57664, 0x2be18 bytes
    // storport.sys .text:0x682bc, 0x440c8 bytes
    // storport.sys .text:0x57664, 0x2be18 bytes
    //
    _v15(sdk::unknown_ptr) port_pass_through_ex_apply_normalized_request;
    
    // [PortPassThroughExBasicValidation]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42ecc, 0x1b430 bytes
    // storport.sys .text:0x576e0, 0x2be18 bytes
    // storport.sys .text:0x68338, 0x440c8 bytes
    // storport.sys .text:0x576e0, 0x2be18 bytes
    //
    _v16(sdk::unknown_ptr) port_pass_through_ex_basic_validation;
    
    // [PortPassThroughExBuildSrbEx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f0c4, 0x1b430 bytes
    // storport.sys PAGE:0x7b0e4, 0x2be18 bytes
    // storport.sys PAGE:0x93360, 0x440c8 bytes
    // storport.sys PAGE:0x7b0e4, 0x2be18 bytes
    //
    _v17(sdk::unknown_ptr) port_pass_through_ex_build_srb_ex;
    
    // [PortPassThroughExFreeSrbEx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42f58, 0x1b430 bytes
    // storport.sys .text:0x57774, 0x2be18 bytes
    // storport.sys .text:0x683cc, 0x440c8 bytes
    // storport.sys .text:0x57774, 0x2be18 bytes
    //
    _v18(sdk::unknown_ptr) port_pass_through_ex_free_srb_ex;
    
    // [PortPassThroughExGetDataBuffers]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f340, 0x1b430 bytes
    // storport.sys PAGE:0x7b380, 0x2be18 bytes
    // storport.sys PAGE:0x9363c, 0x440c8 bytes
    // storport.sys PAGE:0x7b380, 0x2be18 bytes
    //
    _v19(sdk::unknown_ptr) port_pass_through_ex_get_data_buffers;
    
    // [PortPassThroughExMarshalResultsFromSrbEx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42fb4, 0x1b430 bytes
    // storport.sys .text:0x577e0, 0x2be18 bytes
    // storport.sys .text:0x68438, 0x440c8 bytes
    // storport.sys .text:0x577e0, 0x2be18 bytes
    //
    _v20(sdk::unknown_ptr) port_pass_through_ex_marshal_results_from_srb_ex;
    
    // [PortPassThroughExNormalize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43170, 0x1b430 bytes
    // storport.sys .text:0x57998, 0x2be18 bytes
    // storport.sys .text:0x685f0, 0x440c8 bytes
    // storport.sys .text:0x57998, 0x2be18 bytes
    //
    _v21(sdk::unknown_ptr) port_pass_through_ex_normalize;
    
    // [PortPassThroughExSendAsync]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f380, 0x1b430 bytes
    // storport.sys PAGE:0x7b3cc, 0x2be18 bytes
    // storport.sys PAGE:0x87b6c, 0x440c8 bytes
    // storport.sys PAGE:0x7b3cc, 0x2be18 bytes
    //
    _v22(sdk::unknown_ptr) port_pass_through_ex_send_async;
    
    // [PortPassThroughExValidate]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x431fc, 0x1b430 bytes
    // storport.sys .text:0x57a30, 0x2be18 bytes
    // storport.sys .text:0x68688, 0x440c8 bytes
    // storport.sys .text:0x57a30, 0x2be18 bytes
    //
    _v23(sdk::unknown_ptr) port_pass_through_ex_validate;
    
    // [PortPassThroughExValidateNormalizedRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f618, 0x1b430 bytes
    // storport.sys PAGE:0x7b68c, 0x2be18 bytes
    // storport.sys PAGE:0x93688, 0x440c8 bytes
    // storport.sys PAGE:0x7b68c, 0x2be18 bytes
    //
    _v24(sdk::unknown_ptr) port_pass_through_ex_validate_normalized_request;
    
    // [PortPassThroughFreeSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43304, 0x1b430 bytes
    // storport.sys .text:0x57b4c, 0x2be18 bytes
    // storport.sys .text:0x1e02c, 0x440c8 bytes
    // storport.sys .text:0x57b4c, 0x2be18 bytes
    //
    _v25(sdk::unknown_ptr) port_pass_through_free_srb;
    
    // [PortPassThroughGetAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f834, 0x1b430 bytes
    // storport.sys PAGE:0x7b8d4, 0x2be18 bytes
    // storport.sys PAGE:0x87f44, 0x440c8 bytes
    // storport.sys PAGE:0x7b8d4, 0x2be18 bytes
    //
    _v26(sdk::unknown_ptr) port_pass_through_get_address;
    
    // [PortPassThroughGetDataBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f8f0, 0x1b430 bytes
    // storport.sys PAGE:0x7b994, 0x2be18 bytes
    // storport.sys PAGE:0x88180, 0x440c8 bytes
    // storport.sys PAGE:0x7b994, 0x2be18 bytes
    //
    _v27(sdk::unknown_ptr) port_pass_through_get_data_buffer;
    
    // [PortPassThroughMarshalResultsFromSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x433d4, 0x1b430 bytes
    // storport.sys .text:0x57c38, 0x2be18 bytes
    // storport.sys .text:0x1e0b4, 0x440c8 bytes
    // storport.sys .text:0x57c38, 0x2be18 bytes
    //
    _v28(sdk::unknown_ptr) port_pass_through_marshal_results_from_srb;
    
    // [PortPassThroughNormalize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43518, 0x1b430 bytes
    // storport.sys .text:0x57d80, 0x2be18 bytes
    // storport.sys .text:0x1e214, 0x440c8 bytes
    // storport.sys .text:0x57d80, 0x2be18 bytes
    //
    _v29(sdk::unknown_ptr) port_pass_through_normalize;
    
    // [PortPassThroughSendAsync]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5f908, 0x1b430 bytes
    // storport.sys PAGE:0x7b9b8, 0x2be18 bytes
    // storport.sys PAGE:0x87c0c, 0x440c8 bytes
    // storport.sys PAGE:0x7b9b8, 0x2be18 bytes
    //
    _v30(sdk::unknown_ptr) port_pass_through_send_async;
    
    // [PortPassThroughSetAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5facc, 0x1b430 bytes
    // storport.sys PAGE:0x7bba8, 0x2be18 bytes
    // storport.sys PAGE:0x87fd8, 0x440c8 bytes
    // storport.sys PAGE:0x7bba8, 0x2be18 bytes
    //
    _v31(sdk::unknown_ptr) port_pass_through_set_address;
    
    // [PortPassThroughSrbInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5fba0, 0x1b430 bytes
    // storport.sys PAGE:0x7bc80, 0x2be18 bytes
    // storport.sys PAGE:0x87e78, 0x440c8 bytes
    // storport.sys PAGE:0x7bc80, 0x2be18 bytes
    //
    _v32(sdk::unknown_ptr) port_pass_through_srb_initialize;
    
    // [PortPassThroughValidate]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5fc70, 0x1b430 bytes
    // storport.sys PAGE:0x7bd4c, 0x2be18 bytes
    // storport.sys PAGE:0x88078, 0x440c8 bytes
    // storport.sys PAGE:0x7bd4c, 0x2be18 bytes
    //
    _v33(sdk::unknown_ptr) port_pass_through_validate;
    
    // [PortPassThroughValidateNormalizedRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5fd58, 0x1b430 bytes
    // storport.sys PAGE:0x7be50, 0x2be18 bytes
    // storport.sys PAGE:0x881a4, 0x440c8 bytes
    // storport.sys PAGE:0x7be50, 0x2be18 bytes
    //
    _v34(sdk::unknown_ptr) port_pass_through_validate_normalized_request;
    
    // [PortQueryInterfaceFdoInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ede8, 0x1b430 bytes
    // storport.sys PAGE:0x7aec0, 0x2be18 bytes
    // storport.sys PAGE:0x931f0, 0x440c8 bytes
    // storport.sys PAGE:0x7aec0, 0x2be18 bytes
    //
    _v35(sdk::unknown_ptr) port_query_interface_fdo_info;
    
    // [PortQueryInterfaceFdoQdr]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ee20, 0x1b430 bytes
    // storport.sys PAGE:0x7af00, 0x2be18 bytes
    // storport.sys PAGE:0x93230, 0x440c8 bytes
    // storport.sys PAGE:0x7af00, 0x2be18 bytes
    //
    _v36(sdk::unknown_ptr) port_query_interface_fdo_qdr;
    
    // [PortQueryInterfacePdoInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ee90, 0x1b430 bytes
    // storport.sys PAGE:0x7af74, 0x2be18 bytes
    // storport.sys PAGE:0x932a4, 0x440c8 bytes
    // storport.sys PAGE:0x7af74, 0x2be18 bytes
    //
    _v37(sdk::unknown_ptr) port_query_interface_pdo_info;
    
    // [PortReadRegistrySettings]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x575d8, 0x1b430 bytes
    // storport.sys PAGE:0x7a4d4, 0x2be18 bytes
    // storport.sys PAGE:0x92810, 0x440c8 bytes
    // storport.sys PAGE:0x7a4d4, 0x2be18 bytes
    //
    _v38(sdk::unknown_ptr) port_read_registry_settings;
    
    // [PortReadStorageBusType]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59aa0, 0x1b430 bytes
    // storport.sys PAGE:0x7a570, 0x2be18 bytes
    // storport.sys PAGE:0x928ac, 0x440c8 bytes
    // storport.sys PAGE:0x7a570, 0x2be18 bytes
    //
    _v39(sdk::unknown_ptr) port_read_storage_bus_type;
    
    // [PortRegistryCreateKeyEx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12f70, 0x1b430 bytes
    // storport.sys .text:0x18d10, 0x2be18 bytes
    // storport.sys .text:0x1b8c4, 0x440c8 bytes
    // storport.sys .text:0x18d10, 0x2be18 bytes
    //
    _v40(sdk::unknown_ptr) port_registry_create_key_ex;
    
    // [PortRegistryRead]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x591d8, 0x1b430 bytes
    // storport.sys PAGE:0x71b38, 0x2be18 bytes
    // storport.sys PAGE:0x862c4, 0x440c8 bytes
    // storport.sys PAGE:0x71b38, 0x2be18 bytes
    //
    _v41(sdk::unknown_ptr) port_registry_read;
    
    // [PortRegistryReadDeviceKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58fc4, 0x1b430 bytes
    // storport.sys PAGE:0x718f4, 0x2be18 bytes
    // storport.sys PAGE:0x86204, 0x440c8 bytes
    // storport.sys PAGE:0x718f4, 0x2be18 bytes
    //
    _v42(sdk::unknown_ptr) port_registry_read_device_key;
    
    // [PortRegistryReadWithHandle]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59070, 0x1b430 bytes
    // storport.sys PAGE:0x72c2c, 0x2be18 bytes
    // storport.sys PAGE:0x87544, 0x440c8 bytes
    // storport.sys PAGE:0x72c2c, 0x2be18 bytes
    //
    _v43(sdk::unknown_ptr) port_registry_read_with_handle;
    
    // [PortRegistrySetValueKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10504, 0x1b430 bytes
    // storport.sys .text:0x18af8, 0x2be18 bytes
    // storport.sys .text:0x1b6a8, 0x440c8 bytes
    // storport.sys .text:0x18af8, 0x2be18 bytes
    //
    _v44(sdk::unknown_ptr) port_registry_set_value_key;
    
    // [PortRegistryWriteDeviceKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5987c, 0x1b430 bytes
    // storport.sys PAGE:0x719b4, 0x2be18 bytes
    // storport.sys PAGE:0x863c8, 0x440c8 bytes
    // storport.sys PAGE:0x719b4, 0x2be18 bytes
    //
    _v45(sdk::unknown_ptr) port_registry_write_device_key;
    
    // [PortRegistryWriteWithHandle]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ef54, 0x1b430 bytes
    // storport.sys PAGE:0x71a50, 0x2be18 bytes
    // storport.sys PAGE:0x8745c, 0x440c8 bytes
    // storport.sys PAGE:0x71a50, 0x2be18 bytes
    //
    _v46(sdk::unknown_ptr) port_registry_write_with_handle;
    
    // [PortScsiDeviceTypes]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44070, 0x1b430 bytes
    // storport.sys .rdata:0x59030, 0x2be18 bytes
    // storport.sys .rdata:0x69020, 0x440c8 bytes
    // storport.sys .rdata:0x59030, 0x2be18 bytes
    //
    _v47(sdk::unknown_ptr) port_scsi_device_types;
    
    // [PortSrbTranslateFirmwareIoctlStatusToNtStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26440, 0x1b430 bytes
    // storport.sys .text:0x286b0, 0x2be18 bytes
    // storport.sys .text:0x1e700, 0x440c8 bytes
    // storport.sys .text:0x286b0, 0x2be18 bytes
    //
    _v48(sdk::unknown_ptr) port_srb_translate_firmware_ioctl_status_to_nt_status;
    
    // [PortSrbTranslateSrbToNtStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42b98, 0x1b430 bytes
    // storport.sys .text:0x57138, 0x2be18 bytes
    // storport.sys .text:0x1dbb8, 0x440c8 bytes
    // storport.sys .text:0x57138, 0x2be18 bytes
    //
    _v49(sdk::unknown_ptr) port_srb_translate_srb_to_nt_status;
    
    // [PortTraceErrorDrainList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43820, 0x1b430 bytes
    // storport.sys .text:0x58114, 0x2be18 bytes
    // storport.sys .text:0x68874, 0x440c8 bytes
    // storport.sys .text:0x58114, 0x2be18 bytes
    //
    _v50(sdk::unknown_ptr) port_trace_error_drain_list;
    
    // [PortTraceErrorFreeDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5fec8, 0x1b430 bytes
    // storport.sys PAGE:0x7bf3c, 0x2be18 bytes
    // storport.sys PAGE:0x938d4, 0x440c8 bytes
    // storport.sys PAGE:0x7bf3c, 0x2be18 bytes
    //
    _v51(sdk::unknown_ptr) port_trace_error_free_driver;
    
    // [PortTraceErrorRegisterDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ff20, 0x1b430 bytes
    // storport.sys PAGE:0x7bfa8, 0x2be18 bytes
    // storport.sys PAGE:0x93940, 0x440c8 bytes
    // storport.sys PAGE:0x7bfa8, 0x2be18 bytes
    //
    _v52(sdk::unknown_ptr) port_trace_error_register_driver;
    
    // [PortTraceErrorWritePacket]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43898, 0x1b430 bytes
    // storport.sys .text:0x581a4, 0x2be18 bytes
    // storport.sys .text:0x68904, 0x440c8 bytes
    // storport.sys .text:0x581a4, 0x2be18 bytes
    //
    _v53(sdk::unknown_ptr) port_trace_error_write_packet;
    
    // [PortTraceInitGlobalLogger]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43928, 0x1b430 bytes
    // storport.sys .text:0x58264, 0x2be18 bytes
    // storport.sys .text:0x689d4, 0x440c8 bytes
    // storport.sys .text:0x58264, 0x2be18 bytes
    //
    _v54(sdk::unknown_ptr) port_trace_init_global_logger;
    
    // [PortTraceInitTracing]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43b8c, 0x1b430 bytes
    // storport.sys .text:0x584d4, 0x2be18 bytes
    // storport.sys .text:0x68c44, 0x440c8 bytes
    // storport.sys .text:0x584d4, 0x2be18 bytes
    //
    _v55(sdk::unknown_ptr) port_trace_init_tracing;
    
    // [PortWdmGetDeviceCapabilities]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5a184, 0x1b430 bytes
    // storport.sys PAGE:0x70f08, 0x2be18 bytes
    // storport.sys PAGE:0x8845c, 0x440c8 bytes
    // storport.sys PAGE:0x70f08, 0x2be18 bytes
    //
    _v56(sdk::unknown_ptr) port_wdm_get_device_capabilities;
    
    // [PortpAsyncCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43600, 0x1b430 bytes
    // storport.sys .text:0x57e70, 0x2be18 bytes
    // storport.sys .text:0x1dee0, 0x440c8 bytes
    // storport.sys .text:0x57e70, 0x2be18 bytes
    //
    _v57(sdk::unknown_ptr) portp_async_completion;
    
    // [PortpBinaryReadCallBack]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18700, 0x1b430 bytes
    // storport.sys .text:0x57070, 0x2be18 bytes
    // storport.sys .text:0x67e00, 0x440c8 bytes
    // storport.sys .text:0x57070, 0x2be18 bytes
    //
    _v58(sdk::unknown_ptr) portp_binary_read_call_back;
    
    // [PortpCancelRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43670, 0x1b430 bytes
    // storport.sys .text:0x57f00, 0x2be18 bytes
    // storport.sys .text:0x687b0, 0x440c8 bytes
    // storport.sys .text:0x57f00, 0x2be18 bytes
    //
    _v59(sdk::unknown_ptr) portp_cancel_routine;
    
    // [PortpCompleteRequestIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x436ec, 0x1b430 bytes
    // storport.sys .text:0x57fa0, 0x2be18 bytes
    // storport.sys .text:0x1df68, 0x440c8 bytes
    // storport.sys .text:0x57fa0, 0x2be18 bytes
    //
    _v60(sdk::unknown_ptr) portp_complete_request_irp;
    
    // [PortpEnableCancel]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4379c, 0x1b430 bytes
    // storport.sys .text:0x58064, 0x2be18 bytes
    // storport.sys .text:0x1de10, 0x440c8 bytes
    // storport.sys .text:0x58064, 0x2be18 bytes
    //
    _v61(sdk::unknown_ptr) portp_enable_cancel;
    
    // [PortpErrorDrainListDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x438f0, 0x1b430 bytes
    // storport.sys .text:0x58210, 0x2be18 bytes
    // storport.sys .text:0x68980, 0x440c8 bytes
    // storport.sys .text:0x58210, 0x2be18 bytes
    //
    _v62(sdk::unknown_ptr) portp_error_drain_list_dpc;
    
    // [PortpErrorInitDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43910, 0x1b430 bytes
    // storport.sys .text:0x58238, 0x2be18 bytes
    // storport.sys .text:0x689a8, 0x440c8 bytes
    // storport.sys .text:0x58238, 0x2be18 bytes
    //
    _v63(sdk::unknown_ptr) portp_error_init_dpc;
    
    // [PortpErrorInitRecords]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ff3c, 0x1b430 bytes
    // storport.sys PAGE:0x7bfcc, 0x2be18 bytes
    // storport.sys PAGE:0x93964, 0x440c8 bytes
    // storport.sys PAGE:0x7bfcc, 0x2be18 bytes
    //
    _v64(sdk::unknown_ptr) portp_error_init_records;
    
    // [PortpOpenParametersKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58f18, 0x1b430 bytes
    // storport.sys PAGE:0x7a5ec, 0x2be18 bytes
    // storport.sys PAGE:0x92928, 0x440c8 bytes
    // storport.sys PAGE:0x7a5ec, 0x2be18 bytes
    //
    _v65(sdk::unknown_ptr) portp_open_parameters_key;
    
    // [PortpPassThroughZeroUnusedBuffers]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x437dc, 0x1b430 bytes
    // storport.sys .text:0x580ac, 0x2be18 bytes
    // storport.sys .text:0x1e088, 0x440c8 bytes
    // storport.sys .text:0x580ac, 0x2be18 bytes
    //
    _v66(sdk::unknown_ptr) portp_pass_through_zero_unused_buffers;
    
    // [PortpReadBusType]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59b10, 0x1b430 bytes
    // storport.sys PAGE:0x7a6c8, 0x2be18 bytes
    // storport.sys PAGE:0x92a08, 0x440c8 bytes
    // storport.sys PAGE:0x7a6c8, 0x2be18 bytes
    //
    _v67(sdk::unknown_ptr) portp_read_bus_type;
    
    // [PortpReadDriverParameterEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x573ec, 0x1b430 bytes
    // storport.sys PAGE:0x7a76c, 0x2be18 bytes
    // storport.sys PAGE:0x92aac, 0x440c8 bytes
    // storport.sys PAGE:0x7a76c, 0x2be18 bytes
    //
    _v68(sdk::unknown_ptr) portp_read_driver_parameter_entry;
    
    // [PortpReadLinkTimeoutValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5753c, 0x1b430 bytes
    // storport.sys PAGE:0x7a93c, 0x2be18 bytes
    // storport.sys PAGE:0x92c74, 0x440c8 bytes
    // storport.sys PAGE:0x7a93c, 0x2be18 bytes
    //
    _v69(sdk::unknown_ptr) portp_read_link_timeout_value;
    
    // [PortpReadMaximumLogicalUnitEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5782c, 0x1b430 bytes
    // storport.sys PAGE:0x7aa4c, 0x2be18 bytes
    // storport.sys PAGE:0x92d7c, 0x440c8 bytes
    // storport.sys PAGE:0x7aa4c, 0x2be18 bytes
    //
    _v70(sdk::unknown_ptr) portp_read_maximum_logical_unit_entry;
    
    // [PortpReadMaximumUCXAddressEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x577bc, 0x1b430 bytes
    // storport.sys PAGE:0x7aaf8, 0x2be18 bytes
    // storport.sys PAGE:0x92e28, 0x440c8 bytes
    // storport.sys PAGE:0x7aaf8, 0x2be18 bytes
    //
    _v71(sdk::unknown_ptr) portp_read_maximum_ucx_address_entry;
    
    // [PortpReadMinimumUCXAddressEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5774c, 0x1b430 bytes
    // storport.sys PAGE:0x7aba8, 0x2be18 bytes
    // storport.sys PAGE:0x92ed8, 0x440c8 bytes
    // storport.sys PAGE:0x7aba8, 0x2be18 bytes
    //
    _v72(sdk::unknown_ptr) portp_read_minimum_ucx_address_entry;
    
    // [PortpReadNumberOfRequestsEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x576dc, 0x1b430 bytes
    // storport.sys PAGE:0x7ac64, 0x2be18 bytes
    // storport.sys PAGE:0x92f94, 0x440c8 bytes
    // storport.sys PAGE:0x7ac64, 0x2be18 bytes
    //
    _v73(sdk::unknown_ptr) portp_read_number_of_requests_entry;
    
    // [PortpReadUncachedExtAlignmentEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5766c, 0x1b430 bytes
    // storport.sys PAGE:0x7ad1c, 0x2be18 bytes
    // storport.sys PAGE:0x9304c, 0x440c8 bytes
    // storport.sys PAGE:0x7ad1c, 0x2be18 bytes
    //
    _v74(sdk::unknown_ptr) portp_read_uncached_ext_alignment_entry;
    
    // [PortpRegQueryRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5af60, 0x1b430 bytes
    // storport.sys PAGE:0x71400, 0x2be18 bytes
    // storport.sys PAGE:0x868f0, 0x440c8 bytes
    // storport.sys PAGE:0x71400, 0x2be18 bytes
    //
    _v75(sdk::unknown_ptr) portp_reg_query_routine;
    
    // [PortpSyncCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43810, 0x1b430 bytes
    // storport.sys .text:0x580f0, 0x2be18 bytes
    // storport.sys .text:0x68850, 0x440c8 bytes
    // storport.sys .text:0x580f0, 0x2be18 bytes
    //
    _v76(sdk::unknown_ptr) portp_sync_completion;
    
    // [RaAdapterDeregisterFromIdleDetection]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2feb8, 0x1b430 bytes
    // storport.sys .text:0x3bf10, 0x2be18 bytes
    // storport.sys .text:0x47ccc, 0x440c8 bytes
    // storport.sys .text:0x3bf10, 0x2be18 bytes
    //
    _v77(sdk::unknown_ptr) ra_adapter_deregister_from_idle_detection;
    
    // [RaAdapterProtocolCommandIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x264b8, 0x1b430 bytes
    // storport.sys .text:0x2878c, 0x2be18 bytes
    // storport.sys .text:0x323f0, 0x440c8 bytes
    // storport.sys .text:0x2878c, 0x2be18 bytes
    //
    _v78(sdk::unknown_ptr) ra_adapter_protocol_command_ioctl;
    
    // [RaAdapterSetTemperatureThresholdIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26540, 0x1b430 bytes
    // storport.sys .text:0x2881c, 0x2be18 bytes
    // storport.sys .text:0x32480, 0x440c8 bytes
    // storport.sys .text:0x2881c, 0x2be18 bytes
    //
    _v79(sdk::unknown_ptr) ra_adapter_set_temperature_threshold_ioctl;
    
    // [RaAllocateConcurrentChannelToken]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18744, 0x1b430 bytes
    // storport.sys .text:0x28918, 0x2be18 bytes
    // storport.sys .text:0x19818, 0x440c8 bytes
    // storport.sys .text:0x28918, 0x2be18 bytes
    //
    _v80(sdk::unknown_ptr) ra_allocate_concurrent_channel_token;
    
    // [RaAllocateIoResource]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39048, 0x1b430 bytes
    // storport.sys .text:0xb800, 0x2be18 bytes
    // storport.sys .text:0x6774, 0x440c8 bytes
    // storport.sys .text:0xb800, 0x2be18 bytes
    //
    _v81(sdk::unknown_ptr) ra_allocate_io_resource;
    
    // [RaAssignConfigurationResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56eac, 0x1b430 bytes
    // storport.sys PAGE:0x78908, 0x2be18 bytes
    // storport.sys PAGE:0x8e1d8, 0x440c8 bytes
    // storport.sys PAGE:0x78908, 0x2be18 bytes
    //
    _v82(sdk::unknown_ptr) ra_assign_configuration_resources;
    
    // [RaAttemptHighWaterMarkIncrease]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x390d4, 0x1b430 bytes
    // storport.sys .text:0x4b748, 0x2be18 bytes
    // storport.sys .text:0x57d44, 0x440c8 bytes
    // storport.sys .text:0x4b748, 0x2be18 bytes
    //
    _v83(sdk::unknown_ptr) ra_attempt_high_water_mark_increase;
    
    // [RaBuildHwFirmwareActivateBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33350, 0x1b430 bytes
    // storport.sys .text:0x412c0, 0x2be18 bytes
    // storport.sys .text:0x4c6c8, 0x440c8 bytes
    // storport.sys .text:0x412c0, 0x2be18 bytes
    //
    _v84(sdk::unknown_ptr) ra_build_hw_firmware_activate_buffer_for_miniport;
    
    // [RaBuildHwFirmwareDownloadBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3347c, 0x1b430 bytes
    // storport.sys .text:0x413f0, 0x2be18 bytes
    // storport.sys .text:0x4c7d8, 0x440c8 bytes
    // storport.sys .text:0x413f0, 0x2be18 bytes
    //
    _v85(sdk::unknown_ptr) ra_build_hw_firmware_download_buffer_for_miniport;
    
    // [RaBuildHwFirmwareGetInfoBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16dd8, 0x1b430 bytes
    // storport.sys .text:0x1987c, 0x2be18 bytes
    // storport.sys .text:0x1dac0, 0x440c8 bytes
    // storport.sys .text:0x1987c, 0x2be18 bytes
    //
    _v86(sdk::unknown_ptr) ra_build_hw_firmware_get_info_buffer_for_miniport;
    
    // [RaBuildQueryPhysicalTopologyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33634, 0x1b430 bytes
    // storport.sys .text:0xd110, 0x2be18 bytes
    // storport.sys .text:0x2c60, 0x440c8 bytes
    // storport.sys .text:0xd110, 0x2be18 bytes
    //
    _v87(sdk::unknown_ptr) ra_build_query_physical_topology_buffer_for_miniport;
    
    // [RaBuildQueryProtocolSpecificPropertyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33708, 0x1b430 bytes
    // storport.sys .text:0x417a0, 0x2be18 bytes
    // storport.sys .text:0x4cb3c, 0x440c8 bytes
    // storport.sys .text:0x417a0, 0x2be18 bytes
    //
    _v88(sdk::unknown_ptr) ra_build_query_protocol_specific_property_buffer_for_miniport;
    
    // [RaBuildQueryTemperaturePropertyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33830, 0x1b430 bytes
    // storport.sys .text:0x418d4, 0x2be18 bytes
    // storport.sys .text:0x4ccbc, 0x440c8 bytes
    // storport.sys .text:0x418d4, 0x2be18 bytes
    //
    _v89(sdk::unknown_ptr) ra_build_query_temperature_property_buffer_for_miniport;
    
    // [RaBuildSetTemperatureThresholdBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33918, 0x1b430 bytes
    // storport.sys .text:0x41bf0, 0x2be18 bytes
    // storport.sys .text:0x4d024, 0x440c8 bytes
    // storport.sys .text:0x41bf0, 0x2be18 bytes
    //
    _v90(sdk::unknown_ptr) ra_build_set_temperature_threshold_buffer_for_miniport;
    
    // [RaCallMiniportAdapterControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe470, 0x1b430 bytes
    // storport.sys .text:0x100a8, 0x2be18 bytes
    // storport.sys .text:0xb4a4, 0x440c8 bytes
    // storport.sys .text:0x100a8, 0x2be18 bytes
    //
    _v91(sdk::unknown_ptr) ra_call_miniport_adapter_control;
    
    // [RaCallMiniportCompleteServiceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c76c, 0x1b430 bytes
    // storport.sys .text:0x344fc, 0x2be18 bytes
    // storport.sys .text:0x4022c, 0x440c8 bytes
    // storport.sys .text:0x344fc, 0x2be18 bytes
    //
    _v92(sdk::unknown_ptr) ra_call_miniport_complete_service_irp;
    
    // [RaCallMiniportFindAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xcde0, 0x1b430 bytes
    // storport.sys .text:0x3454c, 0x2be18 bytes
    // storport.sys .text:0x4027c, 0x440c8 bytes
    // storport.sys .text:0x3454c, 0x2be18 bytes
    //
    _v93(sdk::unknown_ptr) ra_call_miniport_find_adapter;
    
    // [RaCallMiniportFreeResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c7b8, 0x1b430 bytes
    // storport.sys .text:0x34a98, 0x2be18 bytes
    // storport.sys .text:0x407cc, 0x440c8 bytes
    // storport.sys .text:0x34a98, 0x2be18 bytes
    //
    _v94(sdk::unknown_ptr) ra_call_miniport_free_resources;
    
    // [RaCallMiniportHwInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xda3c, 0x1b430 bytes
    // storport.sys .text:0x289b0, 0x2be18 bytes
    // storport.sys .text:0x32700, 0x440c8 bytes
    // storport.sys .text:0x289b0, 0x2be18 bytes
    //
    _v95(sdk::unknown_ptr) ra_call_miniport_hw_initialize;
    
    // [RaCallMiniportUnitControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10708, 0x1b430 bytes
    // storport.sys .text:0x16254, 0x2be18 bytes
    // storport.sys .text:0x18384, 0x440c8 bytes
    // storport.sys .text:0x16254, 0x2be18 bytes
    //
    _v96(sdk::unknown_ptr) ra_call_miniport_unit_control;
    
    // [RaCopyPaddedString]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x581d0, 0x1b430 bytes
    // storport.sys PAGE:0x729f8, 0x2be18 bytes
    // storport.sys PAGE:0x87904, 0x440c8 bytes
    // storport.sys PAGE:0x729f8, 0x2be18 bytes
    //
    _v97(sdk::function<void(char*, uint32_t, char*, uint32_t)>*) ra_copy_padded_string;
    
    // [RaCreateBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5683c, 0x1b430 bytes
    // storport.sys PAGE:0x77a9c, 0x2be18 bytes
    // storport.sys PAGE:0x8d398, 0x440c8 bytes
    // storport.sys PAGE:0x77a9c, 0x2be18 bytes
    //
    _v98(sdk::unknown_ptr) ra_create_bus;
    
    // [RaCreateDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56ae0, 0x1b430 bytes
    // storport.sys PAGE:0x77d28, 0x2be18 bytes
    // storport.sys PAGE:0x8d634, 0x440c8 bytes
    // storport.sys PAGE:0x77d28, 0x2be18 bytes
    //
    _v99(sdk::unknown_ptr) ra_create_driver;
    
    // [RaCreateMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59c9c, 0x1b430 bytes
    // storport.sys PAGE:0x78768, 0x2be18 bytes
    // storport.sys PAGE:0x8e058, 0x440c8 bytes
    // storport.sys PAGE:0x78768, 0x2be18 bytes
    //
    _w00(sdk::unknown_ptr) ra_create_miniport;
    
    // [RaCreateTagList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56830, 0x1b430 bytes
    // storport.sys PAGE:0x708d8, 0x2be18 bytes
    // storport.sys PAGE:0x8495c, 0x440c8 bytes
    // storport.sys PAGE:0x708d8, 0x2be18 bytes
    //
    _w01(sdk::unknown_ptr) ra_create_tag_list;
    
    // [RaDeleteBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59c24, 0x1b430 bytes
    // storport.sys PAGE:0x77ac0, 0x2be18 bytes
    // storport.sys PAGE:0x8d3bc, 0x440c8 bytes
    // storport.sys PAGE:0x77ac0, 0x2be18 bytes
    //
    _w02(sdk::unknown_ptr) ra_delete_bus;
    
    // [RaDeleteDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d9c4, 0x1b430 bytes
    // storport.sys PAGE:0x77d7c, 0x2be18 bytes
    // storport.sys PAGE:0x8d688, 0x440c8 bytes
    // storport.sys PAGE:0x77d7c, 0x2be18 bytes
    //
    _w03(sdk::unknown_ptr) ra_delete_driver;
    
    // [RaDeleteMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e050, 0x1b430 bytes
    // storport.sys PAGE:0x787ac, 0x2be18 bytes
    // storport.sys PAGE:0x8e09c, 0x440c8 bytes
    // storport.sys PAGE:0x787ac, 0x2be18 bytes
    //
    _w04(sdk::unknown_ptr) ra_delete_miniport;
    
    // [RaDeleteTagList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59844, 0x1b430 bytes
    // storport.sys PAGE:0x714a8, 0x2be18 bytes
    // storport.sys PAGE:0x85e50, 0x440c8 bytes
    // storport.sys PAGE:0x714a8, 0x2be18 bytes
    //
    _w05(sdk::unknown_ptr) ra_delete_tag_list;
    
    // [RaDriverAddDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15400, 0x1b430 bytes
    // storport.sys .text:0x31af0, 0x2be18 bytes
    // storport.sys .text:0x3c8f0, 0x440c8 bytes
    // storport.sys .text:0x31af0, 0x2be18 bytes
    //
    _w06(sdk::unknown_ptr) ra_driver_add_device;
    
    // [RaDriverCloseIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x566f0, 0x1b430 bytes
    // storport.sys PAGE:0x70830, 0x2be18 bytes
    // storport.sys PAGE:0x848c0, 0x440c8 bytes
    // storport.sys PAGE:0x70830, 0x2be18 bytes
    //
    _w07(sdk::unknown_ptr) ra_driver_close_irp;
    
    // [RaDriverCreateIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56790, 0x1b430 bytes
    // storport.sys PAGE:0x70780, 0x2be18 bytes
    // storport.sys PAGE:0x84820, 0x440c8 bytes
    // storport.sys PAGE:0x70780, 0x2be18 bytes
    //
    _w08(sdk::unknown_ptr) ra_driver_create_irp;
    
    // [RaDriverDeleteDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b7a8, 0x1b430 bytes
    // storport.sys .text:0x31d08, 0x2be18 bytes
    // storport.sys .text:0x3cb18, 0x440c8 bytes
    // storport.sys .text:0x31d08, 0x2be18 bytes
    //
    _w09(sdk::unknown_ptr) ra_driver_delete_device;
    
    // [RaDriverDeviceControlIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1b80, 0x1b430 bytes
    // storport.sys .text:0xb850, 0x2be18 bytes
    // storport.sys .text:0x9d30, 0x440c8 bytes
    // storport.sys .text:0xb850, 0x2be18 bytes
    //
    _w10(sdk::unknown_ptr) ra_driver_device_control_irp;
    
    // [RaDriverPnpIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1880, 0x1b430 bytes
    // storport.sys .text:0x7d30, 0x2be18 bytes
    // storport.sys .text:0xba10, 0x440c8 bytes
    // storport.sys .text:0x7d30, 0x2be18 bytes
    //
    _w11(sdk::unknown_ptr) ra_driver_pnp_irp;
    
    // [RaDriverPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb1c0, 0x1b430 bytes
    // storport.sys .text:0xedc0, 0x2be18 bytes
    // storport.sys .text:0x112a0, 0x440c8 bytes
    // storport.sys .text:0xedc0, 0x2be18 bytes
    //
    _w12(sdk::unknown_ptr) ra_driver_power_irp;
    
    // [RaDriverScsiIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3840, 0x1b430 bytes
    // storport.sys .text:0xa230, 0x2be18 bytes
    // storport.sys .text:0x8870, 0x440c8 bytes
    // storport.sys .text:0xa230, 0x2be18 bytes
    //
    _w13(sdk::unknown_ptr) ra_driver_scsi_irp;
    
    // [RaDriverSystemControlIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5a2b0, 0x1b430 bytes
    // storport.sys PAGE:0x72dd0, 0x2be18 bytes
    // storport.sys PAGE:0x885a0, 0x440c8 bytes
    // storport.sys PAGE:0x72dd0, 0x2be18 bytes
    //
    _w14(sdk::unknown_ptr) ra_driver_system_control_irp;
    
    // [RaDriverUnload]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b840, 0x1b430 bytes
    // storport.sys .text:0x31dc0, 0x2be18 bytes
    // storport.sys .text:0x3cbd0, 0x440c8 bytes
    // storport.sys .text:0x31dc0, 0x2be18 bytes
    //
    _w15(sdk::unknown_ptr) ra_driver_unload;
    
    // [RaDuplicateCmResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59d2c, 0x1b430 bytes
    // storport.sys PAGE:0x78cf4, 0x2be18 bytes
    // storport.sys PAGE:0x8e5b8, 0x440c8 bytes
    // storport.sys PAGE:0x78cf4, 0x2be18 bytes
    //
    _w16(sdk::unknown_ptr) ra_duplicate_cm_resource_list;
    
    // [RaDuplicateUnicodeString]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe3f8, 0x1b430 bytes
    // storport.sys .text:0x41d08, 0x2be18 bytes
    // storport.sys .text:0x4d254, 0x440c8 bytes
    // storport.sys .text:0x41d08, 0x2be18 bytes
    //
    _w17(sdk::unknown_ptr) ra_duplicate_unicode_string;
    
    // [RaFixupIds]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58398, 0x1b430 bytes
    // storport.sys PAGE:0x72b90, 0x2be18 bytes
    // storport.sys PAGE:0x876dc, 0x440c8 bytes
    // storport.sys PAGE:0x72b90, 0x2be18 bytes
    //
    _w18(sdk::unknown_ptr) ra_fixup_ids;
    
    // [RaForwardIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xefcc, 0x1b430 bytes
    // storport.sys .text:0x11aac, 0x2be18 bytes
    // storport.sys .text:0x143a8, 0x440c8 bytes
    // storport.sys .text:0x11aac, 0x2be18 bytes
    //
    _w19(sdk::unknown_ptr) ra_forward_irp;
    
    // [RaForwardIrpSynchronous]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf0a4, 0x1b430 bytes
    // storport.sys .text:0x11db0, 0x2be18 bytes
    // storport.sys .text:0x146e8, 0x440c8 bytes
    // storport.sys .text:0x11db0, 0x2be18 bytes
    //
    _w20(sdk::unknown_ptr) ra_forward_irp_synchronous;
    
    // [RaFreeDriverInitData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b8a8, 0x1b430 bytes
    // storport.sys .text:0x31ea0, 0x2be18 bytes
    // storport.sys .text:0x3cd24, 0x440c8 bytes
    // storport.sys .text:0x31ea0, 0x2be18 bytes
    //
    _w21(sdk::unknown_ptr) ra_free_driver_init_data;
    
    // [RaFreeIoResource]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3933c, 0x1b430 bytes
    // storport.sys .text:0x4ba44, 0x2be18 bytes
    // storport.sys .text:0x1ebfc, 0x440c8 bytes
    // storport.sys .text:0x4ba44, 0x2be18 bytes
    //
    _w22(sdk::unknown_ptr) ra_free_io_resource;
    
    // [RaFreeRaidResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39354, 0x1b430 bytes
    // storport.sys .text:0x4ba70, 0x2be18 bytes
    // storport.sys .text:0x58048, 0x440c8 bytes
    // storport.sys .text:0x4ba70, 0x2be18 bytes
    //
    _w23(sdk::unknown_ptr) ra_free_raid_resources;
    
    // [RaGetBusInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1535c, 0x1b430 bytes
    // storport.sys .text:0x41d8c, 0x2be18 bytes
    // storport.sys .text:0x4d2d8, 0x440c8 bytes
    // storport.sys .text:0x41d8c, 0x2be18 bytes
    //
    _w24(sdk::unknown_ptr) ra_get_bus_interface;
    
    // [RaGetProtocolCommandEffects]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x266bc, 0x1b430 bytes
    // storport.sys .text:0x289e8, 0x2be18 bytes
    // storport.sys .text:0x32738, 0x440c8 bytes
    // storport.sys .text:0x289e8, 0x2be18 bytes
    //
    _w25(sdk::unknown_ptr) ra_get_protocol_command_effects;
    
    // [RaGetUnitStorageDeviceIdProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ae18, 0x1b430 bytes
    // storport.sys PAGE:0x73490, 0x2be18 bytes
    // storport.sys PAGE:0x88cd0, 0x440c8 bytes
    // storport.sys PAGE:0x73490, 0x2be18 bytes
    //
    _w26(sdk::unknown_ptr) ra_get_unit_storage_device_id_property;
    
    // [RaGetUnitStorageDeviceProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56238, 0x1b430 bytes
    // storport.sys PAGE:0x70330, 0x2be18 bytes
    // storport.sys PAGE:0x841e8, 0x440c8 bytes
    // storport.sys PAGE:0x70330, 0x2be18 bytes
    //
    _w27(sdk::unknown_ptr) ra_get_unit_storage_device_property;
    
    // [RaInitializeBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59c58, 0x1b430 bytes
    // storport.sys PAGE:0x77afc, 0x2be18 bytes
    // storport.sys PAGE:0x8d3f8, 0x440c8 bytes
    // storport.sys PAGE:0x77afc, 0x2be18 bytes
    //
    _w28(sdk::unknown_ptr) ra_initialize_bus;
    
    // [RaInitializeConfiguration]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56cd8, 0x1b430 bytes
    // storport.sys PAGE:0x78a28, 0x2be18 bytes
    // storport.sys PAGE:0x8e2f8, 0x440c8 bytes
    // storport.sys PAGE:0x78a28, 0x2be18 bytes
    //
    _w29(sdk::unknown_ptr) ra_initialize_configuration;
    
    // [RaInitializeDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56bb4, 0x1b430 bytes
    // storport.sys PAGE:0x77e70, 0x2be18 bytes
    // storport.sys PAGE:0x8d77c, 0x440c8 bytes
    // storport.sys PAGE:0x77e70, 0x2be18 bytes
    //
    _w30(sdk::unknown_ptr) ra_initialize_driver;
    
    // [RaInitializeMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56e5c, 0x1b430 bytes
    // storport.sys PAGE:0x7882c, 0x2be18 bytes
    // storport.sys PAGE:0x8e11c, 0x440c8 bytes
    // storport.sys PAGE:0x7882c, 0x2be18 bytes
    //
    _w31(sdk::unknown_ptr) ra_initialize_miniport;
    
    // [RaInitializePower]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14f40, 0x1b430 bytes
    // storport.sys .text:0x28c9c, 0x2be18 bytes
    // storport.sys .text:0x329e0, 0x440c8 bytes
    // storport.sys .text:0x28c9c, 0x2be18 bytes
    //
    _w32(sdk::unknown_ptr) ra_initialize_power;
    
    // [RaInitializeRaidResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14f9c, 0x1b430 bytes
    // storport.sys .text:0x4bbc0, 0x2be18 bytes
    // storport.sys .text:0x581cc, 0x440c8 bytes
    // storport.sys .text:0x4bbc0, 0x2be18 bytes
    //
    _w33(sdk::unknown_ptr) ra_initialize_raid_resources;
    
    // [RaInitializeTagList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x592bc, 0x1b430 bytes
    // storport.sys PAGE:0x71c40, 0x2be18 bytes
    // storport.sys PAGE:0x86470, 0x440c8 bytes
    // storport.sys PAGE:0x71c40, 0x2be18 bytes
    //
    _w34(sdk::unknown_ptr) ra_initialize_tag_list;
    
    // [RaQueryInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1570c, 0x1b430 bytes
    // storport.sys .text:0x41e9c, 0x2be18 bytes
    // storport.sys .text:0x4d3e8, 0x440c8 bytes
    // storport.sys .text:0x41e9c, 0x2be18 bytes
    //
    _w35(sdk::unknown_ptr) ra_query_interface;
    
    // [RaSaveDriverInitData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56b24, 0x1b430 bytes
    // storport.sys PAGE:0x77f80, 0x2be18 bytes
    // storport.sys PAGE:0x8d88c, 0x440c8 bytes
    // storport.sys PAGE:0x77f80, 0x2be18 bytes
    //
    _w36(sdk::unknown_ptr) ra_save_driver_init_data;
    
    // [RaSendIrpSynchronous]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x915c, 0x1b430 bytes
    // storport.sys .text:0xe020, 0x2be18 bytes
    // storport.sys .text:0x11130, 0x440c8 bytes
    // storport.sys .text:0xe020, 0x2be18 bytes
    //
    _w37(sdk::unknown_ptr) ra_send_irp_synchronous;
    
    // [RaSrbSetMiniportContext]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e28, 0x1b430 bytes
    // storport.sys .text:0x70fc, 0x2be18 bytes
    // storport.sys .text:0xcef0, 0x440c8 bytes
    // storport.sys .text:0x70fc, 0x2be18 bytes
    //
    _w38(sdk::unknown_ptr) ra_srb_set_miniport_context;
    
    // [RaTranslateMiniportFirmwareInfoToHwFirmwareInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x339fc, 0x1b430 bytes
    // storport.sys .text:0x41f34, 0x2be18 bytes
    // storport.sys .text:0x1dbf4, 0x440c8 bytes
    // storport.sys .text:0x41f34, 0x2be18 bytes
    //
    _w39(sdk::unknown_ptr) ra_translate_miniport_firmware_info_to_hw_firmware_info;
    
    // [RaUnitAcquireRemoveLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1f6c, 0x1b430 bytes
    // storport.sys .text:0xbd94, 0x2be18 bytes
    // storport.sys .text:0xa2f0, 0x440c8 bytes
    // storport.sys .text:0xbd94, 0x2be18 bytes
    //
    _w40(sdk::unknown_ptr) ra_unit_acquire_remove_lock;
    
    // [RaUnitAdapterRemove]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34570, 0x1b430 bytes
    // storport.sys .text:0x444d0, 0x2be18 bytes
    // storport.sys .text:0x4ff80, 0x440c8 bytes
    // storport.sys .text:0x444d0, 0x2be18 bytes
    //
    _w41(sdk::unknown_ptr) ra_unit_adapter_remove;
    
    // [RaUnitAdapterSurpriseRemove]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19e00, 0x1b430 bytes
    // storport.sys .text:0xeaa0, 0x2be18 bytes
    // storport.sys .text:0x12010, 0x440c8 bytes
    // storport.sys .text:0xeaa0, 0x2be18 bytes
    //
    _w42(sdk::unknown_ptr) ra_unit_adapter_surprise_remove;
    
    // [RaUnitAsyncError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbc50, 0x1b430 bytes
    // storport.sys .text:0xbe48, 0x2be18 bytes
    // storport.sys .text:0xace8, 0x440c8 bytes
    // storport.sys .text:0xbe48, 0x2be18 bytes
    //
    _w43(sdk::unknown_ptr) ra_unit_async_error;
    
    // [RaUnitAsyncNotificationWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34630, 0x1b430 bytes
    // storport.sys .text:0x44590, 0x2be18 bytes
    // storport.sys .text:0x50040, 0x440c8 bytes
    // storport.sys .text:0x44590, 0x2be18 bytes
    //
    _w44(sdk::unknown_ptr) ra_unit_async_notification_work_item_routine;
    
    // [RaUnitAtaPassThroughIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1000, 0x1b430 bytes
    // storport.sys .text:0x1af0, 0x2be18 bytes
    // storport.sys .text:0x1e0c, 0x440c8 bytes
    // storport.sys .text:0x1af0, 0x2be18 bytes
    //
    _w45(sdk::unknown_ptr) ra_unit_ata_pass_through_ioctl;
    
    // [RaUnitAtaPassThroughMarshalResults]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1334, 0x1b430 bytes
    // storport.sys .text:0x1e8c, 0x2be18 bytes
    // storport.sys .text:0x2150, 0x440c8 bytes
    // storport.sys .text:0x1e8c, 0x2be18 bytes
    //
    _w46(sdk::unknown_ptr) ra_unit_ata_pass_through_marshal_results;
    
    // [RaUnitAtaPassThroughValidateInput]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1558, 0x1b430 bytes
    // storport.sys .text:0x20c0, 0x2be18 bytes
    // storport.sys .text:0x2368, 0x440c8 bytes
    // storport.sys .text:0x20c0, 0x2be18 bytes
    //
    _w47(sdk::unknown_ptr) ra_unit_ata_pass_through_validate_input;
    
    // [RaUnitAttributeManagement]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x347ac, 0x1b430 bytes
    // storport.sys .text:0x44734, 0x2be18 bytes
    // storport.sys .text:0x501e4, 0x440c8 bytes
    // storport.sys .text:0x44734, 0x2be18 bytes
    //
    _w48(sdk::unknown_ptr) ra_unit_attribute_management;
    
    // [RaUnitBuildDsmGeneralBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34880, 0x1b430 bytes
    // storport.sys .text:0x44810, 0x2be18 bytes
    // storport.sys .text:0x502c0, 0x440c8 bytes
    // storport.sys .text:0x44810, 0x2be18 bytes
    //
    _w49(sdk::unknown_ptr) ra_unit_build_dsm_general_buffer_for_miniport;
    
    // [RaUnitBuildDsmNotifyBufferForMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1666c, 0x1b430 bytes
    // storport.sys .text:0x109d8, 0x2be18 bytes
    // storport.sys .text:0x13820, 0x440c8 bytes
    // storport.sys .text:0x109d8, 0x2be18 bytes
    //
    _w50(sdk::unknown_ptr) ra_unit_build_dsm_notify_buffer_for_miniport;
    
    // [RaUnitCancelRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e120, 0x1b430 bytes
    // storport.sys PAGE:0x78da0, 0x2be18 bytes
    // storport.sys PAGE:0x8e7d0, 0x440c8 bytes
    // storport.sys PAGE:0x78da0, 0x2be18 bytes
    //
    _w51(sdk::unknown_ptr) ra_unit_cancel_remove_device_irp;
    
    // [RaUnitCancelStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e120, 0x1b430 bytes
    // storport.sys PAGE:0x78da0, 0x2be18 bytes
    // storport.sys PAGE:0x8e7d0, 0x440c8 bytes
    // storport.sys PAGE:0x78da0, 0x2be18 bytes
    //
    _w52(sdk::unknown_ptr) ra_unit_cancel_stop_device_irp;
    
    // [RaUnitCheckRemoveState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1f9c, 0x1b430 bytes
    // storport.sys .text:0xbdf8, 0x2be18 bytes
    // storport.sys .text:0xa354, 0x440c8 bytes
    // storport.sys .text:0xbdf8, 0x2be18 bytes
    //
    _w53(sdk::unknown_ptr) ra_unit_check_remove_state;
    
    // [RaUnitCheckRemoveStateForDisabled]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34974, 0x1b430 bytes
    // storport.sys .text:0x44d78, 0x2be18 bytes
    // storport.sys .text:0x3c48c, 0x440c8 bytes
    // storport.sys .text:0x44d78, 0x2be18 bytes
    //
    _w54(sdk::unknown_ptr) ra_unit_check_remove_state_for_disabled;
    
    // [RaUnitClaimDeviceSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x172b0, 0x1b430 bytes
    // storport.sys .text:0x19e48, 0x2be18 bytes
    // storport.sys .text:0x1ea68, 0x440c8 bytes
    // storport.sys .text:0x19e48, 0x2be18 bytes
    //
    _w55(sdk::unknown_ptr) ra_unit_claim_device_srb;
    
    // [RaUnitClearUnresponsiveAttribute]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x349d4, 0x1b430 bytes
    // storport.sys .text:0x44dd8, 0x2be18 bytes
    // storport.sys .text:0x508a0, 0x440c8 bytes
    // storport.sys .text:0x44dd8, 0x2be18 bytes
    //
    _w56(sdk::unknown_ptr) ra_unit_clear_unresponsive_attribute;
    
    // [RaUnitCloseIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8e94, 0x1b430 bytes
    // storport.sys .text:0xdfdc, 0x2be18 bytes
    // storport.sys .text:0x110ec, 0x440c8 bytes
    // storport.sys .text:0xdfdc, 0x2be18 bytes
    //
    _w57(sdk::unknown_ptr) ra_unit_close_irp;
    
    // [RaUnitCreateIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8e94, 0x1b430 bytes
    // storport.sys .text:0xdfdc, 0x2be18 bytes
    // storport.sys .text:0x110ec, 0x440c8 bytes
    // storport.sys .text:0xdfdc, 0x2be18 bytes
    //
    _w58(sdk::unknown_ptr) ra_unit_create_irp;
    
    // [RaUnitDeleteDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34a88, 0x1b430 bytes
    // storport.sys .text:0x19c90, 0x2be18 bytes
    // storport.sys .text:0x1e7c0, 0x440c8 bytes
    // storport.sys .text:0x19c90, 0x2be18 bytes
    //
    _w59(sdk::unknown_ptr) ra_unit_delete_device_irp;
    
    // [RaUnitDeregisterFromIdleDetection]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2fef0, 0x1b430 bytes
    // storport.sys .text:0x16f58, 0x2be18 bytes
    // storport.sys .text:0x1aea0, 0x440c8 bytes
    // storport.sys .text:0x16f58, 0x2be18 bytes
    //
    _w60(sdk::unknown_ptr) ra_unit_deregister_from_idle_detection;
    
    // [RaUnitDeviceControlIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1c20, 0x1b430 bytes
    // storport.sys .text:0xb8f8, 0x2be18 bytes
    // storport.sys .text:0x9dd4, 0x440c8 bytes
    // storport.sys .text:0xb8f8, 0x2be18 bytes
    //
    _w61(sdk::unknown_ptr) ra_unit_device_control_irp;
    
    // [RaUnitDeviceUsageNotificationIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10748, 0x1b430 bytes
    // storport.sys .text:0x10ee4, 0x2be18 bytes
    // storport.sys .text:0x13edc, 0x440c8 bytes
    // storport.sys .text:0x10ee4, 0x2be18 bytes
    //
    _w62(sdk::unknown_ptr) ra_unit_device_usage_notification_irp;
    
    // [RaUnitDisableDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34bd4, 0x1b430 bytes
    // storport.sys .text:0x44ee0, 0x2be18 bytes
    // storport.sys .text:0x509a8, 0x440c8 bytes
    // storport.sys .text:0x44ee0, 0x2be18 bytes
    //
    _w63(sdk::unknown_ptr) ra_unit_disable_device_irp;
    
    // [RaUnitFlushQueueSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34c58, 0x1b430 bytes
    // storport.sys .text:0x44f6c, 0x2be18 bytes
    // storport.sys .text:0x50a34, 0x440c8 bytes
    // storport.sys .text:0x44f6c, 0x2be18 bytes
    //
    _w64(sdk::unknown_ptr) ra_unit_flush_queue_srb;
    
    // [RaUnitGetQOSIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34dc8, 0x1b430 bytes
    // storport.sys .text:0x450e0, 0x2be18 bytes
    // storport.sys .text:0x50ba8, 0x440c8 bytes
    // storport.sys .text:0x450e0, 0x2be18 bytes
    //
    _w65(sdk::unknown_ptr) ra_unit_get_qos_ioctl;
    
    // [RaUnitHwFirmwareActivateIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34edc, 0x1b430 bytes
    // storport.sys .text:0x451f0, 0x2be18 bytes
    // storport.sys .text:0x50cb8, 0x440c8 bytes
    // storport.sys .text:0x451f0, 0x2be18 bytes
    //
    _w66(sdk::unknown_ptr) ra_unit_hw_firmware_activate_ioctl;
    
    // [RaUnitHwFirmwareDownloadIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34f3c, 0x1b430 bytes
    // storport.sys .text:0x45264, 0x2be18 bytes
    // storport.sys .text:0x50d2c, 0x440c8 bytes
    // storport.sys .text:0x45264, 0x2be18 bytes
    //
    _w67(sdk::unknown_ptr) ra_unit_hw_firmware_download_ioctl;
    
    // [RaUnitHwFirmwareGetInfoIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16914, 0x1b430 bytes
    // storport.sys .text:0x19368, 0x2be18 bytes
    // storport.sys .text:0x1d564, 0x440c8 bytes
    // storport.sys .text:0x19368, 0x2be18 bytes
    //
    _w68(sdk::unknown_ptr) ra_unit_hw_firmware_get_info_ioctl;
    
    // [RaUnitIgnorePnpIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57914, 0x1b430 bytes
    // storport.sys PAGE:0x735d4, 0x2be18 bytes
    // storport.sys PAGE:0x88e14, 0x440c8 bytes
    // storport.sys PAGE:0x735d4, 0x2be18 bytes
    //
    _w69(sdk::unknown_ptr) ra_unit_ignore_pnp_irp;
    
    // [RaUnitInitializeWMI]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57ed4, 0x1b430 bytes
    // storport.sys PAGE:0x72224, 0x2be18 bytes
    // storport.sys PAGE:0x86d0c, 0x440c8 bytes
    // storport.sys PAGE:0x72224, 0x2be18 bytes
    //
    _w70(sdk::unknown_ptr) ra_unit_initialize_wmi;
    
    // [RaUnitPnpIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1918, 0x1b430 bytes
    // storport.sys .text:0x7dd0, 0x2be18 bytes
    // storport.sys .text:0xb780, 0x440c8 bytes
    // storport.sys .text:0x7dd0, 0x2be18 bytes
    //
    _w71(sdk::unknown_ptr) ra_unit_pnp_irp;
    
    // [RaUnitPowerCapIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34f9c, 0x1b430 bytes
    // storport.sys .text:0x452d8, 0x2be18 bytes
    // storport.sys .text:0x50da0, 0x440c8 bytes
    // storport.sys .text:0x452d8, 0x2be18 bytes
    //
    _w72(sdk::unknown_ptr) ra_unit_power_cap_ioctl;
    
    // [RaUnitPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9a64, 0x1b430 bytes
    // storport.sys .text:0xef38, 0x2be18 bytes
    // storport.sys .text:0x12b44, 0x440c8 bytes
    // storport.sys .text:0xef38, 0x2be18 bytes
    //
    _w73(sdk::unknown_ptr) ra_unit_power_irp;
    
    // [RaUnitProtocolCommandIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35030, 0x1b430 bytes
    // storport.sys .text:0x45380, 0x2be18 bytes
    // storport.sys .text:0x50e48, 0x440c8 bytes
    // storport.sys .text:0x45380, 0x2be18 bytes
    //
    _w74(sdk::unknown_ptr) ra_unit_protocol_command_ioctl;
    
    // [RaUnitQueryCapabilitiesIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59e08, 0x1b430 bytes
    // storport.sys PAGE:0x70b18, 0x2be18 bytes
    // storport.sys PAGE:0x88238, 0x440c8 bytes
    // storport.sys PAGE:0x70b18, 0x2be18 bytes
    //
    _w75(sdk::unknown_ptr) ra_unit_query_capabilities_irp;
    
    // [RaUnitQueryDeviceRelationsIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56530, 0x1b430 bytes
    // storport.sys PAGE:0x70100, 0x2be18 bytes
    // storport.sys PAGE:0x8477c, 0x440c8 bytes
    // storport.sys PAGE:0x70100, 0x2be18 bytes
    //
    _w76(sdk::unknown_ptr) ra_unit_query_device_relations_irp;
    
    // [RaUnitQueryDeviceTextIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58224, 0x1b430 bytes
    // storport.sys PAGE:0x72a40, 0x2be18 bytes
    // storport.sys PAGE:0x8779c, 0x440c8 bytes
    // storport.sys PAGE:0x72a40, 0x2be18 bytes
    //
    _w77(sdk::unknown_ptr) ra_unit_query_device_text_irp;
    
    // [RaUnitQueryIdIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58148, 0x1b430 bytes
    // storport.sys PAGE:0x72970, 0x2be18 bytes
    // storport.sys PAGE:0x8794c, 0x440c8 bytes
    // storport.sys PAGE:0x72970, 0x2be18 bytes
    //
    _w78(sdk::unknown_ptr) ra_unit_query_id_irp;
    
    // [RaUnitQueryInterfaceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xed04, 0x1b430 bytes
    // storport.sys .text:0x19b54, 0x2be18 bytes
    // storport.sys .text:0x1e4d8, 0x440c8 bytes
    // storport.sys .text:0x19b54, 0x2be18 bytes
    //
    _w79(sdk::unknown_ptr) ra_unit_query_interface_irp;
    
    // [RaUnitQueryPnpDeviceStateIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5b194, 0x1b430 bytes
    // storport.sys PAGE:0x70ab0, 0x2be18 bytes
    // storport.sys PAGE:0x86990, 0x440c8 bytes
    // storport.sys PAGE:0x70ab0, 0x2be18 bytes
    //
    _w80(sdk::unknown_ptr) ra_unit_query_pnp_device_state_irp;
    
    // [RaUnitQueryRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e148, 0x1b430 bytes
    // storport.sys PAGE:0x78dd0, 0x2be18 bytes
    // storport.sys PAGE:0x8e800, 0x440c8 bytes
    // storport.sys PAGE:0x78dd0, 0x2be18 bytes
    //
    _w81(sdk::unknown_ptr) ra_unit_query_remove_device_irp;
    
    // [RaUnitQueryStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e184, 0x1b430 bytes
    // storport.sys PAGE:0x78e1c, 0x2be18 bytes
    // storport.sys PAGE:0x8e84c, 0x440c8 bytes
    // storport.sys PAGE:0x78e1c, 0x2be18 bytes
    //
    _w82(sdk::unknown_ptr) ra_unit_query_stop_device_irp;
    
    // [RaUnitQuiesceDeviceSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb0dc, 0x1b430 bytes
    // storport.sys .text:0x124e8, 0x2be18 bytes
    // storport.sys .text:0x14e10, 0x440c8 bytes
    // storport.sys .text:0x124e8, 0x2be18 bytes
    //
    _w83(sdk::unknown_ptr) ra_unit_quiesce_device_srb;
    
    // [RaUnitRegisterForIdleDetection]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57b84, 0x1b430 bytes
    // storport.sys PAGE:0x720a0, 0x2be18 bytes
    // storport.sys PAGE:0x88e34, 0x440c8 bytes
    // storport.sys PAGE:0x720a0, 0x2be18 bytes
    //
    _w84(sdk::unknown_ptr) ra_unit_register_for_idle_detection;
    
    // [RaUnitReleaseDeviceSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x350f8, 0x1b430 bytes
    // storport.sys .text:0x4544c, 0x2be18 bytes
    // storport.sys .text:0x50f14, 0x440c8 bytes
    // storport.sys .text:0x4544c, 0x2be18 bytes
    //
    _w85(sdk::unknown_ptr) ra_unit_release_device_srb;
    
    // [RaUnitReleaseRemoveLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1f54, 0x1b430 bytes
    // storport.sys .text:0xbd50, 0x2be18 bytes
    // storport.sys .text:0xa2ac, 0x440c8 bytes
    // storport.sys .text:0xbd50, 0x2be18 bytes
    //
    _w86(sdk::unknown_ptr) ra_unit_release_remove_lock;
    
    // [RaUnitRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3515c, 0x1b430 bytes
    // storport.sys .text:0x19bf4, 0x2be18 bytes
    // storport.sys .text:0x1e724, 0x440c8 bytes
    // storport.sys .text:0x19bf4, 0x2be18 bytes
    //
    _w87(sdk::unknown_ptr) ra_unit_remove_device_irp;
    
    // [RaUnitRemoveFromPendingList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbf10, 0x1b430 bytes
    // storport.sys .text:0x8054, 0x2be18 bytes
    // storport.sys .text:0xac90, 0x440c8 bytes
    // storport.sys .text:0x8054, 0x2be18 bytes
    //
    _w88(sdk::unknown_ptr) ra_unit_remove_from_pending_list;
    
    // [RaUnitRequestPowerDown]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3012c, 0x1b430 bytes
    // storport.sys .text:0x3bf5c, 0x2be18 bytes
    // storport.sys .text:0x47e90, 0x440c8 bytes
    // storport.sys .text:0x3bf5c, 0x2be18 bytes
    //
    _w89(sdk::unknown_ptr) ra_unit_request_power_down;
    
    // [RaUnitRequestPowerUp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3025c, 0x1b430 bytes
    // storport.sys .text:0x3c0ac, 0x2be18 bytes
    // storport.sys .text:0x13c78, 0x440c8 bytes
    // storport.sys .text:0x3c0ac, 0x2be18 bytes
    //
    _w90(sdk::unknown_ptr) ra_unit_request_power_up;
    
    // [RaUnitResetBusSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35290, 0x1b430 bytes
    // storport.sys .text:0x454d0, 0x2be18 bytes
    // storport.sys .text:0x50f98, 0x440c8 bytes
    // storport.sys .text:0x454d0, 0x2be18 bytes
    //
    _w91(sdk::unknown_ptr) ra_unit_reset_bus_srb;
    
    // [RaUnitScsiFreeDumpPointersIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x175dc, 0x1b430 bytes
    // storport.sys .text:0x11324, 0x2be18 bytes
    // storport.sys .text:0x5104c, 0x440c8 bytes
    // storport.sys .text:0x11324, 0x2be18 bytes
    //
    _w92(sdk::unknown_ptr) ra_unit_scsi_free_dump_pointers_ioctl;
    
    // [RaUnitScsiGetAddressIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5afe0, 0x1b430 bytes
    // storport.sys PAGE:0x71068, 0x2be18 bytes
    // storport.sys PAGE:0x88bf0, 0x440c8 bytes
    // storport.sys PAGE:0x71068, 0x2be18 bytes
    //
    _w93(sdk::unknown_ptr) ra_unit_scsi_get_address_ioctl;
    
    // [RaUnitScsiGetDumpPointersIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10c0c, 0x1b430 bytes
    // storport.sys .text:0x1263c, 0x2be18 bytes
    // storport.sys .text:0x12384, 0x440c8 bytes
    // storport.sys .text:0x1263c, 0x2be18 bytes
    //
    _w94(sdk::unknown_ptr) ra_unit_scsi_get_dump_pointers_ioctl;
    
    // [RaUnitScsiIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38e0, 0x1b430 bytes
    // storport.sys .text:0xa2d0, 0x2be18 bytes
    // storport.sys .text:0x8910, 0x440c8 bytes
    // storport.sys .text:0xa2d0, 0x2be18 bytes
    //
    _w95(sdk::unknown_ptr) ra_unit_scsi_irp;
    
    // [RaUnitScsiMiniportIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16e4, 0x1b430 bytes
    // storport.sys .text:0x66e8, 0x2be18 bytes
    // storport.sys .text:0xde10, 0x440c8 bytes
    // storport.sys .text:0x66e8, 0x2be18 bytes
    //
    _w96(sdk::unknown_ptr) ra_unit_scsi_miniport_ioctl;
    
    // [RaUnitScsiPassThroughIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e1ac, 0x1b430 bytes
    // storport.sys PAGE:0x78e54, 0x2be18 bytes
    // storport.sys PAGE:0x87a9c, 0x440c8 bytes
    // storport.sys PAGE:0x78e54, 0x2be18 bytes
    //
    _w97(sdk::unknown_ptr) ra_unit_scsi_pass_through_ioctl;
    
    // [RaUnitSetAtaPassThroughCdb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x149c, 0x1b430 bytes
    // storport.sys .text:0x2000, 0x2be18 bytes
    // storport.sys .text:0x22a8, 0x440c8 bytes
    // storport.sys .text:0x2000, 0x2be18 bytes
    //
    _w98(sdk::unknown_ptr) ra_unit_set_ata_pass_through_cdb;
    
    // [RaUnitSetHierarchicalResetSrbTimeoutCountdown]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x352e4, 0x1b430 bytes
    // storport.sys .text:0x45584, 0x2be18 bytes
    // storport.sys .text:0x51524, 0x440c8 bytes
    // storport.sys .text:0x45584, 0x2be18 bytes
    //
    _w99(sdk::unknown_ptr) ra_unit_set_hierarchical_reset_srb_timeout_countdown;
    
    // [RaUnitSetQOSIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35324, 0x1b430 bytes
    // storport.sys .text:0x455e4, 0x2be18 bytes
    // storport.sys .text:0x51584, 0x440c8 bytes
    // storport.sys .text:0x455e4, 0x2be18 bytes
    //
    _x00(sdk::unknown_ptr) ra_unit_set_qos_ioctl;
    
    // [RaUnitSetQueueDepth]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16564, 0x1b430 bytes
    // storport.sys .text:0x16020, 0x2be18 bytes
    // storport.sys .text:0x190cc, 0x440c8 bytes
    // storport.sys .text:0x16020, 0x2be18 bytes
    //
    _x01(sdk::unknown_ptr) ra_unit_set_queue_depth;
    
    // [RaUnitSetTemperatureThresholdIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35830, 0x1b430 bytes
    // storport.sys .text:0x45b30, 0x2be18 bytes
    // storport.sys .text:0x51ad4, 0x440c8 bytes
    // storport.sys .text:0x45b30, 0x2be18 bytes
    //
    _x02(sdk::unknown_ptr) ra_unit_set_temperature_threshold_ioctl;
    
    // [RaUnitSetUnresponsiveAttribute]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35914, 0x1b430 bytes
    // storport.sys .text:0x45c28, 0x2be18 bytes
    // storport.sys .text:0x51bcc, 0x440c8 bytes
    // storport.sys .text:0x45c28, 0x2be18 bytes
    //
    _x03(sdk::unknown_ptr) ra_unit_set_unresponsive_attribute;
    
    // [RaUnitStartDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57f28, 0x1b430 bytes
    // storport.sys PAGE:0x725ac, 0x2be18 bytes
    // storport.sys PAGE:0x87094, 0x440c8 bytes
    // storport.sys PAGE:0x725ac, 0x2be18 bytes
    //
    _x04(sdk::unknown_ptr) ra_unit_start_device_irp;
    
    // [RaUnitStartIo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4660, 0x1b430 bytes
    // storport.sys .text:0x4f30, 0x2be18 bytes
    // storport.sys .text:0x40d0, 0x440c8 bytes
    // storport.sys .text:0x4f30, 0x2be18 bytes
    //
    _x05(sdk::unknown_ptr) ra_unit_start_io;
    
    // [RaUnitStartResetIo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x359f4, 0x1b430 bytes
    // storport.sys .text:0x46688, 0x2be18 bytes
    // storport.sys .text:0x525d0, 0x440c8 bytes
    // storport.sys .text:0x46688, 0x2be18 bytes
    //
    _x06(sdk::unknown_ptr) ra_unit_start_reset_io;
    
    // [RaUnitStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e2c8, 0x1b430 bytes
    // storport.sys PAGE:0x78f74, 0x2be18 bytes
    // storport.sys PAGE:0x8e884, 0x440c8 bytes
    // storport.sys PAGE:0x78f74, 0x2be18 bytes
    //
    _x07(sdk::unknown_ptr) ra_unit_stop_device_irp;
    
    // [RaUnitStorageBreakReservationIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e2ec, 0x1b430 bytes
    // storport.sys PAGE:0x78fa0, 0x2be18 bytes
    // storport.sys PAGE:0x8e8b4, 0x440c8 bytes
    // storport.sys PAGE:0x78fa0, 0x2be18 bytes
    //
    _x08(sdk::unknown_ptr) ra_unit_storage_break_reservation_ioctl;
    
    // [RaUnitStorageDataSetManagementIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5aaec, 0x1b430 bytes
    // storport.sys PAGE:0x710d0, 0x2be18 bytes
    // storport.sys PAGE:0x865b4, 0x440c8 bytes
    // storport.sys PAGE:0x710d0, 0x2be18 bytes
    //
    _x09(sdk::unknown_ptr) ra_unit_storage_data_set_management_ioctl;
    
    // [RaUnitStorageDiagnosticIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e3b0, 0x1b430 bytes
    // storport.sys PAGE:0x7906c, 0x2be18 bytes
    // storport.sys PAGE:0x8ea54, 0x440c8 bytes
    // storport.sys PAGE:0x7906c, 0x2be18 bytes
    //
    _x10(sdk::unknown_ptr) ra_unit_storage_diagnostic_ioctl;
    
    // [RaUnitStorageGetIdlePowerUpReason]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e828, 0x1b430 bytes
    // storport.sys PAGE:0x79394, 0x2be18 bytes
    // storport.sys PAGE:0x8ec6c, 0x440c8 bytes
    // storport.sys PAGE:0x79394, 0x2be18 bytes
    //
    _x11(sdk::unknown_ptr) ra_unit_storage_get_idle_power_up_reason;
    
    // [RaUnitStoragePowerActive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35d10, 0x1b430 bytes
    // storport.sys .text:0x234c, 0x2be18 bytes
    // storport.sys .text:0x528e8, 0x440c8 bytes
    // storport.sys .text:0x234c, 0x2be18 bytes
    //
    _x12(sdk::unknown_ptr) ra_unit_storage_power_active;
    
    // [RaUnitStoragePowerIdle]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35d68, 0x1b430 bytes
    // storport.sys .text:0x22c0, 0x2be18 bytes
    // storport.sys .text:0x52974, 0x440c8 bytes
    // storport.sys .text:0x22c0, 0x2be18 bytes
    //
    _x13(sdk::unknown_ptr) ra_unit_storage_power_idle;
    
    // [RaUnitStorageQueryDeviceIdPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5adb0, 0x1b430 bytes
    // storport.sys PAGE:0x73420, 0x2be18 bytes
    // storport.sys PAGE:0x88c58, 0x440c8 bytes
    // storport.sys PAGE:0x73420, 0x2be18 bytes
    //
    _x14(sdk::unknown_ptr) ra_unit_storage_query_device_id_property_ioctl;
    
    // [RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5b038, 0x1b430 bytes
    // storport.sys PAGE:0x7383c, 0x2be18 bytes
    // storport.sys PAGE:0x891c4, 0x440c8 bytes
    // storport.sys PAGE:0x7383c, 0x2be18 bytes
    //
    _x15(sdk::unknown_ptr) ra_unit_storage_query_device_io_capability_property_ioctl;
    
    // [RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35dc0, 0x1b430 bytes
    // storport.sys .text:0x46d4c, 0x2be18 bytes
    // storport.sys .text:0x52b68, 0x440c8 bytes
    // storport.sys .text:0x46d4c, 0x2be18 bytes
    //
    _x16(sdk::unknown_ptr) ra_unit_storage_query_device_physical_topology_property_ioctl;
    
    // [RaUnitStorageQueryDevicePowerPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5b0c0, 0x1b430 bytes
    // storport.sys PAGE:0x73764, 0x2be18 bytes
    // storport.sys PAGE:0x890dc, 0x440c8 bytes
    // storport.sys PAGE:0x73764, 0x2be18 bytes
    //
    _x17(sdk::unknown_ptr) ra_unit_storage_query_device_power_property_ioctl;
    
    // [RaUnitStorageQueryDevicePropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x561dc, 0x1b430 bytes
    // storport.sys PAGE:0x702cc, 0x2be18 bytes
    // storport.sys PAGE:0x84184, 0x440c8 bytes
    // storport.sys PAGE:0x702cc, 0x2be18 bytes
    //
    _x18(sdk::unknown_ptr) ra_unit_storage_query_device_property_ioctl;
    
    // [RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x35f00, 0x1b430 bytes
    // storport.sys .text:0x46e9c, 0x2be18 bytes
    // storport.sys .text:0x52cd0, 0x440c8 bytes
    // storport.sys .text:0x46e9c, 0x2be18 bytes
    //
    _x19(sdk::unknown_ptr) ra_unit_storage_query_device_protocol_specific_property_ioctl;
    
    // [RaUnitStorageQueryDeviceTemperaturePropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x360c4, 0x1b430 bytes
    // storport.sys .text:0x47060, 0x2be18 bytes
    // storport.sys .text:0x52fbc, 0x440c8 bytes
    // storport.sys .text:0x47060, 0x2be18 bytes
    //
    _x20(sdk::unknown_ptr) ra_unit_storage_query_device_temperature_property_ioctl;
    
    // [RaUnitStorageQueryPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x560d4, 0x1b430 bytes
    // storport.sys PAGE:0x701a0, 0x2be18 bytes
    // storport.sys PAGE:0x84008, 0x440c8 bytes
    // storport.sys PAGE:0x701a0, 0x2be18 bytes
    //
    _x21(sdk::unknown_ptr) ra_unit_storage_query_property_ioctl;
    
    // [RaUnitSucceedPnpIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5b284, 0x1b430 bytes
    // storport.sys PAGE:0x738d0, 0x2be18 bytes
    // storport.sys PAGE:0x89274, 0x440c8 bytes
    // storport.sys PAGE:0x738d0, 0x2be18 bytes
    //
    _x22(sdk::unknown_ptr) ra_unit_succeed_pnp_irp;
    
    // [RaUnitSurpriseRemovalIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e890, 0x1b430 bytes
    // storport.sys PAGE:0x71d84, 0x2be18 bytes
    // storport.sys PAGE:0x86b88, 0x440c8 bytes
    // storport.sys PAGE:0x71d84, 0x2be18 bytes
    //
    _x23(sdk::unknown_ptr) ra_unit_surprise_removal_irp;
    
    // [RaUnitSwallowStopUnitCommand]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3624c, 0x1b430 bytes
    // storport.sys .text:0x47438, 0x2be18 bytes
    // storport.sys .text:0x532d0, 0x440c8 bytes
    // storport.sys .text:0x47438, 0x2be18 bytes
    //
    _x24(sdk::unknown_ptr) ra_unit_swallow_stop_unit_command;
    
    // [RaUnitTelemetryIdIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14274, 0x1b430 bytes
    // storport.sys .text:0x17a7c, 0x2be18 bytes
    // storport.sys .text:0x1e578, 0x440c8 bytes
    // storport.sys .text:0x17a7c, 0x2be18 bytes
    //
    _x25(sdk::unknown_ptr) ra_unit_telemetry_id_ioctl;
    
    // [RaUnitUnknownSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e988, 0x1b430 bytes
    // storport.sys PAGE:0x7940c, 0x2be18 bytes
    // storport.sys PAGE:0x8f460, 0x440c8 bytes
    // storport.sys PAGE:0x7940c, 0x2be18 bytes
    //
    _x26(sdk::unknown_ptr) ra_unit_unknown_srb;
    
    // [RaUnitUnresponsiveAttributeMgmt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x362b0, 0x1b430 bytes
    // storport.sys .text:0x474a0, 0x2be18 bytes
    // storport.sys .text:0x53338, 0x440c8 bytes
    // storport.sys .text:0x474a0, 0x2be18 bytes
    //
    _x27(sdk::unknown_ptr) ra_unit_unresponsive_attribute_mgmt;
    
    // [RaUnitWaitForRemoveLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf680, 0x1b430 bytes
    // storport.sys .text:0x16dac, 0x2be18 bytes
    // storport.sys .text:0x19624, 0x440c8 bytes
    // storport.sys .text:0x16dac, 0x2be18 bytes
    //
    _x28(sdk::unknown_ptr) ra_unit_wait_for_remove_lock;
    
    // [RaValidateProtocolCommandIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33be8, 0x1b430 bytes
    // storport.sys .text:0x421fc, 0x2be18 bytes
    // storport.sys .text:0x4d5a8, 0x440c8 bytes
    // storport.sys .text:0x421fc, 0x2be18 bytes
    //
    _x29(sdk::unknown_ptr) ra_validate_protocol_command_ioctl;
    
    // [RaWmiDispatchIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5a32c, 0x1b430 bytes
    // storport.sys PAGE:0x72e64, 0x2be18 bytes
    // storport.sys PAGE:0x88634, 0x440c8 bytes
    // storport.sys PAGE:0x72e64, 0x2be18 bytes
    //
    _x30(sdk::unknown_ptr) ra_wmi_dispatch_irp;
    
    // [RaWmiIrpNormalRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ec2c, 0x1b430 bytes
    // storport.sys PAGE:0x79960, 0x2be18 bytes
    // storport.sys PAGE:0x8f780, 0x440c8 bytes
    // storport.sys PAGE:0x79960, 0x2be18 bytes
    //
    _x31(sdk::unknown_ptr) ra_wmi_irp_normal_request;
    
    // [RaWmiIrpRegisterRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5a49c, 0x1b430 bytes
    // storport.sys PAGE:0x72fbc, 0x2be18 bytes
    // storport.sys PAGE:0x8878c, 0x440c8 bytes
    // storport.sys PAGE:0x72fbc, 0x2be18 bytes
    //
    _x32(sdk::unknown_ptr) ra_wmi_irp_register_request;
    
    // [RaWmiPassToMiniPort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5a664, 0x1b430 bytes
    // storport.sys PAGE:0x730e4, 0x2be18 bytes
    // storport.sys PAGE:0x888b4, 0x440c8 bytes
    // storport.sys PAGE:0x730e4, 0x2be18 bytes
    //
    _x33(sdk::unknown_ptr) ra_wmi_pass_to_mini_port;
    
    // [RaidAcquireAdapterRemoveLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2198, 0x1b430 bytes
    // storport.sys .text:0xc534, 0x2be18 bytes
    // storport.sys .text:0xa7c4, 0x440c8 bytes
    // storport.sys .text:0xc534, 0x2be18 bytes
    //
    _x34(sdk::unknown_ptr) raid_acquire_adapter_remove_lock;
    
    // [RaidAdapterAcquireInterruptLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2db4, 0x1b430 bytes
    // storport.sys .text:0x64e8, 0x2be18 bytes
    // storport.sys .text:0xd9a8, 0x440c8 bytes
    // storport.sys .text:0x64e8, 0x2be18 bytes
    //
    _x35(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*)>*) raid_adapter_acquire_interrupt_lock;
    
    // [RaidAdapterAcquireStartIoLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18f64, 0x1b430 bytes
    // storport.sys .text:0xc4f8, 0x2be18 bytes
    // storport.sys .text:0xa9a4, 0x440c8 bytes
    // storport.sys .text:0xc4f8, 0x2be18 bytes
    //
    _x36(sdk::unknown_ptr) raid_adapter_acquire_start_io_lock;
    
    // [RaidAdapterBusChangeDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17770, 0x1b430 bytes
    // storport.sys .text:0x29130, 0x2be18 bytes
    // storport.sys .text:0x32e50, 0x440c8 bytes
    // storport.sys .text:0x29130, 0x2be18 bytes
    //
    _x37(sdk::unknown_ptr) raid_adapter_bus_change_dpc_routine;
    
    // [RaidAdapterCacheOperationalPowerRange]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2caa8, 0x1b430 bytes
    // storport.sys .text:0x35688, 0x2be18 bytes
    // storport.sys .text:0x4159c, 0x440c8 bytes
    // storport.sys .text:0x35688, 0x2be18 bytes
    //
    _x38(sdk::unknown_ptr) raid_adapter_cache_operational_power_range;
    
    // [RaidAdapterCancelPauseTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26a28, 0x1b430 bytes
    // storport.sys .text:0x29160, 0x2be18 bytes
    // storport.sys .text:0x32e80, 0x440c8 bytes
    // storport.sys .text:0x29160, 0x2be18 bytes
    //
    _x39(sdk::unknown_ptr) raid_adapter_cancel_pause_timer;
    
    // [RaidAdapterCancelRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5cf9c, 0x1b430 bytes
    // storport.sys PAGE:0x74de0, 0x2be18 bytes
    // storport.sys PAGE:0x8b440, 0x440c8 bytes
    // storport.sys PAGE:0x74de0, 0x2be18 bytes
    //
    _x40(sdk::unknown_ptr) raid_adapter_cancel_remove_device_irp;
    
    // [RaidAdapterCancelStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5cf9c, 0x1b430 bytes
    // storport.sys PAGE:0x74de0, 0x2be18 bytes
    // storport.sys PAGE:0x8b440, 0x440c8 bytes
    // storport.sys PAGE:0x74de0, 0x2be18 bytes
    //
    _x41(sdk::unknown_ptr) raid_adapter_cancel_stop_device_irp;
    
    // [RaidAdapterCheckWaitTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26a78, 0x1b430 bytes
    // storport.sys .text:0x291ac, 0x2be18 bytes
    // storport.sys .text:0x1ce1c, 0x440c8 bytes
    // storport.sys .text:0x291ac, 0x2be18 bytes
    //
    _x42(sdk::unknown_ptr) raid_adapter_check_wait_timeout;
    
    // [RaidAdapterCompleteInitialization]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14d48, 0x1b430 bytes
    // storport.sys .text:0x295f4, 0x2be18 bytes
    // storport.sys .text:0x32f44, 0x440c8 bytes
    // storport.sys .text:0x295f4, 0x2be18 bytes
    //
    _x43(sdk::unknown_ptr) raid_adapter_complete_initialization;
    
    // [RaidAdapterConfigureResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15a30, 0x1b430 bytes
    // storport.sys .text:0x29824, 0x2be18 bytes
    // storport.sys .text:0x33368, 0x440c8 bytes
    // storport.sys .text:0x29824, 0x2be18 bytes
    //
    _x44(sdk::unknown_ptr) raid_adapter_configure_resources;
    
    // [RaidAdapterConnectInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdb88, 0x1b430 bytes
    // storport.sys .text:0x2996c, 0x2be18 bytes
    // storport.sys .text:0x334e8, 0x440c8 bytes
    // storport.sys .text:0x2996c, 0x2be18 bytes
    //
    _x45(sdk::unknown_ptr) raid_adapter_connect_interrupt;
    
    // [RaidAdapterConnectMSIInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56f94, 0x1b430 bytes
    // storport.sys PAGE:0x74e80, 0x2be18 bytes
    // storport.sys PAGE:0x8b4e0, 0x440c8 bytes
    // storport.sys PAGE:0x74e80, 0x2be18 bytes
    //
    _x46(sdk::unknown_ptr) raid_adapter_connect_msi_interrupt;
    
    // [RaidAdapterConnectNonMSIInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d038, 0x1b430 bytes
    // storport.sys PAGE:0x75024, 0x2be18 bytes
    // storport.sys PAGE:0x8b694, 0x440c8 bytes
    // storport.sys PAGE:0x75024, 0x2be18 bytes
    //
    _x47(sdk::unknown_ptr) raid_adapter_connect_non_msi_interrupt;
    
    // [RaidAdapterCreateDevmapEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10b1c, 0x1b430 bytes
    // storport.sys .text:0x29ac4, 0x2be18 bytes
    // storport.sys .text:0x33640, 0x440c8 bytes
    // storport.sys .text:0x29ac4, 0x2be18 bytes
    //
    _x48(sdk::unknown_ptr) raid_adapter_create_devmap_entry;
    
    // [RaidAdapterDeferredRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x173a0, 0x1b430 bytes
    // storport.sys .text:0xe120, 0x2be18 bytes
    // storport.sys .text:0x2810, 0x440c8 bytes
    // storport.sys .text:0xe120, 0x2be18 bytes
    //
    _x49(sdk::unknown_ptr) raid_adapter_deferred_routine;
    
    // [RaidAdapterDeleteChildren]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26efc, 0x1b430 bytes
    // storport.sys .text:0x29d90, 0x2be18 bytes
    // storport.sys .text:0x33948, 0x440c8 bytes
    // storport.sys .text:0x29d90, 0x2be18 bytes
    //
    _x50(sdk::unknown_ptr) raid_adapter_delete_children;
    
    // [RaidAdapterDeviceBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26f28, 0x1b430 bytes
    // storport.sys .text:0x29dc4, 0x2be18 bytes
    // storport.sys .text:0x3397c, 0x440c8 bytes
    // storport.sys .text:0x29dc4, 0x2be18 bytes
    //
    _x51(sdk::unknown_ptr) raid_adapter_device_busy;
    
    // [RaidAdapterDeviceControlIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1fc8, 0x1b430 bytes
    // storport.sys .text:0xc248, 0x2be18 bytes
    // storport.sys .text:0xa53c, 0x440c8 bytes
    // storport.sys .text:0xc248, 0x2be18 bytes
    //
    _x52(sdk::unknown_ptr) raid_adapter_device_control_irp;
    
    // [RaidAdapterDevicePowerDownSrbComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb140, 0x1b430 bytes
    // storport.sys .text:0xf860, 0x2be18 bytes
    // storport.sys .text:0x48030, 0x440c8 bytes
    // storport.sys .text:0xf860, 0x2be18 bytes
    //
    _x53(sdk::unknown_ptr) raid_adapter_device_power_down_srb_complete;
    
    // [RaidAdapterDevicePowerUpSrbComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x98b0, 0x1b430 bytes
    // storport.sys .text:0xebb0, 0x2be18 bytes
    // storport.sys .text:0x480c0, 0x440c8 bytes
    // storport.sys .text:0xebb0, 0x2be18 bytes
    //
    _x54(sdk::unknown_ptr) raid_adapter_device_power_up_srb_complete;
    
    // [RaidAdapterDevicePowerstopAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbf6c, 0x1b430 bytes
    // storport.sys .text:0xf8bc, 0x2be18 bytes
    // storport.sys .text:0xea48, 0x440c8 bytes
    // storport.sys .text:0xf8bc, 0x2be18 bytes
    //
    _x55(sdk::unknown_ptr) raid_adapter_device_powerstop_adapter;
    
    // [RaidAdapterDeviceReady]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x26fe0, 0x1b430 bytes
    // storport.sys .text:0x29e98, 0x2be18 bytes
    // storport.sys .text:0x33a50, 0x440c8 bytes
    // storport.sys .text:0x29e98, 0x2be18 bytes
    //
    _x56(sdk::unknown_ptr) raid_adapter_device_ready;
    
    // [RaidAdapterDeviceUsageNotificationIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf000, 0x1b430 bytes
    // storport.sys .text:0x11cec, 0x2be18 bytes
    // storport.sys .text:0x14634, 0x440c8 bytes
    // storport.sys .text:0x11cec, 0x2be18 bytes
    //
    _x57(sdk::unknown_ptr) raid_adapter_device_usage_notification_irp;
    
    // [RaidAdapterDisConnectMSIInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d104, 0x1b430 bytes
    // storport.sys PAGE:0x75d5c, 0x2be18 bytes
    // storport.sys PAGE:0x8bc90, 0x440c8 bytes
    // storport.sys PAGE:0x75d5c, 0x2be18 bytes
    //
    _x58(sdk::unknown_ptr) raid_adapter_dis_connect_msi_interrupt;
    
    // [RaidAdapterDisConnectNonMSIInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d144, 0x1b430 bytes
    // storport.sys PAGE:0x75da8, 0x2be18 bytes
    // storport.sys PAGE:0x8bcdc, 0x440c8 bytes
    // storport.sys PAGE:0x75da8, 0x2be18 bytes
    //
    _x59(sdk::unknown_ptr) raid_adapter_dis_connect_non_msi_interrupt;
    
    // [RaidAdapterDisableDeviceInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27050, 0x1b430 bytes
    // storport.sys .text:0x2a118, 0x2be18 bytes
    // storport.sys .text:0x33cd0, 0x440c8 bytes
    // storport.sys .text:0x2a118, 0x2be18 bytes
    //
    _x60(sdk::unknown_ptr) raid_adapter_disable_device_interface;
    
    // [RaidAdapterDisableQosWaitTimeoutCheck]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x270f8, 0x1b430 bytes
    // storport.sys .text:0x2a208, 0x2be18 bytes
    // storport.sys .text:0x33df0, 0x440c8 bytes
    // storport.sys .text:0x2a208, 0x2be18 bytes
    //
    _x61(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*)>*) raid_adapter_disable_qos_wait_timeout_check;
    
    // [RaidAdapterDisableRpmbInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27144, 0x1b430 bytes
    // storport.sys .text:0x2a284, 0x2be18 bytes
    // storport.sys .text:0x33e6c, 0x440c8 bytes
    // storport.sys .text:0x2a284, 0x2be18 bytes
    //
    _x62(sdk::unknown_ptr) raid_adapter_disable_rpmb_interface;
    
    // [RaidAdapterEffectiveMaxOperationalPower]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x303a4, 0x1b430 bytes
    // storport.sys .text:0x3c260, 0x2be18 bytes
    // storport.sys .text:0x480ec, 0x440c8 bytes
    // storport.sys .text:0x3c260, 0x2be18 bytes
    //
    _x63(sdk::unknown_ptr) raid_adapter_effective_max_operational_power;
    
    // [RaidAdapterEnableQosWaitTimeoutCheck]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27168, 0x1b430 bytes
    // storport.sys .text:0x2a2b4, 0x2be18 bytes
    // storport.sys .text:0x33f2c, 0x440c8 bytes
    // storport.sys .text:0x2a2b4, 0x2be18 bytes
    //
    _x64(sdk::function<int32_t(struct stor::port::raid_adapter_extension_t*)>*) raid_adapter_enable_qos_wait_timeout_check;
    
    // [RaidAdapterEnumerateBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11874, 0x1b430 bytes
    // storport.sys .text:0x14974, 0x2be18 bytes
    // storport.sys .text:0x17048, 0x440c8 bytes
    // storport.sys .text:0x14974, 0x2be18 bytes
    //
    _x65(sdk::unknown_ptr) raid_adapter_enumerate_bus;
    
    // [RaidAdapterExecuteXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x364c, 0x1b430 bytes
    // storport.sys .text:0x4e00, 0x2be18 bytes
    // storport.sys .text:0x3fa0, 0x440c8 bytes
    // storport.sys .text:0x4e00, 0x2be18 bytes
    //
    _x66(sdk::unknown_ptr) raid_adapter_execute_xrb;
    
    // [RaidAdapterFilterResourceRequirementsIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x570f0, 0x1b430 bytes
    // storport.sys PAGE:0x75df4, 0x2be18 bytes
    // storport.sys PAGE:0x8bd28, 0x440c8 bytes
    // storport.sys PAGE:0x75df4, 0x2be18 bytes
    //
    _x67(sdk::unknown_ptr) raid_adapter_filter_resource_requirements_irp;
    
    // [RaidAdapterFindUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ab8, 0x1b430 bytes
    // storport.sys .text:0x6fb4, 0x2be18 bytes
    // storport.sys .text:0xcf20, 0x440c8 bytes
    // storport.sys .text:0x6fb4, 0x2be18 bytes
    //
    _x68(sdk::unknown_ptr) raid_adapter_find_unit;
    
    // [RaidAdapterFindUnitAtDirql]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c54, 0x1b430 bytes
    // storport.sys .text:0x6560, 0x2be18 bytes
    // storport.sys .text:0xdb38, 0x440c8 bytes
    // storport.sys .text:0x6560, 0x2be18 bytes
    //
    _x69(sdk::unknown_ptr) raid_adapter_find_unit_at_dirql;
    
    // [RaidAdapterFindUnitAtPassive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b28, 0x1b430 bytes
    // storport.sys .text:0x7028, 0x2be18 bytes
    // storport.sys .text:0xcfa4, 0x440c8 bytes
    // storport.sys .text:0x7028, 0x2be18 bytes
    //
    _x70(sdk::unknown_ptr) raid_adapter_find_unit_at_passive;
    
    // [RaidAdapterFindZombieUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12a18, 0x1b430 bytes
    // storport.sys .text:0x15f90, 0x2be18 bytes
    // storport.sys .text:0x18b90, 0x440c8 bytes
    // storport.sys .text:0x15f90, 0x2be18 bytes
    //
    _x71(sdk::unknown_ptr) raid_adapter_find_zombie_unit;
    
    // [RaidAdapterGetSystemPowerHint]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x271d4, 0x1b430 bytes
    // storport.sys .text:0x2a6c0, 0x2be18 bytes
    // storport.sys .text:0x2016c, 0x440c8 bytes
    // storport.sys .text:0x2a6c0, 0x2be18 bytes
    //
    _x72(sdk::unknown_ptr) raid_adapter_get_system_power_hint;
    
    // [RaidAdapterGetSystemPowerResumeLatency]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x271f0, 0x1b430 bytes
    // storport.sys .text:0x2a6e4, 0x2be18 bytes
    // storport.sys .text:0x20190, 0x440c8 bytes
    // storport.sys .text:0x2a6e4, 0x2be18 bytes
    //
    _x73(sdk::unknown_ptr) raid_adapter_get_system_power_resume_latency;
    
    // [RaidAdapterHack]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x155a8, 0x1b430 bytes
    // storport.sys .text:0x2a70c, 0x2be18 bytes
    // storport.sys .text:0x341e4, 0x440c8 bytes
    // storport.sys .text:0x2a70c, 0x2be18 bytes
    //
    _x74(sdk::unknown_ptr) raid_adapter_hack;
    
    // [RaidAdapterHwFirmwareActivateIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2720c, 0x1b430 bytes
    // storport.sys .text:0x2a8a0, 0x2be18 bytes
    // storport.sys .text:0x34378, 0x440c8 bytes
    // storport.sys .text:0x2a8a0, 0x2be18 bytes
    //
    _x75(sdk::unknown_ptr) raid_adapter_hw_firmware_activate_ioctl;
    
    // [RaidAdapterHwFirmwareDownloadIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27308, 0x1b430 bytes
    // storport.sys .text:0x2a998, 0x2be18 bytes
    // storport.sys .text:0x344a8, 0x440c8 bytes
    // storport.sys .text:0x2a998, 0x2be18 bytes
    //
    _x76(sdk::unknown_ptr) raid_adapter_hw_firmware_download_ioctl;
    
    // [RaidAdapterHwFirmwareGetInfoFromMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27440, 0x1b430 bytes
    // storport.sys .text:0x2aae4, 0x2be18 bytes
    // storport.sys .text:0x345f4, 0x440c8 bytes
    // storport.sys .text:0x2aae4, 0x2be18 bytes
    //
    _x77(sdk::unknown_ptr) raid_adapter_hw_firmware_get_info_from_miniport;
    
    // [RaidAdapterHwFirmwareGetInfoIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x274a4, 0x1b430 bytes
    // storport.sys .text:0x2ab50, 0x2be18 bytes
    // storport.sys .text:0x34670, 0x440c8 bytes
    // storport.sys .text:0x2ab50, 0x2be18 bytes
    //
    _x78(sdk::unknown_ptr) raid_adapter_hw_firmware_get_info_ioctl;
    
    // [RaidAdapterInitializeWmi]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15b3c, 0x1b430 bytes
    // storport.sys .text:0x2ac64, 0x2be18 bytes
    // storport.sys .text:0x34784, 0x440c8 bytes
    // storport.sys .text:0x2ac64, 0x2be18 bytes
    //
    _x79(sdk::unknown_ptr) raid_adapter_initialize_wmi;
    
    // [RaidAdapterInsertUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12894, 0x1b430 bytes
    // storport.sys .text:0x15de0, 0x2be18 bytes
    // storport.sys .text:0x1895c, 0x440c8 bytes
    // storport.sys .text:0x15de0, 0x2be18 bytes
    //
    _x80(sdk::unknown_ptr) raid_adapter_insert_unit;
    
    // [RaidAdapterInsertZombieUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x275bc, 0x1b430 bytes
    // storport.sys .text:0x16ff4, 0x2be18 bytes
    // storport.sys .text:0x1ae18, 0x440c8 bytes
    // storport.sys .text:0x16ff4, 0x2be18 bytes
    //
    _x81(sdk::unknown_ptr) raid_adapter_insert_zombie_unit;
    
    // [RaidAdapterLogIoError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27624, 0x1b430 bytes
    // storport.sys .text:0x2ad1c, 0x2be18 bytes
    // storport.sys .text:0x3483c, 0x440c8 bytes
    // storport.sys .text:0x2ad1c, 0x2be18 bytes
    //
    _x82(sdk::unknown_ptr) raid_adapter_log_io_error;
    
    // [RaidAdapterLogIoErrorDeferred]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x276b4, 0x1b430 bytes
    // storport.sys .text:0x2adc8, 0x2be18 bytes
    // storport.sys .text:0x348e8, 0x440c8 bytes
    // storport.sys .text:0x2adc8, 0x2be18 bytes
    //
    _x83(sdk::unknown_ptr) raid_adapter_log_io_error_deferred;
    
    // [RaidAdapterMarkChildrenMissing]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27730, 0x1b430 bytes
    // storport.sys .text:0x2ae5c, 0x2be18 bytes
    // storport.sys .text:0x34c28, 0x440c8 bytes
    // storport.sys .text:0x2ae5c, 0x2be18 bytes
    //
    _x84(sdk::unknown_ptr) raid_adapter_mark_children_missing;
    
    // [RaidAdapterMiniportProcessServiceRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2775c, 0x1b430 bytes
    // storport.sys .text:0x2ae90, 0x2be18 bytes
    // storport.sys .text:0x34c5c, 0x440c8 bytes
    // storport.sys .text:0x2ae90, 0x2be18 bytes
    //
    _x85(sdk::unknown_ptr) raid_adapter_miniport_process_service_request;
    
    // [RaidAdapterPassThrough]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d184, 0x1b430 bytes
    // storport.sys PAGE:0x76794, 0x2be18 bytes
    // storport.sys PAGE:0x879d4, 0x440c8 bytes
    // storport.sys PAGE:0x76794, 0x2be18 bytes
    //
    _x86(sdk::unknown_ptr) raid_adapter_pass_through;
    
    // [RaidAdapterPassiveCoolingCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x303d0, 0x1b430 bytes
    // storport.sys .text:0x3c290, 0x2be18 bytes
    // storport.sys .text:0x48120, 0x440c8 bytes
    // storport.sys .text:0x3c290, 0x2be18 bytes
    //
    _x87(sdk::unknown_ptr) raid_adapter_passive_cooling_callback;
    
    // [RaidAdapterPerfStateCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30400, 0x1b430 bytes
    // storport.sys .text:0x3c2c0, 0x2be18 bytes
    // storport.sys .text:0x48150, 0x440c8 bytes
    // storport.sys .text:0x3c2c0, 0x2be18 bytes
    //
    _x88(sdk::unknown_ptr) raid_adapter_perf_state_callback;
    
    // [RaidAdapterPnpIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xed90, 0x1b430 bytes
    // storport.sys .text:0x13a74, 0x2be18 bytes
    // storport.sys .text:0x16508, 0x440c8 bytes
    // storport.sys .text:0x13a74, 0x2be18 bytes
    //
    _x89(sdk::unknown_ptr) raid_adapter_pnp_irp;
    
    // [RaidAdapterPoFxActivateComponent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1865c, 0x1b430 bytes
    // storport.sys .text:0x2afa0, 0x2be18 bytes
    // storport.sys .text:0x2a50, 0x440c8 bytes
    // storport.sys .text:0x2afa0, 0x2be18 bytes
    //
    _x90(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*, uint32_t, uint32_t)>*) raid_adapter_po_fx_activate_component;
    
    // [RaidAdapterPoFxIdleComponent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x186b4, 0x1b430 bytes
    // storport.sys .text:0x2b004, 0x2be18 bytes
    // storport.sys .text:0x10240, 0x440c8 bytes
    // storport.sys .text:0x2b004, 0x2be18 bytes
    //
    _x91(sdk::function<uint8_t(struct stor::port::raid_adapter_extension_t*, uint32_t, uint32_t)>*) raid_adapter_po_fx_idle_component;
    
    // [RaidAdapterPostScatterGatherExecute]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x51b0, 0x1b430 bytes
    // storport.sys .text:0x5c20, 0x2be18 bytes
    // storport.sys .text:0x5030, 0x440c8 bytes
    // storport.sys .text:0x5c20, 0x2be18 bytes
    //
    _x92(sdk::unknown_ptr) raid_adapter_post_scatter_gather_execute;
    
    // [RaidAdapterPowerCapIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27890, 0x1b430 bytes
    // storport.sys .text:0x2b040, 0x2be18 bytes
    // storport.sys .text:0x34da8, 0x440c8 bytes
    // storport.sys .text:0x2b040, 0x2be18 bytes
    //
    _x93(sdk::unknown_ptr) raid_adapter_power_cap_ioctl;
    
    // [RaidAdapterPowerDownDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb4f4, 0x1b430 bytes
    // storport.sys .text:0x10408, 0x2be18 bytes
    // storport.sys .text:0x115f0, 0x440c8 bytes
    // storport.sys .text:0x10408, 0x2be18 bytes
    //
    _x94(sdk::unknown_ptr) raid_adapter_power_down_device;
    
    // [RaidAdapterPowerDownDeviceCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17820, 0x1b430 bytes
    // storport.sys .text:0x122c0, 0x2be18 bytes
    // storport.sys .text:0x11ab0, 0x440c8 bytes
    // storport.sys .text:0x122c0, 0x2be18 bytes
    //
    _x95(sdk::unknown_ptr) raid_adapter_power_down_device_completion;
    
    // [RaidAdapterPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb260, 0x1b430 bytes
    // storport.sys .text:0xee68, 0x2be18 bytes
    // storport.sys .text:0x11348, 0x440c8 bytes
    // storport.sys .text:0xee68, 0x2be18 bytes
    //
    _x96(sdk::unknown_ptr) raid_adapter_power_irp;
    
    // [RaidAdapterPowerUpDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xad8c, 0x1b430 bytes
    // storport.sys .text:0x10354, 0x2be18 bytes
    // storport.sys .text:0x1a3f8, 0x440c8 bytes
    // storport.sys .text:0x10354, 0x2be18 bytes
    //
    _x97(sdk::unknown_ptr) raid_adapter_power_up_device;
    
    // [RaidAdapterPowerUpDeviceCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa230, 0x1b430 bytes
    // storport.sys .text:0x10bd0, 0x2be18 bytes
    // storport.sys .text:0x19d70, 0x440c8 bytes
    // storport.sys .text:0x10bd0, 0x2be18 bytes
    //
    _x98(sdk::unknown_ptr) raid_adapter_power_up_device_completion;
    
    // [RaidAdapterPowerUpDeviceCompletionLastStep]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x98cc, 0x1b430 bytes
    // storport.sys .text:0xebdc, 0x2be18 bytes
    // storport.sys .text:0x19e40, 0x440c8 bytes
    // storport.sys .text:0xebdc, 0x2be18 bytes
    //
    _x99(sdk::unknown_ptr) raid_adapter_power_up_device_completion_last_step;
    
    // [RaidAdapterQueryCapabilitiesIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57924, 0x1b430 bytes
    // storport.sys PAGE:0x714f4, 0x2be18 bytes
    // storport.sys PAGE:0x85e9c, 0x440c8 bytes
    // storport.sys PAGE:0x714f4, 0x2be18 bytes
    //
    _y00(sdk::unknown_ptr) raid_adapter_query_capabilities_irp;
    
    // [RaidAdapterQueryCapabilitiesIrpCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x171a0, 0x1b430 bytes
    // storport.sys .text:0x13150, 0x2be18 bytes
    // storport.sys .text:0x198b0, 0x440c8 bytes
    // storport.sys .text:0x13150, 0x2be18 bytes
    //
    _y01(sdk::unknown_ptr) raid_adapter_query_capabilities_irp_completion;
    
    // [RaidAdapterQueryCoolingInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30448, 0x1b430 bytes
    // storport.sys .text:0x3c310, 0x2be18 bytes
    // storport.sys .text:0x48388, 0x440c8 bytes
    // storport.sys .text:0x3c310, 0x2be18 bytes
    //
    _y02(sdk::unknown_ptr) raid_adapter_query_cooling_interface;
    
    // [RaidAdapterQueryDevicePowerCompletionRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb050, 0x1b430 bytes
    // storport.sys .text:0x12450, 0x2be18 bytes
    // storport.sys .text:0x14a40, 0x440c8 bytes
    // storport.sys .text:0x12450, 0x2be18 bytes
    //
    _y03(sdk::unknown_ptr) raid_adapter_query_device_power_completion_routine;
    
    // [RaidAdapterQueryDeviceRelationsIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf0ec, 0x1b430 bytes
    // storport.sys .text:0x13c14, 0x2be18 bytes
    // storport.sys .text:0x166a8, 0x440c8 bytes
    // storport.sys .text:0x13c14, 0x2be18 bytes
    //
    _y04(sdk::unknown_ptr) raid_adapter_query_device_relations_irp;
    
    // [RaidAdapterQueryIdIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27958, 0x1b430 bytes
    // storport.sys .text:0x2b45c, 0x2be18 bytes
    // storport.sys .text:0x351cc, 0x440c8 bytes
    // storport.sys .text:0x2b45c, 0x2be18 bytes
    //
    _y05(sdk::unknown_ptr) raid_adapter_query_id_irp;
    
    // [RaidAdapterQueryInterfaceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xec04, 0x1b430 bytes
    // storport.sys .text:0x2b4f0, 0x2be18 bytes
    // storport.sys .text:0x35260, 0x440c8 bytes
    // storport.sys .text:0x2b4f0, 0x2be18 bytes
    //
    _y06(sdk::unknown_ptr) raid_adapter_query_interface_irp;
    
    // [RaidAdapterQueryPnpDeviceStateIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x579a0, 0x1b430 bytes
    // storport.sys PAGE:0x7095c, 0x2be18 bytes
    // storport.sys PAGE:0x85d38, 0x440c8 bytes
    // storport.sys PAGE:0x7095c, 0x2be18 bytes
    //
    _y07(sdk::unknown_ptr) raid_adapter_query_pnp_device_state_irp;
    
    // [RaidAdapterQueryPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa87c, 0x1b430 bytes
    // storport.sys .text:0xf604, 0x2be18 bytes
    // storport.sys .text:0x13d00, 0x440c8 bytes
    // storport.sys .text:0xf604, 0x2be18 bytes
    //
    _y08(sdk::unknown_ptr) raid_adapter_query_power_irp;
    
    // [RaidAdapterQueryRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d254, 0x1b430 bytes
    // storport.sys PAGE:0x7690c, 0x2be18 bytes
    // storport.sys PAGE:0x8bfa8, 0x440c8 bytes
    // storport.sys PAGE:0x7690c, 0x2be18 bytes
    //
    _y09(sdk::unknown_ptr) raid_adapter_query_remove_device_irp;
    
    // [RaidAdapterQueryStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d2f0, 0x1b430 bytes
    // storport.sys PAGE:0x769ac, 0x2be18 bytes
    // storport.sys PAGE:0x8c048, 0x440c8 bytes
    // storport.sys PAGE:0x769ac, 0x2be18 bytes
    //
    _y10(sdk::unknown_ptr) raid_adapter_query_stop_device_irp;
    
    // [RaidAdapterQuerySystemPowerCompletionRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xae40, 0x1b430 bytes
    // storport.sys .text:0x120d0, 0x2be18 bytes
    // storport.sys .text:0x14740, 0x440c8 bytes
    // storport.sys .text:0x120d0, 0x2be18 bytes
    //
    _y11(sdk::unknown_ptr) raid_adapter_query_system_power_completion_routine;
    
    // [RaidAdapterQuerySystemPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa970, 0x1b430 bytes
    // storport.sys .text:0xf708, 0x2be18 bytes
    // storport.sys .text:0x13e04, 0x440c8 bytes
    // storport.sys .text:0xf708, 0x2be18 bytes
    //
    _y12(sdk::unknown_ptr) raid_adapter_query_system_power_irp;
    
    // [RaidAdapterRaiseIrqlAndExecuteXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3604, 0x1b430 bytes
    // storport.sys .text:0x4da4, 0x2be18 bytes
    // storport.sys .text:0x3f44, 0x440c8 bytes
    // storport.sys .text:0x4da4, 0x2be18 bytes
    //
    _y13(sdk::unknown_ptr) raid_adapter_raise_irql_and_execute_xrb;
    
    // [RaidAdapterReInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x279ec, 0x1b430 bytes
    // storport.sys .text:0x2b65c, 0x2be18 bytes
    // storport.sys .text:0x353cc, 0x440c8 bytes
    // storport.sys .text:0x2b65c, 0x2be18 bytes
    //
    _y14(sdk::unknown_ptr) raid_adapter_re_initialize;
    
    // [RaidAdapterRegisterDeviceInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe26c, 0x1b430 bytes
    // storport.sys .text:0x2b708, 0x2be18 bytes
    // storport.sys .text:0x35618, 0x440c8 bytes
    // storport.sys .text:0x2b708, 0x2be18 bytes
    //
    _y15(sdk::unknown_ptr) raid_adapter_register_device_interface;
    
    // [RaidAdapterReleaseInterruptLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2bd0, 0x1b430 bytes
    // storport.sys .text:0x666c, 0x2be18 bytes
    // storport.sys .text:0xda40, 0x440c8 bytes
    // storport.sys .text:0x666c, 0x2be18 bytes
    //
    _y16(sdk::function<void(struct stor::port::raid_adapter_extension_t*, uint8_t)>*) raid_adapter_release_interrupt_lock;
    
    // [RaidAdapterReleaseResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d38c, 0x1b430 bytes
    // storport.sys PAGE:0x76a4c, 0x2be18 bytes
    // storport.sys PAGE:0x8c0e8, 0x440c8 bytes
    // storport.sys PAGE:0x76a4c, 0x2be18 bytes
    //
    _y17(sdk::unknown_ptr) raid_adapter_release_resources;
    
    // [RaidAdapterRemoveDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d4fc, 0x1b430 bytes
    // storport.sys PAGE:0x76c38, 0x2be18 bytes
    // storport.sys PAGE:0x8c2fc, 0x440c8 bytes
    // storport.sys PAGE:0x76c38, 0x2be18 bytes
    //
    _y18(sdk::unknown_ptr) raid_adapter_remove_device_irp;
    
    // [RaidAdapterRemoveNormalChildren]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27a94, 0x1b430 bytes
    // storport.sys .text:0x2b8b8, 0x2be18 bytes
    // storport.sys .text:0x35850, 0x440c8 bytes
    // storport.sys .text:0x2b8b8, 0x2be18 bytes
    //
    _y19(sdk::unknown_ptr) raid_adapter_remove_normal_children;
    
    // [RaidAdapterRemoveUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11be0, 0x1b430 bytes
    // storport.sys .text:0x14d24, 0x2be18 bytes
    // storport.sys .text:0x18834, 0x440c8 bytes
    // storport.sys .text:0x14d24, 0x2be18 bytes
    //
    _y20(sdk::unknown_ptr) raid_adapter_remove_unit;
    
    // [RaidAdapterRemoveZombieChildren]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27b90, 0x1b430 bytes
    // storport.sys .text:0x2b9d0, 0x2be18 bytes
    // storport.sys .text:0x3596c, 0x440c8 bytes
    // storport.sys .text:0x2b9d0, 0x2be18 bytes
    //
    _y21(sdk::unknown_ptr) raid_adapter_remove_zombie_children;
    
    // [RaidAdapterRemoveZombieUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27c40, 0x1b430 bytes
    // storport.sys .text:0x19d6c, 0x2be18 bytes
    // storport.sys .text:0x1e89c, 0x440c8 bytes
    // storport.sys .text:0x19d6c, 0x2be18 bytes
    //
    _y22(sdk::unknown_ptr) raid_adapter_remove_zombie_unit;
    
    // [RaidAdapterRequestAddtionalTimerDeferred]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18ae8, 0x1b430 bytes
    // storport.sys .text:0x2baa0, 0x2be18 bytes
    // storport.sys .text:0x35a3c, 0x440c8 bytes
    // storport.sys .text:0x2baa0, 0x2be18 bytes
    //
    _y23(sdk::unknown_ptr) raid_adapter_request_addtional_timer_deferred;
    
    // [RaidAdapterRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27ca8, 0x1b430 bytes
    // storport.sys .text:0xd440, 0x2be18 bytes
    // storport.sys .text:0xd540, 0x440c8 bytes
    // storport.sys .text:0xd440, 0x2be18 bytes
    //
    _y24(sdk::unknown_ptr) raid_adapter_request_complete;
    
    // [RaidAdapterRequestTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb194, 0x1b430 bytes
    // storport.sys .text:0x2bbdc, 0x2be18 bytes
    // storport.sys .text:0xdae4, 0x440c8 bytes
    // storport.sys .text:0x2bbdc, 0x2be18 bytes
    //
    _y25(sdk::unknown_ptr) raid_adapter_request_timer;
    
    // [RaidAdapterRequestTimerDeferred]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27e08, 0x1b430 bytes
    // storport.sys .text:0x2bc38, 0x2be18 bytes
    // storport.sys .text:0x35ac8, 0x440c8 bytes
    // storport.sys .text:0x2bc38, 0x2be18 bytes
    //
    _y26(sdk::unknown_ptr) raid_adapter_request_timer_deferred;
    
    // [RaidAdapterRescanBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf550, 0x1b430 bytes
    // storport.sys .text:0x140cc, 0x2be18 bytes
    // storport.sys .text:0x16b8c, 0x440c8 bytes
    // storport.sys .text:0x140cc, 0x2be18 bytes
    //
    _y27(sdk::unknown_ptr) raid_adapter_rescan_bus;
    
    // [RaidAdapterResetBus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x27e60, 0x1b430 bytes
    // storport.sys .text:0x2bc98, 0x2be18 bytes
    // storport.sys .text:0x35b20, 0x440c8 bytes
    // storport.sys .text:0x2bc98, 0x2be18 bytes
    //
    _y28(sdk::unknown_ptr) raid_adapter_reset_bus;
    
    // [RaidAdapterRestartAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa1c4, 0x1b430 bytes
    // storport.sys .text:0x10028, 0x2be18 bytes
    // storport.sys .text:0x1a194, 0x440c8 bytes
    // storport.sys .text:0x10028, 0x2be18 bytes
    //
    _y29(sdk::unknown_ptr) raid_adapter_restart_adapter;
    
    // [RaidAdapterRestartDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28120, 0x1b430 bytes
    // storport.sys .text:0x2c060, 0x2be18 bytes
    // storport.sys .text:0x35ee0, 0x440c8 bytes
    // storport.sys .text:0x2c060, 0x2be18 bytes
    //
    _y30(sdk::unknown_ptr) raid_adapter_restart_dpc_routine;
    
    // [RaidAdapterRestartQueues]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17794, 0x1b430 bytes
    // storport.sys .text:0x10228, 0x2be18 bytes
    // storport.sys .text:0x1a01c, 0x440c8 bytes
    // storport.sys .text:0x10228, 0x2be18 bytes
    //
    _y31(sdk::function<void(struct stor::port::raid_adapter_extension_t*)>*) raid_adapter_restart_queues;
    
    // [RaidAdapterRpmbRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2812c, 0x1b430 bytes
    // storport.sys .text:0x2c07c, 0x2be18 bytes
    // storport.sys .text:0x35efc, 0x440c8 bytes
    // storport.sys .text:0x2c07c, 0x2be18 bytes
    //
    _y32(sdk::unknown_ptr) raid_adapter_rpmb_request;
    
    // [RaidAdapterScatterGatherExecute]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7554, 0x1b430 bytes
    // storport.sys .text:0x4c34, 0x2be18 bytes
    // storport.sys .text:0x3a14, 0x440c8 bytes
    // storport.sys .text:0x4c34, 0x2be18 bytes
    //
    _y33(sdk::unknown_ptr) raid_adapter_scatter_gather_execute;
    
    // [RaidAdapterScatterGatherExecuteBidirectionalRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x282bc, 0x1b430 bytes
    // storport.sys .text:0x2c250, 0x2be18 bytes
    // storport.sys .text:0x360bc, 0x440c8 bytes
    // storport.sys .text:0x2c250, 0x2be18 bytes
    //
    _y34(sdk::unknown_ptr) raid_adapter_scatter_gather_execute_bidirectional_request;
    
    // [RaidAdapterScsiGetCapabilitiesIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x283c0, 0x1b430 bytes
    // storport.sys .text:0x2c3bc, 0x2be18 bytes
    // storport.sys .text:0x36228, 0x440c8 bytes
    // storport.sys .text:0x2c3bc, 0x2be18 bytes
    //
    _y35(sdk::unknown_ptr) raid_adapter_scsi_get_capabilities_ioctl;
    
    // [RaidAdapterScsiGetInquiryDataIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2842c, 0x1b430 bytes
    // storport.sys .text:0x2c438, 0x2be18 bytes
    // storport.sys .text:0x362a4, 0x440c8 bytes
    // storport.sys .text:0x2c438, 0x2be18 bytes
    //
    _y36(sdk::unknown_ptr) raid_adapter_scsi_get_inquiry_data_ioctl;
    
    // [RaidAdapterScsiIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d5ac, 0x1b430 bytes
    // storport.sys PAGE:0x76d04, 0x2be18 bytes
    // storport.sys PAGE:0x8c3e0, 0x440c8 bytes
    // storport.sys PAGE:0x76d04, 0x2be18 bytes
    //
    _y37(sdk::unknown_ptr) raid_adapter_scsi_irp;
    
    // [RaidAdapterScsiMiniportIoctlWithAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f18, 0x1b430 bytes
    // storport.sys .text:0x7128, 0x2be18 bytes
    // storport.sys .text:0xcb20, 0x440c8 bytes
    // storport.sys .text:0x7128, 0x2be18 bytes
    //
    _y38(sdk::unknown_ptr) raid_adapter_scsi_miniport_ioctl_with_address;
    
    // [RaidAdapterSendPoFxIdleStateToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x304c8, 0x1b430 bytes
    // storport.sys .text:0x3c428, 0x2be18 bytes
    // storport.sys .text:0xb420, 0x440c8 bytes
    // storport.sys .text:0x3c428, 0x2be18 bytes
    //
    _y39(sdk::unknown_ptr) raid_adapter_send_po_fx_idle_state_to_miniport;
    
    // [RaidAdapterSendPoFxPowerRequiredToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30550, 0x1b430 bytes
    // storport.sys .text:0x3c4ac, 0x2be18 bytes
    // storport.sys .text:0x48410, 0x440c8 bytes
    // storport.sys .text:0x3c4ac, 0x2be18 bytes
    //
    _y40(sdk::unknown_ptr) raid_adapter_send_po_fx_power_required_to_miniport;
    
    // [RaidAdapterSendPowerToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18d9c, 0x1b430 bytes
    // storport.sys .text:0x3c52c, 0x2be18 bytes
    // storport.sys .text:0xe8e8, 0x440c8 bytes
    // storport.sys .text:0x3c52c, 0x2be18 bytes
    //
    _y41(sdk::unknown_ptr) raid_adapter_send_power_to_miniport;
    
    // [RaidAdapterSendRPMBCommandSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x286d0, 0x1b430 bytes
    // storport.sys .text:0x2c7f4, 0x2be18 bytes
    // storport.sys .text:0x36650, 0x440c8 bytes
    // storport.sys .text:0x2c7f4, 0x2be18 bytes
    //
    _y42(sdk::unknown_ptr) raid_adapter_send_rpmb_command_synchronously;
    
    // [RaidAdapterSendSrbIoControlSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28b8c, 0x1b430 bytes
    // storport.sys .text:0xcd70, 0x2be18 bytes
    // storport.sys .text:0x2e68, 0x440c8 bytes
    // storport.sys .text:0xcd70, 0x2be18 bytes
    //
    _y43(sdk::unknown_ptr) raid_adapter_send_srb_io_control_synchronously;
    
    // [RaidAdapterSendSrbProtocolCommandSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x28fe4, 0x1b430 bytes
    // storport.sys .text:0x2ccb8, 0x2be18 bytes
    // storport.sys .text:0x36b14, 0x440c8 bytes
    // storport.sys .text:0x2ccb8, 0x2be18 bytes
    //
    _y44(sdk::unknown_ptr) raid_adapter_send_srb_protocol_command_synchronously;
    
    // [RaidAdapterSetDevicePowerCompletionRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xaf10, 0x1b430 bytes
    // storport.sys .text:0x123a0, 0x2be18 bytes
    // storport.sys .text:0x148a0, 0x440c8 bytes
    // storport.sys .text:0x123a0, 0x2be18 bytes
    //
    _y45(sdk::unknown_ptr) raid_adapter_set_device_power_completion_routine;
    
    // [RaidAdapterSetDevicePowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb3e8, 0x1b430 bytes
    // storport.sys .text:0xf4fc, 0x2be18 bytes
    // storport.sys .text:0x114e8, 0x440c8 bytes
    // storport.sys .text:0xf4fc, 0x2be18 bytes
    //
    _y46(sdk::unknown_ptr) raid_adapter_set_device_power_irp;
    
    // [RaidAdapterSetMaxOperationalPower]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x305cc, 0x1b430 bytes
    // storport.sys .text:0x3c5b4, 0x2be18 bytes
    // storport.sys .text:0x48568, 0x440c8 bytes
    // storport.sys .text:0x3c5b4, 0x2be18 bytes
    //
    _y47(sdk::unknown_ptr) raid_adapter_set_max_operational_power;
    
    // [RaidAdapterSetPauseTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29498, 0x1b430 bytes
    // storport.sys .text:0x2d348, 0x2be18 bytes
    // storport.sys .text:0x371d8, 0x440c8 bytes
    // storport.sys .text:0x2d348, 0x2be18 bytes
    //
    _y48(sdk::unknown_ptr) raid_adapter_set_pause_timer;
    
    // [RaidAdapterSetPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb320, 0x1b430 bytes
    // storport.sys .text:0xf0d8, 0x2be18 bytes
    // storport.sys .text:0x11418, 0x440c8 bytes
    // storport.sys .text:0xf0d8, 0x2be18 bytes
    //
    _y49(sdk::unknown_ptr) raid_adapter_set_power_irp;
    
    // [RaidAdapterSetSystemPowerCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xaa40, 0x1b430 bytes
    // storport.sys .text:0x11b00, 0x2be18 bytes
    // storport.sys .text:0x14150, 0x440c8 bytes
    // storport.sys .text:0x11b00, 0x2be18 bytes
    //
    _y50(sdk::unknown_ptr) raid_adapter_set_system_power_completion;
    
    // [RaidAdapterSetSystemPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xaba4, 0x1b430 bytes
    // storport.sys .text:0xf424, 0x2be18 bytes
    // storport.sys .text:0x142d0, 0x440c8 bytes
    // storport.sys .text:0xf424, 0x2be18 bytes
    //
    _y51(sdk::unknown_ptr) raid_adapter_set_system_power_irp;
    
    // [RaidAdapterStartDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xcb68, 0x1b430 bytes
    // storport.sys .text:0x2d944, 0x2be18 bytes
    // storport.sys .text:0x378ec, 0x440c8 bytes
    // storport.sys .text:0x2d944, 0x2be18 bytes
    //
    _y52(sdk::unknown_ptr) raid_adapter_start_device_irp;
    
    // [RaidAdapterStartMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xd034, 0x1b430 bytes
    // storport.sys .text:0x2da8c, 0x2be18 bytes
    // storport.sys .text:0x37a2c, 0x440c8 bytes
    // storport.sys .text:0x2da8c, 0x2be18 bytes
    //
    _y53(sdk::unknown_ptr) raid_adapter_start_miniport;
    
    // [RaidAdapterStop]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc068, 0x1b430 bytes
    // storport.sys .text:0xff50, 0x2be18 bytes
    // storport.sys .text:0xe9f8, 0x440c8 bytes
    // storport.sys .text:0xff50, 0x2be18 bytes
    //
    _y54(sdk::unknown_ptr) raid_adapter_stop;
    
    // [RaidAdapterStopAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc0b0, 0x1b430 bytes
    // storport.sys .text:0xffa0, 0x2be18 bytes
    // storport.sys .text:0xe970, 0x440c8 bytes
    // storport.sys .text:0xffa0, 0x2be18 bytes
    //
    _y55(sdk::unknown_ptr) raid_adapter_stop_adapter;
    
    // [RaidAdapterStopDeviceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d608, 0x1b430 bytes
    // storport.sys PAGE:0x76d68, 0x2be18 bytes
    // storport.sys PAGE:0x8c444, 0x440c8 bytes
    // storport.sys PAGE:0x76d68, 0x2be18 bytes
    //
    _y56(sdk::unknown_ptr) raid_adapter_stop_device_irp;
    
    // [RaidAdapterStopOnPowerdown]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb5d0, 0x1b430 bytes
    // storport.sys .text:0x10b60, 0x2be18 bytes
    // storport.sys .text:0xeb90, 0x440c8 bytes
    // storport.sys .text:0x10b60, 0x2be18 bytes
    //
    _y57(sdk::unknown_ptr) raid_adapter_stop_on_powerdown;
    
    // [RaidAdapterStorageBreakReservationIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x294f0, 0x1b430 bytes
    // storport.sys .text:0x2dc88, 0x2be18 bytes
    // storport.sys .text:0x37d14, 0x440c8 bytes
    // storport.sys .text:0x2dc88, 0x2be18 bytes
    //
    _y58(sdk::unknown_ptr) raid_adapter_storage_break_reservation_ioctl;
    
    // [RaidAdapterStorageQueryPropertyIoctl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56440, 0x1b430 bytes
    // storport.sys PAGE:0x705a0, 0x2be18 bytes
    // storport.sys PAGE:0x8449c, 0x440c8 bytes
    // storport.sys PAGE:0x705a0, 0x2be18 bytes
    //
    _y59(sdk::unknown_ptr) raid_adapter_storage_query_property_ioctl;
    
    // [RaidAdapterSurpriseRemovalIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d7b4, 0x1b430 bytes
    // storport.sys PAGE:0x76f30, 0x2be18 bytes
    // storport.sys PAGE:0x8c704, 0x440c8 bytes
    // storport.sys PAGE:0x76f30, 0x2be18 bytes
    //
    _y60(sdk::unknown_ptr) raid_adapter_surprise_removal_irp;
    
    // [RaidAdapterTargetedRescan]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29594, 0x1b430 bytes
    // storport.sys .text:0x2de44, 0x2be18 bytes
    // storport.sys .text:0x381a4, 0x440c8 bytes
    // storport.sys .text:0x2de44, 0x2be18 bytes
    //
    _y61(sdk::unknown_ptr) raid_adapter_targeted_rescan;
    
    // [RaidAdapterWmiDeferredRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38de0, 0x1b430 bytes
    // storport.sys .text:0x4b1e0, 0x2be18 bytes
    // storport.sys .text:0x57960, 0x440c8 bytes
    // storport.sys .text:0x4b1e0, 0x2be18 bytes
    //
    _y62(sdk::unknown_ptr) raid_adapter_wmi_deferred_routine;
    
    // [RaidAddPortDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xcb08, 0x1b430 bytes
    // storport.sys .text:0x32eac, 0x2be18 bytes
    // storport.sys .text:0x3e7e8, 0x440c8 bytes
    // storport.sys .text:0x32eac, 0x2be18 bytes
    //
    _y63(sdk::unknown_ptr) raid_add_port_driver;
    
    // [RaidAdjustDeferredQueueDepth]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15c08, 0x1b430 bytes
    // storport.sys .text:0x31670, 0x2be18 bytes
    // storport.sys .text:0x3c4ec, 0x440c8 bytes
    // storport.sys .text:0x31670, 0x2be18 bytes
    //
    _y64(sdk::unknown_ptr) raid_adjust_deferred_queue_depth;
    
    // [RaidAllocateAddressMapping]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdce0, 0x1b430 bytes
    // storport.sys .text:0x423d8, 0x2be18 bytes
    // storport.sys .text:0x4d784, 0x440c8 bytes
    // storport.sys .text:0x423d8, 0x2be18 bytes
    //
    _y65(sdk::unknown_ptr) raid_allocate_address_mapping;
    
    // [RaidAllocateDeviceProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x152b4, 0x1b430 bytes
    // storport.sys .text:0x2e01c, 0x2be18 bytes
    // storport.sys .text:0x3837c, 0x440c8 bytes
    // storport.sys .text:0x2e01c, 0x2be18 bytes
    //
    _y66(sdk::unknown_ptr) raid_allocate_device_property;
    
    // [RaidAllocatePool]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x234c, 0x1b430 bytes
    // storport.sys .text:0x7c88, 0x2be18 bytes
    // storport.sys .text:0xc7b0, 0x440c8 bytes
    // storport.sys .text:0x7c88, 0x2be18 bytes
    //
    _y67(sdk::unknown_ptr) raid_allocate_pool;
    
    // [RaidAllocateSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2210, 0x1b430 bytes
    // storport.sys .text:0x7594, 0x2be18 bytes
    // storport.sys .text:0xc65c, 0x440c8 bytes
    // storport.sys .text:0x7594, 0x2be18 bytes
    //
    _y68(sdk::unknown_ptr) raid_allocate_srb;
    
    // [RaidAtaIdFormatString]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16fd4, 0x1b430 bytes
    // storport.sys .text:0x1063c, 0x2be18 bytes
    // storport.sys .text:0x3bdec, 0x440c8 bytes
    // storport.sys .text:0x1063c, 0x2be18 bytes
    //
    _y69(sdk::unknown_ptr) raid_ata_id_format_string;
    
    // [RaidBuildMdlForXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x566a0, 0x1b430 bytes
    // storport.sys .text:0x6f54, 0x2be18 bytes
    // storport.sys .text:0xdc44, 0x440c8 bytes
    // storport.sys .text:0x6f54, 0x2be18 bytes
    //
    _y70(sdk::unknown_ptr) raid_build_mdl_for_xrb;
    
    // [RaidBuildScsiIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12474, 0x1b430 bytes
    // storport.sys .text:0x15664, 0x2be18 bytes
    // storport.sys .text:0x17e74, 0x440c8 bytes
    // storport.sys .text:0x15664, 0x2be18 bytes
    //
    _y71(sdk::unknown_ptr) raid_build_scsi_irp;
    
    // [RaidBusEnumeratorAllocateReportLunsResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12ba0, 0x1b430 bytes
    // storport.sys .text:0x15c84, 0x2be18 bytes
    // storport.sys .text:0x185b4, 0x440c8 bytes
    // storport.sys .text:0x15c84, 0x2be18 bytes
    //
    _y72(sdk::unknown_ptr) raid_bus_enumerator_allocate_report_luns_resources;
    
    // [RaidBusEnumeratorAllocateUnitResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x126f4, 0x1b430 bytes
    // storport.sys .text:0x1598c, 0x2be18 bytes
    // storport.sys .text:0x1805c, 0x440c8 bytes
    // storport.sys .text:0x1598c, 0x2be18 bytes
    //
    _y73(sdk::unknown_ptr) raid_bus_enumerator_allocate_unit_resources;
    
    // [RaidBusEnumeratorBuildReportLuns]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12a78, 0x1b430 bytes
    // storport.sys .text:0x15b44, 0x2be18 bytes
    // storport.sys .text:0x184a4, 0x440c8 bytes
    // storport.sys .text:0x15b44, 0x2be18 bytes
    //
    _y74(sdk::unknown_ptr) raid_bus_enumerator_build_report_luns;
    
    // [RaidBusEnumeratorBuildVitalProductInquiry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1251c, 0x1b430 bytes
    // storport.sys .text:0x15724, 0x2be18 bytes
    // storport.sys .text:0x17f28, 0x440c8 bytes
    // storport.sys .text:0x15724, 0x2be18 bytes
    //
    _y75(sdk::unknown_ptr) raid_bus_enumerator_build_vital_product_inquiry;
    
    // [RaidBusEnumeratorFreeUnitResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf6b0, 0x1b430 bytes
    // storport.sys .text:0x1428c, 0x2be18 bytes
    // storport.sys .text:0x16d44, 0x440c8 bytes
    // storport.sys .text:0x1428c, 0x2be18 bytes
    //
    _y76(sdk::unknown_ptr) raid_bus_enumerator_free_unit_resources;
    
    // [RaidBusEnumeratorGenericInquiry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11f60, 0x1b430 bytes
    // storport.sys .text:0x15134, 0x2be18 bytes
    // storport.sys .text:0x178f0, 0x440c8 bytes
    // storport.sys .text:0x15134, 0x2be18 bytes
    //
    _y77(sdk::unknown_ptr) raid_bus_enumerator_generic_inquiry;
    
    // [RaidBusEnumeratorGetLunList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11980, 0x1b430 bytes
    // storport.sys .text:0x14a90, 0x2be18 bytes
    // storport.sys .text:0x18ab8, 0x440c8 bytes
    // storport.sys .text:0x14a90, 0x2be18 bytes
    //
    _y78(sdk::unknown_ptr) raid_bus_enumerator_get_lun_list;
    
    // [RaidBusEnumeratorGetLunListFromTarget]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11ce4, 0x1b430 bytes
    // storport.sys .text:0x14e4c, 0x2be18 bytes
    // storport.sys .text:0x17160, 0x440c8 bytes
    // storport.sys .text:0x14e4c, 0x2be18 bytes
    //
    _y79(sdk::unknown_ptr) raid_bus_enumerator_get_lun_list_from_target;
    
    // [RaidBusEnumeratorGetUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x125f8, 0x1b430 bytes
    // storport.sys .text:0x15884, 0x2be18 bytes
    // storport.sys .text:0x17430, 0x440c8 bytes
    // storport.sys .text:0x15884, 0x2be18 bytes
    //
    _y80(sdk::unknown_ptr) raid_bus_enumerator_get_unit;
    
    // [RaidBusEnumeratorIssueReportLuns]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11e80, 0x1b430 bytes
    // storport.sys .text:0x15038, 0x2be18 bytes
    // storport.sys .text:0x17334, 0x440c8 bytes
    // storport.sys .text:0x15038, 0x2be18 bytes
    //
    _y81(sdk::unknown_ptr) raid_bus_enumerator_issue_report_luns;
    
    // [RaidBusEnumeratorIssueSynchronousRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12058, 0x1b430 bytes
    // storport.sys .text:0x15240, 0x2be18 bytes
    // storport.sys .text:0x179fc, 0x440c8 bytes
    // storport.sys .text:0x15240, 0x2be18 bytes
    //
    _y82(sdk::unknown_ptr) raid_bus_enumerator_issue_synchronous_request;
    
    // [RaidBusEnumeratorProbeLunZero]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x117e4, 0x1b430 bytes
    // storport.sys .text:0xeb1c, 0x2be18 bytes
    // storport.sys .text:0x3bea8, 0x440c8 bytes
    // storport.sys .text:0xeb1c, 0x2be18 bytes
    //
    _y83(sdk::unknown_ptr) raid_bus_enumerator_probe_lun_zero;
    
    // [RaidBusEnumeratorProcess1667DeviceInquiry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13b90, 0x1b430 bytes
    // storport.sys .text:0x11c60, 0x2be18 bytes
    // storport.sys .text:0x14cf0, 0x440c8 bytes
    // storport.sys .text:0x11c60, 0x2be18 bytes
    //
    _y84(sdk::unknown_ptr) raid_bus_enumerator_process1667_device_inquiry;
    
    // [RaidBusEnumeratorProcessAtaInformation]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16f30, 0x1b430 bytes
    // storport.sys .text:0x10590, 0x2be18 bytes
    // storport.sys .text:0x3bf40, 0x440c8 bytes
    // storport.sys .text:0x10590, 0x2be18 bytes
    //
    _y85(sdk::unknown_ptr) raid_bus_enumerator_process_ata_information;
    
    // [RaidBusEnumeratorProcessBusUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12cd8, 0x1b430 bytes
    // storport.sys .text:0x16074, 0x2be18 bytes
    // storport.sys .text:0x1826c, 0x440c8 bytes
    // storport.sys .text:0x16074, 0x2be18 bytes
    //
    _y86(sdk::unknown_ptr) raid_bus_enumerator_process_bus_unit;
    
    // [RaidBusEnumeratorProcessDeviceId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x136e0, 0x1b430 bytes
    // storport.sys .text:0x106f0, 0x2be18 bytes
    // storport.sys .text:0x139a0, 0x440c8 bytes
    // storport.sys .text:0x106f0, 0x2be18 bytes
    //
    _y87(sdk::unknown_ptr) raid_bus_enumerator_process_device_id;
    
    // [RaidBusEnumeratorProcessInquiry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13640, 0x1b430 bytes
    // storport.sys .text:0x136c0, 0x2be18 bytes
    // storport.sys .text:0x1a2b0, 0x440c8 bytes
    // storport.sys .text:0x136c0, 0x2be18 bytes
    //
    _y88(sdk::unknown_ptr) raid_bus_enumerator_process_inquiry;
    
    // [RaidBusEnumeratorProcessModifiedNodes]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfc70, 0x1b430 bytes
    // storport.sys .text:0x144b4, 0x2be18 bytes
    // storport.sys .text:0x16f48, 0x440c8 bytes
    // storport.sys .text:0x144b4, 0x2be18 bytes
    //
    _y89(sdk::unknown_ptr) raid_bus_enumerator_process_modified_nodes;
    
    // [RaidBusEnumeratorProcessNewUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfda0, 0x1b430 bytes
    // storport.sys .text:0x1711c, 0x2be18 bytes
    // storport.sys .text:0x1aaec, 0x440c8 bytes
    // storport.sys .text:0x1711c, 0x2be18 bytes
    //
    _y90(sdk::unknown_ptr) raid_bus_enumerator_process_new_unit;
    
    // [RaidBusEnumeratorProcessProbeLunZero]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18e30, 0x1b430 bytes
    // storport.sys .text:0x31250, 0x2be18 bytes
    // storport.sys .text:0x3c080, 0x440c8 bytes
    // storport.sys .text:0x31250, 0x2be18 bytes
    //
    _y91(sdk::unknown_ptr) raid_bus_enumerator_process_probe_lun_zero;
    
    // [RaidBusEnumeratorProcessSerialNumber]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13aa0, 0x1b430 bytes
    // storport.sys .text:0x11fe0, 0x2be18 bytes
    // storport.sys .text:0x14950, 0x440c8 bytes
    // storport.sys .text:0x11fe0, 0x2be18 bytes
    //
    _y92(sdk::unknown_ptr) raid_bus_enumerator_process_serial_number;
    
    // [RaidBusEnumeratorProcessSupportedPages]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13680, 0x1b430 bytes
    // storport.sys .text:0x11e00, 0x2be18 bytes
    // storport.sys .text:0x14820, 0x440c8 bytes
    // storport.sys .text:0x11e00, 0x2be18 bytes
    //
    _y93(sdk::unknown_ptr) raid_bus_enumerator_process_supported_pages;
    
    // [RaidBusEnumeratorReAllocateDataBufferResource]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b304, 0x1b430 bytes
    // storport.sys .text:0x31294, 0x2be18 bytes
    // storport.sys .text:0x3c0c4, 0x440c8 bytes
    // storport.sys .text:0x31294, 0x2be18 bytes
    //
    _y94(sdk::unknown_ptr) raid_bus_enumerator_re_allocate_data_buffer_resource;
    
    // [RaidBusEnumeratorReleaseDataBufferResource]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b39c, 0x1b430 bytes
    // storport.sys .text:0x3133c, 0x2be18 bytes
    // storport.sys .text:0x3c168, 0x440c8 bytes
    // storport.sys .text:0x3133c, 0x2be18 bytes
    //
    _y95(sdk::unknown_ptr) raid_bus_enumerator_release_data_buffer_resource;
    
    // [RaidBusEnumeratorReleaseUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11b98, 0x1b430 bytes
    // storport.sys .text:0x14cd0, 0x2be18 bytes
    // storport.sys .text:0x18218, 0x440c8 bytes
    // storport.sys .text:0x14cd0, 0x2be18 bytes
    //
    _y96(sdk::unknown_ptr) raid_bus_enumerator_release_unit;
    
    // [RaidBusEnumeratorVisitUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x115b0, 0x1b430 bytes
    // storport.sys .text:0x145c0, 0x2be18 bytes
    // storport.sys .text:0x17534, 0x440c8 bytes
    // storport.sys .text:0x145c0, 0x2be18 bytes
    //
    _y97(sdk::unknown_ptr) raid_bus_enumerator_visit_unit;
    
    // [RaidCancelIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33d88, 0x1b430 bytes
    // storport.sys .text:0x4246c, 0x2be18 bytes
    // storport.sys .text:0x4d804, 0x440c8 bytes
    // storport.sys .text:0x4246c, 0x2be18 bytes
    //
    _y98(sdk::unknown_ptr) raid_cancel_irp;
    
    // [RaidCoalescingCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29770, 0x1b430 bytes
    // storport.sys .text:0x2e100, 0x2be18 bytes
    // storport.sys .text:0x38450, 0x440c8 bytes
    // storport.sys .text:0x2e100, 0x2be18 bytes
    //
    _y99(sdk::unknown_ptr) raid_coalescing_callback;
    
    // [RaidCompleteMiniportRequestCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33e14, 0x1b430 bytes
    // storport.sys .text:0x42508, 0x2be18 bytes
    // storport.sys .text:0x4db38, 0x440c8 bytes
    // storport.sys .text:0x42508, 0x2be18 bytes
    //
    _z00(sdk::unknown_ptr) raid_complete_miniport_request_callback;
    
    // [RaidCompleteRequestEx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x68d0, 0x1b430 bytes
    // storport.sys .text:0x9950, 0x2be18 bytes
    // storport.sys .text:0x7800, 0x440c8 bytes
    // storport.sys .text:0x9950, 0x2be18 bytes
    //
    _z01(sdk::function<int32_t(struct nt::irp_t*, char, int32_t)>*) raid_complete_request_ex;
    
    // [RaidCompleteWmiIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x165b8, 0x1b430 bytes
    // storport.sys .text:0x19a7c, 0x2be18 bytes
    // storport.sys .text:0x1e3dc, 0x440c8 bytes
    // storport.sys .text:0x19a7c, 0x2be18 bytes
    //
    _z02(sdk::unknown_ptr) raid_complete_wmi_irp;
    
    // [RaidCompletionDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29940, 0x1b430 bytes
    // storport.sys .text:0x2e2c0, 0x2be18 bytes
    // storport.sys .text:0x38600, 0x440c8 bytes
    // storport.sys .text:0x2e2c0, 0x2be18 bytes
    //
    _z03(sdk::unknown_ptr) raid_completion_dpc_routine;
    
    // [RaidCreateAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15794, 0x1b430 bytes
    // storport.sys .text:0x2e548, 0x2be18 bytes
    // storport.sys .text:0x388ac, 0x440c8 bytes
    // storport.sys .text:0x2e548, 0x2be18 bytes
    //
    _z04(sdk::unknown_ptr) raid_create_adapter;
    
    // [RaidCreateDeferredQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1592c, 0x1b430 bytes
    // storport.sys .text:0x316fc, 0x2be18 bytes
    // storport.sys .text:0x3c578, 0x440c8 bytes
    // storport.sys .text:0x316fc, 0x2be18 bytes
    //
    _z05(sdk::unknown_ptr) raid_create_deferred_queue;
    
    // [RaidCreateDeviceName]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe364, 0x1b430 bytes
    // storport.sys .text:0x425ec, 0x2be18 bytes
    // storport.sys .text:0x4dc1c, 0x440c8 bytes
    // storport.sys .text:0x425ec, 0x2be18 bytes
    //
    _z06(sdk::unknown_ptr) raid_create_device_name;
    
    // [RaidCreateDma]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59c80, 0x1b430 bytes
    // storport.sys PAGE:0x77b2c, 0x2be18 bytes
    // storport.sys PAGE:0x8d438, 0x440c8 bytes
    // storport.sys PAGE:0x77b2c, 0x2be18 bytes
    //
    _z07(sdk::unknown_ptr) raid_create_dma;
    
    // [RaidCreateResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x56850, 0x1b430 bytes
    // storport.sys PAGE:0x78bf0, 0x2be18 bytes
    // storport.sys PAGE:0x8e4b4, 0x440c8 bytes
    // storport.sys PAGE:0x78bf0, 0x2be18 bytes
    //
    _z08(sdk::unknown_ptr) raid_create_resource_list;
    
    // [RaidCreateUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13c14, 0x1b430 bytes
    // storport.sys .text:0x166d8, 0x2be18 bytes
    // storport.sys .text:0x18edc, 0x440c8 bytes
    // storport.sys .text:0x166d8, 0x2be18 bytes
    //
    _z09(sdk::unknown_ptr) raid_create_unit;
    
    // [RaidDecodeSmRegistryBlob]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4294c, 0x1b430 bytes
    // storport.sys .text:0x567e0, 0x2be18 bytes
    // storport.sys .text:0x64bc4, 0x440c8 bytes
    // storport.sys .text:0x567e0, 0x2be18 bytes
    //
    _z10(sdk::unknown_ptr) raid_decode_sm_registry_blob;
    
    // [RaidDeferredQueueDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x179b0, 0x1b430 bytes
    // storport.sys .text:0xea20, 0x2be18 bytes
    // storport.sys .text:0x2a30, 0x440c8 bytes
    // storport.sys .text:0xea20, 0x2be18 bytes
    //
    _z11(sdk::unknown_ptr) raid_deferred_queue_dpc_routine;
    
    // [RaidDeleteAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29bb0, 0x1b430 bytes
    // storport.sys .text:0x2e724, 0x2be18 bytes
    // storport.sys .text:0x38a90, 0x440c8 bytes
    // storport.sys .text:0x2e724, 0x2be18 bytes
    //
    _z12(sdk::unknown_ptr) raid_delete_adapter;
    
    // [RaidDeleteBusEnumerator]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfd1c, 0x1b430 bytes
    // storport.sys .text:0x141fc, 0x2be18 bytes
    // storport.sys .text:0x16cb4, 0x440c8 bytes
    // storport.sys .text:0x141fc, 0x2be18 bytes
    //
    _z13(sdk::unknown_ptr) raid_delete_bus_enumerator;
    
    // [RaidDeleteDeferredQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b6e4, 0x1b430 bytes
    // storport.sys .text:0x31740, 0x2be18 bytes
    // storport.sys .text:0x3c5bc, 0x440c8 bytes
    // storport.sys .text:0x31740, 0x2be18 bytes
    //
    _z14(sdk::unknown_ptr) raid_delete_deferred_queue;
    
    // [RaidDeleteDeviceQueueEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbbd4, 0x1b430 bytes
    // storport.sys .text:0x11a48, 0x2be18 bytes
    // storport.sys .text:0x3d5f0, 0x440c8 bytes
    // storport.sys .text:0x11a48, 0x2be18 bytes
    //
    _z15(sdk::unknown_ptr) raid_delete_device_queue_entry;
    
    // [RaidDeleteDma]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5d980, 0x1b430 bytes
    // storport.sys PAGE:0x77b44, 0x2be18 bytes
    // storport.sys PAGE:0x8d450, 0x440c8 bytes
    // storport.sys PAGE:0x77b44, 0x2be18 bytes
    //
    _z16(sdk::unknown_ptr) raid_delete_dma;
    
    // [RaidDeleteResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e0bc, 0x1b430 bytes
    // storport.sys PAGE:0x78c04, 0x2be18 bytes
    // storport.sys PAGE:0x8e4c8, 0x440c8 bytes
    // storport.sys PAGE:0x78c04, 0x2be18 bytes
    //
    _z17(sdk::unknown_ptr) raid_delete_resource_list;
    
    // [RaidDeleteUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14a98, 0x1b430 bytes
    // storport.sys .text:0x137cc, 0x2be18 bytes
    // storport.sys .text:0x16194, 0x440c8 bytes
    // storport.sys .text:0x137cc, 0x2be18 bytes
    //
    _z18(sdk::unknown_ptr) raid_delete_unit;
    
    // [RaidDmaBuildScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7644, 0x1b430 bytes
    // storport.sys .text:0x4d1c, 0x2be18 bytes
    // storport.sys .text:0x3b0c, 0x440c8 bytes
    // storport.sys .text:0x4d1c, 0x2be18 bytes
    //
    _z19(sdk::unknown_ptr) raid_dma_build_scatter_gather_list;
    
    // [RaidDmaGetScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b714, 0x1b430 bytes
    // storport.sys .text:0x318c4, 0x2be18 bytes
    // storport.sys .text:0x5aac, 0x440c8 bytes
    // storport.sys .text:0x318c4, 0x2be18 bytes
    //
    _z20(sdk::unknown_ptr) raid_dma_get_scatter_gather_list;
    
    // [RaidDmaPutScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3554, 0x1b430 bytes
    // storport.sys .text:0x7cec, 0x2be18 bytes
    // storport.sys .text:0xbab0, 0x440c8 bytes
    // storport.sys .text:0x7cec, 0x2be18 bytes
    //
    _z21(sdk::unknown_ptr) raid_dma_put_scatter_gather_list;
    
    // [RaidDriverGetName]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xeb8c, 0x1b430 bytes
    // storport.sys .text:0x12ee4, 0x2be18 bytes
    // storport.sys .text:0x16034, 0x440c8 bytes
    // storport.sys .text:0x12ee4, 0x2be18 bytes
    //
    _z22(sdk::function<void(struct stor::port::raid_driver_extension_t*, nt::unicode_view*)>*) raid_driver_get_name;
    
    // [RaidEnumAtaInformation]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44000, 0x1b430 bytes
    // storport.sys .rdata:0x59310, 0x2be18 bytes
    // storport.sys .rdata:0x69490, 0x440c8 bytes
    // storport.sys .rdata:0x59310, 0x2be18 bytes
    //
    _z23(sdk::unknown_ptr) raid_enum_ata_information;
    
    // [RaidEnumDeviceIdCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44060, 0x1b430 bytes
    // storport.sys .rdata:0x59340, 0x2be18 bytes
    // storport.sys .rdata:0x69320, 0x440c8 bytes
    // storport.sys .rdata:0x59340, 0x2be18 bytes
    //
    _z24(sdk::unknown_ptr) raid_enum_device_id_callback;
    
    // [RaidEnumInquiry1667Callback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44040, 0x1b430 bytes
    // storport.sys .rdata:0x59320, 0x2be18 bytes
    // storport.sys .rdata:0x69310, 0x440c8 bytes
    // storport.sys .rdata:0x59320, 0x2be18 bytes
    //
    _z25(sdk::unknown_ptr) raid_enum_inquiry1667_callback;
    
    // [RaidEnumInquiryCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44020, 0x1b430 bytes
    // storport.sys .rdata:0x592f0, 0x2be18 bytes
    // storport.sys .rdata:0x69000, 0x440c8 bytes
    // storport.sys .rdata:0x592f0, 0x2be18 bytes
    //
    _z26(sdk::unknown_ptr) raid_enum_inquiry_callback;
    
    // [RaidEnumProbeLunZeroCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44010, 0x1b430 bytes
    // storport.sys .rdata:0x59020, 0x2be18 bytes
    // storport.sys .rdata:0x69480, 0x440c8 bytes
    // storport.sys .rdata:0x59020, 0x2be18 bytes
    //
    _z27(sdk::unknown_ptr) raid_enum_probe_lun_zero_callback;
    
    // [RaidEnumSerialNumber]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44050, 0x1b430 bytes
    // storport.sys .rdata:0x59330, 0x2be18 bytes
    // storport.sys .rdata:0x69300, 0x440c8 bytes
    // storport.sys .rdata:0x59330, 0x2be18 bytes
    //
    _z28(sdk::unknown_ptr) raid_enum_serial_number;
    
    // [RaidEnumSupportedPagesCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44030, 0x1b430 bytes
    // storport.sys .rdata:0x59300, 0x2be18 bytes
    // storport.sys .rdata:0x69010, 0x440c8 bytes
    // storport.sys .rdata:0x59300, 0x2be18 bytes
    //
    _z29(sdk::unknown_ptr) raid_enum_supported_pages_callback;
    
    // [RaidFreeDeferredItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x174ec, 0x1b430 bytes
    // storport.sys .text:0xe1f0, 0x2be18 bytes
    // storport.sys .text:0x28e4, 0x440c8 bytes
    // storport.sys .text:0xe1f0, 0x2be18 bytes
    //
    _z30(sdk::unknown_ptr) raid_free_deferred_item;
    
    // [RaidFreeMappingList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33ef4, 0x1b430 bytes
    // storport.sys .text:0x42a14, 0x2be18 bytes
    // storport.sys .text:0x4e044, 0x440c8 bytes
    // storport.sys .text:0x42a14, 0x2be18 bytes
    //
    _z31(sdk::unknown_ptr) raid_free_mapping_list;
    
    // [RaidFreeSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16628, 0x1b430 bytes
    // storport.sys .text:0x1369c, 0x2be18 bytes
    // storport.sys .text:0x19d48, 0x440c8 bytes
    // storport.sys .text:0x1369c, 0x2be18 bytes
    //
    _z32(sdk::unknown_ptr) raid_free_srb;
    
    // [RaidGetD3ColdCapability]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1794c, 0x1b430 bytes
    // storport.sys .text:0x3c8b8, 0x2be18 bytes
    // storport.sys .text:0x4886c, 0x440c8 bytes
    // storport.sys .text:0x3c8b8, 0x2be18 bytes
    //
    _z33(sdk::unknown_ptr) raid_get_d3_cold_capability;
    
    // [RaidGetD3ColdInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfa84, 0x1b430 bytes
    // storport.sys .text:0x17854, 0x2be18 bytes
    // storport.sys .text:0x1b054, 0x440c8 bytes
    // storport.sys .text:0x17854, 0x2be18 bytes
    //
    _z34(sdk::unknown_ptr) raid_get_d3_cold_interface;
    
    // [RaidGetKeyFromUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d80, 0x1b430 bytes
    // storport.sys .text:0xeac0, 0x2be18 bytes
    // storport.sys .text:0x12030, 0x440c8 bytes
    // storport.sys .text:0xeac0, 0x2be18 bytes
    //
    _z35(sdk::unknown_ptr) raid_get_key_from_unit;
    
    // [RaidGetPortData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc7d0, 0x1b430 bytes
    // storport.sys .text:0xc8c4, 0x2be18 bytes
    // storport.sys .text:0x3530, 0x440c8 bytes
    // storport.sys .text:0xc8c4, 0x2be18 bytes
    //
    _z36(sdk::unknown_ptr) raid_get_port_data;
    
    // [RaidGetQosEntryForDeviceEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2beb8, 0x1b430 bytes
    // storport.sys .text:0x3249c, 0x2be18 bytes
    // storport.sys .text:0x1e4b4, 0x440c8 bytes
    // storport.sys .text:0x3249c, 0x2be18 bytes
    //
    _z37(sdk::unknown_ptr) raid_get_qos_entry_for_device_entry;
    
    // [RaidGetResourceListElement]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdf20, 0x1b430 bytes
    // storport.sys .text:0x40158, 0x2be18 bytes
    // storport.sys .text:0x4b8cc, 0x440c8 bytes
    // storport.sys .text:0x40158, 0x2be18 bytes
    //
    _z38(sdk::unknown_ptr) raid_get_resource_list_element;
    
    // [RaidGetResourceListInterrupt]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xde68, 0x1b430 bytes
    // storport.sys .text:0x401c8, 0x2be18 bytes
    // storport.sys .text:0x4b950, 0x440c8 bytes
    // storport.sys .text:0x401c8, 0x2be18 bytes
    //
    _z39(sdk::unknown_ptr) raid_get_resource_list_interrupt;
    
    // [RaidGetSrbIoctlFromIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1774, 0x1b430 bytes
    // storport.sys .text:0x6de8, 0x2be18 bytes
    // storport.sys .text:0xdca4, 0x440c8 bytes
    // storport.sys .text:0x6de8, 0x2be18 bytes
    //
    _z40(sdk::unknown_ptr) raid_get_srb_ioctl_from_irp;
    
    // [RaidGetStartIoPerfParams]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17a90, 0x1b430 bytes
    // storport.sys .text:0x18f80, 0x2be18 bytes
    // storport.sys .text:0xc300, 0x440c8 bytes
    // storport.sys .text:0x18f80, 0x2be18 bytes
    //
    _z41(sdk::unknown_ptr) raid_get_start_io_perf_params;
    
    // [RaidGetStorPoFxComponent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xea84, 0x1b430 bytes
    // storport.sys .text:0xfe98, 0x2be18 bytes
    // storport.sys .text:0xb678, 0x440c8 bytes
    // storport.sys .text:0xfe98, 0x2be18 bytes
    //
    _z42(sdk::function<struct stor::port::stor_pofx_component_t*(struct stor::port::stor_pofx_device_t*, uint32_t)>*) raid_get_stor_po_fx_component;
    
    // [RaidGetStorPoFxFState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe938, 0x1b430 bytes
    // storport.sys .text:0x35730, 0x2be18 bytes
    // storport.sys .text:0x41644, 0x440c8 bytes
    // storport.sys .text:0x35730, 0x2be18 bytes
    //
    _z43(sdk::function<struct stor::port::stor_pofx_component_idle_state_t*(struct stor::port::stor_pofx_component_t*, uint32_t)>*) raid_get_stor_po_fx_f_state;
    
    // [RaidGetStorPoFxPerfState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cb70, 0x1b430 bytes
    // storport.sys .text:0x3576c, 0x2be18 bytes
    // storport.sys .text:0x41680, 0x440c8 bytes
    // storport.sys .text:0x3576c, 0x2be18 bytes
    //
    _z44(sdk::function<struct stor::port::stor_pofx_perf_state_t*(struct stor::port::stor_pofx_component_perf_set_t*, uint32_t)>*) raid_get_stor_po_fx_perf_state;
    
    // [RaidGetStorageAdapterPhysicalTopologyProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x29efc, 0x1b430 bytes
    // storport.sys .text:0xd020, 0x2be18 bytes
    // storport.sys .text:0x2d20, 0x440c8 bytes
    // storport.sys .text:0xd020, 0x2be18 bytes
    //
    _z45(sdk::unknown_ptr) raid_get_storage_adapter_physical_topology_property;
    
    // [RaidGetStorageAdapterProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x565c4, 0x1b430 bytes
    // storport.sys PAGE:0x706ac, 0x2be18 bytes
    // storport.sys PAGE:0x845a8, 0x440c8 bytes
    // storport.sys PAGE:0x706ac, 0x2be18 bytes
    //
    _z46(sdk::unknown_ptr) raid_get_storage_adapter_property;
    
    // [RaidGetStorageAdapterProtocolSpecificProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a044, 0x1b430 bytes
    // storport.sys .text:0x2ec28, 0x2be18 bytes
    // storport.sys .text:0x39084, 0x440c8 bytes
    // storport.sys .text:0x2ec28, 0x2be18 bytes
    //
    _z47(sdk::unknown_ptr) raid_get_storage_adapter_protocol_specific_property;
    
    // [RaidGetStorageAdapterRpmbProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a1f0, 0x1b430 bytes
    // storport.sys .text:0x2edd0, 0x2be18 bytes
    // storport.sys .text:0x392a4, 0x440c8 bytes
    // storport.sys .text:0x2edd0, 0x2be18 bytes
    //
    _z48(sdk::unknown_ptr) raid_get_storage_adapter_rpmb_property;
    
    // [RaidGetStorageAdapterSerialNumberProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x57a30, 0x1b430 bytes
    // storport.sys PAGE:0x735f4, 0x2be18 bytes
    // storport.sys PAGE:0x8467c, 0x440c8 bytes
    // storport.sys PAGE:0x735f4, 0x2be18 bytes
    //
    _z49(sdk::unknown_ptr) raid_get_storage_adapter_serial_number_property;
    
    // [RaidGetStorageAdapterTemperatureProperty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a244, 0x1b430 bytes
    // storport.sys .text:0x2ee2c, 0x2be18 bytes
    // storport.sys .text:0x39328, 0x440c8 bytes
    // storport.sys .text:0x2ee2c, 0x2be18 bytes
    //
    _z50(sdk::unknown_ptr) raid_get_storage_adapter_temperature_property;
    
    // [RaidGetSystemAddressForMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33f48, 0x1b430 bytes
    // storport.sys .text:0x42c4c, 0x2be18 bytes
    // storport.sys .text:0x4e268, 0x440c8 bytes
    // storport.sys .text:0x42c4c, 0x2be18 bytes
    //
    _z51(sdk::unknown_ptr) raid_get_system_address_for_mdl;
    
    // [RaidGetTelemetryLogPageIds]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14b74, 0x1b430 bytes
    // storport.sys .text:0x13048, 0x2be18 bytes
    // storport.sys .text:0x12280, 0x440c8 bytes
    // storport.sys .text:0x13048, 0x2be18 bytes
    //
    _z52(sdk::unknown_ptr) raid_get_telemetry_log_page_ids;
    
    // [RaidGetTotalStorPoFxDeviceSize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1833c, 0x1b430 bytes
    // storport.sys .text:0x357a8, 0x2be18 bytes
    // storport.sys .text:0x416bc, 0x440c8 bytes
    // storport.sys .text:0x357a8, 0x2be18 bytes
    //
    _z53(sdk::unknown_ptr) raid_get_total_stor_po_fx_device_size;
    
    // [RaidHandleCreateCloseIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8e9c, 0x1b430 bytes
    // storport.sys .text:0xdff4, 0x2be18 bytes
    // storport.sys .text:0x11104, 0x440c8 bytes
    // storport.sys .text:0xdff4, 0x2be18 bytes
    //
    _z54(sdk::unknown_ptr) raid_handle_create_close_irp;
    
    // [RaidHandleTraceNotifyType]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33198, 0x1b430 bytes
    // storport.sys .text:0x4104c, 0x2be18 bytes
    // storport.sys .text:0x4bf70, 0x440c8 bytes
    // storport.sys .text:0x4104c, 0x2be18 bytes
    //
    _z55(sdk::unknown_ptr) raid_handle_trace_notify_type;
    
    // [RaidHierarchicalResetWorkRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36380, 0x1b430 bytes
    // storport.sys .text:0x47580, 0x2be18 bytes
    // storport.sys .text:0x53460, 0x440c8 bytes
    // storport.sys .text:0x47580, 0x2be18 bytes
    //
    _z56(sdk::unknown_ptr) raid_hierarchical_reset_work_routine;
    
    // [RaidInitializeAdapter]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x587a8, 0x1b430 bytes
    // storport.sys PAGE:0x77154, 0x2be18 bytes
    // storport.sys PAGE:0x8ca4c, 0x440c8 bytes
    // storport.sys PAGE:0x77154, 0x2be18 bytes
    //
    _z57(sdk::unknown_ptr) raid_initialize_adapter;
    
    // [RaidInitializeDeferredQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15bbc, 0x1b430 bytes
    // storport.sys .text:0x31784, 0x2be18 bytes
    // storport.sys .text:0x3c600, 0x440c8 bytes
    // storport.sys .text:0x31784, 0x2be18 bytes
    //
    _z58(sdk::unknown_ptr) raid_initialize_deferred_queue;
    
    // [RaidInitializeDma]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x572c8, 0x1b430 bytes
    // storport.sys PAGE:0x77b88, 0x2be18 bytes
    // storport.sys PAGE:0x8d494, 0x440c8 bytes
    // storport.sys PAGE:0x77b88, 0x2be18 bytes
    //
    _z59(sdk::unknown_ptr) raid_initialize_dma;
    
    // [RaidInitializeInquirySrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x584f8, 0x1b430 bytes
    // storport.sys PAGE:0x71584, 0x2be18 bytes
    // storport.sys PAGE:0x85f2c, 0x440c8 bytes
    // storport.sys PAGE:0x71584, 0x2be18 bytes
    //
    _z60(sdk::unknown_ptr) raid_initialize_inquiry_srb;
    
    // [RaidInitializePerfOpts]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17d4c, 0x1b430 bytes
    // storport.sys .text:0x2f0b0, 0x2be18 bytes
    // storport.sys .text:0x395b0, 0x440c8 bytes
    // storport.sys .text:0x2f0b0, 0x2be18 bytes
    //
    _z61(sdk::unknown_ptr) raid_initialize_perf_opts;
    
    // [RaidInitializePerfOptsPassive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xd23c, 0x1b430 bytes
    // storport.sys .text:0x2f720, 0x2be18 bytes
    // storport.sys .text:0x39c30, 0x440c8 bytes
    // storport.sys .text:0x2f720, 0x2be18 bytes
    //
    _z62(sdk::unknown_ptr) raid_initialize_perf_opts_passive;
    
    // [RaidInitializeReportLunsSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5869c, 0x1b430 bytes
    // storport.sys PAGE:0x717d4, 0x2be18 bytes
    // storport.sys PAGE:0x86120, 0x440c8 bytes
    // storport.sys PAGE:0x717d4, 0x2be18 bytes
    //
    _z63(sdk::unknown_ptr) raid_initialize_report_luns_srb;
    
    // [RaidInitializeResourceList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59cd8, 0x1b430 bytes
    // storport.sys PAGE:0x78c58, 0x2be18 bytes
    // storport.sys PAGE:0x8e51c, 0x440c8 bytes
    // storport.sys PAGE:0x78c58, 0x2be18 bytes
    //
    _z64(sdk::unknown_ptr) raid_initialize_resource_list;
    
    // [RaidInitializeRpmb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a364, 0x1b430 bytes
    // storport.sys .text:0x30148, 0x2be18 bytes
    // storport.sys .text:0x3a67c, 0x440c8 bytes
    // storport.sys .text:0x30148, 0x2be18 bytes
    //
    _z65(sdk::unknown_ptr) raid_initialize_rpmb;
    
    // [RaidInsertDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43f0, 0x1b430 bytes
    // storport.sys .text:0xb000, 0x2be18 bytes
    // storport.sys .text:0x9a30, 0x440c8 bytes
    // storport.sys .text:0xb000, 0x2be18 bytes
    //
    _z66(sdk::unknown_ptr) raid_insert_device_queue;
    
    // [RaidIsAdapterControlSupported]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf4e8, 0x1b430 bytes
    // storport.sys .text:0x16698, 0x2be18 bytes
    // storport.sys .text:0xb4ec, 0x440c8 bytes
    // storport.sys .text:0x16698, 0x2be18 bytes
    //
    _z67(sdk::function<uint32_t(struct stor::port::raid_adapter_extension_t*, enum stor::port::scsi_adapter_control_type_t)>*) raid_is_adapter_control_supported;
    
    // [RaidIsDmaInitialized]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59b98, 0x1b430 bytes
    // storport.sys PAGE:0x77d10, 0x2be18 bytes
    // storport.sys PAGE:0x8d61c, 0x440c8 bytes
    // storport.sys PAGE:0x77d10, 0x2be18 bytes
    //
    _z68(sdk::unknown_ptr) raid_is_dma_initialized;
    
    // [RaidIsUnitControlSupported]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10688, 0x1b430 bytes
    // storport.sys .text:0x6d50, 0x2be18 bytes
    // storport.sys .text:0xb6b0, 0x440c8 bytes
    // storport.sys .text:0x6d50, 0x2be18 bytes
    //
    _z69(sdk::unknown_ptr) raid_is_unit_control_supported;
    
    // [RaidIsUnitQueueLocked]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x989c, 0x1b430 bytes
    // storport.sys .text:0xea38, 0x2be18 bytes
    // storport.sys .text:0x11fbc, 0x440c8 bytes
    // storport.sys .text:0xea38, 0x2be18 bytes
    //
    _z70(sdk::unknown_ptr) raid_is_unit_queue_locked;
    
    // [RaidIsUnresponsiveBlockedCmd]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c480, 0x1b430 bytes
    // storport.sys .text:0x33fa4, 0x2be18 bytes
    // storport.sys .text:0x3fdb4, 0x440c8 bytes
    // storport.sys .text:0x33fa4, 0x2be18 bytes
    //
    _z71(sdk::unknown_ptr) raid_is_unresponsive_blocked_cmd;
    
    // [RaidLogAllocationFailure]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33fc4, 0x1b430 bytes
    // storport.sys .text:0x42cd8, 0x2be18 bytes
    // storport.sys .text:0x4e2f4, 0x440c8 bytes
    // storport.sys .text:0x42cd8, 0x2be18 bytes
    //
    _z72(sdk::unknown_ptr) raid_log_allocation_failure;
    
    // [RaidLogGetParm4]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x5630, 0x1b430 bytes
    // storport.sys .text:0x61b0, 0x2be18 bytes
    // storport.sys .text:0x5700, 0x440c8 bytes
    // storport.sys .text:0x61b0, 0x2be18 bytes
    //
    _z73(sdk::unknown_ptr) raid_log_get_parm4;
    
    // [RaidLogListSize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e230, 0x1b430 bytes
    // storport.sys .data:0x67360, 0x2be18 bytes
    // storport.sys .data:0x79420, 0x440c8 bytes
    // storport.sys .data:0x67360, 0x2be18 bytes
    //
    _z74(sdk::unknown_ptr) raid_log_list_size;
    
    // [RaidLogMiniportCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2840, 0x1b430 bytes
    // storport.sys .text:0xd600, 0x2be18 bytes
    // storport.sys .text:0xd710, 0x440c8 bytes
    // storport.sys .text:0xd600, 0x2be18 bytes
    //
    _z75(sdk::unknown_ptr) raid_log_miniport_completion;
    
    // [RaidLogRequestComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36440, 0x1b430 bytes
    // storport.sys .text:0x4767c, 0x2be18 bytes
    // storport.sys .text:0x5355c, 0x440c8 bytes
    // storport.sys .text:0x4767c, 0x2be18 bytes
    //
    _z76(sdk::unknown_ptr) raid_log_request_complete;
    
    // [RaidLunQueueCheckWaitTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2bed8, 0x1b430 bytes
    // storport.sys .text:0x324c0, 0x2be18 bytes
    // storport.sys .text:0x3d654, 0x440c8 bytes
    // storport.sys .text:0x324c0, 0x2be18 bytes
    //
    _z77(sdk::unknown_ptr) raid_lun_queue_check_wait_timeout;
    
    // [RaidLunQueueWaitForQuiescence]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xace0, 0x1b430 bytes
    // storport.sys .text:0x11f08, 0x2be18 bytes
    // storport.sys .text:0x14b58, 0x440c8 bytes
    // storport.sys .text:0x11f08, 0x2be18 bytes
    //
    _z78(sdk::unknown_ptr) raid_lun_queue_wait_for_quiescence;
    
    // [RaidMachineRequireIoPortResource]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18e60, 0x1b430 bytes
    // storport.sys .text:0x56884, 0x2be18 bytes
    // storport.sys .text:0x64c68, 0x440c8 bytes
    // storport.sys .text:0x56884, 0x2be18 bytes
    //
    _z79(sdk::unknown_ptr) raid_machine_require_io_port_resource;
    
    // [RaidNormalizeDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3730, 0x1b430 bytes
    // storport.sys .text:0x8388, 0x2be18 bytes
    // storport.sys .text:0x85d8, 0x440c8 bytes
    // storport.sys .text:0x8388, 0x2be18 bytes
    //
    _z80(sdk::unknown_ptr) raid_normalize_device_queue;
    
    // [RaidNtStatusToSrbStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34050, 0x1b430 bytes
    // storport.sys .text:0x42d74, 0x2be18 bytes
    // storport.sys .text:0x4e3f8, 0x440c8 bytes
    // storport.sys .text:0x42d74, 0x2be18 bytes
    //
    _z81(sdk::unknown_ptr) raid_nt_status_to_srb_status;
    
    // [RaidNtStatusToStorStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18974, 0x1b430 bytes
    // storport.sys .text:0x191bc, 0x2be18 bytes
    // storport.sys .text:0x158a8, 0x440c8 bytes
    // storport.sys .text:0x191bc, 0x2be18 bytes
    //
    _z82(sdk::unknown_ptr) raid_nt_status_to_stor_status;
    
    // [RaidNullAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44d0c, 0x1b430 bytes
    // storport.sys .rdata:0x5a680, 0x2be18 bytes
    // storport.sys .rdata:0x6ac30, 0x440c8 bytes
    // storport.sys .rdata:0x5a680, 0x2be18 bytes
    //
    _z83(sdk::unknown_ptr) raid_null_address;
    
    // [RaidNullReference]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x197b0, 0x1b430 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    // storport.sys .text:0x11ff0, 0x440c8 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    //
    _z84(sdk::unknown_ptr) raid_null_reference;
    
    // [RaidPauseAdapterQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb9e8, 0x1b430 bytes
    // storport.sys .text:0x10534, 0x2be18 bytes
    // storport.sys .text:0x11758, 0x440c8 bytes
    // storport.sys .text:0x10534, 0x2be18 bytes
    //
    _z85(sdk::unknown_ptr) raid_pause_adapter_queue;
    
    // [RaidPauseTimerDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a3d0, 0x1b430 bytes
    // storport.sys .text:0x301c0, 0x2be18 bytes
    // storport.sys .text:0x3a6f0, 0x440c8 bytes
    // storport.sys .text:0x301c0, 0x2be18 bytes
    //
    _z86(sdk::unknown_ptr) raid_pause_timer_dpc_routine;
    
    // [RaidPauseUnitQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa6a0, 0x1b430 bytes
    // storport.sys .text:0xe5ac, 0x2be18 bytes
    // storport.sys .text:0x277c, 0x440c8 bytes
    // storport.sys .text:0xe5ac, 0x2be18 bytes
    //
    _z87(sdk::unknown_ptr) raid_pause_unit_queue;
    
    // [RaidPnPPassToMiniPort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16248, 0x1b430 bytes
    // storport.sys .text:0x1325c, 0x2be18 bytes
    // storport.sys .text:0x199a0, 0x440c8 bytes
    // storport.sys .text:0x1325c, 0x2be18 bytes
    //
    _z88(sdk::unknown_ptr) raid_pn_p_pass_to_mini_port;
    
    // [RaidPortNumber]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e210, 0x1b430 bytes
    // storport.sys .data:0x67380, 0x2be18 bytes
    // storport.sys .data:0x79448, 0x440c8 bytes
    // storport.sys .data:0x67380, 0x2be18 bytes
    //
    _z89(sdk::unknown_ptr) raid_port_number;
    
    // [RaidPowerSettingCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x179c0, 0x1b430 bytes
    // storport.sys .text:0x302d0, 0x2be18 bytes
    // storport.sys .text:0x3a810, 0x440c8 bytes
    // storport.sys .text:0x302d0, 0x2be18 bytes
    //
    _z90(sdk::unknown_ptr) raid_power_setting_callback;
    
    // [RaidPreInitializePerfOpts]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xda6c, 0x1b430 bytes
    // storport.sys .text:0x304f8, 0x2be18 bytes
    // storport.sys .text:0x3ab38, 0x440c8 bytes
    // storport.sys .text:0x304f8, 0x2be18 bytes
    //
    _z91(sdk::unknown_ptr) raid_pre_initialize_perf_opts;
    
    // [RaidPrepareSrbForReuse]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x58568, 0x1b430 bytes
    // storport.sys PAGE:0x71690, 0x2be18 bytes
    // storport.sys PAGE:0x85ffc, 0x440c8 bytes
    // storport.sys PAGE:0x71690, 0x2be18 bytes
    //
    _z92(sdk::unknown_ptr) raid_prepare_srb_for_reuse;
    
    // [RaidProcessDeferredItemsWorker]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17330, 0x1b430 bytes
    // storport.sys .text:0xe99c, 0x2be18 bytes
    // storport.sys .text:0x29b8, 0x440c8 bytes
    // storport.sys .text:0xe99c, 0x2be18 bytes
    //
    _z93(sdk::function<uint32_t(struct stor::port::raid_deferred_queue_t*, struct nt::device_object_t*)>*) raid_process_deferred_items_worker;
    
    // [RaidQueryCrashdumpFunctions]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xeac4, 0x1b430 bytes
    // storport.sys .text:0x12f5c, 0x2be18 bytes
    // storport.sys .text:0x12a2c, 0x440c8 bytes
    // storport.sys .text:0x12f5c, 0x2be18 bytes
    //
    _z94(sdk::unknown_ptr) raid_query_crashdump_functions;
    
    // [RaidQueryD3ColdInterface]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfb7c, 0x1b430 bytes
    // storport.sys .text:0x1792c, 0x2be18 bytes
    // storport.sys .text:0x1b130, 0x440c8 bytes
    // storport.sys .text:0x1792c, 0x2be18 bytes
    //
    _z95(sdk::unknown_ptr) raid_query_d3_cold_interface;
    
    // [RaidQueueDeferredItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17984, 0x1b430 bytes
    // storport.sys .text:0xe570, 0x2be18 bytes
    // storport.sys .text:0x2740, 0x440c8 bytes
    // storport.sys .text:0xe570, 0x2be18 bytes
    //
    _z96(sdk::unknown_ptr) raid_queue_deferred_item;
    
    // [RaidQueueWaitCheckDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a400, 0x1b430 bytes
    // storport.sys .text:0x30630, 0x2be18 bytes
    // storport.sys .text:0x1cdf0, 0x440c8 bytes
    // storport.sys .text:0x30630, 0x2be18 bytes
    //
    _z97(sdk::unknown_ptr) raid_queue_wait_check_dpc_routine;
    
    // [RaidRegGetDeviceDumpCustomGPLogPage]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12eb0, 0x1b430 bytes
    // storport.sys .text:0x16494, 0x2be18 bytes
    // storport.sys .text:0x18cd8, 0x440c8 bytes
    // storport.sys .text:0x16494, 0x2be18 bytes
    //
    _z98(sdk::unknown_ptr) raid_reg_get_device_dump_custom_gp_log_page;
    
    // [RaidRegGetDeviceDumpMaxSize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x130f4, 0x1b430 bytes
    // storport.sys .text:0x1658c, 0x2be18 bytes
    // storport.sys .text:0x18dd0, 0x440c8 bytes
    // storport.sys .text:0x1658c, 0x2be18 bytes
    //
    _z99(sdk::unknown_ptr) raid_reg_get_device_dump_max_size;
    
    // [RaidRegGetDeviceDumpSupportLevel]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13088, 0x1b430 bytes
    // storport.sys .text:0x16500, 0x2be18 bytes
    // storport.sys .text:0x18d44, 0x440c8 bytes
    // storport.sys .text:0x16500, 0x2be18 bytes
    //
    _a00(sdk::unknown_ptr) raid_reg_get_device_dump_support_level;
    
    // [RaidRegisterForRuntimePowerManagement]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe560, 0x1b430 bytes
    // storport.sys .text:0x3c8f8, 0x2be18 bytes
    // storport.sys .text:0x48bc4, 0x440c8 bytes
    // storport.sys .text:0x3c8f8, 0x2be18 bytes
    //
    _a01(sdk::unknown_ptr) raid_register_for_runtime_power_management;
    
    // [RaidRegisterPerfStates]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x308c0, 0x1b430 bytes
    // storport.sys .text:0x3cf64, 0x2be18 bytes
    // storport.sys .text:0x49200, 0x440c8 bytes
    // storport.sys .text:0x3cf64, 0x2be18 bytes
    //
    _a02(sdk::unknown_ptr) raid_register_perf_states;
    
    // [RaidReleaseAdapterRemoveLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1682c, 0x1b430 bytes
    // storport.sys .text:0x306a8, 0x2be18 bytes
    // storport.sys .text:0x201b6, 0x440c8 bytes
    // storport.sys .text:0x306a8, 0x2be18 bytes
    //
    _a03(sdk::unknown_ptr) raid_release_adapter_remove_lock;
    
    // [RaidReleaseAdapterRemoveLockAndWait]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a424, 0x1b430 bytes
    // storport.sys .text:0x306cc, 0x2be18 bytes
    // storport.sys .text:0x3ac80, 0x440c8 bytes
    // storport.sys .text:0x306cc, 0x2be18 bytes
    //
    _a04(sdk::unknown_ptr) raid_release_adapter_remove_lock_and_wait;
    
    // [RaidReleasePortData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc7bc, 0x1b430 bytes
    // storport.sys .text:0xc8a4, 0x2be18 bytes
    // storport.sys .text:0x3560, 0x440c8 bytes
    // storport.sys .text:0xc8a4, 0x2be18 bytes
    //
    _a05(sdk::unknown_ptr) raid_release_port_data;
    
    // [RaidRemapScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61000, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d008, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94008, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d008, 0x2be18 bytes
    //
    _a06(sdk::unknown_ptr) raid_remap_scatter_gather_list;
    
    // [RaidRemoveIoQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c67c, 0x1b430 bytes
    // storport.sys .text:0x16ea8, 0x2be18 bytes
    // storport.sys .text:0x1af3c, 0x440c8 bytes
    // storport.sys .text:0x16ea8, 0x2be18 bytes
    //
    _a07(sdk::unknown_ptr) raid_remove_io_queue;
    
    // [RaidRemovePortDriver]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c24c, 0x1b430 bytes
    // storport.sys .text:0x33458, 0x2be18 bytes
    // storport.sys .text:0x3ed7c, 0x440c8 bytes
    // storport.sys .text:0x33458, 0x2be18 bytes
    //
    _a08(sdk::unknown_ptr) raid_remove_port_driver;
    
    // [RaidRemoveTrailingBlanks]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x21c0, 0x1b430 bytes
    // storport.sys .text:0xc598, 0x2be18 bytes
    // storport.sys .text:0xa7f8, 0x440c8 bytes
    // storport.sys .text:0xc598, 0x2be18 bytes
    //
    _a09(sdk::unknown_ptr) raid_remove_trailing_blanks;
    
    // [RaidRestartIoQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x368c, 0x1b430 bytes
    // storport.sys .text:0x82cc, 0x2be18 bytes
    // storport.sys .text:0x8504, 0x440c8 bytes
    // storport.sys .text:0x82cc, 0x2be18 bytes
    //
    _a10(sdk::unknown_ptr) raid_restart_io_queue;
    
    // [RaidResumeAdapterQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb63c, 0x1b430 bytes
    // storport.sys .text:0x102fc, 0x2be18 bytes
    // storport.sys .text:0x1a13c, 0x440c8 bytes
    // storport.sys .text:0x102fc, 0x2be18 bytes
    //
    _a11(sdk::unknown_ptr) raid_resume_adapter_queue;
    
    // [RaidResumeAndRestartAdapterQueues]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a45c, 0x1b430 bytes
    // storport.sys .text:0x30708, 0x2be18 bytes
    // storport.sys .text:0x3acbc, 0x440c8 bytes
    // storport.sys .text:0x30708, 0x2be18 bytes
    //
    _a12(sdk::unknown_ptr) raid_resume_and_restart_adapter_queues;
    
    // [RaidResumeAndRestartUnitQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3668c, 0x1b430 bytes
    // storport.sys .text:0x478f4, 0x2be18 bytes
    // storport.sys .text:0x537c8, 0x440c8 bytes
    // storport.sys .text:0x478f4, 0x2be18 bytes
    //
    _a13(sdk::unknown_ptr) raid_resume_and_restart_unit_queue;
    
    // [RaidResumeIoQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbb78, 0x1b430 bytes
    // storport.sys .text:0xe76c, 0x2be18 bytes
    // storport.sys .text:0x11834, 0x440c8 bytes
    // storport.sys .text:0xe76c, 0x2be18 bytes
    //
    _a14(sdk::function<uint32_t(struct io::queue_t*)>*) raid_resume_io_queue;
    
    // [RaidResumeUnitQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xba4c, 0x1b430 bytes
    // storport.sys .text:0xe640, 0x2be18 bytes
    // storport.sys .text:0x111f8, 0x440c8 bytes
    // storport.sys .text:0xe640, 0x2be18 bytes
    //
    _a15(sdk::unknown_ptr) raid_resume_unit_queue;
    
    // [RaidScsiErrorToIoError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x340ac, 0x1b430 bytes
    // storport.sys .text:0x43290, 0x2be18 bytes
    // storport.sys .text:0x4eadc, 0x440c8 bytes
    // storport.sys .text:0x43290, 0x2be18 bytes
    //
    _a16(sdk::unknown_ptr) raid_scsi_error_to_io_error;
    
    // [RaidSecondaryDumpDeregister]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x423cc, 0x1b430 bytes
    // storport.sys .text:0x55ab8, 0x2be18 bytes
    // storport.sys .text:0x6408c, 0x440c8 bytes
    // storport.sys .text:0x55ab8, 0x2be18 bytes
    //
    _a17(sdk::unknown_ptr) raid_secondary_dump_deregister;
    
    // [RaidSecondaryDumpRegister]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x178f0, 0x1b430 bytes
    // storport.sys .text:0x55b00, 0x2be18 bytes
    // storport.sys .text:0x640d4, 0x440c8 bytes
    // storport.sys .text:0x55b00, 0x2be18 bytes
    //
    _a18(sdk::unknown_ptr) raid_secondary_dump_register;
    
    // [RaidSelectDeviceDumpCollectionMode]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12e00, 0x1b430 bytes
    // storport.sys .text:0x163dc, 0x2be18 bytes
    // storport.sys .text:0x18c20, 0x440c8 bytes
    // storport.sys .text:0x163dc, 0x2be18 bytes
    //
    _a19(sdk::unknown_ptr) raid_select_device_dump_collection_mode;
    
    // [RaidSetD3Cold]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfa14, 0x1b430 bytes
    // storport.sys .text:0x1780c, 0x2be18 bytes
    // storport.sys .text:0x1b00c, 0x440c8 bytes
    // storport.sys .text:0x1780c, 0x2be18 bytes
    //
    _a20(sdk::unknown_ptr) raid_set_d3_cold;
    
    // [RaidSetUnitPauseTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb9a8, 0x1b430 bytes
    // storport.sys .text:0xe218, 0x2be18 bytes
    // storport.sys .text:0x290c, 0x440c8 bytes
    // storport.sys .text:0xe218, 0x2be18 bytes
    //
    _a21(sdk::unknown_ptr) raid_set_unit_pause_timer;
    
    // [RaidSrbExGetBidirectionalData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18410, 0x1b430 bytes
    // storport.sys .text:0x403e0, 0x2be18 bytes
    // storport.sys .text:0x4bb68, 0x440c8 bytes
    // storport.sys .text:0x403e0, 0x2be18 bytes
    //
    _a22(sdk::function<struct stor::port::srbex_data_bidirectional_t*(struct stor::port::storage_request_block_t*)>*) raid_srb_ex_get_bidirectional_data;
    
    // [RaidSrbIsPowerRequired]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c6b8, 0x1b430 bytes
    // storport.sys .text:0x341a0, 0x2be18 bytes
    // storport.sys .text:0x3fed0, 0x440c8 bytes
    // storport.sys .text:0x341a0, 0x2be18 bytes
    //
    _a23(sdk::unknown_ptr) raid_srb_is_power_required;
    
    // [RaidSrbStatusToNtStatus]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3584, 0x1b430 bytes
    // storport.sys .text:0xc0d0, 0x2be18 bytes
    // storport.sys .text:0xaec8, 0x440c8 bytes
    // storport.sys .text:0xc0d0, 0x2be18 bytes
    //
    _a24(sdk::unknown_ptr) raid_srb_status_to_nt_status;
    
    // [RaidStallDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb834, 0x1b430 bytes
    // storport.sys .text:0x118cc, 0x2be18 bytes
    // storport.sys .text:0x3d824, 0x440c8 bytes
    // storport.sys .text:0x118cc, 0x2be18 bytes
    //
    _a25(sdk::unknown_ptr) raid_stall_device_queue;
    
    // [RaidStandardSecondaryCallbackRecord]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e540, 0x1b430 bytes
    // storport.sys .data:0x67780, 0x2be18 bytes
    // storport.sys .data:0x79900, 0x440c8 bytes
    // storport.sys .data:0x67780, 0x2be18 bytes
    //
    _a26(sdk::unknown_ptr) raid_standard_secondary_callback_record;
    
    // [RaidStandardSecondaryDumpCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42410, 0x1b430 bytes
    // storport.sys .text:0x55b70, 0x2be18 bytes
    // storport.sys .text:0x64140, 0x440c8 bytes
    // storport.sys .text:0x55b70, 0x2be18 bytes
    //
    _a27(sdk::unknown_ptr) raid_standard_secondary_dump_callback;
    
    // [RaidStartIoPacket]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d10, 0x1b430 bytes
    // storport.sys .text:0xa730, 0x2be18 bytes
    // storport.sys .text:0x8d80, 0x440c8 bytes
    // storport.sys .text:0xa730, 0x2be18 bytes
    //
    _a28(sdk::unknown_ptr) raid_start_io_packet;
    
    // [RaidStorPoFxComponentVersionAndSizeIsValid]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18318, 0x1b430 bytes
    // storport.sys .text:0x35870, 0x2be18 bytes
    // storport.sys .text:0x41784, 0x440c8 bytes
    // storport.sys .text:0x35870, 0x2be18 bytes
    //
    _a29(sdk::function<uint8_t(void*)>*) raid_stor_po_fx_component_version_and_size_is_valid;
    
    // [RaidStorPoFxDeviceVersionAndSizeIsValid]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x183e4, 0x1b430 bytes
    // storport.sys .text:0x358a0, 0x2be18 bytes
    // storport.sys .text:0x417b4, 0x440c8 bytes
    // storport.sys .text:0x358a0, 0x2be18 bytes
    //
    _a30(sdk::unknown_ptr) raid_stor_po_fx_device_version_and_size_is_valid;
    
    // [RaidSyncAcpiEvalMethod]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x189c0, 0x1b430 bytes
    // storport.sys .text:0x43480, 0x2be18 bytes
    // storport.sys .text:0x4eccc, 0x440c8 bytes
    // storport.sys .text:0x43480, 0x2be18 bytes
    //
    _a31(sdk::unknown_ptr) raid_sync_acpi_eval_method;
    
    // [RaidTranslateResourceListAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdd70, 0x1b430 bytes
    // storport.sys .text:0x402f0, 0x2be18 bytes
    // storport.sys .text:0x4ba78, 0x440c8 bytes
    // storport.sys .text:0x402f0, 0x2be18 bytes
    //
    _a32(sdk::unknown_ptr) raid_translate_resource_list_address;
    
    // [RaidUnitAbortHierarchicalResetWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36748, 0x1b430 bytes
    // storport.sys .text:0x479a8, 0x2be18 bytes
    // storport.sys .text:0x5387c, 0x440c8 bytes
    // storport.sys .text:0x479a8, 0x2be18 bytes
    //
    _a33(sdk::unknown_ptr) raid_unit_abort_hierarchical_reset_work_item;
    
    // [RaidUnitAbortSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x367e4, 0x1b430 bytes
    // storport.sys .text:0x47ac0, 0x2be18 bytes
    // storport.sys .text:0x53998, 0x440c8 bytes
    // storport.sys .text:0x47ac0, 0x2be18 bytes
    //
    _a34(sdk::unknown_ptr) raid_unit_abort_srb;
    
    // [RaidUnitAbortSrbCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x369d0, 0x1b430 bytes
    // storport.sys .text:0x47cd0, 0x2be18 bytes
    // storport.sys .text:0x53ba0, 0x440c8 bytes
    // storport.sys .text:0x47cd0, 0x2be18 bytes
    //
    _a35(sdk::unknown_ptr) raid_unit_abort_srb_completion;
    
    // [RaidUnitAdaptiveIdleTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30aa0, 0x1b430 bytes
    // storport.sys .text:0x6938, 0x2be18 bytes
    // storport.sys .text:0x1514, 0x440c8 bytes
    // storport.sys .text:0x6938, 0x2be18 bytes
    //
    _a36(sdk::unknown_ptr) raid_unit_adaptive_idle_timeout;
    
    // [RaidUnitAddAclToVmDevices]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e9c0, 0x1b430 bytes
    // storport.sys PAGE:0x79454, 0x2be18 bytes
    // storport.sys PAGE:0x8f4a8, 0x440c8 bytes
    // storport.sys PAGE:0x79454, 0x2be18 bytes
    //
    _a37(sdk::unknown_ptr) raid_unit_add_acl_to_vm_devices;
    
    // [RaidUnitAllocateResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13d88, 0x1b430 bytes
    // storport.sys .text:0x1689c, 0x2be18 bytes
    // storport.sys .text:0x1911c, 0x440c8 bytes
    // storport.sys .text:0x1689c, 0x2be18 bytes
    //
    _a38(sdk::unknown_ptr) raid_unit_allocate_resources;
    
    // [RaidUnitCancelPendingRequests]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36b30, 0x1b430 bytes
    // storport.sys .text:0x16e70, 0x2be18 bytes
    // storport.sys .text:0x1af04, 0x440c8 bytes
    // storport.sys .text:0x16e70, 0x2be18 bytes
    //
    _a39(sdk::unknown_ptr) raid_unit_cancel_pending_requests;
    
    // [RaidUnitCancelWaitWakeIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa17c, 0x1b430 bytes
    // storport.sys .text:0x101d0, 0x2be18 bytes
    // storport.sys .text:0x493d8, 0x440c8 bytes
    // storport.sys .text:0x101d0, 0x2be18 bytes
    //
    _a40(sdk::unknown_ptr) raid_unit_cancel_wait_wake_irp;
    
    // [RaidUnitCheckAndAcquirePoFx]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3434, 0x1b430 bytes
    // storport.sys .text:0x6d20, 0x2be18 bytes
    // storport.sys .text:0xb648, 0x440c8 bytes
    // storport.sys .text:0x6d20, 0x2be18 bytes
    //
    _a41(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*)>*) raid_unit_check_and_acquire_po_fx;
    
    // [RaidUnitClaimIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x4a20, 0x1b430 bytes
    // storport.sys .text:0x5450, 0x2be18 bytes
    // storport.sys .text:0x4750, 0x440c8 bytes
    // storport.sys .text:0x5450, 0x2be18 bytes
    //
    _a42(sdk::unknown_ptr) raid_unit_claim_irp;
    
    // [RaidUnitCompleteRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x5ba0, 0x1b430 bytes
    // storport.sys .text:0x83f0, 0x2be18 bytes
    // storport.sys .text:0x6920, 0x440c8 bytes
    // storport.sys .text:0x83f0, 0x2be18 bytes
    //
    _a43(sdk::unknown_ptr) raid_unit_complete_request;
    
    // [RaidUnitCompleteResetRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36b70, 0x1b430 bytes
    // storport.sys .text:0x47e50, 0x2be18 bytes
    // storport.sys .text:0x53d40, 0x440c8 bytes
    // storport.sys .text:0x47e50, 0x2be18 bytes
    //
    _a44(sdk::unknown_ptr) raid_unit_complete_reset_request;
    
    // [RaidUnitConvertToNormalUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf9f8, 0x1b430 bytes
    // storport.sys .text:0x177e8, 0x2be18 bytes
    // storport.sys .text:0x1afe8, 0x440c8 bytes
    // storport.sys .text:0x177e8, 0x2be18 bytes
    //
    _a45(sdk::unknown_ptr) raid_unit_convert_to_normal_unit;
    
    // [RaidUnitConvertToZombieUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36e00, 0x1b430 bytes
    // storport.sys .text:0x16fbc, 0x2be18 bytes
    // storport.sys .text:0x1ade0, 0x440c8 bytes
    // storport.sys .text:0x16fbc, 0x2be18 bytes
    //
    _a46(sdk::unknown_ptr) raid_unit_convert_to_zombie_unit;
    
    // [RaidUnitDeviceStackPowerUpCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19de0, 0x1b430 bytes
    // storport.sys .text:0xea80, 0x2be18 bytes
    // storport.sys .text:0x12000, 0x440c8 bytes
    // storport.sys .text:0xea80, 0x2be18 bytes
    //
    _a47(sdk::unknown_ptr) raid_unit_device_stack_power_up_completion;
    
    // [RaidUnitDisablePendingTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9840, 0x1b430 bytes
    // storport.sys .text:0xdc74, 0x2be18 bytes
    // storport.sys .text:0x10948, 0x440c8 bytes
    // storport.sys .text:0xdc74, 0x2be18 bytes
    //
    _a48(sdk::unknown_ptr) raid_unit_disable_pending_timer;
    
    // [RaidUnitDisableWaitCheckTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36e30, 0x1b430 bytes
    // storport.sys .text:0x480f0, 0x2be18 bytes
    // storport.sys .text:0x53fe0, 0x440c8 bytes
    // storport.sys .text:0x480f0, 0x2be18 bytes
    //
    _a49(sdk::unknown_ptr) raid_unit_disable_wait_check_timer;
    
    // [RaidUnitEndDeviceBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36e54, 0x1b430 bytes
    // storport.sys .text:0x48118, 0x2be18 bytes
    // storport.sys .text:0x54008, 0x440c8 bytes
    // storport.sys .text:0x48118, 0x2be18 bytes
    //
    _a50(sdk::unknown_ptr) raid_unit_end_device_busy;
    
    // [RaidUnitEndMaintenanceTime]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30c50, 0x1b430 bytes
    // storport.sys .text:0x3d150, 0x2be18 bytes
    // storport.sys .text:0x49450, 0x440c8 bytes
    // storport.sys .text:0x3d150, 0x2be18 bytes
    //
    _a51(sdk::unknown_ptr) raid_unit_end_maintenance_time;
    
    // [RaidUnitFreeResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x148f0, 0x1b430 bytes
    // storport.sys .text:0x13854, 0x2be18 bytes
    // storport.sys .text:0x16238, 0x440c8 bytes
    // storport.sys .text:0x13854, 0x2be18 bytes
    //
    _a52(sdk::unknown_ptr) raid_unit_free_resources;
    
    // [RaidUnitGet1667DeviceRegistryValue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10264, 0x1b430 bytes
    // storport.sys .text:0x18778, 0x2be18 bytes
    // storport.sys .text:0x1ba00, 0x440c8 bytes
    // storport.sys .text:0x18778, 0x2be18 bytes
    //
    _a53(sdk::unknown_ptr) raid_unit_get1667_device_registry_value;
    
    // [RaidUnitGetCompatibleIds]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x113c4, 0x1b430 bytes
    // storport.sys .text:0x17f04, 0x2be18 bytes
    // storport.sys .text:0x1babc, 0x440c8 bytes
    // storport.sys .text:0x17f04, 0x2be18 bytes
    //
    _a54(sdk::unknown_ptr) raid_unit_get_compatible_ids;
    
    // [RaidUnitGetDeviceId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10180, 0x1b430 bytes
    // storport.sys .text:0x17e14, 0x2be18 bytes
    // storport.sys .text:0x1c0b4, 0x440c8 bytes
    // storport.sys .text:0x17e14, 0x2be18 bytes
    //
    _a55(sdk::unknown_ptr) raid_unit_get_device_id;
    
    // [RaidUnitGetDeviceParameters]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x593c4, 0x1b430 bytes
    // storport.sys PAGE:0x72284, 0x2be18 bytes
    // storport.sys PAGE:0x86d6c, 0x440c8 bytes
    // storport.sys PAGE:0x72284, 0x2be18 bytes
    //
    _a56(sdk::unknown_ptr) raid_unit_get_device_parameters;
    
    // [RaidUnitGetHardwareIds]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13244, 0x1b430 bytes
    // storport.sys .text:0x18054, 0x2be18 bytes
    // storport.sys .text:0x1bc1c, 0x440c8 bytes
    // storport.sys .text:0x18054, 0x2be18 bytes
    //
    _a57(sdk::unknown_ptr) raid_unit_get_hardware_ids;
    
    // [RaidUnitGetInitialTimestamp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x105ec, 0x1b430 bytes
    // storport.sys .text:0x1882c, 0x2be18 bytes
    // storport.sys .text:0x1b3d4, 0x440c8 bytes
    // storport.sys .text:0x1882c, 0x2be18 bytes
    //
    _a58(sdk::unknown_ptr) raid_unit_get_initial_timestamp;
    
    // [RaidUnitGetInstanceId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10090, 0x1b430 bytes
    // storport.sys .text:0x17d38, 0x2be18 bytes
    // storport.sys .text:0x1c1b8, 0x440c8 bytes
    // storport.sys .text:0x17d38, 0x2be18 bytes
    //
    _a59(sdk::unknown_ptr) raid_unit_get_instance_id;
    
    // [RaidUnitGetMinimumPowerCyclePeriod]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x981c, 0x1b430 bytes
    // storport.sys .text:0x6a58, 0x2be18 bytes
    // storport.sys .text:0x1644, 0x440c8 bytes
    // storport.sys .text:0x6a58, 0x2be18 bytes
    //
    _a60(sdk::unknown_ptr) raid_unit_get_minimum_power_cycle_period;
    
    // [RaidUnitGetPowerCycleCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x114f0, 0x1b430 bytes
    // storport.sys .text:0x1890c, 0x2be18 bytes
    // storport.sys .text:0x1b4b4, 0x440c8 bytes
    // storport.sys .text:0x1890c, 0x2be18 bytes
    //
    _a61(sdk::unknown_ptr) raid_unit_get_power_cycle_count;
    
    // [RaidUnitHandleReportLunsDataChanged]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x36e90, 0x1b430 bytes
    // storport.sys .text:0x481a0, 0x2be18 bytes
    // storport.sys .text:0x54040, 0x440c8 bytes
    // storport.sys .text:0x481a0, 0x2be18 bytes
    //
    _a62(sdk::unknown_ptr) raid_unit_handle_report_luns_data_changed;
    
    // [RaidUnitHandleReportLunsDataChangedCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37050, 0x1b430 bytes
    // storport.sys .text:0x48380, 0x2be18 bytes
    // storport.sys .text:0x54220, 0x440c8 bytes
    // storport.sys .text:0x48380, 0x2be18 bytes
    //
    _a63(sdk::unknown_ptr) raid_unit_handle_report_luns_data_changed_completion;
    
    // [RaidUnitHierarchicalReset]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37060, 0x1b430 bytes
    // storport.sys .text:0x483a4, 0x2be18 bytes
    // storport.sys .text:0x54244, 0x440c8 bytes
    // storport.sys .text:0x483a4, 0x2be18 bytes
    //
    _a64(sdk::unknown_ptr) raid_unit_hierarchical_reset;
    
    // [RaidUnitIoCoalescingCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30d30, 0x1b430 bytes
    // storport.sys .text:0x3d2a0, 0x2be18 bytes
    // storport.sys .text:0x495a0, 0x440c8 bytes
    // storport.sys .text:0x3d2a0, 0x2be18 bytes
    //
    _a65(sdk::unknown_ptr) raid_unit_io_coalescing_callback;
    
    // [RaidUnitLogSenseTemperatureSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37294, 0x1b430 bytes
    // storport.sys .text:0x48774, 0x2be18 bytes
    // storport.sys .text:0x544e8, 0x440c8 bytes
    // storport.sys .text:0x48774, 0x2be18 bytes
    //
    _a66(sdk::unknown_ptr) raid_unit_log_sense_temperature_srb;
    
    // [RaidUnitMaintenanceTime]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30dbc, 0x1b430 bytes
    // storport.sys .text:0x3d334, 0x2be18 bytes
    // storport.sys .text:0x49634, 0x440c8 bytes
    // storport.sys .text:0x3d334, 0x2be18 bytes
    //
    _a67(sdk::unknown_ptr) raid_unit_maintenance_time;
    
    // [RaidUnitPauseTimerDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb810, 0x1b430 bytes
    // storport.sys .text:0x12610, 0x2be18 bytes
    // storport.sys .text:0x545a0, 0x440c8 bytes
    // storport.sys .text:0x12610, 0x2be18 bytes
    //
    _a68(sdk::unknown_ptr) raid_unit_pause_timer_dpc_routine;
    
    // [RaidUnitPendingDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8d60, 0x1b430 bytes
    // storport.sys .text:0xdab0, 0x2be18 bytes
    // storport.sys .text:0x105e0, 0x440c8 bytes
    // storport.sys .text:0xdab0, 0x2be18 bytes
    //
    _a69(sdk::unknown_ptr) raid_unit_pending_dpc_routine;
    
    // [RaidUnitPerfStateCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x197b0, 0x1b430 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    // storport.sys .text:0x11ff0, 0x440c8 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    //
    _a70(sdk::unknown_ptr) raid_unit_perf_state_callback;
    
    // [RaidUnitPoFxActivateComponent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31f8, 0x1b430 bytes
    // storport.sys .text:0x6854, 0x2be18 bytes
    // storport.sys .text:0xca18, 0x440c8 bytes
    // storport.sys .text:0x6854, 0x2be18 bytes
    //
    _a71(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*, uint32_t, uint32_t, struct stor::port::raid_active_ref_context_t*)>*) raid_unit_po_fx_activate_component;
    
    // [RaidUnitPoFxActivateComponentFromMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cba4, 0x1b430 bytes
    // storport.sys .text:0x358d8, 0x2be18 bytes
    // storport.sys .text:0x417e8, 0x440c8 bytes
    // storport.sys .text:0x358d8, 0x2be18 bytes
    //
    _a72(sdk::unknown_ptr) raid_unit_po_fx_activate_component_from_miniport;
    
    // [RaidUnitPoFxIdleComponent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e50, 0x1b430 bytes
    // storport.sys .text:0x6784, 0x2be18 bytes
    // storport.sys .text:0xdeac, 0x440c8 bytes
    // storport.sys .text:0x6784, 0x2be18 bytes
    //
    _a73(sdk::function<uint8_t(struct stor::port::raid_unit_extension_t*, uint32_t, uint32_t, struct stor::port::raid_active_ref_context_t*)>*) raid_unit_po_fx_idle_component;
    
    // [RaidUnitPoFxIdleComponentFromMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a51c, 0x1b430 bytes
    // storport.sys .text:0x30918, 0x2be18 bytes
    // storport.sys .text:0x3aecc, 0x440c8 bytes
    // storport.sys .text:0x30918, 0x2be18 bytes
    //
    _a74(sdk::unknown_ptr) raid_unit_po_fx_idle_component_from_miniport;
    
    // [RaidUnitPoFxSetDeviceIdleTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17510, 0x1b430 bytes
    // storport.sys .text:0x6a0c, 0x2be18 bytes
    // storport.sys .text:0x15e8, 0x440c8 bytes
    // storport.sys .text:0x6a0c, 0x2be18 bytes
    //
    _a75(sdk::unknown_ptr) raid_unit_po_fx_set_device_idle_timeout;
    
    // [RaidUnitPowerCycleCheck]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30f10, 0x1b430 bytes
    // storport.sys .text:0x3d4d0, 0x2be18 bytes
    // storport.sys .text:0x497e0, 0x440c8 bytes
    // storport.sys .text:0x3d4d0, 0x2be18 bytes
    //
    _a76(sdk::unknown_ptr) raid_unit_power_cycle_check;
    
    // [RaidUnitPowerSettingCallback]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30f20, 0x1b430 bytes
    // storport.sys .text:0x3d4f0, 0x2be18 bytes
    // storport.sys .text:0x49800, 0x440c8 bytes
    // storport.sys .text:0x3d4f0, 0x2be18 bytes
    //
    _a77(sdk::unknown_ptr) raid_unit_power_setting_callback;
    
    // [RaidUnitProcessAsyncNotification]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37700, 0x1b430 bytes
    // storport.sys .text:0x48b40, 0x2be18 bytes
    // storport.sys .text:0x545cc, 0x440c8 bytes
    // storport.sys .text:0x48b40, 0x2be18 bytes
    //
    _a78(sdk::unknown_ptr) raid_unit_process_async_notification;
    
    // [RaidUnitProcessBusyRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xb6a0, 0x1b430 bytes
    // storport.sys .text:0x11754, 0x2be18 bytes
    // storport.sys .text:0x54640, 0x440c8 bytes
    // storport.sys .text:0x11754, 0x2be18 bytes
    //
    _a79(sdk::unknown_ptr) raid_unit_process_busy_request;
    
    // [RaidUnitProcessSetDevicePowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9e28, 0x1b430 bytes
    // storport.sys .text:0xf9ec, 0x2be18 bytes
    // storport.sys .text:0x13000, 0x440c8 bytes
    // storport.sys .text:0xf9ec, 0x2be18 bytes
    //
    _a80(sdk::unknown_ptr) raid_unit_process_set_device_power_irp;
    
    // [RaidUnitProcessSetDevicePowerIrpComplete]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9f10, 0x1b430 bytes
    // storport.sys .text:0xfaf8, 0x2be18 bytes
    // storport.sys .text:0x1310c, 0x440c8 bytes
    // storport.sys .text:0xfaf8, 0x2be18 bytes
    //
    _a81(sdk::unknown_ptr) raid_unit_process_set_device_power_irp_complete;
    
    // [RaidUnitQueueHierarchicalResetWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37768, 0x1b430 bytes
    // storport.sys .text:0x48bb4, 0x2be18 bytes
    // storport.sys .text:0x54888, 0x440c8 bytes
    // storport.sys .text:0x48bb4, 0x2be18 bytes
    //
    _a82(sdk::unknown_ptr) raid_unit_queue_hierarchical_reset_work_item;
    
    // [RaidUnitQuiesceDeviceWorkRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xac70, 0x1b430 bytes
    // storport.sys .text:0x11e90, 0x2be18 bytes
    // storport.sys .text:0x14ae0, 0x440c8 bytes
    // storport.sys .text:0x11e90, 0x2be18 bytes
    //
    _a83(sdk::unknown_ptr) raid_unit_quiesce_device_work_routine;
    
    // [RaidUnitReenablePendingTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9758, 0x1b430 bytes
    // storport.sys .text:0x63f0, 0x2be18 bytes
    // storport.sys .text:0x5b20, 0x440c8 bytes
    // storport.sys .text:0x63f0, 0x2be18 bytes
    //
    _a84(sdk::unknown_ptr) raid_unit_reenable_pending_timer;
    
    // [RaidUnitRegisterInterfaces]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xff2c, 0x1b430 bytes
    // storport.sys .text:0x18600, 0x2be18 bytes
    // storport.sys .text:0x1b23c, 0x440c8 bytes
    // storport.sys .text:0x18600, 0x2be18 bytes
    //
    _a85(sdk::unknown_ptr) raid_unit_register_interfaces;
    
    // [RaidUnitReleaseIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbe68, 0x1b430 bytes
    // storport.sys .text:0x81d8, 0x2be18 bytes
    // storport.sys .text:0xa9e0, 0x440c8 bytes
    // storport.sys .text:0x81d8, 0x2be18 bytes
    //
    _a86(sdk::unknown_ptr) raid_unit_release_irp;
    
    // [RaidUnitRequestTimeout]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37884, 0x1b430 bytes
    // storport.sys .text:0x48cb0, 0x2be18 bytes
    // storport.sys .text:0x54984, 0x440c8 bytes
    // storport.sys .text:0x48cb0, 0x2be18 bytes
    //
    _a87(sdk::unknown_ptr) raid_unit_request_timeout;
    
    // [RaidUnitResetTarget]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37a94, 0x1b430 bytes
    // storport.sys .text:0x48f10, 0x2be18 bytes
    // storport.sys .text:0x54bf4, 0x440c8 bytes
    // storport.sys .text:0x48f10, 0x2be18 bytes
    //
    _a88(sdk::unknown_ptr) raid_unit_reset_target;
    
    // [RaidUnitResetUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x37d40, 0x1b430 bytes
    // storport.sys .text:0x491c8, 0x2be18 bytes
    // storport.sys .text:0x54eac, 0x440c8 bytes
    // storport.sys .text:0x491c8, 0x2be18 bytes
    //
    _a89(sdk::unknown_ptr) raid_unit_reset_unit;
    
    // [RaidUnitRestartQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf9f0, 0x1b430 bytes
    // storport.sys .text:0x177d0, 0x2be18 bytes
    // storport.sys .text:0x1afd0, 0x440c8 bytes
    // storport.sys .text:0x177d0, 0x2be18 bytes
    //
    _a90(sdk::function<void(struct stor::port::raid_unit_extension_t*)>*) raid_unit_restart_queue;
    
    // [RaidUnitRestartQueueDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38040, 0x1b430 bytes
    // storport.sys .text:0x494d0, 0x2be18 bytes
    // storport.sys .text:0x551b0, 0x440c8 bytes
    // storport.sys .text:0x494d0, 0x2be18 bytes
    //
    _a91(sdk::unknown_ptr) raid_unit_restart_queue_dpc_routine;
    
    // [RaidUnitSavePowerCycleCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14b14, 0x1b430 bytes
    // storport.sys .text:0x16618, 0x2be18 bytes
    // storport.sys .text:0x18e5c, 0x440c8 bytes
    // storport.sys .text:0x16618, 0x2be18 bytes
    //
    _a92(sdk::unknown_ptr) raid_unit_save_power_cycle_count;
    
    // [RaidUnitSavePowerCycleCountWorker]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x30fd0, 0x1b430 bytes
    // storport.sys .text:0x125c0, 0x2be18 bytes
    // storport.sys .text:0x498c0, 0x440c8 bytes
    // storport.sys .text:0x125c0, 0x2be18 bytes
    //
    _a93(sdk::unknown_ptr) raid_unit_save_power_cycle_count_worker;
    
    // [RaidUnitSendPoFxActiveToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x90d0, 0x1b430 bytes
    // storport.sys .text:0x3d5ac, 0x2be18 bytes
    // storport.sys .text:0x1e350, 0x440c8 bytes
    // storport.sys .text:0x3d5ac, 0x2be18 bytes
    //
    _a94(sdk::unknown_ptr) raid_unit_send_po_fx_active_to_miniport;
    
    // [RaidUnitSendPoFxIdleStateToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3100c, 0x1b430 bytes
    // storport.sys .text:0x3d638, 0x2be18 bytes
    // storport.sys .text:0x20542, 0x440c8 bytes
    // storport.sys .text:0x3d638, 0x2be18 bytes
    //
    _a95(sdk::unknown_ptr) raid_unit_send_po_fx_idle_state_to_miniport;
    
    // [RaidUnitSendPoFxPowerControlToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3109c, 0x1b430 bytes
    // storport.sys .text:0x3d6c4, 0x2be18 bytes
    // storport.sys .text:0x49908, 0x440c8 bytes
    // storport.sys .text:0x3d6c4, 0x2be18 bytes
    //
    _a96(sdk::unknown_ptr) raid_unit_send_po_fx_power_control_to_miniport;
    
    // [RaidUnitSendPoFxPowerRequiredToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31180, 0x1b430 bytes
    // storport.sys .text:0x3d7a0, 0x2be18 bytes
    // storport.sys .text:0x499e4, 0x440c8 bytes
    // storport.sys .text:0x3d7a0, 0x2be18 bytes
    //
    _a97(sdk::unknown_ptr) raid_unit_send_po_fx_power_required_to_miniport;
    
    // [RaidUnitSendPowerToMiniport]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31204, 0x1b430 bytes
    // storport.sys .text:0xfed0, 0x2be18 bytes
    // storport.sys .text:0x13434, 0x440c8 bytes
    // storport.sys .text:0xfed0, 0x2be18 bytes
    //
    _a98(sdk::unknown_ptr) raid_unit_send_power_to_miniport;
    
    // [RaidUnitSendSrbIoControlSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16ac0, 0x1b430 bytes
    // storport.sys .text:0x1950c, 0x2be18 bytes
    // storport.sys .text:0x1d73c, 0x440c8 bytes
    // storport.sys .text:0x1950c, 0x2be18 bytes
    //
    _a99(sdk::unknown_ptr) raid_unit_send_srb_io_control_synchronously;
    
    // [RaidUnitSendSrbProtocolCommandSynchronously]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3804c, 0x1b430 bytes
    // storport.sys .text:0x494ec, 0x2be18 bytes
    // storport.sys .text:0x551cc, 0x440c8 bytes
    // storport.sys .text:0x494ec, 0x2be18 bytes
    //
    _b00(sdk::unknown_ptr) raid_unit_send_srb_protocol_command_synchronously;
    
    // [RaidUnitSetDefaultWriteCachePolicy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x382a4, 0x1b430 bytes
    // storport.sys .text:0x49764, 0x2be18 bytes
    // storport.sys .text:0x55440, 0x440c8 bytes
    // storport.sys .text:0x49764, 0x2be18 bytes
    //
    _b01(sdk::unknown_ptr) raid_unit_set_default_write_cache_policy;
    
    // [RaidUnitSetDevicePowerCompletionRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xafb0, 0x1b430 bytes
    // storport.sys .text:0x12210, 0x2be18 bytes
    // storport.sys .text:0x14bf0, 0x440c8 bytes
    // storport.sys .text:0x12210, 0x2be18 bytes
    //
    _b02(sdk::unknown_ptr) raid_unit_set_device_power_completion_routine;
    
    // [RaidUnitSetDevicePowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9d38, 0x1b430 bytes
    // storport.sys .text:0xf30c, 0x2be18 bytes
    // storport.sys .text:0x12e48, 0x440c8 bytes
    // storport.sys .text:0xf30c, 0x2be18 bytes
    //
    _b03(sdk::unknown_ptr) raid_unit_set_device_power_irp;
    
    // [RaidUnitSetEnumerated]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf484, 0x1b430 bytes
    // storport.sys .text:0x14048, 0x2be18 bytes
    // storport.sys .text:0x16b08, 0x440c8 bytes
    // storport.sys .text:0x14048, 0x2be18 bytes
    //
    _b04(sdk::unknown_ptr) raid_unit_set_enumerated;
    
    // [RaidUnitSetPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9b38, 0x1b430 bytes
    // storport.sys .text:0xf01c, 0x2be18 bytes
    // storport.sys .text:0x12c28, 0x440c8 bytes
    // storport.sys .text:0xf01c, 0x2be18 bytes
    //
    _b05(sdk::unknown_ptr) raid_unit_set_power_irp;
    
    // [RaidUnitSetSystemPowerIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9bec, 0x1b430 bytes
    // storport.sys .text:0xf1a8, 0x2be18 bytes
    // storport.sys .text:0x12ce4, 0x440c8 bytes
    // storport.sys .text:0xf1a8, 0x2be18 bytes
    //
    _b06(sdk::unknown_ptr) raid_unit_set_system_power_irp;
    
    // [RaidUnitStartDeviceBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2c72c, 0x1b430 bytes
    // storport.sys .text:0x34220, 0x2be18 bytes
    // storport.sys .text:0x3ff50, 0x440c8 bytes
    // storport.sys .text:0x34220, 0x2be18 bytes
    //
    _b07(sdk::unknown_ptr) raid_unit_start_device_busy;
    
    // [RaidUnitSubmitRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3780, 0x1b430 bytes
    // storport.sys .text:0xa16c, 0x2be18 bytes
    // storport.sys .text:0x87a0, 0x440c8 bytes
    // storport.sys .text:0xa16c, 0x2be18 bytes
    //
    _b08(sdk::unknown_ptr) raid_unit_submit_request;
    
    // [RaidUnitSubmitResetRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x384c0, 0x1b430 bytes
    // storport.sys .text:0x49a74, 0x2be18 bytes
    // storport.sys .text:0x55798, 0x440c8 bytes
    // storport.sys .text:0x49a74, 0x2be18 bytes
    //
    _b09(sdk::unknown_ptr) raid_unit_submit_reset_request;
    
    // [RaidUnitUnRegisterInterfaces]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3875c, 0x1b430 bytes
    // storport.sys .text:0x186fc, 0x2be18 bytes
    // storport.sys .text:0x1b34c, 0x440c8 bytes
    // storport.sys .text:0x186fc, 0x2be18 bytes
    //
    _b10(sdk::unknown_ptr) raid_unit_un_register_interfaces;
    
    // [RaidUnitUnresponsiveDeviceMarkingNeeded]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38808, 0x1b430 bytes
    // storport.sys .text:0x49d34, 0x2be18 bytes
    // storport.sys .text:0x55a5c, 0x440c8 bytes
    // storport.sys .text:0x49d34, 0x2be18 bytes
    //
    _b11(sdk::unknown_ptr) raid_unit_unresponsive_device_marking_needed;
    
    // [RaidUnloggedErrors]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e700, 0x1b430 bytes
    // storport.sys .data:0x67e18, 0x2be18 bytes
    // storport.sys .data:0x79b74, 0x440c8 bytes
    // storport.sys .data:0x67e18, 0x2be18 bytes
    //
    _b12(sdk::unknown_ptr) raid_unlogged_errors;
    
    // [RaidValidatePerfSets]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31284, 0x1b430 bytes
    // storport.sys .text:0x3d82c, 0x2be18 bytes
    // storport.sys .text:0x49a70, 0x440c8 bytes
    // storport.sys .text:0x3d82c, 0x2be18 bytes
    //
    _b13(sdk::unknown_ptr) raid_validate_perf_sets;
    
    // [RaidVerifierEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e6c0, 0x1b430 bytes
    // storport.sys .data:0x67d88, 0x2be18 bytes
    // storport.sys .data:0x79afc, 0x440c8 bytes
    // storport.sys .data:0x67d88, 0x2be18 bytes
    //
    _b14(sdk::unknown_ptr) raid_verifier_enabled;
    
    // [RaidXrbDeallocateResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x345c, 0x1b430 bytes
    // storport.sys .text:0x80ac, 0x2be18 bytes
    // storport.sys .text:0xab54, 0x440c8 bytes
    // storport.sys .text:0x80ac, 0x2be18 bytes
    //
    _b15(sdk::unknown_ptr) raid_xrb_deallocate_resources;
    
    // [RaidXrbSetCompletionRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9894, 0x1b430 bytes
    // storport.sys .text:0xea0c, 0x2be18 bytes
    // storport.sys .text:0x11f7c, 0x440c8 bytes
    // storport.sys .text:0xea0c, 0x2be18 bytes
    //
    _b16(sdk::unknown_ptr) raid_xrb_set_completion_routine;
    
    // [RaidXrbSetDataBufferAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x5750, 0x1b430 bytes
    // storport.sys .text:0x62b0, 0x2be18 bytes
    // storport.sys .text:0x58b0, 0x440c8 bytes
    // storport.sys .text:0x62b0, 0x2be18 bytes
    //
    _b17(sdk::unknown_ptr) raid_xrb_set_data_buffer_address;
    
    // [RaidXrbSignalCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7540, 0x1b430 bytes
    // storport.sys .text:0xe7d0, 0x2be18 bytes
    // storport.sys .text:0x11be0, 0x440c8 bytes
    // storport.sys .text:0xe7d0, 0x2be18 bytes
    //
    _b18(sdk::unknown_ptr) raid_xrb_signal_completion;
    
    // [RaidZeroUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x141c0, 0x1b430 bytes
    // storport.sys .text:0x16d28, 0x2be18 bytes
    // storport.sys .text:0x195a0, 0x440c8 bytes
    // storport.sys .text:0x16d28, 0x2be18 bytes
    //
    _b19(sdk::unknown_ptr) raid_zero_unit;
    
    // [RaidZeroXrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x23a0, 0x1b430 bytes
    // storport.sys .text:0xb710, 0x2be18 bytes
    // storport.sys .text:0x67fc, 0x440c8 bytes
    // storport.sys .text:0xb710, 0x2be18 bytes
    //
    _b20(sdk::unknown_ptr) raid_zero_xrb;
    
    // [RaidpAdapterContinueDataBufferScatterGather]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a5a0, 0x1b430 bytes
    // storport.sys .text:0x30970, 0x2be18 bytes
    // storport.sys .text:0x3af90, 0x440c8 bytes
    // storport.sys .text:0x30970, 0x2be18 bytes
    //
    _b21(sdk::unknown_ptr) raidp_adapter_continue_data_buffer_scatter_gather;
    
    // [RaidpAdapterContinueScatterGather]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x5140, 0x1b430 bytes
    // storport.sys .text:0x4ec0, 0x2be18 bytes
    // storport.sys .text:0x4060, 0x440c8 bytes
    // storport.sys .text:0x4ec0, 0x2be18 bytes
    //
    _b22(sdk::unknown_ptr) raidp_adapter_continue_scatter_gather;
    
    // [RaidpAdapterDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x5960, 0x1b430 bytes
    // storport.sys .text:0xdcf0, 0x2be18 bytes
    // storport.sys .text:0x10e60, 0x440c8 bytes
    // storport.sys .text:0xdcf0, 0x2be18 bytes
    //
    _b23(sdk::unknown_ptr) raidp_adapter_dpc_routine;
    
    // [RaidpAdapterInterruptRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19680, 0x1b430 bytes
    // storport.sys .text:0x30a00, 0x2be18 bytes
    // storport.sys .text:0x201e0, 0x440c8 bytes
    // storport.sys .text:0x30a00, 0x2be18 bytes
    //
    _b24(sdk::unknown_ptr) raidp_adapter_interrupt_routine;
    
    // [RaidpAdapterMSIInterruptRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x76d0, 0x1b430 bytes
    // storport.sys .text:0xdf30, 0x2be18 bytes
    // storport.sys .text:0x10bf0, 0x440c8 bytes
    // storport.sys .text:0xdf30, 0x2be18 bytes
    //
    _b25(sdk::unknown_ptr) raidp_adapter_msi_interrupt_routine;
    
    // [RaidpAdapterRedirectDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18fb0, 0x1b430 bytes
    // storport.sys .text:0x18e50, 0x2be18 bytes
    // storport.sys .text:0x196f0, 0x440c8 bytes
    // storport.sys .text:0x18e50, 0x2be18 bytes
    //
    _b26(sdk::unknown_ptr) raidp_adapter_redirect_dpc_routine;
    
    // [RaidpAdapterTimerDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a630, 0x1b430 bytes
    // storport.sys .text:0xc420, 0x2be18 bytes
    // storport.sys .text:0xa840, 0x440c8 bytes
    // storport.sys .text:0xc420, 0x2be18 bytes
    //
    _b27(sdk::unknown_ptr) raidp_adapter_timer_dpc_routine;
    
    // [RaidpBuildAdapterBusRelations]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf274, 0x1b430 bytes
    // storport.sys .text:0x13dbc, 0x2be18 bytes
    // storport.sys .text:0x16878, 0x440c8 bytes
    // storport.sys .text:0x13dbc, 0x2be18 bytes
    //
    _b28(sdk::unknown_ptr) raidp_build_adapter_bus_relations;
    
    // [RaidpIsCurrentOsInstallationUpgrade]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15c7c, 0x1b430 bytes
    // storport.sys .text:0x4b050, 0x2be18 bytes
    // storport.sys .text:0x577cc, 0x440c8 bytes
    // storport.sys .text:0x4b050, 0x2be18 bytes
    //
    _b29(sdk::unknown_ptr) raidp_is_current_os_installation_upgrade;
    
    // [RaidpLinkDown]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cc18, 0x1b430 bytes
    // storport.sys .text:0x3592c, 0x2be18 bytes
    // storport.sys .text:0x41884, 0x440c8 bytes
    // storport.sys .text:0x3592c, 0x2be18 bytes
    //
    _b30(sdk::unknown_ptr) raidp_link_down;
    
    // [RaidpLinkUp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cc80, 0x1b430 bytes
    // storport.sys .text:0x35998, 0x2be18 bytes
    // storport.sys .text:0x418f0, 0x440c8 bytes
    // storport.sys .text:0x35998, 0x2be18 bytes
    //
    _b31(sdk::unknown_ptr) raidp_link_up;
    
    // [RaidpPortData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e658, 0x1b430 bytes
    // storport.sys .data:0x67d80, 0x2be18 bytes
    // storport.sys .data:0x79ae8, 0x440c8 bytes
    // storport.sys .data:0x67d80, 0x2be18 bytes
    //
    _b32(sdk::unknown_ptr) raidp_port_data;
    
    // [RaidpTelemetryRegQueryRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x171f0, 0x1b430 bytes
    // storport.sys .text:0x55bf0, 0x2be18 bytes
    // storport.sys .text:0x641c0, 0x440c8 bytes
    // storport.sys .text:0x55bf0, 0x2be18 bytes
    //
    _b33(sdk::unknown_ptr) raidp_telemetry_reg_query_routine;
    
    // [RiAllocateMiniportDeviceExtension]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59ba8, 0x1b430 bytes
    // storport.sys PAGE:0x78880, 0x2be18 bytes
    // storport.sys PAGE:0x8e170, 0x440c8 bytes
    // storport.sys PAGE:0x78880, 0x2be18 bytes
    //
    _b34(sdk::unknown_ptr) ri_allocate_miniport_device_extension;
    
    // [RiDeleteDeviceQueueEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xbc24, 0x1b430 bytes
    // storport.sys .text:0xb5f0, 0x2be18 bytes
    // storport.sys .text:0x8760, 0x440c8 bytes
    // storport.sys .text:0xb5f0, 0x2be18 bytes
    //
    _b35(sdk::unknown_ptr) ri_delete_device_queue_entry;
    
    // [RiEnqueueDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6e54, 0x1b430 bytes
    // storport.sys .text:0xb560, 0x2be18 bytes
    // storport.sys .text:0xa4cc, 0x440c8 bytes
    // storport.sys .text:0xb560, 0x2be18 bytes
    //
    _b36(sdk::unknown_ptr) ri_enqueue_device_queue;
    
    // [RiGetEnqueueReason]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6d70, 0x1b430 bytes
    // storport.sys .text:0xb340, 0x2be18 bytes
    // storport.sys .text:0xa3d4, 0x440c8 bytes
    // storport.sys .text:0xb340, 0x2be18 bytes
    //
    _b37(sdk::unknown_ptr) ri_get_enqueue_reason;
    
    // [RiNormalizeDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6cb0, 0x1b430 bytes
    // storport.sys .text:0xb44c, 0x2be18 bytes
    // storport.sys .text:0x863c, 0x440c8 bytes
    // storport.sys .text:0xb44c, 0x2be18 bytes
    //
    _b38(sdk::unknown_ptr) ri_normalize_device_queue;
    
    // [RiPeekDeviceQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6e34, 0x1b430 bytes
    // storport.sys .text:0xb538, 0x2be18 bytes
    // storport.sys .text:0x8738, 0x440c8 bytes
    // storport.sys .text:0xb538, 0x2be18 bytes
    //
    _b39(sdk::unknown_ptr) ri_peek_device_queue;
    
    // [RiSignalCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x91e0, 0x1b430 bytes
    // storport.sys .text:0xe0d0, 0x2be18 bytes
    // storport.sys .text:0x118a0, 0x440c8 bytes
    // storport.sys .text:0xe0d0, 0x2be18 bytes
    //
    _b40(sdk::unknown_ptr) ri_signal_completion;
    
    // [SecondaryDumpCallbackRegistered]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e688, 0x1b430 bytes
    // storport.sys .data:0x67e51, 0x2be18 bytes
    // storport.sys .data:0x7a0a2, 0x440c8 bytes
    // storport.sys .data:0x67e51, 0x2be18 bytes
    //
    _b41(sdk::unknown_ptr) secondary_dump_callback_registered;
    
    // [SendAtaPassthrough]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b6bc, 0x1b430 bytes
    // storport.sys .text:0x25d0, 0x2be18 bytes
    // storport.sys .text:0x1430, 0x440c8 bytes
    // storport.sys .text:0x25d0, 0x2be18 bytes
    //
    _b42(sdk::unknown_ptr) send_ata_passthrough;
    
    // [ShimGetMsftId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x42804, 0x1b430 bytes
    // storport.sys .text:0x562e0, 0x2be18 bytes
    // storport.sys .text:0x648c0, 0x440c8 bytes
    // storport.sys .text:0x562e0, 0x2be18 bytes
    //
    _b43(sdk::unknown_ptr) shim_get_msft_id;
    
    // [SrbShim]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e0d0, 0x1b430 bytes
    // storport.sys .data:0x67278, 0x2be18 bytes
    // storport.sys .data:0x79100, 0x440c8 bytes
    // storport.sys .data:0x67278, 0x2be18 bytes
    //
    _b44(sdk::unknown_ptr) srb_shim;
    
    // [SrbShimHookCollections]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e1c0, 0x1b430 bytes
    // storport.sys .data:0x671b0, 0x2be18 bytes
    // storport.sys .data:0x790d0, 0x440c8 bytes
    // storport.sys .data:0x671b0, 0x2be18 bytes
    //
    _b45(sdk::unknown_ptr) srb_shim_hook_collections;
    
    // [SrbShimHookDeviceControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18f00, 0x1b430 bytes
    // storport.sys .text:0x564e0, 0x2be18 bytes
    // storport.sys .text:0x1e2d0, 0x440c8 bytes
    // storport.sys .text:0x564e0, 0x2be18 bytes
    //
    _b46(sdk::unknown_ptr) srb_shim_hook_device_control;
    
    // [SrbShimHooks]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e180, 0x1b430 bytes
    // storport.sys .data:0x670f0, 0x2be18 bytes
    // storport.sys .data:0x79090, 0x440c8 bytes
    // storport.sys .data:0x670f0, 0x2be18 bytes
    //
    _b47(sdk::unknown_ptr) srb_shim_hooks;
    
    // [SrbShimStorageAdapterPropertyCompletionHook]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x428f0, 0x1b430 bytes
    // storport.sys .text:0x565c0, 0x2be18 bytes
    // storport.sys .text:0x209a0, 0x440c8 bytes
    // storport.sys .text:0x565c0, 0x2be18 bytes
    //
    _b48(sdk::unknown_ptr) srb_shim_storage_adapter_property_completion_hook;
    
    // [StRtlIoStorInfoGetNvCachePriority]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x932c, 0x1b430 bytes
    // storport.sys .text:0x586c8, 0x2be18 bytes
    // storport.sys .text:0x1cc1c, 0x440c8 bytes
    // storport.sys .text:0x586c8, 0x2be18 bytes
    //
    _b49(sdk::unknown_ptr) st_rtl_io_stor_info_get_nv_cache_priority;
    
    // [StorAdapterDeviceRegistryKeyProxy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ccf4, 0x1b430 bytes
    // storport.sys .text:0x35b88, 0x2be18 bytes
    // storport.sys .text:0x41970, 0x440c8 bytes
    // storport.sys .text:0x35b88, 0x2be18 bytes
    //
    _b50(sdk::unknown_ptr) stor_adapter_device_registry_key_proxy;
    
    // [StorAllocateContiguousIoResources]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16634, 0x1b430 bytes
    // storport.sys .text:0x74a8, 0x2be18 bytes
    // storport.sys .text:0xc964, 0x440c8 bytes
    // storport.sys .text:0x74a8, 0x2be18 bytes
    //
    _b51(sdk::function<void*(uint32_t, uint32_t, struct stor::port::raid_adapter_extension_t*)>*) stor_allocate_contiguous_io_resources;
    
    // [StorAllocateContiguousMemory]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5789c, 0x1b430 bytes
    // storport.sys PAGE:0x709f4, 0x2be18 bytes
    // storport.sys PAGE:0x8e65c, 0x440c8 bytes
    // storport.sys PAGE:0x709f4, 0x2be18 bytes
    //
    _b52(sdk::unknown_ptr) stor_allocate_contiguous_memory;
    
    // [StorAsyncNotificationDeferred]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ce60, 0x1b430 bytes
    // storport.sys .text:0x35d1c, 0x2be18 bytes
    // storport.sys .text:0x41b18, 0x440c8 bytes
    // storport.sys .text:0x35d1c, 0x2be18 bytes
    //
    _b53(sdk::unknown_ptr) stor_async_notification_deferred;
    
    // [StorBuildScatterGatherListProxy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cec0, 0x1b430 bytes
    // storport.sys .text:0x35d7c, 0x2be18 bytes
    // storport.sys .text:0x41b74, 0x440c8 bytes
    // storport.sys .text:0x35d7c, 0x2be18 bytes
    //
    _b54(sdk::unknown_ptr) stor_build_scatter_gather_list_proxy;
    
    // [StorBuildSynchronousScsiRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16c9c, 0x1b430 bytes
    // storport.sys .text:0x1972c, 0x2be18 bytes
    // storport.sys .text:0x1d97c, 0x440c8 bytes
    // storport.sys .text:0x1972c, 0x2be18 bytes
    //
    _b55(sdk::unknown_ptr) stor_build_synchronous_scsi_request;
    
    // [StorCompareScsiDeviceId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x138e0, 0x1b430 bytes
    // storport.sys .text:0x107e4, 0x2be18 bytes
    // storport.sys .text:0x13a8c, 0x440c8 bytes
    // storport.sys .text:0x107e4, 0x2be18 bytes
    //
    _b56(sdk::function<int32_t(struct stor::port::vpd_identification_page_t*, struct stor::port::vpd_identification_page_t*)>*) stor_compare_scsi_device_id;
    
    // [StorCompareScsiIdentity]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13744, 0x1b430 bytes
    // storport.sys .text:0x16298, 0x2be18 bytes
    // storport.sys .text:0x18720, 0x440c8 bytes
    // storport.sys .text:0x16298, 0x2be18 bytes
    //
    _b57(sdk::unknown_ptr) stor_compare_scsi_identity;
    
    // [StorCompareUlongKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d60, 0x1b430 bytes
    // storport.sys .text:0xe100, 0x2be18 bytes
    // storport.sys .text:0x11e40, 0x440c8 bytes
    // storport.sys .text:0xe100, 0x2be18 bytes
    //
    _b58(sdk::unknown_ptr) stor_compare_ulong_key;
    
    // [StorCreateAnsiString]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13ae8, 0x1b430 bytes
    // storport.sys .text:0x1203c, 0x2be18 bytes
    // storport.sys .text:0x149ac, 0x440c8 bytes
    // storport.sys .text:0x1203c, 0x2be18 bytes
    //
    _b59(sdk::unknown_ptr) stor_create_ansi_string;
    
    // [StorCreateDictionary]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x159ac, 0x1b430 bytes
    // storport.sys .text:0x569f0, 0x2be18 bytes
    // storport.sys .text:0x67760, 0x440c8 bytes
    // storport.sys .text:0x569f0, 0x2be18 bytes
    //
    _b60(sdk::unknown_ptr) stor_create_dictionary;
    
    // [StorCreateEventQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x14114, 0x1b430 bytes
    // storport.sys .text:0x16c54, 0x2be18 bytes
    // storport.sys .text:0x194d0, 0x440c8 bytes
    // storport.sys .text:0x16c54, 0x2be18 bytes
    //
    _b61(sdk::unknown_ptr) stor_create_event_queue;
    
    // [StorCreateScsiSymbolicLink]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xf908, 0x1b430 bytes
    // storport.sys .text:0x43644, 0x2be18 bytes
    // storport.sys .text:0x4f07c, 0x440c8 bytes
    // storport.sys .text:0x43644, 0x2be18 bytes
    //
    _b62(sdk::unknown_ptr) stor_create_scsi_symbolic_link;
    
    // [StorCreateSystemLogEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x341bc, 0x1b430 bytes
    // storport.sys .text:0x43758, 0x2be18 bytes
    // storport.sys .text:0x4f18c, 0x440c8 bytes
    // storport.sys .text:0x43758, 0x2be18 bytes
    //
    _b63(sdk::unknown_ptr) stor_create_system_log_entry;
    
    // [StorDelayExecution]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cf20, 0x1b430 bytes
    // storport.sys .text:0x35de0, 0x2be18 bytes
    // storport.sys .text:0xc554, 0x440c8 bytes
    // storport.sys .text:0x35de0, 0x2be18 bytes
    //
    _b64(sdk::unknown_ptr) stor_delay_execution;
    
    // [StorDeleteScsiIdentity]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x1315c, 0x1b430 bytes
    // storport.sys .text:0x16190, 0x2be18 bytes
    // storport.sys .text:0x183c8, 0x440c8 bytes
    // storport.sys .text:0x16190, 0x2be18 bytes
    //
    _b65(sdk::unknown_ptr) stor_delete_scsi_identity;
    
    // [StorDeleteScsiSymbolicLink]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x343d8, 0x1b430 bytes
    // storport.sys .text:0x43990, 0x2be18 bytes
    // storport.sys .text:0x4f3cc, 0x440c8 bytes
    // storport.sys .text:0x43990, 0x2be18 bytes
    //
    _b66(sdk::unknown_ptr) stor_delete_scsi_symbolic_link;
    
    // [StorDumpDevicePowerOn]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31330, 0x1b430 bytes
    // storport.sys .text:0x3d980, 0x2be18 bytes
    // storport.sys .text:0x49bc0, 0x440c8 bytes
    // storport.sys .text:0x3d980, 0x2be18 bytes
    //
    _b67(sdk::unknown_ptr) stor_dump_device_power_on;
    
    // [StorEtwHwTimeoutDetectedEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39780, 0x1b430 bytes
    // storport.sys .text:0x4cd3c, 0x2be18 bytes
    // storport.sys .text:0x59da8, 0x440c8 bytes
    // storport.sys .text:0x4cd3c, 0x2be18 bytes
    //
    _b68(sdk::unknown_ptr) stor_etw_hw_timeout_detected_event;
    
    // [StorEtwIORequestDispatch]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x399d8, 0x1b430 bytes
    // storport.sys .text:0x4cfe4, 0x2be18 bytes
    // storport.sys .text:0x5a078, 0x440c8 bytes
    // storport.sys .text:0x4cfe4, 0x2be18 bytes
    //
    _b69(sdk::unknown_ptr) stor_etw_io_request_dispatch;
    
    // [StorEtwIORequestServiceTimeEventData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39c04, 0x1b430 bytes
    // storport.sys .text:0x4d21c, 0x2be18 bytes
    // storport.sys .text:0x5a2b0, 0x440c8 bytes
    // storport.sys .text:0x4d21c, 0x2be18 bytes
    //
    _b70(sdk::unknown_ptr) stor_etw_io_request_service_time_event_data;
    
    // [StorEtwLoggingEnabled]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e662, 0x1b430 bytes
    // storport.sys .data:0x67da0, 0x2be18 bytes
    // storport.sys .data:0x79b19, 0x440c8 bytes
    // storport.sys .data:0x67da0, 0x2be18 bytes
    //
    _b71(sdk::unknown_ptr) stor_etw_logging_enabled;
    
    // [StorEtwLogoRequestServiceTimeEventData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39f24, 0x1b430 bytes
    // storport.sys .text:0x4d514, 0x2be18 bytes
    // storport.sys .text:0x5a5a8, 0x440c8 bytes
    // storport.sys .text:0x4d514, 0x2be18 bytes
    //
    _b72(sdk::unknown_ptr) stor_etw_logo_request_service_time_event_data;
    
    // [StorEtwMiniportBugAbortBrokenEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3a270, 0x1b430 bytes
    // storport.sys .text:0x4d82c, 0x2be18 bytes
    // storport.sys .text:0x5a8c0, 0x440c8 bytes
    // storport.sys .text:0x4d82c, 0x2be18 bytes
    //
    _b73(sdk::unknown_ptr) stor_etw_miniport_bug_abort_broken_event;
    
    // [StorEtwMiniportBugAbortTimeoutEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3a4a4, 0x1b430 bytes
    // storport.sys .text:0x4da5c, 0x2be18 bytes
    // storport.sys .text:0x5ab18, 0x440c8 bytes
    // storport.sys .text:0x4da5c, 0x2be18 bytes
    //
    _b74(sdk::unknown_ptr) stor_etw_miniport_bug_abort_timeout_event;
    
    // [StorEtwMiniportBugResetBrokenEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3a6c4, 0x1b430 bytes
    // storport.sys .text:0x4dc7c, 0x2be18 bytes
    // storport.sys .text:0x5ad60, 0x440c8 bytes
    // storport.sys .text:0x4dc7c, 0x2be18 bytes
    //
    _b75(sdk::unknown_ptr) stor_etw_miniport_bug_reset_broken_event;
    
    // [StorEtwMiniportEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3a908, 0x1b430 bytes
    // storport.sys .text:0x4def8, 0x2be18 bytes
    // storport.sys .text:0x15914, 0x440c8 bytes
    // storport.sys .text:0x4def8, 0x2be18 bytes
    //
    _b76(sdk::unknown_ptr) stor_etw_miniport_event;
    
    // [StorEtwMiniportEventProxy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2cf58, 0x1b430 bytes
    // storport.sys .text:0x35f30, 0x2be18 bytes
    // storport.sys .text:0x1575c, 0x440c8 bytes
    // storport.sys .text:0x35f30, 0x2be18 bytes
    //
    _b77(sdk::unknown_ptr) stor_etw_miniport_event_proxy;
    
    // [StorEtwProtocolCommandCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ad00, 0x1b430 bytes
    // storport.sys .text:0x4e808, 0x2be18 bytes
    // storport.sys .text:0x5b418, 0x440c8 bytes
    // storport.sys .text:0x4e808, 0x2be18 bytes
    //
    _b78(sdk::unknown_ptr) stor_etw_protocol_command_completion;
    
    // [StorExtAcquireMSISpinLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d070, 0x1b430 bytes
    // storport.sys .text:0x36300, 0x2be18 bytes
    // storport.sys .text:0x41f20, 0x440c8 bytes
    // storport.sys .text:0x36300, 0x2be18 bytes
    //
    _b79(sdk::unknown_ptr) stor_ext_acquire_msi_spin_lock;
    
    // [StorExtAllocatePool]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d0a0, 0x1b430 bytes
    // storport.sys .text:0x36340, 0x2be18 bytes
    // storport.sys .text:0x41f60, 0x440c8 bytes
    // storport.sys .text:0x36340, 0x2be18 bytes
    //
    _b80(sdk::unknown_ptr) stor_ext_allocate_pool;
    
    // [StorExtBuildScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d120, 0x1b430 bytes
    // storport.sys .text:0x363e0, 0x2be18 bytes
    // storport.sys .text:0x42010, 0x440c8 bytes
    // storport.sys .text:0x363e0, 0x2be18 bytes
    //
    _b81(sdk::unknown_ptr) stor_ext_build_scatter_gather_list;
    
    // [StorExtCompleteServiceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d1c0, 0x1b430 bytes
    // storport.sys .text:0x36480, 0x2be18 bytes
    // storport.sys .text:0x420d0, 0x440c8 bytes
    // storport.sys .text:0x36480, 0x2be18 bytes
    //
    _b82(sdk::unknown_ptr) stor_ext_complete_service_irp;
    
    // [StorExtFreePool]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d200, 0x1b430 bytes
    // storport.sys .text:0x364c0, 0x2be18 bytes
    // storport.sys .text:0x42120, 0x440c8 bytes
    // storport.sys .text:0x364c0, 0x2be18 bytes
    //
    _b83(sdk::unknown_ptr) stor_ext_free_pool;
    
    // [StorExtGetMessageInterruptInformation]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d230, 0x1b430 bytes
    // storport.sys .text:0x36500, 0x2be18 bytes
    // storport.sys .text:0x42160, 0x440c8 bytes
    // storport.sys .text:0x36500, 0x2be18 bytes
    //
    _b84(sdk::unknown_ptr) stor_ext_get_message_interrupt_information;
    
    // [StorExtGetOriginalMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d290, 0x1b430 bytes
    // storport.sys .text:0x36570, 0x2be18 bytes
    // storport.sys .text:0x20450, 0x440c8 bytes
    // storport.sys .text:0x36570, 0x2be18 bytes
    //
    _b85(sdk::unknown_ptr) stor_ext_get_original_mdl;
    
    // [StorExtGetSystemAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d2b0, 0x1b430 bytes
    // storport.sys .text:0x36590, 0x2be18 bytes
    // storport.sys .text:0x421e0, 0x440c8 bytes
    // storport.sys .text:0x36590, 0x2be18 bytes
    //
    _b86(sdk::unknown_ptr) stor_ext_get_system_address;
    
    // [StorExtPutScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d310, 0x1b430 bytes
    // storport.sys .text:0x36600, 0x2be18 bytes
    // storport.sys .text:0x42260, 0x440c8 bytes
    // storport.sys .text:0x36600, 0x2be18 bytes
    //
    _b87(sdk::unknown_ptr) stor_ext_put_scatter_gather_list;
    
    // [StorExtReleaseMSISpinLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d330, 0x1b430 bytes
    // storport.sys .text:0x36630, 0x2be18 bytes
    // storport.sys .text:0x422a0, 0x440c8 bytes
    // storport.sys .text:0x36630, 0x2be18 bytes
    //
    _b88(sdk::unknown_ptr) stor_ext_release_msi_spin_lock;
    
    // [StorFindDictionary]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ca4, 0x1b430 bytes
    // storport.sys .text:0x65bc, 0x2be18 bytes
    // storport.sys .text:0xdb94, 0x440c8 bytes
    // storport.sys .text:0x65bc, 0x2be18 bytes
    //
    _b89(sdk::unknown_ptr) stor_find_dictionary;
    
    // [StorFreeContiguousMemory]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5e0fc, 0x1b430 bytes
    // storport.sys PAGE:0x70920, 0x2be18 bytes
    // storport.sys PAGE:0x8e770, 0x440c8 bytes
    // storport.sys PAGE:0x70920, 0x2be18 bytes
    //
    _b90(sdk::unknown_ptr) stor_free_contiguous_memory;
    
    // [StorFreeSynchronousScsiRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3893c, 0x1b430 bytes
    // storport.sys .text:0x196e0, 0x2be18 bytes
    // storport.sys .text:0x1d930, 0x440c8 bytes
    // storport.sys .text:0x196e0, 0x2be18 bytes
    //
    _b91(sdk::unknown_ptr) stor_free_synchronous_scsi_request;
    
    // [StorGetIdentityProductId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10068, 0x1b430 bytes
    // storport.sys .text:0x17d08, 0x2be18 bytes
    // storport.sys .text:0x1c338, 0x440c8 bytes
    // storport.sys .text:0x17d08, 0x2be18 bytes
    //
    _b92(sdk::unknown_ptr) stor_get_identity_product_id;
    
    // [StorGetIdentityVendorId]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x10040, 0x1b430 bytes
    // storport.sys .text:0x17cd8, 0x2be18 bytes
    // storport.sys .text:0x1c2f0, 0x440c8 bytes
    // storport.sys .text:0x17cd8, 0x2be18 bytes
    //
    _b93(sdk::unknown_ptr) stor_get_identity_vendor_id;
    
    // [StorGetNextVPDIdDescriptor]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13a20, 0x1b430 bytes
    // storport.sys .text:0x10948, 0x2be18 bytes
    // storport.sys .text:0x13bec, 0x440c8 bytes
    // storport.sys .text:0x10948, 0x2be18 bytes
    //
    _b94(sdk::function<struct stor::port::vpd_identification_descriptor_t*(struct stor::port::vpd_enumerator_t*)>*) stor_get_next_vpd_id_descriptor;
    
    // [StorHashUlongKey]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2db0, 0x1b430 bytes
    // storport.sys .text:0xeaf0, 0x2be18 bytes
    // storport.sys .text:0x12060, 0x440c8 bytes
    // storport.sys .text:0xeaf0, 0x2be18 bytes
    //
    _b95(sdk::unknown_ptr) stor_hash_ulong_key;
    
    // [StorInitVPDIdEnumeration]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x13a68, 0x1b430 bytes
    // storport.sys .text:0x10998, 0x2be18 bytes
    // storport.sys .text:0x13c38, 0x440c8 bytes
    // storport.sys .text:0x10998, 0x2be18 bytes
    //
    _b96(sdk::function<uint8_t(struct stor::port::vpd_enumerator_t*, struct stor::port::vpd_identification_page_t*)>*) stor_init_vpd_id_enumeration;
    
    // [StorInsertDictionary]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x12920, 0x1b430 bytes
    // storport.sys .text:0x15e90, 0x2be18 bytes
    // storport.sys .text:0x18a0c, 0x440c8 bytes
    // storport.sys .text:0x15e90, 0x2be18 bytes
    //
    _b97(sdk::unknown_ptr) stor_insert_dictionary;
    
    // [StorIsEventQueueEmpty]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38970, 0x1b430 bytes
    // storport.sys .text:0x49e80, 0x2be18 bytes
    // storport.sys .text:0x55de0, 0x440c8 bytes
    // storport.sys .text:0x49e80, 0x2be18 bytes
    //
    _b98(sdk::unknown_ptr) stor_is_event_queue_empty;
    
    // [StorLogIoError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x34478, 0x1b430 bytes
    // storport.sys .text:0x43a58, 0x2be18 bytes
    // storport.sys .text:0x4f494, 0x440c8 bytes
    // storport.sys .text:0x43a58, 0x2be18 bytes
    //
    _b99(sdk::unknown_ptr) stor_log_io_error;
    
    // [StorPortAdapterActiveCondition]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18490, 0x1b430 bytes
    // storport.sys .text:0x3dad0, 0x2be18 bytes
    // storport.sys .text:0x6300, 0x440c8 bytes
    // storport.sys .text:0x3dad0, 0x2be18 bytes
    //
    _c00(sdk::unknown_ptr) stor_port_adapter_active_condition;
    
    // [StorPortAdapterIdleCondition]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18540, 0x1b430 bytes
    // storport.sys .text:0x3e210, 0x2be18 bytes
    // storport.sys .text:0x10ca0, 0x440c8 bytes
    // storport.sys .text:0x3e210, 0x2be18 bytes
    //
    _c01(sdk::unknown_ptr) stor_port_adapter_idle_condition;
    
    // [StorPortAdapterIdleState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31410, 0x1b430 bytes
    // storport.sys .text:0x3e2e0, 0x2be18 bytes
    // storport.sys .text:0xb300, 0x440c8 bytes
    // storport.sys .text:0x3e2e0, 0x2be18 bytes
    //
    _c02(sdk::unknown_ptr) stor_port_adapter_idle_state;
    
    // [StorPortAdapterPoFxD0Completion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31580, 0x1b430 bytes
    // storport.sys .text:0x3e480, 0x2be18 bytes
    // storport.sys .text:0x1a5f0, 0x440c8 bytes
    // storport.sys .text:0x3e480, 0x2be18 bytes
    //
    _c03(sdk::unknown_ptr) stor_port_adapter_po_fx_d0_completion;
    
    // [StorPortAdapterPoFxD3Completion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19df0, 0x1b430 bytes
    // storport.sys .text:0xea90, 0x2be18 bytes
    // storport.sys .text:0x11e60, 0x440c8 bytes
    // storport.sys .text:0xea90, 0x2be18 bytes
    //
    _c04(sdk::unknown_ptr) stor_port_adapter_po_fx_d3_completion;
    
    // [StorPortAdapterPowerControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x315e0, 0x1b430 bytes
    // storport.sys .text:0x3e5e0, 0x2be18 bytes
    // storport.sys .text:0x4a400, 0x440c8 bytes
    // storport.sys .text:0x3e5e0, 0x2be18 bytes
    //
    _c05(sdk::unknown_ptr) stor_port_adapter_power_control;
    
    // [StorPortAdapterPowerNotRequiredStep1]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18bb0, 0x1b430 bytes
    // storport.sys .text:0x3e6b0, 0x2be18 bytes
    // storport.sys .text:0xebf0, 0x440c8 bytes
    // storport.sys .text:0x3e6b0, 0x2be18 bytes
    //
    _c06(sdk::unknown_ptr) stor_port_adapter_power_not_required_step1;
    
    // [StorPortAdapterPowerNotRequiredStep2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18c00, 0x1b430 bytes
    // storport.sys .text:0x3e730, 0x2be18 bytes
    // storport.sys .text:0xec44, 0x440c8 bytes
    // storport.sys .text:0x3e730, 0x2be18 bytes
    //
    _c07(sdk::unknown_ptr) stor_port_adapter_power_not_required_step2;
    
    // [StorPortAdapterPowerRequiredStep1]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x316b0, 0x1b430 bytes
    // storport.sys .text:0x3e970, 0x2be18 bytes
    // storport.sys .text:0x1a4b0, 0x440c8 bytes
    // storport.sys .text:0x3e970, 0x2be18 bytes
    //
    _c08(sdk::unknown_ptr) stor_port_adapter_power_required_step1;
    
    // [StorPortAdapterPowerRequiredStep2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31798, 0x1b430 bytes
    // storport.sys .text:0x3ea64, 0x2be18 bytes
    // storport.sys .text:0x1a548, 0x440c8 bytes
    // storport.sys .text:0x3ea64, 0x2be18 bytes
    //
    _c09(sdk::unknown_ptr) stor_port_adapter_power_required_step2;
    
    // [StorPortAllocateRegistryBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16840, 0x1b430 bytes
    // storport.sys .text:0x36670, 0x2be18 bytes
    // storport.sys .text:0x422f0, 0x440c8 bytes
    // storport.sys .text:0x36670, 0x2be18 bytes
    //
    _c10(sdk::unknown_ptr) stor_port_allocate_registry_buffer;
    
    // [StorPortBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d360, 0x1b430 bytes
    // storport.sys .text:0x366d0, 0x2be18 bytes
    // storport.sys .text:0x42360, 0x440c8 bytes
    // storport.sys .text:0x366d0, 0x2be18 bytes
    //
    _c11(sdk::unknown_ptr) stor_port_busy;
    
    // [StorPortBusyVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61110, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d150, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94150, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d150, 0x2be18 bytes
    //
    _c12(sdk::unknown_ptr) stor_port_busy_vrfy;
    
    // [StorPortCompleteRequest]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d490, 0x1b430 bytes
    // storport.sys .text:0x367f0, 0x2be18 bytes
    // storport.sys .text:0x42490, 0x440c8 bytes
    // storport.sys .text:0x367f0, 0x2be18 bytes
    //
    _c13(sdk::unknown_ptr) stor_port_complete_request;
    
    // [StorPortCompleteRequestVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61120, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d170, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94170, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d170, 0x2be18 bytes
    //
    _c14(sdk::unknown_ptr) stor_port_complete_request_vrfy;
    
    // [StorPortConvertUlongToPhysicalAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d640, 0x1b430 bytes
    // storport.sys .text:0x36980, 0x2be18 bytes
    // storport.sys .text:0x1ee10, 0x440c8 bytes
    // storport.sys .text:0x36980, 0x2be18 bytes
    //
    _c15(sdk::unknown_ptr) stor_port_convert_ulong_to_physical_address;
    
    // [StorPortConvertUlongToPhysicalAddressVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d640, 0x1b430 bytes
    // storport.sys .text:0x36980, 0x2be18 bytes
    // storport.sys .text:0x1ee10, 0x440c8 bytes
    // storport.sys .text:0x36980, 0x2be18 bytes
    //
    _c16(sdk::unknown_ptr) stor_port_convert_ulong_to_physical_address_vrfy;
    
    // [StorPortDebugPrint]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x187c0, 0x1b430 bytes
    // storport.sys .text:0x36990, 0x2be18 bytes
    // storport.sys .text:0x20470, 0x440c8 bytes
    // storport.sys .text:0x36990, 0x2be18 bytes
    //
    _c17(sdk::unknown_ptr) stor_port_debug_print;
    
    // [StorPortDeviceBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d650, 0x1b430 bytes
    // storport.sys .text:0x36a70, 0x2be18 bytes
    // storport.sys .text:0x42630, 0x440c8 bytes
    // storport.sys .text:0x36a70, 0x2be18 bytes
    //
    _c18(sdk::unknown_ptr) stor_port_device_busy;
    
    // [StorPortDeviceBusyVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61130, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d190, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94190, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d190, 0x2be18 bytes
    //
    _c19(sdk::unknown_ptr) stor_port_device_busy_vrfy;
    
    // [StorPortDeviceReady]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d7f0, 0x1b430 bytes
    // storport.sys .text:0x36bf0, 0x2be18 bytes
    // storport.sys .text:0x427c0, 0x440c8 bytes
    // storport.sys .text:0x36bf0, 0x2be18 bytes
    //
    _c20(sdk::unknown_ptr) stor_port_device_ready;
    
    // [StorPortDeviceReadyVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61140, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d1b0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x941b0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d1b0, 0x2be18 bytes
    //
    _c21(sdk::unknown_ptr) stor_port_device_ready_vrfy;
    
    // [StorPortEventProvider]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44560, 0x1b430 bytes
    // storport.sys .rdata:0x5f358, 0x2be18 bytes
    // storport.sys .rdata:0x6f5f8, 0x440c8 bytes
    // storport.sys .rdata:0x5f358, 0x2be18 bytes
    //
    _c22(sdk::unknown_ptr) stor_port_event_provider;
    
    // [StorPortEventProvider_Context]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e050, 0x1b430 bytes
    // storport.sys .data:0x67010, 0x2be18 bytes
    // storport.sys .data:0x79010, 0x440c8 bytes
    // storport.sys .data:0x67010, 0x2be18 bytes
    //
    _c23(sdk::unknown_ptr) stor_port_event_provider_context;
    
    // [StorPortExtendedFunction]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7780, 0x1b430 bytes
    // storport.sys .text:0xd7d0, 0x2be18 bytes
    // storport.sys .text:0xbc70, 0x440c8 bytes
    // storport.sys .text:0xd7d0, 0x2be18 bytes
    //
    _c24(sdk::function<uint32_t(enum stor::port::storport_function_code_t, void*, ...)>*) stor_port_extended_function;
    
    // [StorPortFreeDeviceBase]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x197b0, 0x1b430 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    // storport.sys .text:0x11ff0, 0x440c8 bytes
    // storport.sys .text:0xea70, 0x2be18 bytes
    //
    _c25(sdk::unknown_ptr) stor_port_free_device_base;
    
    // [StorPortFreeDeviceBaseVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61150, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d1d0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x941d0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d1d0, 0x2be18 bytes
    //
    _c26(sdk::unknown_ptr) stor_port_free_device_base_vrfy;
    
    // [StorPortFreeRegistryBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16ee0, 0x1b430 bytes
    // storport.sys .text:0x36d60, 0x2be18 bytes
    // storport.sys .text:0x42940, 0x440c8 bytes
    // storport.sys .text:0x36d60, 0x2be18 bytes
    //
    _c27(sdk::unknown_ptr) stor_port_free_registry_buffer;
    
    // [StorPortGetAdditionalCrashDumpArea]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe4ac, 0x1b430 bytes
    // storport.sys .text:0x12e2c, 0x2be18 bytes
    // storport.sys .text:0x55e10, 0x440c8 bytes
    // storport.sys .text:0x12e2c, 0x2be18 bytes
    //
    _c28(sdk::unknown_ptr) stor_port_get_additional_crash_dump_area;
    
    // [StorPortGetBusData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17730, 0x1b430 bytes
    // storport.sys .text:0x36dd0, 0x2be18 bytes
    // storport.sys .text:0x42970, 0x440c8 bytes
    // storport.sys .text:0x36dd0, 0x2be18 bytes
    //
    _c29(sdk::unknown_ptr) stor_port_get_bus_data;
    
    // [StorPortGetBusDataVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61190, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d210, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94210, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d210, 0x2be18 bytes
    //
    _c30(sdk::unknown_ptr) stor_port_get_bus_data_vrfy;
    
    // [StorPortGetDeviceBase]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdc30, 0x1b430 bytes
    // storport.sys .text:0x36e10, 0x2be18 bytes
    // storport.sys .text:0x429c0, 0x440c8 bytes
    // storport.sys .text:0x36e10, 0x2be18 bytes
    //
    _c31(sdk::unknown_ptr) stor_port_get_device_base;
    
    // [StorPortGetDeviceBaseVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x611a0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d240, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94240, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d240, 0x2be18 bytes
    //
    _c32(sdk::unknown_ptr) stor_port_get_device_base_vrfy;
    
    // [StorPortGetLogicalUnit]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16a0, 0x1b430 bytes
    // storport.sys .text:0x36f30, 0x2be18 bytes
    // storport.sys .text:0x42af0, 0x440c8 bytes
    // storport.sys .text:0x36f30, 0x2be18 bytes
    //
    _c33(sdk::unknown_ptr) stor_port_get_logical_unit;
    
    // [StorPortGetLogicalUnitVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x611e0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d290, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94290, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d290, 0x2be18 bytes
    //
    _c34(sdk::unknown_ptr) stor_port_get_logical_unit_vrfy;
    
    // [StorPortGetPhysicalAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15d80, 0x1b430 bytes
    // storport.sys .text:0x19050, 0x2be18 bytes
    // storport.sys .text:0x109c0, 0x440c8 bytes
    // storport.sys .text:0x19050, 0x2be18 bytes
    //
    _c35(sdk::unknown_ptr) stor_port_get_physical_address;
    
    // [StorPortGetPhysicalAddressVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x611f0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d2b0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x942b0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d2b0, 0x2be18 bytes
    //
    _c36(sdk::unknown_ptr) stor_port_get_physical_address_vrfy;
    
    // [StorPortGetScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x7760, 0x1b430 bytes
    // storport.sys .text:0xdfc0, 0x2be18 bytes
    // storport.sys .text:0x110d0, 0x440c8 bytes
    // storport.sys .text:0xdfc0, 0x2be18 bytes
    //
    _c37(sdk::unknown_ptr) stor_port_get_scatter_gather_list;
    
    // [StorPortGetScatterGatherListVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61200, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d2d0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x942d0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d2d0, 0x2be18 bytes
    //
    _c38(sdk::unknown_ptr) stor_port_get_scatter_gather_list_vrfy;
    
    // [StorPortGetSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19dd0, 0x1b430 bytes
    // storport.sys .text:0x32af0, 0x2be18 bytes
    // storport.sys .text:0x3ded0, 0x440c8 bytes
    // storport.sys .text:0x32af0, 0x2be18 bytes
    //
    _c39(sdk::unknown_ptr) stor_port_get_srb;
    
    // [StorPortGetUncachedExtension]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xdfa0, 0x1b430 bytes
    // storport.sys .text:0x36f80, 0x2be18 bytes
    // storport.sys .text:0x42b40, 0x440c8 bytes
    // storport.sys .text:0x36f80, 0x2be18 bytes
    //
    _c40(sdk::unknown_ptr) stor_port_get_uncached_extension;
    
    // [StorPortGetUncachedExtensionVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x612a0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d380, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94380, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d380, 0x2be18 bytes
    //
    _c41(sdk::unknown_ptr) stor_port_get_uncached_extension_vrfy;
    
    // [StorPortGetVirtualAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d970, 0x1b430 bytes
    // storport.sys .text:0x37220, 0x2be18 bytes
    // storport.sys .text:0x42df0, 0x440c8 bytes
    // storport.sys .text:0x37220, 0x2be18 bytes
    //
    _c42(sdk::unknown_ptr) stor_port_get_virtual_address;
    
    // [StorPortGetVirtualAddressVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61300, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d3f0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x943f0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d3f0, 0x2be18 bytes
    //
    _c43(sdk::unknown_ptr) stor_port_get_virtual_address_vrfy;
    
    // [StorPortInitialize]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc8e0, 0x1b430 bytes
    // storport.sys .text:0x337e0, 0x2be18 bytes
    // storport.sys .text:0x3f0f0, 0x440c8 bytes
    // storport.sys .text:0x337e0, 0x2be18 bytes
    //
    _c44(sdk::unknown_ptr) stor_port_initialize;
    
    // [StorPortInitializeVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5eba0, 0x1b430 bytes
    // storport.sys PAGE:0x798c0, 0x2be18 bytes
    // storport.sys PAGE:0x8f6e0, 0x440c8 bytes
    // storport.sys PAGE:0x798c0, 0x2be18 bytes
    //
    _c45(sdk::unknown_ptr) stor_port_initialize_vrfy;
    
    // [StorPortLogError]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2d990, 0x1b430 bytes
    // storport.sys .text:0x37240, 0x2be18 bytes
    // storport.sys .text:0x42e10, 0x440c8 bytes
    // storport.sys .text:0x37240, 0x2be18 bytes
    //
    _c46(sdk::unknown_ptr) stor_port_log_error;
    
    // [StorPortLogErrorVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61310, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d410, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94410, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d410, 0x2be18 bytes
    //
    _c47(sdk::unknown_ptr) stor_port_log_error_vrfy;
    
    // [StorPortMoveMemory]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2da00, 0x1b430 bytes
    // storport.sys .text:0x372c0, 0x2be18 bytes
    // storport.sys .text:0x42ec0, 0x440c8 bytes
    // storport.sys .text:0x372c0, 0x2be18 bytes
    //
    _c48(sdk::unknown_ptr) stor_port_move_memory;
    
    // [StorPortNotification]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2470, 0x1b430 bytes
    // storport.sys .text:0xd1f0, 0x2be18 bytes
    // storport.sys .text:0xd080, 0x440c8 bytes
    // storport.sys .text:0xd1f0, 0x2be18 bytes
    //
    _c49(sdk::function<void(enum stor::port::scsi_notification_type_t, void*, ...)>*) stor_port_notification;
    
    // [StorPortNotificationVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61320, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d440, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94440, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d440, 0x2be18 bytes
    //
    _c50(sdk::unknown_ptr) stor_port_notification_vrfy;
    
    // [StorPortPause]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2da10, 0x1b430 bytes
    // storport.sys .text:0x372e0, 0x2be18 bytes
    // storport.sys .text:0x42ee0, 0x440c8 bytes
    // storport.sys .text:0x372e0, 0x2be18 bytes
    //
    _c51(sdk::unknown_ptr) stor_port_pause;
    
    // [StorPortPauseDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa530, 0x1b430 bytes
    // storport.sys .text:0xe2d0, 0x2be18 bytes
    // storport.sys .text:0x2490, 0x440c8 bytes
    // storport.sys .text:0xe2d0, 0x2be18 bytes
    //
    _c52(sdk::unknown_ptr) stor_port_pause_device;
    
    // [StorPortPauseDeviceVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x615c0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d6e0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x946e0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d6e0, 0x2be18 bytes
    //
    _c53(sdk::unknown_ptr) stor_port_pause_device_vrfy;
    
    // [StorPortPauseVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x615d0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d700, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94700, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d700, 0x2be18 bytes
    //
    _c54(sdk::unknown_ptr) stor_port_pause_vrfy;
    
    // [StorPortQuerySystemTime]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18fa0, 0x1b430 bytes
    // storport.sys .text:0x37440, 0x2be18 bytes
    // storport.sys .text:0x111e0, 0x440c8 bytes
    // storport.sys .text:0x37440, 0x2be18 bytes
    //
    _c55(sdk::unknown_ptr) stor_port_query_system_time;
    
    // [StorPortReadPortBufferUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2db60, 0x1b430 bytes
    // storport.sys .text:0x37460, 0x2be18 bytes
    // storport.sys .text:0x43040, 0x440c8 bytes
    // storport.sys .text:0x37460, 0x2be18 bytes
    //
    _c56(sdk::unknown_ptr) stor_port_read_port_buffer_uchar;
    
    // [StorPortReadPortBufferUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2db80, 0x1b430 bytes
    // storport.sys .text:0x37480, 0x2be18 bytes
    // storport.sys .text:0x43060, 0x440c8 bytes
    // storport.sys .text:0x37480, 0x2be18 bytes
    //
    _c57(sdk::unknown_ptr) stor_port_read_port_buffer_ulong;
    
    // [StorPortReadPortBufferUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dba0, 0x1b430 bytes
    // storport.sys .text:0x374a0, 0x2be18 bytes
    // storport.sys .text:0x43080, 0x440c8 bytes
    // storport.sys .text:0x374a0, 0x2be18 bytes
    //
    _c58(sdk::unknown_ptr) stor_port_read_port_buffer_ushort;
    
    // [StorPortReadPortUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dbc0, 0x1b430 bytes
    // storport.sys .text:0x374c0, 0x2be18 bytes
    // storport.sys .text:0x430a0, 0x440c8 bytes
    // storport.sys .text:0x374c0, 0x2be18 bytes
    //
    _c59(sdk::unknown_ptr) stor_port_read_port_uchar;
    
    // [StorPortReadPortUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dbd0, 0x1b430 bytes
    // storport.sys .text:0x374d0, 0x2be18 bytes
    // storport.sys .text:0x430b0, 0x440c8 bytes
    // storport.sys .text:0x374d0, 0x2be18 bytes
    //
    _c60(sdk::unknown_ptr) stor_port_read_port_ulong;
    
    // [StorPortReadPortUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dbe0, 0x1b430 bytes
    // storport.sys .text:0x374e0, 0x2be18 bytes
    // storport.sys .text:0x430c0, 0x440c8 bytes
    // storport.sys .text:0x374e0, 0x2be18 bytes
    //
    _c61(sdk::unknown_ptr) stor_port_read_port_ushort;
    
    // [StorPortReadRegisterBufferUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dbf0, 0x1b430 bytes
    // storport.sys .text:0x374f0, 0x2be18 bytes
    // storport.sys .text:0x430d0, 0x440c8 bytes
    // storport.sys .text:0x374f0, 0x2be18 bytes
    //
    _c62(sdk::unknown_ptr) stor_port_read_register_buffer_uchar;
    
    // [StorPortReadRegisterBufferUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc10, 0x1b430 bytes
    // storport.sys .text:0x37520, 0x2be18 bytes
    // storport.sys .text:0x43100, 0x440c8 bytes
    // storport.sys .text:0x37520, 0x2be18 bytes
    //
    _c63(sdk::unknown_ptr) stor_port_read_register_buffer_ulong;
    
    // [StorPortReadRegisterBufferUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc30, 0x1b430 bytes
    // storport.sys .text:0x37550, 0x2be18 bytes
    // storport.sys .text:0x43130, 0x440c8 bytes
    // storport.sys .text:0x37550, 0x2be18 bytes
    //
    _c64(sdk::unknown_ptr) stor_port_read_register_buffer_ushort;
    
    // [StorPortReadRegisterUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc50, 0x1b430 bytes
    // storport.sys .text:0x37580, 0x2be18 bytes
    // storport.sys .text:0x43160, 0x440c8 bytes
    // storport.sys .text:0x37580, 0x2be18 bytes
    //
    _c65(sdk::unknown_ptr) stor_port_read_register_uchar;
    
    // [StorPortReadRegisterUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc60, 0x1b430 bytes
    // storport.sys .text:0x37590, 0x2be18 bytes
    // storport.sys .text:0x43170, 0x440c8 bytes
    // storport.sys .text:0x37590, 0x2be18 bytes
    //
    _c66(sdk::unknown_ptr) stor_port_read_register_ulong;
    
    // [StorPortReadRegisterUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc70, 0x1b430 bytes
    // storport.sys .text:0x375a0, 0x2be18 bytes
    // storport.sys .text:0x43180, 0x440c8 bytes
    // storport.sys .text:0x375a0, 0x2be18 bytes
    //
    _c67(sdk::unknown_ptr) stor_port_read_register_ushort;
    
    // [StorPortReady]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dc80, 0x1b430 bytes
    // storport.sys .text:0x375b0, 0x2be18 bytes
    // storport.sys .text:0x43190, 0x440c8 bytes
    // storport.sys .text:0x375b0, 0x2be18 bytes
    //
    _c68(sdk::unknown_ptr) stor_port_ready;
    
    // [StorPortReadyVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x615e0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d720, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94720, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d720, 0x2be18 bytes
    //
    _c69(sdk::unknown_ptr) stor_port_ready_vrfy;
    
    // [StorPortRegistryRead]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15e70, 0x1b430 bytes
    // storport.sys .text:0x376c0, 0x2be18 bytes
    // storport.sys .text:0x432a0, 0x440c8 bytes
    // storport.sys .text:0x376c0, 0x2be18 bytes
    //
    _c70(sdk::unknown_ptr) stor_port_registry_read;
    
    // [StorPortRegistryWrite]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dda0, 0x1b430 bytes
    // storport.sys .text:0x37820, 0x2be18 bytes
    // storport.sys .text:0x43420, 0x440c8 bytes
    // storport.sys .text:0x37820, 0x2be18 bytes
    //
    _c71(sdk::unknown_ptr) stor_port_registry_write;
    
    // [StorPortResume]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ded0, 0x1b430 bytes
    // storport.sys .text:0x37960, 0x2be18 bytes
    // storport.sys .text:0x43580, 0x440c8 bytes
    // storport.sys .text:0x37960, 0x2be18 bytes
    //
    _c72(sdk::unknown_ptr) stor_port_resume;
    
    // [StorPortResumeDevice]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa740, 0x1b430 bytes
    // storport.sys .text:0xe440, 0x2be18 bytes
    // storport.sys .text:0x2600, 0x440c8 bytes
    // storport.sys .text:0xe440, 0x2be18 bytes
    //
    _c73(sdk::unknown_ptr) stor_port_resume_device;
    
    // [StorPortResumeDeviceVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x615f0, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d740, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94740, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d740, 0x2be18 bytes
    //
    _c74(sdk::unknown_ptr) stor_port_resume_device_vrfy;
    
    // [StorPortResumeVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61600, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d760, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94760, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d760, 0x2be18 bytes
    //
    _c75(sdk::unknown_ptr) stor_port_resume_vrfy;
    
    // [StorPortSetBusDataByOffset]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2dfe0, 0x1b430 bytes
    // storport.sys .text:0x37a70, 0x2be18 bytes
    // storport.sys .text:0x43690, 0x440c8 bytes
    // storport.sys .text:0x37a70, 0x2be18 bytes
    //
    _c76(sdk::unknown_ptr) stor_port_set_bus_data_by_offset;
    
    // [StorPortSetBusDataByOffsetVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61610, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d780, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94780, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d780, 0x2be18 bytes
    //
    _c77(sdk::unknown_ptr) stor_port_set_bus_data_by_offset_vrfy;
    
    // [StorPortSetDeviceQueueDepth]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2a10, 0x1b430 bytes
    // storport.sys .text:0x4ba0, 0x2be18 bytes
    // storport.sys .text:0x11da0, 0x440c8 bytes
    // storport.sys .text:0x4ba0, 0x2be18 bytes
    //
    _c78(sdk::unknown_ptr) stor_port_set_device_queue_depth;
    
    // [StorPortStallExecution]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x165b0, 0x1b430 bytes
    // storport.sys .text:0xeb00, 0x2be18 bytes
    // storport.sys .text:0x14f00, 0x440c8 bytes
    // storport.sys .text:0xeb00, 0x2be18 bytes
    //
    _c79(sdk::unknown_ptr) stor_port_stall_execution;
    
    // [StorPortStallExecutionVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61620, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d7c0, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x947c0, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d7c0, 0x2be18 bytes
    //
    _c80(sdk::unknown_ptr) stor_port_stall_execution_vrfy;
    
    // [StorPortSynchronizeAccess]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e020, 0x1b430 bytes
    // storport.sys .text:0x37ab0, 0x2be18 bytes
    // storport.sys .text:0x436f0, 0x440c8 bytes
    // storport.sys .text:0x37ab0, 0x2be18 bytes
    //
    _c81(sdk::unknown_ptr) stor_port_synchronize_access;
    
    // [StorPortSynchronizeAccessVrfy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGEVRFY:0x61660, 0x1b430 bytes
    // storport.sys PAGEVRFY:0x7d800, 0x2be18 bytes
    // storport.sys PAGEVRFY:0x94800, 0x440c8 bytes
    // storport.sys PAGEVRFY:0x7d800, 0x2be18 bytes
    //
    _c82(sdk::unknown_ptr) stor_port_synchronize_access_vrfy;
    
    // [StorPortUnitActiveConditionStep1]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32e0, 0x1b430 bytes
    // storport.sys .text:0x6a90, 0x2be18 bytes
    // storport.sys .text:0xb050, 0x440c8 bytes
    // storport.sys .text:0x6a90, 0x2be18 bytes
    //
    _c83(sdk::unknown_ptr) stor_port_unit_active_condition_step1;
    
    // [StorPortUnitActiveConditionStep2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3358, 0x1b430 bytes
    // storport.sys .text:0x6b14, 0x2be18 bytes
    // storport.sys .text:0xb0dc, 0x440c8 bytes
    // storport.sys .text:0x6b14, 0x2be18 bytes
    //
    _c84(sdk::unknown_ptr) stor_port_unit_active_condition_step2;
    
    // [StorPortUnitFlushActivePendingRequestQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x33dc, 0x1b430 bytes
    // storport.sys .text:0x6bb8, 0x2be18 bytes
    // storport.sys .text:0xb180, 0x440c8 bytes
    // storport.sys .text:0x6bb8, 0x2be18 bytes
    //
    _c85(sdk::unknown_ptr) stor_port_unit_flush_active_pending_request_queue;
    
    // [StorPortUnitIdleCondition]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8f50, 0x1b430 bytes
    // storport.sys .text:0x6c20, 0x2be18 bytes
    // storport.sys .text:0xb1f0, 0x440c8 bytes
    // storport.sys .text:0x6c20, 0x2be18 bytes
    //
    _c86(sdk::unknown_ptr) stor_port_unit_idle_condition;
    
    // [StorPortUnitIdleState]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31870, 0x1b430 bytes
    // storport.sys .text:0x3f350, 0x2be18 bytes
    // storport.sys .text:0x205d0, 0x440c8 bytes
    // storport.sys .text:0x3f350, 0x2be18 bytes
    //
    _c87(sdk::unknown_ptr) stor_port_unit_idle_state;
    
    // [StorPortUnitPoFxD0Completion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xa0e4, 0x1b430 bytes
    // storport.sys .text:0x100ec, 0x2be18 bytes
    // storport.sys .text:0x4acdc, 0x440c8 bytes
    // storport.sys .text:0x100ec, 0x2be18 bytes
    //
    _c88(sdk::unknown_ptr) stor_port_unit_po_fx_d0_completion;
    
    // [StorPortUnitPoFxD3Completion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31ba0, 0x1b430 bytes
    // storport.sys .text:0x3f6d0, 0x2be18 bytes
    // storport.sys .text:0x4ae30, 0x440c8 bytes
    // storport.sys .text:0x3f6d0, 0x2be18 bytes
    //
    _c89(sdk::unknown_ptr) stor_port_unit_po_fx_d3_completion;
    
    // [StorPortUnitPoFxWaitWakeCompletion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31c40, 0x1b430 bytes
    // storport.sys .text:0x3f7b0, 0x2be18 bytes
    // storport.sys .text:0x4af20, 0x440c8 bytes
    // storport.sys .text:0x3f7b0, 0x2be18 bytes
    //
    _c90(sdk::unknown_ptr) stor_port_unit_po_fx_wait_wake_completion;
    
    // [StorPortUnitPowerControl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31cf0, 0x1b430 bytes
    // storport.sys .text:0x3f890, 0x2be18 bytes
    // storport.sys .text:0x4b000, 0x440c8 bytes
    // storport.sys .text:0x3f890, 0x2be18 bytes
    //
    _c91(sdk::unknown_ptr) stor_port_unit_power_control;
    
    // [StorPortUnitPowerNotRequiredStep1]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31d00, 0x1b430 bytes
    // storport.sys .text:0x3f8d0, 0x2be18 bytes
    // storport.sys .text:0x4b040, 0x440c8 bytes
    // storport.sys .text:0x3f8d0, 0x2be18 bytes
    //
    _c92(sdk::unknown_ptr) stor_port_unit_power_not_required_step1;
    
    // [StorPortUnitPowerNotRequiredStep2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x31ddc, 0x1b430 bytes
    // storport.sys .text:0x3f9b8, 0x2be18 bytes
    // storport.sys .text:0x4b128, 0x440c8 bytes
    // storport.sys .text:0x3f9b8, 0x2be18 bytes
    //
    _c93(sdk::unknown_ptr) stor_port_unit_power_not_required_step2;
    
    // [StorPortUnitPowerNotRequiredStep2Passive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32010, 0x1b430 bytes
    // storport.sys .text:0x3fc40, 0x2be18 bytes
    // storport.sys .text:0x4b3c0, 0x440c8 bytes
    // storport.sys .text:0x3fc40, 0x2be18 bytes
    //
    _c94(sdk::unknown_ptr) stor_port_unit_power_not_required_step2_passive;
    
    // [StorPortUnitPowerRequiredStep1]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32020, 0x1b430 bytes
    // storport.sys .text:0x3fc60, 0x2be18 bytes
    // storport.sys .text:0x4b3e0, 0x440c8 bytes
    // storport.sys .text:0x3fc60, 0x2be18 bytes
    //
    _c95(sdk::unknown_ptr) stor_port_unit_power_required_step1;
    
    // [StorPortUnitPowerRequiredStep2]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32180, 0x1b430 bytes
    // storport.sys .text:0x3fdd4, 0x2be18 bytes
    // storport.sys .text:0x4b554, 0x440c8 bytes
    // storport.sys .text:0x3fdd4, 0x2be18 bytes
    //
    _c96(sdk::unknown_ptr) stor_port_unit_power_required_step2;
    
    // [StorPortValidateRange]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e0b0, 0x1b430 bytes
    // storport.sys .text:0x37b50, 0x2be18 bytes
    // storport.sys .text:0x43780, 0x440c8 bytes
    // storport.sys .text:0x37b50, 0x2be18 bytes
    //
    _c97(sdk::unknown_ptr) stor_port_validate_range;
    
    // [StorPortVerifierFunctionTable]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x443a0, 0x1b430 bytes
    // storport.sys .rdata:0x59480, 0x2be18 bytes
    // storport.sys .rdata:0x694a0, 0x440c8 bytes
    // storport.sys .rdata:0x59480, 0x2be18 bytes
    //
    _c98(sdk::unknown_ptr) stor_port_verifier_function_table;
    
    // [StorPortVerifierInitialized]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e708, 0x1b430 bytes
    // storport.sys .data:0x67e34, 0x2be18 bytes
    // storport.sys .data:0x7a07c, 0x440c8 bytes
    // storport.sys .data:0x67e34, 0x2be18 bytes
    //
    _c99(sdk::unknown_ptr) stor_port_verifier_initialized;
    
    // [StorPortWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e0c0, 0x1b430 bytes
    // storport.sys .text:0x37b60, 0x2be18 bytes
    // storport.sys .text:0x43790, 0x440c8 bytes
    // storport.sys .text:0x37b60, 0x2be18 bytes
    //
    _d00(sdk::unknown_ptr) stor_port_work_item_routine;
    
    // [StorPortWritePortBufferUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e140, 0x1b430 bytes
    // storport.sys .text:0x37bf0, 0x2be18 bytes
    // storport.sys .text:0x43820, 0x440c8 bytes
    // storport.sys .text:0x37bf0, 0x2be18 bytes
    //
    _d01(sdk::unknown_ptr) stor_port_write_port_buffer_uchar;
    
    // [StorPortWritePortBufferUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e160, 0x1b430 bytes
    // storport.sys .text:0x37c10, 0x2be18 bytes
    // storport.sys .text:0x43840, 0x440c8 bytes
    // storport.sys .text:0x37c10, 0x2be18 bytes
    //
    _d02(sdk::unknown_ptr) stor_port_write_port_buffer_ulong;
    
    // [StorPortWritePortBufferUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e180, 0x1b430 bytes
    // storport.sys .text:0x37c30, 0x2be18 bytes
    // storport.sys .text:0x43860, 0x440c8 bytes
    // storport.sys .text:0x37c30, 0x2be18 bytes
    //
    _d03(sdk::unknown_ptr) stor_port_write_port_buffer_ushort;
    
    // [StorPortWritePortUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e1a0, 0x1b430 bytes
    // storport.sys .text:0x37c50, 0x2be18 bytes
    // storport.sys .text:0x43880, 0x440c8 bytes
    // storport.sys .text:0x37c50, 0x2be18 bytes
    //
    _d04(sdk::unknown_ptr) stor_port_write_port_uchar;
    
    // [StorPortWritePortUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e1b0, 0x1b430 bytes
    // storport.sys .text:0x37c60, 0x2be18 bytes
    // storport.sys .text:0x43890, 0x440c8 bytes
    // storport.sys .text:0x37c60, 0x2be18 bytes
    //
    _d05(sdk::unknown_ptr) stor_port_write_port_ulong;
    
    // [StorPortWritePortUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e1c0, 0x1b430 bytes
    // storport.sys .text:0x37c70, 0x2be18 bytes
    // storport.sys .text:0x438a0, 0x440c8 bytes
    // storport.sys .text:0x37c70, 0x2be18 bytes
    //
    _d06(sdk::unknown_ptr) stor_port_write_port_ushort;
    
    // [StorPortWriteRegisterBufferUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e1d0, 0x1b430 bytes
    // storport.sys .text:0x37c80, 0x2be18 bytes
    // storport.sys .text:0x438b0, 0x440c8 bytes
    // storport.sys .text:0x37c80, 0x2be18 bytes
    //
    _d07(sdk::unknown_ptr) stor_port_write_register_buffer_uchar;
    
    // [StorPortWriteRegisterBufferUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e200, 0x1b430 bytes
    // storport.sys .text:0x37cb0, 0x2be18 bytes
    // storport.sys .text:0x438e0, 0x440c8 bytes
    // storport.sys .text:0x37cb0, 0x2be18 bytes
    //
    _d08(sdk::unknown_ptr) stor_port_write_register_buffer_ulong;
    
    // [StorPortWriteRegisterBufferUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e230, 0x1b430 bytes
    // storport.sys .text:0x37ce0, 0x2be18 bytes
    // storport.sys .text:0x43910, 0x440c8 bytes
    // storport.sys .text:0x37ce0, 0x2be18 bytes
    //
    _d09(sdk::unknown_ptr) stor_port_write_register_buffer_ushort;
    
    // [StorPortWriteRegisterUchar]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e260, 0x1b430 bytes
    // storport.sys .text:0x37d10, 0x2be18 bytes
    // storport.sys .text:0x43940, 0x440c8 bytes
    // storport.sys .text:0x37d10, 0x2be18 bytes
    //
    _d10(sdk::unknown_ptr) stor_port_write_register_uchar;
    
    // [StorPortWriteRegisterUlong]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e270, 0x1b430 bytes
    // storport.sys .text:0x37d20, 0x2be18 bytes
    // storport.sys .text:0x43950, 0x440c8 bytes
    // storport.sys .text:0x37d20, 0x2be18 bytes
    //
    _d11(sdk::unknown_ptr) stor_port_write_register_ulong;
    
    // [StorPortWriteRegisterUshort]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e280, 0x1b430 bytes
    // storport.sys .text:0x37d30, 0x2be18 bytes
    // storport.sys .text:0x43960, 0x440c8 bytes
    // storport.sys .text:0x37d30, 0x2be18 bytes
    //
    _d12(sdk::unknown_ptr) stor_port_write_register_ushort;
    
    // [StorPortpInvokeAcpiMethod]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x188f0, 0x1b430 bytes
    // storport.sys .text:0x37d44, 0x2be18 bytes
    // storport.sys .text:0x43974, 0x440c8 bytes
    // storport.sys .text:0x37d44, 0x2be18 bytes
    //
    _d13(sdk::unknown_ptr) stor_portp_invoke_acpi_method;
    
    // [StorPortpSetPowerSettingNotificationGuids]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x18cd4, 0x1b430 bytes
    // storport.sys .text:0x37e08, 0x2be18 bytes
    // storport.sys .text:0x43a58, 0x440c8 bytes
    // storport.sys .text:0x37e08, 0x2be18 bytes
    //
    _d14(sdk::unknown_ptr) stor_portp_set_power_setting_notification_guids;
    
    // [StorProbeAndLockPages]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16db8, 0x1b430 bytes
    // storport.sys .text:0x19850, 0x2be18 bytes
    // storport.sys .text:0x1da94, 0x440c8 bytes
    // storport.sys .text:0x19850, 0x2be18 bytes
    //
    _d15(sdk::unknown_ptr) stor_probe_and_lock_pages;
    
    // [StorPurgeEventQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2bd18, 0x1b430 bytes
    // storport.sys .text:0x321c4, 0x2be18 bytes
    // storport.sys .text:0x3d0dc, 0x440c8 bytes
    // storport.sys .text:0x321c4, 0x2be18 bytes
    //
    _d16(sdk::unknown_ptr) stor_purge_event_queue;
    
    // [StorRemoveDictionary]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x11c94, 0x1b430 bytes
    // storport.sys .text:0x14df4, 0x2be18 bytes
    // storport.sys .text:0x18904, 0x440c8 bytes
    // storport.sys .text:0x14df4, 0x2be18 bytes
    //
    _d17(sdk::unknown_ptr) stor_remove_dictionary;
    
    // [StorRemoveEventQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2bdb8, 0x1b430 bytes
    // storport.sys .text:0x32284, 0x2be18 bytes
    // storport.sys .text:0x3d19c, 0x440c8 bytes
    // storport.sys .text:0x32284, 0x2be18 bytes
    //
    _d18(sdk::unknown_ptr) stor_remove_event_queue;
    
    // [StorRemoveEventQueueInternal]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2be20, 0x1b430 bytes
    // storport.sys .text:0x32340, 0x2be18 bytes
    // storport.sys .text:0x3d260, 0x440c8 bytes
    // storport.sys .text:0x32340, 0x2be18 bytes
    //
    _d19(sdk::unknown_ptr) stor_remove_event_queue_internal;
    
    // [StorRemoveIoGatewayItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6680, 0x1b430 bytes
    // storport.sys .text:0x96d0, 0x2be18 bytes
    // storport.sys .text:0x75a0, 0x440c8 bytes
    // storport.sys .text:0x96d0, 0x2be18 bytes
    //
    _d20(sdk::unknown_ptr) stor_remove_io_gateway_item;
    
    // [StorRequestThresholdTime]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e668, 0x1b430 bytes
    // storport.sys .data:0x67e48, 0x2be18 bytes
    // storport.sys .data:0x7a098, 0x440c8 bytes
    // storport.sys .data:0x67e48, 0x2be18 bytes
    //
    _d21(sdk::unknown_ptr) stor_request_threshold_time;
    
    // [StorSetFunctionExtensionTable]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc840, 0x1b430 bytes
    // storport.sys .text:0x37fd8, 0x2be18 bytes
    // storport.sys .text:0x43cf8, 0x440c8 bytes
    // storport.sys .text:0x37fd8, 0x2be18 bytes
    //
    _d22(sdk::unknown_ptr) stor_set_function_extension_table;
    
    // [StorSetIoGatewayEmptyEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39434, 0x1b430 bytes
    // storport.sys .text:0x4bf7c, 0x2be18 bytes
    // storport.sys .text:0x58cb8, 0x440c8 bytes
    // storport.sys .text:0x4bf7c, 0x2be18 bytes
    //
    _d23(sdk::unknown_ptr) stor_set_io_gateway_empty_event;
    
    // [StorSetIoGatewayNotBusy]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x39488, 0x1b430 bytes
    // storport.sys .text:0x4bff8, 0x2be18 bytes
    // storport.sys .text:0x58da4, 0x440c8 bytes
    // storport.sys .text:0x4bff8, 0x2be18 bytes
    //
    _d24(sdk::unknown_ptr) stor_set_io_gateway_not_busy;
    
    // [StorSubmitIoGatewayItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6ee0, 0x1b430 bytes
    // storport.sys .text:0xb644, 0x2be18 bytes
    // storport.sys .text:0x61fc, 0x440c8 bytes
    // storport.sys .text:0xb644, 0x2be18 bytes
    //
    _d25(sdk::unknown_ptr) stor_submit_io_gateway_item;
    
    // [StorTickEventQueue]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8de0, 0x1b430 bytes
    // storport.sys .text:0xdb60, 0x2be18 bytes
    // storport.sys .text:0x10690, 0x440c8 bytes
    // storport.sys .text:0xdb60, 0x2be18 bytes
    //
    _d26(sdk::unknown_ptr) stor_tick_event_queue;
    
    // [StorUnmapSenseInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x6780, 0x1b430 bytes
    // storport.sys .text:0x9800, 0x2be18 bytes
    // storport.sys .text:0x78f0, 0x440c8 bytes
    // storport.sys .text:0x9800, 0x2be18 bytes
    //
    _d27(sdk::unknown_ptr) stor_unmap_sense_info;
    
    // [StorUpdateCrashDumpPowerReady]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xe95c, 0x1b430 bytes
    // storport.sys .text:0xfd64, 0x2be18 bytes
    // storport.sys .text:0xb534, 0x440c8 bytes
    // storport.sys .text:0xfd64, 0x2be18 bytes
    //
    _d28(sdk::unknown_ptr) stor_update_crash_dump_power_ready;
    
    // [StorpAcquireMSISpinLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x94f0, 0x1b430 bytes
    // storport.sys .text:0x38078, 0x2be18 bytes
    // storport.sys .text:0x1dd24, 0x440c8 bytes
    // storport.sys .text:0x38078, 0x2be18 bytes
    //
    _d29(sdk::unknown_ptr) storp_acquire_msi_spin_lock;
    
    // [StorpAdapterInitializePoFxPower]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x180e8, 0x1b430 bytes
    // storport.sys .text:0x3811c, 0x2be18 bytes
    // storport.sys .text:0x43d98, 0x440c8 bytes
    // storport.sys .text:0x3811c, 0x2be18 bytes
    //
    _d30(sdk::unknown_ptr) storp_adapter_initialize_po_fx_power;
    
    // [StorpAdapterTopologyWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b7a0, 0x1b430 bytes
    // storport.sys .text:0xe800, 0x2be18 bytes
    // storport.sys .text:0x11c10, 0x440c8 bytes
    // storport.sys .text:0xe800, 0x2be18 bytes
    //
    _d31(sdk::unknown_ptr) storp_adapter_topology_work_item_routine;
    
    // [StorpAggregateHierarchicalResetLun]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b970, 0x1b430 bytes
    // storport.sys .text:0x4f4a0, 0x2be18 bytes
    // storport.sys .text:0x5d460, 0x440c8 bytes
    // storport.sys .text:0x4f4a0, 0x2be18 bytes
    //
    _d32(sdk::unknown_ptr) storp_aggregate_hierarchical_reset_lun;
    
    // [StorpAggregateHierarchicalResetTarget]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3b9c4, 0x1b430 bytes
    // storport.sys .text:0x4f4f4, 0x2be18 bytes
    // storport.sys .text:0x5d4b4, 0x440c8 bytes
    // storport.sys .text:0x4f4f4, 0x2be18 bytes
    //
    _d33(sdk::unknown_ptr) storp_aggregate_hierarchical_reset_target;
    
    // [StorpAllocateContiguousMemorySpecifyCacheNode]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e28c, 0x1b430 bytes
    // storport.sys .text:0x383f8, 0x2be18 bytes
    // storport.sys .text:0x440d8, 0x440c8 bytes
    // storport.sys .text:0x383f8, 0x2be18 bytes
    //
    _d34(sdk::unknown_ptr) storp_allocate_contiguous_memory_specify_cache_node;
    
    // [StorpAllocateHostMemoryBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e2f4, 0x1b430 bytes
    // storport.sys .text:0x3859c, 0x2be18 bytes
    // storport.sys .text:0x44150, 0x440c8 bytes
    // storport.sys .text:0x3859c, 0x2be18 bytes
    //
    _d35(sdk::unknown_ptr) storp_allocate_host_memory_buffer;
    
    // [StorpAllocateMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e534, 0x1b430 bytes
    // storport.sys .text:0x389c8, 0x2be18 bytes
    // storport.sys .text:0x44574, 0x440c8 bytes
    // storport.sys .text:0x389c8, 0x2be18 bytes
    //
    _d36(sdk::unknown_ptr) storp_allocate_mdl;
    
    // [StorpAllocatePool]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17074, 0x1b430 bytes
    // storport.sys .text:0x121a8, 0x2be18 bytes
    // storport.sys .text:0x1a230, 0x440c8 bytes
    // storport.sys .text:0x121a8, 0x2be18 bytes
    //
    _d37(sdk::unknown_ptr) storp_allocate_pool;
    
    // [StorpAreTelemetryErrorsEqual]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x72b8, 0x1b430 bytes
    // storport.sys .text:0x793c, 0x2be18 bytes
    // storport.sys .text:0x5e84, 0x440c8 bytes
    // storport.sys .text:0x793c, 0x2be18 bytes
    //
    _d38(sdk::unknown_ptr) storp_are_telemetry_errors_equal;
    
    // [StorpBuildMdlForNonPagedPool]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e664, 0x1b430 bytes
    // storport.sys .text:0x38b04, 0x2be18 bytes
    // storport.sys .text:0x446cc, 0x440c8 bytes
    // storport.sys .text:0x38b04, 0x2be18 bytes
    //
    _d39(sdk::unknown_ptr) storp_build_mdl_for_non_paged_pool;
    
    // [StorpBuildScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e700, 0x1b430 bytes
    // storport.sys .text:0x38bb0, 0x2be18 bytes
    // storport.sys .text:0x4478c, 0x440c8 bytes
    // storport.sys .text:0x38bb0, 0x2be18 bytes
    //
    _d40(sdk::unknown_ptr) storp_build_scatter_gather_list;
    
    // [StorpCompleteServiceIrp]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e84c, 0x1b430 bytes
    // storport.sys .text:0x38d04, 0x2be18 bytes
    // storport.sys .text:0x44918, 0x440c8 bytes
    // storport.sys .text:0x38d04, 0x2be18 bytes
    //
    _d41(sdk::unknown_ptr) storp_complete_service_irp;
    
    // [StorpCSEntryTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ba18, 0x1b430 bytes
    // storport.sys .text:0x4f548, 0x2be18 bytes
    // storport.sys .text:0x5d508, 0x440c8 bytes
    // storport.sys .text:0x4f548, 0x2be18 bytes
    //
    _d42(sdk::unknown_ptr) storp_cs_entry_telemetry;
    
    // [StorpCSExitTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3bde8, 0x1b430 bytes
    // storport.sys .text:0x4f994, 0x2be18 bytes
    // storport.sys .text:0x5d958, 0x440c8 bytes
    // storport.sys .text:0x4f994, 0x2be18 bytes
    //
    _d43(sdk::unknown_ptr) storp_cs_exit_telemetry;
    
    // [StorpDataInBufferAllocateMdlAndLockPages]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x389bc, 0x1b430 bytes
    // storport.sys .text:0x49eb0, 0x2be18 bytes
    // storport.sys .text:0x56244, 0x440c8 bytes
    // storport.sys .text:0x49eb0, 0x2be18 bytes
    //
    _d44(sdk::unknown_ptr) storp_data_in_buffer_allocate_mdl_and_lock_pages;
    
    // [StorpDeviceHealthWorkItemRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3c4f0, 0x1b430 bytes
    // storport.sys .text:0xccd0, 0x2be18 bytes
    // storport.sys .text:0x11e90, 0x440c8 bytes
    // storport.sys .text:0xccd0, 0x2be18 bytes
    //
    _d45(sdk::unknown_ptr) storp_device_health_work_item_routine;
    
    // [StorpFlushDataBufferMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e898, 0x1b430 bytes
    // storport.sys .text:0x38d5c, 0x2be18 bytes
    // storport.sys .text:0x44978, 0x440c8 bytes
    // storport.sys .text:0x38d5c, 0x2be18 bytes
    //
    _d46(sdk::unknown_ptr) storp_flush_data_buffer_mdl;
    
    // [StorpFreeHostMemoryBuffer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e8f4, 0x1b430 bytes
    // storport.sys .text:0x38e38, 0x2be18 bytes
    // storport.sys .text:0x449e0, 0x440c8 bytes
    // storport.sys .text:0x38e38, 0x2be18 bytes
    //
    _d47(sdk::unknown_ptr) storp_free_host_memory_buffer;
    
    // [StorpFreeMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e958, 0x1b430 bytes
    // storport.sys .text:0x38efc, 0x2be18 bytes
    // storport.sys .text:0x44ab4, 0x440c8 bytes
    // storport.sys .text:0x38efc, 0x2be18 bytes
    //
    _d48(sdk::unknown_ptr) storp_free_mdl;
    
    // [StorpFreeTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2e9f4, 0x1b430 bytes
    // storport.sys .text:0x38fa8, 0x2be18 bytes
    // storport.sys .text:0x44b74, 0x440c8 bytes
    // storport.sys .text:0x38fa8, 0x2be18 bytes
    //
    _d49(sdk::unknown_ptr) storp_free_timer;
    
    // [StorpFreeTimerWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ebd0, 0x1b430 bytes
    // storport.sys .text:0x391b0, 0x2be18 bytes
    // storport.sys .text:0x44da0, 0x440c8 bytes
    // storport.sys .text:0x391b0, 0x2be18 bytes
    //
    _d50(sdk::unknown_ptr) storp_free_timer_work_item;
    
    // [StorpFreeWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ec14, 0x1b430 bytes
    // storport.sys .text:0x3920c, 0x2be18 bytes
    // storport.sys .text:0x44dfc, 0x440c8 bytes
    // storport.sys .text:0x3920c, 0x2be18 bytes
    //
    _d51(sdk::unknown_ptr) storp_free_work_item;
    
    // [StorpGetActiveNodeCount]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2edd4, 0x1b430 bytes
    // storport.sys .text:0x393e0, 0x2be18 bytes
    // storport.sys .text:0x14d7c, 0x440c8 bytes
    // storport.sys .text:0x393e0, 0x2be18 bytes
    //
    _d52(sdk::unknown_ptr) storp_get_active_node_count;
    
    // [StorpGetDataInSgList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2ee54, 0x1b430 bytes
    // storport.sys .text:0x39474, 0x2be18 bytes
    // storport.sys .text:0x45004, 0x440c8 bytes
    // storport.sys .text:0x39474, 0x2be18 bytes
    //
    _d53(sdk::unknown_ptr) storp_get_data_in_sg_list;
    
    // [StorpGetExtendedTable]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2eebc, 0x1b430 bytes
    // storport.sys .text:0x394f0, 0x2be18 bytes
    // storport.sys .text:0x451a8, 0x440c8 bytes
    // storport.sys .text:0x394f0, 0x2be18 bytes
    //
    _d54(sdk::unknown_ptr) storp_get_extended_table;
    
    // [StorpGetMSIInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17224, 0x1b430 bytes
    // storport.sys .text:0x39708, 0x2be18 bytes
    // storport.sys .text:0x453c8, 0x440c8 bytes
    // storport.sys .text:0x39708, 0x2be18 bytes
    //
    _d55(sdk::unknown_ptr) storp_get_msi_info;
    
    // [StorpGetOriginalMdl]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f070, 0x1b430 bytes
    // storport.sys .text:0x397f0, 0x2be18 bytes
    // storport.sys .text:0x454b4, 0x440c8 bytes
    // storport.sys .text:0x397f0, 0x2be18 bytes
    //
    _d56(sdk::unknown_ptr) storp_get_original_mdl;
    
    // [StorpGetRequestInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19178, 0x1b430 bytes
    // storport.sys .text:0x39910, 0x2be18 bytes
    // storport.sys .text:0x45534, 0x440c8 bytes
    // storport.sys .text:0x39910, 0x2be18 bytes
    //
    _d57(sdk::unknown_ptr) storp_get_request_info;
    
    // [StorpGetSystemAddress]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f0e8, 0x1b430 bytes
    // storport.sys .text:0x39b74, 0x2be18 bytes
    // storport.sys .text:0x45790, 0x440c8 bytes
    // storport.sys .text:0x39b74, 0x2be18 bytes
    //
    _d58(sdk::unknown_ptr) storp_get_system_address;
    
    // [StorpInitializeAdapterTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15204, 0x1b430 bytes
    // storport.sys .text:0x50100, 0x2be18 bytes
    // storport.sys .text:0x5e104, 0x440c8 bytes
    // storport.sys .text:0x50100, 0x2be18 bytes
    //
    _d59(sdk::unknown_ptr) storp_initialize_adapter_telemetry;
    
    // [StorpInitializeHierarchicalResetBuckets]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x15288, 0x1b430 bytes
    // storport.sys .text:0xcc98, 0x2be18 bytes
    // storport.sys .text:0x3374, 0x440c8 bytes
    // storport.sys .text:0xcc98, 0x2be18 bytes
    //
    _d60(sdk::unknown_ptr) storp_initialize_hierarchical_reset_buckets;
    
    // [StorpInitializePerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xc1f4, 0x1b430 bytes
    // storport.sys .text:0x5018c, 0x2be18 bytes
    // storport.sys .text:0x5e190, 0x440c8 bytes
    // storport.sys .text:0x5018c, 0x2be18 bytes
    //
    _d61(sdk::unknown_ptr) storp_initialize_perf_telemetry;
    
    // [StorpInitializeTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x170c4, 0x1b430 bytes
    // storport.sys .text:0x39cf0, 0x2be18 bytes
    // storport.sys .text:0x45930, 0x440c8 bytes
    // storport.sys .text:0x39cf0, 0x2be18 bytes
    //
    _d62(sdk::unknown_ptr) storp_initialize_timer;
    
    // [StorpInitializeUnitTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0xfea0, 0x1b430 bytes
    // storport.sys .text:0x1707c, 0x2be18 bytes
    // storport.sys .text:0x1ad30, 0x440c8 bytes
    // storport.sys .text:0x1707c, 0x2be18 bytes
    //
    _d63(sdk::unknown_ptr) storp_initialize_unit_telemetry;
    
    // [StorpInitializeWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x17678, 0x1b430 bytes
    // storport.sys .text:0x39e7c, 0x2be18 bytes
    // storport.sys .text:0x45ac4, 0x440c8 bytes
    // storport.sys .text:0x39e7c, 0x2be18 bytes
    //
    _d64(sdk::unknown_ptr) storp_initialize_work_item;
    
    // [StorpLogPerAdapterStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3c544, 0x1b430 bytes
    // storport.sys .text:0xcb64, 0x2be18 bytes
    // storport.sys .text:0x3240, 0x440c8 bytes
    // storport.sys .text:0xcb64, 0x2be18 bytes
    //
    _d65(sdk::unknown_ptr) storp_log_per_adapter_statistics;
    
    // [StorpLogPerUnitStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ca60, 0x1b430 bytes
    // storport.sys .text:0xc7a8, 0x2be18 bytes
    // storport.sys .text:0x38e4, 0x440c8 bytes
    // storport.sys .text:0xc7a8, 0x2be18 bytes
    //
    _d66(sdk::unknown_ptr) storp_log_per_unit_statistics;
    
    // [StorpLogPhysicalTopologyInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3cb48, 0x1b430 bytes
    // storport.sys .text:0x50894, 0x2be18 bytes
    // storport.sys .text:0x1c37c, 0x440c8 bytes
    // storport.sys .text:0x50894, 0x2be18 bytes
    //
    _d67(sdk::unknown_ptr) storp_log_physical_topology_info;
    
    // [StorpLogRegisterAdapterPerfStates]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d0c0, 0x1b430 bytes
    // storport.sys .text:0x50e8c, 0x2be18 bytes
    // storport.sys .text:0x5ed10, 0x440c8 bytes
    // storport.sys .text:0x50e8c, 0x2be18 bytes
    //
    _d68(sdk::unknown_ptr) storp_log_register_adapter_perf_states;
    
    // [StorpLogStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d274, 0x1b430 bytes
    // storport.sys .text:0xc5e0, 0x2be18 bytes
    // storport.sys .text:0x371c, 0x440c8 bytes
    // storport.sys .text:0xc5e0, 0x2be18 bytes
    //
    _d69(sdk::unknown_ptr) storp_log_statistics;
    
    // [StorpLogSystemEvent]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f258, 0x1b430 bytes
    // storport.sys .text:0x39fc0, 0x2be18 bytes
    // storport.sys .text:0x45c14, 0x440c8 bytes
    // storport.sys .text:0x39fc0, 0x2be18 bytes
    //
    _d70(sdk::unknown_ptr) storp_log_system_event;
    
    // [StorpPortRegistryValidate]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x16218, 0x1b430 bytes
    // storport.sys .text:0x3a910, 0x2be18 bytes
    // storport.sys .text:0x46634, 0x440c8 bytes
    // storport.sys .text:0x3a910, 0x2be18 bytes
    //
    _d71(sdk::unknown_ptr) storp_port_registry_validate;
    
    // [StorpPutScatterGatherList]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f38c, 0x1b430 bytes
    // storport.sys .text:0x3a948, 0x2be18 bytes
    // storport.sys .text:0x4666c, 0x440c8 bytes
    // storport.sys .text:0x3a948, 0x2be18 bytes
    //
    _d72(sdk::unknown_ptr) storp_put_scatter_gather_list;
    
    // [StorpQueueWorkItem]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f488, 0x1b430 bytes
    // storport.sys .text:0x3aa48, 0x2be18 bytes
    // storport.sys .text:0x467a0, 0x440c8 bytes
    // storport.sys .text:0x3aa48, 0x2be18 bytes
    //
    _d73(sdk::unknown_ptr) storp_queue_work_item;
    
    // [StorpRegisterShim]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x59dbc, 0x1b430 bytes
    // storport.sys PAGE:0x79d0c, 0x2be18 bytes
    // storport.sys PAGE:0x8fd4c, 0x440c8 bytes
    // storport.sys PAGE:0x79d0c, 0x2be18 bytes
    //
    _d74(sdk::unknown_ptr) storp_register_shim;
    
    // [StorpRegisterTraceLogging]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x569c0, 0x1b430 bytes
    // storport.sys PAGE:0x799f4, 0x2be18 bytes
    // storport.sys PAGE:0x8f8e0, 0x440c8 bytes
    // storport.sys PAGE:0x799f4, 0x2be18 bytes
    //
    _d75(sdk::unknown_ptr) storp_register_trace_logging;
    
    // [StorpReleaseMSISpinLock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x958c, 0x1b430 bytes
    // storport.sys .text:0x3ab80, 0x2be18 bytes
    // storport.sys .text:0x1dda0, 0x440c8 bytes
    // storport.sys .text:0x3ab80, 0x2be18 bytes
    //
    _d76(sdk::unknown_ptr) storp_release_msi_spin_lock;
    
    // [StorpRequestTimer]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8c28, 0x1b430 bytes
    // storport.sys .text:0x1960, 0x2be18 bytes
    // storport.sys .text:0xc3f0, 0x440c8 bytes
    // storport.sys .text:0x1960, 0x2be18 bytes
    //
    _d77(sdk::unknown_ptr) storp_request_timer;
    
    // [StorpSetUnitAttributes]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f5b4, 0x1b430 bytes
    // storport.sys .text:0x3ac18, 0x2be18 bytes
    // storport.sys .text:0x468fc, 0x440c8 bytes
    // storport.sys .text:0x3ac18, 0x2be18 bytes
    //
    _d78(sdk::unknown_ptr) storp_set_unit_attributes;
    
    // [StorpTelemetryCollectErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x70b0, 0x1b430 bytes
    // storport.sys .text:0x76e8, 0x2be18 bytes
    // storport.sys .text:0x5c18, 0x440c8 bytes
    // storport.sys .text:0x76e8, 0x2be18 bytes
    //
    _d79(sdk::unknown_ptr) storp_telemetry_collect_error_data;
    
    // [StorpTelemetryCollectPerfData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x69d0, 0x1b430 bytes
    // storport.sys .text:0x9a50, 0x2be18 bytes
    // storport.sys .text:0x7a50, 0x440c8 bytes
    // storport.sys .text:0x9a50, 0x2be18 bytes
    //
    _d80(sdk::unknown_ptr) storp_telemetry_collect_perf_data;
    
    // [StorpTelemetryConstructErrorEntry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x72e4, 0x1b430 bytes
    // storport.sys .text:0x7970, 0x2be18 bytes
    // storport.sys .text:0x5eb8, 0x440c8 bytes
    // storport.sys .text:0x7970, 0x2be18 bytes
    //
    _d81(sdk::unknown_ptr) storp_telemetry_construct_error_entry;
    
    // [StorpTelemetryDeviceStatisticsCommand]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d3e4, 0x1b430 bytes
    // storport.sys .text:0x250c, 0x2be18 bytes
    // storport.sys .text:0x136c, 0x440c8 bytes
    // storport.sys .text:0x250c, 0x2be18 bytes
    //
    _d82(sdk::unknown_ptr) storp_telemetry_device_statistics_command;
    
    // [StorpTelemetryLogUnitDeviceStatisticsCriticalData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d4b4, 0x1b430 bytes
    // storport.sys .text:0x51830, 0x2be18 bytes
    // storport.sys .text:0x5fe18, 0x440c8 bytes
    // storport.sys .text:0x51830, 0x2be18 bytes
    //
    _d83(sdk::unknown_ptr) storp_telemetry_log_unit_device_statistics_critical_data;
    
    // [StorpTelemetryLogUnitDeviceStatisticsMeasures]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3d9e8, 0x1b430 bytes
    // storport.sys .text:0x51cfc, 0x2be18 bytes
    // storport.sys .text:0x602f0, 0x440c8 bytes
    // storport.sys .text:0x51cfc, 0x2be18 bytes
    //
    _d84(sdk::unknown_ptr) storp_telemetry_log_unit_device_statistics_measures;
    
    // [StorpTelemetryLogUnitErrorDataCriticalData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3df14, 0x1b430 bytes
    // storport.sys .text:0x521d0, 0x2be18 bytes
    // storport.sys .text:0x607d0, 0x440c8 bytes
    // storport.sys .text:0x521d0, 0x2be18 bytes
    //
    _d85(sdk::unknown_ptr) storp_telemetry_log_unit_error_data_critical_data;
    
    // [StorpTelemetryLogUnitErrorDataMeasures]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e198, 0x1b430 bytes
    // storport.sys .text:0x26b0, 0x2be18 bytes
    // storport.sys .text:0x1027c, 0x440c8 bytes
    // storport.sys .text:0x26b0, 0x2be18 bytes
    //
    _d86(sdk::unknown_ptr) storp_telemetry_log_unit_error_data_measures;
    
    // [StorpTelemetryLogUnitPerfDataCriticalData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e420, 0x1b430 bytes
    // storport.sys .text:0x524e0, 0x2be18 bytes
    // storport.sys .text:0x60ae0, 0x440c8 bytes
    // storport.sys .text:0x524e0, 0x2be18 bytes
    //
    _d87(sdk::unknown_ptr) storp_telemetry_log_unit_perf_data_critical_data;
    
    // [StorpTelemetryLogUnitPerfDataMeasures]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3e7b0, 0x1b430 bytes
    // storport.sys .text:0x2a40, 0x2be18 bytes
    // storport.sys .text:0xfd00, 0x440c8 bytes
    // storport.sys .text:0x2a40, 0x2be18 bytes
    //
    _d88(sdk::unknown_ptr) storp_telemetry_log_unit_perf_data_measures;
    
    // [StorpTelemetryLogUnitQosDataMeasures]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3eb38, 0x1b430 bytes
    // storport.sys .text:0x5284c, 0x2be18 bytes
    // storport.sys .text:0x60e4c, 0x440c8 bytes
    // storport.sys .text:0x5284c, 0x2be18 bytes
    //
    _d89(sdk::unknown_ptr) storp_telemetry_log_unit_qos_data_measures;
    
    // [StorpTelemetryLogUnitSmartAttributesCriticalData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3ee58, 0x1b430 bytes
    // storport.sys .text:0x52b94, 0x2be18 bytes
    // storport.sys .text:0x61194, 0x440c8 bytes
    // storport.sys .text:0x52b94, 0x2be18 bytes
    //
    _d90(sdk::unknown_ptr) storp_telemetry_log_unit_smart_attributes_critical_data;
    
    // [StorpTelemetryLogUnitSmartAttributesMeasures]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f258, 0x1b430 bytes
    // storport.sys .text:0x1008, 0x2be18 bytes
    // storport.sys .text:0x1d90, 0x440c8 bytes
    // storport.sys .text:0x1008, 0x2be18 bytes
    //
    _d91(sdk::unknown_ptr) storp_telemetry_log_unit_smart_attributes_measures;
    
    // [StorpTelemetryMarkUnitResponsive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f668, 0x1b430 bytes
    // storport.sys .text:0x52fd4, 0x2be18 bytes
    // storport.sys .text:0x615d4, 0x440c8 bytes
    // storport.sys .text:0x52fd4, 0x2be18 bytes
    //
    _d92(sdk::unknown_ptr) storp_telemetry_mark_unit_responsive;
    
    // [StorpTelemetryMarkUnitUnresponsive]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f7d0, 0x1b430 bytes
    // storport.sys .text:0x53144, 0x2be18 bytes
    // storport.sys .text:0x61744, 0x440c8 bytes
    // storport.sys .text:0x53144, 0x2be18 bytes
    //
    _d93(sdk::unknown_ptr) storp_telemetry_mark_unit_unresponsive;
    
    // [StorpTelemetrySendAdaptiveIdleCounters]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3f96c, 0x1b430 bytes
    // storport.sys .text:0x223c, 0x2be18 bytes
    // storport.sys .text:0x3580, 0x440c8 bytes
    // storport.sys .text:0x223c, 0x2be18 bytes
    //
    _d94(sdk::unknown_ptr) storp_telemetry_send_adaptive_idle_counters;
    
    // [StorpTelemetrySendUnitDeviceStatistics]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3fb88, 0x1b430 bytes
    // storport.sys .text:0x23d8, 0x2be18 bytes
    // storport.sys .text:0x1258, 0x440c8 bytes
    // storport.sys .text:0x23d8, 0x2be18 bytes
    //
    _d95(sdk::unknown_ptr) storp_telemetry_send_unit_device_statistics;
    
    // [StorpTelemetrySendUnitNvmeHealthInfo]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x401c4, 0x1b430 bytes
    // storport.sys .text:0x550bc, 0x2be18 bytes
    // storport.sys .text:0x6326c, 0x440c8 bytes
    // storport.sys .text:0x550bc, 0x2be18 bytes
    //
    _d96(sdk::unknown_ptr) storp_telemetry_send_unit_nvme_health_info;
    
    // [StorpTelemetrySendUnitPauseRequestCounters]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x406f4, 0x1b430 bytes
    // storport.sys .text:0xca50, 0x2be18 bytes
    // storport.sys .text:0x3668, 0x440c8 bytes
    // storport.sys .text:0xca50, 0x2be18 bytes
    //
    _d97(sdk::unknown_ptr) storp_telemetry_send_unit_pause_request_counters;
    
    // [StorpTelemetrySendUnitPerfData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x408d0, 0x1b430 bytes
    // storport.sys .text:0x4250, 0x2be18 bytes
    // storport.sys .text:0xdf98, 0x440c8 bytes
    // storport.sys .text:0x4250, 0x2be18 bytes
    //
    _d98(sdk::unknown_ptr) storp_telemetry_send_unit_perf_data;
    
    // [StorpTelemetrySendUnitQos]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40d5c, 0x1b430 bytes
    // storport.sys .text:0x55564, 0x2be18 bytes
    // storport.sys .text:0x6394c, 0x440c8 bytes
    // storport.sys .text:0x55564, 0x2be18 bytes
    //
    _d99(sdk::unknown_ptr) storp_telemetry_send_unit_qos;
    
    // [StorpTelemetrySendUnitSmartAttributes]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x40f08, 0x1b430 bytes
    // storport.sys .text:0x1084, 0x2be18 bytes
    // storport.sys .text:0x1674, 0x440c8 bytes
    // storport.sys .text:0x1084, 0x2be18 bytes
    //
    _e00(sdk::unknown_ptr) storp_telemetry_send_unit_smart_attributes;
    
    // [StorpTelemetrySmartCommand]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41540, 0x1b430 bytes
    // storport.sys .text:0x15e8, 0x2be18 bytes
    // storport.sys .text:0x1c30, 0x440c8 bytes
    // storport.sys .text:0x15e8, 0x2be18 bytes
    //
    _e01(sdk::unknown_ptr) storp_telemetry_smart_command;
    
    // [StorpTraceLoggingTelemetryTimerDpcRoutine]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x416b0, 0x1b430 bytes
    // storport.sys .text:0xc900, 0x2be18 bytes
    // storport.sys .text:0x33b0, 0x440c8 bytes
    // storport.sys .text:0xc900, 0x2be18 bytes
    //
    _e02(sdk::unknown_ptr) storp_trace_logging_telemetry_timer_dpc_routine;
    
    // [StorpUnRegisterTraceLogging]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5ecb8, 0x1b430 bytes
    // storport.sys PAGE:0x79bbc, 0x2be18 bytes
    // storport.sys PAGE:0x8fb24, 0x440c8 bytes
    // storport.sys PAGE:0x79bbc, 0x2be18 bytes
    //
    _e03(sdk::unknown_ptr) storp_un_register_trace_logging;
    
    // [StorpUninitializePerfTelemetry]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x41774, 0x1b430 bytes
    // storport.sys .text:0x55770, 0x2be18 bytes
    // storport.sys .text:0x63b58, 0x440c8 bytes
    // storport.sys .text:0x55770, 0x2be18 bytes
    //
    _e04(sdk::unknown_ptr) storp_uninitialize_perf_telemetry;
    
    // [StorpUnitInitializePoFxPower]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f668, 0x1b430 bytes
    // storport.sys .text:0x3ac94, 0x2be18 bytes
    // storport.sys .text:0x46984, 0x440c8 bytes
    // storport.sys .text:0x3ac94, 0x2be18 bytes
    //
    _e05(sdk::unknown_ptr) storp_unit_initialize_po_fx_power;
    
    // [StorpUpdateUncachedExtensionAllocationRegion]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2f894, 0x1b430 bytes
    // storport.sys .text:0x3aee4, 0x2be18 bytes
    // storport.sys .text:0x46be4, 0x440c8 bytes
    // storport.sys .text:0x3aee4, 0x2be18 bytes
    //
    _e06(sdk::unknown_ptr) storp_update_uncached_extension_allocation_region;
    
    // [StorportExtensionTable]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e4a0, 0x1b430 bytes
    // storport.sys .data:0x67660, 0x2be18 bytes
    // storport.sys .data:0x797e0, 0x440c8 bytes
    // storport.sys .data:0x67660, 0x2be18 bytes
    //
    _e07(sdk::unknown_ptr) storport_extension_table;
    
    // [StorportTimerDpc]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x8ec0, 0x1b430 bytes
    // storport.sys .text:0x1a70, 0x2be18 bytes
    // storport.sys .text:0xa8f0, 0x440c8 bytes
    // storport.sys .text:0x1a70, 0x2be18 bytes
    //
    _e08(sdk::unknown_ptr) storport_timer_dpc;
    
    // [TelemetryPerfContext]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e360, 0x1b430 bytes
    // storport.sys .data:0x675e0, 0x2be18 bytes
    // storport.sys .data:0x79720, 0x440c8 bytes
    // storport.sys .data:0x675e0, 0x2be18 bytes
    //
    _e09(sdk::unknown_ptr) telemetry_perf_context;
    
    // [TranslateResultToScsiRequestBlock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x9618, 0x1b430 bytes
    // storport.sys .text:0x40508, 0x2be18 bytes
    // storport.sys .text:0x1cc64, 0x440c8 bytes
    // storport.sys .text:0x40508, 0x2be18 bytes
    //
    _e10(sdk::unknown_ptr) translate_result_to_scsi_request_block;
    
    // [TranslateScsiRequestBlockToIoInfoSrbExData]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x91fc, 0x1b430 bytes
    // storport.sys .text:0x406d8, 0x2be18 bytes
    // storport.sys .text:0x1cab0, 0x440c8 bytes
    // storport.sys .text:0x406d8, 0x2be18 bytes
    //
    _e11(sdk::unknown_ptr) translate_scsi_request_block_to_io_info_srb_ex_data;
    
    // [TranslateScsiRequestBlockToStorageRequestBlock]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x93cc, 0x1b430 bytes
    // storport.sys .text:0x40894, 0x2be18 bytes
    // storport.sys .text:0x1c99c, 0x440c8 bytes
    // storport.sys .text:0x40894, 0x2be18 bytes
    //
    _e12(sdk::unknown_ptr) translate_scsi_request_block_to_storage_request_block;
    
    // [TranslateToExtendedSrb]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x19398, 0x1b430 bytes
    // storport.sys .text:0x409b4, 0x2be18 bytes
    // storport.sys .text:0x1c74c, 0x440c8 bytes
    // storport.sys .text:0x409b4, 0x2be18 bytes
    //
    _e13(sdk::unknown_ptr) translate_to_extended_srb;
    
    // [UseQPCTime]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x4e648, 0x1b430 bytes
    // storport.sys .data:0x67d70, 0x2be18 bytes
    // storport.sys .data:0x79ab8, 0x440c8 bytes
    // storport.sys .data:0x67d70, 0x2be18 bytes
    //
    _e14(sdk::unknown_ptr) use_qpc_time;
    
    // [WellKnownPassword]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47df0, 0x1b430 bytes
    // storport.sys .rdata:0x5fdc8, 0x2be18 bytes
    // storport.sys .rdata:0x70710, 0x440c8 bytes
    // storport.sys .rdata:0x5fdc8, 0x2be18 bytes
    //
    _e15(sdk::unknown_ptr) well_known_password;
    
    // [WppGuidToStr]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43c3c, 0x1b430 bytes
    // storport.sys .text:0x58594, 0x2be18 bytes
    // storport.sys .text:0x68cec, 0x440c8 bytes
    // storport.sys .text:0x58594, 0x2be18 bytes
    //
    _e16(sdk::function<wchar_t*(wchar_t*, const struct nt::guid_t*)>*) wpp_guid_to_str;
    
    // [WppInitGlobalLogger]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys PAGE:0x5db4c, 0x1b430 bytes
    // storport.sys PAGE:0x780a0, 0x2be18 bytes
    // storport.sys PAGE:0x8d99c, 0x440c8 bytes
    // storport.sys PAGE:0x780a0, 0x2be18 bytes
    //
    _e17(sdk::unknown_ptr) wpp_init_global_logger;
    
    // [WppIntToHex]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x43d34, 0x1b430 bytes
    // storport.sys .text:0x58694, 0x2be18 bytes
    // storport.sys .text:0x68dec, 0x440c8 bytes
    // storport.sys .text:0x58694, 0x2be18 bytes
    //
    _e18(sdk::function<void(wchar_t*, uint32_t, int32_t)>*) wpp_int_to_hex;
    
    // [WPP_SF_ddd]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b054, 0x1b430 bytes
    // storport.sys .text:0x30e9c, 0x2be18 bytes
    // storport.sys .text:0x3baac, 0x440c8 bytes
    // storport.sys .text:0x30e9c, 0x2be18 bytes
    //
    _e19(sdk::unknown_ptr) wpp_sf_ddd;
    
    // [WPP_SF_dddd]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2fdc4, 0x1b430 bytes
    // storport.sys .text:0x3b070, 0x2be18 bytes
    // storport.sys .text:0x46d58, 0x440c8 bytes
    // storport.sys .text:0x3b070, 0x2be18 bytes
    //
    _e20(sdk::unknown_ptr) wpp_sf_dddd;
    
    // [WPP_SF_ddsd]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x424ac, 0x1b430 bytes
    // storport.sys .text:0x55c84, 0x2be18 bytes
    // storport.sys .text:0x64254, 0x440c8 bytes
    // storport.sys .text:0x55c84, 0x2be18 bytes
    //
    _e21(sdk::unknown_ptr) wpp_sf_ddsd;
    
    // [WPP_SF_qdddDDs]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b50c, 0x1b430 bytes
    // storport.sys .text:0x31490, 0x2be18 bytes
    // storport.sys .text:0x3c2ac, 0x440c8 bytes
    // storport.sys .text:0x31490, 0x2be18 bytes
    //
    _e22(sdk::unknown_ptr) wpp_sf_qddd_d_ds;
    
    // [WPP_SF_qdq]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x38cf4, 0x1b430 bytes
    // storport.sys .text:0x49fc0, 0x2be18 bytes
    // storport.sys .text:0x56354, 0x440c8 bytes
    // storport.sys .text:0x49fc0, 0x2be18 bytes
    //
    _e23(sdk::unknown_ptr) wpp_sf_qdq;
    
    // [WPP_SF_qqddds]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x2b604, 0x1b430 bytes
    // storport.sys .text:0x3158c, 0x2be18 bytes
    // storport.sys .text:0x3c3a8, 0x440c8 bytes
    // storport.sys .text:0x3158c, 0x2be18 bytes
    //
    _e24(sdk::unknown_ptr) wpp_sf_qqddds;
    
    // [WPP_SF_qqs]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x32f9c, 0x1b430 bytes
    // storport.sys .text:0x40000, 0x2be18 bytes
    // storport.sys .text:0x4b774, 0x440c8 bytes
    // storport.sys .text:0x40000, 0x2be18 bytes
    //
    _e25(sdk::unknown_ptr) wpp_sf_qqs;
    
    // [WPP_SF_qqsD]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .text:0x3303c, 0x1b430 bytes
    // storport.sys .text:0x400a0, 0x2be18 bytes
    // storport.sys .text:0x4b814, 0x440c8 bytes
    // storport.sys .text:0x400a0, 0x2be18 bytes
    //
    _e26(sdk::unknown_ptr) wpp_sf_qqs_d;
    
    // [WPP_ThisDir_CTLGUID_wppCtlGuid]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x44550, 0x1b430 bytes
    // storport.sys .rdata:0x5f538, 0x2be18 bytes
    // storport.sys .rdata:0x6f7d8, 0x440c8 bytes
    // storport.sys .rdata:0x5f538, 0x2be18 bytes
    //
    _e27(sdk::unknown_ptr) wpp_this_dir_ctlguid_wpp_ctl_guid;
};
#include "magic/api.end.hpp"
