#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace clip
{
    // [ClipSpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1268, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) sp_initialize;
    
    // [ClipSpUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1338, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) sp_uninitialize;
    
    // [ClipInitHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145ec4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b29a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c5310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b3250, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) init_handles;
    
    // [ClipPointToDesktop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x233198, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) point_to_desktop;
    
    // [ClipContact]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222d14, 0x13864 bytes
    // win32kfull.sys .text:0x215940, 0x1596d bytes
    // win32kfull.sys .text:0x2071cc, 0x1659e bytes
    // win32kfull.sys .text:0x2157b0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) contact;
    
    // [ClipCurrentCursor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17131c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x277b70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32d4d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x277bc0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) current_cursor;
};
#include "magic/api.end.hpp"
