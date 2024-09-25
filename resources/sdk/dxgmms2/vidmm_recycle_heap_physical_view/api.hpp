#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_recycle_heap_physical_view
{
    // [CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48b68, 0x158b bytes
    // dxgmms2.sys PAGE:0x75bb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7c878, 0x20ba bytes
    // dxgmms2.sys PAGE:0x761a8, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) copy_pfn_array;
    
    // [LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x490d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x76824, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80ab8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x76e14, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) lock_range;
    
    // [UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48c80, 0x158b bytes
    // dxgmms2.sys PAGE:0x761cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x7cecc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x767bc, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) unlock_range;
};
#include "magic/api.end.hpp"
