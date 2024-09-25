#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdisplaymanagersourceobject
{
    // [??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ab920, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ab9c0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [IsValid@DXGDISPLAYMANAGERSOURCEOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac398, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ac438, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) is_valid;
    
    // [??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ab9bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f3fd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aba5c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac1fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f48ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac29c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_display_manager_object;
    
    // [SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac73c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4eac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac7dc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) set_nt_object_pointer;
};
#include "magic/api.end.hpp"
