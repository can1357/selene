#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_queue_prop
{
    // [InvalidateInputQueues@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11763c, 0x1596d bytes
    // win32kfull.sys .text:0x10a5ac, 0x1659e bytes
    // win32kfull.sys .text:0x11856c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) invalidate_input_queues;
    
    // [Delete@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x473a0, 0x13864 bytes
    // win32kfull.sys .text:0x117610, 0x1596d bytes
    // win32kfull.sys .text:0x10a580, 0x1659e bytes
    // win32kfull.sys .text:0x118540, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [AttachInputQueue@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x47340, 0x13864 bytes
    // win32kfull.sys .text:0x5256c, 0x1596d bytes
    // win32kfull.sys .text:0x83ca8, 0x1659e bytes
    // win32kfull.sys .text:0x5298c, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) attach_input_queue;
    
    // [DetachInputQueue@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x472d8, 0x13864 bytes
    // win32kfull.sys .text:0xcca08, 0x1596d bytes
    // win32kfull.sys .text:0x1d54, 0x1659e bytes
    // win32kfull.sys .text:0xcd6c8, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) detach_input_queue;
    
    // [GetAtom@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x472d0, 0x13864 bytes
    // win32kfull.sys .text:0x129380, 0x1596d bytes
    // win32kfull.sys .text:0x119950, 0x1659e bytes
    // win32kfull.sys .text:0x12a2c0, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_atom;
    
    // [ReferenceAndStoreUIOwnerPwnd@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xa5a0, 0x13864 bytes
    // win32kfull.sys .text:0x241c44, 0x1596d bytes
    // win32kfull.sys .text:0x15d482, 0x1659e bytes
    // win32kfull.sys .text:0x241af4, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) reference_and_store_ui_owner_pwnd;
    
    // [s_atom@CInputQueueProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x326d64, 0x13864 bytes
    // win32kfull.sys .data:0x33a134, 0x1596d bytes
    // win32kfull.sys .data:0x338360, 0x1659e bytes
    // win32kfull.sys .data:0x33a184, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) s_atom;
};
#include "magic/api.end.hpp"
