#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_delegation
{
    // [IsDelegationEnabledForThread@InputDelegation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b80bc, 0x243e0 bytes
    // win32kbase.sys .text:0x1ffa44, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b5e9c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) is_delegation_enabled_for_thread;
};
#include "magic/api.end.hpp"
