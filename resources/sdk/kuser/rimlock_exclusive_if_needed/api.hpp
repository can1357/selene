#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rimlock_exclusive_if_needed
{
    // [??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x30380, 0x1eb80 bytes
    // win32kfull.sys .text:0xfdf5c, 0x1596d bytes
    // win32kfull.sys .text:0xf8f1c, 0x1659e bytes
    // win32kfull.sys .text:0xfee8c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x30360, 0x1eb80 bytes
    // win32kfull.sys .text:0xfdf2c, 0x1596d bytes
    // win32kfull.sys .text:0xf8eec, 0x1659e bytes
    // win32kfull.sys .text:0xfee5c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
