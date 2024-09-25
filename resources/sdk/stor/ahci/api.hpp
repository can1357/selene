#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace stor::ahci
{
    // [AtaGetDeviceInternalStatusData]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x1bc44, 0x1125 bytes
    //
    _m0(sdk::unknown_ptr) ata_get_device_internal_status_data;
    
    // [AtaGetDeviceInternalStatusDataCompletion]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x1bee0, 0x1125 bytes
    //
    _m1(sdk::unknown_ptr) ata_get_device_internal_status_data_completion;
    
    // [AtaReadWriteRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x5180, 0x847 bytes
    //
    _m2(sdk::unknown_ptr) ata_read_write_request;
    
    // [AtaSanitizeBlockErase]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x1db9c, 0x1125 bytes
    //
    _m3(sdk::unknown_ptr) ata_sanitize_block_erase;
    
    // [AtaSanitizeBlockEraseCompletion]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x1dc90, 0x1125 bytes
    //
    _m4(sdk::unknown_ptr) ata_sanitize_block_erase_completion;
    
    // [AtaSanitizeStatusClearFailureCompletion]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x1dee0, 0x1125 bytes
    //
    _m5(sdk::unknown_ptr) ata_sanitize_status_clear_failure_completion;
    
    // [GetAvailableSlot]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x5be0, 0x847 bytes
    //
    _m6(sdk::unknown_ptr) get_available_slot;
    
    // [IsAdapterRemoved]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x11ba0, 0x847 bytes
    //
    _m7(sdk::unknown_ptr) is_adapter_removed;
    
    // [IsReceivingSystemPowerHints]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x11bb4, 0x847 bytes
    //
    _m8(sdk::unknown_ptr) is_receiving_system_power_hints;
    
    // [SCSItoATA]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x6470, 0x847 bytes
    //
    _m9(sdk::unknown_ptr) scs_ito_ata;
    
    // [Support48Bit]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x54a0, 0x847 bytes
    //
    _n0(sdk::unknown_ptr) support48_bit;
    
    // [AtaGetDeviceCurrentInternalStatusData]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storahci.sys .text:0x1b350, 0x116f bytes
    // storahci.sys .text:0x1b350, 0x116f bytes
    //
    _n1(sdk::unknown_ptr) ata_get_device_current_internal_status_data;
    
    // [AtaGetDeviceCurrentInternalStatusDataCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storahci.sys .text:0x1b590, 0x116f bytes
    // storahci.sys .text:0x1b590, 0x116f bytes
    //
    _n2(sdk::unknown_ptr) ata_get_device_current_internal_status_data_completion;
    
    // [g_AhciPortIoFailureCount]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storahci.sys .data:0x2a1a0, 0x116f bytes
    // storahci.sys .data:0x2a1a0, 0x116f bytes
    //
    _n3(sdk::unknown_ptr) g_ahci_port_io_failure_count;
    
    // [g_AhciPortLogIoFailureTimestamp]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storahci.sys .data:0x2a0a0, 0x116f bytes
    // storahci.sys .data:0x2a0a0, 0x116f bytes
    //
    _n4(sdk::unknown_ptr) g_ahci_port_log_io_failure_timestamp;
    
    // [AtaCloseZoneRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1ad04, 0x116f bytes
    // storahci.sys .text:0x1b1e4, 0x1125 bytes
    // storahci.sys .text:0x1ad04, 0x116f bytes
    //
    _n5(sdk::unknown_ptr) ata_close_zone_request;
    
    // [AtaFinishZoneRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1ae20, 0x116f bytes
    // storahci.sys .text:0x1b300, 0x1125 bytes
    // storahci.sys .text:0x1ae20, 0x116f bytes
    //
    _n6(sdk::unknown_ptr) ata_finish_zone_request;
    
    // [AtaFirmwareDownloadCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1b0c0, 0x116f bytes
    // storahci.sys .text:0x1b5c0, 0x1125 bytes
    // storahci.sys .text:0x1b0c0, 0x116f bytes
    //
    _n7(sdk::unknown_ptr) ata_firmware_download_completion;
    
    // [AtaGetDeviceCurrentInternalStatusDataHeader]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1b924, 0x116f bytes
    // storahci.sys .text:0x1b840, 0x1125 bytes
    // storahci.sys .text:0x1b924, 0x116f bytes
    //
    _n8(sdk::unknown_ptr) ata_get_device_current_internal_status_data_header;
    
    // [AtaGetDeviceCurrentInternalStatusDataHeaderCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1b9b0, 0x116f bytes
    // storahci.sys .text:0x1b8d0, 0x1125 bytes
    // storahci.sys .text:0x1b9b0, 0x116f bytes
    //
    _n9(sdk::unknown_ptr) ata_get_device_current_internal_status_data_header_completion;
    
    // [AtaGetPhysicalElementStatusCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1bb90, 0x116f bytes
    // storahci.sys .text:0x1c270, 0x1125 bytes
    // storahci.sys .text:0x1bb90, 0x116f bytes
    //
    _o0(sdk::unknown_ptr) ata_get_physical_element_status_completion;
    
    // [AtaGetPhysicalElementStatusRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1be60, 0x116f bytes
    // storahci.sys .text:0x1c540, 0x1125 bytes
    // storahci.sys .text:0x1be60, 0x116f bytes
    //
    _o1(sdk::unknown_ptr) ata_get_physical_element_status_request;
    
    // [AtaOpenZoneRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1caa4, 0x116f bytes
    // storahci.sys .text:0x1d164, 0x1125 bytes
    // storahci.sys .text:0x1caa4, 0x116f bytes
    //
    _o2(sdk::unknown_ptr) ata_open_zone_request;
    
    // [AtaRemoveElementAndTruncateCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1cdb0, 0x116f bytes
    // storahci.sys .text:0x1d470, 0x1125 bytes
    // storahci.sys .text:0x1cdb0, 0x116f bytes
    //
    _o3(sdk::unknown_ptr) ata_remove_element_and_truncate_completion;
    
    // [AtaRemoveElementAndTruncateRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1ceb8, 0x116f bytes
    // storahci.sys .text:0x1d578, 0x1125 bytes
    // storahci.sys .text:0x1ceb8, 0x116f bytes
    //
    _o4(sdk::unknown_ptr) ata_remove_element_and_truncate_request;
    
    // [AtaReportZonesRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1d044, 0x116f bytes
    // storahci.sys .text:0x1d708, 0x1125 bytes
    // storahci.sys .text:0x1d044, 0x116f bytes
    //
    _o5(sdk::unknown_ptr) ata_report_zones_request;
    
    // [AtaReportZonesRequestCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1d1d0, 0x116f bytes
    // storahci.sys .text:0x1d890, 0x1125 bytes
    // storahci.sys .text:0x1d1d0, 0x116f bytes
    //
    _o6(sdk::unknown_ptr) ata_report_zones_request_completion;
    
    // [AtaResetWritePointerRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1d3c0, 0x116f bytes
    // storahci.sys .text:0x1da80, 0x1125 bytes
    // storahci.sys .text:0x1d3c0, 0x116f bytes
    //
    _o7(sdk::unknown_ptr) ata_reset_write_pointer_request;
    
    // [BuildHybridEvictCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1e81c, 0x116f bytes
    // storahci.sys .text:0x1f0d0, 0x1125 bytes
    // storahci.sys .text:0x1e81c, 0x116f bytes
    //
    _o8(sdk::unknown_ptr) build_hybrid_evict_command;
    
    // [FillAtaCommandErrorStruct]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x188ec, 0x116f bytes
    // storahci.sys .text:0x18b94, 0x1125 bytes
    // storahci.sys .text:0x188ec, 0x116f bytes
    //
    _o9(sdk::unknown_ptr) fill_ata_command_error_struct;
    
    // [g_AhciThrottledAdapterEtwEventIds]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .rdata:0x26f10, 0x116f bytes
    // storahci.sys .rdata:0x262d0, 0x1125 bytes
    // storahci.sys .rdata:0x26f10, 0x116f bytes
    //
    _p0(sdk::unknown_ptr) g_ahci_throttled_adapter_etw_event_ids;
    
    // [g_AhciThrottledUnitEtwEventIds]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .rdata:0x26f20, 0x116f bytes
    // storahci.sys .rdata:0x262e0, 0x1125 bytes
    // storahci.sys .rdata:0x26f20, 0x116f bytes
    //
    _p1(sdk::unknown_ptr) g_ahci_throttled_unit_etw_event_ids;
    
    // [GetDownloadMicrocodeSupport]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x156f0, 0x116f bytes
    // storahci.sys .text:0x134a0, 0x1125 bytes
    // storahci.sys .text:0x156f0, 0x116f bytes
    //
    _p2(sdk::unknown_ptr) get_download_microcode_support;
    
    // [GetDownloadMicrocodeSupportCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15800, 0x116f bytes
    // storahci.sys .text:0x135b0, 0x1125 bytes
    // storahci.sys .text:0x15800, 0x116f bytes
    //
    _p3(sdk::unknown_ptr) get_download_microcode_support_completion;
    
    // [GUID_DIAGNOSTIC_PROVIDER_STORAHCI]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .rdata:0x258e0, 0x116f bytes
    // storahci.sys .rdata:0x25140, 0x1125 bytes
    // storahci.sys .rdata:0x258e0, 0x116f bytes
    //
    _p4(sdk::unknown_ptr) guid_diagnostic_provider_storahci;
    
    // [IsAtaDevice]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3c5c, 0x116f bytes
    // storahci.sys .text:0x27bc, 0x1125 bytes
    // storahci.sys .text:0x3c5c, 0x116f bytes
    //
    _p5(sdk::unknown_ptr) is_ata_device;
    
    // [IsExternalPort]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15c00, 0x116f bytes
    // storahci.sys .text:0x139b0, 0x1125 bytes
    // storahci.sys .text:0x15c00, 0x116f bytes
    //
    _p6(sdk::unknown_ptr) is_external_port;
    
    // [IsFirmwareUpdateSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x21634, 0x116f bytes
    // storahci.sys .text:0x21d3c, 0x1125 bytes
    // storahci.sys .text:0x21634, 0x116f bytes
    //
    _p7(sdk::unknown_ptr) is_firmware_update_supported;
    
    // [IsThereIoOutstandingInDevice]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a2c0, 0x116f bytes
    // storahci.sys .text:0x1a60c, 0x1125 bytes
    // storahci.sys .text:0x1a2c0, 0x116f bytes
    //
    _p8(sdk::unknown_ptr) is_there_io_outstanding_in_device;
    
    // [PreserveLogPageInformation]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16908, 0x116f bytes
    // storahci.sys .text:0x1483c, 0x1125 bytes
    // storahci.sys .text:0x16908, 0x116f bytes
    //
    _p9(sdk::unknown_ptr) preserve_log_page_information;
    
    // [UpdateDeviceType]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16cc4, 0x116f bytes
    // storahci.sys .text:0x14be4, 0x1125 bytes
    // storahci.sys .text:0x16cc4, 0x116f bytes
    //
    _q0(sdk::unknown_ptr) update_device_type;
    
    // [UpdateDownloadMicrocodeSupport]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16d14, 0x116f bytes
    // storahci.sys .text:0x14c34, 0x1125 bytes
    // storahci.sys .text:0x16d14, 0x116f bytes
    //
    _q1(sdk::unknown_ptr) update_download_microcode_support;
    
    // [UpdateFirmwareIoctlReturnCode]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x22fc0, 0x116f bytes
    // storahci.sys .text:0x234ac, 0x1125 bytes
    // storahci.sys .text:0x22fc0, 0x116f bytes
    //
    _q2(sdk::unknown_ptr) update_firmware_ioctl_return_code;
    
    // [ActivateQueue]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x75a0, 0x847 bytes
    // storahci.sys .text:0x5570, 0x116f bytes
    // storahci.sys .text:0x3f00, 0x1125 bytes
    // storahci.sys .text:0x5570, 0x116f bytes
    //
    _q3(sdk::unknown_ptr) activate_queue;
    
    // [AdapterAcquireActiveReference]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11418, 0x847 bytes
    // storahci.sys .text:0xfd24, 0x116f bytes
    // storahci.sys .text:0xe2e0, 0x1125 bytes
    // storahci.sys .text:0xfd24, 0x116f bytes
    //
    _q4(sdk::unknown_ptr) adapter_acquire_active_reference;
    
    // [AdapterProcessIOCTL]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14b6c, 0x847 bytes
    // storahci.sys .text:0x1008, 0x116f bytes
    // storahci.sys .text:0x10f8, 0x1125 bytes
    // storahci.sys .text:0x1008, 0x116f bytes
    //
    _q5(sdk::unknown_ptr) adapter_process_ioctl;
    
    // [AdapterStop]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11478, 0x847 bytes
    // storahci.sys .text:0xfd94, 0x116f bytes
    // storahci.sys .text:0xe350, 0x1125 bytes
    // storahci.sys .text:0xfd94, 0x116f bytes
    //
    _q6(sdk::unknown_ptr) adapter_stop;
    
    // [AddQueue]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x69f0, 0x847 bytes
    // storahci.sys .text:0x6d30, 0x116f bytes
    // storahci.sys .text:0x5558, 0x1125 bytes
    // storahci.sys .text:0x6d30, 0x116f bytes
    //
    _q7(sdk::unknown_ptr) add_queue;
    
    // [AllocateResourcesForAdapter]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8ea8, 0x847 bytes
    // storahci.sys .text:0x119d0, 0x116f bytes
    // storahci.sys .text:0xff60, 0x1125 bytes
    // storahci.sys .text:0x119d0, 0x116f bytes
    //
    _q8(sdk::unknown_ptr) allocate_resources_for_adapter;
    
    // [AtaAlwaysSuccessRequestCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb9a0, 0x847 bytes
    // storahci.sys .text:0x8e90, 0x116f bytes
    // storahci.sys .text:0x6db0, 0x1125 bytes
    // storahci.sys .text:0x8e90, 0x116f bytes
    //
    _q9(sdk::unknown_ptr) ata_always_success_request_completion;
    
    // [AtaFirmwareActivateCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14d00, 0x847 bytes
    // storahci.sys .text:0x1af40, 0x116f bytes
    // storahci.sys .text:0x1b420, 0x1125 bytes
    // storahci.sys .text:0x1af40, 0x116f bytes
    //
    _r0(sdk::unknown_ptr) ata_firmware_activate_completion;
    
    // [AtaFlushCommandRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x33e0, 0x847 bytes
    // storahci.sys .text:0x3bdc, 0x116f bytes
    // storahci.sys .text:0x273c, 0x1125 bytes
    // storahci.sys .text:0x3bdc, 0x116f bytes
    //
    _r1(sdk::unknown_ptr) ata_flush_command_request;
    
    // [AtaGenerateInquiryData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x88b8, 0x847 bytes
    // storahci.sys .text:0x1b230, 0x116f bytes
    // storahci.sys .text:0x1b730, 0x1125 bytes
    // storahci.sys .text:0x1b230, 0x116f bytes
    //
    _r2(sdk::unknown_ptr) ata_generate_inquiry_data;
    
    // [AtaInitModePageHeaderWrapper]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2b20, 0x847 bytes
    // storahci.sys .text:0x6f58, 0x116f bytes
    // storahci.sys .text:0x5718, 0x1125 bytes
    // storahci.sys .text:0x6f58, 0x116f bytes
    //
    _r3(sdk::unknown_ptr) ata_init_mode_page_header_wrapper;
    
    // [AtaInquiryRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6df0, 0x847 bytes
    // storahci.sys .text:0x1c080, 0x116f bytes
    // storahci.sys .text:0x1c760, 0x1125 bytes
    // storahci.sys .text:0x1c080, 0x116f bytes
    //
    _r4(sdk::unknown_ptr) ata_inquiry_request;
    
    // [AtaMapError]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x4480, 0x847 bytes
    // storahci.sys .text:0x5180, 0x116f bytes
    // storahci.sys .text:0x3be0, 0x1125 bytes
    // storahci.sys .text:0x5180, 0x116f bytes
    //
    _r5(sdk::unknown_ptr) ata_map_error;
    
    // [AtaMediumRemovalRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14d0c, 0x847 bytes
    // storahci.sys .text:0x1c8e0, 0x116f bytes
    // storahci.sys .text:0x1cfa0, 0x1125 bytes
    // storahci.sys .text:0x1c8e0, 0x116f bytes
    //
    _r6(sdk::unknown_ptr) ata_medium_removal_request;
    
    // [AtaModeSelectRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14d68, 0x847 bytes
    // storahci.sys .text:0x1c94c, 0x116f bytes
    // storahci.sys .text:0x1d00c, 0x1125 bytes
    // storahci.sys .text:0x1c94c, 0x116f bytes
    //
    _r7(sdk::unknown_ptr) ata_mode_select_request;
    
    // [AtaModeSenseRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7208, 0x847 bytes
    // storahci.sys .text:0x3970, 0x116f bytes
    // storahci.sys .text:0x24d0, 0x1125 bytes
    // storahci.sys .text:0x3970, 0x116f bytes
    //
    _r8(sdk::unknown_ptr) ata_mode_sense_request;
    
    // [AtaModeSenseRequestCompletionMediaStatus]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14e60, 0x847 bytes
    // storahci.sys .text:0x1ca50, 0x116f bytes
    // storahci.sys .text:0x1d110, 0x1125 bytes
    // storahci.sys .text:0x1ca50, 0x116f bytes
    //
    _r9(sdk::unknown_ptr) ata_mode_sense_request_completion_media_status;
    
    // [AtaModeSenseRequestCompletionWriteCache]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2a30, 0x847 bytes
    // storahci.sys .text:0x3af0, 0x116f bytes
    // storahci.sys .text:0x2650, 0x1125 bytes
    // storahci.sys .text:0x3af0, 0x116f bytes
    //
    _s0(sdk::unknown_ptr) ata_mode_sense_request_completion_write_cache;
    
    // [AtaPassThroughRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14eb4, 0x847 bytes
    // storahci.sys .text:0x8374, 0x116f bytes
    // storahci.sys .text:0x6390, 0x1125 bytes
    // storahci.sys .text:0x8374, 0x116f bytes
    //
    _s1(sdk::unknown_ptr) ata_pass_through_request;
    
    // [AtaPassThroughRequestCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14ff0, 0x847 bytes
    // storahci.sys .text:0x8eb0, 0x116f bytes
    // storahci.sys .text:0x6dd0, 0x1125 bytes
    // storahci.sys .text:0x8eb0, 0x116f bytes
    //
    _s2(sdk::unknown_ptr) ata_pass_through_request_completion;
    
    // [AtaPollSanitizeStatusTimer]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15150, 0x847 bytes
    // storahci.sys .text:0x1cbc0, 0x116f bytes
    // storahci.sys .text:0x1d280, 0x1125 bytes
    // storahci.sys .text:0x1cbc0, 0x116f bytes
    //
    _s3(sdk::unknown_ptr) ata_poll_sanitize_status_timer;
    
    // [AtaReadCapacityCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x27f4, 0x847 bytes
    // storahci.sys .text:0x3cdc, 0x116f bytes
    // storahci.sys .text:0x283c, 0x1125 bytes
    // storahci.sys .text:0x3cdc, 0x116f bytes
    //
    _s4(sdk::unknown_ptr) ata_read_capacity_completion;
    
    // [AtaReadCapacityRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2784, 0x847 bytes
    // storahci.sys .text:0x3c80, 0x116f bytes
    // storahci.sys .text:0x27e0, 0x1125 bytes
    // storahci.sys .text:0x3c80, 0x116f bytes
    //
    _s5(sdk::unknown_ptr) ata_read_capacity_request;
    
    // [AtaReadCapacityRequestCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15200, 0x847 bytes
    // storahci.sys .text:0x1cc70, 0x116f bytes
    // storahci.sys .text:0x1d330, 0x1125 bytes
    // storahci.sys .text:0x1cc70, 0x116f bytes
    //
    _s6(sdk::unknown_ptr) ata_read_capacity_request_completion;
    
    // [AtaReportLunsCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb58c, 0x847 bytes
    // storahci.sys .text:0x1cff4, 0x116f bytes
    // storahci.sys .text:0x1d6b8, 0x1125 bytes
    // storahci.sys .text:0x1cff4, 0x116f bytes
    //
    _s7(sdk::unknown_ptr) ata_report_luns_command;
    
    // [AtaSanitizeCryptoErase]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15334, 0x847 bytes
    // storahci.sys .text:0x1d4dc, 0x116f bytes
    // storahci.sys .text:0x1dd4c, 0x1125 bytes
    // storahci.sys .text:0x1d4dc, 0x116f bytes
    //
    _s8(sdk::unknown_ptr) ata_sanitize_crypto_erase;
    
    // [AtaSanitizeCryptoEraseCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x153a0, 0x847 bytes
    // storahci.sys .text:0x1d550, 0x116f bytes
    // storahci.sys .text:0x1dc90, 0x1125 bytes
    // storahci.sys .text:0x1d550, 0x116f bytes
    //
    _s9(sdk::unknown_ptr) ata_sanitize_crypto_erase_completion;
    
    // [AtaSanitizeRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1543c, 0x847 bytes
    // storahci.sys .text:0x1d5f8, 0x116f bytes
    // storahci.sys .text:0x1de3c, 0x1125 bytes
    // storahci.sys .text:0x1d5f8, 0x116f bytes
    //
    _t0(sdk::unknown_ptr) ata_sanitize_request;
    
    // [AtaSanitizeStatusCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x154a0, 0x847 bytes
    // storahci.sys .text:0x1d660, 0x116f bytes
    // storahci.sys .text:0x1dfa0, 0x1125 bytes
    // storahci.sys .text:0x1d660, 0x116f bytes
    //
    _t1(sdk::unknown_ptr) ata_sanitize_status_completion;
    
    // [AtaSecurityProtocolRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15688, 0x847 bytes
    // storahci.sys .text:0x1d848, 0x116f bytes
    // storahci.sys .text:0x1e13c, 0x1125 bytes
    // storahci.sys .text:0x1d848, 0x116f bytes
    //
    _t2(sdk::unknown_ptr) ata_security_protocol_request;
    
    // [AtaSetTaskFileDataRange]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1577c, 0x847 bytes
    // storahci.sys .text:0x1d950, 0x116f bytes
    // storahci.sys .text:0x1e278, 0x1125 bytes
    // storahci.sys .text:0x1d950, 0x116f bytes
    //
    _t3(sdk::unknown_ptr) ata_set_task_file_data_range;
    
    // [AtaStartStopUnitRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15808, 0x847 bytes
    // storahci.sys .text:0x1d9dc, 0x116f bytes
    // storahci.sys .text:0x1e304, 0x1125 bytes
    // storahci.sys .text:0x1d9dc, 0x116f bytes
    //
    _t4(sdk::unknown_ptr) ata_start_stop_unit_request;
    
    // [AtaUnmapRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x158b4, 0x847 bytes
    // storahci.sys .text:0x3528, 0x116f bytes
    // storahci.sys .text:0x2084, 0x1125 bytes
    // storahci.sys .text:0x3528, 0x116f bytes
    //
    _t5(sdk::unknown_ptr) ata_unmap_request;
    
    // [AtaVerifyRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15bb0, 0x847 bytes
    // storahci.sys .text:0x1da8c, 0x116f bytes
    // storahci.sys .text:0x1e3b4, 0x1125 bytes
    // storahci.sys .text:0x1da8c, 0x116f bytes
    //
    _t6(sdk::unknown_ptr) ata_verify_request;
    
    // [AtaWriteBufferFirmwareActivate]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15c88, 0x847 bytes
    // storahci.sys .text:0x1db6c, 0x116f bytes
    // storahci.sys .text:0x1e494, 0x1125 bytes
    // storahci.sys .text:0x1db6c, 0x116f bytes
    //
    _t7(sdk::unknown_ptr) ata_write_buffer_firmware_activate;
    
    // [AtaWriteBufferFirmwareDownload]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15d2c, 0x847 bytes
    // storahci.sys .text:0x1dd70, 0x116f bytes
    // storahci.sys .text:0x1e698, 0x1125 bytes
    // storahci.sys .text:0x1dd70, 0x116f bytes
    //
    _t8(sdk::unknown_ptr) ata_write_buffer_firmware_download;
    
    // [AtaWriteBufferRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15e50, 0x847 bytes
    // storahci.sys .text:0x1dff4, 0x116f bytes
    // storahci.sys .text:0x1e91c, 0x1125 bytes
    // storahci.sys .text:0x1dff4, 0x116f bytes
    //
    _t9(sdk::unknown_ptr) ata_write_buffer_request;
    
    // [AtapiCommonRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15eb8, 0x847 bytes
    // storahci.sys .text:0x1e054, 0x116f bytes
    // storahci.sys .text:0x7ed0, 0x1125 bytes
    // storahci.sys .text:0x1e054, 0x116f bytes
    //
    _u0(sdk::unknown_ptr) atapi_common_request;
    
    // [AtapiInquiryCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15f30, 0x847 bytes
    // storahci.sys .text:0x1e0d0, 0x116f bytes
    // storahci.sys .text:0x1e980, 0x1125 bytes
    // storahci.sys .text:0x1e0d0, 0x116f bytes
    //
    _u1(sdk::unknown_ptr) atapi_inquiry_completion;
    
    // [AtapiModeCommandRequestCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16010, 0x847 bytes
    // storahci.sys .text:0x1e1a0, 0x116f bytes
    // storahci.sys .text:0x1ea50, 0x1125 bytes
    // storahci.sys .text:0x1e1a0, 0x116f bytes
    //
    _u2(sdk::unknown_ptr) atapi_mode_command_request_completion;
    
    // [AtapiModeSelectRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x161c0, 0x847 bytes
    // storahci.sys .text:0x1e384, 0x116f bytes
    // storahci.sys .text:0x1ec38, 0x1125 bytes
    // storahci.sys .text:0x1e384, 0x116f bytes
    //
    _u3(sdk::unknown_ptr) atapi_mode_select_request;
    
    // [AtapiModeSenseRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16484, 0x847 bytes
    // storahci.sys .text:0x1e604, 0x116f bytes
    // storahci.sys .text:0x1eeb8, 0x1125 bytes
    // storahci.sys .text:0x1e604, 0x116f bytes
    //
    _u4(sdk::unknown_ptr) atapi_mode_sense_request;
    
    // [BuildLocalCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7d94, 0x847 bytes
    // storahci.sys .text:0x84a8, 0x116f bytes
    // storahci.sys .text:0x13380, 0x1125 bytes
    // storahci.sys .text:0x84a8, 0x116f bytes
    //
    _u5(sdk::unknown_ptr) build_local_command;
    
    // [BuildReadWriteCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x5220, 0x847 bytes
    // storahci.sys .text:0x6830, 0x116f bytes
    // storahci.sys .text:0x5070, 0x1125 bytes
    // storahci.sys .text:0x6830, 0x116f bytes
    //
    _u6(sdk::unknown_ptr) build_read_write_command;
    
    // [BuildRequestSenseSrb]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14724, 0x847 bytes
    // storahci.sys .text:0x1a768, 0x116f bytes
    // storahci.sys .text:0x1ac74, 0x1125 bytes
    // storahci.sys .text:0x1a768, 0x116f bytes
    //
    _u7(sdk::unknown_ptr) build_request_sense_srb;
    
    // [BuildSanitizeStatusCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x166e0, 0x847 bytes
    // storahci.sys .text:0x1e848, 0x116f bytes
    // storahci.sys .text:0x1f0fc, 0x1125 bytes
    // storahci.sys .text:0x1e848, 0x116f bytes
    //
    _u8(sdk::unknown_ptr) build_sanitize_status_command;
    
    // [BuildSetDateAndTimeTaskFile]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1313c, 0x847 bytes
    // storahci.sys .text:0x15670, 0x116f bytes
    // storahci.sys .text:0x13420, 0x1125 bytes
    // storahci.sys .text:0x15670, 0x116f bytes
    //
    _u9(sdk::unknown_ptr) build_set_date_and_time_task_file;
    
    // [CompareId]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2678, 0x847 bytes
    // storahci.sys .text:0x1084, 0x116f bytes
    // storahci.sys .text:0x1008, 0x1125 bytes
    // storahci.sys .text:0x1084, 0x116f bytes
    //
    _v0(sdk::unknown_ptr) compare_id;
    
    // [ConvertDataSetRangeToAtaLbaRanges]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1673c, 0x847 bytes
    // storahci.sys .text:0x1e8a4, 0x116f bytes
    // storahci.sys .text:0x1f170, 0x1125 bytes
    // storahci.sys .text:0x1e8a4, 0x116f bytes
    //
    _v1(sdk::unknown_ptr) convert_data_set_range_to_ata_lba_ranges;
    
    // [ConvertUnmapBlockDescrToAtaLbaRanges]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x167d4, 0x847 bytes
    // storahci.sys .text:0x72d8, 0x116f bytes
    // storahci.sys .text:0x57a4, 0x1125 bytes
    // storahci.sys .text:0x72d8, 0x116f bytes
    //
    _v2(sdk::unknown_ptr) convert_unmap_block_descr_to_ata_lba_ranges;
    
    // [DeviceDevSlpDETO]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11b20, 0x847 bytes
    // storahci.sys .text:0x11c9c, 0x116f bytes
    // storahci.sys .text:0x10294, 0x1125 bytes
    // storahci.sys .text:0x11c9c, 0x116f bytes
    //
    _v3(sdk::unknown_ptr) device_dev_slp_deto;
    
    // [DeviceDevSlpMDAT]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11b44, 0x847 bytes
    // storahci.sys .text:0x11cbc, 0x116f bytes
    // storahci.sys .text:0x102b4, 0x1125 bytes
    // storahci.sys .text:0x11cbc, 0x116f bytes
    //
    _v4(sdk::unknown_ptr) device_dev_slp_mdat;
    
    // [DeviceIncursNoSeekPenalty]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11b64, 0x847 bytes
    // storahci.sys .text:0x11cdc, 0x116f bytes
    // storahci.sys .text:0x102d4, 0x1125 bytes
    // storahci.sys .text:0x11cdc, 0x116f bytes
    //
    _v5(sdk::unknown_ptr) device_incurs_no_seek_penalty;
    
    // [DeviceIncursSeekPenalty]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8630, 0x847 bytes
    // storahci.sys .text:0x11d14, 0x116f bytes
    // storahci.sys .text:0x1030c, 0x1125 bytes
    // storahci.sys .text:0x11d14, 0x116f bytes
    //
    _v6(sdk::unknown_ptr) device_incurs_seek_penalty;
    
    // [DeviceProcessTrimRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16940, 0x847 bytes
    // storahci.sys .text:0x3770, 0x116f bytes
    // storahci.sys .text:0x22d0, 0x1125 bytes
    // storahci.sys .text:0x3770, 0x116f bytes
    //
    _v7(sdk::unknown_ptr) device_process_trim_request;
    
    // [DiagAllDiagnosticData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a634, 0x847 bytes
    // storahci.sys .text:0x23060, 0x116f bytes
    // storahci.sys .text:0x2354c, 0x1125 bytes
    // storahci.sys .text:0x23060, 0x116f bytes
    //
    _v8(sdk::unknown_ptr) diag_all_diagnostic_data;
    
    // [DiagGeneric]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a900, 0x847 bytes
    // storahci.sys .text:0x232f4, 0x116f bytes
    // storahci.sys .text:0x237f0, 0x1125 bytes
    // storahci.sys .text:0x232f4, 0x116f bytes
    //
    _v9(sdk::unknown_ptr) diag_generic;
    
    // [DigestDeviceRegistrySettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1bb4, 0x847 bytes
    // storahci.sys .text:0x1829c, 0x116f bytes
    // storahci.sys .text:0x184cc, 0x1125 bytes
    // storahci.sys .text:0x1829c, 0x116f bytes
    //
    _w0(sdk::unknown_ptr) digest_device_registry_settings;
    
    // [DsmGeneralIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16b0c, 0x847 bytes
    // storahci.sys .text:0x1e944, 0x116f bytes
    // storahci.sys .text:0x1f210, 0x1125 bytes
    // storahci.sys .text:0x1e944, 0x116f bytes
    //
    _w1(sdk::unknown_ptr) dsm_general_ioctl_process;
    
    // [FillClippedSGL]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x91b8, 0x847 bytes
    // storahci.sys .text:0x7ed4, 0x116f bytes
    // storahci.sys .text:0x19c8, 0x1125 bytes
    // storahci.sys .text:0x7ed4, 0x116f bytes
    //
    _w2(sdk::unknown_ptr) fill_clipped_sgl;
    
    // [FirmwareGetInfo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16ba0, 0x847 bytes
    // storahci.sys .text:0x1e9e4, 0x116f bytes
    // storahci.sys .text:0x1f2b0, 0x1125 bytes
    // storahci.sys .text:0x1e9e4, 0x116f bytes
    //
    _w3(sdk::unknown_ptr) firmware_get_info;
    
    // [FirmwareIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16ca0, 0x847 bytes
    // storahci.sys .text:0x1ebfc, 0x116f bytes
    // storahci.sys .text:0x1f4c8, 0x1125 bytes
    // storahci.sys .text:0x1ebfc, 0x116f bytes
    //
    _w4(sdk::unknown_ptr) firmware_ioctl_process;
    
    // [ForceGenxSpeed]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13950, 0x847 bytes
    // storahci.sys .text:0x16e88, 0x116f bytes
    // storahci.sys .text:0x164f0, 0x1125 bytes
    // storahci.sys .text:0x16e88, 0x116f bytes
    //
    _w5(sdk::unknown_ptr) force_genx_speed;
    
    // [FormatAtaId]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11b4, 0x847 bytes
    // storahci.sys .text:0x1edd4, 0x116f bytes
    // storahci.sys .text:0x1f6a0, 0x1125 bytes
    // storahci.sys .text:0x1edd4, 0x116f bytes
    //
    _w6(sdk::unknown_ptr) format_ata_id;
    
    // [g_AdapterExtension]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .data:0x1d050, 0x847 bytes
    // storahci.sys .data:0x2a220, 0x116f bytes
    // storahci.sys .data:0x290e0, 0x1125 bytes
    // storahci.sys .data:0x2a220, 0x116f bytes
    //
    _w7(sdk::unknown_ptr) g_adapter_extension;
    
    // [g_AdapterExtensionIndex]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .data:0x1d070, 0x847 bytes
    // storahci.sys .data:0x2a240, 0x116f bytes
    // storahci.sys .data:0x29100, 0x1125 bytes
    // storahci.sys .data:0x2a240, 0x116f bytes
    //
    _w8(sdk::unknown_ptr) g_adapter_extension_index;
    
    // [GetABARAddress]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1000, 0x847 bytes
    // storahci.sys .text:0x18b78, 0x116f bytes
    // storahci.sys .text:0x18e2c, 0x1125 bytes
    // storahci.sys .text:0x18b78, 0x116f bytes
    //
    _w9(sdk::unknown_ptr) get_abar_address;
    
    // [GetAdapterRegistrySettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1e54, 0x847 bytes
    // storahci.sys .text:0x18c08, 0x116f bytes
    // storahci.sys .text:0x18eb4, 0x1125 bytes
    // storahci.sys .text:0x18c08, 0x116f bytes
    //
    _x0(sdk::unknown_ptr) get_adapter_registry_settings;
    
    // [GetDevicePhysicalTopologyData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16d08, 0x847 bytes
    // storahci.sys .text:0x1154, 0x116f bytes
    // storahci.sys .text:0x1174, 0x1125 bytes
    // storahci.sys .text:0x1154, 0x116f bytes
    //
    _x1(sdk::unknown_ptr) get_device_physical_topology_data;
    
    // [GetDeviceRegistrySettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2b98, 0x847 bytes
    // storahci.sys .text:0x19190, 0x116f bytes
    // storahci.sys .text:0x1943c, 0x1125 bytes
    // storahci.sys .text:0x19190, 0x116f bytes
    //
    _x2(sdk::unknown_ptr) get_device_registry_settings;
    
    // [GetFirmwareUpdateCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16e58, 0x847 bytes
    // storahci.sys .text:0x1eea4, 0x116f bytes
    // storahci.sys .text:0x1f770, 0x1125 bytes
    // storahci.sys .text:0x1eea4, 0x116f bytes
    //
    _x3(sdk::unknown_ptr) get_firmware_update_command;
    
    // [GetHybridMaxLbaRangeCountForChangeLba]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16e80, 0x847 bytes
    // storahci.sys .text:0x1eed8, 0x116f bytes
    // storahci.sys .text:0x1f7a0, 0x1125 bytes
    // storahci.sys .text:0x1eed8, 0x116f bytes
    //
    _x4(sdk::unknown_ptr) get_hybrid_max_lba_range_count_for_change_lba;
    
    // [GetInterruptMode]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13ec, 0x847 bytes
    // storahci.sys .text:0x11e60, 0x116f bytes
    // storahci.sys .text:0x10458, 0x1125 bytes
    // storahci.sys .text:0x11e60, 0x116f bytes
    //
    _x5(sdk::unknown_ptr) get_interrupt_mode;
    
    // [GetLbaFromCdb]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16ea0, 0x847 bytes
    // storahci.sys .text:0x1eefc, 0x116f bytes
    // storahci.sys .text:0x1f7c4, 0x1125 bytes
    // storahci.sys .text:0x1eefc, 0x116f bytes
    //
    _x6(sdk::unknown_ptr) get_lba_from_cdb;
    
    // [GetMiniportRegistrySettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14d4, 0x847 bytes
    // storahci.sys .text:0x19d00, 0x116f bytes
    // storahci.sys .text:0x1a050, 0x1125 bytes
    // storahci.sys .text:0x19d00, 0x116f bytes
    //
    _x7(sdk::unknown_ptr) get_miniport_registry_settings;
    
    // [GetNextQueryLogPageIndex]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xac8c, 0x847 bytes
    // storahci.sys .text:0x15874, 0x116f bytes
    // storahci.sys .text:0x13624, 0x1125 bytes
    // storahci.sys .text:0x15874, 0x116f bytes
    //
    _x8(sdk::unknown_ptr) get_next_query_log_page_index;
    
    // [GetSingleIo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7bdc, 0x847 bytes
    // storahci.sys .text:0x6cb4, 0x116f bytes
    // storahci.sys .text:0x54dc, 0x1125 bytes
    // storahci.sys .text:0x6cb4, 0x116f bytes
    //
    _x9(sdk::unknown_ptr) get_single_io;
    
    // [GetSlotToActivate]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14880, 0x847 bytes
    // storahci.sys .text:0x1a8e4, 0x116f bytes
    // storahci.sys .text:0x1adf0, 0x1125 bytes
    // storahci.sys .text:0x1a8e4, 0x116f bytes
    //
    _y0(sdk::unknown_ptr) get_slot_to_activate;
    
    // [GetSrbExtension]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6450, 0x847 bytes
    // storahci.sys .text:0x6c8c, 0x116f bytes
    // storahci.sys .text:0x54b4, 0x1125 bytes
    // storahci.sys .text:0x6c8c, 0x116f bytes
    //
    _y1(sdk::unknown_ptr) get_srb_extension;
    
    // [GetStringLength]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2768, 0x847 bytes
    // storahci.sys .text:0x1d1c, 0x116f bytes
    // storahci.sys .text:0x10d8, 0x1125 bytes
    // storahci.sys .text:0x1d1c, 0x116f bytes
    //
    _y2(sdk::unknown_ptr) get_string_length;
    
    // [HybridChangeByLba]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x16f14, 0x847 bytes
    // storahci.sys .text:0x1ef78, 0x116f bytes
    // storahci.sys .text:0x1f844, 0x1125 bytes
    // storahci.sys .text:0x1ef78, 0x116f bytes
    //
    _y3(sdk::unknown_ptr) hybrid_change_by_lba;
    
    // [HybridChangeByLbaCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17220, 0x847 bytes
    // storahci.sys .text:0x1f280, 0x116f bytes
    // storahci.sys .text:0x1fb50, 0x1125 bytes
    // storahci.sys .text:0x1f280, 0x116f bytes
    //
    _y4(sdk::unknown_ptr) hybrid_change_by_lba_completion;
    
    // [HybridControlCachingMediumCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x174e0, 0x847 bytes
    // storahci.sys .text:0x1f560, 0x116f bytes
    // storahci.sys .text:0x1fde0, 0x1125 bytes
    // storahci.sys .text:0x1f560, 0x116f bytes
    //
    _y5(sdk::unknown_ptr) hybrid_control_caching_medium_completion;
    
    // [HybridDemoteBySize]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1763c, 0x847 bytes
    // storahci.sys .text:0x1f6e4, 0x116f bytes
    // storahci.sys .text:0x1ff40, 0x1125 bytes
    // storahci.sys .text:0x1f6e4, 0x116f bytes
    //
    _y6(sdk::unknown_ptr) hybrid_demote_by_size;
    
    // [HybridDemoteBySizeCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17940, 0x847 bytes
    // storahci.sys .text:0x1fa00, 0x116f bytes
    // storahci.sys .text:0x20220, 0x1125 bytes
    // storahci.sys .text:0x1fa00, 0x116f bytes
    //
    _y7(sdk::unknown_ptr) hybrid_demote_by_size_completion;
    
    // [HybridDisableCachingMedium]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17a60, 0x847 bytes
    // storahci.sys .text:0x1fb38, 0x116f bytes
    // storahci.sys .text:0x20358, 0x1125 bytes
    // storahci.sys .text:0x1fb38, 0x116f bytes
    //
    _y8(sdk::unknown_ptr) hybrid_disable_caching_medium;
    
    // [HybridEnableCachingMedium]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17c24, 0x847 bytes
    // storahci.sys .text:0x1fd18, 0x116f bytes
    // storahci.sys .text:0x20504, 0x1125 bytes
    // storahci.sys .text:0x1fd18, 0x116f bytes
    //
    _y9(sdk::unknown_ptr) hybrid_enable_caching_medium;
    
    // [HybridEvict]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17db8, 0x847 bytes
    // storahci.sys .text:0x1fec4, 0x116f bytes
    // storahci.sys .text:0x20680, 0x1125 bytes
    // storahci.sys .text:0x1fec4, 0x116f bytes
    //
    _z0(sdk::unknown_ptr) hybrid_evict;
    
    // [HybridEvictCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x181b0, 0x847 bytes
    // storahci.sys .text:0x202a0, 0x116f bytes
    // storahci.sys .text:0x20a60, 0x1125 bytes
    // storahci.sys .text:0x202a0, 0x116f bytes
    //
    _z1(sdk::unknown_ptr) hybrid_evict_completion;
    
    // [HybridGetInfo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa64c, 0x847 bytes
    // storahci.sys .text:0x20588, 0x116f bytes
    // storahci.sys .text:0x20d10, 0x1125 bytes
    // storahci.sys .text:0x20588, 0x116f bytes
    //
    _z2(sdk::unknown_ptr) hybrid_get_info;
    
    // [HybridInfoCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18490, 0x847 bytes
    // storahci.sys .text:0x20810, 0x116f bytes
    // storahci.sys .text:0x20fa0, 0x1125 bytes
    // storahci.sys .text:0x20810, 0x116f bytes
    //
    _z3(sdk::unknown_ptr) hybrid_info_completion;
    
    // [HybridIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa6f4, 0x847 bytes
    // storahci.sys .text:0x20d84, 0x116f bytes
    // storahci.sys .text:0x214bc, 0x1125 bytes
    // storahci.sys .text:0x20d84, 0x116f bytes
    //
    _z4(sdk::unknown_ptr) hybrid_ioctl_process;
    
    // [HybridSetDirtyThreshold]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x189a8, 0x847 bytes
    // storahci.sys .text:0x20e28, 0x116f bytes
    // storahci.sys .text:0x21560, 0x1125 bytes
    // storahci.sys .text:0x20e28, 0x116f bytes
    //
    _z5(sdk::unknown_ptr) hybrid_set_dirty_threshold;
    
    // [HybridSetThresholdCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18c00, 0x847 bytes
    // storahci.sys .text:0x210a0, 0x116f bytes
    // storahci.sys .text:0x21790, 0x1125 bytes
    // storahci.sys .text:0x210a0, 0x116f bytes
    //
    _z6(sdk::unknown_ptr) hybrid_set_threshold_completion;
    
    // [HybridWriteThroughCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18cd0, 0x847 bytes
    // storahci.sys .text:0x21190, 0x116f bytes
    // storahci.sys .text:0x21880, 0x1125 bytes
    // storahci.sys .text:0x21190, 0x116f bytes
    //
    _z7(sdk::unknown_ptr) hybrid_write_through_completion;
    
    // [HybridWriteThroughEvictCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18ee0, 0x847 bytes
    // storahci.sys .text:0x21340, 0x116f bytes
    // storahci.sys .text:0x21a30, 0x1125 bytes
    // storahci.sys .text:0x21340, 0x116f bytes
    //
    _z8(sdk::unknown_ptr) hybrid_write_through_evict_completion;
    
    // [IgnoreHotPlug]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11b84, 0x847 bytes
    // storahci.sys .text:0x11f60, 0x116f bytes
    // storahci.sys .text:0x1051c, 0x1125 bytes
    // storahci.sys .text:0x11f60, 0x116f bytes
    //
    _z9(sdk::unknown_ptr) ignore_hot_plug;
    
    // [__IMPORT_DESCRIPTOR_storport]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .idata:0x1f098, 0x847 bytes
    // storahci.sys .idata:0x2d098, 0x116f bytes
    // storahci.sys .idata:0x2c0a8, 0x1125 bytes
    // storahci.sys .idata:0x2d098, 0x116f bytes
    //
    _a0(sdk::unknown_ptr) import_descriptor_storport;
    
    // [InitQueryLogPages]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa39c, 0x847 bytes
    // storahci.sys .text:0x158b4, 0x116f bytes
    // storahci.sys .text:0x13664, 0x1125 bytes
    // storahci.sys .text:0x158b4, 0x116f bytes
    //
    _a1(sdk::unknown_ptr) init_query_log_pages;
    
    // [InquiryComplete]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9280, 0x847 bytes
    // storahci.sys .text:0x21390, 0x116f bytes
    // storahci.sys .text:0x21a80, 0x1125 bytes
    // storahci.sys .text:0x21390, 0x116f bytes
    //
    _a2(sdk::unknown_ptr) inquiry_complete;
    
    // [IOCTLtoATA]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x73f0, 0x847 bytes
    // storahci.sys .text:0x76dc, 0x116f bytes
    // storahci.sys .text:0x5980, 0x1125 bytes
    // storahci.sys .text:0x76dc, 0x116f bytes
    //
    _a3(sdk::unknown_ptr) ioct_lto_ata;
    
    // [IsAhciDEVSLPSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb544, 0x847 bytes
    // storahci.sys .text:0x11f84, 0x116f bytes
    // storahci.sys .text:0x10540, 0x1125 bytes
    // storahci.sys .text:0x11f84, 0x116f bytes
    //
    _a4(sdk::unknown_ptr) is_ahci_devslp_supported;
    
    // [IsDataTransferNeeded]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x54a8, 0x847 bytes
    // storahci.sys .text:0x7ea0, 0x116f bytes
    // storahci.sys .text:0x1acc, 0x1125 bytes
    // storahci.sys .text:0x7ea0, 0x116f bytes
    //
    _a5(sdk::unknown_ptr) is_data_transfer_needed;
    
    // [IsDeviceGeneralPurposeLoggingSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8e78, 0x847 bytes
    // storahci.sys .text:0x15bb8, 0x116f bytes
    // storahci.sys .text:0x1396c, 0x1125 bytes
    // storahci.sys .text:0x15bb8, 0x116f bytes
    //
    _a6(sdk::unknown_ptr) is_device_general_purpose_logging_supported;
    
    // [IsDeviceHybridInfoEnabled]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18f18, 0x847 bytes
    // storahci.sys .text:0x215f8, 0x116f bytes
    // storahci.sys .text:0x21d08, 0x1125 bytes
    // storahci.sys .text:0x215f8, 0x116f bytes
    //
    _a7(sdk::unknown_ptr) is_device_hybrid_info_enabled;
    
    // [IsDeviceHybridInfoSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x959c, 0x847 bytes
    // storahci.sys .text:0x6a90, 0x116f bytes
    // storahci.sys .text:0x52c0, 0x1125 bytes
    // storahci.sys .text:0x6a90, 0x116f bytes
    //
    _a8(sdk::unknown_ptr) is_device_hybrid_info_supported;
    
    // [IsDeviceSupportsTrim]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x751c, 0x847 bytes
    // storahci.sys .text:0x7488, 0x116f bytes
    // storahci.sys .text:0x5958, 0x1125 bytes
    // storahci.sys .text:0x7488, 0x116f bytes
    //
    _a9(sdk::unknown_ptr) is_device_supports_trim;
    
    // [IsFuaSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6d24, 0x847 bytes
    // storahci.sys .text:0x6acc, 0x116f bytes
    // storahci.sys .text:0x52f8, 0x1125 bytes
    // storahci.sys .text:0x6acc, 0x116f bytes
    //
    _b0(sdk::unknown_ptr) is_fua_supported;
    
    // [IsLpmAdaptiveSetting]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb418, 0x847 bytes
    // storahci.sys .text:0x15c58, 0x116f bytes
    // storahci.sys .text:0x13a08, 0x1125 bytes
    // storahci.sys .text:0x15c58, 0x116f bytes
    //
    _b1(sdk::unknown_ptr) is_lpm_adaptive_setting;
    
    // [IsLPMCapablePort]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb4c0, 0x847 bytes
    // storahci.sys .text:0x11fec, 0x116f bytes
    // storahci.sys .text:0x105a4, 0x1125 bytes
    // storahci.sys .text:0x11fec, 0x116f bytes
    //
    _b2(sdk::unknown_ptr) is_lpm_capable_port;
    
    // [IsLpmModeSetting]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb46c, 0x847 bytes
    // storahci.sys .text:0x15cb4, 0x116f bytes
    // storahci.sys .text:0x13a64, 0x1125 bytes
    // storahci.sys .text:0x15cb4, 0x116f bytes
    //
    _b3(sdk::unknown_ptr) is_lpm_mode_setting;
    
    // [IsMiniportInternalSrb]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6dcc, 0x847 bytes
    // storahci.sys .text:0x6e04, 0x116f bytes
    // storahci.sys .text:0x2dbc, 0x1125 bytes
    // storahci.sys .text:0x6e04, 0x116f bytes
    //
    _b4(sdk::unknown_ptr) is_miniport_internal_srb;
    
    // [IsMsnEnabled]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xbaa8, 0x847 bytes
    // storahci.sys .text:0x31d8, 0x116f bytes
    // storahci.sys .text:0x1a94, 0x1125 bytes
    // storahci.sys .text:0x31d8, 0x116f bytes
    //
    _b5(sdk::unknown_ptr) is_msn_enabled;
    
    // [IsNCQCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x46f8, 0x847 bytes
    // storahci.sys .text:0x628c, 0x116f bytes
    // storahci.sys .text:0x4ae4, 0x1125 bytes
    // storahci.sys .text:0x628c, 0x116f bytes
    //
    _b6(sdk::unknown_ptr) is_ncq_command;
    
    // [IsNCQSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa0dc, 0x847 bytes
    // storahci.sys .text:0x1260, 0x116f bytes
    // storahci.sys .text:0x1280, 0x1125 bytes
    // storahci.sys .text:0x1260, 0x116f bytes
    //
    _b7(sdk::unknown_ptr) is_ncq_supported;
    
    // [IsNCQWriteCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x144b4, 0x847 bytes
    // storahci.sys .text:0x1a284, 0x116f bytes
    // storahci.sys .text:0x1a5d4, 0x1125 bytes
    // storahci.sys .text:0x1a284, 0x116f bytes
    //
    _b8(sdk::unknown_ptr) is_ncq_write_command;
    
    // [IsNormalCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3480, 0x847 bytes
    // storahci.sys .text:0x3e64, 0x116f bytes
    // storahci.sys .text:0x29d4, 0x1125 bytes
    // storahci.sys .text:0x3e64, 0x116f bytes
    //
    _b9(sdk::unknown_ptr) is_normal_command;
    
    // [IsPortD3ColdEnabled]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9a34, 0x847 bytes
    // storahci.sys .text:0x8080, 0x116f bytes
    // storahci.sys .text:0x672c, 0x1125 bytes
    // storahci.sys .text:0x8080, 0x116f bytes
    //
    _c0(sdk::unknown_ptr) is_port_d3_cold_enabled;
    
    // [IsPortStartCapable]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x87b0, 0x847 bytes
    // storahci.sys .text:0x62d0, 0x116f bytes
    // storahci.sys .text:0x4b24, 0x1125 bytes
    // storahci.sys .text:0x62d0, 0x116f bytes
    //
    _c1(sdk::unknown_ptr) is_port_start_capable;
    
    // [IsPortValid]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6860, 0x847 bytes
    // storahci.sys .text:0x2ee8, 0x116f bytes
    // storahci.sys .text:0x1edc, 0x1125 bytes
    // storahci.sys .text:0x2ee8, 0x116f bytes
    //
    _c2(sdk::unknown_ptr) is_port_valid;
    
    // [IsReadWriteCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18f4c, 0x847 bytes
    // storahci.sys .text:0x21658, 0x116f bytes
    // storahci.sys .text:0x21d60, 0x1125 bytes
    // storahci.sys .text:0x21658, 0x116f bytes
    //
    _c3(sdk::unknown_ptr) is_read_write_command;
    
    // [IsSmartFeatureSupported]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18fc0, 0x847 bytes
    // storahci.sys .text:0x216cc, 0x116f bytes
    // storahci.sys .text:0x21dd0, 0x1125 bytes
    // storahci.sys .text:0x216cc, 0x116f bytes
    //
    _c4(sdk::unknown_ptr) is_smart_feature_supported;
    
    // [IsTapeDevice]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18fe0, 0x847 bytes
    // storahci.sys .text:0x21704, 0x116f bytes
    // storahci.sys .text:0x21e08, 0x1125 bytes
    // storahci.sys .text:0x21704, 0x116f bytes
    //
    _c5(sdk::unknown_ptr) is_tape_device;
    
    // [IssueIdentifyCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb5b8, 0x847 bytes
    // storahci.sys .text:0x21734, 0x116f bytes
    // storahci.sys .text:0x21e38, 0x1125 bytes
    // storahci.sys .text:0x21734, 0x116f bytes
    //
    _c6(sdk::unknown_ptr) issue_identify_command;
    
    // [IssueInitCommands]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x81e0, 0x847 bytes
    // storahci.sys .text:0x15d10, 0x116f bytes
    // storahci.sys .text:0x13ac0, 0x1125 bytes
    // storahci.sys .text:0x15d10, 0x116f bytes
    //
    _c7(sdk::unknown_ptr) issue_init_commands;
    
    // [IssuePreservedSettingCommands]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x87e0, 0x847 bytes
    // storahci.sys .text:0x8140, 0x116f bytes
    // storahci.sys .text:0x13bc0, 0x1125 bytes
    // storahci.sys .text:0x8140, 0x116f bytes
    //
    _c8(sdk::unknown_ptr) issue_preserved_setting_commands;
    
    // [IssueReadLogExtCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa7b0, 0x847 bytes
    // storahci.sys .text:0x8bf4, 0x116f bytes
    // storahci.sys .text:0x13cbc, 0x1125 bytes
    // storahci.sys .text:0x8bf4, 0x116f bytes
    //
    _c9(sdk::unknown_ptr) issue_read_log_ext_command;
    
    // [IssueSetDateAndTimeCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x131ac, 0x847 bytes
    // storahci.sys .text:0x15e0c, 0x116f bytes
    // storahci.sys .text:0x13de0, 0x1125 bytes
    // storahci.sys .text:0x15e0c, 0x116f bytes
    //
    _d0(sdk::unknown_ptr) issue_set_date_and_time_command;
    
    // [LogPageDiscoveryCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa8d0, 0x847 bytes
    // storahci.sys .text:0x15e70, 0x116f bytes
    // storahci.sys .text:0x13e40, 0x1125 bytes
    // storahci.sys .text:0x15e70, 0x116f bytes
    //
    _d1(sdk::unknown_ptr) log_page_discovery_completion;
    
    // [NcqErrorRecoveryCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x139f0, 0x847 bytes
    // storahci.sys .text:0x85b0, 0x116f bytes
    // storahci.sys .text:0x16590, 0x1125 bytes
    // storahci.sys .text:0x85b0, 0x116f bytes
    //
    _d2(sdk::unknown_ptr) ncq_error_recovery_completion;
    
    // [NeedRequestSense]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa334, 0x847 bytes
    // storahci.sys .text:0x8304, 0x116f bytes
    // storahci.sys .text:0x64c4, 0x1125 bytes
    // storahci.sys .text:0x8304, 0x116f bytes
    //
    _d3(sdk::unknown_ptr) need_request_sense;
    
    // [NeedsPuisSpinUpOnPowerUp]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9560, 0x847 bytes
    // storahci.sys .text:0x165bc, 0x116f bytes
    // storahci.sys .text:0x14590, 0x1125 bytes
    // storahci.sys .text:0x165bc, 0x116f bytes
    //
    _d4(sdk::unknown_ptr) needs_puis_spin_up_on_power_up;
    
    // [NoLpmSupport]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb508, 0x847 bytes
    // storahci.sys .text:0x12054, 0x116f bytes
    // storahci.sys .text:0x1060c, 0x1125 bytes
    // storahci.sys .text:0x12054, 0x116f bytes
    //
    _d5(sdk::unknown_ptr) no_lpm_support;
    
    // [NVCacheGeneric]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19000, 0x847 bytes
    // storahci.sys .text:0x217e4, 0x116f bytes
    // storahci.sys .text:0x21ee8, 0x1125 bytes
    // storahci.sys .text:0x217e4, 0x116f bytes
    //
    _d6(sdk::unknown_ptr) nv_cache_generic;
    
    // [P_NotRunning]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8ba0, 0x847 bytes
    // storahci.sys .text:0x30a0, 0x116f bytes
    // storahci.sys .text:0x60d4, 0x1125 bytes
    // storahci.sys .text:0x30a0, 0x116f bytes
    //
    _d7(sdk::unknown_ptr) p_not_running;
    
    // [P_Running]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8660, 0x847 bytes
    // storahci.sys .text:0x7d54, 0x116f bytes
    // storahci.sys .text:0x6754, 0x1125 bytes
    // storahci.sys .text:0x7d54, 0x116f bytes
    //
    _d8(sdk::unknown_ptr) p_running;
    
    // [P_Running_Callback]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa270, 0x847 bytes
    // storahci.sys .text:0x8d20, 0x116f bytes
    // storahci.sys .text:0x16a80, 0x1125 bytes
    // storahci.sys .text:0x8d20, 0x116f bytes
    //
    _d9(sdk::unknown_ptr) p_running_callback;
    
    // [P_Running_StartAttempt]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9a50, 0x847 bytes
    // storahci.sys .text:0x80a8, 0x116f bytes
    // storahci.sys .text:0x6860, 0x1125 bytes
    // storahci.sys .text:0x80a8, 0x116f bytes
    //
    _e0(sdk::unknown_ptr) p_running_start_attempt;
    
    // [P_Running_StartFailed]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13cb8, 0x847 bytes
    // storahci.sys .text:0x16f24, 0x116f bytes
    // storahci.sys .text:0x16b44, 0x1125 bytes
    // storahci.sys .text:0x16f24, 0x116f bytes
    //
    _e1(sdk::unknown_ptr) p_running_start_failed;
    
    // [P_Running_WaitOnBSYDRQ]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7f24, 0x847 bytes
    // storahci.sys .text:0x3210, 0x116f bytes
    // storahci.sys .text:0x61e4, 0x1125 bytes
    // storahci.sys .text:0x3210, 0x116f bytes
    //
    _e2(sdk::unknown_ptr) p_running_wait_on_bsydrq;
    
    // [P_Running_WaitOnDET]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9484, 0x847 bytes
    // storahci.sys .text:0x7fa0, 0x116f bytes
    // storahci.sys .text:0x664c, 0x1125 bytes
    // storahci.sys .text:0x7fa0, 0x116f bytes
    //
    _e3(sdk::unknown_ptr) p_running_wait_on_det;
    
    // [P_Running_WaitOnDET3]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13e84, 0x847 bytes
    // storahci.sys .text:0x17158, 0x116f bytes
    // storahci.sys .text:0x16d78, 0x1125 bytes
    // storahci.sys .text:0x17158, 0x116f bytes
    //
    _e4(sdk::unknown_ptr) p_running_wait_on_det3;
    
    // [P_Running_WaitOnFRE]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x99b0, 0x847 bytes
    // storahci.sys .text:0x1ec8, 0x116f bytes
    // storahci.sys .text:0x65c0, 0x1125 bytes
    // storahci.sys .text:0x1ec8, 0x116f bytes
    //
    _e5(sdk::unknown_ptr) p_running_wait_on_fre;
    
    // [P_Running_WaitWhileDET1]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13f7c, 0x847 bytes
    // storahci.sys .text:0x1728c, 0x116f bytes
    // storahci.sys .text:0x16eac, 0x1125 bytes
    // storahci.sys .text:0x1728c, 0x116f bytes
    //
    _e6(sdk::unknown_ptr) p_running_wait_while_det1;
    
    // [PartialToSlumberTransitionIsAllowed]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3b90, 0x847 bytes
    // storahci.sys .text:0x2fa4, 0x116f bytes
    // storahci.sys .text:0x1f3c, 0x1125 bytes
    // storahci.sys .text:0x2fa4, 0x116f bytes
    //
    _e7(sdk::unknown_ptr) partial_to_slumber_transition_is_allowed;
    
    // [PortAcquireActiveReference]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7e2c, 0x847 bytes
    // storahci.sys .text:0x74b0, 0x116f bytes
    // storahci.sys .text:0x1c9c, 0x1125 bytes
    // storahci.sys .text:0x74b0, 0x116f bytes
    //
    _e8(sdk::unknown_ptr) port_acquire_active_reference;
    
    // [PortBusChangeProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x144e8, 0x847 bytes
    // storahci.sys .text:0x1a2ec, 0x116f bytes
    // storahci.sys .text:0x1a638, 0x1125 bytes
    // storahci.sys .text:0x1a2ec, 0x116f bytes
    //
    _e9(sdk::unknown_ptr) port_bus_change_process;
    
    // [PortDevSleep]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13200, 0x847 bytes
    // storahci.sys .text:0x16600, 0x116f bytes
    // storahci.sys .text:0x145d4, 0x1125 bytes
    // storahci.sys .text:0x16600, 0x116f bytes
    //
    _f0(sdk::unknown_ptr) port_dev_sleep;
    
    // [PortPhyOnline]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb6b0, 0x847 bytes
    // storahci.sys .text:0x16658, 0x116f bytes
    // storahci.sys .text:0x1462c, 0x1125 bytes
    // storahci.sys .text:0x16658, 0x116f bytes
    //
    _f1(sdk::unknown_ptr) port_phy_online;
    
    // [PortReleaseActiveReference]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x85e4, 0x847 bytes
    // storahci.sys .text:0x2fd4, 0x116f bytes
    // storahci.sys .text:0x1fac, 0x1125 bytes
    // storahci.sys .text:0x2fd4, 0x116f bytes
    //
    _f2(sdk::unknown_ptr) port_release_active_reference;
    
    // [PortSlumber]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13254, 0x847 bytes
    // storahci.sys .text:0x166a0, 0x116f bytes
    // storahci.sys .text:0x14674, 0x1125 bytes
    // storahci.sys .text:0x166a0, 0x116f bytes
    //
    _f3(sdk::unknown_ptr) port_slumber;
    
    // [QueryPhysicalTopologyIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19368, 0x847 bytes
    // storahci.sys .text:0x203c, 0x116f bytes
    // storahci.sys .text:0x13a4, 0x1125 bytes
    // storahci.sys .text:0x203c, 0x116f bytes
    //
    _f4(sdk::unknown_ptr) query_physical_topology_ioctl_process;
    
    // [QueryProtocolInfoCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19680, 0x847 bytes
    // storahci.sys .text:0x21b20, 0x116f bytes
    // storahci.sys .text:0x22220, 0x1125 bytes
    // storahci.sys .text:0x21b20, 0x116f bytes
    //
    _f5(sdk::unknown_ptr) query_protocol_info_completion;
    
    // [QueryProtocolInfoIdentifyData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1970c, 0x847 bytes
    // storahci.sys .text:0x21bb8, 0x116f bytes
    // storahci.sys .text:0x2227c, 0x1125 bytes
    // storahci.sys .text:0x21bb8, 0x116f bytes
    //
    _f6(sdk::unknown_ptr) query_protocol_info_identify_data;
    
    // [QueryProtocolInfoIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x197f4, 0x847 bytes
    // storahci.sys .text:0x21ca8, 0x116f bytes
    // storahci.sys .text:0x2236c, 0x1125 bytes
    // storahci.sys .text:0x21ca8, 0x116f bytes
    //
    _f7(sdk::unknown_ptr) query_protocol_info_ioctl_process;
    
    // [QueryProtocolInfoLogPageData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19884, 0x847 bytes
    // storahci.sys .text:0x21d3c, 0x116f bytes
    // storahci.sys .text:0x22400, 0x1125 bytes
    // storahci.sys .text:0x21d3c, 0x116f bytes
    //
    _f8(sdk::unknown_ptr) query_protocol_info_log_page_data;
    
    // [QueryTemperatureInfoCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19b70, 0x847 bytes
    // storahci.sys .text:0x22030, 0x116f bytes
    // storahci.sys .text:0x226f0, 0x1125 bytes
    // storahci.sys .text:0x22030, 0x116f bytes
    //
    _f9(sdk::unknown_ptr) query_temperature_info_completion;
    
    // [QueryTemperatureInfoIoctlProcess]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19d00, 0x847 bytes
    // storahci.sys .text:0x221f0, 0x116f bytes
    // storahci.sys .text:0x22878, 0x1125 bytes
    // storahci.sys .text:0x221f0, 0x116f bytes
    //
    _g0(sdk::unknown_ptr) query_temperature_info_ioctl_process;
    
    // [ReadMultiSzRegistryValueAndCompareId]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3304, 0x847 bytes
    // storahci.sys .text:0x1a484, 0x116f bytes
    // storahci.sys .text:0x1a7d8, 0x1125 bytes
    // storahci.sys .text:0x1a484, 0x116f bytes
    //
    _g1(sdk::unknown_ptr) read_multi_sz_registry_value_and_compare_id;
    
    // [ReadQueryLogPage]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa74c, 0x847 bytes
    // storahci.sys .text:0x16988, 0x116f bytes
    // storahci.sys .text:0x148bc, 0x1125 bytes
    // storahci.sys .text:0x16988, 0x116f bytes
    //
    _g2(sdk::unknown_ptr) read_query_log_page;
    
    // [RecordExecutionHistory]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7944, 0x847 bytes
    // storahci.sys .text:0x6fe4, 0x116f bytes
    // storahci.sys .text:0x5ab4, 0x1125 bytes
    // storahci.sys .text:0x6fe4, 0x116f bytes
    //
    _g3(sdk::unknown_ptr) record_execution_history;
    
    // [RecordInterruptHistory]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7c4c, 0x847 bytes
    // storahci.sys .text:0x6aec, 0x116f bytes
    // storahci.sys .text:0x5318, 0x1125 bytes
    // storahci.sys .text:0x6aec, 0x116f bytes
    //
    _g4(sdk::unknown_ptr) record_interrupt_history;
    
    // [ReleaseSlottedCommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3ed0, 0x847 bytes
    // storahci.sys .text:0x4e40, 0x116f bytes
    // storahci.sys .text:0x38d0, 0x1125 bytes
    // storahci.sys .text:0x4e40, 0x116f bytes
    //
    _g5(sdk::unknown_ptr) release_slotted_command;
    
    // [RemoveQueue]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6aa0, 0x847 bytes
    // storahci.sys .text:0x41ec, 0x116f bytes
    // storahci.sys .text:0x2cac, 0x1125 bytes
    // storahci.sys .text:0x41ec, 0x116f bytes
    //
    _g6(sdk::unknown_ptr) remove_queue;
    
    // [ReportLunsComplete]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xab48, 0x847 bytes
    // storahci.sys .text:0x169f4, 0x116f bytes
    // storahci.sys .text:0x14928, 0x1125 bytes
    // storahci.sys .text:0x169f4, 0x116f bytes
    //
    _g7(sdk::unknown_ptr) report_luns_complete;
    
    // [RequestGetDataTransferLength]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3454, 0x847 bytes
    // storahci.sys .text:0x3e34, 0x116f bytes
    // storahci.sys .text:0x29a4, 0x1125 bytes
    // storahci.sys .text:0x3e34, 0x116f bytes
    //
    _g8(sdk::unknown_ptr) request_get_data_transfer_length;
    
    // [RequestGetSrbScsiData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6880, 0x847 bytes
    // storahci.sys .text:0x6e2c, 0x116f bytes
    // storahci.sys .text:0x562c, 0x1125 bytes
    // storahci.sys .text:0x6e2c, 0x116f bytes
    //
    _g9(sdk::unknown_ptr) request_get_srb_scsi_data;
    
    // [RequestSetDataTransferLength]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x149b0, 0x847 bytes
    // storahci.sys .text:0x1aa1c, 0x116f bytes
    // storahci.sys .text:0x7e96, 0x1125 bytes
    // storahci.sys .text:0x1aa1c, 0x116f bytes
    //
    _h0(sdk::unknown_ptr) request_set_data_transfer_length;
    
    // [RestorePreservedSettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xad54, 0x847 bytes
    // storahci.sys .text:0x8de4, 0x116f bytes
    // storahci.sys .text:0x1a950, 0x1125 bytes
    // storahci.sys .text:0x8de4, 0x116f bytes
    //
    _h1(sdk::unknown_ptr) restore_preserved_settings;
    
    // [RunNextPort]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x990c, 0x847 bytes
    // storahci.sys .text:0x1ea4, 0x116f bytes
    // storahci.sys .text:0x6534, 0x1125 bytes
    // storahci.sys .text:0x1ea4, 0x116f bytes
    //
    _h2(sdk::unknown_ptr) run_next_port;
    
    // [SelectDeviceGeometry]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17bc, 0x847 bytes
    // storahci.sys .text:0x22300, 0x116f bytes
    // storahci.sys .text:0x22988, 0x1125 bytes
    // storahci.sys .text:0x22300, 0x116f bytes
    //
    _h3(sdk::unknown_ptr) select_device_geometry;
    
    // [SetAllowedLpmStates]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xaf04, 0x847 bytes
    // storahci.sys .text:0x16b98, 0x116f bytes
    // storahci.sys .text:0x14ac4, 0x1125 bytes
    // storahci.sys .text:0x16b98, 0x116f bytes
    //
    _h4(sdk::unknown_ptr) set_allowed_lpm_states;
    
    // [SetDateAndTimeCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13490, 0x847 bytes
    // storahci.sys .text:0x16c80, 0x116f bytes
    // storahci.sys .text:0x14ba0, 0x1125 bytes
    // storahci.sys .text:0x16c80, 0x116f bytes
    //
    _h5(sdk::unknown_ptr) set_date_and_time_completion;
    
    // [Set_PxIE]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9958, 0x847 bytes
    // storahci.sys .text:0x1e3c, 0x116f bytes
    // storahci.sys .text:0x6558, 0x1125 bytes
    // storahci.sys .text:0x1e3c, 0x116f bytes
    //
    _h6(sdk::unknown_ptr) set_px_ie;
    
    // [SetReturnRegisterValues]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x10d0, 0x847 bytes
    // storahci.sys .text:0x7ad8, 0x116f bytes
    // storahci.sys .text:0x1670, 0x1125 bytes
    // storahci.sys .text:0x7ad8, 0x116f bytes
    //
    _h7(sdk::unknown_ptr) set_return_register_values;
    
    // [SmartGeneric]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x829c, 0x847 bytes
    // storahci.sys .text:0x7548, 0x116f bytes
    // storahci.sys .text:0x1b00, 0x1125 bytes
    // storahci.sys .text:0x7548, 0x116f bytes
    //
    _h8(sdk::unknown_ptr) smart_generic;
    
    // [SmartIdentifyData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x90d4, 0x847 bytes
    // storahci.sys .text:0x223ec, 0x116f bytes
    // storahci.sys .text:0x18e4, 0x1125 bytes
    // storahci.sys .text:0x223ec, 0x116f bytes
    //
    _h9(sdk::unknown_ptr) smart_identify_data;
    
    // [SmartVersion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa080, 0x847 bytes
    // storahci.sys .text:0x22500, 0x116f bytes
    // storahci.sys .text:0x5da8, 0x1125 bytes
    // storahci.sys .text:0x22500, 0x116f bytes
    //
    _i0(sdk::unknown_ptr) smart_version;
    
    // [SRBtoATA_CFIS]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x4648, 0x847 bytes
    // storahci.sys .text:0x4308, 0x116f bytes
    // storahci.sys .text:0x2de4, 0x1125 bytes
    // storahci.sys .text:0x4308, 0x116f bytes
    //
    _i1(sdk::unknown_ptr) sr_bto_ata_cfis;
    
    // [SRBtoATAPI_CFIS]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x149e4, 0x847 bytes
    // storahci.sys .text:0x1aa58, 0x116f bytes
    // storahci.sys .text:0x1af28, 0x1125 bytes
    // storahci.sys .text:0x1aa58, 0x116f bytes
    //
    _i2(sdk::unknown_ptr) sr_bto_atapi_cfis;
    
    // [SRBtoPRDT]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6ba0, 0x847 bytes
    // storahci.sys .text:0x6160, 0x116f bytes
    // storahci.sys .text:0x49c0, 0x1125 bytes
    // storahci.sys .text:0x6160, 0x116f bytes
    //
    _i3(sdk::unknown_ptr) sr_bto_prdt;
    
    // [SrbConvertToATACommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x64e4, 0x847 bytes
    // storahci.sys .text:0x66a0, 0x116f bytes
    // storahci.sys .text:0x4ee0, 0x1125 bytes
    // storahci.sys .text:0x66a0, 0x116f bytes
    //
    _i4(sdk::unknown_ptr) srb_convert_to_ata_command;
    
    // [SrbConvertToATAPICommand]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19e4c, 0x847 bytes
    // storahci.sys .text:0x2256c, 0x116f bytes
    // storahci.sys .text:0x22a6c, 0x1125 bytes
    // storahci.sys .text:0x2256c, 0x116f bytes
    //
    _i5(sdk::unknown_ptr) srb_convert_to_atapi_command;
    
    // [StringToULONG]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1465c, 0x847 bytes
    // storahci.sys .text:0x1a5fc, 0x116f bytes
    // storahci.sys .text:0x1aa5c, 0x1125 bytes
    // storahci.sys .text:0x1a5fc, 0x116f bytes
    //
    _i6(sdk::unknown_ptr) string_to_ulong;
    
    // [TelemetryFillCommonHeader]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19ef0, 0x847 bytes
    // storahci.sys .text:0x22618, 0x116f bytes
    // storahci.sys .text:0x22b18, 0x1125 bytes
    // storahci.sys .text:0x22618, 0x116f bytes
    //
    _i7(sdk::unknown_ptr) telemetry_fill_common_header;
    
    // [TelemetryFillCommonHeaderCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x19fd0, 0x847 bytes
    // storahci.sys .text:0x22700, 0x116f bytes
    // storahci.sys .text:0x22c00, 0x1125 bytes
    // storahci.sys .text:0x22700, 0x116f bytes
    //
    _i8(sdk::unknown_ptr) telemetry_fill_common_header_completion;
    
    // [TelemetryFillHeaders]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a128, 0x847 bytes
    // storahci.sys .text:0x22858, 0x116f bytes
    // storahci.sys .text:0x22d54, 0x1125 bytes
    // storahci.sys .text:0x22858, 0x116f bytes
    //
    _i9(sdk::unknown_ptr) telemetry_fill_headers;
    
    // [TelemetryFillHeadersCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a1e0, 0x847 bytes
    // storahci.sys .text:0x22900, 0x116f bytes
    // storahci.sys .text:0x22e00, 0x1125 bytes
    // storahci.sys .text:0x22900, 0x116f bytes
    //
    _j0(sdk::unknown_ptr) telemetry_fill_headers_completion;
    
    // [TelemetryGetSettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9894, 0x847 bytes
    // storahci.sys .text:0x22a28, 0x116f bytes
    // storahci.sys .text:0x22f20, 0x1125 bytes
    // storahci.sys .text:0x22a28, 0x116f bytes
    //
    _j1(sdk::unknown_ptr) telemetry_get_settings;
    
    // [TelemetrySetHostSettings]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a2e4, 0x847 bytes
    // storahci.sys .text:0x22aa8, 0x116f bytes
    // storahci.sys .text:0x22fa0, 0x1125 bytes
    // storahci.sys .text:0x22aa8, 0x116f bytes
    //
    _j2(sdk::unknown_ptr) telemetry_set_host_settings;
    
    // [TelemetryWriteDriverLog]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a3e4, 0x847 bytes
    // storahci.sys .text:0x22b98, 0x116f bytes
    // storahci.sys .text:0x23090, 0x1125 bytes
    // storahci.sys .text:0x22b98, 0x116f bytes
    //
    _j3(sdk::unknown_ptr) telemetry_write_driver_log;
    
    // [TelemetryWritePrivateLog]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a444, 0x847 bytes
    // storahci.sys .text:0x22bf8, 0x116f bytes
    // storahci.sys .text:0x230f0, 0x1125 bytes
    // storahci.sys .text:0x22bf8, 0x116f bytes
    //
    _j4(sdk::unknown_ptr) telemetry_write_private_log;
    
    // [TelemetryWritePrivateLogCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a5e0, 0x847 bytes
    // storahci.sys .text:0x22d30, 0x116f bytes
    // storahci.sys .text:0x23220, 0x1125 bytes
    // storahci.sys .text:0x22d30, 0x116f bytes
    //
    _j5(sdk::unknown_ptr) telemetry_write_private_log_completion;
    
    // [TelemetryWritePublicLog]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a568, 0x847 bytes
    // storahci.sys .text:0x22d3c, 0x116f bytes
    // storahci.sys .text:0x2322c, 0x1125 bytes
    // storahci.sys .text:0x22d3c, 0x116f bytes
    //
    _j6(sdk::unknown_ptr) telemetry_write_public_log;
    
    // [TelemetryWritePublicLogCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a5e0, 0x847 bytes
    // storahci.sys .text:0x22d30, 0x116f bytes
    // storahci.sys .text:0x23220, 0x1125 bytes
    // storahci.sys .text:0x22d30, 0x116f bytes
    //
    _j7(sdk::unknown_ptr) telemetry_write_public_log_completion;
    
    // [ULong2HexString]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1a5e8, 0x847 bytes
    // storahci.sys .text:0x22db4, 0x116f bytes
    // storahci.sys .text:0x232a4, 0x1125 bytes
    // storahci.sys .text:0x22db4, 0x116f bytes
    //
    _j8(sdk::unknown_ptr) u_long2_hex_string;
    
    // [UlongToHex]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1b88, 0x847 bytes
    // storahci.sys .text:0x1a660, 0x116f bytes
    // storahci.sys .text:0x1aac0, 0x1125 bytes
    // storahci.sys .text:0x1a660, 0x116f bytes
    //
    _j9(sdk::unknown_ptr) ulong_to_hex;
    
    // [UpdateDeviceParameters]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1274, 0x847 bytes
    // storahci.sys .text:0x22e04, 0x116f bytes
    // storahci.sys .text:0x232f4, 0x1125 bytes
    // storahci.sys .text:0x22e04, 0x116f bytes
    //
    _k0(sdk::unknown_ptr) update_device_parameters;
    
    // [UpdateQueryLogPageSupportive]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xab04, 0x847 bytes
    // storahci.sys .text:0x16dc4, 0x116f bytes
    // storahci.sys .text:0x14ce4, 0x1125 bytes
    // storahci.sys .text:0x16dc4, 0x116f bytes
    //
    _k1(sdk::unknown_ptr) update_query_log_page_supportive;
    
    // [UpdateSetFeatureCommands]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1870, 0x847 bytes
    // storahci.sys .text:0x8548, 0x116f bytes
    // storahci.sys .text:0x1aaf0, 0x1125 bytes
    // storahci.sys .text:0x8548, 0x116f bytes
    //
    _k2(sdk::unknown_ptr) update_set_feature_commands;
    
    // [WMultiStringToAscii]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x753c, 0x847 bytes
    // storahci.sys .text:0x1a690, 0x116f bytes
    // storahci.sys .text:0x1ab9c, 0x1125 bytes
    // storahci.sys .text:0x1a690, 0x116f bytes
    //
    _k3(sdk::unknown_ptr) w_multi_string_to_ascii;
};
#include "magic/api.end.hpp"
