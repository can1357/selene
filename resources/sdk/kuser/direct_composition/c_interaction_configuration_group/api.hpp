#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_interaction_configuration_group
{
    // [ClearConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa29a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb2b8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x91de0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_configuration;
    
    // [EmitUpdateMousewheelConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b408, 0x243e0 bytes
    // win32kbase.sys .text:0xba344, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ba78, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_mousewheel_configuration;
    
    // [ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa23fc, 0x243e0 bytes
    // win32kbase.sys .text:0xb278c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9183c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) process_update_pen_configuration_list;
    
    // [ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fa18, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2838, 0x243e0 bytes
    // win32kbase.sys .text:0xb29a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x91c78, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) apply_config_operation;
    
    // [EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f780, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b390, 0x243e0 bytes
    // win32kbase.sys .text:0xba2cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ba00, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdateMouseConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f404, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b49c, 0x243e0 bytes
    // win32kbase.sys .text:0xba3d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x9bb0c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_mouse_configuration;
    
    // [EmitUpdatePenConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f48c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b530, 0x243e0 bytes
    // win32kbase.sys .text:0xba46c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9bba0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_pen_configuration;
    
    // [EmitUpdateTouchConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f62c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b7a4, 0x243e0 bytes
    // win32kbase.sys .text:0xba6c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x9be14, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_update_touch_configuration;
    
    // [EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f50c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7b678, 0x243e0 bytes
    // win32kbase.sys .text:0xba598, 0x27ef0 bytes
    // win32kbase.sys .text:0x9bce8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_touchpad_configuration;
    
    // [ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f74c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa22cc, 0x243e0 bytes
    // win32kbase.sys .text:0xb265c, 0x27ef0 bytes
    // win32kbase.sys .text:0x9170c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) process_update_configuration;
    
    // [ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f2c4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2314, 0x243e0 bytes
    // win32kbase.sys .text:0xb26a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x91754, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) process_update_touch_configuration_list;
    
    // [ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f24c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2388, 0x243e0 bytes
    // win32kbase.sys .text:0xb2718, 0x27ef0 bytes
    // win32kbase.sys .text:0x917c8, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) process_update_touchpad_configuration;
    
    // [ReleaseAllReferences@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f7e4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2a54, 0x243e0 bytes
    // win32kbase.sys .text:0xb2d24, 0x27ef0 bytes
    // win32kbase.sys .text:0x91e94, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) release_all_references;
    
    // [SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f33c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2578, 0x243e0 bytes
    // win32kbase.sys .text:0xb24fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x919b8, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_configuration_all;
    
    // [UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6f0a8, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2694, 0x243e0 bytes
    // win32kbase.sys .text:0xb2800, 0x27ef0 bytes
    // win32kbase.sys .text:0x91ad4, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) update_contact_count_configuration_array;
};
#include "magic/api.end.hpp"
