#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_push_lock_critical_section
{
    // [Release@CPushLockCriticalSection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd57c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13f0c, 0x84380 bytes
    // dxgkrnl.sys .text:0xda0c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
