#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_composition_token
{
    // [ReleaseAllUpdates@CCompositionToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0xec20, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) release_all_updates;
};
#include "magic/api.end.hpp"
