#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::delay_zone_palm_rejection
{
    // [FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xf7570, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) flush_delay_zone_palm_reject_input_timer_proc;
    
    // [AddDelayZoneToList@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6408, 0x243e0 bytes
    // win32kbase.sys .text:0x1fd644, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b41b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_delay_zone_to_list;
    
    // [AddEdgeZoneToList@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6690, 0x243e0 bytes
    // win32kbase.sys .text:0x1fda40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b442c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) add_edge_zone_to_list;
    
    // [DispatchBufferedInputFrames@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b68d4, 0x243e0 bytes
    // win32kbase.sys .text:0x1fddc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4680, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) dispatch_buffered_input_frames;
    
    // [GetInstance@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fccc, 0x243e0 bytes
    // win32kbase.sys .text:0xb84c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1148c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_instance;
    
    // [HitTestRejectionRegion@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6c4c, 0x243e0 bytes
    // win32kbase.sys .text:0x1fe180, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b49f8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) hit_test_rejection_region;
    
    // [Initialize@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24e3c, 0x243e0 bytes
    // win32kbase.sys .text:0xb8544, 0x27ef0 bytes
    // win32kbase.sys .text:0x75744, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [OnDeviceRemoval@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6d78, 0x243e0 bytes
    // win32kbase.sys .text:0x1fe300, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4b24, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) on_device_removal;
    
    // [PalmRejectTimerProc@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6ecc, 0x243e0 bytes
    // win32kbase.sys .text:0x1fe4e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4c78, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) palm_reject_timer_proc;
    
    // [ProcessInput@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b6f50, 0x243e0 bytes
    // win32kbase.sys .text:0x1fe5ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b4cfc, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) process_input;
    
    // [ReadSettingsFromRegKey@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x258e8, 0x243e0 bytes
    // win32kbase.sys .text:0xb86d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x761e8, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) read_settings_from_reg_key;
    
    // [RemoveDelayZoneFromList@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b75c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1fee9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b536c, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) remove_delay_zone_from_list;
    
    // [RemoveDelayZoneFromListInternal@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b76d8, 0x243e0 bytes
    // win32kbase.sys .text:0x1feff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b5498, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) remove_delay_zone_from_list_internal;
    
    // [RemoveEdgeZonesForDevice@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b77d4, 0x243e0 bytes
    // win32kbase.sys .text:0x1ff140, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b559c, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) remove_edge_zones_for_device;
    
    // [s_instance@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ad70, 0x243e0 bytes
    // win32kbase.sys .data:0x2afb80, 0x27ef0 bytes
    // win32kbase.sys .data:0x257da0, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) s_instance;
    
    // [SuppressDeadzoneContacts@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b7890, 0x243e0 bytes
    // win32kbase.sys .text:0x1ff248, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b5668, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) suppress_deadzone_contacts;
    
    // [Uninitialize@DelayZonePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x261d8, 0x243e0 bytes
    // win32kbase.sys .text:0x87620, 0x27ef0 bytes
    // win32kbase.sys .text:0x78dfc, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) uninitialize;
};
#include "magic/api.end.hpp"
