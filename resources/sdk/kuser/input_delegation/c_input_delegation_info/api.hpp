#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_delegation::c_input_delegation_info
{
    // [gInstance@CInputDelegationInfo@InputDelegation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ad80, 0x243e0 bytes
    // win32kbase.sys .data:0x2afb90, 0x27ef0 bytes
    // win32kbase.sys .data:0x257db0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) g_instance;
};
#include "magic/api.end.hpp"
