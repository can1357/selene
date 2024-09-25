#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::simple_haptics_controller
{
    // [CloseHapticsWriteDevice@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a604, 0x1596d bytes
    // win32kfull.sys .text:0x259838, 0x1659e bytes
    // win32kfull.sys .text:0x25a514, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) close_haptics_write_device;
    
    // [DeInitialize@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a798, 0x1596d bytes
    // win32kfull.sys .text:0x2599cc, 0x1659e bytes
    // win32kfull.sys .text:0x25a6a8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) de_initialize;
    
    // [HapticsDeviceNotify@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25a880, 0x1596d bytes
    // win32kfull.sys .text:0x259ab0, 0x1659e bytes
    // win32kfull.sys .text:0x25a790, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) haptics_device_notify;
    
    // [Initialize@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25ab0c, 0x1596d bytes
    // win32kfull.sys .text:0x259d3c, 0x1659e bytes
    // win32kfull.sys .text:0x25aa1c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [InitializeSupportedWaveformList@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25aec4, 0x1596d bytes
    // win32kfull.sys .text:0x25a0f4, 0x1659e bytes
    // win32kfull.sys .text:0x25add4, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) initialize_supported_waveform_list;
    
    // [IntializePreparssedData@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b338, 0x1596d bytes
    // win32kfull.sys .text:0x25a558, 0x1659e bytes
    // win32kfull.sys .text:0x25b248, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) intialize_preparssed_data;
    
    // [OpenHapticsDevice@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b4d8, 0x1596d bytes
    // win32kfull.sys .text:0x25a6f8, 0x1659e bytes
    // win32kfull.sys .text:0x25b3e8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) open_haptics_device;
    
    // [SendDeviceIOControl@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b74c, 0x1596d bytes
    // win32kfull.sys .text:0x25a96c, 0x1659e bytes
    // win32kfull.sys .text:0x25b65c, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) send_device_io_control;
    
    // [SendHapticFeedbackOutput@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25b994, 0x1596d bytes
    // win32kfull.sys .text:0x25abcc, 0x1659e bytes
    // win32kfull.sys .text:0x25b8a4, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) send_haptic_feedback_output;
    
    // [SetAutoTriggerWaveform@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25bc48, 0x1596d bytes
    // win32kfull.sys .text:0x25ae80, 0x1659e bytes
    // win32kfull.sys .text:0x25bb58, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) set_auto_trigger_waveform;
    
    // [SetDevicePropertyData@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c05c, 0x1596d bytes
    // win32kfull.sys .text:0x25b294, 0x1659e bytes
    // win32kfull.sys .text:0x25bf6c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) set_device_property_data;
    
    // [UpdateWaveformInfoList@SimpleHapticsController]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25c1d4, 0x1596d bytes
    // win32kfull.sys .text:0x25b40c, 0x1659e bytes
    // win32kfull.sys .text:0x25c0e4, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) update_waveform_info_list;
};
#include "magic/api.end.hpp"
