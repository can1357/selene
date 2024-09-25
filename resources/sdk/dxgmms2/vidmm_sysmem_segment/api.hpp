#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_sysmem_segment
{
    // [MapTemporaryResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x46600, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) map_temporary_resource;
    
    // [UnmapTemporaryResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x46600, 0x158b bytes
    //
    _m1(sdk::unknown_ptr) unmap_temporary_resource;
    
    // [BeginTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88340, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa53b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88930, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) begin_temporary_resource_access;
    
    // [EndTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88580, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5420, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88b70, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) end_temporary_resource_access;
    
    // [CommitResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46d20, 0x158b bytes
    // dxgmms2.sys PAGE:0x63ea0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85aa0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64490, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) commit_resource;
    
    // [??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94f44, 0x158b bytes
    // dxgmms2.sys PAGE:0xc3a3c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7b2c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc400c, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [EvictResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x469c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x63ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85e00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x640c0, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) evict_resource;
    
    // [Init@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a720, 0x158b bytes
    // dxgmms2.sys PAGE:0x8cee0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad1e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d4d0, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) init;
    
    // [LockAllocationRange@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46730, 0x158b bytes
    // dxgmms2.sys PAGE:0x879f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5040, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87fe0, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) lock_allocation_range;
    
    // [MapPagingBuffer@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x469b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86060, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3bc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86650, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) map_paging_buffer;
    
    // [ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x468b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86e90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4b20, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87480, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) release_temporary_resource;
    
    // [ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46580, 0x158b bytes
    // dxgmms2.sys PAGE:0x882a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa5350, 0x20ba bytes
    // dxgmms2.sys PAGE:0x88890, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) reserve_temporary_resource;
    
    // [RestoreFromPurge@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x54220, 0x158b bytes
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) restore_from_purge;
    
    // [UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46650, 0x158b bytes
    // dxgmms2.sys PAGE:0x87ec0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa51e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x884b0, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) unlock_allocation_range;
    
    // [UnmapPagingBuffer@VIDMM_SYSMEM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x469a0, 0x158b bytes
    // dxgmms2.sys PAGE:0x86070, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3bd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86660, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) unmap_paging_buffer;
};
#include "magic/api.end.hpp"
