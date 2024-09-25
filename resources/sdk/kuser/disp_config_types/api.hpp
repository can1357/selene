#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::disp_config_types
{
    // [AllowInAnySession@DispConfigTypes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x568b4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) allow_in_any_session;
    
    // [GetGetterTypeSize@DispConfigTypes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x5693c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_getter_type_size;
    
    // [GetSetterTypeSize@DispConfigTypes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x16cb20, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) get_setter_type_size;
    
    // [RequiresUserCritShared@DispConfigTypes]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x5690c, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) requires_user_crit_shared;
};
#include "magic/api.end.hpp"
