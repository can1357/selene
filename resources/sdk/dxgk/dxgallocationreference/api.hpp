#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgallocationreference
{
    // [Assign@DXGALLOCATIONREFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x97444, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) assign;
    
    // [AssignNull@DXGALLOCATIONREFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2226d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d637c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2227d0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) assign_null;
    
    // [MoveAssign@DXGALLOCATIONREFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf331c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18598c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xff2ec, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) move_assign;
    
    // [??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x97590, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf0930, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x187a90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfc900, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGALLOCATIONREFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf32d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154920, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e30f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157bd0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGALLOCATIONREFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x97490, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xef1b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18a530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb180, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
