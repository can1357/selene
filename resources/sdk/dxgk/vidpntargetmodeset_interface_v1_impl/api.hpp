#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpntargetmodeset_interface_v1_impl
{
    // [AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1af3dc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_mode_impl;
    
    // [AcquireFirstModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x757c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144700, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e74a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147610, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75ac0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10cb00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e7280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x118b30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_next_mode_info;
    
    // [AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x766f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x142430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cfe80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x145340, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_pinned_mode_info;
    
    // [AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75c20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10b910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af3c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117940, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) add_mode;
    
    // [CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75dc0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10bbd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1af780, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117c00, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create_new_mode_info;
    
    // [GetNumModes@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x758a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1470c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b20a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14aa50, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_num_modes;
    
    // [InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xeb930, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a288, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b104, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a480, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize_interface;
    
    // [PinMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aa910, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e37c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8180, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3530, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76670, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x102600, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19a350, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10e5d0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) release_mode_info;
};
#include "magic/api.end.hpp"
