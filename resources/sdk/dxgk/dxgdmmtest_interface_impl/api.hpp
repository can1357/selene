#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmmtest_interface_impl
{
    // [CreateVidPn@DXGDMMTEST_INTERFACE_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a8a40, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) create_vid_pn;
    
    // [CreateVidPnFromActive@DXGDMMTEST_INTERFACE_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a8ba0, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) create_vid_pn_from_active;
    
    // [ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1a8d50, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) release_vid_pn;
};
#include "magic/api.end.hpp"
