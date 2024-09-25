#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsessionmodechangelock
{
    // [ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x7f0c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) release_mode_change_lock;
    
    // [AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7f24, 0x60098 bytes
    // dxgkrnl.sys .text:0x9b44, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6db4, 0x84380 bytes
    // dxgkrnl.sys .text:0x333c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_mode_change_lock;
    
    // [??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11268, 0x60098 bytes
    // dxgkrnl.sys .text:0x238e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b4f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x24484, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11270, 0x60098 bytes
    // dxgkrnl.sys .text:0x2394c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b55c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a970, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
