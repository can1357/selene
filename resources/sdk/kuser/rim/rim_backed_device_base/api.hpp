#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rim::rim_backed_device_base
{
    // [Initialize@RimBackedDeviceBase@Rim]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244370, 0x1596d bytes
    // win32kfull.sys .text:0x241d60, 0x1659e bytes
    // win32kfull.sys .text:0x244240, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [OnDeviceClosed@RimBackedDeviceBase@Rim]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2443b0, 0x1596d bytes
    // win32kfull.sys .text:0x241da0, 0x1659e bytes
    // win32kfull.sys .text:0x244280, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) on_device_closed;
    
    // [OnDeviceOpened@RimBackedDeviceBase@Rim]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2443f0, 0x1596d bytes
    // win32kfull.sys .text:0x241de0, 0x1659e bytes
    // win32kfull.sys .text:0x2442c0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) on_device_opened;
    
    // [SendSynchronousIoControl@RimBackedDeviceBase@Rim]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244440, 0x1596d bytes
    // win32kfull.sys .text:0x241e30, 0x1659e bytes
    // win32kfull.sys .text:0x244310, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) send_synchronous_io_control;
    
    // [UnInitialize@RimBackedDeviceBase@Rim]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244510, 0x1596d bytes
    // win32kfull.sys .text:0x241f00, 0x1659e bytes
    // win32kfull.sys .text:0x2443e0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) un_initialize;
};
#include "magic/api.end.hpp"
