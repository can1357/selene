#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::auto_remove_lock
{
    // [Acquire@AUTO_REMOVE_LOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1daa0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21c24, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f404, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [Release@AUTO_REMOVE_LOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2eab0, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d948, 0x762b0 bytes
    // dxgkrnl.sys .text:0x23470, 0x84380 bytes
    // dxgkrnl.sys .text:0x1dfc8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
