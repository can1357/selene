#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidsch_export
{
    // [VidSchGetDeviceFlipMode@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16c0c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a814, 0x84380 bytes
    // dxgkrnl.sys .text:0x1739c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) vid_sch_get_device_flip_mode;
    
    // [VidSchGetMonitorPowerState@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1b164, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20c20, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b7e4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) vid_sch_get_monitor_power_state;
    
    // [VidSchGetNumUnorderedWaitsInDevice@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1b188, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20c44, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b808, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) vid_sch_get_num_unordered_waits_in_device;
    
    // [VidSchIsGpuAccessBlocked@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x820c, 0x60098 bytes
    // dxgkrnl.sys .text:0x765c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb054, 0x84380 bytes
    // dxgkrnl.sys .text:0x89bc, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) vid_sch_is_gpu_access_blocked;
    
    // [VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20b6c, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c630, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a044, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c860, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) vid_sch_query_process_adapter_statistics;
    
    // [VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20be8, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c6c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a11c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c8f0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) vid_sch_query_process_node_statistics;
    
    // [VidSchQueryProcessStatistics@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20c68, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c754, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a1fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3c984, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) vid_sch_query_process_statistics;
    
    // [VidSchQueryProcessVidPnSourceStatistics@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20ce4, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c7e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a2d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3ca14, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) vid_sch_query_process_vid_pn_source_statistics;
    
    // [VidSchRegisterAsDwm@VIDSCH_EXPORT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x81d4, 0x60098 bytes
    // dxgkrnl.sys .text:0x1320, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2714, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a18c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) vid_sch_register_as_dwm;
};
#include "magic/api.end.hpp"
