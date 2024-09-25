#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsyncobjectlock
{
    // [??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x7f8c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x70c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc49c, 0x84380 bytes
    // dxgkrnl.sys .text:0x8478, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGSYNCOBJECTLOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8008, 0x60098 bytes
    // dxgkrnl.sys .text:0x38fcc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x391fc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [AcquireExclusive@DXGSYNCOBJECTLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11444, 0x60098 bytes
    // dxgkrnl.sys .text:0x38fe8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46264, 0x84380 bytes
    // dxgkrnl.sys .text:0x39218, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@DXGSYNCOBJECTLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7fc8, 0x60098 bytes
    // dxgkrnl.sys .text:0x7074, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc5dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x8424, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_shared;
    
    // [Release@DXGSYNCOBJECTLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8014, 0x60098 bytes
    // dxgkrnl.sys .text:0x6f84, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc594, 0x84380 bytes
    // dxgkrnl.sys .text:0x8334, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
