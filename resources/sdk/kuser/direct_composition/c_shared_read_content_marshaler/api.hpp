#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_content_marshaler
{
    // [Create@CSharedReadContentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x24ffd4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [IsOfType@CSharedReadContentMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x250180, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
