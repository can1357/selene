#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadapterallocation
{
    // [??0DXGADAPTERALLOCATION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14703c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d61b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14a9cc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGADAPTERALLOCATION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb26f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10ad10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19db24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116d40, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
