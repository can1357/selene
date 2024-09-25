#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_diagnostics
{
    // [GetLongPowerButtonHoldListener@DisplayDiagnostics]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4ec88, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_long_power_button_hold_listener;
    
    // [LidStateReliabilityChangeCallback@DisplayDiagnostics]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x284c0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) lid_state_reliability_change_callback;
    
    // [GetDisplayBlackboxRecorder@DisplayDiagnostics]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4de90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4ec7c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4e0e0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_display_blackbox_recorder;
    
    // [Initialize@DisplayDiagnostics]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21a24, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28408, 0x84380 bytes
    // dxgkrnl.sys .text:0x223c8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
