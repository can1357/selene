#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvalidationprocessreattach
{
    // [??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3f384, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3f574, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1329c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x15f34, 0x84380 bytes
    // dxgkrnl.sys .text:0x13a2c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
