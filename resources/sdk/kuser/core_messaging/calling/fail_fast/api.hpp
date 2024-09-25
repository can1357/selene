#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging::calling::fail_fast
{
    // [Error@FailFast@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfd758, 0x1eb80 bytes
    // win32kbase.sys .text:0x209460, 0x243e0 bytes
    // win32kbase.sys .text:0x25964c, 0x27ef0 bytes
    // win32kbase.sys .text:0x207260, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) error;
};
#include "magic/api.end.hpp"
