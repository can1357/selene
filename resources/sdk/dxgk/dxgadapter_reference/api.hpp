#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadapter_reference
{
    // [AssignByHandle@DXGADAPTER_REFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x206680, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ba3cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x206820, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) assign_by_handle;
    
    // [AssignByLuid@DXGADAPTER_REFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9bbc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd580, 0x84380 bytes
    // dxgkrnl.sys .text:0x328c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) assign_by_luid;
    
    // [??0DXGADAPTER_REFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a700, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fa40, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ad40, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGADAPTER_REFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x34280, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e4e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x33ac0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Assign@DXGADAPTER_REFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x268b8, 0x60098 bytes
    // dxgkrnl.sys .text:0x7590, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd5d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x88f0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) assign;
};
#include "magic/api.end.hpp"
