#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ensure_context_array_dereference
{
    // [??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x46170, 0x762b0 bytes
    // dxgkrnl.sys .text:0x595bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x46360, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
