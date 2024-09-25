#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::apply_permission_within_this_scope
{
    // [??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8227c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10daa0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a5f1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119ad0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1ApplyPermissionWithinThisScope@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8221c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10dbc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a6044, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119bf8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
