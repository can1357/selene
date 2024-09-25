#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_manager::present_history
{
    // [GetNextEntry@PresentHistory@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7d86c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_next_entry;
};
#include "magic/api.end.hpp"
