#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgoverlaymutex
{
    // [??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd5a0, 0x60098 bytes
    // dxgkrnl.sys .text:0x23834, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b444, 0x84380 bytes
    // dxgkrnl.sys .text:0x243a8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGOVERLAYMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11050, 0x60098 bytes
    // dxgkrnl.sys .text:0x55c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b150, 0x84380 bytes
    // dxgkrnl.sys .text:0x6964, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
