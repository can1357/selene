#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_keyboard_processor
{
    // [CreateInstance@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd77a0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [??0CKeyboardProcessor@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x24cc8, 0x243e0 bytes
    // win32kbase.sys .text:0x76b10, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [SetKeyboardInputRoutingPolicy@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc60fc, 0x243e0 bytes
    // win32kbase.sys .text:0xbf0bc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_keyboard_input_routing_policy;
    
    // [ApplyGatheredKeyboardDeviceCount@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd27f0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9710, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1190, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) apply_gathered_keyboard_device_count;
    
    // [CreateKeyboardInputMessage@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8cb30, 0x243e0 bytes
    // win32kbase.sys .text:0x11f6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a200, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) create_keyboard_input_message;
    
    // [ForwardInputToISM@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8afe0, 0x243e0 bytes
    // win32kbase.sys .text:0x104c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x686b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) forward_input_to_ism;
    
    // [ForwardInputToKeyboardOverrider@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ab6f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f29a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a9e10, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) forward_input_to_keyboard_overrider;
    
    // [GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd21cc, 0x243e0 bytes
    // win32kbase.sys .text:0xd8c34, 0x27ef0 bytes
    // win32kbase.sys .text:0xd0b6c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) gather_keyboard_device_summary_info;
    
    // [HandleLeftRightVKs@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8bb8c, 0x243e0 bytes
    // win32kbase.sys .text:0x11510, 0x27ef0 bytes
    // win32kbase.sys .text:0x6925c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) handle_left_right_v_ks;
    
    // [ProcessInput@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ab7d8, 0x243e0 bytes
    // win32kbase.sys .text:0x51bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a9ef8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) process_input;
    
    // [ProcessInputNoLock@CKeyboardProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1abd0c, 0x243e0 bytes
    // win32kbase.sys .text:0x5390, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aa42c, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) process_input_no_lock;
};
#include "magic/api.end.hpp"
