#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace stor::nvme
{
    // [CheckDpcWatchdogTimerExpireSoon]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x9bbc, 0x12e9 bytes
    //
    _m00(sdk::unknown_ptr) check_dpc_watchdog_timer_expire_soon;
    
    // [ControllerConfigure]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xa914, 0x12e9 bytes
    //
    _m01(sdk::unknown_ptr) controller_configure;
    
    // [DpcWatchdogTimerRemainsMoreThan]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x9bdc, 0x12e9 bytes
    //
    _m02(sdk::unknown_ptr) dpc_watchdog_timer_remains_more_than;
    
    // [FillControllerConfiguration]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x57a4, 0x12e9 bytes
    //
    _m03(sdk::unknown_ptr) fill_controller_configuration;
    
    // [FillControllerRuntimeLog]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x15d18, 0x12e9 bytes
    //
    _m04(sdk::unknown_ptr) fill_controller_runtime_log;
    
    // [FormInquiryDeviceCharacteristicsData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0x107c4, 0x1011 bytes
    //
    _m05(sdk::unknown_ptr) form_inquiry_device_characteristics_data;
    
    // [GetScsiReservationType]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x191e8, 0x12e9 bytes
    //
    _m06(sdk::unknown_ptr) get_scsi_reservation_type;
    
    // [GetSrbScsiAddress]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x4bd4, 0x12e9 bytes
    //
    _m07(sdk::unknown_ptr) get_srb_scsi_address;
    
    // [IsDumpMode]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x7df0, 0x12e9 bytes
    //
    _m08(sdk::unknown_ptr) is_dump_mode;
    
    // [IsIntelChatham]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0x90dc, 0x1011 bytes
    //
    _m09(sdk::unknown_ptr) is_intel_chatham;
    
    // [IsNVMeResetComplete]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1684c, 0x12e9 bytes
    //
    _m10(sdk::unknown_ptr) is_nv_me_reset_complete;
    
    // [NVMeAdminCommandErrorLog]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xd2f0, 0x12e9 bytes
    //
    _m11(sdk::unknown_ptr) nv_me_admin_command_error_log;
    
    // [NVMeCaptureLiveDumpWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x16970, 0x12e9 bytes
    //
    _m12(sdk::unknown_ptr) nv_me_capture_live_dump_work_item;
    
    // [NVMeControllerFilterResouceRequirements]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0xc27c, 0x1011 bytes
    //
    _m13(sdk::unknown_ptr) nv_me_controller_filter_resouce_requirements;
    
    // [NVMeControllerFilterResourceRequirements]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xc92c, 0x12e9 bytes
    //
    _m14(sdk::unknown_ptr) nv_me_controller_filter_resource_requirements;
    
    // [NVMeControllerGetFeaturesSupportedCacheCapabilities]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x71ec, 0x12e9 bytes
    //
    _m15(sdk::unknown_ptr) nv_me_controller_get_features_supported_cache_capabilities;
    
    // [NVMeControllerReinitialize]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x20368, 0x12e9 bytes
    //
    _m16(sdk::unknown_ptr) nv_me_controller_reinitialize;
    
    // [NVMeControllerSetHostIdentifier]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x17614, 0x12e9 bytes
    //
    _m17(sdk::unknown_ptr) nv_me_controller_set_host_identifier;
    
    // [NVMeEnableThrottling]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x5bcc, 0x12e9 bytes
    //
    _m18(sdk::unknown_ptr) nv_me_enable_throttling;
    
    // [NVMeGetControllerInitiatedTelemetry]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x20d88, 0x12e9 bytes
    //
    _m19(sdk::unknown_ptr) nv_me_get_controller_initiated_telemetry;
    
    // [NVMeGetControllerInitiatedTelemetryHeader]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x20f80, 0x12e9 bytes
    //
    _m20(sdk::unknown_ptr) nv_me_get_controller_initiated_telemetry_header;
    
    // [NVMeGetControllerInitiatedTelemetryLog]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x210ac, 0x12e9 bytes
    //
    _m21(sdk::unknown_ptr) nv_me_get_controller_initiated_telemetry_log;
    
    // [NVMeGetControllerIoCommandSetIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x75b8, 0x12e9 bytes
    //
    _m22(sdk::unknown_ptr) nv_me_get_controller_io_command_set_identify;
    
    // [NVMeGetFeaturesSupportedCacheCapabilitiesCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xdc50, 0x12e9 bytes
    //
    _m23(sdk::unknown_ptr) nv_me_get_features_supported_cache_capabilities_completion;
    
    // [NVMeGetNamespaceDescriptorListIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x8014, 0x12e9 bytes
    //
    _m24(sdk::unknown_ptr) nv_me_get_namespace_descriptor_list_identify;
    
    // [NVMeGetNamespaceIoCommandSetIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xa6cc, 0x12e9 bytes
    //
    _m25(sdk::unknown_ptr) nv_me_get_namespace_io_command_set_identify;
    
    // [NVMeGetNamespaceMetadata]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xc2d8, 0x12e9 bytes
    //
    _m26(sdk::unknown_ptr) nv_me_get_namespace_metadata;
    
    // [NVMeGetNamespaceMetadataCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xddd0, 0x12e9 bytes
    //
    _m27(sdk::unknown_ptr) nv_me_get_namespace_metadata_completion;
    
    // [NVMeGetNVMSetAttributeList]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xa75c, 0x12e9 bytes
    //
    _m28(sdk::unknown_ptr) nv_me_get_nvm_set_attribute_list;
    
    // [NVMeGetSanitizeLogWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1bf70, 0x12e9 bytes
    //
    _m29(sdk::unknown_ptr) nv_me_get_sanitize_log_work_item;
    
    // [NVMeHardwareReset]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x17ae8, 0x12e9 bytes
    //
    _m30(sdk::unknown_ptr) nv_me_hardware_reset;
    
    // [NVMeLogTelemetryWaitForCmdComplete]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0x18bc0, 0x1011 bytes
    //
    _m31(sdk::unknown_ptr) nv_me_log_telemetry_wait_for_cmd_complete;
    
    // [NVMeMaskInterrupt]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0x18d8c, 0x1011 bytes
    //
    _m32(sdk::unknown_ptr) nv_me_mask_interrupt;
    
    // [NVMeParseNameSpaceIdentifyData]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xa144, 0x12e9 bytes
    //
    _m33(sdk::unknown_ptr) nv_me_parse_name_space_identify_data;
    
    // [NVMeReenumerateActionWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x21ae0, 0x12e9 bytes
    //
    _m34(sdk::unknown_ptr) nv_me_reenumerate_action_work_item;
    
    // [NVMeReservationAcquireCommand]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c2e0, 0x12e9 bytes
    //
    _m35(sdk::unknown_ptr) nv_me_reservation_acquire_command;
    
    // [NVMeReservationRegisterAndMoveCommand]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c46c, 0x12e9 bytes
    //
    _m36(sdk::unknown_ptr) nv_me_reservation_register_and_move_command;
    
    // [NVMeReservationRegisterCommand]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c5ec, 0x12e9 bytes
    //
    _m37(sdk::unknown_ptr) nv_me_reservation_register_command;
    
    // [NVMeReservationReleaseCommand]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c7d0, 0x12e9 bytes
    //
    _m38(sdk::unknown_ptr) nv_me_reservation_release_command;
    
    // [NVMeReservationReportCapabilities]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c938, 0x12e9 bytes
    //
    _m39(sdk::unknown_ptr) nv_me_reservation_report_capabilities;
    
    // [NVMeReservationReportCapabilitiesCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1c9f0, 0x12e9 bytes
    //
    _m40(sdk::unknown_ptr) nv_me_reservation_report_capabilities_completion;
    
    // [NVMeReservationReportStatus]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1cb14, 0x12e9 bytes
    //
    _m41(sdk::unknown_ptr) nv_me_reservation_report_status;
    
    // [NVMeReservationReportStatusCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1cce0, 0x12e9 bytes
    //
    _m42(sdk::unknown_ptr) nv_me_reservation_report_status_completion;
    
    // [NVMeSanitizeCommandCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1d340, 0x12e9 bytes
    //
    _m43(sdk::unknown_ptr) nv_me_sanitize_command_completion;
    
    // [NVMeSanitizeRecoverCompletionRoutine]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1d3e0, 0x12e9 bytes
    //
    _m44(sdk::unknown_ptr) nv_me_sanitize_recover_completion_routine;
    
    // [NVMeSanitizeRecoverWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x22d00, 0x12e9 bytes
    //
    _m45(sdk::unknown_ptr) nv_me_sanitize_recover_work_item;
    
    // [NVMeSendControllerInternalData]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x2418c, 0x12e9 bytes
    //
    _m46(sdk::unknown_ptr) nv_me_send_controller_internal_data;
    
    // [NVMeSendLunInternalData]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x24888, 0x12e9 bytes
    //
    _m47(sdk::unknown_ptr) nv_me_send_lun_internal_data;
    
    // [NVMeSetFeaturesCacheCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x18240, 0x12e9 bytes
    //
    _m48(sdk::unknown_ptr) nv_me_set_features_cache_completion;
    
    // [NVMeSetFeaturesCachePhase1Completion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004
    // stornvme.sys .text:0x13c80, 0x1011 bytes
    //
    _m49(sdk::unknown_ptr) nv_me_set_features_cache_phase1_completion;
    
    // [ProcessCommandNvmePacket]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xd178, 0x12e9 bytes
    //
    _m50(sdk::unknown_ptr) process_command_nvme_packet;
    
    // [ProcessNvmeReservationNotification]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x23938, 0x12e9 bytes
    //
    _m51(sdk::unknown_ptr) process_nvme_reservation_notification;
    
    // [ProcessNvmeSanitizeStatus]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x23a2c, 0x12e9 bytes
    //
    _m52(sdk::unknown_ptr) process_nvme_sanitize_status;
    
    // [ReadBinaryRegistryValue]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0xc08c, 0x12e9 bytes
    //
    _m53(sdk::unknown_ptr) read_binary_registry_value;
    
    // [ScsiPersistentReserveIn]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1ec0c, 0x12e9 bytes
    //
    _m54(sdk::unknown_ptr) scsi_persistent_reserve_in;
    
    // [ScsiPersistentReserveOut]
    // Ldr = [stornvme.sys]
    // => Windows 11
    // stornvme.sys .text:0x1ecf4, 0x12e9 bytes
    //
    _m55(sdk::unknown_ptr) scsi_persistent_reserve_out;
    
    // [AdminQueueInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9ac8, 0x1011 bytes
    // stornvme.sys .text:0x76b0, 0x12e9 bytes
    //
    _m56(sdk::unknown_ptr) admin_queue_initialize;
    
    // [AdminQueuesFreeResources]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9c88, 0x1011 bytes
    // stornvme.sys .text:0x15f84, 0x12e9 bytes
    //
    _m57(sdk::unknown_ptr) admin_queues_free_resources;
    
    // [BuildFirmwareActivateCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf978, 0x1011 bytes
    // stornvme.sys .text:0x1838c, 0x12e9 bytes
    //
    _m58(sdk::unknown_ptr) build_firmware_activate_command;
    
    // [BuildGetFeaturesTemperatureThresholdCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf9b0, 0x1011 bytes
    // stornvme.sys .text:0xa110, 0x12e9 bytes
    //
    _m59(sdk::unknown_ptr) build_get_features_temperature_threshold_command;
    
    // [BuildGetLogPageCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1f64, 0x1011 bytes
    // stornvme.sys .text:0x4e38, 0x12e9 bytes
    //
    _m60(sdk::unknown_ptr) build_get_log_page_command;
    
    // [BuildGetLogPageCommandForTelemetryLog]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf9e8, 0x1011 bytes
    // stornvme.sys .text:0x183c4, 0x12e9 bytes
    //
    _m61(sdk::unknown_ptr) build_get_log_page_command_for_telemetry_log;
    
    // [CalculateTimeDurationIn100ns]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x484c, 0x1011 bytes
    // stornvme.sys .text:0x15cc8, 0x12e9 bytes
    //
    _m62(sdk::function<uint64_t(uint64_t, uint64_t)>*) calculate_time_duration_in100ns;
    
    // [CompletionQueueReInit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9d50, 0x1011 bytes
    // stornvme.sys .text:0x1604c, 0x12e9 bytes
    //
    _m63(sdk::unknown_ptr) completion_queue_re_init;
    
    // [ControllerAllocateUncachedExtension]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x8dd0, 0x1011 bytes
    // stornvme.sys .text:0xaacc, 0x12e9 bytes
    //
    _m64(sdk::unknown_ptr) controller_allocate_uncached_extension;
    
    // [ControllerEnable]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9d94, 0x1011 bytes
    // stornvme.sys .text:0x8b44, 0x12e9 bytes
    //
    _m65(sdk::unknown_ptr) controller_enable;
    
    // [ControllerReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9e1c, 0x1011 bytes
    // stornvme.sys .text:0x7338, 0x12e9 bytes
    //
    _m66(sdk::unknown_ptr) controller_reset;
    
    // [FirmwareActivate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10104, 0x1011 bytes
    // stornvme.sys .text:0x18b38, 0x12e9 bytes
    //
    _m67(sdk::unknown_ptr) firmware_activate;
    
    // [FirmwareDownload]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10318, 0x1011 bytes
    // stornvme.sys .text:0x18d58, 0x12e9 bytes
    //
    _m68(sdk::unknown_ptr) firmware_download;
    
    // [FormInquiryBlockLimitsData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12e8, 0x1011 bytes
    // stornvme.sys .text:0x2464, 0x12e9 bytes
    //
    _m69(sdk::unknown_ptr) form_inquiry_block_limits_data;
    
    // [FormInquiryBlockProvisioningData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x106e0, 0x1011 bytes
    // stornvme.sys .text:0xda74, 0x12e9 bytes
    //
    _m70(sdk::unknown_ptr) form_inquiry_block_provisioning_data;
    
    // [FormInquiryDeviceIdentifiersData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1082c, 0x1011 bytes
    // stornvme.sys .text:0xced4, 0x12e9 bytes
    //
    _m71(sdk::unknown_ptr) form_inquiry_device_identifiers_data;
    
    // [FormInquirySerialNumberData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10a70, 0x1011 bytes
    // stornvme.sys .text:0xcda8, 0x12e9 bytes
    //
    _m72(sdk::unknown_ptr) form_inquiry_serial_number_data;
    
    // [FormInquiryStandardData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10c78, 0x1011 bytes
    // stornvme.sys .text:0xc5cc, 0x12e9 bytes
    //
    _m73(sdk::unknown_ptr) form_inquiry_standard_data;
    
    // [FormInquiryVpdSupportedPagesData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10e28, 0x1011 bytes
    // stornvme.sys .text:0xdb3c, 0x12e9 bytes
    //
    _m74(sdk::unknown_ptr) form_inquiry_vpd_supported_pages_data;
    
    // [FreeMsiInfo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9fe0, 0x1011 bytes
    // stornvme.sys .text:0x5f1c, 0x12e9 bytes
    //
    _m75(sdk::unknown_ptr) free_msi_info;
    
    // [FreeProcessorGroupInfo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa054, 0x1011 bytes
    // stornvme.sys .text:0xcd70, 0x12e9 bytes
    //
    _m76(sdk::unknown_ptr) free_processor_group_info;
    
    // [FreeProcessorInfo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa0a0, 0x1011 bytes
    // stornvme.sys .text:0x71a8, 0x12e9 bytes
    //
    _m77(sdk::unknown_ptr) free_processor_info;
    
    // [g_ControllerExtension]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .data:0x230a0, 0x1011 bytes
    // stornvme.sys .data:0x2c0e0, 0x12e9 bytes
    //
    _m78(sdk::unknown_ptr) g_controller_extension;
    
    // [g_ControllerExtensionIndex]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .data:0x23120, 0x1011 bytes
    // stornvme.sys .data:0x2c160, 0x12e9 bytes
    //
    _m79(sdk::unknown_ptr) g_controller_extension_index;
    
    // [GetControllerMaxTransferSize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x474c, 0x1011 bytes
    // stornvme.sys .text:0x5188, 0x12e9 bytes
    //
    _m80(sdk::unknown_ptr) get_controller_max_transfer_size;
    
    // [GetFirmwareGranularity]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x4780, 0x1011 bytes
    // stornvme.sys .text:0x51bc, 0x12e9 bytes
    //
    _m81(sdk::unknown_ptr) get_firmware_granularity;
    
    // [GetFreeReservedQueueIndex]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10f0c, 0x1011 bytes
    // stornvme.sys .text:0x19130, 0x12e9 bytes
    //
    _m82(sdk::unknown_ptr) get_free_reserved_queue_index;
    
    // [GetInterruptMessageInformation]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa114, 0x1011 bytes
    // stornvme.sys .text:0x5d50, 0x12e9 bytes
    //
    _m83(sdk::unknown_ptr) get_interrupt_message_information;
    
    // [GetLocalCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa2e8, 0x1011 bytes
    // stornvme.sys .text:0x9cf8, 0x12e9 bytes
    //
    _m84(sdk::unknown_ptr) get_local_command;
    
    // [GetLunExtension]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x3660, 0x1011 bytes
    // stornvme.sys .text:0x3214, 0x12e9 bytes
    //
    _m85(sdk::unknown_ptr) get_lun_extension;
    
    // [GetNamespaceId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x4344, 0x1011 bytes
    // stornvme.sys .text:0x4ba8, 0x12e9 bytes
    //
    _m86(sdk::unknown_ptr) get_namespace_id;
    
    // [GetNVMeRegisterAddress]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1bc7c, 0x1011 bytes
    // stornvme.sys .text:0xc104, 0x12e9 bytes
    //
    _m87(sdk::unknown_ptr) get_nv_me_register_address;
    
    // [GetProcessorGroupInformation]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa364, 0x1011 bytes
    // stornvme.sys .text:0xcbec, 0x12e9 bytes
    //
    _m88(sdk::unknown_ptr) get_processor_group_information;
    
    // [GetProcessorInformation]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa4f4, 0x1011 bytes
    // stornvme.sys .text:0x6e68, 0x12e9 bytes
    //
    _m89(sdk::unknown_ptr) get_processor_information;
    
    // [GetRegistrySettings]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1bce8, 0x1011 bytes
    // stornvme.sys .text:0xac28, 0x12e9 bytes
    //
    _m90(sdk::unknown_ptr) get_registry_settings;
    
    // [GetRegistrySettingsForSpecificKey]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1cd00, 0x1011 bytes
    // stornvme.sys .text:0x23fc8, 0x12e9 bytes
    //
    _m91(sdk::unknown_ptr) get_registry_settings_for_specific_key;
    
    // [GetStreamId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10fb8, 0x1011 bytes
    // stornvme.sys .text:0x19228, 0x12e9 bytes
    //
    _m92(sdk::unknown_ptr) get_stream_id;
    
    // [GUID_DIAGNOSTIC_PROVIDER_STORNVME]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee38, 0x1011 bytes
    // stornvme.sys .rdata:0x26380, 0x12e9 bytes
    //
    _m93(sdk::unknown_ptr) guid_diagnostic_provider_stornvme;
    
    // [GUID_NVME_POWER_IDLE_TIMEOUT1]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee58, 0x1011 bytes
    // stornvme.sys .rdata:0x25368, 0x12e9 bytes
    //
    _m94(sdk::unknown_ptr) guid_nvme_power_idle_timeout1;
    
    // [GUID_NVME_POWER_IDLE_TIMEOUT2]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee78, 0x1011 bytes
    // stornvme.sys .rdata:0x25378, 0x12e9 bytes
    //
    _m95(sdk::unknown_ptr) guid_nvme_power_idle_timeout2;
    
    // [GUID_NVME_POWER_NOPPME]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee48, 0x1011 bytes
    // stornvme.sys .rdata:0x26390, 0x12e9 bytes
    //
    _m96(sdk::unknown_ptr) guid_nvme_power_noppme;
    
    // [GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee68, 0x1011 bytes
    // stornvme.sys .rdata:0x25358, 0x12e9 bytes
    //
    _m97(sdk::unknown_ptr) guid_nvme_power_state_transition_latency_tolerance1;
    
    // [GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .rdata:0x1ee88, 0x1011 bytes
    // stornvme.sys .rdata:0x25388, 0x12e9 bytes
    //
    _m98(sdk::unknown_ptr) guid_nvme_power_state_transition_latency_tolerance2;
    
    // [GUIDToSCSINameString]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x10e98, 0x1011 bytes
    // stornvme.sys .text:0xd0d4, 0x12e9 bytes
    //
    _m99(sdk::unknown_ptr) guid_to_scsi_name_string;
    
    // [HexFromUchar]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1107c, 0x1011 bytes
    // stornvme.sys .text:0xd148, 0x12e9 bytes
    //
    _n00(sdk::unknown_ptr) hex_from_uchar;
    
    // [InitializePerfOptions]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xa8d4, 0x1011 bytes
    // stornvme.sys .text:0x6074, 0x12e9 bytes
    //
    _n01(sdk::unknown_ptr) initialize_perf_options;
    
    // [IoctlCreateReservedQueuePair]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x110ac, 0x1011 bytes
    // stornvme.sys .text:0x192ec, 0x12e9 bytes
    //
    _n02(sdk::unknown_ptr) ioctl_create_reserved_queue_pair;
    
    // [IoctlDeleteReservedQueuePair]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x11528, 0x1011 bytes
    // stornvme.sys .text:0x1978c, 0x12e9 bytes
    //
    _n03(sdk::unknown_ptr) ioctl_delete_reserved_queue_pair;
    
    // [IoctlFirmwareProcess]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1738, 0x1011 bytes
    // stornvme.sys .text:0x263c, 0x12e9 bytes
    //
    _n04(sdk::unknown_ptr) ioctl_firmware_process;
    
    // [IoctlQueryEnduranceInformation]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x119d8, 0x1011 bytes
    // stornvme.sys .text:0x19c1c, 0x12e9 bytes
    //
    _n05(sdk::unknown_ptr) ioctl_query_endurance_information;
    
    // [IoctlQueryProtocolInfoProcess]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13b0, 0x1011 bytes
    // stornvme.sys .text:0x12d8, 0x12e9 bytes
    //
    _n06(sdk::unknown_ptr) ioctl_query_protocol_info_process;
    
    // [IoctlQueryReservedQueueEntries]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x11b90, 0x1011 bytes
    // stornvme.sys .text:0x19dd4, 0x12e9 bytes
    //
    _n07(sdk::unknown_ptr) ioctl_query_reserved_queue_entries;
    
    // [IoctlQueryTemperatureInfoProcess]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x11dc0, 0x1011 bytes
    // stornvme.sys .text:0x1a014, 0x12e9 bytes
    //
    _n08(sdk::unknown_ptr) ioctl_query_temperature_info_process;
    
    // [IoctlSetProtocolInfoProcess]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x11f24, 0x1011 bytes
    // stornvme.sys .text:0x1a178, 0x12e9 bytes
    //
    _n09(sdk::unknown_ptr) ioctl_set_protocol_info_process;
    
    // [IoctlSetTemperatureThresholdProcess]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x11fac, 0x1011 bytes
    // stornvme.sys .text:0x1a200, 0x12e9 bytes
    //
    _n10(sdk::unknown_ptr) ioctl_set_temperature_threshold_process;
    
    // [IoctlStorageStreamsGetOpenStreams]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x120d8, 0x1011 bytes
    // stornvme.sys .text:0x1a32c, 0x12e9 bytes
    //
    _n11(sdk::unknown_ptr) ioctl_storage_streams_get_open_streams;
    
    // [IoctlStorageStreamsGetParameters]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1228c, 0x1011 bytes
    // stornvme.sys .text:0x1a4e4, 0x12e9 bytes
    //
    _n12(sdk::unknown_ptr) ioctl_storage_streams_get_parameters;
    
    // [IoctlStorageStreamsReleaseId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12640, 0x1011 bytes
    // stornvme.sys .text:0x1a898, 0x12e9 bytes
    //
    _n13(sdk::unknown_ptr) ioctl_storage_streams_release_id;
    
    // [IoctlToNVMe]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b20, 0x1011 bytes
    // stornvme.sys .text:0x2a20, 0x12e9 bytes
    //
    _n14(sdk::unknown_ptr) ioctl_to_nv_me;
    
    // [IsDeallocateSupported]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x4614, 0x1011 bytes
    // stornvme.sys .text:0x501c, 0x12e9 bytes
    //
    _n15(sdk::unknown_ptr) is_deallocate_supported;
    
    // [IsFirmwareActivateWithoutResetEnabled]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12740, 0x1011 bytes
    // stornvme.sys .text:0x1a998, 0x12e9 bytes
    //
    _n16(sdk::unknown_ptr) is_firmware_activate_without_reset_enabled;
    
    // [IsInternalSrb]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9100, 0x1011 bytes
    // stornvme.sys .text:0x9ca4, 0x12e9 bytes
    //
    _n17(sdk::unknown_ptr) is_internal_srb;
    
    // [IsNVMeControllerOnFatalError]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x489c, 0x1011 bytes
    // stornvme.sys .text:0x5320, 0x12e9 bytes
    //
    _n18(sdk::unknown_ptr) is_nv_me_controller_on_fatal_error;
    
    // [IsPci3MsiInterrupt]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xbb9c, 0x1011 bytes
    // stornvme.sys .text:0xcbc0, 0x12e9 bytes
    //
    _n19(sdk::unknown_ptr) is_pci3_msi_interrupt;
    
    // [KelvinToCelsius]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12778, 0x1011 bytes
    // stornvme.sys .text:0x1a9cc, 0x12e9 bytes
    //
    _n20(sdk::unknown_ptr) kelvin_to_celsius;
    
    // [LogSenseInformationalExceptions]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12798, 0x1011 bytes
    // stornvme.sys .text:0x1a9ec, 0x12e9 bytes
    //
    _n21(sdk::unknown_ptr) log_sense_informational_exceptions;
    
    // [LogSenseSupportedLogPages]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12904, 0x1011 bytes
    // stornvme.sys .text:0x1ab58, 0x12e9 bytes
    //
    _n22(sdk::unknown_ptr) log_sense_supported_log_pages;
    
    // [LogSenseTemperature]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12980, 0x1011 bytes
    // stornvme.sys .text:0x1abd4, 0x12e9 bytes
    //
    _n23(sdk::unknown_ptr) log_sense_temperature;
    
    // [MdlToPrp]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x3fe0, 0x1011 bytes
    // stornvme.sys .text:0x4800, 0x12e9 bytes
    //
    _n24(sdk::unknown_ptr) mdl_to_prp;
    
    // [NVMeAllocateDmaBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x456c, 0x1011 bytes
    // stornvme.sys .text:0x4f74, 0x12e9 bytes
    //
    _n25(sdk::unknown_ptr) nv_me_allocate_dma_buffer;
    
    // [NVMeAsyncEventRequestCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x160a0, 0x1011 bytes
    // stornvme.sys .text:0x1f890, 0x12e9 bytes
    //
    _n26(sdk::unknown_ptr) nv_me_async_event_request_completion;
    
    // [NVMeBuildDevicePollingConfiguration]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16710, 0x1011 bytes
    // stornvme.sys .text:0xdd90, 0x12e9 bytes
    //
    _n27(sdk::unknown_ptr) nv_me_build_device_polling_configuration;
    
    // [NVMeBuildPollingConfiguration]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16798, 0x1011 bytes
    // stornvme.sys .text:0x85e8, 0x12e9 bytes
    //
    _n28(sdk::unknown_ptr) nv_me_build_polling_configuration;
    
    // [NVMeCancelAllCompletionQueueDpc]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xbbc8, 0x1011 bytes
    // stornvme.sys .text:0x168e0, 0x12e9 bytes
    //
    _n29(sdk::unknown_ptr) nv_me_cancel_all_completion_queue_dpc;
    
    // [NVMeCompleteSubmissionQueueRequests]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xbc48, 0x1011 bytes
    // stornvme.sys .text:0x16b20, 0x12e9 bytes
    //
    _n30(sdk::unknown_ptr) nv_me_complete_submission_queue_requests;
    
    // [NVMeCompletionDpcRoutine]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x2270, 0x1011 bytes
    // stornvme.sys .text:0x1c40, 0x12e9 bytes
    //
    _n31(sdk::unknown_ptr) nv_me_completion_dpc_routine;
    
    // [NVMeCompletionQueueInit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xbd3c, 0x1011 bytes
    // stornvme.sys .text:0x7e00, 0x12e9 bytes
    //
    _n32(sdk::unknown_ptr) nv_me_completion_queue_init;
    
    // [NVMeConfigAsyncEvent]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16914, 0x1011 bytes
    // stornvme.sys .text:0x8a30, 0x12e9 bytes
    //
    _n33(sdk::unknown_ptr) nv_me_config_async_event;
    
    // [NVMeControllerAsyncReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xbf30, 0x1011 bytes
    // stornvme.sys .text:0x16c2c, 0x12e9 bytes
    //
    _n34(sdk::unknown_ptr) nv_me_controller_async_reset;
    
    // [NVMeControllerAsyncResetWorker]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xc080, 0x1011 bytes
    // stornvme.sys .text:0x16d50, 0x12e9 bytes
    //
    _n35(sdk::unknown_ptr) nv_me_controller_async_reset_worker;
    
    // [NVMeControllerCompleteAllIORequests]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xc174, 0x1011 bytes
    // stornvme.sys .text:0x16dd4, 0x12e9 bytes
    //
    _n36(sdk::unknown_ptr) nv_me_controller_complete_all_io_requests;
    
    // [NVMeControllerIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16a28, 0x1011 bytes
    // stornvme.sys .text:0x74b8, 0x12e9 bytes
    //
    _n37(sdk::unknown_ptr) nv_me_controller_identify;
    
    // [NVMeControllerIdentifyWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12b10, 0x1011 bytes
    // stornvme.sys .text:0x1ad60, 0x12e9 bytes
    //
    _n38(sdk::unknown_ptr) nv_me_controller_identify_work_item;
    
    // [NVMeControllerInitPart1]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xc5dc, 0x1011 bytes
    // stornvme.sys .text:0x6c34, 0x12e9 bytes
    //
    _n39(sdk::unknown_ptr) nv_me_controller_init_part1;
    
    // [NVMeControllerInitPart2]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xc7a0, 0x1011 bytes
    // stornvme.sys .text:0x6a64, 0x12e9 bytes
    //
    _n40(sdk::unknown_ptr) nv_me_controller_init_part2;
    
    // [NVMeControllerInitPart3]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xc9e4, 0x1011 bytes
    // stornvme.sys .text:0x5aec, 0x12e9 bytes
    //
    _n41(sdk::unknown_ptr) nv_me_controller_init_part3;
    
    // [NVMeControllerPanicResetActionWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16b90, 0x1011 bytes
    // stornvme.sys .text:0x200e0, 0x12e9 bytes
    //
    _n42(sdk::unknown_ptr) nv_me_controller_panic_reset_action_work_item;
    
    // [NVMeControllerPowerDown]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xcc1c, 0x1011 bytes
    // stornvme.sys .text:0x16edc, 0x12e9 bytes
    //
    _n43(sdk::unknown_ptr) nv_me_controller_power_down;
    
    // [NVMeControllerPowerUp]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xcdd8, 0x1011 bytes
    // stornvme.sys .text:0x17060, 0x12e9 bytes
    //
    _n44(sdk::unknown_ptr) nv_me_controller_power_up;
    
    // [NVMeControllerRemove]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xce6c, 0x1011 bytes
    // stornvme.sys .text:0x170f8, 0x12e9 bytes
    //
    _n45(sdk::unknown_ptr) nv_me_controller_remove;
    
    // [NVMeControllerReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd0a0, 0x1011 bytes
    // stornvme.sys .text:0x1736c, 0x12e9 bytes
    //
    _n46(sdk::unknown_ptr) nv_me_controller_reset;
    
    // [NVMeControllerStartFailureEventLog]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9154, 0x1011 bytes
    // stornvme.sys .text:0x15e68, 0x12e9 bytes
    //
    _n47(sdk::unknown_ptr) nv_me_controller_start_failure_event_log;
    
    // [NVMeControllerStop]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd270, 0x1011 bytes
    // stornvme.sys .text:0x178a8, 0x12e9 bytes
    //
    _n48(sdk::unknown_ptr) nv_me_controller_stop;
    
    // [NVMeControllerValidateFirmwareActivateCapability]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12b50, 0x1011 bytes
    // stornvme.sys .text:0x1adb0, 0x12e9 bytes
    //
    _n49(sdk::unknown_ptr) nv_me_controller_validate_firmware_activate_capability;
    
    // [NVMeCopyFirmwareRevision]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12b94, 0x1011 bytes
    // stornvme.sys .text:0xc760, 0x12e9 bytes
    //
    _n50(sdk::unknown_ptr) nv_me_copy_firmware_revision;
    
    // [NVMeDeRegisterThrottling]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12c14, 0x1011 bytes
    // stornvme.sys .text:0x1ae00, 0x12e9 bytes
    //
    _n51(sdk::unknown_ptr) nv_me_de_register_throttling;
    
    // [NVMeDirectiveCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16d60, 0x1011 bytes
    // stornvme.sys .text:0x203f0, 0x12e9 bytes
    //
    _n52(sdk::unknown_ptr) nv_me_directive_completion;
    
    // [NVMeDirectiveIdentifyEnableDirective]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x16f2c, 0x1011 bytes
    // stornvme.sys .text:0x205cc, 0x12e9 bytes
    //
    _n53(sdk::unknown_ptr) nv_me_directive_identify_enable_directive;
    
    // [NVMeDirectiveIdentifyReturnParameters]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17014, 0x1011 bytes
    // stornvme.sys .text:0x206b4, 0x12e9 bytes
    //
    _n54(sdk::unknown_ptr) nv_me_directive_identify_return_parameters;
    
    // [NVMeDirectiveStreamsAllocateResources]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x171a4, 0x1011 bytes
    // stornvme.sys .text:0x20844, 0x12e9 bytes
    //
    _n55(sdk::unknown_ptr) nv_me_directive_streams_allocate_resources;
    
    // [NVMeDirectiveStreamsGetStatus]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17298, 0x1011 bytes
    // stornvme.sys .text:0x20938, 0x12e9 bytes
    //
    _n56(sdk::unknown_ptr) nv_me_directive_streams_get_status;
    
    // [NVMeDirectiveStreamsReleaseId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17474, 0x1011 bytes
    // stornvme.sys .text:0x20b14, 0x12e9 bytes
    //
    _n57(sdk::unknown_ptr) nv_me_directive_streams_release_id;
    
    // [NVMeDirectiveStreamsReturnParameters]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17568, 0x1011 bytes
    // stornvme.sys .text:0x20c08, 0x12e9 bytes
    //
    _n58(sdk::unknown_ptr) nv_me_directive_streams_return_parameters;
    
    // [NVMeDisableThrottling]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd344, 0x1011 bytes
    // stornvme.sys .text:0x1797c, 0x12e9 bytes
    //
    _n59(sdk::unknown_ptr) nv_me_disable_throttling;
    
    // [NVMeFStateIdleTimerCallback]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x5050, 0x1011 bytes
    // stornvme.sys .text:0x5670, 0x12e9 bytes
    //
    _n60(sdk::unknown_ptr) nv_me_f_state_idle_timer_callback;
    
    // [NVMeFirmwareActivateCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12c70, 0x1011 bytes
    // stornvme.sys .text:0x1ae60, 0x12e9 bytes
    //
    _n61(sdk::unknown_ptr) nv_me_firmware_activate_completion;
    
    // [NVMeFirmwareActivateCompletionAfterReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12ee0, 0x1011 bytes
    // stornvme.sys .text:0x1b0e0, 0x12e9 bytes
    //
    _n62(sdk::unknown_ptr) nv_me_firmware_activate_completion_after_reset;
    
    // [NVMeFirmwareDownloadCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x12f40, 0x1011 bytes
    // stornvme.sys .text:0x1b140, 0x12e9 bytes
    //
    _n63(sdk::unknown_ptr) nv_me_firmware_download_completion;
    
    // [NVMeFreeDmaBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x451c, 0x1011 bytes
    // stornvme.sys .text:0x4ddc, 0x12e9 bytes
    //
    _n64(sdk::unknown_ptr) nv_me_free_dma_buffer;
    
    // [NVMeFreeHostMemoryBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd3a4, 0x1011 bytes
    // stornvme.sys .text:0x179f4, 0x12e9 bytes
    //
    _n65(sdk::unknown_ptr) nv_me_free_host_memory_buffer;
    
    // [NVMeGetAutoPowerStateTransition]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x176e8, 0x1011 bytes
    // stornvme.sys .text:0xc168, 0x12e9 bytes
    //
    _n66(sdk::unknown_ptr) nv_me_get_auto_power_state_transition;
    
    // [NVMeGetAutoPowerStateTransitionCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17850, 0x1011 bytes
    // stornvme.sys .text:0xdd00, 0x12e9 bytes
    //
    _n67(sdk::unknown_ptr) nv_me_get_auto_power_state_transition_completion;
    
    // [NVMeGetCloudSSDErrorRecoveryLog]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x178c8, 0x1011 bytes
    // stornvme.sys .text:0x82d4, 0x12e9 bytes
    //
    _n68(sdk::unknown_ptr) nv_me_get_cloud_ssd_error_recovery_log;
    
    // [NVMeGetCloudSSDErrorRecoveryLogPageCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17a50, 0x1011 bytes
    // stornvme.sys .text:0xdba0, 0x12e9 bytes
    //
    _n69(sdk::unknown_ptr) nv_me_get_cloud_ssd_error_recovery_log_page_completion;
    
    // [NVMeGetCommandEffectsLog]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17afc, 0x1011 bytes
    // stornvme.sys .text:0x815c, 0x12e9 bytes
    //
    _n70(sdk::unknown_ptr) nv_me_get_command_effects_log;
    
    // [NVMeGetControllerSerialNumber]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd498, 0x1011 bytes
    // stornvme.sys .text:0xd910, 0x12e9 bytes
    //
    _n71(sdk::unknown_ptr) nv_me_get_controller_serial_number;
    
    // [NVMeGetDeviceTelemetryData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1308c, 0x1011 bytes
    // stornvme.sys .text:0x1b2a8, 0x12e9 bytes
    //
    _n72(sdk::unknown_ptr) nv_me_get_device_telemetry_data;
    
    // [NVMeGetDeviceTelemetryHeader]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1327c, 0x1011 bytes
    // stornvme.sys .text:0x1b538, 0x12e9 bytes
    //
    _n73(sdk::unknown_ptr) nv_me_get_device_telemetry_header;
    
    // [NVMeGetErrorInfoLogPageCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13400, 0x1011 bytes
    // stornvme.sys .text:0x1b6e0, 0x12e9 bytes
    //
    _n74(sdk::unknown_ptr) nv_me_get_error_info_log_page_completion;
    
    // [NVMeGetFeaturesCurrentCacheValueCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x33f0, 0x1011 bytes
    // stornvme.sys .text:0x2d60, 0x12e9 bytes
    //
    _n75(sdk::unknown_ptr) nv_me_get_features_current_cache_value_completion;
    
    // [NVMeGetLogPageCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17c90, 0x1011 bytes
    // stornvme.sys .text:0x21440, 0x12e9 bytes
    //
    _n76(sdk::unknown_ptr) nv_me_get_log_page_completion;
    
    // [NVMeGetLogPageFirmwareSlotCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1930, 0x1011 bytes
    // stornvme.sys .text:0x2830, 0x12e9 bytes
    //
    _n77(sdk::unknown_ptr) nv_me_get_log_page_firmware_slot_completion;
    
    // [NVMeGetLogPageHealthInfoCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x134b0, 0x1011 bytes
    // stornvme.sys .text:0x1b790, 0x12e9 bytes
    //
    _n78(sdk::unknown_ptr) nv_me_get_log_page_health_info_completion;
    
    // [NVMeGetLogPageTelemetryDataCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13560, 0x1011 bytes
    // stornvme.sys .text:0x1b840, 0x12e9 bytes
    //
    _n79(sdk::unknown_ptr) nv_me_get_log_page_telemetry_data_completion;
    
    // [NVMeGetLogPageTelemetryHeaderCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13870, 0x1011 bytes
    // stornvme.sys .text:0x1bb70, 0x12e9 bytes
    //
    _n80(sdk::unknown_ptr) nv_me_get_log_page_telemetry_header_completion;
    
    // [NVMeGetPowerState]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd518, 0x1011 bytes
    // stornvme.sys .text:0x996c, 0x12e9 bytes
    //
    _n81(sdk::unknown_ptr) nv_me_get_power_state;
    
    // [NVMeGetRichDeviceDescription]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13a88, 0x1011 bytes
    // stornvme.sys .text:0xc4b8, 0x12e9 bytes
    //
    _n82(sdk::unknown_ptr) nv_me_get_rich_device_description;
    
    // [NVMeGetTemperatureThreshold]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17e6c, 0x1011 bytes
    // stornvme.sys .text:0x8930, 0x12e9 bytes
    //
    _n83(sdk::unknown_ptr) nv_me_get_temperature_threshold;
    
    // [NVMeGetTemperatureThresholdCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17f70, 0x1011 bytes
    // stornvme.sys .text:0xdd50, 0x12e9 bytes
    //
    _n84(sdk::unknown_ptr) nv_me_get_temperature_threshold_completion;
    
    // [NVMeHwAdapterControl]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x4a90, 0x1011 bytes
    // stornvme.sys .text:0x5350, 0x12e9 bytes
    //
    _n85(sdk::unknown_ptr) nv_me_hw_adapter_control;
    
    // [NVMeHwBuildIo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x3960, 0x1011 bytes
    // stornvme.sys .text:0x3e60, 0x12e9 bytes
    //
    _n86(sdk::unknown_ptr) nv_me_hw_build_io;
    
    // [NVMeHwFindAdapter]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x91e0, 0x1011 bytes
    // stornvme.sys .text:0xa2a0, 0x12e9 bytes
    //
    _n87(sdk::unknown_ptr) nv_me_hw_find_adapter;
    
    // [NVMeHwInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x97c0, 0x1011 bytes
    // stornvme.sys .text:0xdca0, 0x12e9 bytes
    //
    _n88(sdk::unknown_ptr) nv_me_hw_initialize;
    
    // [NVMeHwInterrupt]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9820, 0x1011 bytes
    // stornvme.sys .text:0x15f00, 0x12e9 bytes
    //
    _n89(sdk::unknown_ptr) nv_me_hw_interrupt;
    
    // [NVMeHwMSIInterrupt]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x48d0, 0x1011 bytes
    // stornvme.sys .text:0x1730, 0x12e9 bytes
    //
    _n90(sdk::unknown_ptr) nv_me_hw_msi_interrupt;
    
    // [NVMeHwPassiveInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9880, 0x1011 bytes
    // stornvme.sys .text:0x59f0, 0x12e9 bytes
    //
    _n91(sdk::unknown_ptr) nv_me_hw_passive_initialize;
    
    // [NVMeHwResetBus]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9950, 0x1011 bytes
    // stornvme.sys .text:0x15f60, 0x12e9 bytes
    //
    _n92(sdk::unknown_ptr) nv_me_hw_reset_bus;
    
    // [NVMeHwStartIo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x2110, 0x1011 bytes
    // stornvme.sys .text:0x36b0, 0x12e9 bytes
    //
    _n93(sdk::unknown_ptr) nv_me_hw_start_io;
    
    // [NVMeHwTracingEnabled]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x50c0, 0x1011 bytes
    // stornvme.sys .text:0x56c0, 0x12e9 bytes
    //
    _n94(sdk::unknown_ptr) nv_me_hw_tracing_enabled;
    
    // [NVMeHwUnitControl]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x9990, 0x1011 bytes
    // stornvme.sys .text:0xc7e0, 0x12e9 bytes
    //
    _n95(sdk::unknown_ptr) nv_me_hw_unit_control;
    
    // [NVMeInitHostMemoryBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd548, 0x1011 bytes
    // stornvme.sys .text:0x69a0, 0x12e9 bytes
    //
    _n96(sdk::unknown_ptr) nv_me_init_host_memory_buffer;
    
    // [NVMeInitStreams]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd7c0, 0x1011 bytes
    // stornvme.sys .text:0x17bac, 0x12e9 bytes
    //
    _n97(sdk::unknown_ptr) nv_me_init_streams;
    
    // [NVMeIoCompletionQueueCreate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x17fb0, 0x1011 bytes
    // stornvme.sys .text:0x6728, 0x12e9 bytes
    //
    _n98(sdk::unknown_ptr) nv_me_io_completion_queue_create;
    
    // [NVMeIoCompletionQueueCreateCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18320, 0x1011 bytes
    // stornvme.sys .text:0xd8a0, 0x12e9 bytes
    //
    _n99(sdk::unknown_ptr) nv_me_io_completion_queue_create_completion;
    
    // [NVMeIoCompletionQueueDelete]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18394, 0x1011 bytes
    // stornvme.sys .text:0x216c8, 0x12e9 bytes
    //
    _o00(sdk::unknown_ptr) nv_me_io_completion_queue_delete;
    
    // [NVMeIoPollingDpcRoutine]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18470, 0x1011 bytes
    // stornvme.sys .text:0x217a0, 0x12e9 bytes
    //
    _o01(sdk::unknown_ptr) nv_me_io_polling_dpc_routine;
    
    // [NVMeIoPollingTimerExCallback]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18620, 0x1011 bytes
    // stornvme.sys .text:0x21960, 0x12e9 bytes
    //
    _o02(sdk::unknown_ptr) nv_me_io_polling_timer_ex_callback;
    
    // [NVMeIoSubmissionQueueCreate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18690, 0x1011 bytes
    // stornvme.sys .text:0x64d8, 0x12e9 bytes
    //
    _o03(sdk::unknown_ptr) nv_me_io_submission_queue_create;
    
    // [NVMeIoSubmissionQueueCreateCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x189d0, 0x1011 bytes
    // stornvme.sys .text:0xd830, 0x12e9 bytes
    //
    _o04(sdk::unknown_ptr) nv_me_io_submission_queue_create_completion;
    
    // [NVMeIoSubmissionQueueDelete]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18a44, 0x1011 bytes
    // stornvme.sys .text:0x219d0, 0x12e9 bytes
    //
    _o05(sdk::unknown_ptr) nv_me_io_submission_queue_delete;
    
    // [NVMeIsAllowedWithinThrottleLimit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x47a8, 0x1011 bytes
    // stornvme.sys .text:0x1c1c8, 0x12e9 bytes
    //
    _o06(sdk::unknown_ptr) nv_me_is_allowed_within_throttle_limit;
    
    // [NVMeIsLunActive]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13b24, 0x1011 bytes
    // stornvme.sys .text:0x604c, 0x12e9 bytes
    //
    _o07(sdk::unknown_ptr) nv_me_is_lun_active;
    
    // [NVMeIssueAsyncEventCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18b1c, 0x1011 bytes
    // stornvme.sys .text:0x8d20, 0x12e9 bytes
    //
    _o08(sdk::unknown_ptr) nv_me_issue_async_event_command;
    
    // [NVMeLogEtwControllerInfo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xd9d0, 0x1011 bytes
    // stornvme.sys .text:0x56d0, 0x12e9 bytes
    //
    _o09(sdk::unknown_ptr) nv_me_log_etw_controller_info;
    
    // [NVMeLogTelemetry]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xdd18, 0x1011 bytes
    // stornvme.sys .text:0x9e20, 0x12e9 bytes
    //
    _o10(sdk::unknown_ptr) nv_me_log_telemetry;
    
    // [NVMeLogTelemetryControllerInfo]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe028, 0x1011 bytes
    // stornvme.sys .text:0x8dc4, 0x12e9 bytes
    //
    _o11(sdk::unknown_ptr) nv_me_log_telemetry_controller_info;
    
    // [NVMeLunCompleteAllIORequests]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe54c, 0x1011 bytes
    // stornvme.sys .text:0x17dbc, 0x12e9 bytes
    //
    _o12(sdk::unknown_ptr) nv_me_lun_complete_all_io_requests;
    
    // [NVMeMapError]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1008, 0x1011 bytes
    // stornvme.sys .text:0x19c4, 0x12e9 bytes
    //
    _o13(sdk::unknown_ptr) nv_me_map_error;
    
    // [NVMeMaxOperationalPower]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe5f8, 0x1011 bytes
    // stornvme.sys .text:0x8c00, 0x12e9 bytes
    //
    _o14(sdk::unknown_ptr) nv_me_max_operational_power;
    
    // [NVMeModeSenseGetLogPageHealthInfoCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x36a0, 0x1011 bytes
    // stornvme.sys .text:0x3250, 0x12e9 bytes
    //
    _o15(sdk::unknown_ptr) nv_me_mode_sense_get_log_page_health_info_completion;
    
    // [NVMeNameSpaceIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x18dc4, 0x1011 bytes
    // stornvme.sys .text:0x7818, 0x12e9 bytes
    //
    _o16(sdk::unknown_ptr) nv_me_name_space_identify;
    
    // [NVMePerfStateTransition]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe700, 0x1011 bytes
    // stornvme.sys .text:0x17e68, 0x12e9 bytes
    //
    _o17(sdk::unknown_ptr) nv_me_perf_state_transition;
    
    // [NVMePowerCleanUp]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe78c, 0x1011 bytes
    // stornvme.sys .text:0x17ec8, 0x12e9 bytes
    //
    _o18(sdk::unknown_ptr) nv_me_power_clean_up;
    
    // [NVMePowerInitialize]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xe7ec, 0x1011 bytes
    // stornvme.sys .text:0x92e0, 0x12e9 bytes
    //
    _o19(sdk::unknown_ptr) nv_me_power_initialize;
    
    // [NVMePowerSetFState]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xeee8, 0x1011 bytes
    // stornvme.sys .text:0x97c4, 0x12e9 bytes
    //
    _o20(sdk::unknown_ptr) nv_me_power_set_f_state;
    
    // [NVMePowerSetPerfState]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf010, 0x1011 bytes
    // stornvme.sys .text:0x17f58, 0x12e9 bytes
    //
    _o21(sdk::unknown_ptr) nv_me_power_set_perf_state;
    
    // [NVMePowerSettingChangeNotification]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf178, 0x1011 bytes
    // stornvme.sys .text:0xa988, 0x12e9 bytes
    //
    _o22(sdk::unknown_ptr) nv_me_power_setting_change_notification;
    
    // [NVMePowerStateGetMaxPower]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf2a4, 0x1011 bytes
    // stornvme.sys .text:0x9df4, 0x12e9 bytes
    //
    _o23(sdk::unknown_ptr) nv_me_power_state_get_max_power;
    
    // [NVMeQueueWorkItem]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13b4c, 0x1011 bytes
    // stornvme.sys .text:0x1c270, 0x12e9 bytes
    //
    _o24(sdk::unknown_ptr) nv_me_queue_work_item;
    
    // [NVMeQueuesReInit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf2d0, 0x1011 bytes
    // stornvme.sys .text:0x17fd8, 0x12e9 bytes
    //
    _o25(sdk::unknown_ptr) nv_me_queues_re_init;
    
    // [NVMeReConfigAsyncEventCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19120, 0x1011 bytes
    // stornvme.sys .text:0x21ab0, 0x12e9 bytes
    //
    _o26(sdk::unknown_ptr) nv_me_re_config_async_event_completion;
    
    // [NVMeReenumerateCompareAndMerge]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19148, 0x1011 bytes
    // stornvme.sys .text:0x21b58, 0x12e9 bytes
    //
    _o27(sdk::unknown_ptr) nv_me_reenumerate_compare_and_merge;
    
    // [NVMeReenumerateNameSpaceIdentify]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1963c, 0x1011 bytes
    // stornvme.sys .text:0x220c8, 0x12e9 bytes
    //
    _o28(sdk::unknown_ptr) nv_me_reenumerate_name_space_identify;
    
    // [NVMeReenumerateNameSpaceIdentifyCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19880, 0x1011 bytes
    // stornvme.sys .text:0x22310, 0x12e9 bytes
    //
    _o29(sdk::unknown_ptr) nv_me_reenumerate_name_space_identify_completion;
    
    // [NVMeReenumerateNameSpaceStart]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19b60, 0x1011 bytes
    // stornvme.sys .text:0x22548, 0x12e9 bytes
    //
    _o30(sdk::unknown_ptr) nv_me_reenumerate_name_space_start;
    
    // [NVMeRegisterThrottling]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13bb8, 0x1011 bytes
    // stornvme.sys .text:0x5c90, 0x12e9 bytes
    //
    _o31(sdk::unknown_ptr) nv_me_register_throttling;
    
    // [NVMeRequestComplete]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf3f0, 0x1011 bytes
    // stornvme.sys .text:0x180f8, 0x12e9 bytes
    //
    _o32(sdk::unknown_ptr) nv_me_request_complete;
    
    // [NVMeReservedCompletionQueueCreate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19be0, 0x1011 bytes
    // stornvme.sys .text:0x225cc, 0x12e9 bytes
    //
    _o33(sdk::unknown_ptr) nv_me_reserved_completion_queue_create;
    
    // [NVMeReservedSubmissionQueueCreate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x19f54, 0x1011 bytes
    // stornvme.sys .text:0x22974, 0x12e9 bytes
    //
    _o34(sdk::unknown_ptr) nv_me_reserved_submission_queue_create;
    
    // [NVMeSetArbitration]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a2b8, 0x1011 bytes
    // stornvme.sys .text:0x8818, 0x12e9 bytes
    //
    _o35(sdk::unknown_ptr) nv_me_set_arbitration;
    
    // [NVMeSetAutoPowerStateTransition]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a3d8, 0x1011 bytes
    // stornvme.sys .text:0x22eec, 0x12e9 bytes
    //
    _o36(sdk::unknown_ptr) nv_me_set_auto_power_state_transition;
    
    // [NVMeSetFStateIdleTimer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf498, 0x1011 bytes
    // stornvme.sys .text:0x181a0, 0x12e9 bytes
    //
    _o37(sdk::unknown_ptr) nv_me_set_f_state_idle_timer;
    
    // [NVMeSetHostMemoryBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a4c0, 0x1011 bytes
    // stornvme.sys .text:0x22fd4, 0x12e9 bytes
    //
    _o38(sdk::unknown_ptr) nv_me_set_host_memory_buffer;
    
    // [NVMeSetInterruptCoalescing]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a678, 0x1011 bytes
    // stornvme.sys .text:0x8704, 0x12e9 bytes
    //
    _o39(sdk::unknown_ptr) nv_me_set_interrupt_coalescing;
    
    // [NVMeSetIoQueueCount]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a78c, 0x1011 bytes
    // stornvme.sys .text:0x8444, 0x12e9 bytes
    //
    _o40(sdk::unknown_ptr) nv_me_set_io_queue_count;
    
    // [NVMeSetIoQueueCountCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1a930, 0x1011 bytes
    // stornvme.sys .text:0xd5e0, 0x12e9 bytes
    //
    _o41(sdk::unknown_ptr) nv_me_set_io_queue_count_completion;
    
    // [NVMeSetNonOperationalPowerStatePermissiveMode]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1aba4, 0x1011 bytes
    // stornvme.sys .text:0x2318c, 0x12e9 bytes
    //
    _o42(sdk::unknown_ptr) nv_me_set_non_operational_power_state_permissive_mode;
    
    // [NVMeSetNonOperationalPowerStatePermissiveModeCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1acb0, 0x1011 bytes
    // stornvme.sys .text:0x232c0, 0x12e9 bytes
    //
    _o43(sdk::unknown_ptr) nv_me_set_non_operational_power_state_permissive_mode_completion;
    
    // [NVMeSetPowerState]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1ad64, 0x1011 bytes
    // stornvme.sys .text:0x9844, 0x12e9 bytes
    //
    _o44(sdk::unknown_ptr) nv_me_set_power_state;
    
    // [NVMeSetSenseData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1aef8, 0x1011 bytes
    // stornvme.sys .text:0xd990, 0x12e9 bytes
    //
    _o45(sdk::unknown_ptr) nv_me_set_sense_data;
    
    // [NVMeSplitIoCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13d8c, 0x1011 bytes
    // stornvme.sys .text:0x11e4, 0x12e9 bytes
    //
    _o46(sdk::unknown_ptr) nv_me_split_io_command;
    
    // [NVMeSplitIoCommandCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x13e90, 0x1011 bytes
    // stornvme.sys .text:0x1010, 0x12e9 bytes
    //
    _o47(sdk::unknown_ptr) nv_me_split_io_command_completion;
    
    // [NVMeStartAsyncEventCommands]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf558, 0x1011 bytes
    // stornvme.sys .text:0x8c98, 0x12e9 bytes
    //
    _o48(sdk::unknown_ptr) nv_me_start_async_event_commands;
    
    // [NVMeSubmissionQueueInit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf5dc, 0x1011 bytes
    // stornvme.sys .text:0x7ef4, 0x12e9 bytes
    //
    _o49(sdk::unknown_ptr) nv_me_submission_queue_init;
    
    // [NVMeSyncHostTime]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1afd8, 0x1011 bytes
    // stornvme.sys .text:0x2337c, 0x12e9 bytes
    //
    _o50(sdk::unknown_ptr) nv_me_sync_host_time;
    
    // [NVMeSystemPowerHint]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf6f0, 0x1011 bytes
    // stornvme.sys .text:0x18270, 0x12e9 bytes
    //
    _o51(sdk::unknown_ptr) nv_me_system_power_hint;
    
    // [NVMeUpdateResumeLatencyTolerance]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf7b4, 0x1011 bytes
    // stornvme.sys .text:0xaa84, 0x12e9 bytes
    //
    _o52(sdk::unknown_ptr) nv_me_update_resume_latency_tolerance;
    
    // [NVMeValidatePowerStates]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf850, 0x1011 bytes
    // stornvme.sys .text:0x9d4c, 0x12e9 bytes
    //
    _o53(sdk::unknown_ptr) nv_me_validate_power_states;
    
    // [NVMeValidateProtocolCommandRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14090, 0x1011 bytes
    // stornvme.sys .text:0x1d4e0, 0x12e9 bytes
    //
    _o54(sdk::unknown_ptr) nv_me_validate_protocol_command_request;
    
    // [NVMeVersionCheck]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b194, 0x1011 bytes
    // stornvme.sys .text:0x23538, 0x12e9 bytes
    //
    _o55(sdk::unknown_ptr) nv_me_version_check;
    
    // [NVMeWriteBufferFirmwareActivate]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14280, 0x1011 bytes
    // stornvme.sys .text:0x1d6cc, 0x12e9 bytes
    //
    _o56(sdk::unknown_ptr) nv_me_write_buffer_firmware_activate;
    
    // [NVMeWriteBufferFirmwareActivateCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14380, 0x1011 bytes
    // stornvme.sys .text:0x1d7d0, 0x12e9 bytes
    //
    _o57(sdk::unknown_ptr) nv_me_write_buffer_firmware_activate_completion;
    
    // [NVMeWriteBufferFirmwareActivateCompletionAfterReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14530, 0x1011 bytes
    // stornvme.sys .text:0x1d980, 0x12e9 bytes
    //
    _o58(sdk::unknown_ptr) nv_me_write_buffer_firmware_activate_completion_after_reset;
    
    // [NVMeWriteBufferFirmwareDownload]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1456c, 0x1011 bytes
    // stornvme.sys .text:0x1d9bc, 0x12e9 bytes
    //
    _o59(sdk::unknown_ptr) nv_me_write_buffer_firmware_download;
    
    // [NVMeWriteBufferFirmwareDownloadCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14790, 0x1011 bytes
    // stornvme.sys .text:0x1dbe0, 0x12e9 bytes
    //
    _o60(sdk::unknown_ptr) nv_me_write_buffer_firmware_download_completion;
    
    // [NVMeZeroMemory]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x44e0, 0x1011 bytes
    // stornvme.sys .text:0x4ae0, 0x12e9 bytes
    //
    _o61(sdk::unknown_ptr) nv_me_zero_memory;
    
    // [NvmSubsystemReset]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf8f8, 0x1011 bytes
    // stornvme.sys .text:0x18300, 0x12e9 bytes
    //
    _o62(sdk::unknown_ptr) nvm_subsystem_reset;
    
    // [ProcessCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x2084, 0x1011 bytes
    // stornvme.sys .text:0x3608, 0x12e9 bytes
    //
    _o63(sdk::unknown_ptr) process_command;
    
    // [ProcessCommandInSpecificQueue]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x29b0, 0x1011 bytes
    // stornvme.sys .text:0x3860, 0x12e9 bytes
    //
    _o64(sdk::unknown_ptr) process_command_in_specific_queue;
    
    // [ProcessCommandTrace]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x2da0, 0x1011 bytes
    // stornvme.sys .text:0x3c60, 0x12e9 bytes
    //
    _o65(sdk::unknown_ptr) process_command_trace;
    
    // [ProcessCompletionQueues]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b1bc, 0x1011 bytes
    // stornvme.sys .text:0x1840, 0x12e9 bytes
    //
    _o66(sdk::unknown_ptr) process_completion_queues;
    
    // [ProcessMultipleCommands]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b3d0, 0x1011 bytes
    // stornvme.sys .text:0x23560, 0x12e9 bytes
    //
    _o67(sdk::unknown_ptr) process_multiple_commands;
    
    // [ProcessMultipleCommandsInSpecificQueue]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b490, 0x1011 bytes
    // stornvme.sys .text:0x23620, 0x12e9 bytes
    //
    _o68(sdk::unknown_ptr) process_multiple_commands_in_specific_queue;
    
    // [ProcessNvmeHealthInfoLog]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x35c0, 0x1011 bytes
    // stornvme.sys .text:0x3114, 0x12e9 bytes
    //
    _o69(sdk::unknown_ptr) process_nvme_health_info_log;
    
    // [ProtocolCommandCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14800, 0x1011 bytes
    // stornvme.sys .text:0x1dc50, 0x12e9 bytes
    //
    _o70(sdk::unknown_ptr) protocol_command_completion;
    
    // [ProtocolCommandToNVMe]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x149a4, 0x1011 bytes
    // stornvme.sys .text:0x1ddf4, 0x12e9 bytes
    //
    _o71(sdk::unknown_ptr) protocol_command_to_nv_me;
    
    // [QueryEnduranceInfoLogCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14c50, 0x1011 bytes
    // stornvme.sys .text:0x1e0a0, 0x12e9 bytes
    //
    _o72(sdk::unknown_ptr) query_endurance_info_log_completion;
    
    // [QueryProtocolInfoFeatureData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x14d34, 0x1011 bytes
    // stornvme.sys .text:0x1e184, 0x12e9 bytes
    //
    _o73(sdk::unknown_ptr) query_protocol_info_feature_data;
    
    // [QueryTemperatureInfoHealthLogCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15100, 0x1011 bytes
    // stornvme.sys .text:0x1e680, 0x12e9 bytes
    //
    _o74(sdk::unknown_ptr) query_temperature_info_health_log_completion;
    
    // [QueryTemperatureThresholdCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x152c0, 0x1011 bytes
    // stornvme.sys .text:0x1e860, 0x12e9 bytes
    //
    _o75(sdk::unknown_ptr) query_temperature_threshold_completion;
    
    // [RecordCommandTimingHistory]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b7b0, 0x1011 bytes
    // stornvme.sys .text:0x23c64, 0x12e9 bytes
    //
    _o76(sdk::unknown_ptr) record_command_timing_history;
    
    // [RequestPendingCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x49f0, 0x1011 bytes
    // stornvme.sys .text:0x17a0, 0x12e9 bytes
    //
    _o77(sdk::unknown_ptr) request_pending_completion;
    
    // [ScsiInquiryRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1254, 0x1011 bytes
    // stornvme.sys .text:0x51e4, 0x12e9 bytes
    //
    _o78(sdk::unknown_ptr) scsi_inquiry_request;
    
    // [ScsiLogSenseRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1543c, 0x1011 bytes
    // stornvme.sys .text:0x1e9ec, 0x12e9 bytes
    //
    _o79(sdk::unknown_ptr) scsi_log_sense_request;
    
    // [ScsiModeSelectRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x154c8, 0x1011 bytes
    // stornvme.sys .text:0x1ea78, 0x12e9 bytes
    //
    _o80(sdk::unknown_ptr) scsi_mode_select_request;
    
    // [ScsiModeSenseRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1e0c, 0x1011 bytes
    // stornvme.sys .text:0x2f9c, 0x12e9 bytes
    //
    _o81(sdk::unknown_ptr) scsi_mode_sense_request;
    
    // [ScsiReadCapacityRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x3858, 0x1011 bytes
    // stornvme.sys .text:0x340c, 0x12e9 bytes
    //
    _o82(sdk::unknown_ptr) scsi_read_capacity_request;
    
    // [ScsiReportLunsCommand]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15698, 0x1011 bytes
    // stornvme.sys .text:0x5f64, 0x12e9 bytes
    //
    _o83(sdk::unknown_ptr) scsi_report_luns_command;
    
    // [ScsiSanitizeRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15774, 0x1011 bytes
    // stornvme.sys .text:0x1eef4, 0x12e9 bytes
    //
    _o84(sdk::unknown_ptr) scsi_sanitize_request;
    
    // [ScsiSecurityProtocolInRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1590c, 0x1011 bytes
    // stornvme.sys .text:0xd4dc, 0x12e9 bytes
    //
    _o85(sdk::unknown_ptr) scsi_security_protocol_in_request;
    
    // [ScsiSecurityProtocolOutRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15a14, 0x1011 bytes
    // stornvme.sys .text:0x1f15c, 0x12e9 bytes
    //
    _o86(sdk::unknown_ptr) scsi_security_protocol_out_request;
    
    // [ScsiStartStopUnitRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15b1c, 0x1011 bytes
    // stornvme.sys .text:0x1f268, 0x12e9 bytes
    //
    _o87(sdk::unknown_ptr) scsi_start_stop_unit_request;
    
    // [ScsiSyncCacheRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x42b8, 0x1011 bytes
    // stornvme.sys .text:0x4b1c, 0x12e9 bytes
    //
    _o88(sdk::unknown_ptr) scsi_sync_cache_request;
    
    // [ScsiToNVMe]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x3a60, 0x1011 bytes
    // stornvme.sys .text:0x4150, 0x12e9 bytes
    //
    _o89(sdk::unknown_ptr) scsi_to_nv_me;
    
    // [ScsiUnmapRequest]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1c54, 0x1011 bytes
    // stornvme.sys .text:0x2b88, 0x12e9 bytes
    //
    _o90(sdk::unknown_ptr) scsi_unmap_request;
    
    // [SerialNumberFromNvmeId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15bfc, 0x1011 bytes
    // stornvme.sys .text:0xd02c, 0x12e9 bytes
    //
    _o91(sdk::unknown_ptr) serial_number_from_nvme_id;
    
    // [SetProtocolInfoCompletion]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15cb0, 0x1011 bytes
    // stornvme.sys .text:0x1f350, 0x12e9 bytes
    //
    _o92(sdk::unknown_ptr) set_protocol_info_completion;
    
    // [SetProtocolInfoFeatureData]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15d6c, 0x1011 bytes
    // stornvme.sys .text:0x1f40c, 0x12e9 bytes
    //
    _o93(sdk::unknown_ptr) set_protocol_info_feature_data;
    
    // [SetPrpFromBuffer]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x202c, 0x1011 bytes
    // stornvme.sys .text:0x4f1c, 0x12e9 bytes
    //
    _o94(sdk::unknown_ptr) set_prp_from_buffer;
    
    // [SetPrpFromSrb]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1ae8, 0x1011 bytes
    // stornvme.sys .text:0x29e8, 0x12e9 bytes
    //
    _o95(sdk::unknown_ptr) set_prp_from_srb;
    
    // [SglToPrp]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x15e7c, 0x1011 bytes
    // stornvme.sys .text:0x1f694, 0x12e9 bytes
    //
    _o96(sdk::unknown_ptr) sgl_to_prp;
    
    // [SrbAssignCommandId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1b9b0, 0x1011 bytes
    // stornvme.sys .text:0x23e64, 0x12e9 bytes
    //
    _o97(sdk::unknown_ptr) srb_assign_command_id;
    
    // [SrbAssignQueueId]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x4370, 0x1011 bytes
    // stornvme.sys .text:0x4c18, 0x12e9 bytes
    //
    _o98(sdk::unknown_ptr) srb_assign_queue_id;
    
    // [SubmissionQueueReInit]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0xf930, 0x1011 bytes
    // stornvme.sys .text:0x18344, 0x12e9 bytes
    //
    _o99(sdk::unknown_ptr) submission_queue_re_init;
    
    // [TemperatureFromKelvinToCelsius]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1605c, 0x1011 bytes
    // stornvme.sys .text:0x1f850, 0x12e9 bytes
    //
    _p00(sdk::unknown_ptr) temperature_from_kelvin_to_celsius;
    
    // [WaitForCommandCompleteWithCustomTimeout]
    // Ldr = [stornvme.sys]
    // => Windows 10 v2004, Windows 11
    // stornvme.sys .text:0x1bb0c, 0x1011 bytes
    // stornvme.sys .text:0x999c, 0x12e9 bytes
    //
    _p01(sdk::unknown_ptr) wait_for_command_complete_with_custom_timeout;
};
#include "magic/api.end.hpp"
