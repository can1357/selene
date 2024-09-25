#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::palm_rejection
{
    // [DispatchBufferedInputFrames@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b024, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) dispatch_buffered_input_frames;
    
    // [Enabled@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b118, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) enabled;
    
    // [_GetNonRejectionRegion@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b4d4, 0x13864 bytes
    //
    _m2(sdk::unknown_ptr) get_non_rejection_region;
    
    // [_HitTestRejectionRegion@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b544, 0x13864 bytes
    //
    _m3(sdk::unknown_ptr) hit_test_rejection_region;
    
    // [_PalmRejectTimerProc@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b5b0, 0x13864 bytes
    //
    _m4(sdk::unknown_ptr) palm_reject_timer_proc;
    
    // [ProcessInput@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b198, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) process_input;
    
    // [_SuppressDeadzoneContacts@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b728, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) suppress_deadzone_contacts;
    
    // [_SuppressDeadzoneContactsInFrame@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x22b7a0, 0x13864 bytes
    //
    _m7(sdk::unknown_ptr) suppress_deadzone_contacts_in_frame;
    
    // [CreateEdgePalmRejectionZones@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x207e18, 0x1596d bytes
    // win32kfull.sys .text:0x20a3a4, 0x1659e bytes
    // win32kfull.sys .text:0x207c88, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) create_edge_palm_rejection_zones;
    
    // [_ReadSettingsFromRegKey@PalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22b5cc, 0x13864 bytes
    // win32kfull.sys .text:0x207f2c, 0x1596d bytes
    // win32kfull.sys .text:0x20a4c4, 0x1659e bytes
    // win32kfull.sys .text:0x207d9c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) read_settings_from_reg_key;
};
#include "magic/api.end.hpp"
