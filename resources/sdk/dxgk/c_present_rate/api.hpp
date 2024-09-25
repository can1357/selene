#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_present_rate
{
    // [NotifyFrame@CPresentRate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x78448, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) notify_frame;
};
#include "magic/api.end.hpp"
