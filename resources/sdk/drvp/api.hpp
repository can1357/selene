#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace drvp
{
    // [DrvpDisplayConfigGetDisplayDeviceInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x31718, 0x1eb80 bytes
    // win32kbase.sys .text:0x3a2c8, 0x243e0 bytes
    // win32kbase.sys .text:0x55788, 0x27ef0 bytes
    // win32kbase.sys .text:0x3dfe4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) display_config_get_display_device_info;
    
    // [DrvpGetDeviceInterfaceName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2dd0c, 0x1eb80 bytes
    // win32kbase.sys .text:0xc84c0, 0x243e0 bytes
    // win32kbase.sys .text:0xda120, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1080, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_device_interface_name;
};
#include "magic/api.end.hpp"
