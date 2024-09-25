#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitorsourcemodeset_interface_v1_impl
{
    // [AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b22c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17bcd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20c180, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17e5b0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b27e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17bf60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20c440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17e840, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_mode_info;
    
    // [AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b2b00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f24f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b3470, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2260, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_preferred_mode_info;
    
    // [AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe6410, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17b400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20bf20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17dce0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_mode;
    
    // [CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe64d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17be30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20c310, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17e710, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_new_mode_info;
    
    // [DxgMonitorSourceModeSetInterfaceV1@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55a78, 0x60098 bytes
    // dxgkrnl.sys .data:0xaed18, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12fe18, 0x84380 bytes
    // dxgkrnl.sys .data:0xaed18, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) dxg_monitor_source_mode_set_interface_v1;
    
    // [GetNumModes@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf2a50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x182160, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x214a50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x185470, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_num_modes;
    
    // [ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1b3620, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c6b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d9d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17fbf0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) release_mode_info;
};
#include "magic/api.end.hpp"
