#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::composition_input_object
{
    // [AssociateWithVisual@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x33314, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) associate_with_visual;
    
    // [ValidateInputSink@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9e660, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) validate_input_sink;
    
    // [GetBaseWindowForInputType@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x2037d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2015a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_base_window_for_input_type;
    
    // [GetInputFlags@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x129920, 0x243e0 bytes
    // win32kbase.sys .text:0x15b6b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x126af0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_input_flags;
    
    // [OpenDwmHandle@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e1e0, 0x243e0 bytes
    // win32kbase.sys .text:0xab210, 0x27ef0 bytes
    // win32kbase.sys .text:0x40be0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) open_dwm_handle;
    
    // [QueryInputQueueForInputType@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x733d8, 0x243e0 bytes
    // win32kbase.sys .text:0xafa64, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4e8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) query_input_queue_for_input_type;
    
    // [GetWindowForInputType@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3410, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e90, 0x243e0 bytes
    // win32kbase.sys .text:0x2080, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e90, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_window_for_input_type;
    
    // [IsImplicit@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3490, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1d80, 0x243e0 bytes
    // win32kbase.sys .text:0xcb590, 0x27ef0 bytes
    // win32kbase.sys .text:0xa81c0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_implicit;
    
    // [KernelCreateCompositionInputSink@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x307b8, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa6f4, 0x243e0 bytes
    // win32kbase.sys .text:0x9bb14, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0204, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) kernel_create_composition_input_sink;
    
    // [LockForRead@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6450, 0x1eb80 bytes
    // win32kbase.sys .text:0x73520, 0x243e0 bytes
    // win32kbase.sys .text:0xafe60, 0x27ef0 bytes
    // win32kbase.sys .text:0xb630, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) lock_for_read;
    
    // [LockForWrite@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33370, 0x1eb80 bytes
    // win32kbase.sys .text:0xa7110, 0x243e0 bytes
    // win32kbase.sys .text:0xafd50, 0x27ef0 bytes
    // win32kbase.sys .text:0x961d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) lock_for_write;
    
    // [ObjectInit@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33ac0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6c30, 0x243e0 bytes
    // win32kbase.sys .text:0xb00f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x95cf0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) object_init;
    
    // [QueryInputQueueTypes@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x331c4, 0x1eb80 bytes
    // win32kbase.sys .text:0xac9fc, 0x243e0 bytes
    // win32kbase.sys .text:0xaf7fc, 0x27ef0 bytes
    // win32kbase.sys .text:0xa316c, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) query_input_queue_types;
    
    // [QueryTransform@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d30a4, 0x13864 bytes
    // win32kfull.sys .text:0x64f0, 0x1596d bytes
    // win32kfull.sys .text:0x4198, 0x1659e bytes
    // win32kfull.sys .text:0x68a0, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) query_transform;
    
    // [ResolveHandle@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35810, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1170, 0x243e0 bytes
    // win32kbase.sys .text:0xb0570, 0x27ef0 bytes
    // win32kbase.sys .text:0x8fdd0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) resolve_handle;
    
    // [SetDropTarget@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3321c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6930, 0x243e0 bytes
    // win32kbase.sys .text:0xaf3d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x959f0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_drop_target;
    
    // [UpdateTransform@CompositionInputObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3498, 0x1eb80 bytes
    // win32kbase.sys .text:0x1be0, 0x243e0 bytes
    // win32kbase.sys .text:0xafc50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1be0, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) update_transform;
};
#include "magic/api.end.hpp"
