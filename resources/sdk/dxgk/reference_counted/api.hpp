#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::reference_counted
{
    // [??1ReferenceCounted@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4d50, 0x60098 bytes
    // dxgkrnl.sys .text:0x8c90, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa120, 0x84380 bytes
    // dxgkrnl.sys .text:0x9ba0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Release@ReferenceCounted]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4d10, 0x60098 bytes
    // dxgkrnl.sys .text:0x4384, 0x762b0 bytes
    // dxgkrnl.sys .text:0x97a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5724, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
