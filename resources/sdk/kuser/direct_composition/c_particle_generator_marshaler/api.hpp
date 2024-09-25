#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_particle_generator_marshaler
{
    // [GetFloatAnimatableProperty@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5250, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3010, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5720, 0x243e0 bytes
    // win32kbase.sys .text:0x1e34e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6640, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4400, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_float_property;
    
    // [EmitSetGenerateShortestAngleBetweenDirectionsCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e11dc, 0x243e0 bytes
    // win32kbase.sys .text:0x2396cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1def9c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_generate_shortest_angle_between_directions_command;
    
    // [EmitSetGenerateUniformSizesCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e124c, 0x243e0 bytes
    // win32kbase.sys .text:0x23973c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df00c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_generate_uniform_sizes_command;
    
    // [EmitSetMaxAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1698, 0x243e0 bytes
    // win32kbase.sys .text:0x239c44, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df458, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_max_angular_velocity_command;
    
    // [EmitSetMaxDirectionCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1784, 0x243e0 bytes
    // win32kbase.sys .text:0x239d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df544, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_max_direction_command;
    
    // [EmitSetMaxLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1800, 0x243e0 bytes
    // win32kbase.sys .text:0x239dac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df5c0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_max_lifetime_command;
    
    // [EmitSetMaxOpacityCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1874, 0x243e0 bytes
    // win32kbase.sys .text:0x239e20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df634, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_max_opacity_command;
    
    // [EmitSetMaxOrientationCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e18e8, 0x243e0 bytes
    // win32kbase.sys .text:0x239e94, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df6a8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_set_max_orientation_command;
    
    // [EmitSetMaxSizeCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1a58, 0x243e0 bytes
    // win32kbase.sys .text:0x23a004, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df818, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) emit_set_max_size_command;
    
    // [EmitSetMaxSpeedCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1adc, 0x243e0 bytes
    // win32kbase.sys .text:0x23a088, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df89c, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_set_max_speed_command;
    
    // [EmitSetMaxTintCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1b4c, 0x243e0 bytes
    // win32kbase.sys .text:0x23a0f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df90c, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_set_max_tint_command;
    
    // [EmitSetMinAngularVelocityCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1cc0, 0x243e0 bytes
    // win32kbase.sys .text:0x23a26c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfa80, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) emit_set_min_angular_velocity_command;
    
    // [EmitSetMinDirectionCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1dac, 0x243e0 bytes
    // win32kbase.sys .text:0x23a358, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfb6c, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) emit_set_min_direction_command;
    
    // [EmitSetMinLifetimeCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1e28, 0x243e0 bytes
    // win32kbase.sys .text:0x23a3d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfbe8, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) emit_set_min_lifetime_command;
    
    // [EmitSetMinOpacityCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1e9c, 0x243e0 bytes
    // win32kbase.sys .text:0x23a448, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfc5c, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) emit_set_min_opacity_command;
    
    // [EmitSetMinOrientationCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1f10, 0x243e0 bytes
    // win32kbase.sys .text:0x23a4bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfcd0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) emit_set_min_orientation_command;
    
    // [EmitSetMinSizeCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2004, 0x243e0 bytes
    // win32kbase.sys .text:0x23a5b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfdc4, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) emit_set_min_size_command;
    
    // [EmitSetMinSpeedCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2088, 0x243e0 bytes
    // win32kbase.sys .text:0x23a634, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfe48, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) emit_set_min_speed_command;
    
    // [EmitSetMinTintCommand@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e20f8, 0x243e0 bytes
    // win32kbase.sys .text:0x23a6a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dfeb8, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) emit_set_min_tint_command;
    
    // [EmitUpdateCommands@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4700, 0x243e0 bytes
    // win32kbase.sys .text:0x23cba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e24c0, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5550, 0x243e0 bytes
    // win32kbase.sys .text:0x23d830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3310, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e60c0, 0x243e0 bytes
    // win32kbase.sys .text:0x23e2c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3e80, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6ca0, 0x243e0 bytes
    // win32kbase.sys .text:0x23e7e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4a60, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CParticleGeneratorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8920, 0x243e0 bytes
    // win32kbase.sys .text:0x2406a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e66e0, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
