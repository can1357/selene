#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_monitor::power_on_failure_stage
{
    // [SetError@PowerOnFailureStage@DxgMonitor]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x6b85c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) set_error;
};
#include "magic/api.end.hpp"
