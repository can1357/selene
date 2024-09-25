#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::win32k_syscall_filter_list
{
    // [FontDrvHost@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x251610, 0x243e0 bytes
    // win32kbase.sys .data:0x2a41f0, 0x27ef0 bytes
    // win32kbase.sys .data:0x24e610, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) font_drv_host;
    
    // [Rs1RestrictedAppcontainer@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x252020, 0x243e0 bytes
    // win32kbase.sys .data:0x2a4ff0, 0x27ef0 bytes
    // win32kbase.sys .data:0x24f020, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) rs1_restricted_appcontainer;
    
    // [Rs1RestrictedAppcontainerMiniPlugin@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x250850, 0x243e0 bytes
    // win32kbase.sys .data:0x2a3040, 0x27ef0 bytes
    // win32kbase.sys .data:0x24d850, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) rs1_restricted_appcontainer_mini_plugin;
    
    // [Rs1RestrictedAppcontainerPlugin@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x251620, 0x243e0 bytes
    // win32kbase.sys .data:0x2a4200, 0x27ef0 bytes
    // win32kbase.sys .data:0x24e620, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) rs1_restricted_appcontainer_plugin;
    
    // [Rs3HvsiRdpClient@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x24f3b0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a13b0, 0x27ef0 bytes
    // win32kbase.sys .data:0x24c3b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) rs3_hvsi_rdp_client;
    
    // [Rs3RestrictedAppcontainer@Win32KSyscallFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x24ffb0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a2390, 0x27ef0 bytes
    // win32kbase.sys .data:0x24cfb0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) rs3_restricted_appcontainer;
};
#include "magic/api.end.hpp"
