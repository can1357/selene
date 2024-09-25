#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/api.start.hpp"
namespace disk
{
    // [DetectInfoCount]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .data:0x81c0, 0x4108 bytes
    //
    _m0(sdk::unknown_ptr) detect_info_count;
    
    // [DetectInfoList]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .data:0x81b8, 0x4108 bytes
    //
    _m1(sdk::unknown_ptr) detect_info_list;
    
    // [DetectInfoUsedCount]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .data:0x81d0, 0x4108 bytes
    //
    _m2(sdk::unknown_ptr) detect_info_used_count;
    
    // [DiskBootDriverReinit]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x1c20, 0x4108 bytes
    //
    _m3(sdk::unknown_ptr) disk_boot_driver_reinit;
    
    // [DiskCallFlushDispatchAsyncOnNewStack]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x3800, 0x4108 bytes
    //
    _m4(sdk::unknown_ptr) disk_call_flush_dispatch_async_on_new_stack;
    
    // [DiskCleanupDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x5a1c, 0x4108 bytes
    //
    _m5(sdk::unknown_ptr) disk_cleanup_detect_info;
    
    // [DiskDeleteGuidSymbolicLink]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0x14000, 0x4108 bytes
    //
    _m6(sdk::unknown_ptr) disk_delete_guid_symbolic_link;
    
    // [DiskDriverReinit]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x22a0, 0x4108 bytes
    //
    _m7(sdk::unknown_ptr) disk_driver_reinit;
    
    // [DiskDriverReinitialization]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x1c58, 0x4108 bytes
    //
    _m8(sdk::unknown_ptr) disk_driver_reinitialization;
    
    // [DiskGetDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0x13cf4, 0x4108 bytes
    //
    _m9(sdk::unknown_ptr) disk_get_detect_info;
    
    // [DiskGetPortGeometry]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0xd88c, 0x4108 bytes
    //
    _n0(sdk::unknown_ptr) disk_get_port_geometry;
    
    // [DiskIsNT4Geometry]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0x13e2c, 0x4108 bytes
    //
    _n1(sdk::unknown_ptr) disk_is_nt4_geometry;
    
    // [DiskReadDriveCapacity]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x1bf0, 0x4108 bytes
    //
    _n2(sdk::unknown_ptr) disk_read_drive_capacity;
    
    // [DiskReadSignature]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0xd940, 0x4108 bytes
    //
    _n3(sdk::unknown_ptr) disk_read_signature;
    
    // [DiskSaveBusDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys INIT:0x16728, 0x4108 bytes
    //
    _n4(sdk::unknown_ptr) disk_save_bus_detect_info;
    
    // [DiskSaveDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys INIT:0x1629c, 0x4108 bytes
    //
    _n5(sdk::unknown_ptr) disk_save_detect_info;
    
    // [DiskSaveGeometryDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys INIT:0x1687c, 0x4108 bytes
    //
    _n6(sdk::unknown_ptr) disk_save_geometry_detect_info;
    
    // [DiskScanBusDetectInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys INIT:0x16400, 0x4108 bytes
    //
    _n7(sdk::unknown_ptr) disk_scan_bus_detect_info;
    
    // [DiskUpdateGeometry]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0xd6e0, 0x4108 bytes
    //
    _n8(sdk::unknown_ptr) disk_update_geometry;
    
    // [DiskUpdateRemovableGeometry]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys PAGE:0x13fa4, 0x4108 bytes
    //
    _n9(sdk::unknown_ptr) disk_update_removable_geometry;
    
    // [Microsoft_Windows_DiskHandle]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .data:0x81c8, 0x4108 bytes
    //
    _o0(sdk::unknown_ptr) microsoft_windows_disk_handle;
    
    // [Template_ccccchhhhq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x402c, 0x4108 bytes
    //
    _o1(sdk::unknown_ptr) template_ccccchhhhq;
    
    // [Template_qpcxx]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x4130, 0x4108 bytes
    //
    _o2(sdk::unknown_ptr) template_qpcxx;
    
    // [Template_qpqccccc]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x425c, 0x4108 bytes
    //
    _o3(sdk::unknown_ptr) template_qpqccccc;
    
    // [Template_qpqqq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x4350, 0x4108 bytes
    //
    _o4(sdk::unknown_ptr) template_qpqqq;
    
    // [WPP_1c687bfd547b3a3590b18d54539415b4_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 11
    // disk.sys .rdata:0x69e8, 0x4130 bytes
    //
    _o5(sdk::unknown_ptr) wpp_1c687bfd547b3a3590b18d54539415b4_traceguids;
    
    // [WPP_2f27ad02442d355505f78abb70a38482_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .rdata:0x6360, 0x4108 bytes
    //
    _o6(sdk::unknown_ptr) wpp_2f27ad02442d355505f78abb70a38482_traceguids;
    
    // [WPP_339c540b68a134caf98d21ddd1921cb7_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .rdata:0x66b0, 0x4108 bytes
    //
    _o7(sdk::unknown_ptr) wpp_339c540b68a134caf98d21ddd1921cb7_traceguids;
    
    // [WPP_355ccf9bcdcc3bb2de0e02229cbcdc2e_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .rdata:0x66c0, 0x4108 bytes
    //
    _o8(sdk::unknown_ptr) wpp_355ccf9bcdcc3bb2de0e02229cbcdc2e_traceguids;
    
    // [WPP_6bfd817c631130f9194749cb1669b6d2_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 11
    // disk.sys .rdata:0x6af8, 0x4130 bytes
    //
    _o9(sdk::unknown_ptr) wpp_6bfd817c631130f9194749cb1669b6d2_traceguids;
    
    // [WPP_a9711c54c416383df697b4e008bb3725_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 11
    // disk.sys .rdata:0x6a78, 0x4130 bytes
    //
    _p0(sdk::unknown_ptr) wpp_a9711c54c416383df697b4e008bb3725_traceguids;
    
    // [WPP_b70c6e4d7c3935551eedaffd82a67cff_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .rdata:0x66d0, 0x4108 bytes
    //
    _p1(sdk::unknown_ptr) wpp_b70c6e4d7c3935551eedaffd82a67cff_traceguids;
    
    // [WPP_SF_DLL]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x5aa0, 0x4108 bytes
    //
    _p2(sdk::unknown_ptr) wpp_sf_dll;
    
    // [WPP_SF_LD]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x5afc, 0x4108 bytes
    //
    _p3(sdk::unknown_ptr) wpp_sf_ld;
    
    // [WPP_SF_LZ]
    // Ldr = [disk.sys]
    // => Windows 10 v1607
    // disk.sys .text:0x5b4c, 0x4108 bytes
    //
    _p4(sdk::unknown_ptr) wpp_sf_lz;
    
    // [WPP_34b93ce247d23def5d11fb311119bcc6_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // disk.sys .rdata:0x6ab8, 0x4130 bytes
    // disk.sys .rdata:0x6ab8, 0x4130 bytes
    //
    _p5(sdk::unknown_ptr) wpp_34b93ce247d23def5d11fb311119bcc6_traceguids;
    
    // [WPP_8d2a909da3a7323ec467afb958ebbc0e_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // disk.sys .rdata:0x6b38, 0x4130 bytes
    // disk.sys .rdata:0x6b38, 0x4130 bytes
    //
    _p6(sdk::unknown_ptr) wpp_8d2a909da3a7323ec467afb958ebbc0e_traceguids;
    
    // [WPP_d4312067a7e532f1e137460b0326a475_Traceguids]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // disk.sys .rdata:0x6a08, 0x4130 bytes
    // disk.sys .rdata:0x6a08, 0x4130 bytes
    //
    _p7(sdk::unknown_ptr) wpp_d4312067a7e532f1e137460b0326a475_traceguids;
    
    // [DiskInitializeFailurePrediction]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd220, 0x4130 bytes
    // disk.sys PAGE:0xcbd0, 0x4130 bytes
    // disk.sys PAGE:0xd220, 0x4130 bytes
    //
    _p8(sdk::unknown_ptr) disk_initialize_failure_prediction;
    
    // [DiskLogDuplicateGuidEvent]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x12aa0, 0x4130 bytes
    // disk.sys PAGE:0x12c20, 0x4130 bytes
    // disk.sys PAGE:0x12aa0, 0x4130 bytes
    //
    _p9(sdk::unknown_ptr) disk_log_duplicate_guid_event;
    
    // [McTemplateK0qpddd_EtwWriteTransfer]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x4830, 0x4130 bytes
    // disk.sys .text:0x4968, 0x4130 bytes
    // disk.sys .text:0x4830, 0x4130 bytes
    //
    _q0(sdk::unknown_ptr) mc_template_k0qpddd_etw_write_transfer;
    
    // [McTemplateK0qpduuuuu_EtwWriteTransfer]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x48d8, 0x4130 bytes
    // disk.sys .text:0x4a10, 0x4130 bytes
    // disk.sys .text:0x48d8, 0x4130 bytes
    //
    _q1(sdk::unknown_ptr) mc_template_k0qpduuuuu_etw_write_transfer;
    
    // [McTemplateK0qpuxi_EtwWriteTransfer]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x49cc, 0x4130 bytes
    // disk.sys .text:0x4b04, 0x4130 bytes
    // disk.sys .text:0x49cc, 0x4130 bytes
    //
    _q2(sdk::unknown_ptr) mc_template_k0qpuxi_etw_write_transfer;
    
    // [McTemplateK0uuuuuhhhhq_EtwWriteTransfer]
    // Ldr = [disk.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x4a78, 0x4130 bytes
    // disk.sys .text:0x4bb0, 0x4130 bytes
    // disk.sys .text:0x4a78, 0x4130 bytes
    //
    _q3(sdk::unknown_ptr) mc_template_k0uuuuuhhhhq_etw_write_transfer;
    
    // [DisableWriteCache]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x104b0, 0x4108 bytes
    // disk.sys PAGE:0xf720, 0x4130 bytes
    // disk.sys PAGE:0xf4e0, 0x4130 bytes
    // disk.sys PAGE:0xf720, 0x4130 bytes
    //
    _q4(sdk::unknown_ptr) disable_write_cache;
    
    // [DiskAddDevice]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xcec0, 0x4108 bytes
    // disk.sys PAGE:0xc710, 0x4130 bytes
    // disk.sys PAGE:0xc150, 0x4130 bytes
    // disk.sys PAGE:0xc710, 0x4130 bytes
    //
    _q5(sdk::unknown_ptr) disk_add_device;
    
    // [DiskBadControllers]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGEDATA:0x15000, 0x4108 bytes
    // disk.sys PAGEDATA:0x13000, 0x4130 bytes
    // disk.sys PAGEDATA:0x13000, 0x4130 bytes
    // disk.sys PAGEDATA:0x13000, 0x4130 bytes
    //
    _q6(sdk::unknown_ptr) disk_bad_controllers;
    
    // [DiskCacheInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x6650, 0x4108 bytes
    // disk.sys .rdata:0x6a18, 0x4130 bytes
    // disk.sys .rdata:0x69c8, 0x4130 bytes
    // disk.sys .rdata:0x6a18, 0x4130 bytes
    //
    _q7(sdk::unknown_ptr) disk_cache_info;
    
    // [DiskCreateFdo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd004, 0x4108 bytes
    // disk.sys PAGE:0xc9ec, 0x4130 bytes
    // disk.sys PAGE:0xc43c, 0x4130 bytes
    // disk.sys PAGE:0xc9ec, 0x4130 bytes
    //
    _q8(sdk::unknown_ptr) disk_create_fdo;
    
    // [DiskCreateGuidSymbolicLink]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd484, 0x4108 bytes
    // disk.sys PAGE:0xcf78, 0x4130 bytes
    // disk.sys PAGE:0xca18, 0x4130 bytes
    // disk.sys PAGE:0xcf78, 0x4130 bytes
    //
    _q9(sdk::unknown_ptr) disk_create_guid_symbolic_link;
    
    // [DiskCreateSymbolicLinks]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd21c, 0x4108 bytes
    // disk.sys PAGE:0xc884, 0x4130 bytes
    // disk.sys PAGE:0xc2d4, 0x4130 bytes
    // disk.sys PAGE:0xc884, 0x4130 bytes
    //
    _r0(sdk::unknown_ptr) disk_create_symbolic_links;
    
    // [DiskDeleteSymbolicLinks]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x14084, 0x4108 bytes
    // disk.sys PAGE:0xc0b4, 0x4130 bytes
    // disk.sys PAGE:0xbbe4, 0x4130 bytes
    // disk.sys PAGE:0xc0b4, 0x4130 bytes
    //
    _r1(sdk::unknown_ptr) disk_delete_symbolic_links;
    
    // [DiskDetectFailurePrediction]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc890, 0x4108 bytes
    // disk.sys PAGE:0xd310, 0x4130 bytes
    // disk.sys PAGE:0xcc78, 0x4130 bytes
    // disk.sys PAGE:0xd310, 0x4130 bytes
    //
    _r2(sdk::unknown_ptr) disk_detect_failure_prediction;
    
    // [DiskDetermineMediaTypes]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xe2e0, 0x4108 bytes
    // disk.sys PAGE:0xda18, 0x4130 bytes
    // disk.sys PAGE:0xd7cc, 0x4130 bytes
    // disk.sys PAGE:0xda18, 0x4130 bytes
    //
    _r3(sdk::unknown_ptr) disk_determine_media_types;
    
    // [DiskDeviceControl]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x17a0, 0x4108 bytes
    // disk.sys .text:0x1590, 0x4130 bytes
    // disk.sys .text:0x10c0, 0x4130 bytes
    // disk.sys .text:0x1590, 0x4130 bytes
    //
    _r4(sdk::unknown_ptr) disk_device_control;
    
    // [diskDeviceSequenceNumber]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x81c4, 0x4108 bytes
    // disk.sys .data:0x820c, 0x4130 bytes
    // disk.sys .data:0x8284, 0x4130 bytes
    // disk.sys .data:0x820c, 0x4130 bytes
    //
    _r5(sdk::unknown_ptr) disk_device_sequence_number;
    
    // [DiskEnableDisableFailurePredictPolling]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc998, 0x4108 bytes
    // disk.sys PAGE:0xdaec, 0x4130 bytes
    // disk.sys PAGE:0x113b0, 0x4130 bytes
    // disk.sys PAGE:0xdaec, 0x4130 bytes
    //
    _r6(sdk::unknown_ptr) disk_enable_disable_failure_predict_polling;
    
    // [DiskEnableDisableFailurePrediction]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xcaf4, 0x4108 bytes
    // disk.sys PAGE:0xdb64, 0x4130 bytes
    // disk.sys PAGE:0x11410, 0x4130 bytes
    // disk.sys PAGE:0xdb64, 0x4130 bytes
    //
    _r7(sdk::unknown_ptr) disk_enable_disable_failure_prediction;
    
    // [DiskEnableInfoExceptions]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x126bc, 0x4108 bytes
    // disk.sys PAGE:0x115b0, 0x4130 bytes
    // disk.sys PAGE:0x114ec, 0x4130 bytes
    // disk.sys PAGE:0x115b0, 0x4130 bytes
    //
    _r8(sdk::unknown_ptr) disk_enable_info_exceptions;
    
    // [DiskETWEnabled]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8184, 0x4108 bytes
    // disk.sys .data:0x8208, 0x4130 bytes
    // disk.sys .data:0x8280, 0x4130 bytes
    // disk.sys .data:0x8208, 0x4130 bytes
    //
    _r9(sdk::unknown_ptr) disk_etw_enabled;
    
    // [DiskEventProvider]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x6350, 0x4108 bytes
    // disk.sys .rdata:0x6618, 0x4130 bytes
    // disk.sys .rdata:0x6638, 0x4130 bytes
    // disk.sys .rdata:0x6618, 0x4130 bytes
    //
    _s0(sdk::unknown_ptr) disk_event_provider;
    
    // [DiskEventProvider_Context]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8010, 0x4108 bytes
    // disk.sys .data:0x8010, 0x4130 bytes
    // disk.sys .data:0x8010, 0x4130 bytes
    // disk.sys .data:0x8010, 0x4130 bytes
    //
    _s1(sdk::unknown_ptr) disk_event_provider_context;
    
    // [DiskFdoExecuteWmiMethod]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x12960, 0x4108 bytes
    // disk.sys PAGE:0x11870, 0x4130 bytes
    // disk.sys PAGE:0x117b0, 0x4130 bytes
    // disk.sys PAGE:0x11870, 0x4130 bytes
    //
    _s2(sdk::unknown_ptr) disk_fdo_execute_wmi_method;
    
    // [DiskFdoProcessError]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x2000, 0x4108 bytes
    // disk.sys .text:0x1e90, 0x4130 bytes
    // disk.sys .text:0x2100, 0x4130 bytes
    // disk.sys .text:0x1e90, 0x4130 bytes
    //
    _s3(sdk::unknown_ptr) disk_fdo_process_error;
    
    // [DiskFdoQueryWmiDataBlock]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x12f10, 0x4108 bytes
    // disk.sys PAGE:0x11e20, 0x4130 bytes
    // disk.sys PAGE:0x11d60, 0x4130 bytes
    // disk.sys PAGE:0x11e20, 0x4130 bytes
    //
    _s4(sdk::unknown_ptr) disk_fdo_query_wmi_data_block;
    
    // [DiskFdoQueryWmiRegInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xe490, 0x4108 bytes
    // disk.sys PAGE:0xd5a0, 0x4130 bytes
    // disk.sys PAGE:0xd310, 0x4130 bytes
    // disk.sys PAGE:0xd5a0, 0x4130 bytes
    //
    _s5(sdk::unknown_ptr) disk_fdo_query_wmi_reg_info;
    
    // [DiskFdoQueryWmiRegInfoEx]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x1ce0, 0x4108 bytes
    // disk.sys .text:0x26b0, 0x4130 bytes
    // disk.sys .text:0x2720, 0x4130 bytes
    // disk.sys .text:0x26b0, 0x4130 bytes
    //
    _s6(sdk::unknown_ptr) disk_fdo_query_wmi_reg_info_ex;
    
    // [DiskFdoSetWmiDataBlock]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x131c0, 0x4108 bytes
    // disk.sys PAGE:0x12100, 0x4130 bytes
    // disk.sys PAGE:0x12040, 0x4130 bytes
    // disk.sys PAGE:0x12100, 0x4130 bytes
    //
    _s7(sdk::unknown_ptr) disk_fdo_set_wmi_data_block;
    
    // [DiskFdoSetWmiDataItem]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13360, 0x4108 bytes
    // disk.sys PAGE:0x12290, 0x4130 bytes
    // disk.sys PAGE:0x121d0, 0x4130 bytes
    // disk.sys PAGE:0x12290, 0x4130 bytes
    //
    _s8(sdk::unknown_ptr) disk_fdo_set_wmi_data_item;
    
    // [DiskFlushAsyncComplete]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x1ee0, 0x4108 bytes
    // disk.sys .text:0x40e0, 0x4130 bytes
    // disk.sys .text:0x4230, 0x4130 bytes
    // disk.sys .text:0x40e0, 0x4130 bytes
    //
    _s9(sdk::unknown_ptr) disk_flush_async_complete;
    
    // [DiskFlushComplete]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x14a0, 0x4108 bytes
    // disk.sys .text:0x18b0, 0x4130 bytes
    // disk.sys .text:0x1970, 0x4130 bytes
    // disk.sys .text:0x18b0, 0x4130 bytes
    //
    _t0(sdk::unknown_ptr) disk_flush_complete;
    
    // [DiskFlushDispatch]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x1300, 0x4108 bytes
    // disk.sys .text:0x1340, 0x4130 bytes
    // disk.sys .text:0x16e0, 0x4130 bytes
    // disk.sys .text:0x1340, 0x4130 bytes
    //
    _t1(sdk::unknown_ptr) disk_flush_dispatch;
    
    // [DiskFlushDispatchAsync]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x1ce8, 0x4108 bytes
    // disk.sys .text:0x1ab0, 0x4130 bytes
    // disk.sys .text:0x1b70, 0x4130 bytes
    // disk.sys .text:0x1ab0, 0x4130 bytes
    //
    _t2(sdk::unknown_ptr) disk_flush_dispatch_async;
    
    // [DiskFlushDispatchAsyncCallout]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x3840, 0x4108 bytes
    // disk.sys .text:0x4250, 0x4130 bytes
    // disk.sys .text:0x43a0, 0x4130 bytes
    // disk.sys .text:0x4250, 0x4130 bytes
    //
    _t3(sdk::unknown_ptr) disk_flush_dispatch_async_callout;
    
    // [DiskGenerateDeviceName]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd37c, 0x4108 bytes
    // disk.sys PAGE:0xcc64, 0x4130 bytes
    // disk.sys PAGE:0xc6b8, 0x4130 bytes
    // disk.sys PAGE:0xcc64, 0x4130 bytes
    //
    _t4(sdk::unknown_ptr) disk_generate_device_name;
    
    // [DiskGetCacheInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xdf14, 0x4108 bytes
    // disk.sys PAGE:0xb8e4, 0x4130 bytes
    // disk.sys PAGE:0xb8d4, 0x4130 bytes
    // disk.sys PAGE:0xb8e4, 0x4130 bytes
    //
    _t5(sdk::unknown_ptr) disk_get_cache_information;
    
    // [DiskGetGuidSymbolicLinkName]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd598, 0x4108 bytes
    // disk.sys PAGE:0xd080, 0x4130 bytes
    // disk.sys PAGE:0xcb14, 0x4130 bytes
    // disk.sys PAGE:0xd080, 0x4130 bytes
    //
    _t6(sdk::unknown_ptr) disk_get_guid_symbolic_link_name;
    
    // [DiskGetIdentifyInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xca08, 0x4108 bytes
    // disk.sys PAGE:0xd4ac, 0x4130 bytes
    // disk.sys PAGE:0xce54, 0x4130 bytes
    // disk.sys PAGE:0xd4ac, 0x4130 bytes
    //
    _t7(sdk::unknown_ptr) disk_get_identify_info;
    
    // [DiskGetInfoExceptionInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x1051c, 0x4108 bytes
    // disk.sys PAGE:0xf78c, 0x4130 bytes
    // disk.sys PAGE:0xf54c, 0x4130 bytes
    // disk.sys PAGE:0xf78c, 0x4130 bytes
    //
    _t8(sdk::unknown_ptr) disk_get_info_exception_information;
    
    // [DiskGetModePage]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13448, 0x4108 bytes
    // disk.sys PAGE:0x12384, 0x4130 bytes
    // disk.sys PAGE:0x122c4, 0x4130 bytes
    // disk.sys PAGE:0x12384, 0x4130 bytes
    //
    _t9(sdk::unknown_ptr) disk_get_mode_page;
    
    // [DiskInfoExceptionCheck]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x48a0, 0x4108 bytes
    // disk.sys .text:0x2144, 0x4130 bytes
    // disk.sys .text:0x2408, 0x4130 bytes
    // disk.sys .text:0x2144, 0x4130 bytes
    //
    _u0(sdk::unknown_ptr) disk_info_exception_check;
    
    // [DiskInfoExceptionComplete]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x4dc0, 0x4108 bytes
    // disk.sys .text:0x1c50, 0x4130 bytes
    // disk.sys .text:0x1ea0, 0x4130 bytes
    // disk.sys .text:0x1c50, 0x4130 bytes
    //
    _u1(sdk::unknown_ptr) disk_info_exception_complete;
    
    // [DiskInitFdo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc570, 0x4108 bytes
    // disk.sys PAGE:0xc420, 0x4130 bytes
    // disk.sys PAGE:0xbe60, 0x4130 bytes
    // disk.sys PAGE:0xc420, 0x4130 bytes
    //
    _u2(sdk::unknown_ptr) disk_init_fdo;
    
    // [DiskInitializeReregistration]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc550, 0x4108 bytes
    // disk.sys PAGE:0xd640, 0x4130 bytes
    // disk.sys PAGE:0xd394, 0x4130 bytes
    // disk.sys PAGE:0xd640, 0x4130 bytes
    //
    _u3(sdk::unknown_ptr) disk_initialize_reregistration;
    
    // [DiskIoctlClearVerify]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x384c, 0x4108 bytes
    // disk.sys .text:0x426c, 0x4130 bytes
    // disk.sys .text:0x43bc, 0x4130 bytes
    // disk.sys .text:0x426c, 0x4130 bytes
    //
    _u4(sdk::unknown_ptr) disk_ioctl_clear_verify;
    
    // [DiskIoctlEnableFailurePrediction]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x106bc, 0x4108 bytes
    // disk.sys PAGE:0xc318, 0x4130 bytes
    // disk.sys PAGE:0xbd58, 0x4130 bytes
    // disk.sys PAGE:0xc318, 0x4130 bytes
    //
    _u5(sdk::unknown_ptr) disk_ioctl_enable_failure_prediction;
    
    // [DiskIoctlGetCacheInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x10870, 0x4108 bytes
    // disk.sys PAGE:0xb7f4, 0x4130 bytes
    // disk.sys PAGE:0xb7dc, 0x4130 bytes
    // disk.sys PAGE:0xb7f4, 0x4130 bytes
    //
    _u6(sdk::unknown_ptr) disk_ioctl_get_cache_information;
    
    // [DiskIoctlGetCacheSetting]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x109a0, 0x4108 bytes
    // disk.sys PAGE:0xf954, 0x4130 bytes
    // disk.sys PAGE:0xd8a0, 0x4130 bytes
    // disk.sys PAGE:0xf954, 0x4130 bytes
    //
    _u7(sdk::unknown_ptr) disk_ioctl_get_cache_setting;
    
    // [DiskIoctlGetDriveGeometry]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xdc94, 0x4108 bytes
    // disk.sys PAGE:0xb550, 0x4130 bytes
    // disk.sys PAGE:0xb5b0, 0x4130 bytes
    // disk.sys PAGE:0xb550, 0x4130 bytes
    //
    _u8(sdk::unknown_ptr) disk_ioctl_get_drive_geometry;
    
    // [DiskIoctlGetDriveGeometryEx]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xe3ac, 0x4108 bytes
    // disk.sys PAGE:0xf9c8, 0x4130 bytes
    // disk.sys PAGE:0xf754, 0x4130 bytes
    // disk.sys PAGE:0xf9c8, 0x4130 bytes
    //
    _u9(sdk::unknown_ptr) disk_ioctl_get_drive_geometry_ex;
    
    // [DiskIoctlGetLengthInfo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xd638, 0x4108 bytes
    // disk.sys PAGE:0xb5e0, 0x4130 bytes
    // disk.sys PAGE:0xb660, 0x4130 bytes
    // disk.sys PAGE:0xb5e0, 0x4130 bytes
    //
    _v0(sdk::unknown_ptr) disk_ioctl_get_length_info;
    
    // [DiskIoctlGetMediaTypesEx]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xe0b0, 0x4108 bytes
    // disk.sys PAGE:0xd818, 0x4130 bytes
    // disk.sys PAGE:0xd56c, 0x4130 bytes
    // disk.sys PAGE:0xd818, 0x4130 bytes
    //
    _v1(sdk::unknown_ptr) disk_ioctl_get_media_types_ex;
    
    // [DiskIoctlGetVolumeDiskExtents]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x10a1c, 0x4108 bytes
    // disk.sys PAGE:0xfae0, 0x4130 bytes
    // disk.sys PAGE:0xf874, 0x4130 bytes
    // disk.sys PAGE:0xfae0, 0x4130 bytes
    //
    _v2(sdk::unknown_ptr) disk_ioctl_get_volume_disk_extents;
    
    // [DiskIoctlIsWritable]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xdb0c, 0x4108 bytes
    // disk.sys PAGE:0xd144, 0x4130 bytes
    // disk.sys PAGE:0xb718, 0x4130 bytes
    // disk.sys PAGE:0xd144, 0x4130 bytes
    //
    _v3(sdk::unknown_ptr) disk_ioctl_is_writable;
    
    // [DiskIoctlPredictFailure]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x10b5c, 0x4108 bytes
    // disk.sys PAGE:0xbae8, 0x4130 bytes
    // disk.sys PAGE:0xd20c, 0x4130 bytes
    // disk.sys PAGE:0xbae8, 0x4130 bytes
    //
    _v4(sdk::unknown_ptr) disk_ioctl_predict_failure;
    
    // [DiskIoctlReassignBlocks]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x10e3c, 0x4108 bytes
    // disk.sys PAGE:0xfc2c, 0x4130 bytes
    // disk.sys PAGE:0xf9c8, 0x4130 bytes
    // disk.sys PAGE:0xfc2c, 0x4130 bytes
    //
    _v5(sdk::unknown_ptr) disk_ioctl_reassign_blocks;
    
    // [DiskIoctlReassignBlocksEx]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11194, 0x4108 bytes
    // disk.sys PAGE:0xffb8, 0x4130 bytes
    // disk.sys PAGE:0xfd50, 0x4130 bytes
    // disk.sys PAGE:0xffb8, 0x4130 bytes
    //
    _v6(sdk::unknown_ptr) disk_ioctl_reassign_blocks_ex;
    
    // [DiskIoctlSetCacheInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x1151c, 0x4108 bytes
    // disk.sys PAGE:0x10380, 0x4130 bytes
    // disk.sys PAGE:0x10108, 0x4130 bytes
    // disk.sys PAGE:0x10380, 0x4130 bytes
    //
    _v7(sdk::unknown_ptr) disk_ioctl_set_cache_information;
    
    // [DiskIoctlSetCacheSetting]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11644, 0x4108 bytes
    // disk.sys PAGE:0x104a8, 0x4130 bytes
    // disk.sys PAGE:0x10244, 0x4130 bytes
    // disk.sys PAGE:0x104a8, 0x4130 bytes
    //
    _v8(sdk::unknown_ptr) disk_ioctl_set_cache_setting;
    
    // [DiskIoctlSetVerify]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x38c4, 0x4108 bytes
    // disk.sys .text:0x42e8, 0x4130 bytes
    // disk.sys .text:0x4438, 0x4130 bytes
    // disk.sys .text:0x42e8, 0x4130 bytes
    //
    _v9(sdk::unknown_ptr) disk_ioctl_set_verify;
    
    // [DiskIoctlSmartGetVersion]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc3f4, 0x4108 bytes
    // disk.sys PAGE:0xb68c, 0x4130 bytes
    // disk.sys PAGE:0xb008, 0x4130 bytes
    // disk.sys PAGE:0xb68c, 0x4130 bytes
    //
    _w0(sdk::unknown_ptr) disk_ioctl_smart_get_version;
    
    // [DiskIoctlSmartReceiveDriveData]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc000, 0x4108 bytes
    // disk.sys PAGE:0xb240, 0x4130 bytes
    // disk.sys PAGE:0xb394, 0x4130 bytes
    // disk.sys PAGE:0xb240, 0x4130 bytes
    //
    _w1(sdk::unknown_ptr) disk_ioctl_smart_receive_drive_data;
    
    // [DiskIoctlSmartSendDriveCommand]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xc1dc, 0x4108 bytes
    // disk.sys PAGE:0xb008, 0x4130 bytes
    // disk.sys PAGE:0xb158, 0x4130 bytes
    // disk.sys PAGE:0xb008, 0x4130 bytes
    //
    _w2(sdk::unknown_ptr) disk_ioctl_smart_send_drive_command;
    
    // [DiskIoctlUpdateDriveSize]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x116ec, 0x4108 bytes
    // disk.sys PAGE:0x10564, 0x4130 bytes
    // disk.sys PAGE:0x10324, 0x4130 bytes
    // disk.sys PAGE:0x10564, 0x4130 bytes
    //
    _w3(sdk::unknown_ptr) disk_ioctl_update_drive_size;
    
    // [DiskIoctlVerify]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x393c, 0x4108 bytes
    // disk.sys .text:0x4364, 0x4130 bytes
    // disk.sys .text:0x44b4, 0x4130 bytes
    // disk.sys .text:0x4364, 0x4130 bytes
    //
    _w4(sdk::unknown_ptr) disk_ioctl_verify;
    
    // [DiskIoctlVerifyThread]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11860, 0x4108 bytes
    // disk.sys PAGE:0x106e0, 0x4130 bytes
    // disk.sys PAGE:0x104b0, 0x4130 bytes
    // disk.sys PAGE:0x106e0, 0x4130 bytes
    //
    _w5(sdk::unknown_ptr) disk_ioctl_verify_thread;
    
    // [DiskLogCacheInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11c44, 0x4108 bytes
    // disk.sys PAGE:0x10ae4, 0x4130 bytes
    // disk.sys PAGE:0x108b4, 0x4130 bytes
    // disk.sys PAGE:0x10ae4, 0x4130 bytes
    //
    _w6(sdk::unknown_ptr) disk_log_cache_information;
    
    // [DiskMediaTypes]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x60d0, 0x4108 bytes
    // disk.sys .rdata:0x6120, 0x4130 bytes
    // disk.sys .rdata:0x6140, 0x4130 bytes
    // disk.sys .rdata:0x6120, 0x4130 bytes
    //
    _w7(sdk::unknown_ptr) disk_media_types;
    
    // [DiskMediaTypesExclude]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x62e0, 0x4108 bytes
    // disk.sys .rdata:0x6330, 0x4130 bytes
    // disk.sys .rdata:0x6350, 0x4130 bytes
    // disk.sys .rdata:0x6330, 0x4130 bytes
    //
    _w8(sdk::unknown_ptr) disk_media_types_exclude;
    
    // [DiskModeSelect]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11cec, 0x4108 bytes
    // disk.sys PAGE:0x10b94, 0x4130 bytes
    // disk.sys PAGE:0x10964, 0x4130 bytes
    // disk.sys PAGE:0x10b94, 0x4130 bytes
    //
    _w9(sdk::unknown_ptr) disk_mode_select;
    
    // [DiskPerformSmartCommand]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xcc80, 0x4108 bytes
    // disk.sys PAGE:0xbcd4, 0x4130 bytes
    // disk.sys PAGE:0xcf24, 0x4130 bytes
    // disk.sys PAGE:0xbcd4, 0x4130 bytes
    //
    _x0(sdk::unknown_ptr) disk_perform_smart_command;
    
    // [DiskPostReregisterRequest]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x51c4, 0x4108 bytes
    // disk.sys .text:0x5334, 0x4130 bytes
    // disk.sys .text:0x5474, 0x4130 bytes
    // disk.sys .text:0x5334, 0x4130 bytes
    //
    _x1(sdk::unknown_ptr) disk_post_reregister_request;
    
    // [DiskReadFailurePredictData]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13580, 0x4108 bytes
    // disk.sys PAGE:0xb440, 0x4130 bytes
    // disk.sys PAGE:0x12404, 0x4130 bytes
    // disk.sys PAGE:0xb440, 0x4130 bytes
    //
    _x2(sdk::unknown_ptr) disk_read_failure_predict_data;
    
    // [DiskReadFailurePredictStatus]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xcbc0, 0x4108 bytes
    // disk.sys PAGE:0xbc08, 0x4130 bytes
    // disk.sys PAGE:0x12540, 0x4130 bytes
    // disk.sys PAGE:0xbc08, 0x4130 bytes
    //
    _x3(sdk::unknown_ptr) disk_read_failure_predict_status;
    
    // [DiskReadFailurePredictThresholds]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x136a8, 0x4108 bytes
    // disk.sys PAGE:0x124c4, 0x4130 bytes
    // disk.sys PAGE:0x1263c, 0x4130 bytes
    // disk.sys PAGE:0x124c4, 0x4130 bytes
    //
    _x4(sdk::unknown_ptr) disk_read_failure_predict_thresholds;
    
    // [DiskReadSmartLog]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x137a4, 0x4108 bytes
    // disk.sys PAGE:0x125d0, 0x4130 bytes
    // disk.sys PAGE:0x1274c, 0x4130 bytes
    // disk.sys PAGE:0x125d0, 0x4130 bytes
    //
    _x5(sdk::unknown_ptr) disk_read_smart_log;
    
    // [DiskReadWriteVerification]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x1000, 0x4108 bytes
    // disk.sys .text:0x1010, 0x4130 bytes
    // disk.sys .text:0x1010, 0x4130 bytes
    // disk.sys .text:0x1010, 0x4130 bytes
    //
    _x6(sdk::unknown_ptr) disk_read_write_verification;
    
    // [DiskRemoveDevice]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x141a0, 0x4108 bytes
    // disk.sys PAGE:0xbfc0, 0x4130 bytes
    // disk.sys PAGE:0xbaf0, 0x4130 bytes
    // disk.sys PAGE:0xbfc0, 0x4130 bytes
    //
    _x7(sdk::unknown_ptr) disk_remove_device;
    
    // [DiskReregHead]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8130, 0x4108 bytes
    // disk.sys .data:0x8130, 0x4130 bytes
    // disk.sys .data:0x8190, 0x4130 bytes
    // disk.sys .data:0x8130, 0x4130 bytes
    //
    _x8(sdk::unknown_ptr) disk_rereg_head;
    
    // [DiskReregSpinlock]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8128, 0x4108 bytes
    // disk.sys .data:0x8128, 0x4130 bytes
    // disk.sys .data:0x8188, 0x4130 bytes
    // disk.sys .data:0x8128, 0x4130 bytes
    //
    _x9(sdk::unknown_ptr) disk_rereg_spinlock;
    
    // [DiskReregWorkItems]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8120, 0x4108 bytes
    // disk.sys .data:0x8120, 0x4130 bytes
    // disk.sys .data:0x8180, 0x4130 bytes
    // disk.sys .data:0x8120, 0x4130 bytes
    //
    _y0(sdk::unknown_ptr) disk_rereg_work_items;
    
    // [DiskReregWorker]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13870, 0x4108 bytes
    // disk.sys PAGE:0x126b0, 0x4130 bytes
    // disk.sys PAGE:0x12830, 0x4130 bytes
    // disk.sys PAGE:0x126b0, 0x4130 bytes
    //
    _y1(sdk::unknown_ptr) disk_rereg_worker;
    
    // [DiskSendFailurePredictIoctl]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13968, 0x4108 bytes
    // disk.sys PAGE:0xc228, 0x4130 bytes
    // disk.sys PAGE:0xcd64, 0x4130 bytes
    // disk.sys PAGE:0xc228, 0x4130 bytes
    //
    _y2(sdk::unknown_ptr) disk_send_failure_predict_ioctl;
    
    // [DiskSetCacheInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x11f2c, 0x4108 bytes
    // disk.sys PAGE:0x10dec, 0x4130 bytes
    // disk.sys PAGE:0x10bac, 0x4130 bytes
    // disk.sys PAGE:0x10dec, 0x4130 bytes
    //
    _y3(sdk::unknown_ptr) disk_set_cache_information;
    
    // [DiskSetInfoExceptionInformation]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x12214, 0x4108 bytes
    // disk.sys PAGE:0x11100, 0x4130 bytes
    // disk.sys PAGE:0x10ef8, 0x4130 bytes
    // disk.sys PAGE:0x11100, 0x4130 bytes
    //
    _y4(sdk::unknown_ptr) disk_set_info_exception_information;
    
    // [DiskSetSpecialHacks]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x122c0, 0x4108 bytes
    // disk.sys PAGE:0x111b0, 0x4130 bytes
    // disk.sys PAGE:0x10fb0, 0x4130 bytes
    // disk.sys PAGE:0x111b0, 0x4130 bytes
    //
    _y5(sdk::unknown_ptr) disk_set_special_hacks;
    
    // [DiskShutdownFlush]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x10a0, 0x4108 bytes
    // disk.sys .text:0x10c0, 0x4130 bytes
    // disk.sys .text:0x1460, 0x4130 bytes
    // disk.sys .text:0x10c0, 0x4130 bytes
    //
    _y6(sdk::unknown_ptr) disk_shutdown_flush;
    
    // [DiskStartFdo]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0xdd20, 0x4108 bytes
    // disk.sys PAGE:0xcd80, 0x4130 bytes
    // disk.sys PAGE:0xc820, 0x4130 bytes
    // disk.sys PAGE:0xcd80, 0x4130 bytes
    //
    _y7(sdk::unknown_ptr) disk_start_fdo;
    
    // [DiskStopDevice]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x27c0, 0x4108 bytes
    // disk.sys .text:0x1aa0, 0x4130 bytes
    // disk.sys .text:0x1b60, 0x4130 bytes
    // disk.sys .text:0x1aa0, 0x4130 bytes
    //
    _y8(sdk::unknown_ptr) disk_stop_device;
    
    // [DiskUnload]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x123f0, 0x4108 bytes
    // disk.sys PAGE:0x112c0, 0x4130 bytes
    // disk.sys PAGE:0x110c0, 0x4130 bytes
    // disk.sys PAGE:0x112c0, 0x4130 bytes
    //
    _y9(sdk::unknown_ptr) disk_unload;
    
    // [DiskWmiFdoGuidList]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8060, 0x4108 bytes
    // disk.sys .data:0x8070, 0x4130 bytes
    // disk.sys .data:0x80d0, 0x4130 bytes
    // disk.sys .data:0x8070, 0x4130 bytes
    //
    _z0(sdk::unknown_ptr) disk_wmi_fdo_guid_list;
    
    // [DiskWmiFunctionControl]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13a50, 0x4108 bytes
    // disk.sys PAGE:0x127e0, 0x4130 bytes
    // disk.sys PAGE:0x12960, 0x4130 bytes
    // disk.sys PAGE:0x127e0, 0x4130 bytes
    //
    _z1(sdk::unknown_ptr) disk_wmi_function_control;
    
    // [DiskWriteSmartLog]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys PAGE:0x13c3c, 0x4108 bytes
    // disk.sys PAGE:0x129d8, 0x4130 bytes
    // disk.sys PAGE:0x12b58, 0x4130 bytes
    // disk.sys PAGE:0x129d8, 0x4130 bytes
    //
    _z2(sdk::unknown_ptr) disk_write_smart_log;
    
    // [GUID_IO_DISK_LAYOUT_CHANGE]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x66a0, 0x4108 bytes
    // disk.sys .rdata:0x6a68, 0x4130 bytes
    // disk.sys .rdata:0x6a28, 0x4130 bytes
    // disk.sys .rdata:0x6a68, 0x4130 bytes
    //
    _z3(struct nt::guid_t*) guid_io_disk_layout_change;
    
    // [__IMPORT_DESCRIPTOR_CLASSPNP]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .idata:0xa35c, 0x4108 bytes
    // disk.sys .idata:0xa32c, 0x4130 bytes
    // disk.sys .idata:0xa34c, 0x4130 bytes
    // disk.sys .idata:0xa32c, 0x4130 bytes
    //
    _z4(sdk::unknown_ptr) import_descriptor_classpnp;
    
    // [Microsoft_Windows_DiskEnableBits]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .data:0x8180, 0x4108 bytes
    // disk.sys .data:0x8180, 0x4130 bytes
    // disk.sys .data:0x81e0, 0x4130 bytes
    // disk.sys .data:0x8180, 0x4130 bytes
    //
    _z5(sdk::unknown_ptr) microsoft_windows_disk_enable_bits;
    
    // [Microsoft_Windows_DiskKeywords]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x6530, 0x4108 bytes
    // disk.sys .rdata:0x68b0, 0x4130 bytes
    // disk.sys .rdata:0x6870, 0x4130 bytes
    // disk.sys .rdata:0x68b0, 0x4130 bytes
    //
    _z6(sdk::unknown_ptr) microsoft_windows_disk_keywords;
    
    // [Microsoft_Windows_DiskLevels]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .rdata:0x6510, 0x4108 bytes
    // disk.sys .rdata:0x6890, 0x4130 bytes
    // disk.sys .rdata:0x6850, 0x4130 bytes
    // disk.sys .rdata:0x6890, 0x4130 bytes
    //
    _z7(sdk::unknown_ptr) microsoft_windows_disk_levels;
    
    // [ResetBus]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x3e80, 0x4108 bytes
    // disk.sys .text:0x4b78, 0x4130 bytes
    // disk.sys .text:0x4cb0, 0x4130 bytes
    // disk.sys .text:0x4b78, 0x4130 bytes
    //
    _z8(sdk::unknown_ptr) reset_bus;
    
    // [SetSrbScsiData]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x52c4, 0x4108 bytes
    // disk.sys .text:0x5460, 0x4130 bytes
    // disk.sys .text:0x559c, 0x4130 bytes
    // disk.sys .text:0x5460, 0x4130 bytes
    //
    _z9(sdk::unknown_ptr) set_srb_scsi_data;
    
    // [WPP_SF_DDqL]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x539c, 0x4108 bytes
    // disk.sys .text:0x5540, 0x4130 bytes
    // disk.sys .text:0x5694, 0x4130 bytes
    // disk.sys .text:0x5540, 0x4130 bytes
    //
    _a0(sdk::unknown_ptr) wpp_sf_d_dq_l;
    
    // [WPP_SF_DqD]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x445c, 0x4108 bytes
    // disk.sys .text:0x4dd0, 0x4130 bytes
    // disk.sys .text:0x4f08, 0x4130 bytes
    // disk.sys .text:0x4dd0, 0x4130 bytes
    //
    _a1(sdk::unknown_ptr) wpp_sf_dq_d;
    
    // [WPP_SF_dqL]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x5f04, 0x4108 bytes
    // disk.sys .text:0x4f3c, 0x4130 bytes
    // disk.sys .text:0x5074, 0x4130 bytes
    // disk.sys .text:0x4f3c, 0x4130 bytes
    //
    _a2(sdk::unknown_ptr) wpp_sf_dq_l;
    
    // [WPP_SF_Dqq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x44bc, 0x4108 bytes
    // disk.sys .text:0x4e38, 0x4130 bytes
    // disk.sys .text:0x4f70, 0x4130 bytes
    // disk.sys .text:0x4e38, 0x4130 bytes
    //
    _a3(sdk::unknown_ptr) wpp_sf_dqq;
    
    // [WPP_SF_qqdDq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x5568, 0x4108 bytes
    // disk.sys .text:0x5740, 0x4130 bytes
    // disk.sys .text:0x5894, 0x4130 bytes
    // disk.sys .text:0x5740, 0x4130 bytes
    //
    _a4(sdk::unknown_ptr) wpp_sf_qqd_dq;
    
    // [WPP_SF_qqdLq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x55ec, 0x4108 bytes
    // disk.sys .text:0x57c8, 0x4130 bytes
    // disk.sys .text:0x591c, 0x4130 bytes
    // disk.sys .text:0x57c8, 0x4130 bytes
    //
    _a5(sdk::unknown_ptr) wpp_sf_qqd_lq;
    
    // [WPP_SF_qqddDDq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x5670, 0x4108 bytes
    // disk.sys .text:0x5850, 0x4130 bytes
    // disk.sys .text:0x59a4, 0x4130 bytes
    // disk.sys .text:0x5850, 0x4130 bytes
    //
    _a6(sdk::unknown_ptr) wpp_sf_qqdd_d_dq;
    
    // [WPP_SF_qqddDq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x570c, 0x4108 bytes
    // disk.sys .text:0x58f4, 0x4130 bytes
    // disk.sys .text:0x5a48, 0x4130 bytes
    // disk.sys .text:0x58f4, 0x4130 bytes
    //
    _a7(sdk::unknown_ptr) wpp_sf_qqdd_dq;
    
    // [WPP_SF_qqds]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x579c, 0x4108 bytes
    // disk.sys .text:0x5988, 0x4130 bytes
    // disk.sys .text:0x5adc, 0x4130 bytes
    // disk.sys .text:0x5988, 0x4130 bytes
    //
    _a8(sdk::unknown_ptr) wpp_sf_qqds;
    
    // [WPP_SF_qqsL]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x584c, 0x4108 bytes
    // disk.sys .text:0x5a40, 0x4130 bytes
    // disk.sys .text:0x5b94, 0x4130 bytes
    // disk.sys .text:0x5a40, 0x4130 bytes
    //
    _a9(sdk::unknown_ptr) wpp_sf_qqs_l;
    
    // [WPP_SF_s]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x45f4, 0x4108 bytes
    // disk.sys .text:0x5094, 0x4130 bytes
    // disk.sys .text:0x51cc, 0x4130 bytes
    // disk.sys .text:0x5094, 0x4130 bytes
    //
    _b0(sdk::unknown_ptr) wpp_sf_s;
    
    // [WPP_SF_sq]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x4658, 0x4108 bytes
    // disk.sys .text:0x50f8, 0x4130 bytes
    // disk.sys .text:0x5230, 0x4130 bytes
    // disk.sys .text:0x50f8, 0x4130 bytes
    //
    _b1(sdk::unknown_ptr) wpp_sf_sq;
    
    // [WPP_SF_sqL]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x5988, 0x4108 bytes
    // disk.sys .text:0x5b84, 0x4130 bytes
    // disk.sys .text:0x5cd8, 0x4130 bytes
    // disk.sys .text:0x5b84, 0x4130 bytes
    //
    _b2(sdk::unknown_ptr) wpp_sf_sq_l;
    
    // [WPP_SF_ss]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x46d0, 0x4108 bytes
    // disk.sys .text:0x5170, 0x4130 bytes
    // disk.sys .text:0x52a8, 0x4130 bytes
    // disk.sys .text:0x5170, 0x4130 bytes
    //
    _b3(sdk::unknown_ptr) wpp_sf_ss;
    
    // [WPP_SF_sss]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x4774, 0x4108 bytes
    // disk.sys .text:0x5214, 0x4130 bytes
    // disk.sys .text:0x534c, 0x4130 bytes
    // disk.sys .text:0x5214, 0x4130 bytes
    //
    _b4(sdk::unknown_ptr) wpp_sf_sss;
    
    // [WPP_SF_ZD]
    // Ldr = [disk.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // disk.sys .text:0x5d88, 0x4108 bytes
    // disk.sys .text:0x5ce8, 0x4130 bytes
    // disk.sys .text:0x5e3c, 0x4130 bytes
    // disk.sys .text:0x5ce8, 0x4130 bytes
    //
    _b5(sdk::unknown_ptr) wpp_sf_zd;
};
#include "magic/api.end.hpp"
