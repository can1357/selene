#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::drips_blocker_tracking_helper::time_interval
{
    // [GetElapsed@TimeInterval@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be2b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be384, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_elapsed;
    
    // [Start@TimeInterval@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be7e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21f318, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be8b8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) start;
    
    // [Stop@TimeInterval@DripsBlockerTrackingHelper]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2be818, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff63c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2be8e8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) stop;
};
#include "magic/api.end.hpp"
