#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_domain_lock_assistant
{
    // [acquire@CDomainLockAssistant]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f4e00, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [prepare@CDomainLockAssistant]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd2ff0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) prepare;
    
    // [release@CDomainLockAssistant]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f4e3c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
