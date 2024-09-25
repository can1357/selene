#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_partition_adapter_info
{
    // [??0VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x15b20, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c9f0, 0x20ba bytes
    // dxgmms2.sys .text:0x15b20, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26cd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x30e60, 0x20ba bytes
    // dxgmms2.sys .text:0x26c50, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
