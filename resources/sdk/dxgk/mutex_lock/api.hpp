#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mutex_lock
{
    // [??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x3fb0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1MUTEX_LOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x3fe0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
