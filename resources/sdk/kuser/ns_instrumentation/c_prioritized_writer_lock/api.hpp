#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_prioritized_writer_lock
{
    // [ReleaseShared@CPrioritizedWriterLock@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6dc4, 0x13864 bytes
    // win32kfull.sys .text:0xfe584, 0x1596d bytes
    // win32kfull.sys .text:0xf77c8, 0x1659e bytes
    // win32kfull.sys .text:0xff4b4, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) release_shared;
};
#include "magic/api.end.hpp"
