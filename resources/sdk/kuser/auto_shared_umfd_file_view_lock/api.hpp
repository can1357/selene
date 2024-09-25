#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::auto_shared_umfd_file_view_lock
{
    // [??0AutoSharedUmfdFileViewLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2a3f14, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1AutoSharedUmfdFileViewLock@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c2330, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
