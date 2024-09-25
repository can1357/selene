#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_push_lock_critical_section
{
    // [Release@CPushLockCriticalSection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9f0a4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
