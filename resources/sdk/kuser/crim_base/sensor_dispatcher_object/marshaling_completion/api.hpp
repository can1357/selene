#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::crim_base::sensor_dispatcher_object::marshaling_completion
{
    // [CreateMarshalingEvent@MarshalingCompletion@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x288ec, 0x243e0 bytes
    // win32kbase.sys .text:0x7b44c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create_marshaling_event;
    
    // [_Signal@MarshalingCompletion@SensorDispatcherObject@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbff8, 0x243e0 bytes
    // win32kbase.sys .text:0x77340, 0x27ef0 bytes
    // win32kbase.sys .text:0x56304, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) signal;
};
#include "magic/api.end.hpp"
