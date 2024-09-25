#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::xferdcobj
{
    // [??1XFERDCOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x27bd98, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27bb64, 0x1596d bytes
    // win32kfull.sys .text:0x27bc34, 0x1659e bytes
    // win32kfull.sys .text:0x27bad4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [bPrepareDCForXfer@XFERDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x29074c, 0x13864 bytes
    // win32kfull.sys .text:0x10629c, 0x1596d bytes
    // win32kfull.sys .text:0x1344bc, 0x1659e bytes
    // win32kfull.sys .text:0x1071cc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) b_prepare_dc_for_xfer;
    
    // [ThreadCleanup@XFERDCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x267640, 0x13864 bytes
    // win32kfull.sys .text:0x155b80, 0x1596d bytes
    // win32kfull.sys .text:0x27c1f0, 0x1659e bytes
    // win32kfull.sys .text:0x156a50, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) thread_cleanup;
};
#include "magic/api.end.hpp"
