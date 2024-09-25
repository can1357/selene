#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::legacy_input_dispatcher
{
    // [??1LegacyInputDispatcher@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x8e488, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Create@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc5af0, 0x243e0 bytes
    // win32kbase.sys .text:0xd5e10, 0x27ef0 bytes
    // win32kbase.sys .text:0xbeae0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [Dispatch@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdcdc, 0x243e0 bytes
    // win32kbase.sys .text:0x786b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5868c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) dispatch;
    
    // [HasInputDispatcherObjects@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdd5c, 0x243e0 bytes
    // win32kbase.sys .text:0x78734, 0x27ef0 bytes
    // win32kbase.sys .text:0x5870c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) has_input_dispatcher_objects;
    
    // [Initialize@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc0570, 0x243e0 bytes
    // win32kbase.sys .text:0xd18a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xba040, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x153e60, 0x1596d bytes
    // win32kfull.sys .text:0x14a930, 0x1659e bytes
    // win32kfull.sys .text:0x154da0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) populate_custom_dispatcher_objects_array;
    
    // [PurgeInputDispatcherObjects@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7030, 0x243e0 bytes
    // win32kbase.sys .text:0xd9250, 0x27ef0 bytes
    // win32kbase.sys .text:0xbfce0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) purge_input_dispatcher_objects;
    
    // [RegisterInputDispatcherObjects@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x153e80, 0x1596d bytes
    // win32kfull.sys .text:0x14a950, 0x1659e bytes
    // win32kfull.sys .text:0x154dc0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) register_input_dispatcher_objects;
    
    // [WaitAndDispatch@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd980, 0x243e0 bytes
    // win32kbase.sys .text:0x7a670, 0x27ef0 bytes
    // win32kbase.sys .text:0x58330, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) wait_and_dispatch;
    
    // [WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1adce0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f3e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac400, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) wait_for_messages_or_custom_input_events_and_dispatch;
};
#include "magic/api.end.hpp"
