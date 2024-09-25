#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_notification_resource_marshaler
{
    // [SetCallbackId@CNotificationResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69540, 0x1eb80 bytes
    // win32kbase.sys .text:0xa73c0, 0x243e0 bytes
    // win32kbase.sys .text:0xb67c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x96480, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) set_callback_id;
    
    // [SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea444, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df540, 0x243e0 bytes
    // win32kbase.sys .text:0x22dcd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd300, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
