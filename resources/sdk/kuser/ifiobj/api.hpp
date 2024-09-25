#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ifiobj
{
    // [fwdExternalLeading@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x80694, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) fwd_external_leading;
    
    // [bSimItalic@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13c2cc, 0x13864 bytes
    // win32kfull.sys .text:0x14520c, 0x1596d bytes
    // win32kfull.sys .text:0x13d438, 0x1659e bytes
    // win32kfull.sys .text:0x14614c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) b_sim_italic;
    
    // [lfOrientation@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80630, 0x13864 bytes
    // win32kfull.sys .text:0x6673c, 0x1596d bytes
    // win32kfull.sys .text:0x7f698, 0x1659e bytes
    // win32kfull.sys .text:0x672ac, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) lf_orientation;
    
    // [lfOutPrecision@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x805e0, 0x13864 bytes
    // win32kfull.sys .text:0x10d850, 0x1596d bytes
    // win32kfull.sys .text:0x7cb0c, 0x1659e bytes
    // win32kfull.sys .text:0x10e780, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) lf_out_precision;
    
    // [pptlBaseline@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x805c4, 0x13864 bytes
    // win32kfull.sys .text:0x6d308, 0x1596d bytes
    // win32kfull.sys .text:0x76f7c, 0x1659e bytes
    // win32kfull.sys .text:0x6de78, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) pptl_baseline;
    
    // [pvSimBold@IFIOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x80604, 0x13864 bytes
    // win32kfull.sys .text:0x101830, 0x1596d bytes
    // win32kfull.sys .text:0x7c768, 0x1659e bytes
    // win32kfull.sys .text:0x102760, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) pv_sim_bold;
};
#include "magic/api.end.hpp"
