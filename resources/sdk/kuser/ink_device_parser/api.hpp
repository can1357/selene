#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_device_parser
{
    // [IsInkDevice@InkDeviceParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x250590, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) is_ink_device;
    
    // [GetDeviceCaps@InkDeviceParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250878, 0x1596d bytes
    // win32kfull.sys .text:0x250274, 0x1659e bytes
    // win32kfull.sys .text:0x250788, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) get_device_caps;
    
    // [GetDeviceFeatures@InkDeviceParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250ad4, 0x1596d bytes
    // win32kfull.sys .text:0x250480, 0x1659e bytes
    // win32kfull.sys .text:0x2509e4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_device_features;
    
    // [PopulatePayloadReport@InkDeviceParser]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x250be4, 0x1596d bytes
    // win32kfull.sys .text:0x2505d0, 0x1659e bytes
    // win32kfull.sys .text:0x250af4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) populate_payload_report;
};
#include "magic/api.end.hpp"
