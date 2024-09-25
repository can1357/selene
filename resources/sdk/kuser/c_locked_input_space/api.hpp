#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_locked_input_space
{
    // [??0CLockedInputSpace@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ebc4, 0x243e0 bytes
    // win32kbase.sys .text:0x24278, 0x27ef0 bytes
    // win32kbase.sys .text:0x5a094, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CLockedInputSpace@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd4df4, 0x243e0 bytes
    // win32kbase.sys .text:0xe7d70, 0x27ef0 bytes
    // win32kbase.sys .text:0xd3694, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
