#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_tls
{
    // [s_CreationState@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .data:0x329268, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) s_creation_state;
    
    // [s_FontDriverThreadsReadyEvent@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .data:0x329260, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) s_font_driver_threads_ready_event;
    
    // [CommitUMBuffer@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7bec, 0x13864 bytes
    // win32kfull.sys .text:0x3c6cc, 0x1596d bytes
    // win32kfull.sys .text:0x6acec, 0x1659e bytes
    // win32kfull.sys .text:0x3cadc, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) commit_um_buffer;
    
    // [Create@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7c2c, 0x13864 bytes
    // win32kfull.sys .text:0x122d60, 0x1596d bytes
    // win32kfull.sys .text:0x69314, 0x1659e bytes
    // win32kfull.sys .text:0x123ca0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [Destroy@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7c84, 0x13864 bytes
    // win32kfull.sys .text:0x10acfc, 0x1596d bytes
    // win32kfull.sys .text:0x6952c, 0x1659e bytes
    // win32kfull.sys .text:0x10bc2c, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) destroy;
    
    // [EnsureTls@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2d7cac, 0x13864 bytes
    // win32kfull.sys .text:0x3ee80, 0x1596d bytes
    // win32kfull.sys .text:0x6c860, 0x1659e bytes
    // win32kfull.sys .text:0x3f290, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) ensure_tls;
    
    // [TryComputeAlignedFieldSizes@UmfdTls]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2dac5c, 0x13864 bytes
    // win32kfull.sys .text:0x13ea90, 0x1596d bytes
    // win32kfull.sys .text:0x6a824, 0x1659e bytes
    // win32kfull.sys .text:0x13f9d0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) try_compute_aligned_field_sizes;
};
#include "magic/api.end.hpp"
