#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxghandletablelockshared
{
    // [??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbcb4, 0x60098 bytes
    // dxgkrnl.sys .text:0x7424, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc1f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x8784, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9d40, 0x60098 bytes
    // dxgkrnl.sys .text:0x2e74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b16c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4214, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
