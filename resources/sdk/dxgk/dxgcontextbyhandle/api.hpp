#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgcontextbyhandle
{
    // [??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x3560, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbb90, 0x60098 bytes
    // dxgkrnl.sys .text:0x2048, 0x762b0 bytes
    // dxgkrnl.sys .text:0x18a8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGCONTEXTBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbc74, 0x60098 bytes
    // dxgkrnl.sys .text:0x2150, 0x762b0 bytes
    // dxgkrnl.sys .text:0x31a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x19b0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
