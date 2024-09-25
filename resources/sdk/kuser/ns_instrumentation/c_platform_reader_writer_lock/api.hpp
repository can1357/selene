#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_platform_reader_writer_lock
{
    // [ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x5b6f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24b30, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) release_exclusive;
    
    // [ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa1320, 0x243e0 bytes
    // win32kbase.sys .text:0x84510, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_shared;
    
    // [AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6d30, 0x13864 bytes
    // win32kbase.sys .text:0x5df30, 0x243e0 bytes
    // win32kbase.sys .text:0x27370, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@CPlatformReaderWriterLock@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2d6d50, 0x13864 bytes
    // win32kbase.sys .text:0xa0650, 0x243e0 bytes
    // win32kbase.sys .text:0x82fe0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_shared;
};
#include "magic/api.end.hpp"
