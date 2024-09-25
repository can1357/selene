#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpnsourcemodeset_interface_v1_impl
{
    // [AcquireFirstModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9880, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e23c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a6d80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2130, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a9a10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e25d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a6f50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e2340, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_mode_info;
    
    // [AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76020, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1420b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d00a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x144fc0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_pinned_mode_info;
    
    // [AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76a10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1022a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19a6e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10e270, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_mode;
    
    // [CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b0e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142e30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d04e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145d40, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_new_mode_info;
    
    // [GetNumModes@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75050, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14eaf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1275f0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_num_modes;
    
    // [InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeb9a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a300, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b17c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a4f8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) initialize_interface;
    
    // [PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8070, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3400, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75fa0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1024f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19ab60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10e4c0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) release_mode_info;
};
#include "magic/api.end.hpp"
