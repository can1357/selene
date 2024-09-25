#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::crim_base::sensor_dispatcher_object
{
    // [CloseDispatcherHandles@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbf04, 0x243e0 bytes
    // win32kbase.sys .text:0x7724c, 0x27ef0 bytes
    // win32kbase.sys .text:0x56210, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) close_dispatcher_handles;
    
    // [CreateDispatcherHandles@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x28758, 0x243e0 bytes
    // win32kbase.sys .text:0x78c94, 0x27ef0 bytes
    // win32kbase.sys .text:0x7b2b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_dispatcher_handles;
    
    // [GetWorkAndWait@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcd04, 0x243e0 bytes
    // win32kbase.sys .text:0x77590, 0x27ef0 bytes
    // win32kbase.sys .text:0x57c4c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_work_and_wait;
    
    // [IsValid@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbdb8, 0x243e0 bytes
    // win32kbase.sys .text:0x770e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x64cd8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_valid;
};
#include "magic/api.end.hpp"
