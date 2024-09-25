#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_keyboard_sensor
{
    // [CreateInstance@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87eb4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create_instance;
    
    // [GetDispatchersName@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b50, 0x243e0 bytes
    // win32kbase.sys .text:0xdab60, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84f0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_dispatchers_name;
    
    // [GetProcessor@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b80, 0x243e0 bytes
    // win32kbase.sys .text:0xdab90, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8520, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_processor;
    
    // [PostInitialize@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7da0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7750, 0x27ef0 bytes
    // win32kbase.sys .text:0xc09a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) post_initialize;
    
    // [PreUninitialize@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24d20, 0x243e0 bytes
    // win32kbase.sys .text:0x875d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x76b60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) pre_uninitialize;
    
    // [ProcessInput@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b4f30, 0x243e0 bytes
    // win32kbase.sys .text:0x5130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b2ce0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) process_input;
    
    // [UpdateKeyboardLEDs@CKeyboardSensor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdd90, 0x243e0 bytes
    // win32kbase.sys .text:0x7a910, 0x27ef0 bytes
    // win32kbase.sys .text:0x58740, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) update_keyboard_le_ds;
};
#include "magic/api.end.hpp"
