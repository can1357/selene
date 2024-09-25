#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_pool_block
{
    // [??0_VIDMM_POOL_BLOCK@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x147b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18f90, 0x20ba bytes
    // dxgmms2.sys .text:0x147b0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1_VIDMM_POOL_BLOCK@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
