#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgfixedqueue
{
    // [??1DXGFIXEDQUEUE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5aaec, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Add@DXGFIXEDQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x48f4c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5abbc, 0x84380 bytes
    // dxgkrnl.sys .text:0x491a4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add;
    
    // [Init@DXGFIXEDQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x491c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5af44, 0x84380 bytes
    // dxgkrnl.sys .text:0x49420, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) init;
    
    // [Remove@DXGFIXEDQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4923c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5affc, 0x84380 bytes
    // dxgkrnl.sys .text:0x49494, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) remove;
};
#include "magic/api.end.hpp"
