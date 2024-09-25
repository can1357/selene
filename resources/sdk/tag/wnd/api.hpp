#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::wnd
{
    // [ClearClipRgnOrMaxClip@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x3f5a4, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) clear_clip_rgn_or_max_clip;
    
    // [GetExplicitClipRgn@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x3afd4, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) get_explicit_clip_rgn;
    
    // [HasState@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4133c, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) has_state;
    
    // [PtOutsideClipRgnOrMaxClip@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xbde50, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) pt_outside_clip_rgn_or_max_clip;
    
    // [ReflectState@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x20d778, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) reflect_state;
};
#include "magic/api.end.hpp"
