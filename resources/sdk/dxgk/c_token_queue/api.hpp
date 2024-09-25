#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_token_queue
{
    // [DeleteAllTokens@CTokenQueue]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcd10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14aac, 0x84380 bytes
    // dxgkrnl.sys .text:0xd1a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) delete_all_tokens;
};
#include "magic/api.end.hpp"
