#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgkeyedmutexbyhandle
{
    // [??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x10ec, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x102c, 0x60098 bytes
    // dxgkrnl.sys .text:0x46370, 0x762b0 bytes
    // dxgkrnl.sys .text:0x59838, 0x84380 bytes
    // dxgkrnl.sys .text:0x46560, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
