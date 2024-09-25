#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::api_set_edition_crit
{
    // [??0ApiSetEditionCrit@@QEAA@H@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7ee9c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0ApiSetEditionCrit@@QEAA@HH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x34270, 0x1eb80 bytes
    // win32kbase.sys .text:0x139b8, 0x243e0 bytes
    // win32kbase.sys .text:0x5d848, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1ApiSetEditionCrit@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3424c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1350c, 0x243e0 bytes
    // win32kbase.sys .text:0x7e85c, 0x27ef0 bytes
    // win32kbase.sys .text:0x5d9ec, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
