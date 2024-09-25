#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_physical_adapter
{
    // [??0VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11eb0, 0x158b bytes
    // dxgmms2.sys .text:0x14750, 0x1c52 bytes
    // dxgmms2.sys .text:0x18f30, 0x20ba bytes
    // dxgmms2.sys .text:0x14750, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6f334, 0x158b bytes
    // dxgmms2.sys PAGE:0xb11fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xafb70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb17c4, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) initialize_gpu_va_state;
};
#include "magic/api.end.hpp"
