#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::auto_shared_push_lock
{
    // [??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x146cbc, 0x13864 bytes
    // win32kfull.sys .text:0x3e404, 0x1596d bytes
    // win32kfull.sys .text:0x6d50c, 0x1659e bytes
    // win32kfull.sys .text:0x3e814, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
