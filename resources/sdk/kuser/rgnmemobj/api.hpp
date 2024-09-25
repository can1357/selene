#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::rgnmemobj
{
    // [AllocateRegion@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x49050, 0x243e0 bytes
    // win32kbase.sys .text:0x32b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x30dc0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) allocate_region;
    
    // [??1RGNMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x65904, 0x13864 bytes
    // win32kbase.sys .text:0xacaec, 0x243e0 bytes
    // win32kbase.sys .text:0xa325c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeScanLookAsideList@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ec0, 0x243e0 bytes
    // win32kbase.sys .text:0xd8ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x76c80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_scan_look_aside_list;
    
    // [s_pSCANLookAsideList@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ab48, 0x243e0 bytes
    // win32kbase.sys .data:0x2af958, 0x27ef0 bytes
    // win32kbase.sys .data:0x257b68, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) s_p_scan_look_aside_list;
    
    // [vDestroyScanLookAsideList@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80f60, 0x243e0 bytes
    // win32kbase.sys .text:0x96790, 0x27ef0 bytes
    // win32kbase.sys .text:0xc5170, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) v_destroy_scan_look_aside_list;
    
    // [bAddNullScan@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x84978, 0x1eb80 bytes
    // win32kbase.sys .text:0xcbe64, 0x243e0 bytes
    // win32kbase.sys .text:0xdca38, 0x27ef0 bytes
    // win32kbase.sys .text:0xca804, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) b_add_null_scan;
    
    // [bAddScans@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x849e4, 0x1eb80 bytes
    // win32kbase.sys .text:0xca808, 0x243e0 bytes
    // win32kbase.sys .text:0xdb7b4, 0x27ef0 bytes
    // win32kbase.sys .text:0xc91a8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) b_add_scans;
    
    // [bFastFill@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x586a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x419f0, 0x243e0 bytes
    // win32kbase.sys .text:0x9d968, 0x27ef0 bytes
    // win32kbase.sys .text:0x39e74, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) b_fast_fill;
    
    // [bFastFillWrapper@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x58c68, 0x1eb80 bytes
    // win32kbase.sys .text:0x42e24, 0x243e0 bytes
    // win32kbase.sys .text:0x9d614, 0x27ef0 bytes
    // win32kbase.sys .text:0x39028, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_fast_fill_wrapper;
    
    // [bMergeScanline@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12a3e8, 0x13864 bytes
    // win32kfull.sys .text:0x2b8df4, 0x1596d bytes
    // win32kfull.sys .text:0x2ba1e0, 0x1659e bytes
    // win32kfull.sys .text:0x2b8d64, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) b_merge_scanline;
    
    // [??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x593b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf220, 0x243e0 bytes
    // win32kbase.sys .text:0xb78a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5560, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) construct_instance;
    
    // [??0RGNMEMOBJ@@QEAA@HH@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x592a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x429e0, 0x243e0 bytes
    // win32kbase.sys .text:0x132d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x30cd0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) construct_instance_;
    
    // [??0RGNMEMOBJ@@QEAA@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x593d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x485b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2f7f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x30940, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) construct_instance__;
    
    // [??0RGNMEMOBJ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x593f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x993c0, 0x243e0 bytes
    // win32kbase.sys .text:0x37bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x81f90, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) construct_instance___;
    
    // [iReduce@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc53d8, 0x1eb80 bytes
    // win32kbase.sys .text:0xcb76c, 0x243e0 bytes
    // win32kbase.sys .text:0xdc2ac, 0x27ef0 bytes
    // win32kbase.sys .text:0xca10c, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) i_reduce;
    
    // [vCreate@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x58dc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x422b0, 0x243e0 bytes
    // win32kbase.sys .text:0x9d0a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x396e0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) v_create;
    
    // [vInitialize@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x59308, 0x1eb80 bytes
    // win32kbase.sys .text:0x48894, 0x243e0 bytes
    // win32kbase.sys .text:0x32a64, 0x27ef0 bytes
    // win32kbase.sys .text:0x30964, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) v_initialize;
    
    // [vPopThreadGuardedObject@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x59190, 0x1eb80 bytes
    // win32kbase.sys .text:0x9a490, 0x243e0 bytes
    // win32kbase.sys .text:0xa4010, 0x27ef0 bytes
    // win32kbase.sys .text:0x83290, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) v_pop_thread_guarded_object;
    
    // [vPushThreadGuardedObject@RGNMEMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x591e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x48bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x2f200, 0x27ef0 bytes
    // win32kbase.sys .text:0x30ab0, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) v_push_thread_guarded_object;
};
#include "magic/api.end.hpp"
