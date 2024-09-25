#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_save_restore_check_point
{
    // [??0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20bd84, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CSaveRestoreCheckPoint@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20bdd0, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
