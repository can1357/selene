#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgcriticalregion
{
    // [??1DXGCRITICALREGION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c71c, 0x60098 bytes
    // dxgkrnl.sys .text:0x34298, 0x762b0 bytes
    // dxgkrnl.sys .text:0x42ff8, 0x84380 bytes
    // dxgkrnl.sys .text:0x344c8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Enter@DXGCRITICALREGION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xaf9c, 0x60098 bytes
    // dxgkrnl.sys .text:0x20b1c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x26b44, 0x84380 bytes
    // dxgkrnl.sys .text:0x219d8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) enter;
    
    // [Leave@DXGCRITICALREGION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xaf78, 0x60098 bytes
    // dxgkrnl.sys .text:0x20a94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x26ab4, 0x84380 bytes
    // dxgkrnl.sys .text:0x21a80, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) leave;
};
#include "magic/api.end.hpp"
