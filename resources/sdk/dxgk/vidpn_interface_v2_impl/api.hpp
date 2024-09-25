#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpn_interface_v2_impl
{
    // [AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2220b0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_target_mode_set;
    
    // [CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3a7c30, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) create_new_target_mode_set;
    
    // [InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20b298, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) initialize_interface;
};
#include "magic/api.end.hpp"
