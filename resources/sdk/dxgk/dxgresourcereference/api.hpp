#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgresourcereference
{
    // [Assign@DXGRESOURCEREFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xc17ec, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) assign;
    
    // [MoveAssign@DXGRESOURCEREFERENCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1147a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b0ee4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x120d44, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) move_assign;
    
    // [??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1918, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xfd2c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b0f20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x109298, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGRESOURCEREFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf32d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154920, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e30f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157bd0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGRESOURCEREFERENCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xfd270, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b0e90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x109240, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
