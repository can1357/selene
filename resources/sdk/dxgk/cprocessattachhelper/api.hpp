#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cprocessattachhelper
{
    // [Detach@CPROCESSATTACHHELPER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xc0c0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) detach;
    
    // [Attach@CPROCESSATTACHHELPER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc088, 0x60098 bytes
    // dxgkrnl.sys .text:0x1e40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2ea4, 0x84380 bytes
    // dxgkrnl.sys .text:0xb464, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) attach;
};
#include "magic/api.end.hpp"
