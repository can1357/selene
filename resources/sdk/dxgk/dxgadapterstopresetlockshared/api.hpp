#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadapterstopresetlockshared
{
    // [??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xb128, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb174, 0x60098 bytes
    // dxgkrnl.sys .text:0x2b134, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aa04, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Acquire@DXGADAPTERSTOPRESETLOCKSHARED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb0e0, 0x60098 bytes
    // dxgkrnl.sys .text:0x5820, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb2b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6bc0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire;
    
    // [Release@DXGADAPTERSTOPRESETLOCKSHARED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb188, 0x60098 bytes
    // dxgkrnl.sys .text:0x587c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb30c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c1c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
