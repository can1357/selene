#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::eng_mode_state
{
    // [??1EngModeState@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x155dd8, 0x1596d bytes
    // win32kfull.sys .text:0x156ca8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0EngModeState@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x155d9c, 0x1596d bytes
    // win32kfull.sys .text:0x276068, 0x1659e bytes
    // win32kfull.sys .text:0x156c6c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
