#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpairedadapterstopresetlockshared
{
    // [??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2385c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b46c, 0x84380 bytes
    // dxgkrnl.sys .text:0x243f8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2390c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b51c, 0x84380 bytes
    // dxgkrnl.sys .text:0x244c4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23998, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b5a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x24530, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
