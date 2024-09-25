#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_store
{
    // [ForConnectedSet@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbafc8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132948, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf13c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x135eac, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) for_connected_set;
    
    // [ForTopology@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbaf48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1328b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf174, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x135e1c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) for_topology;
};
#include "magic/api.end.hpp"
