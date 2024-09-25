#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_buffer_realization
{
    // [GetInfo@CBufferRealization]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x136dc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_info;
};
#include "magic/api.end.hpp"
