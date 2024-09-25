#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::eclipobj
{
    // [??0ECLIPOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71b54, 0x13864 bytes
    // win32kfull.sys .text:0x155a5c, 0x1596d bytes
    // win32kfull.sys .text:0x14db18, 0x1659e bytes
    // win32kfull.sys .text:0x15692c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x71b20, 0x13864 bytes
    // win32kfull.sys .text:0x155e0c, 0x1596d bytes
    // win32kfull.sys .text:0x14e110, 0x1659e bytes
    // win32kfull.sys .text:0x156cdc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
};
#include "magic/api.end.hpp"
