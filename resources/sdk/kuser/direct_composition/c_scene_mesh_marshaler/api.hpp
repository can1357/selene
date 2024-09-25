#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_mesh_marshaler
{
    // [EmitSetColorDataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0874, 0x243e0 bytes
    // win32kbase.sys .text:0x238d5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de634, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_color_data_command;
    
    // [EmitSetColorLayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e08f8, 0x243e0 bytes
    // win32kbase.sys .text:0x238de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de6b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_color_layout_command;
    
    // [EmitSetIndexDataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1444, 0x243e0 bytes
    // win32kbase.sys .text:0x2397b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df204, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_index_data_command;
    
    // [EmitSetIndexLayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e14c4, 0x243e0 bytes
    // win32kbase.sys .text:0x239830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df284, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_index_layout_command;
    
    // [EmitSetNormalDataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2174, 0x243e0 bytes
    // win32kbase.sys .text:0x23a720, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dff34, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_normal_data_command;
    
    // [EmitSetNormalLayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e227c, 0x243e0 bytes
    // win32kbase.sys .text:0x23a828, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e003c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_normal_layout_command;
    
    // [EmitSetPositionDataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2c58, 0x243e0 bytes
    // win32kbase.sys .text:0x23b274, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0a18, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_position_data_command;
    
    // [EmitSetPositionLayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2cd8, 0x243e0 bytes
    // win32kbase.sys .text:0x23b2f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0a98, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_position_layout_command;
    
    // [EmitSetPrimitiveTopologyCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2d48, 0x243e0 bytes
    // win32kbase.sys .text:0x23b364, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0b08, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_primitive_topology_command;
    
    // [EmitSetTangentDataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3814, 0x243e0 bytes
    // win32kbase.sys .text:0x23bbd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e15d4, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_tangent_data_command;
    
    // [EmitSetTangentLayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3898, 0x243e0 bytes
    // win32kbase.sys .text:0x23bc5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1658, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_tangent_layout_command;
    
    // [EmitSetTexCoord0DataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3998, 0x243e0 bytes
    // win32kbase.sys .text:0x23bd5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1758, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_set_tex_coord0_data_command;
    
    // [EmitSetTexCoord0LayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3a1c, 0x243e0 bytes
    // win32kbase.sys .text:0x23bde0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e17dc, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_set_tex_coord0_layout_command;
    
    // [EmitSetTexCoord1DataCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3a90, 0x243e0 bytes
    // win32kbase.sys .text:0x23be54, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1850, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) emit_set_tex_coord1_data_command;
    
    // [EmitSetTexCoord1LayoutCommand@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3b14, 0x243e0 bytes
    // win32kbase.sys .text:0x23bed8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e18d4, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) emit_set_tex_coord1_layout_command;
    
    // [EmitUpdateCommands@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4a70, 0x243e0 bytes
    // win32kbase.sys .text:0x23cf40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2830, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5ae0, 0x243e0 bytes
    // win32kbase.sys .text:0x23dc00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e38a0, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6d00, 0x243e0 bytes
    // win32kbase.sys .text:0x23e840, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4ac0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e7a20, 0x243e0 bytes
    // win32kbase.sys .text:0x23f620, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e57e0, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneMeshMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8c90, 0x243e0 bytes
    // win32kbase.sys .text:0x240a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6a50, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
