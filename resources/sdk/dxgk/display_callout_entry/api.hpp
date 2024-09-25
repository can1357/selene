#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_callout_entry
{
    // [??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x262b40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x309774, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x262ca0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x262bc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3097fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x262d28, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x262c7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3098b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x262ddc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
