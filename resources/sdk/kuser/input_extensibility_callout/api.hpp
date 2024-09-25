#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_extensibility_callout
{
    // [CallUserModeWithLock@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac5e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1aad00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) call_user_mode_with_lock;
    
    // [CallUserModeLockFree@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ac520, 0x243e0 bytes
    // win32kbase.sys .text:0x1f31b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aac40, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) call_user_mode_lock_free;
    
    // [_CanSendMessageToDestinationInternal@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8c1b4, 0x243e0 bytes
    // win32kbase.sys .text:0x23864, 0x27ef0 bytes
    // win32kbase.sys .text:0x69884, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) can_send_message_to_destination_internal;
    
    // [CloseCoreMsgPort@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x272a4, 0x243e0 bytes
    // win32kbase.sys .text:0x893f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x79e00, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) close_core_msg_port;
    
    // [CoreMsgCloseAllDestinations@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc16b4, 0x243e0 bytes
    // win32kbase.sys .text:0xd5994, 0x27ef0 bytes
    // win32kbase.sys .text:0xbae70, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) core_msg_close_all_destinations;
    
    // [CoreMsgOpenDestinationHandle@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x903b8, 0x243e0 bytes
    // win32kbase.sys .text:0xbd4c4, 0x27ef0 bytes
    // win32kbase.sys .text:0xaac84, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) core_msg_open_destination_handle;
    
    // [CoreMsgSendMessage@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8c0f4, 0x243e0 bytes
    // win32kbase.sys .text:0x2379c, 0x27ef0 bytes
    // win32kbase.sys .text:0x697c4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) core_msg_send_message;
    
    // [CreateCoreMsgPort@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8dcc, 0x243e0 bytes
    // win32kbase.sys .text:0xbcad8, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa01c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) create_core_msg_port;
    
    // [Initialize@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27928, 0x243e0 bytes
    // win32kbase.sys .text:0x861a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a488, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) initialize;
    
    // [OnInputThreadStateChanged@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2a118, 0x243e0 bytes
    // win32kbase.sys .text:0xcf600, 0x27ef0 bytes
    // win32kbase.sys .text:0x7cdc8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) on_input_thread_state_changed;
    
    // [RegisterCoreMsgProvider@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x266bc, 0x243e0 bytes
    // win32kbase.sys .text:0x859ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x792dc, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) register_core_msg_provider;
    
    // [UnInitialize@InputExtensibilityCallout]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x27258, 0x243e0 bytes
    // win32kbase.sys .text:0x8939c, 0x27ef0 bytes
    // win32kbase.sys .text:0x79db4, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) un_initialize;
};
#include "magic/api.end.hpp"
