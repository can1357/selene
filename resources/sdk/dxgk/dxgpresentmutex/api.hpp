#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpresentmutex
{
    // [??1DXGPRESENTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1b148, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20c04, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b7c8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Acquire@DXGPRESENTMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd1dc, 0x60098 bytes
    // dxgkrnl.sys .text:0x16934, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2148, 0x84380 bytes
    // dxgkrnl.sys .text:0x170c4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire;
    
    // [??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd178, 0x60098 bytes
    // dxgkrnl.sys .text:0x16968, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a630, 0x84380 bytes
    // dxgkrnl.sys .text:0x170f8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Release@DXGPRESENTMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd1b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x16854, 0x762b0 bytes
    // dxgkrnl.sys .text:0x721c, 0x84380 bytes
    // dxgkrnl.sys .text:0x16fe4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
