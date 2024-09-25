#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_settings
{
    // [m_Value@InteractiveControlSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2e1e70, 0x13864 bytes
    // win32kfull.sys .rdata:0x2e0c00, 0x1596d bytes
    // win32kfull.sys .rdata:0x2df650, 0x1659e bytes
    // win32kfull.sys .rdata:0x2e0c00, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) m_value;
    
    // [_OpenDeviceKey@InteractiveControlSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116838, 0x13864 bytes
    // win32kfull.sys .text:0xba064, 0x1596d bytes
    // win32kfull.sys .text:0x8e008, 0x1659e bytes
    // win32kfull.sys .text:0xbabd4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) open_device_key;
    
    // [ReadSettings@InteractiveControlSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116930, 0x13864 bytes
    // win32kfull.sys .text:0xb9f18, 0x1596d bytes
    // win32kfull.sys .text:0x8debc, 0x1659e bytes
    // win32kfull.sys .text:0xbaa88, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) read_settings;
    
    // [WriteSettings@InteractiveControlSettings]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e87c, 0x13864 bytes
    // win32kfull.sys .text:0x2572f4, 0x1596d bytes
    // win32kfull.sys .text:0x256530, 0x1659e bytes
    // win32kfull.sys .text:0x257204, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) write_settings;
};
#include "magic/api.end.hpp"
