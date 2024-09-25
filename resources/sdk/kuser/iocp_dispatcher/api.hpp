#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iocp_dispatcher
{
    // [??0IOCPDispatcher@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x8858c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CreateIocpHandleForUserMode@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xcf898, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) create_iocp_handle_for_user_mode;
    
    // [RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86bb0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) register_thread_dispatcher_object_with_callback;
    
    // [InitializeUserModeHandleDuplicate@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc3338, 0x243e0 bytes
    // win32kbase.sys .text:0xbc6c8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_user_mode_handle_duplicate;
    
    // [CleanupInputDispatcherObjects@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba6e8, 0x243e0 bytes
    // win32kbase.sys .text:0x88f70, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4008, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) cleanup_input_dispatcher_objects;
    
    // [CleanupThreadDispatcherObjects@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba67c, 0x243e0 bytes
    // win32kbase.sys .text:0x88f04, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3f9c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) cleanup_thread_dispatcher_objects;
    
    // [Close@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba340, 0x243e0 bytes
    // win32kbase.sys .text:0x88c70, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3c60, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) close;
    
    // [CreateInstance@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc323c, 0x243e0 bytes
    // win32kbase.sys .text:0x88430, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc5cc, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) create_instance;
    
    // [Dispatch@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6c020, 0x243e0 bytes
    // win32kbase.sys .text:0x20a70, 0x27ef0 bytes
    // win32kbase.sys .text:0x60450, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) dispatch;
    
    // [HandleSensorDispatcherSignal@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa3548, 0x243e0 bytes
    // win32kbase.sys .text:0xb52e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x5de8c, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) handle_sensor_dispatcher_signal;
    
    // [HandleThreadDispatcherSignal@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa35dc, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2d4, 0x27ef0 bytes
    // win32kbase.sys .text:0x60488, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) handle_thread_dispatcher_signal;
    
    // [PopulateCustomDispatcherObjectsArray@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x129930, 0x243e0 bytes
    // win32kbase.sys .text:0x15b6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x126b00, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) populate_custom_dispatcher_objects_array;
    
    // [RegisterInputDispatcherObjects@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa3480, 0x243e0 bytes
    // win32kbase.sys .text:0xd0140, 0x27ef0 bytes
    // win32kbase.sys .text:0xb8870, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) register_input_dispatcher_objects;
    
    // [RegisterThreadDispatcherObject@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa3420, 0x243e0 bytes
    // win32kbase.sys .text:0x86c40, 0x27ef0 bytes
    // win32kbase.sys .text:0xc08a0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) register_thread_dispatcher_object;
    
    // [SetupIOCPForDispatcherHandle@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa3710, 0x243e0 bytes
    // win32kbase.sys .text:0x1f374, 0x27ef0 bytes
    // win32kbase.sys .text:0x605bc, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) setup_iocp_for_dispatcher_handle;
    
    // [Wait@IOCPDispatcher]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1adc10, 0x243e0 bytes
    // win32kbase.sys .text:0xda450, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ac330, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) wait;
};
#include "magic/api.end.hpp"
