#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::chm_ref_hwnd_by_handle
{
    // [bValid@CHMRefHwndByHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9d430, 0x243e0 bytes
    // win32kbase.sys .text:0xa7910, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c3b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14a80, 0x243e0 bytes
    // win32kbase.sys .text:0xa2af0, 0x27ef0 bytes
    // win32kbase.sys .text:0x70d50, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1CHMRefHwndByHandle@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x611c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa5530, 0x27ef0 bytes
    // win32kbase.sys .text:0x2a660, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [rpwnd@CHMRefHwndByHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9ef80, 0x243e0 bytes
    // win32kbase.sys .text:0xadbd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8dd80, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) rpwnd;
};
#include "magic/api.end.hpp"
