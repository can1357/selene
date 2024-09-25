#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::outputdupl_mgr_indirect
{
    // [??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x47858, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5593c, 0x84380 bytes
    // dxgkrnl.sys .text:0x47ab0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17fd10, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2976e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x324d80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x297788, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) update_render_adapter_luid;
};
#include "magic/api.end.hpp"
