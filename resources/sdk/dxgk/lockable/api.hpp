#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::lockable
{
    // [??1Lockable@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1aaaf0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0Lockable@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec8c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a580, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17a778, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1Lockable@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e3a3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a83c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e37ac, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance_;
    
    // [IsConstructed@Lockable]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3840, 0x60098 bytes
    // dxgkrnl.sys .text:0x19070, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1db50, 0x84380 bytes
    // dxgkrnl.sys .text:0x194e0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_constructed;
    
    // [SetConstructionStatus@Lockable]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b40, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a880, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20330, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af00, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) set_construction_status;
};
#include "magic/api.end.hpp"
