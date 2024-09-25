#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_kernel_stack_swap_auto
{
    // [??0CKernelStackSwapAuto@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x155448, 0x1596d bytes
    // win32kfull.sys .text:0x14c9a0, 0x1659e bytes
    // win32kfull.sys .text:0x156314, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CKernelStackSwapAuto@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x155470, 0x1596d bytes
    // win32kfull.sys .text:0x14ca18, 0x1659e bytes
    // win32kfull.sys .text:0x15633c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
