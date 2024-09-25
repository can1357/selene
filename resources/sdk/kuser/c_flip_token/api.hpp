#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_flip_token
{
    // [CanReleaseToFrame@CFlipToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42820, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) can_release_to_frame;
    
    // [??0CFlipToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42574, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1CFlipToken@@MEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42cb8, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CFlipToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x42a88, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
