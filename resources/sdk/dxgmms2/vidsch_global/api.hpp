#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_global
{
    // [??0_VIDSCH_GLOBAL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x156bc, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c4bc, 0x20ba bytes
    // dxgmms2.sys .text:0x156bc, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1_VIDSCH_GLOBAL@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32a10, 0x1c52 bytes
    // dxgmms2.sys .text:0x3b0e4, 0x20ba bytes
    // dxgmms2.sys .text:0x32990, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
