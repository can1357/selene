#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpntargetset
{
    // [AddTarget@DMMVIDPNTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x768f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xffff4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19bd60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10bfc4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_target;
    
    // [??0DMMVIDPNTARGETSET@@QEAA@QEAVDMMVIDPN@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x36c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x188d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x548c, 0x84380 bytes
    // dxgkrnl.sys .text:0xa7dc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x37ac, 0x60098 bytes
    // dxgkrnl.sys .text:0x82b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x59e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x91cc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [??1DMMVIDPNTARGETSET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3764, 0x60098 bytes
    // dxgkrnl.sys .text:0x8ae4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6264, 0x84380 bytes
    // dxgkrnl.sys .text:0x99f4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetNextTarget@DMMVIDPNTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d260, 0x60098 bytes
    // dxgkrnl.sys .text:0x59f60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69c30, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a0f0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_next_target;
};
#include "magic/api.end.hpp"
