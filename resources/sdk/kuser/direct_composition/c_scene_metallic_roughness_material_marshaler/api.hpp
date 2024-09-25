#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_metallic_roughness_material_marshaler
{
    // [GetFloatAnimatableProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5420, 0x243e0 bytes
    // win32kbase.sys .text:0x1e31e0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e57f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e35b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e69c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4780, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfd28, 0x243e0 bytes
    // win32kbase.sys .text:0x238604, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddae8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_base_color_factor_command;
    
    // [EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfda4, 0x243e0 bytes
    // win32kbase.sys .text:0x238680, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddb64, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_base_color_input_command;
    
    // [EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1bc8, 0x243e0 bytes
    // win32kbase.sys .text:0x23a174, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df988, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_metallic_factor_command;
    
    // [EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1c3c, 0x243e0 bytes
    // win32kbase.sys .text:0x23a1e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df9fc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_metallic_roughness_input_command;
    
    // [EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e30ec, 0x243e0 bytes
    // win32kbase.sys .text:0x23b5c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0eac, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_roughness_factor_command;
    
    // [EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d070, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2960, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5620, 0x243e0 bytes
    // win32kbase.sys .text:0x23d900, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e33e0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5ba0, 0x243e0 bytes
    // win32kbase.sys .text:0x23dcc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3960, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6280, 0x243e0 bytes
    // win32kbase.sys .text:0x23e470, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4040, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7d10, 0x243e0 bytes
    // win32kbase.sys .text:0x23f910, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e5ad0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8d50, 0x243e0 bytes
    // win32kbase.sys .text:0x240ad0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6b10, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
