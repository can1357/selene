#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_effect_input_set
{
    // [EmitUpdateCommands@CEffectInputSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f58, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9654, 0x243e0 bytes
    // win32kbase.sys .text:0x22dff4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7414, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CEffectInputSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3e0c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e97a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22e140, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7560, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [SetInput@CEffectInputSet@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ee8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9884, 0x243e0 bytes
    // win32kbase.sys .text:0x22e474, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7644, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_input;
};
#include "magic/api.end.hpp"
