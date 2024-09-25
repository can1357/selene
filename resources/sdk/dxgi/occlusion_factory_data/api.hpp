#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::occlusion_factory_data
{
    // [??1OcclusionFactoryData@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5dc64, 0x17e70 bytes
    // dxgi.dll .text:0x5dd54, 0x17e70 bytes
    // dxgi.dll .text:0x698f4, 0x18b10 bytes
    // dxgi.dll .text:0x5f188, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
