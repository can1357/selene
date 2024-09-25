#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::identify_primary_destroy_target
{
    // [??0IdentifyPrimaryDestroyTarget@@QEAA@PEAX@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xad18c, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Identify@IdentifyPrimaryDestroyTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x46f2c, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) identify;
};
#include "magic/api.end.hpp"
