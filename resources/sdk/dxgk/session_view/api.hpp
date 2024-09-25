#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::session_view
{
    // [AddDisplaySource@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x904f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xde3a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1673fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f468, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_display_source;
    
    // [??1SESSION_VIEW@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90490, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc488, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1675fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f824, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [GetNextDisplaySource@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9055c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117d7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1baf84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12430c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_next_display_source;
    
    // [GetPrimaryDisplaySource@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x90548, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x117d9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ac848, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12432c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_primary_display_source;
    
    // [IsCrossAdapterView@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1815f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2995e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348980, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299688, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_cross_adapter_view;
    
    // [RemoveAllDisplaySource@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x904b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc440, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x167624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f84c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) remove_all_display_source;
    
    // [RemoveDisplaySource@SESSION_VIEW]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1817fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x299a00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348ecc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299aa0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) remove_display_source;
};
#include "magic/api.end.hpp"
