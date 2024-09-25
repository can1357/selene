#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_pointer_info_node
{
    // [GetHistoryCount@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19cedc, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0354, 0x27ef0 bytes
    // win32kbase.sys .text:0x19b39c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_history_count;
    
    // [GetQueue@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a06a8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e491c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ec44, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_queue;
    
    // [IsAnyMessageDelegated@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1258, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5178, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f818, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_any_message_delegated;
    
    // [IsAnyMessageNonDelegated@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a137c, 0x243e0 bytes
    // win32kbase.sys .text:0x1e52a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f93c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_any_message_non_delegated;
    
    // [IsForManipulationThread@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a13f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5314, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f9b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_for_manipulation_thread;
    
    // [IsFullyReleased@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a14a8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e53c8, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fa68, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_fully_released;
    
    // [IsMessageDelegated@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1564, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5490, 0x27ef0 bytes
    // win32kbase.sys .text:0x19fb24, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_message_delegated;
    
    // [IsPrimary@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a19c4, 0x243e0 bytes
    // win32kbase.sys .text:0x1e596c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19ffe4, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_primary;
    
    // [IsPrimaryDown@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a19f4, 0x243e0 bytes
    // win32kbase.sys .text:0x1e599c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0014, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) is_primary_down;
    
    // [IsTargetSetForRetrieval@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1a24, 0x243e0 bytes
    // win32kbase.sys .text:0x1e59cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0044, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_target_set_for_retrieval;
    
    // [IsTouchpad@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1acc, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5a74, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a00ec, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) is_touchpad;
    
    // [IsValid@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a1b08, 0x243e0 bytes
    // win32kbase.sys .text:0x1e5ab0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a0128, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) is_valid;
    
    // [ShouldForegroundActivate@CPointerInfoNode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8588, 0x243e0 bytes
    // win32kbase.sys .text:0xf6e92, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6c64, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) should_foreground_activate;
};
#include "magic/api.end.hpp"
