#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::enumerate_ksr_memory_context
{
    // [??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2cc9f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x393e8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ccac8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
