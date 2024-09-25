#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_synchronization_info
{
    // [GetType@CSynchronizationInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d60, 0x243e0 bytes
    // win32kbase.sys .text:0xdade0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8700, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsValid@CSynchronizationInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d40, 0x243e0 bytes
    // win32kbase.sys .text:0xdadf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_valid;
    
    // [MarkInvalid@CSynchronizationInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d50, 0x243e0 bytes
    // win32kbase.sys .text:0xdae00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) mark_invalid;
};
#include "magic/api.end.hpp"
