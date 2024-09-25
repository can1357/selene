#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_system_resource
{
    // [Initialize@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x352a8, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [OpenSharedHandle@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x35224, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) open_shared_handle;
    
    // [Delete@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35250, 0x1eb80 bytes
    // win32kbase.sys .text:0xafca0, 0x243e0 bytes
    // win32kbase.sys .text:0x25090, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8b0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) _delete;
    
    // [GetType@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f980, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [IsValid@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x35220, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9d40, 0x243e0 bytes
    // win32kbase.sys .text:0xdadf0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_valid;
    
    // [MarkInvalid@CSharedSystemResource@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x352a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9d50, 0x243e0 bytes
    // win32kbase.sys .text:0xdae00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) mark_invalid;
};
#include "magic/api.end.hpp"
