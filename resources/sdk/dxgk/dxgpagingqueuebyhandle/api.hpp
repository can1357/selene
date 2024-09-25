#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpagingqueuebyhandle
{
    // [??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xd6f8, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xd7b0, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Open@DXGPAGINGQUEUEBYHANDLE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d140, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d480, 0x84380 bytes
    // dxgkrnl.sys .text:0x1d7c0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) open;
};
#include "magic/api.end.hpp"
