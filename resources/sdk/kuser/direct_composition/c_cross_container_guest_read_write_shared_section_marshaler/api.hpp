#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_cross_container_guest_read_write_shared_section_marshaler
{
    // [CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200740, 0x243e0 bytes
    // win32kbase.sys .text:0x24fc80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe510, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create_section;
    
    // [EmitUpdateCommands@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2007d0, 0x243e0 bytes
    // win32kbase.sys .text:0x24fd10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe5a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca0b0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb160, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a50, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200860, 0x243e0 bytes
    // win32kbase.sys .text:0x24fda0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe630, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
    
    // [PrivateEmitUpdateCommand@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20087c, 0x243e0 bytes
    // win32kbase.sys .text:0x24fdbc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe64c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) private_emit_update_command;
};
#include "magic/api.end.hpp"
