#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_btl_clone_group_resolver
{
    // [_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb8e4c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124654, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x178090, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe3e60, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) resolve_clone_group_on_adapter;
};
#include "magic/api.end.hpp"
