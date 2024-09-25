#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_synchronous_super_wet_ink_marshaler
{
    // [EmitSetInkLookupIdCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2398a0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_ink_lookup_id_command;
    
    // [EmitSetIsVailCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x239a68, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_is_vail_command;
    
    // [EmitSetLookupModeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x239b5c, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_lookup_mode_command;
    
    // [Initialize@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23d950, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [EmitSetPerFrameDataAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2a04, 0x243e0 bytes
    // win32kbase.sys .text:0x23afb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e07c4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_per_frame_data_allocation_offset_command;
    
    // [EmitSetPerFrameDataAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2a74, 0x243e0 bytes
    // win32kbase.sys .text:0x23b020, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0834, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_per_frame_data_allocation_size_command;
    
    // [EmitSetPerFrameDataSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2ae4, 0x243e0 bytes
    // win32kbase.sys .text:0x23b090, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e08a4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_per_frame_data_shared_section_command;
    
    // [EmitSetPerFrameDataSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2b68, 0x243e0 bytes
    // win32kbase.sys .text:0x23b114, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0928, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_per_frame_data_size_command;
    
    // [EmitSetReferenceSurfaceCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2fe4, 0x243e0 bytes
    // win32kbase.sys .text:0x23b4bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0da4, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_reference_surface_command;
    
    // [EmitSetTipPointSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3cf4, 0x243e0 bytes
    // win32kbase.sys .text:0x23c0b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1ab4, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_tip_point_size_command;
    
    // [EmitSetTipPointsAllocationOffsetCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3d64, 0x243e0 bytes
    // win32kbase.sys .text:0x23c128, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1b24, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_tip_points_allocation_offset_command;
    
    // [EmitSetTipPointsAllocationSizeCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3dd4, 0x243e0 bytes
    // win32kbase.sys .text:0x23c198, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1b94, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_set_tip_points_allocation_size_command;
    
    // [EmitSetTipPointsSharedSectionCommand@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3e44, 0x243e0 bytes
    // win32kbase.sys .text:0x23c208, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1c04, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_set_tip_points_shared_section_command;
    
    // [EmitUpdateCommands@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4e80, 0x243e0 bytes
    // win32kbase.sys .text:0x23d3a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2c40, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5d40, 0x243e0 bytes
    // win32kbase.sys .text:0x23de60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3b00, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6e90, 0x243e0 bytes
    // win32kbase.sys .text:0x23e9c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4c50, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8270, 0x243e0 bytes
    // win32kbase.sys .text:0x23fe70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6030, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSynchronousSuperWetInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8fb0, 0x243e0 bytes
    // win32kbase.sys .text:0x240d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6d70, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
