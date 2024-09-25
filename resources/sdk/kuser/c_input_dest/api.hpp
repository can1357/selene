#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_dest
{
    // [GetContainerHwndDest@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1cfd58, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_container_hwnd_dest;
    
    // [GetContainerId@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1cfd7c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_container_id;
    
    // [GetContainerInfo@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1cfda0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) get_container_info;
    
    // [IsContainer@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x18fb08, 0x243e0 bytes
    // win32kbase.sys .text:0x18def8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_container;
    
    // [IsMessageOnlyWindow@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x18fc04, 0x243e0 bytes
    // win32kbase.sys .text:0x18dff4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_message_only_window;
    
    // [CanCallerAccessDestination@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18f9f8, 0x243e0 bytes
    // win32kbase.sys .text:0xf611c, 0x27ef0 bytes
    // win32kbase.sys .text:0x18dde8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) can_caller_access_destination;
    
    // [??0CInputDest@@QEAA@QEAUtagWND@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18f95c, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfc4c, 0x27ef0 bytes
    // win32kbase.sys .text:0x18dd4c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) construct_instance;
    
    // [??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18f784, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfa74, 0x27ef0 bytes
    // win32kbase.sys .text:0x18db74, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) construct_instance_;
    
    // [??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d7b0, 0x243e0 bytes
    // win32kbase.sys .text:0x157e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x13f80, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) construct_instance__;
    
    // [??0CInputDest@@QEAA@AEBV0@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x883f0, 0x243e0 bytes
    // win32kbase.sys .text:0xcd80, 0x27ef0 bytes
    // win32kbase.sys .text:0x5d090, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance___;
    
    // [??1CInputDest@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18f9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfcd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18ddd0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [DoesBelongToForeground@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6adc8, 0x243e0 bytes
    // win32kbase.sys .text:0x14600, 0x27ef0 bytes
    // win32kbase.sys .text:0x637dc, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) does_belong_to_foreground;
    
    // [DoesBelongToForegroundThread@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fa64, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfce8, 0x27ef0 bytes
    // win32kbase.sys .text:0x18de54, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) does_belong_to_foreground_thread;
    
    // [GetDelegateThreadInfo@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ad28, 0x243e0 bytes
    // win32kbase.sys .text:0xefc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5dfdc, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) get_delegate_thread_info;
    
    // [GetDpiAwarenessContext@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89cb8, 0x243e0 bytes
    // win32kbase.sys .text:0x14a44, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f9d8, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) get_dpi_awareness_context;
    
    // [GetQueue@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b69c, 0x243e0 bytes
    // win32kbase.sys .text:0x147f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x640b0, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) get_queue;
    
    // [GetThreadInfo@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b6fc, 0x243e0 bytes
    // win32kbase.sys .text:0x24418, 0x27ef0 bytes
    // win32kbase.sys .text:0x64110, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) get_thread_info;
    
    // [GetWindowHandle@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88a60, 0x243e0 bytes
    // win32kbase.sys .text:0xd5d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f8e8, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) get_window_handle;
    
    // [HasDelegationThread@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fad4, 0x243e0 bytes
    // win32kbase.sys .text:0xf6184, 0x27ef0 bytes
    // win32kbase.sys .text:0x18dec4, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) has_delegation_thread;
    
    // [IsCompositionInput@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89ad4, 0x243e0 bytes
    // win32kbase.sys .text:0x14850, 0x27ef0 bytes
    // win32kbase.sys .text:0x64f74, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) is_composition_input;
    
    // [IsEqualByQ@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87cd8, 0x243e0 bytes
    // win32kbase.sys .text:0xdf4f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa9ba8, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) is_equal_by_q;
    
    // [IsEqualByWindowHandle@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fb20, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfdc8, 0x27ef0 bytes
    // win32kbase.sys .text:0x18df10, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) is_equal_by_window_handle;
    
    // [IsIndependentInputWindow@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89248, 0x243e0 bytes
    // win32kbase.sys .text:0xd0970, 0x27ef0 bytes
    // win32kbase.sys .text:0x68554, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) is_independent_input_window;
    
    // [IsRawMouseSubscriber@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fc50, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfeb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x18e040, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) is_raw_mouse_subscriber;
    
    // [SetEmpty@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6d650, 0x243e0 bytes
    // win32kbase.sys .text:0x2056c, 0x27ef0 bytes
    // win32kbase.sys .text:0x13e20, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) set_empty;
    
    // [SetupFromInputDestAndWindow@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fc88, 0x243e0 bytes
    // win32kbase.sys .text:0x1cfee8, 0x27ef0 bytes
    // win32kbase.sys .text:0x18e078, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) setup_from_input_dest_and_window;
    
    // [ShouldSkipForegroundActivation@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8af9c, 0x243e0 bytes
    // win32kbase.sys .text:0xf190, 0x27ef0 bytes
    // win32kbase.sys .text:0x68668, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) should_skip_foreground_activation;
    
    // [TestWindowFlag@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88d6c, 0x243e0 bytes
    // win32kbase.sys .text:0xd978, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a7e8, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) test_window_flag;
    
    // [_UnlockedFromThread@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88cd8, 0x243e0 bytes
    // win32kbase.sys .text:0xd8b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a754, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) unlocked_from_thread;
    
    // [UsesQueue@CInputDest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18fdac, 0x243e0 bytes
    // win32kbase.sys .text:0xf61b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x18e19c, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) uses_queue;
};
#include "magic/api.end.hpp"
