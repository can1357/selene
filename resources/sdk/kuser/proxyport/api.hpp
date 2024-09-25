#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::proxyport
{
    // [Close@PROXYPORT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a3244, 0x13864 bytes
    // win32kfull.sys .text:0x104574, 0x1596d bytes
    // win32kfull.sys .text:0x140b4c, 0x1659e bytes
    // win32kfull.sys .text:0x1054a4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) close;
    
    // [??0PROXYPORT@@QEAA@_K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a2ec8, 0x13864 bytes
    // win32kfull.sys .text:0x1109d8, 0x1596d bytes
    // win32kfull.sys .text:0x1211c0, 0x1659e bytes
    // win32kfull.sys .text:0x111908, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [SecureConnectPort@PROXYPORT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a33d0, 0x13864 bytes
    // win32kfull.sys .text:0x110d80, 0x1596d bytes
    // win32kfull.sys .text:0x121568, 0x1659e bytes
    // win32kfull.sys .text:0x111cb0, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) secure_connect_port;
    
    // [SendRequest@PROXYPORT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2a3578, 0x13864 bytes
    // win32kfull.sys .text:0x196b8, 0x1596d bytes
    // win32kfull.sys .text:0x120e48, 0x1659e bytes
    // win32kfull.sys .text:0x19a68, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) send_request;
};
#include "magic/api.end.hpp"
