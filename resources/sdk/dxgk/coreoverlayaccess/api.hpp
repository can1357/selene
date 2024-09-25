#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::coreoverlayaccess
{
    // [AcquireShared@COREOVERLAYACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24d00, 0x60098 bytes
    // dxgkrnl.sys .text:0x448e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56724, 0x84380 bytes
    // dxgkrnl.sys .text:0x44ad8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_shared;
    
    // [??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24cd4, 0x60098 bytes
    // dxgkrnl.sys .text:0x448b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x566f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x44aa4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1COREOVERLAYACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x119f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x244b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c3ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x25144, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
