#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocesscalloutmutex
{
    // [??1DXGPROCESSCALLOUTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x55c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b150, 0x84380 bytes
    // dxgkrnl.sys .text:0x6964, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8100, 0x60098 bytes
    // dxgkrnl.sys .text:0x229c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3214, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a6c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
