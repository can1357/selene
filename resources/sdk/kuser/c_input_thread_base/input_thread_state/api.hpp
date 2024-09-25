#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_thread_base::input_thread_state
{
    // [Init@InputThreadState@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86f58, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) init;
    
    // [IsEmpty@InputThreadState@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x870e8, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) is_empty;
};
#include "magic/api.end.hpp"
