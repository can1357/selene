#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_telemetry_info
{
    // [AddInteractionBeginInfo@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kbase.sys .text:0x4464, 0x1eb80 bytes
    // win32kbase.sys .text:0x8e88, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) add_interaction_begin_info;
    
    // [AddInteractionUpdateInfo@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2e14, 0x243e0 bytes
    // win32kbase.sys .text:0x7074, 0x27ef0 bytes
    // win32kbase.sys .text:0x2e14, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_interaction_update_info;
    
    // [AnimationScenarioBegin@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c270, 0x1eb80 bytes
    // win32kbase.sys .text:0xb086c, 0x243e0 bytes
    // win32kbase.sys .text:0x80bc, 0x27ef0 bytes
    // win32kbase.sys .text:0xa6e0c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) animation_scenario_begin;
    
    // [AnimationScenarioReference@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c34c, 0x1eb80 bytes
    // win32kbase.sys .text:0xb66dc, 0x243e0 bytes
    // win32kbase.sys .text:0x8dc4, 0x27ef0 bytes
    // win32kbase.sys .text:0xb001c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) animation_scenario_reference;
    
    // [AnimationScenarioUnreference@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c3e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb6778, 0x243e0 bytes
    // win32kbase.sys .text:0x95a8, 0x27ef0 bytes
    // win32kbase.sys .text:0xb00b8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) animation_scenario_unreference;
    
    // [EmitAnimationCommands@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c630, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a3fc, 0x243e0 bytes
    // win32kbase.sys .text:0xab904, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d670, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_animation_commands;
    
    // [EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c59c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a344, 0x243e0 bytes
    // win32kbase.sys .text:0xab844, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d5b8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_begin_interaction_commands;
    
    // [EmitEndInteractionCommands@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c474, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a1f4, 0x243e0 bytes
    // win32kbase.sys .text:0xab6a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d468, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_end_interaction_commands;
    
    // [EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c500, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a284, 0x243e0 bytes
    // win32kbase.sys .text:0xab734, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d4f8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_interaction_commands;
    
    // [SetApplicationId@CTelemetryInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c18c, 0x1eb80 bytes
    // win32kbase.sys .text:0xafb34, 0x243e0 bytes
    // win32kbase.sys .text:0xc2488, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5b94, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_application_id;
};
#include "magic/api.end.hpp"
