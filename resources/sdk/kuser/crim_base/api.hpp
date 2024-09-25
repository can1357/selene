#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::crim_base
{
    // [CleanupHandles@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe54, 0x243e0 bytes
    // win32kbase.sys .text:0x77180, 0x27ef0 bytes
    // win32kbase.sys .text:0x56160, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) cleanup_handles;
    
    // [??0CRIMBase@@IEAA@K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26aec, 0x243e0 bytes
    // win32kbase.sys .text:0x886ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x7970c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [CreateHandles@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x285e0, 0x243e0 bytes
    // win32kbase.sys .text:0x78b1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7b140, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create_handles;
    
    // [??1CRIMBase@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26ab4, 0x243e0 bytes
    // win32kbase.sys .text:0x88554, 0x27ef0 bytes
    // win32kbase.sys .text:0x796d4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetDispatcherHandleByName@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x289bc, 0x243e0 bytes
    // win32kbase.sys .text:0x78f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x7b51c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_dispatcher_handle_by_name;
    
    // [GetDispatcherObjectByIndex@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb77c, 0x243e0 bytes
    // win32kbase.sys .text:0x76be8, 0x27ef0 bytes
    // win32kbase.sys .text:0xae950, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_dispatcher_object_by_index;
    
    // [GetDispatcherObjectByName@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb81c, 0x243e0 bytes
    // win32kbase.sys .text:0x76b9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x57a0c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_dispatcher_object_by_name;
    
    // [IsDispatcherObjectValid@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb97c, 0x243e0 bytes
    // win32kbase.sys .text:0x76d40, 0x27ef0 bytes
    // win32kbase.sys .text:0xae90c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_dispatcher_object_valid;
    
    // [SensorDoWorkAndWait@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcc40, 0x243e0 bytes
    // win32kbase.sys .text:0x7749c, 0x27ef0 bytes
    // win32kbase.sys .text:0x57b88, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) sensor_do_work_and_wait;
    
    // [SignalMarshalingCompleted@CRIMBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbd50, 0x243e0 bytes
    // win32kbase.sys .text:0x7707c, 0x27ef0 bytes
    // win32kbase.sys .text:0x64c70, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) signal_marshaling_completed;
};
#include "magic/api.end.hpp"
