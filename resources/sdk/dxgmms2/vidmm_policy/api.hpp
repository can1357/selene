#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_policy
{
    // [Set@VIDMM_POLICY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x668e4, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) set;
    
    // [??0VIDMM_POLICY@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71788, 0x158b bytes
    // dxgmms2.sys PAGE:0xae554, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd4e94, 0x20ba bytes
    // dxgmms2.sys PAGE:0xaeb34, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [IsActive@VIDMM_POLICY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65610, 0x158b bytes
    // dxgmms2.sys PAGE:0x61358, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x82ea4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x61948, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) is_active;
};
#include "magic/api.end.hpp"
