#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidmm_flip_queue_references
{
    // [ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20f0c, 0x60098 bytes
    // dxgkrnl.sys .text:0x3cd10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a970, 0x84380 bytes
    // dxgkrnl.sys .text:0x3cf00, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) release_reference;
};
#include "magic/api.end.hpp"
