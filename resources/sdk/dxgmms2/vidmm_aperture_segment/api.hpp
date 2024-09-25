#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_aperture_segment
{
    // [BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc3ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7bc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc40a0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) begin_temporary_resource_access;
    
    // [EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc3bc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7cc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4190, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) end_temporary_resource_access;
    
    // [MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95790, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4540, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc4b10, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) map_pages_into_aperture;
    
    // [UnmapPagesFromAperture@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96070, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5030, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc5600, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) unmap_pages_from_aperture;
    
    // [ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x962f0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc52c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc5890, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) validate_aperture_unmap_to_dummy_page;
    
    // [CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f9c0, 0x158b bytes
    // dxgmms2.sys .text:0x281b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x32324, 0x20ba bytes
    // dxgmms2.sys .text:0x28134, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) check_for_aperture_guard_page_corruption;
    
    // [CommitResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a860, 0x158b bytes
    // dxgmms2.sys PAGE:0x937c0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7da0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x93e90, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) commit_resource;
    
    // [??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94f7c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc3a80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7b70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4050, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [EvictResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x94fc0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc3c40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6f60, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4210, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) evict_resource;
    
    // [FreeGuardPages@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x953f4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4120, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7d5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc46f0, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) free_guard_pages;
    
    // [Init@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6ad40, 0x158b bytes
    // dxgmms2.sys PAGE:0x8cfa0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad280, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d590, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) init;
    
    // [InitializeGuardPages@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6aca0, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d06c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad32c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d65c, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) initialize_guard_pages;
    
    // [LockAllocationRange@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95450, 0x158b bytes
    // dxgmms2.sys PAGE:0xc41a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe7df0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4770, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) lock_allocation_range;
    
    // [MapApertureRange@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6a7e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x93af0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa8330, 0x20ba bytes
    // dxgmms2.sys PAGE:0x941c0, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) map_aperture_range;
    
    // [MapPagingBuffer@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95880, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4630, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8200, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4c00, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) map_paging_buffer;
    
    // [MapTemporaryResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95940, 0x158b bytes
    // dxgmms2.sys PAGE:0xc46f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe82bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4cc8, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) map_temporary_resource;
    
    // [ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95ad0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4890, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8450, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4e60, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) release_temporary_resource;
    
    // [ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95c30, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4a10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe85c0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc4fe0, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) reserve_temporary_resource;
    
    // [RestoreFromPurge@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68bf0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4ba0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa78b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5170, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) restore_from_purge;
    
    // [UnlockAllocationRange@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95d90, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4d10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8740, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc52e0, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) unlock_allocation_range;
    
    // [UnmapApertureRange@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x95f60, 0x158b bytes
    // dxgmms2.sys PAGE:0xc4f20, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7620, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc54f0, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) unmap_aperture_range;
    
    // [UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x960d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc50a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8970, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5670, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) unmap_paging_buffer;
    
    // [UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96170, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5140, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8a08, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5710, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) unmap_temporary_resource;
};
#include "magic/api.end.hpp"
