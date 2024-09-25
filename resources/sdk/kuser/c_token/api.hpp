#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_token
{
    // [??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3b900, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CreateFromCompletedFlipToken@CToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3d400, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) create_from_completed_flip_token;
};
#include "magic/api.end.hpp"
