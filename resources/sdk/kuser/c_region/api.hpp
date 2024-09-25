#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_region
{
    // [InternalCombine@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x42ac8, 0x243e0 bytes
    // win32kbase.sys .text:0x2e5d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x39558, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) internal_combine;
    
    // [IsEmpty@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaa0a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb88d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9f8b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_empty;
    
    // [IsFullRegion@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x150470, 0x243e0 bytes
    // win32kbase.sys .text:0x183460, 0x27ef0 bytes
    // win32kbase.sys .text:0x14e310, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_full_region;
    
    // [AddRect@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cbe8, 0x1eb80 bytes
    // win32kbase.sys .text:0x42810, 0x243e0 bytes
    // win32kbase.sys .text:0x2e3c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x95580, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) add_rect;
    
    // [Combine@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cdac, 0x1eb80 bytes
    // win32kbase.sys .text:0x42ab0, 0x243e0 bytes
    // win32kbase.sys .text:0x2e5c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x39540, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) combine;
    
    // [Create@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfd1ec, 0x1eb80 bytes
    // win32kbase.sys .text:0x1503a0, 0x243e0 bytes
    // win32kbase.sys .text:0x183380, 0x27ef0 bytes
    // win32kbase.sys .text:0x14e240, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) create;
    
    // [GetRegionHandleAndReset@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cd2c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3300, 0x243e0 bytes
    // win32kbase.sys .text:0x4fe70, 0x27ef0 bytes
    // win32kbase.sys .text:0x162d0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_region_handle_and_reset;
    
    // [InitializeFromRect@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cb54, 0x1eb80 bytes
    // win32kbase.sys .text:0x42940, 0x243e0 bytes
    // win32kbase.sys .text:0x2e4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x30bd4, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) initialize_from_rect;
    
    // [Release@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ccf4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3250, 0x243e0 bytes
    // win32kbase.sys .text:0xada20, 0x27ef0 bytes
    // win32kbase.sys .text:0x92760, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release;
    
    // [sc_rcEmpty@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105ca8, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x216fa0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x266678, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2138f8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) sc_rc_empty;
    
    // [SetEmpty@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cb2c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9010, 0x243e0 bytes
    // win32kbase.sys .text:0xb67e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x163a0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_empty;
    
    // [SetFullRegion@CRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cf0c, 0x1eb80 bytes
    // win32kbase.sys .text:0xb34a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc7aa0, 0x27ef0 bytes
    // win32kbase.sys .text:0xabb10, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_full_region;
};
#include "magic/api.end.hpp"
