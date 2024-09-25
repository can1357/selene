#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgihmd_emulated_output
{
    // [??1CDXGIHMDEmulatedOutput@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x49bfc, 0x17e70 bytes
    // dxgi.dll .text:0x49cec, 0x17e70 bytes
    // dxgi.dll .text:0x4b17c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [CheckOverlayColorSpaceSupport@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50910, 0x17e70 bytes
    // dxgi.dll .text:0x50a00, 0x17e70 bytes
    // dxgi.dll .text:0x5b930, 0x18b10 bytes
    // dxgi.dll .text:0x51e90, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) check_overlay_color_space_support;
    
    // [CheckOverlaySupport@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50950, 0x17e70 bytes
    // dxgi.dll .text:0x50a40, 0x17e70 bytes
    // dxgi.dll .text:0x5b970, 0x18b10 bytes
    // dxgi.dll .text:0x51ed0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) check_overlay_support;
    
    // [FindClosestMatchingMode1@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53050, 0x17e70 bytes
    // dxgi.dll .text:0x53140, 0x17e70 bytes
    // dxgi.dll .text:0x5dfc0, 0x18b10 bytes
    // dxgi.dll .text:0x545d0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) find_closest_matching_mode1;
    
    // [GetDesc@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53cf0, 0x17e70 bytes
    // dxgi.dll .text:0x53de0, 0x17e70 bytes
    // dxgi.dll .text:0x5ebf0, 0x18b10 bytes
    // dxgi.dll .text:0x55270, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_desc;
    
    // [GetDesc1@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x53cc0, 0x17e70 bytes
    // dxgi.dll .text:0x53db0, 0x17e70 bytes
    // dxgi.dll .text:0x5ebc0, 0x18b10 bytes
    // dxgi.dll .text:0x55240, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_desc1;
    
    // [GetHMonitor@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ebf0, 0x17e70 bytes
    // dxgi.dll .text:0x1ef00, 0x17e70 bytes
    // dxgi.dll .text:0x266c0, 0x18b10 bytes
    // dxgi.dll .text:0x1fcf0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) get_h_monitor;
    
    // [SupportsOverlays@CDXGIHMDEmulatedOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26710, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) supports_overlays;
};
#include "magic/api.end.hpp"
