#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::exclusive_winlogn_request_lock
{
    // [??0ExclusiveWinlognRequestLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1566c4, 0x1596d bytes
    // win32kfull.sys .text:0x14e4e0, 0x1659e bytes
    // win32kfull.sys .text:0x1575c4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1ExclusiveWinlognRequestLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1566ec, 0x1596d bytes
    // win32kfull.sys .text:0x14e508, 0x1659e bytes
    // win32kfull.sys .text:0x1575ec, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
