#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_cross_container_host_read_only_shared_section_marshaler
{
    // [CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2450, 0x243e0 bytes
    // win32kbase.sys .text:0x240f60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0210, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create_dwm_handle;
    
    // [EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2520, 0x243e0 bytes
    // win32kbase.sys .text:0x241030, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f02e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ef0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf80, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8890, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f25a0, 0x243e0 bytes
    // win32kbase.sys .text:0x2410b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0360, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [IsReadyForMarshaling@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f25bc, 0x243e0 bytes
    // win32kbase.sys .text:0x2410cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f037c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_ready_for_marshaling;
    
    // [SetBufferProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2630, 0x243e0 bytes
    // win32kbase.sys .text:0x241140, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f03f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f26d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2411e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0490, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2710, 0x243e0 bytes
    // win32kbase.sys .text:0x241220, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f04d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
