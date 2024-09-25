#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_animation_trigger_marshaler
{
    // [Create@CSharedReadAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf5ef8, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [InitializeFromSharedResource@CSharedReadAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fe00, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [SetBufferProperty@CSharedReadAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf5fe0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
};
#include "magic/api.end.hpp"
