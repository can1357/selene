#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_thread_lock
{
    // [??1CThreadLock@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x47234, 0x17e70 bytes
    // dxgi.dll .text:0x47324, 0x17e70 bytes
    // dxgi.dll .text:0x52530, 0x18b10 bytes
    // dxgi.dll .text:0x487b4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
