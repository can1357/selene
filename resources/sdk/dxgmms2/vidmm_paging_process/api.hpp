#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_paging_process
{
    // [CreateVaAllocator@VIDMM_PAGING_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d934, 0x158b bytes
    // dxgmms2.sys PAGE:0xbdac0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xafa2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe090, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) create_va_allocator;
    
    // [DestroyPagingProcess@VIDMM_PAGING_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92c98, 0x158b bytes
    // dxgmms2.sys PAGE:0xbdc14, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2654, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe1e4, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) destroy_paging_process;
    
    // [InitPagingProcess@VIDMM_PAGING_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6da64, 0x158b bytes
    // dxgmms2.sys PAGE:0x936fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4930, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93dd4, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) init_paging_process;
    
    // [MapScratchAreaVaRange@VIDMM_PAGING_PROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65258, 0x158b bytes
    // dxgmms2.sys PAGE:0x73a84, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x84fb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x74074, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) map_scratch_area_va_range;
};
#include "magic/api.end.hpp"
