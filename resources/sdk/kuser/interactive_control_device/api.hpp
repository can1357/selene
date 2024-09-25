#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_device
{
    // [CloseHapticsWriteDevice@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x23eb4c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) close_haptics_write_device;
    
    // [HapticsDeviceNotify@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x23f420, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) haptics_device_notify;
    
    // [OpenHapticsWriteDevice@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x23f9b8, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) open_haptics_write_device;
    
    // [SendDeviceIOControl@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x240014, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) send_device_io_control;
    
    // [InitializeWaveformOrdinalForDevice@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2582cc, 0x1596d bytes
    // win32kfull.sys .text:0x2574b0, 0x1659e bytes
    // win32kfull.sys .text:0x2581dc, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) initialize_waveform_ordinal_for_device;
    
    // [OnTimerNotification@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x258358, 0x1596d bytes
    // win32kfull.sys .text:0x257534, 0x1659e bytes
    // win32kfull.sys .text:0x258268, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) on_timer_notification;
    
    // [SetTargetWindow@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x258fd4, 0x1596d bytes
    // win32kfull.sys .text:0x2581c0, 0x1659e bytes
    // win32kfull.sys .text:0x258ee4, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) set_target_window;
    
    // [CleanQueue@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23eab0, 0x13864 bytes
    // win32kfull.sys .text:0x2575e8, 0x1596d bytes
    // win32kfull.sys .text:0x256810, 0x1659e bytes
    // win32kfull.sys .text:0x2574f8, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) clean_queue;
    
    // [??0InteractiveControlDevice@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e9b0, 0x13864 bytes
    // win32kfull.sys .text:0x25748c, 0x1596d bytes
    // win32kfull.sys .text:0x2566cc, 0x1659e bytes
    // win32kfull.sys .text:0x25739c, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [CreateDeadzone@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23eca0, 0x13864 bytes
    // win32kfull.sys .text:0x25768c, 0x1596d bytes
    // win32kfull.sys .text:0x2568b4, 0x1659e bytes
    // win32kfull.sys .text:0x25759c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) create_deadzone;
    
    // [Deinitialize@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23eee4, 0x13864 bytes
    // win32kfull.sys .text:0x257904, 0x1596d bytes
    // win32kfull.sys .text:0x256b2c, 0x1659e bytes
    // win32kfull.sys .text:0x257814, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) deinitialize;
    
    // [DestroyDeadzone@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f00c, 0x13864 bytes
    // win32kfull.sys .text:0x257a48, 0x1596d bytes
    // win32kfull.sys .text:0x256c70, 0x1659e bytes
    // win32kfull.sys .text:0x257958, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) destroy_deadzone;
    
    // [DetectPressAndHoldGesture@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f054, 0x13864 bytes
    // win32kfull.sys .text:0x257aa0, 0x1596d bytes
    // win32kfull.sys .text:0x256cc8, 0x1659e bytes
    // win32kfull.sys .text:0x2579b0, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) detect_press_and_hold_gesture;
    
    // [DetermineMessageCreationFlags@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f17c, 0x13864 bytes
    // win32kfull.sys .text:0x257bec, 0x1596d bytes
    // win32kfull.sys .text:0x256e14, 0x1659e bytes
    // win32kfull.sys .text:0x257afc, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) determine_message_creation_flags;
    
    // [FlushBufferedInput@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f328, 0x13864 bytes
    // win32kfull.sys .text:0x257db8, 0x1596d bytes
    // win32kfull.sys .text:0x256fd8, 0x1659e bytes
    // win32kfull.sys .text:0x257cc8, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) flush_buffered_input;
    
    // [GetInputReport@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f3d0, 0x13864 bytes
    // win32kfull.sys .text:0x257e68, 0x1596d bytes
    // win32kfull.sys .text:0x257088, 0x1659e bytes
    // win32kfull.sys .text:0x257d78, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) get_input_report;
    
    // [GetPreviousInputReport@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f3f8, 0x13864 bytes
    // win32kfull.sys .text:0x257e98, 0x1596d bytes
    // win32kfull.sys .text:0x2570b8, 0x1659e bytes
    // win32kfull.sys .text:0x257da8, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) get_previous_input_report;
    
    // [Initialize@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23f660, 0x13864 bytes
    // win32kfull.sys .text:0x257ec0, 0x1596d bytes
    // win32kfull.sys .text:0x2570e0, 0x1659e bytes
    // win32kfull.sys .text:0x257dd0, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) initialize;
    
    // [PerformInputActions@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23fc04, 0x13864 bytes
    // win32kfull.sys .text:0x2583f0, 0x1596d bytes
    // win32kfull.sys .text:0x2575cc, 0x1659e bytes
    // win32kfull.sys .text:0x258300, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) perform_input_actions;
    
    // [QueueAndGenerateInput@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23fd94, 0x13864 bytes
    // win32kfull.sys .text:0x2585c0, 0x1596d bytes
    // win32kfull.sys .text:0x2577a0, 0x1659e bytes
    // win32kfull.sys .text:0x2584d0, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) queue_and_generate_input;
    
    // [QueueInput@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23ffd0, 0x13864 bytes
    // win32kfull.sys .text:0x2587a0, 0x1596d bytes
    // win32kfull.sys .text:0x25797c, 0x1659e bytes
    // win32kfull.sys .text:0x2586b0, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) queue_input;
    
    // [SendHapticFeedbackOutput@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2401a0, 0x13864 bytes
    // win32kfull.sys .text:0x2587e8, 0x1596d bytes
    // win32kfull.sys .text:0x2579c4, 0x1659e bytes
    // win32kfull.sys .text:0x2586f8, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) send_haptic_feedback_output;
    
    // [SetBackgroundAccessor@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24036c, 0x13864 bytes
    // win32kfull.sys .text:0x258838, 0x1596d bytes
    // win32kfull.sys .text:0x257a14, 0x1659e bytes
    // win32kfull.sys .text:0x258748, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) set_background_accessor;
    
    // [SetComponentResolution@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2403a0, 0x13864 bytes
    // win32kfull.sys .text:0x258888, 0x1596d bytes
    // win32kfull.sys .text:0x257a68, 0x1659e bytes
    // win32kfull.sys .text:0x258798, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) set_component_resolution;
    
    // [SetFocus@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240760, 0x13864 bytes
    // win32kfull.sys .text:0x258d28, 0x1596d bytes
    // win32kfull.sys .text:0x257f14, 0x1659e bytes
    // win32kfull.sys .text:0x258c38, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) set_focus;
    
    // [SetHapticsMode@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2408b0, 0x13864 bytes
    // win32kfull.sys .text:0x258ebc, 0x1596d bytes
    // win32kfull.sys .text:0x2580a8, 0x1659e bytes
    // win32kfull.sys .text:0x258dcc, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) set_haptics_mode;
    
    // [SetMessagePromotionType@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240a54, 0x13864 bytes
    // win32kfull.sys .text:0x258f78, 0x1596d bytes
    // win32kfull.sys .text:0x258164, 0x1659e bytes
    // win32kfull.sys .text:0x258e88, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) set_message_promotion_type;
    
    // [UpdateInputTarget@InteractiveControlDevice]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240aac, 0x13864 bytes
    // win32kfull.sys .text:0x259004, 0x1596d bytes
    // win32kfull.sys .text:0x2581f4, 0x1659e bytes
    // win32kfull.sys .text:0x258f14, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) update_input_target;
};
#include "magic/api.end.hpp"
