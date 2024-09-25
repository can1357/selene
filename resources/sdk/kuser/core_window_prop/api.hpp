#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_window_prop
{
    // [GetFocusDirection@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x400c0, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) get_focus_direction;
    
    // [IsComponentThreadOf@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2284d0, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) is_component_thread_of;
    
    // [IsHostOrComponentThreadOf@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1cd6cc, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) is_host_or_component_thread_of;
    
    // [SetFocusDirection@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22857c, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) set_focus_direction;
    
    // [SetHost@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2285a8, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) set_host;
    
    // [SetRole@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22862c, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) set_role;
    
    // [GetNearestCoreWindowAncestor@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x323b0, 0x1596d bytes
    // win32kfull.sys .text:0x327c0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) get_nearest_core_window_ancestor;
    
    // [ChangeRole@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114808, 0x1596d bytes
    // win32kfull.sys .text:0x23b880, 0x1659e bytes
    // win32kfull.sys .text:0x115738, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) change_role;
    
    // [CompositeAppHasForeground@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x751c, 0x1596d bytes
    // win32kfull.sys .text:0x24c8, 0x1659e bytes
    // win32kfull.sys .text:0x78cc, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) composite_app_has_foreground;
    
    // [FindComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4b7c, 0x1596d bytes
    // win32kfull.sys .text:0x23b994, 0x1659e bytes
    // win32kfull.sys .text:0x4f2c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) find_component;
    
    // [GetCompositeAppFrameWindowOrSelf@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7b274, 0x1596d bytes
    // win32kfull.sys .text:0xaf25c, 0x1659e bytes
    // win32kfull.sys .text:0x7bde4, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) get_composite_app_frame_window_or_self;
    
    // [GetNextComponentWindow@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7bec, 0x1596d bytes
    // win32kfull.sys .text:0x23ba34, 0x1659e bytes
    // win32kfull.sys .text:0x7f9c, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) get_next_component_window;
    
    // [GetTopLevelHostForComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x7bd38, 0x1596d bytes
    // win32kfull.sys .text:0xaf288, 0x1659e bytes
    // win32kfull.sys .text:0x7c8a8, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) get_top_level_host_for_component;
    
    // [IsCompositeAppOrSelfDisabled@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb0f30, 0x1596d bytes
    // win32kfull.sys .text:0x56a38, 0x1659e bytes
    // win32kfull.sys .text:0xb1aa0, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) is_composite_app_or_self_disabled;
    
    // [IsHost@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x78110, 0x1596d bytes
    // win32kfull.sys .text:0x3d9e4, 0x1659e bytes
    // win32kfull.sys .text:0x78c80, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) is_host;
    
    // [IsPartOfCompositeApplication@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3235c, 0x1596d bytes
    // win32kfull.sys .text:0x106734, 0x1659e bytes
    // win32kfull.sys .text:0x3276c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) is_part_of_composite_application;
    
    // [RemoveComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e660, 0x1596d bytes
    // win32kfull.sys .text:0x23baf4, 0x1659e bytes
    // win32kfull.sys .text:0x23e510, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) remove_component;
    
    // [RemoveComponentInternal@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e68c, 0x1596d bytes
    // win32kfull.sys .text:0x23bb20, 0x1659e bytes
    // win32kfull.sys .text:0x23e53c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) remove_component_internal;
    
    // [UnlinkAndDestroyComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e720, 0x1596d bytes
    // win32kfull.sys .text:0x23bbac, 0x1659e bytes
    // win32kfull.sys .text:0x23e5d0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) unlink_and_destroy_component;
    
    // [xxxSetHost@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x495c, 0x1596d bytes
    // win32kfull.sys .text:0x23bc20, 0x1659e bytes
    // win32kfull.sys .text:0x4d0c, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) xxx_set_host;
    
    // [Delete@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228450, 0x13864 bytes
    // win32kfull.sys .text:0x127330, 0x1596d bytes
    // win32kfull.sys .text:0x23b940, 0x1659e bytes
    // win32kfull.sys .text:0x128270, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) _delete;
    
    // [AddComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22837c, 0x13864 bytes
    // win32kfull.sys .text:0x4a40, 0x1596d bytes
    // win32kfull.sys .text:0x23b738, 0x1659e bytes
    // win32kfull.sys .text:0x4df0, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) add_component;
    
    // [GetAtom@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149e80, 0x13864 bytes
    // win32kfull.sys .text:0x129370, 0x1596d bytes
    // win32kfull.sys .text:0x119940, 0x1659e bytes
    // win32kfull.sys .text:0x12a2b0, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) get_atom;
    
    // [GetHost@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2284ac, 0x13864 bytes
    // win32kfull.sys .text:0x113b68, 0x1596d bytes
    // win32kfull.sys .text:0x23ba00, 0x1659e bytes
    // win32kfull.sys .text:0x114a98, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) get_host;
    
    // [GetTopLevelHost@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb7c8, 0x13864 bytes
    // win32kfull.sys .text:0x32264, 0x1596d bytes
    // win32kfull.sys .text:0x23baa4, 0x1659e bytes
    // win32kfull.sys .text:0x32674, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) get_top_level_host;
    
    // [IsComponent@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x40de8, 0x13864 bytes
    // win32kfull.sys .text:0x7dd38, 0x1596d bytes
    // win32kfull.sys .text:0xafc98, 0x1659e bytes
    // win32kfull.sys .text:0x7e8a8, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) is_component;
    
    // [IsHostThreadOf@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x228538, 0x13864 bytes
    // win32kfull.sys .text:0x113b10, 0x1596d bytes
    // win32kfull.sys .text:0x143650, 0x1659e bytes
    // win32kfull.sys .text:0x114a40, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) is_host_thread_of;
    
    // [s_atom@CoreWindowProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3290b4, 0x13864 bytes
    // win32kfull.sys .data:0x33aee4, 0x1596d bytes
    // win32kfull.sys .data:0x339260, 0x1659e bytes
    // win32kfull.sys .data:0x33af14, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) s_atom;
};
#include "magic/api.end.hpp"
