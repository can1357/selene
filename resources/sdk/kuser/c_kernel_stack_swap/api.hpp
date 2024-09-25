#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_kernel_stack_swap
{
    // [DisableStackSwap@CKernelStackSwap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x15548c, 0x1596d bytes
    // win32kfull.sys .text:0x156358, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) disable_stack_swap;
    
    // [TryEnableStackSwap@CKernelStackSwap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1554f8, 0x1596d bytes
    // win32kfull.sys .text:0x14ca34, 0x1659e bytes
    // win32kfull.sys .text:0x1563c4, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) try_enable_stack_swap;
};
#include "magic/api.end.hpp"
