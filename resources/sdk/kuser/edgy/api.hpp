#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::edgy
{
    // [FreeEdgyData@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1236d4, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) free_edgy_data;
    
    // [_OnEnterIdle@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2224e4, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) on_enter_idle;
    
    // [_OnStateTransition@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2225f0, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) on_state_transition;
    
    // [ProcessEdgyInertia@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x221938, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) process_edgy_inertia;
    
    // [FreeEdgyFrameData@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x208234, 0x1596d bytes
    // win32kfull.sys .text:0x20a6a4, 0x1659e bytes
    // win32kfull.sys .text:0x2080a4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) free_edgy_frame_data;
    
    // [ProcessInertia@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x208348, 0x1596d bytes
    // win32kfull.sys .text:0x20a7b8, 0x1659e bytes
    // win32kfull.sys .text:0x2081b8, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) process_inertia;
    
    // [_AddOrUpdateListener@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114c58, 0x13864 bytes
    // win32kfull.sys .text:0x208504, 0x1596d bytes
    // win32kfull.sys .text:0x20a8b8, 0x1659e bytes
    // win32kfull.sys .text:0x208374, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) add_or_update_listener;
    
    // [_AdjustFrameHwnd@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221ac8, 0x13864 bytes
    // win32kfull.sys .text:0x20857c, 0x1596d bytes
    // win32kfull.sys .text:0x20a930, 0x1659e bytes
    // win32kfull.sys .text:0x2083ec, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) adjust_frame_hwnd;
    
    // [_AllocListener@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114cf8, 0x13864 bytes
    // win32kfull.sys .text:0x208620, 0x1596d bytes
    // win32kfull.sys .text:0x20a9d4, 0x1659e bytes
    // win32kfull.sys .text:0x208490, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) alloc_listener;
    
    // [_FindListener@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114cc8, 0x13864 bytes
    // win32kfull.sys .text:0x208680, 0x1596d bytes
    // win32kfull.sys .text:0x20aa34, 0x1659e bytes
    // win32kfull.sys .text:0x2084f0, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) find_listener;
    
    // [_GetArcData@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221b88, 0x13864 bytes
    // win32kfull.sys .text:0x2086b8, 0x1596d bytes
    // win32kfull.sys .text:0x20aa6c, 0x1659e bytes
    // win32kfull.sys .text:0x208528, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) get_arc_data;
    
    // [_GetDWordFromRegistry@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221f48, 0x13864 bytes
    // win32kfull.sys .text:0x208adc, 0x1596d bytes
    // win32kfull.sys .text:0x20aeb8, 0x1659e bytes
    // win32kfull.sys .text:0x20894c, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) get_d_word_from_registry;
    
    // [_GetDisambiguationArcData@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222040, 0x13864 bytes
    // win32kfull.sys .text:0x208c0c, 0x1596d bytes
    // win32kfull.sys .text:0x20afe8, 0x1659e bytes
    // win32kfull.sys .text:0x208a7c, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) get_disambiguation_arc_data;
    
    // [_GetRectForLocation@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22212c, 0x13864 bytes
    // win32kfull.sys .text:0x208cfc, 0x1596d bytes
    // win32kfull.sys .text:0x20b0d8, 0x1659e bytes
    // win32kfull.sys .text:0x208b6c, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) get_rect_for_location;
    
    // [_GrowListeners@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114d50, 0x13864 bytes
    // win32kfull.sys .text:0x208d74, 0x1596d bytes
    // win32kfull.sys .text:0x20b150, 0x1659e bytes
    // win32kfull.sys .text:0x208be4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) grow_listeners;
    
    // [_HitTestEdgyRegion@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22219c, 0x13864 bytes
    // win32kfull.sys .text:0x208e0c, 0x1596d bytes
    // win32kfull.sys .text:0x20b1e8, 0x1659e bytes
    // win32kfull.sys .text:0x208c7c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) hit_test_edgy_region;
    
    // [_InertiaRegionIntersectsTopEdge@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2222e0, 0x13864 bytes
    // win32kfull.sys .text:0x208f6c, 0x1596d bytes
    // win32kfull.sys .text:0x20b348, 0x1659e bytes
    // win32kfull.sys .text:0x208ddc, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) inertia_region_intersects_top_edge;
    
    // [_InitializeData@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x114dd4, 0x13864 bytes
    // win32kfull.sys .text:0x20902c, 0x1596d bytes
    // win32kfull.sys .text:0x20b408, 0x1659e bytes
    // win32kfull.sys .text:0x208e9c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) initialize_data;
    
    // [_IsLegacyDevice@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222398, 0x13864 bytes
    // win32kfull.sys .text:0x2090f0, 0x1596d bytes
    // win32kfull.sys .text:0x15c9bc, 0x1659e bytes
    // win32kfull.sys .text:0x208f60, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) is_legacy_device;
    
    // [OnDeviceRemoval@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11da34, 0x13864 bytes
    // win32kfull.sys .text:0x2082b8, 0x1596d bytes
    // win32kfull.sys .text:0x20a728, 0x1659e bytes
    // win32kfull.sys .text:0x208128, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) on_device_removal;
    
    // [_OnEnterActive@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222418, 0x13864 bytes
    // win32kfull.sys .text:0x20916c, 0x1596d bytes
    // win32kfull.sys .text:0x20b4cc, 0x1659e bytes
    // win32kfull.sys .text:0x208fdc, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) on_enter_active;
    
    // [_OnEnterDisambiguation@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222478, 0x13864 bytes
    // win32kfull.sys .text:0x2091d4, 0x1596d bytes
    // win32kfull.sys .text:0x20b534, 0x1659e bytes
    // win32kfull.sys .text:0x209044, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) on_enter_disambiguation;
    
    // [_OnInput@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22252c, 0x13864 bytes
    // win32kfull.sys .text:0x20924c, 0x1596d bytes
    // win32kfull.sys .text:0x20b5ac, 0x1659e bytes
    // win32kfull.sys .text:0x2090bc, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) on_input;
    
    // [_PostEdgyInertia@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x222684, 0x13864 bytes
    // win32kfull.sys .text:0x2093cc, 0x1596d bytes
    // win32kfull.sys .text:0x20b72c, 0x1659e bytes
    // win32kfull.sys .text:0x20923c, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) post_edgy_inertia;
    
    // [ProcessInput@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221a0c, 0x13864 bytes
    // win32kfull.sys .text:0x208448, 0x1596d bytes
    // win32kfull.sys .text:0x15c900, 0x1659e bytes
    // win32kfull.sys .text:0x2082b8, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) process_input;
    
    // [_RemoveListenerCore@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11dac0, 0x13864 bytes
    // win32kfull.sys .text:0x209428, 0x1596d bytes
    // win32kfull.sys .text:0x20b788, 0x1659e bytes
    // win32kfull.sys .text:0x209298, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) remove_listener_core;
    
    // [_SqmEdgy@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2226dc, 0x13864 bytes
    // win32kfull.sys .text:0x209494, 0x1596d bytes
    // win32kfull.sys .text:0x20b7f4, 0x1659e bytes
    // win32kfull.sys .text:0x209304, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) sqm_edgy;
    
    // [_StoreLastUpDataAndPost@Edgy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2227b8, 0x13864 bytes
    // win32kfull.sys .text:0x209554, 0x1596d bytes
    // win32kfull.sys .text:0x20b8b4, 0x1659e bytes
    // win32kfull.sys .text:0x2093c4, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) store_last_up_data_and_post;
};
#include "magic/api.end.hpp"
