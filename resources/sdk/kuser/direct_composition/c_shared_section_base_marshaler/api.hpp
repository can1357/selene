#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_section_base_marshaler
{
    // [GetType@CSharedSectionBaseMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xca0a0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb150, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8a40, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSharedSectionBaseMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200720, 0x243e0 bytes
    // win32kbase.sys .text:0x24fc60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe4f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetRemarshalingFlags@CSharedSectionBaseMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2330, 0x243e0 bytes
    // win32kbase.sys .text:0x2379c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f00f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
