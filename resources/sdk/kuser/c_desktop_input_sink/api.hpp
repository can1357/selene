#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_desktop_input_sink
{
    // [GetInstance@CDesktopInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x892f8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_instance;
    
    // [GetTransform@CDesktopInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fca40, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_transform;
    
    // [IsEqualByLuid@CDesktopInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fccd4, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) is_equal_by_luid;
    
    // [Set@CDesktopInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1fcd38, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) set;
    
    // [SetDesktopInputSink@CDesktopInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8925c, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) set_desktop_input_sink;
};
#include "magic/api.end.hpp"
