#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_particle_attractor_marshaler
{
    // [GetFloatAnimatableProperty@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5180, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2f40, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5690, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3450, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6400, 0x243e0 bytes
    // win32kbase.sys .text:0x1e41c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitSetOffsetCommand@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e24c4, 0x243e0 bytes
    // win32kbase.sys .text:0x23aa70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0284, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_offset_command;
    
    // [EmitSetRadiusCommand@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2db8, 0x243e0 bytes
    // win32kbase.sys .text:0x23b3d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0b78, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_radius_command;
    
    // [EmitSetStrengthCommand@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3524, 0x243e0 bytes
    // win32kbase.sys .text:0x23b9fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e12e4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_strength_command;
    
    // [EmitUpdateCommands@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4370, 0x243e0 bytes
    // win32kbase.sys .text:0x23c7b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2130, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5eb0, 0x243e0 bytes
    // win32kbase.sys .text:0x23e110, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3c70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CParticleAttractorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8600, 0x243e0 bytes
    // win32kbase.sys .text:0x240370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e63c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
