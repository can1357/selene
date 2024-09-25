#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_legacy_token_buffer
{
    // [GetCurrentBufferPointer@CLegacyTokenBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3d02c, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_current_buffer_pointer;
};
#include "magic/api.end.hpp"
