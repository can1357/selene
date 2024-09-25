#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::surfrefview
{
    // [??1SURFREFVIEW@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xb855c, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [bMap@SURFREFVIEW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74e50, 0x1eb80 bytes
    // win32kbase.sys .text:0x394c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa3210, 0x27ef0 bytes
    // win32kbase.sys .text:0x3f5f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_map;
    
    // [bUnMap@SURFREFVIEW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74de0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f210, 0x243e0 bytes
    // win32kbase.sys .text:0xabbe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e1e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) b_un_map;
    
    // [bUnMapImmediate@SURFREFVIEW]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74e20, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f0e0, 0x243e0 bytes
    // win32kbase.sys .text:0xabad0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e0b0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) b_un_map_immediate;
};
#include "magic/api.end.hpp"
