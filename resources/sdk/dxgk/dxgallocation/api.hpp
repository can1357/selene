#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgallocation
{
    // [??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x222610, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d61d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x222710, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGALLOCATION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x10acd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19daf4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116d08, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
