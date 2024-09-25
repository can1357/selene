#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::qdc_auto_buffers
{
    // [TryFillOnce@QDC_AUTO_BUFFERS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xbbac4, 0x243e0 bytes
    // win32kbase.sys .text:0x49d14, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) try_fill_once;
    
    // [Fill@QDC_AUTO_BUFFERS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbba64, 0x243e0 bytes
    // win32kbase.sys .text:0xd0df8, 0x27ef0 bytes
    // win32kbase.sys .text:0x49df4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) fill;
    
    // [Free@QDC_AUTO_BUFFERS]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbb78, 0x243e0 bytes
    // win32kbase.sys .text:0xd0ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x49dc8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) free;
};
#include "magic/api.end.hpp"
