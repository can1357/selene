#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::grouped_fg_boost_prop
{
    // [Delete@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7230, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [applyBoost@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15bc58, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) apply_boost;
    
    // [applyBoostIfNeeded@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x6e7cc, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) apply_boost_if_needed;
    
    // [cleanUpAndReplace@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe75f4, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) clean_up_and_replace;
    
    // [ClearGroupedFGBoost@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe71a4, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) clear_grouped_fg_boost;
    
    // [deRefAll@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7638, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) de_ref_all;
    
    // [doBoost@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15bcb0, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) do_boost;
    
    // [doImmediateBoostAll@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe767c, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) do_immediate_boost_all;
    
    // [GetAtom@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7260, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) get_atom;
    
    // [s_atom@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2ada98, 0x27ef0 bytes
    //
    _m9(sdk::unknown_ptr) s_atom;
    
    // [SetGroupedFGBoost@GroupedFGBoostProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7270, 0x27ef0 bytes
    //
    _n0(sdk::unknown_ptr) set_grouped_fg_boost;
};
#include "magic/api.end.hpp"
