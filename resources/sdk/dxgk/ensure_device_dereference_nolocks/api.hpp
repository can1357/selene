#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ensure_device_dereference_nolocks
{
    // [??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xb26c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
