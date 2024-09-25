#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace atapi
{
    // [WaitForDrqUntil]
    // Ldr = [atapi.sys]
    // => Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3dd0, 0x398 bytes
    // atapi.sys .text:0x1378, 0x398 bytes
    //
    _m0(sdk::unknown_ptr) wait_for_drq_until;
    
    // [AtapiChannelInitialize]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1480, 0x3a0 bytes
    // atapi.sys .text:0x1050, 0x398 bytes
    // atapi.sys .text:0x15b0, 0x398 bytes
    //
    _m1(sdk::unknown_ptr) atapi_channel_initialize;
    
    // [AtapiCheckStatusAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2da0, 0x3a0 bytes
    // atapi.sys .text:0x10d0, 0x398 bytes
    // atapi.sys .text:0x3030, 0x398 bytes
    //
    _m2(sdk::unknown_ptr) atapi_check_status_async;
    
    // [AtapiCompleteRequest]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2ba4, 0x3a0 bytes
    // atapi.sys .text:0x11c0, 0x398 bytes
    // atapi.sys .text:0x2e08, 0x398 bytes
    //
    _m3(sdk::unknown_ptr) atapi_complete_request;
    
    // [AtapiDeviceErrorHistoryLog]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1000, 0x3a0 bytes
    // atapi.sys .text:0x1380, 0x398 bytes
    // atapi.sys .text:0x1008, 0x398 bytes
    //
    _m4(sdk::unknown_ptr) atapi_device_error_history_log;
    
    // [AtapiDisarmDma]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2868, 0x3a0 bytes
    // atapi.sys .text:0x1644, 0x398 bytes
    // atapi.sys .text:0x2a50, 0x398 bytes
    //
    _m5(sdk::unknown_ptr) atapi_disarm_dma;
    
    // [AtapiHandleAtaCommand]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1e00, 0x3a0 bytes
    // atapi.sys .text:0x16d0, 0x398 bytes
    // atapi.sys .text:0x1f70, 0x398 bytes
    //
    _m6(sdk::unknown_ptr) atapi_handle_ata_command;
    
    // [AtapiHandleMiniportCommand]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x25ec, 0x3a0 bytes
    // atapi.sys .text:0x1748, 0x398 bytes
    // atapi.sys .text:0x2760, 0x398 bytes
    //
    _m7(sdk::unknown_ptr) atapi_handle_miniport_command;
    
    // [AtapiHwBuildIo]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1550, 0x3a0 bytes
    // atapi.sys .text:0x1830, 0x398 bytes
    // atapi.sys .text:0x16a0, 0x398 bytes
    //
    _m8(sdk::unknown_ptr) atapi_hw_build_io;
    
    // [AtapiHwControl]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x18c0, 0x3a0 bytes
    // atapi.sys .text:0x18a0, 0x398 bytes
    // atapi.sys .text:0x1a50, 0x398 bytes
    //
    _m9(sdk::unknown_ptr) atapi_hw_control;
    
    // [AtapiHwInitialize]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x14f0, 0x3a0 bytes
    // atapi.sys .text:0x1960, 0x398 bytes
    // atapi.sys .text:0x1630, 0x398 bytes
    //
    _n0(sdk::unknown_ptr) atapi_hw_initialize;
    
    // [AtapiHwInterrupt]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1640, 0x3a0 bytes
    // atapi.sys .text:0x19d0, 0x398 bytes
    // atapi.sys .text:0x17a0, 0x398 bytes
    //
    _n1(sdk::unknown_ptr) atapi_hw_interrupt;
    
    // [AtapiHwReset]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x17c0, 0x3a0 bytes
    // atapi.sys .text:0x1b70, 0x398 bytes
    // atapi.sys .text:0x1940, 0x398 bytes
    //
    _n2(sdk::unknown_ptr) atapi_hw_reset;
    
    // [AtapiHwStartIo]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x15c0, 0x3a0 bytes
    // atapi.sys .text:0x1c80, 0x398 bytes
    // atapi.sys .text:0x1710, 0x398 bytes
    //
    _n3(sdk::unknown_ptr) atapi_hw_start_io;
    
    // [AtapiInitializeDevice]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1c0c, 0x3a0 bytes
    // atapi.sys .text:0x1cf8, 0x398 bytes
    // atapi.sys .text:0x1d8c, 0x398 bytes
    //
    _n4(sdk::unknown_ptr) atapi_initialize_device;
    
    // [AtapiIssueSoftReset]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x31b0, 0x3a0 bytes
    // atapi.sys .text:0x1ee0, 0x398 bytes
    // atapi.sys .text:0x3500, 0x398 bytes
    //
    _n5(sdk::unknown_ptr) atapi_issue_soft_reset;
    
    // [AtapiNoDeviceConnected]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1e74, 0x3a0 bytes
    // atapi.sys .text:0x1f9c, 0x398 bytes
    // atapi.sys .text:0x1fe8, 0x398 bytes
    //
    _n6(sdk::unknown_ptr) atapi_no_device_connected;
    
    // [AtapiProcessInterrupt]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x28d0, 0x3a0 bytes
    // atapi.sys .text:0x20a0, 0x398 bytes
    // atapi.sys .text:0x2ad0, 0x398 bytes
    //
    _n7(sdk::unknown_ptr) atapi_process_interrupt;
    
    // [AtapiProgramTaskFile]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x26c0, 0x3a0 bytes
    // atapi.sys .text:0x23fc, 0x398 bytes
    // atapi.sys .text:0x2844, 0x398 bytes
    //
    _n8(sdk::unknown_ptr) atapi_program_task_file;
    
    // [AtapiReInitDevices]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3710, 0x3a0 bytes
    // atapi.sys .text:0x24c0, 0x398 bytes
    // atapi.sys .text:0x3ab0, 0x398 bytes
    //
    _n9(sdk::unknown_ptr) atapi_re_init_devices;
    
    // [AtapiResetAtapiDevices]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3640, 0x3a0 bytes
    // atapi.sys .text:0x2610, 0x398 bytes
    // atapi.sys .text:0x39f0, 0x398 bytes
    //
    _o0(sdk::unknown_ptr) atapi_reset_atapi_devices;
    
    // [AtapiSelectDeviceAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2e70, 0x3a0 bytes
    // atapi.sys .text:0x26d0, 0x398 bytes
    // atapi.sys .text:0x3120, 0x398 bytes
    //
    _o1(sdk::unknown_ptr) atapi_select_device_async;
    
    // [AtapiSendAtaCommand]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2080, 0x3a0 bytes
    // atapi.sys .text:0x2880, 0x398 bytes
    // atapi.sys .text:0x2230, 0x398 bytes
    //
    _o2(sdk::unknown_ptr) atapi_send_ata_command;
    
    // [AtapiSendAtaIdentify]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1f50, 0x3a0 bytes
    // atapi.sys .text:0x2b80, 0x398 bytes
    // atapi.sys .text:0x20f0, 0x398 bytes
    //
    _o3(sdk::unknown_ptr) atapi_send_ata_identify;
    
    // [AtapiSendAtapiCommand]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x23b0, 0x3a0 bytes
    // atapi.sys .text:0x2cb0, 0x398 bytes
    // atapi.sys .text:0x2530, 0x398 bytes
    //
    _o4(sdk::unknown_ptr) atapi_send_atapi_command;
    
    // [AtapiSendInternalAtaCommand]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3250, 0x3a0 bytes
    // atapi.sys .text:0x2ee0, 0x398 bytes
    // atapi.sys .text:0x35c0, 0x398 bytes
    //
    _o5(sdk::unknown_ptr) atapi_send_internal_ata_command;
    
    // [AtapiSendInternalAtaCommandAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3320, 0x3a0 bytes
    // atapi.sys .text:0x2fd0, 0x398 bytes
    // atapi.sys .text:0x36b0, 0x398 bytes
    //
    _o6(sdk::unknown_ptr) atapi_send_internal_ata_command_async;
    
    // [AtapiSetBlockSizeAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3b30, 0x3a0 bytes
    // atapi.sys .text:0x3080, 0x398 bytes
    // atapi.sys .text:0x3f00, 0x398 bytes
    //
    _o7(sdk::unknown_ptr) atapi_set_block_size_async;
    
    // [AtapiSetDmaTransferModeAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x38f0, 0x3a0 bytes
    // atapi.sys .text:0x3130, 0x398 bytes
    // atapi.sys .text:0x3cc0, 0x398 bytes
    //
    _o8(sdk::unknown_ptr) atapi_set_dma_transfer_mode_async;
    
    // [AtapiSetMediaStatusNotificationAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x39c0, 0x3a0 bytes
    // atapi.sys .text:0x3200, 0x398 bytes
    // atapi.sys .text:0x3da0, 0x398 bytes
    //
    _o9(sdk::unknown_ptr) atapi_set_media_status_notification_async;
    
    // [AtapiSetPioTransferModeAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3840, 0x3a0 bytes
    // atapi.sys .text:0x32a0, 0x398 bytes
    // atapi.sys .text:0x3c00, 0x398 bytes
    //
    _p0(sdk::unknown_ptr) atapi_set_pio_transfer_mode_async;
    
    // [AtapiSetTransferMode]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2d34, 0x3a0 bytes
    // atapi.sys .text:0x3354, 0x398 bytes
    // atapi.sys .text:0x2fc8, 0x398 bytes
    //
    _p1(sdk::unknown_ptr) atapi_set_transfer_mode;
    
    // [AtapiSetupGeometryAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3a60, 0x3a0 bytes
    // atapi.sys .text:0x33c0, 0x398 bytes
    // atapi.sys .text:0x3e40, 0x398 bytes
    //
    _p2(sdk::unknown_ptr) atapi_setup_geometry_async;
    
    // [AtapiSetupPrdTable]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x274c, 0x3a0 bytes
    // atapi.sys .text:0x347c, 0x398 bytes
    // atapi.sys .text:0x2904, 0x398 bytes
    //
    _p3(sdk::unknown_ptr) atapi_setup_prd_table;
    
    // [AtapiTargetPowerDown]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3110, 0x3a0 bytes
    // atapi.sys .text:0x35d0, 0x398 bytes
    // atapi.sys .text:0x3440, 0x398 bytes
    //
    _p4(sdk::unknown_ptr) atapi_target_power_down;
    
    // [AtapiTargetPowerUp]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x3070, 0x3a0 bytes
    // atapi.sys .text:0x3690, 0x398 bytes
    // atapi.sys .text:0x3380, 0x398 bytes
    //
    _p5(sdk::unknown_ptr) atapi_target_power_up;
    
    // [AtapiTaskRegisterSnapshot]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x2fec, 0x3a0 bytes
    // atapi.sys .text:0x3748, 0x398 bytes
    // atapi.sys .text:0x32d0, 0x398 bytes
    //
    _p6(sdk::unknown_ptr) atapi_task_register_snapshot;
    
    // [AtapiTranslateResources]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x1964, 0x3a0 bytes
    // atapi.sys .text:0x37f0, 0x398 bytes
    // atapi.sys .text:0x1b0c, 0x398 bytes
    //
    _p7(sdk::unknown_ptr) atapi_translate_resources;
    
    // [AtapiWaitStatusAsync]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x33c0, 0x3a0 bytes
    // atapi.sys .text:0x3a70, 0x398 bytes
    // atapi.sys .text:0x3760, 0x398 bytes
    //
    _p8(sdk::unknown_ptr) atapi_wait_status_async;
    
    // [__IMPORT_DESCRIPTOR_ataport]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .idata:0x70d0, 0x3a0 bytes
    // atapi.sys .idata:0x80e8, 0x398 bytes
    // atapi.sys .idata:0x80d0, 0x398 bytes
    //
    _p9(sdk::unknown_ptr) import_descriptor_ataport;
    
    // [WaitForDrdyUntil]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x134c, 0x3a0 bytes
    // atapi.sys .text:0x3d2c, 0x398 bytes
    // atapi.sys .text:0x1424, 0x398 bytes
    //
    _q0(sdk::unknown_ptr) wait_for_drdy_until;
    
    // [WaitOnBusyUntil]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x12b0, 0x3a0 bytes
    // atapi.sys .text:0x3e7c, 0x398 bytes
    // atapi.sys .text:0x12cc, 0x398 bytes
    //
    _q1(sdk::unknown_ptr) wait_on_busy_until;
    
    // [WaitOnDrq]
    // Ldr = [atapi.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // atapi.sys .text:0x13e0, 0x3a0 bytes
    // atapi.sys .text:0x3f28, 0x398 bytes
    // atapi.sys .text:0x14c8, 0x398 bytes
    //
    _q2(sdk::unknown_ptr) wait_on_drq;
};
#include "magic/api.end.hpp"
