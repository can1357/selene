#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_vidpnsourcemodeset_interface_v1_impl
{
    // [AcquireFirstModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd1660, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14fc80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1de7c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1529b0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_mode_info;
    
    // [AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75620, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11efb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1262f0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_mode_info;
    
    // [AcquirePinnedModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x72950, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14fd70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1de8b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x152aa0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_pinned_mode_info;
    
    // [GetNumModes@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7b40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2ddfc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3000, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de090, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_num_modes;
    
    // [InitializeInterface@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xebf28, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x179e88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ac20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a080, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_interface;
    
    // [PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x848b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11eed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178dd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x124840, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) pin_mode;
    
    // [ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75760, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f200, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a4d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x126540, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_mode_info;
    
    // [UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6fa50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2890, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1552e0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) unpin_mode;
};
#include "magic/api.end.hpp"
