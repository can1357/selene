#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgautopushlock
{
    // [AcquireExclusive@DXGAUTOPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2d50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x40f0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [ReleaseExclusive@DXGAUTOPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2f48, 0x762b0 bytes
    // dxgkrnl.sys .text:0x42e8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) release_exclusive;
    
    // [ReleaseShared@DXGAUTOPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23564, 0x762b0 bytes
    // dxgkrnl.sys .text:0x24084, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release_shared;
    
    // [??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9d0c, 0x60098 bytes
    // dxgkrnl.sys .text:0x2df0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc388, 0x84380 bytes
    // dxgkrnl.sys .text:0x4190, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGAUTOPUSHLOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9d40, 0x60098 bytes
    // dxgkrnl.sys .text:0x2e74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b16c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4214, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Release@DXGAUTOPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9d48, 0x60098 bytes
    // dxgkrnl.sys .text:0x2e8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc19c, 0x84380 bytes
    // dxgkrnl.sys .text:0x422c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
