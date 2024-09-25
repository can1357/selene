#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::auto_tgo
{
    // [??0AUTO_TGO@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x156d8, 0x1eb80 bytes
    // win32kbase.sys .text:0x17770, 0x243e0 bytes
    // win32kbase.sys .text:0x633ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x45804, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1AUTO_TGO@@MEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x156b4, 0x1eb80 bytes
    // win32kbase.sys .text:0x177b4, 0x243e0 bytes
    // win32kbase.sys .text:0x633f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x45848, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [_DisposeThis@AUTO_TGO]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xccfa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1571f0, 0x243e0 bytes
    // win32kbase.sys .text:0x18a5f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x155090, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) dispose_this;
};
#include "magic/api.end.hpp"
