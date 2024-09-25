#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvideopresentsource
{
    // [??1DMMVIDEOPRESENTSOURCE@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5adf4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6aba8, 0x84380 bytes
    // dxgkrnl.sys .text:0x5af84, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xfca0, 0x60098 bytes
    // dxgkrnl.sys .text:0x22310, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28c08, 0x84380 bytes
    // dxgkrnl.sys .text:0x22d70, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [Serialize@DMMVIDEOPRESENTSOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab874, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e5118, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9964, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4e88, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) serialize;
};
#include "magic/api.end.hpp"
