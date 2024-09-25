#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cptp_processor_factory
{
    // [AddProcessor@CPTPProcessorFactory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af1c8, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5878, 0x27ef0 bytes
    // win32kbase.sys .text:0x1acf78, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_processor;
    
    // [GetProcessor@CPTPProcessorFactory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afe00, 0x243e0 bytes
    // win32kbase.sys .text:0x1f67a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1adbb0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_processor;
    
    // [RemoveProcessor@CPTPProcessorFactory]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b115c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f7ba8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aef04, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) remove_processor;
};
#include "magic/api.end.hpp"
