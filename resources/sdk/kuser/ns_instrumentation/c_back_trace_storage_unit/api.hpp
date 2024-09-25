#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation::c_back_trace_storage_unit
{
    // [Create@CBackTraceStorageUnit@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7510, 0x13864 bytes
    // win32kfull.sys .text:0x2dd9a8, 0x1596d bytes
    // win32kbase.sys .text:0x192534, 0x27ef0 bytes
    // win32kfull.sys .text:0x2dd9b8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) create;
};
#include "magic/api.end.hpp"
