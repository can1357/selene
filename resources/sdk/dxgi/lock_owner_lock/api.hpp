#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::lock_owner_lock
{
    // [??1LockOwnerLock@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47270, 0x17e70 bytes
    // dxgi.dll .text:0x47360, 0x17e70 bytes
    // dxgi.dll .text:0x5256c, 0x18b10 bytes
    // dxgi.dll .text:0x487f0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
