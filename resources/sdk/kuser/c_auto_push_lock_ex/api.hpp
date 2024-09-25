#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_auto_push_lock_ex
{
    // [??1CAutoPushLockEx@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x6217c, 0x13864 bytes
    // win32kbase.sys .text:0x15bbd0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x62150, 0x13864 bytes
    // win32kfull.sys .text:0x323ec, 0x1596d bytes
    // win32kfull.sys .text:0xa4cbc, 0x1659e bytes
    // win32kfull.sys .text:0x327fc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
