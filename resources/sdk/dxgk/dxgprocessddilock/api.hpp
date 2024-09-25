#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocessddilock
{
    // [??1DXGPROCESSDDILOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2e74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b16c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4214, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb030, 0x60098 bytes
    // dxgkrnl.sys .text:0x7ae4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc2bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x3a9c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
