#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgusercrit
{
    // [Acquire@DXGUSERCRIT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbce4, 0x60098 bytes
    // dxgkrnl.sys .text:0x1ea8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e38, 0x84380 bytes
    // dxgkrnl.sys .text:0xb3f8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11234, 0x60098 bytes
    // dxgkrnl.sys .text:0x238f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b508, 0x84380 bytes
    // dxgkrnl.sys .text:0x24494, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGUSERCRIT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11240, 0x60098 bytes
    // dxgkrnl.sys .text:0x2396c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b57c, 0x84380 bytes
    // dxgkrnl.sys .text:0x24504, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
