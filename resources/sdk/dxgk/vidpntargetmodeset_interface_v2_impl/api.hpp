#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpntargetmodeset_interface_v2_impl
{
    // [AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3a76b0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_mode;
    
    // [InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x20b08c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) initialize_interface;
};
#include "magic/api.end.hpp"
