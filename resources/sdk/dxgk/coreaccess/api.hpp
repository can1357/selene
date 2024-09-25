#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::coreaccess
{
    // [AcquireExclusive@COREACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9a48, 0x60098 bytes
    // dxgkrnl.sys .text:0x78a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6f78, 0x84380 bytes
    // dxgkrnl.sys .text:0x8c00, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@COREACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x99f8, 0x60098 bytes
    // dxgkrnl.sys .text:0x3038, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa2a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x43d8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_shared;
    
    // [??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9ae4, 0x60098 bytes
    // dxgkrnl.sys .text:0x7278, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb0e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x8654, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1COREACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9aa8, 0x60098 bytes
    // dxgkrnl.sys .text:0x72a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb108, 0x84380 bytes
    // dxgkrnl.sys .text:0x867c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Release@COREACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x99c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x378c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa4ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b2c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
