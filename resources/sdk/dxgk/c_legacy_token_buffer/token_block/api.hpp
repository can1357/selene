#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_legacy_token_buffer::token_block
{
    // [Create@TokenBlock@CLegacyTokenBuffer]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ba08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c088, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create;
};
#include "magic/api.end.hpp"
