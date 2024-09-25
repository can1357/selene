#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_mdl_range
{
    // [GetNextRange@VIDMM_MDL_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x492e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x75cd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c998, 0x20ba bytes
    // dxgmms2.sys PAGE:0x762c4, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_next_range;
    
    // [InsertBetween@VIDMM_MDL_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49504, 0x158b bytes
    // dxgmms2.sys PAGE:0x769a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80c3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76f94, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) insert_between;
    
    // [Lock@VIDMM_MDL_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49404, 0x158b bytes
    // dxgmms2.sys PAGE:0x769e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80c80, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76fd8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) lock;
    
    // [LockUnlock@VIDMM_MDL_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x492fc, 0x158b bytes
    // dxgmms2.sys PAGE:0x85360, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c5f4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85950, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) lock_unlock;
    
    // [Unlock@VIDMM_MDL_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x493dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x765fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7d308, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76bec, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
