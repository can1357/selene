#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_manager
{
    // [??1InteractiveControlManager@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1150cc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [OnDeviceTimerNotification@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x23da34, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) on_device_timer_notification;
    
    // [SetDeviceHapticsConfiguration@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x23e0f8, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) set_device_haptics_configuration;
    
    // [Deinitialize@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x125ba0, 0x1596d bytes
    // win32kfull.sys .text:0x115128, 0x1659e bytes
    // win32kfull.sys .text:0x126ae0, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) deinitialize;
    
    // [GetDeviceSupportedWaveforms@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x252a8c, 0x1596d bytes
    // win32kfull.sys .text:0x251f2c, 0x1659e bytes
    // win32kfull.sys .text:0x25299c, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) get_device_supported_waveforms;
    
    // [AcquireDeviceBackgroundAccess@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1166b8, 0x13864 bytes
    // win32kfull.sys .text:0xb9d68, 0x1596d bytes
    // win32kfull.sys .text:0x8cde4, 0x1659e bytes
    // win32kfull.sys .text:0xba8d8, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) acquire_device_background_access;
    
    // [ClearBackgroundAccessors@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23cad8, 0x13864 bytes
    // win32kfull.sys .text:0x252680, 0x1596d bytes
    // win32kfull.sys .text:0x251b1c, 0x1659e bytes
    // win32kfull.sys .text:0x252590, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) clear_background_accessors;
    
    // [ClearDeviceFocus@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23cc08, 0x13864 bytes
    // win32kfull.sys .text:0x252774, 0x1596d bytes
    // win32kfull.sys .text:0x251c14, 0x1659e bytes
    // win32kfull.sys .text:0x252684, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) clear_device_focus;
    
    // [??0InteractiveControlManager@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1167b0, 0x13864 bytes
    // win32kfull.sys .text:0xb9e70, 0x1596d bytes
    // win32kfull.sys .text:0x8de14, 0x1659e bytes
    // win32kfull.sys .text:0xba9e0, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [FindDevice@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23cd34, 0x13864 bytes
    // win32kfull.sys .text:0x252868, 0x1596d bytes
    // win32kfull.sys .text:0x251d08, 0x1659e bytes
    // win32kfull.sys .text:0x252778, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) find_device;
    
    // [GetDeviceInfo@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23cd80, 0x13864 bytes
    // win32kfull.sys .text:0x2528bc, 0x1596d bytes
    // win32kfull.sys .text:0x251d5c, 0x1659e bytes
    // win32kfull.sys .text:0x2527cc, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) get_device_info;
    
    // [GetExternalParameters@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23cf80, 0x13864 bytes
    // win32kfull.sys .text:0x252ba8, 0x1596d bytes
    // win32kfull.sys .text:0x252048, 0x1659e bytes
    // win32kfull.sys .text:0x252ab8, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) get_external_parameters;
    
    // [GetReportExtendedUsage@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d0e8, 0x13864 bytes
    // win32kfull.sys .text:0x252cac, 0x1596d bytes
    // win32kfull.sys .text:0x25214c, 0x1659e bytes
    // win32kfull.sys .text:0x252bbc, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) get_report_extended_usage;
    
    // [GetReportInfo@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d364, 0x13864 bytes
    // win32kfull.sys .text:0x252e90, 0x1596d bytes
    // win32kfull.sys .text:0x252330, 0x1659e bytes
    // win32kfull.sys .text:0x252da0, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) get_report_info;
    
    // [InsertDevice@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d588, 0x13864 bytes
    // win32kfull.sys .text:0x253064, 0x1596d bytes
    // win32kfull.sys .text:0x252500, 0x1659e bytes
    // win32kfull.sys .text:0x252f74, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) insert_device;
    
    // [Instance@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x116674, 0x13864 bytes
    // win32kfull.sys .text:0xb9e24, 0x1596d bytes
    // win32kfull.sys .text:0x8ddc8, 0x1659e bytes
    // win32kfull.sys .text:0xba994, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) instance;
    
    // [OnDeviceAttach@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d5f4, 0x13864 bytes
    // win32kfull.sys .text:0x2530d8, 0x1596d bytes
    // win32kfull.sys .text:0x252574, 0x1659e bytes
    // win32kfull.sys .text:0x252fe8, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) on_device_attach;
    
    // [OnDeviceRemoval@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d868, 0x13864 bytes
    // win32kfull.sys .text:0x253300, 0x1596d bytes
    // win32kfull.sys .text:0x25279c, 0x1659e bytes
    // win32kfull.sys .text:0x253210, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) on_device_removal;
    
    // [OnInputReport@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23dac8, 0x13864 bytes
    // win32kfull.sys .text:0x25342c, 0x1596d bytes
    // win32kfull.sys .text:0x2528c8, 0x1659e bytes
    // win32kfull.sys .text:0x25333c, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) on_input_report;
    
    // [RemoveDevice@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23dbb8, 0x13864 bytes
    // win32kfull.sys .text:0x2534e4, 0x1596d bytes
    // win32kfull.sys .text:0x252980, 0x1659e bytes
    // win32kfull.sys .text:0x2533f4, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) remove_device;
    
    // [s_pInstance@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3290c0, 0x13864 bytes
    // win32kfull.sys .data:0x33aef8, 0x1596d bytes
    // win32kfull.sys .data:0x339278, 0x1659e bytes
    // win32kfull.sys .data:0x33af28, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) s_p_instance;
    
    // [SendDeviceHapticsOutput@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23dc20, 0x13864 bytes
    // win32kfull.sys .text:0x253558, 0x1596d bytes
    // win32kfull.sys .text:0x2529f4, 0x1659e bytes
    // win32kfull.sys .text:0x253468, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) send_device_haptics_output;
    
    // [SetDeviceComponentResolution@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23dda8, 0x13864 bytes
    // win32kfull.sys .text:0x253684, 0x1596d bytes
    // win32kfull.sys .text:0x252b20, 0x1659e bytes
    // win32kfull.sys .text:0x253594, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) set_device_component_resolution;
    
    // [SetDeviceFocus@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23df8c, 0x13864 bytes
    // win32kfull.sys .text:0x2537e4, 0x1596d bytes
    // win32kfull.sys .text:0x252c80, 0x1659e bytes
    // win32kfull.sys .text:0x2536f4, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) set_device_focus;
    
    // [SetDeviceHapticsMode@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e2a0, 0x13864 bytes
    // win32kfull.sys .text:0x25390c, 0x1596d bytes
    // win32kfull.sys .text:0x252da8, 0x1659e bytes
    // win32kfull.sys .text:0x25381c, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) set_device_haptics_mode;
    
    // [SetExternalParameters@InteractiveControlManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23e44c, 0x13864 bytes
    // win32kfull.sys .text:0x253a38, 0x1596d bytes
    // win32kfull.sys .text:0x252ed4, 0x1659e bytes
    // win32kfull.sys .text:0x253948, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) set_external_parameters;
};
#include "magic/api.end.hpp"
