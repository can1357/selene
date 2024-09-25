#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadapterbyhandle
{
    // [??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xa014, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7118, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbfb4, 0x84380 bytes
    // dxgkrnl.sys .text:0x84c8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGADAPTERBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa0f4, 0x60098 bytes
    // dxgkrnl.sys .text:0x7880, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8be0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
