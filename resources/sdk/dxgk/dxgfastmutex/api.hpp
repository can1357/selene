#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgfastmutex
{
    // [??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5f00, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a3c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xace4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Acquire@DXGFASTMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5f8c, 0x60098 bytes
    // dxgkrnl.sys .text:0x5390, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8d60, 0x84380 bytes
    // dxgkrnl.sys .text:0x6730, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire;
    
    // [??1DXGFASTMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5f1c, 0x60098 bytes
    // dxgkrnl.sys .text:0x5520, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa528, 0x84380 bytes
    // dxgkrnl.sys .text:0x68c0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Release@DXGFASTMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5f40, 0x60098 bytes
    // dxgkrnl.sys .text:0x5450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8e30, 0x84380 bytes
    // dxgkrnl.sys .text:0x67f0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
