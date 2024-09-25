#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::auto_shared_umfd_lookup_lock
{
    // [??0AutoSharedUmfdLookupLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x156390, 0x1596d bytes
    // win32kfull.sys .text:0x14e3f0, 0x1659e bytes
    // win32kfull.sys .text:0x157290, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1AutoSharedUmfdLookupLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x156194, 0x1596d bytes
    // win32kfull.sys .text:0x14e1bc, 0x1659e bytes
    // win32kfull.sys .text:0x157064, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
