#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dcmemobj
{
    // [??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4c7d0, 0x243e0 bytes
    // win32kbase.sys .text:0x4bb60, 0x27ef0 bytes
    // win32kbase.sys .text:0x170a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DCMEMOBJ@@QEAA@KHH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52d84, 0x1eb80 bytes
    // win32kbase.sys .text:0x508f0, 0x243e0 bytes
    // win32kbase.sys .text:0x4b260, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DCMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x52fc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f0a0, 0x243e0 bytes
    // win32kbase.sys .text:0xac050, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e070, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
