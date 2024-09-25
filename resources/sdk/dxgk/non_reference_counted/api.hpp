#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::non_reference_counted
{
    // [Release@NonReferenceCounted]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2d68, 0x60098 bytes
    // dxgkrnl.sys .text:0x18abc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c9f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x18e4c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
