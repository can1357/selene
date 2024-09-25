#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::delegation_api
{
    // [ScrubDelegateThreadWindows@DelegationAPI]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa7668, 0x243e0 bytes
    // win32kbase.sys .text:0xb19c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x96d98, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) scrub_delegate_thread_windows;
};
#include "magic/api.end.hpp"
