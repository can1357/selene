#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ns_instrumentation
{
    // [PlatformAllocateFromPagedLookasideList@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kfull.sys .text:0x2dcab8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) platform_allocate_from_paged_lookaside_list;
    
    // [PlatformFreeToPagedLookasideList@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kfull.sys .text:0x2dcafc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) platform_free_to_paged_lookaside_list;
    
    // [PlatformDebugModeEnabled@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x9ac40, 0x27ef0 bytes
    // win32kbase.sys .text:0xd44f8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) platform_debug_mode_enabled;
    
    // [PlatformAbort@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dca98, 0x1596d bytes
    // win32kfull.sys .text:0x2dde84, 0x1659e bytes
    // win32kfull.sys .text:0x2dca08, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) platform_abort;
    
    // [PlatformAllocate@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xde4f0, 0x13864 bytes
    // win32kfull.sys .text:0xedab0, 0x1596d bytes
    // win32kfull.sys .text:0xee8d0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) platform_allocate;
    
    // [PlatformCreateSection@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14ea6c, 0x1596d bytes
    // win32kfull.sys .text:0xe845c, 0x1659e bytes
    // win32kfull.sys .text:0x14f9ac, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) platform_create_section;
    
    // [PlatformFree@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0xde460, 0x13864 bytes
    // win32kfull.sys .text:0x101af0, 0x1596d bytes
    // win32kfull.sys .text:0x102a20, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) platform_free;
    
    // [PlatformMapViewInSessionSpace@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x14ea24, 0x1596d bytes
    // win32kfull.sys .text:0xe8414, 0x1659e bytes
    // win32kfull.sys .text:0x14f964, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) platform_map_view_in_session_space;
    
    // [WriteAllocTableDumpBufferCallback@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7b10, 0x13864 bytes
    // win32kfull.sys .text:0x2de0a0, 0x1596d bytes
    // win32kbase.sys .text:0x192c70, 0x27ef0 bytes
    // win32kfull.sys .text:0x2de0b0, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) write_alloc_table_dump_buffer_callback;
    
    // [WriteBackTraceDumpBufferCallback@NSInstrumentation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7b48, 0x13864 bytes
    // win32kfull.sys .text:0x2de0e0, 0x1596d bytes
    // win32kbase.sys .text:0x192cb0, 0x27ef0 bytes
    // win32kfull.sys .text:0x2de0f0, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) write_back_trace_dump_buffer_callback;
};
#include "magic/api.end.hpp"
