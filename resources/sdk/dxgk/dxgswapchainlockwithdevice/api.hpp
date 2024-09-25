#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgswapchainlockwithdevice
{
    // [Acquire@DXGSWAPCHAINLOCKWITHDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18ea40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a47cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a2bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a486c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18e9b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a4728, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a47c8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18ea14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a4798, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34a288, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a4838, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Release@DXGSWAPCHAINLOCKWITHDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1901b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a6aec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x221d5c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a6b8c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
