#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_global_alloc
{
    // [??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66cd0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x87f14, 0x20ba bytes
    // dxgmms2.sys PAGE:0x672c0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
