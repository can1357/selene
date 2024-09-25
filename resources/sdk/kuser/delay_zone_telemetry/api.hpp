#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::delay_zone_telemetry
{
    // [AddInputPanelRectToList@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6cc8, 0x243e0 bytes
    // win32kbase.sys .text:0x20fce8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4aa8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_input_panel_rect_to_list;
    
    // [ClearInputPanelRects@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2627c, 0x243e0 bytes
    // win32kbase.sys .text:0x876e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x78ea0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) clear_input_panel_rects;
    
    // [ClearSession@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6d58, 0x243e0 bytes
    // win32kbase.sys .text:0x20fe78, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4b38, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) clear_session;
    
    // [HitTestInputPanelRegion@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6dd0, 0x243e0 bytes
    // win32kbase.sys .text:0x20fef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4bb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) hit_test_input_panel_region;
    
    // [Initialize@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x24f14, 0x243e0 bytes
    // win32kbase.sys .text:0xb8654, 0x27ef0 bytes
    // win32kbase.sys .text:0x7581c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [UpdateDelayZoneStateInfo@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6e6c, 0x243e0 bytes
    // win32kbase.sys .text:0x20ff94, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4c4c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) update_delay_zone_state_info;
    
    // [UpdateInputPalmRejectStateInfo@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6fcc, 0x243e0 bytes
    // win32kbase.sys .text:0x2100f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4dac, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) update_input_palm_reject_state_info;
    
    // [UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c7060, 0x243e0 bytes
    // win32kbase.sys .text:0x210188, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4e40, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) update_pointer_and_delay_zone_info;
    
    // [UploadTelemetryData@DelayZoneTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c7188, 0x243e0 bytes
    // win32kbase.sys .text:0x2102b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4f68, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) upload_telemetry_data;
};
#include "magic/api.end.hpp"
