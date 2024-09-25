#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpnsourceset
{
    // [AddSource@DMMVIDPNSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x75f24, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11f2e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17930c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12476c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_source;
    
    // [??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x247c, 0x60098 bytes
    // dxgkrnl.sys .text:0x822c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5954, 0x84380 bytes
    // dxgkrnl.sys .text:0x9140, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPNSOURCESET@@QEAA@QEAVDMMVIDPN@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2390, 0x60098 bytes
    // dxgkrnl.sys .text:0x18830, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5534, 0x84380 bytes
    // dxgkrnl.sys .text:0xa734, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [??1DMMVIDPNSOURCESET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2434, 0x60098 bytes
    // dxgkrnl.sys .text:0x8ae4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6264, 0x84380 bytes
    // dxgkrnl.sys .text:0x99f4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [GetNextSource@DMMVIDPNSOURCESET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x250c, 0x60098 bytes
    // dxgkrnl.sys .text:0x59f60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69c30, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a0f0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_next_source;
};
#include "magic/api.end.hpp"
