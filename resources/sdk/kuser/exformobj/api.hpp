#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::exformobj
{
    // [bValid@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x5cfd0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) b_valid;
    
    // [bComputeUnits@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4060, 0x1eb80 bytes
    // win32kbase.sys .text:0x14e640, 0x243e0 bytes
    // win32kbase.sys .text:0x181710, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bea0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) b_compute_units;
    
    // [bEqualExceptTranslations@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60e10, 0x1eb80 bytes
    // win32kbase.sys .text:0x9c260, 0x243e0 bytes
    // win32kbase.sys .text:0xa5790, 0x27ef0 bytes
    // win32kbase.sys .text:0x85ec0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) b_equal_except_translations;
    
    // [bInverse@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x605c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d8d0, 0x243e0 bytes
    // win32kbase.sys .text:0xa7240, 0x27ef0 bytes
    // win32kbase.sys .text:0x9eee0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) b_inverse;
    
    // [bMultToWorld@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b24f8, 0x13864 bytes
    // win32kfull.sys .text:0x2b6b00, 0x1596d bytes
    // win32kfull.sys .text:0x2b7ce8, 0x1659e bytes
    // win32kfull.sys .text:0x2b6a70, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) b_mult_to_world;
    
    // [bMultiply@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60780, 0x1eb80 bytes
    // win32kbase.sys .text:0x4dad0, 0x243e0 bytes
    // win32kbase.sys .text:0x34ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18d70, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) b_multiply;
    
    // [bRotationOrMirroring@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12c400, 0x13864 bytes
    // win32kfull.sys .text:0x145d94, 0x1596d bytes
    // win32kfull.sys .text:0x13b908, 0x1659e bytes
    // win32kfull.sys .text:0x146cd4, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) b_rotation_or_mirroring;
    
    // [bXform@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x9386c, 0x13864 bytes
    // win32kfull.sys .text:0x42228, 0x1596d bytes
    // win32kfull.sys .text:0x627ac, 0x1659e bytes
    // win32kfull.sys .text:0x42638, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) b_xform;
    
    // [bXformRound@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60d00, 0x1eb80 bytes
    // win32kbase.sys .text:0xca290, 0x243e0 bytes
    // win32kbase.sys .text:0xa4790, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8c30, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) b_xform_round;
    
    // [??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x93898, 0x13864 bytes
    // win32kfull.sys .text:0x12f924, 0x1596d bytes
    // win32kfull.sys .text:0x125024, 0x1659e bytes
    // win32kfull.sys .text:0x130864, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [??0EXFORMOBJ@@QEAA@KK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x84c10, 0x1eb80 bytes
    // win32kbase.sys .text:0xcb660, 0x243e0 bytes
    // win32kbase.sys .text:0xdd280, 0x27ef0 bytes
    // win32kbase.sys .text:0xca000, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) construct_instance_;
    
    // [vComputeAccelFlags@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60ba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4d8e0, 0x243e0 bytes
    // win32kbase.sys .text:0x34cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18b80, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) v_compute_accel_flags;
    
    // [vComputeWtoDAccelFlags@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b25d0, 0x13864 bytes
    // win32kfull.sys .text:0x13e53c, 0x1596d bytes
    // win32kfull.sys .text:0x12fccc, 0x1659e bytes
    // win32kfull.sys .text:0x13f47c, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) v_compute_wto_d_accel_flags;
    
    // [vGetCoefficient@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60a20, 0x1eb80 bytes
    // win32kbase.sys .text:0x9dbd0, 0x243e0 bytes
    // win32kbase.sys .text:0xa7460, 0x27ef0 bytes
    // win32kbase.sys .text:0x17600, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) v_get_coefficient;
    
    // [vInit@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60ed0, 0x1eb80 bytes
    // win32kbase.sys .text:0x4de70, 0x243e0 bytes
    // win32kbase.sys .text:0x33bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19110, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) v_init;
    
    // [vInitPageToDevice@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2b263c, 0x13864 bytes
    // win32kfull.sys .text:0x13e49c, 0x1596d bytes
    // win32kfull.sys .text:0x12fc2c, 0x1659e bytes
    // win32kfull.sys .text:0x13f3dc, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) v_init_page_to_device;
    
    // [vOrder@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60900, 0x1eb80 bytes
    // win32kbase.sys .text:0x9dd10, 0x243e0 bytes
    // win32kbase.sys .text:0x32ea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x17550, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) v_order;
    
    // [vQuickInit@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x93818, 0x13864 bytes
    // win32kfull.sys .text:0xf0fd0, 0x1596d bytes
    // win32kfull.sys .text:0xe5fd0, 0x1659e bytes
    // win32kfull.sys .text:0xf1df0, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) v_quick_init;
    
    // [vRemoveTranslation@EXFORMOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x60b80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9620, 0x243e0 bytes
    // win32kbase.sys .text:0xb92c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ea30, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) v_remove_translation;
};
#include "magic/api.end.hpp"
