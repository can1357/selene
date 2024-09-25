#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::attach_to_object_session
{
    // [Attach@DxgkAttachToObjectSession]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1c22c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) attach;
};
#include "magic/api.end.hpp"
