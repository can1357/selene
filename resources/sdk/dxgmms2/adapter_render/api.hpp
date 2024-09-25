#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::adapter_render
{
    // [GetGpuMmuCaps@ADAPTER_RENDER]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2dbc, 0x1c52 bytes
    // dxgmms2.sys .text:0x2034, 0x20ba bytes
    // dxgmms2.sys .text:0x2dbc, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_gpu_mmu_caps;
};
#include "magic/api.end.hpp"
