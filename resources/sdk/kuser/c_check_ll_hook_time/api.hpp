#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_check_ll_hook_time
{
    // [??1CCheckLLHookTime@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x247c54, 0x1596d bytes
    // win32kfull.sys .text:0x245d94, 0x1659e bytes
    // win32kfull.sys .text:0x247b64, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
