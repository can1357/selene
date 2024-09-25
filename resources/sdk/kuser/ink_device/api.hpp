#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::ink_device
{
    // [??0InkDevice@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25564c, 0x1596d bytes
    // win32kfull.sys .text:0x254980, 0x1659e bytes
    // win32kfull.sys .text:0x25555c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CreateAndSendSuperWetInkPayloadForCommand@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255750, 0x1596d bytes
    // win32kfull.sys .text:0x254a80, 0x1659e bytes
    // win32kfull.sys .text:0x255660, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) create_and_send_super_wet_ink_payload_for_command;
    
    // [??1InkDevice@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2556f8, 0x1596d bytes
    // win32kfull.sys .text:0x254a2c, 0x1659e bytes
    // win32kfull.sys .text:0x255608, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [DoSuperWetInkStart@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255980, 0x1596d bytes
    // win32kfull.sys .text:0x254cb0, 0x1659e bytes
    // win32kfull.sys .text:0x255890, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) do_super_wet_ink_start;
    
    // [DoSuperWetInkStop@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255c74, 0x1596d bytes
    // win32kfull.sys .text:0x254fac, 0x1659e bytes
    // win32kfull.sys .text:0x255b84, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) do_super_wet_ink_stop;
    
    // [GetDisplayScalingInfoAndCheckSupported@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255da8, 0x1596d bytes
    // win32kfull.sys .text:0x2550e0, 0x1659e bytes
    // win32kfull.sys .text:0x255cb8, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) get_display_scaling_info_and_check_supported;
    
    // [Initialize@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x255f60, 0x1596d bytes
    // win32kfull.sys .text:0x2552a0, 0x1659e bytes
    // win32kfull.sys .text:0x255e70, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [PreProcessInkFeedbackCommand_NoLock@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2565a0, 0x1596d bytes
    // win32kfull.sys .text:0x2558b0, 0x1659e bytes
    // win32kfull.sys .text:0x2564b0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) pre_process_ink_feedback_command_no_lock;
    
    // [ProcessInkFeedbackCommand@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2567f0, 0x1596d bytes
    // win32kfull.sys .text:0x255ac0, 0x1659e bytes
    // win32kfull.sys .text:0x256700, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) process_ink_feedback_command;
    
    // [TerminateActiveCommand@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x256e80, 0x1596d bytes
    // win32kfull.sys .text:0x2560c0, 0x1659e bytes
    // win32kfull.sys .text:0x256d90, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) terminate_active_command;
    
    // [UnInitialize@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x256ef0, 0x1596d bytes
    // win32kfull.sys .text:0x256140, 0x1659e bytes
    // win32kfull.sys .text:0x256e00, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) un_initialize;
    
    // [ValidateDeviceFeatures@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x256f7c, 0x1596d bytes
    // win32kfull.sys .text:0x2561cc, 0x1659e bytes
    // win32kfull.sys .text:0x256e8c, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) validate_device_features;
    
    // [ValidatePointer@InkDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2570a0, 0x1596d bytes
    // win32kfull.sys .text:0x2562f0, 0x1659e bytes
    // win32kfull.sys .text:0x256fb0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) validate_pointer;
};
#include "magic/api.end.hpp"
