#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_notified_deletion_resource
{
    // [Initialize@CNotifiedDeletionResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6d030, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [ReturnResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cfb0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) return_resource_lifetime_tag;
    
    // [SetResourceLifetimeTag@CNotifiedDeletionResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6d010, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) set_resource_lifetime_tag;
};
#include "magic/api.end.hpp"
