#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgresource
{
    // [??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147214, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x144978, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d622c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147888, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGRESOURCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8f37c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10b120, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19de7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117150, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
