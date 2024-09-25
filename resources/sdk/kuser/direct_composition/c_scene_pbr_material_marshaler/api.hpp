#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_pbr_material_marshaler
{
    // [IsPropertyAnimatable@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5828, 0x243e0 bytes
    // win32kbase.sys .text:0x1e35e8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6a24, 0x243e0 bytes
    // win32kbase.sys .text:0x1e47e4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_float_property;
    
    // [EmitSetAlphaCutoffCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df55c, 0x243e0 bytes
    // win32kbase.sys .text:0x2380a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd31c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_alpha_cutoff_command;
    
    // [EmitSetAlphaModeCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df5cc, 0x243e0 bytes
    // win32kbase.sys .text:0x238110, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd38c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_alpha_mode_command;
    
    // [EmitSetEmissiveFactorCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0cc4, 0x243e0 bytes
    // win32kbase.sys .text:0x2391b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dea84, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_emissive_factor_command;
    
    // [EmitSetEmissiveInputCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0d44, 0x243e0 bytes
    // win32kbase.sys .text:0x239234, 0x27ef0 bytes
    // win32kbase.sys .text:0x1deb04, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_emissive_input_command;
    
    // [EmitSetIsDoubleSidedCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e15a4, 0x243e0 bytes
    // win32kbase.sys .text:0x239980, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df364, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_is_double_sided_command;
    
    // [EmitSetNormalInputCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e21f8, 0x243e0 bytes
    // win32kbase.sys .text:0x23a7a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dffb8, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_normal_input_command;
    
    // [EmitSetNormalScaleCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e22f0, 0x243e0 bytes
    // win32kbase.sys .text:0x23a89c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e00b0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_normal_scale_command;
    
    // [EmitSetOcclusionInputCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2360, 0x243e0 bytes
    // win32kbase.sys .text:0x23a90c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0120, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_occlusion_input_command;
    
    // [EmitSetOcclusionStrengthCommand@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e23e4, 0x243e0 bytes
    // win32kbase.sys .text:0x23a990, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e01a4, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_occlusion_strength_command;
    
    // [EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4cac, 0x243e0 bytes
    // win32kbase.sys .text:0x23d1c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2a6c, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c80, 0x243e0 bytes
    // win32kbase.sys .text:0x23dda0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3a40, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e62d8, 0x243e0 bytes
    // win32kbase.sys .text:0x23e4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4098, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6e30, 0x243e0 bytes
    // win32kbase.sys .text:0x23e960, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4bf0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7f8c, 0x243e0 bytes
    // win32kbase.sys .text:0x23fb8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5d4c, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CScenePbrMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8e48, 0x243e0 bytes
    // win32kbase.sys .text:0x240bcc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6c08, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
