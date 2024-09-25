#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_token_queue
{
    // [ReleaseTokensToFrame@CTokenQueue]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x41f20, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) release_tokens_to_frame;
};
#include "magic/api.end.hpp"
