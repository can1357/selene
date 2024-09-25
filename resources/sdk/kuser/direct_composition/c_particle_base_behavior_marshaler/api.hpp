#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_particle_base_behavior_marshaler
{
    // [ReleaseAllReferences@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x23d9d0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) release_all_references;
    
    // [EmitSetBindingsCommand@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfe98, 0x243e0 bytes
    // win32kbase.sys .text:0x1ddc58, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_bindings_command;
    
    // [EmitSetInputSourceCommand@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e1534, 0x243e0 bytes
    // win32kbase.sys .text:0x239910, 0x27ef0 bytes
    // win32kbase.sys .text:0x1df2f4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_input_source_command;
    
    // [EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e43d0, 0x243e0 bytes
    // win32kbase.sys .text:0x23c810, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2190, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5f00, 0x243e0 bytes
    // win32kbase.sys .text:0x23e160, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3cc0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6b70, 0x243e0 bytes
    // win32kbase.sys .text:0x23e6d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4930, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CParticleBaseBehaviorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8640, 0x243e0 bytes
    // win32kbase.sys .text:0x2403b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6400, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
