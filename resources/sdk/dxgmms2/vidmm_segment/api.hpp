#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_segment
{
    // [ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x6d250, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) compute_base_address_and_size_of_pageable_region;
    
    // [??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x6d270, 0x158b bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [_GlobalTotalBytesCommittedInAperture@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .data:0x36508, 0x158b bytes
    //
    _m2(sdk::unknown_ptr) global_total_bytes_committed_in_aperture;
    
    // [_GlobalTotalBytesResidentInAperture@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .data:0x36510, 0x158b bytes
    //
    _m3(sdk::unknown_ptr) global_total_bytes_resident_in_aperture;
    
    // [MakeRangeNonPageable@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x97b8c, 0x158b bytes
    //
    _m4(sdk::unknown_ptr) make_range_non_pageable;
    
    // [MakeRangePageable@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x97c8c, 0x158b bytes
    //
    _m5(sdk::unknown_ptr) make_range_pageable;
    
    // [MapTemporaryResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    //
    _m6(sdk::unknown_ptr) map_temporary_resource;
    
    // [MapToIommu@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xeb33c, 0x20ba bytes
    //
    _m7(sdk::unknown_ptr) map_to_iommu;
    
    // [MovePinnedResourcesOverRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x9817c, 0x158b bytes
    //
    _m8(sdk::unknown_ptr) move_pinned_resources_over_range;
    
    // [ReserveOutsideRangeIfDisplayableCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x98ab0, 0x158b bytes
    //
    _m9(sdk::unknown_ptr) reserve_outside_range_if_displayable_cb;
    
    // [ResumeDevicesOnAllocationCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x98e20, 0x158b bytes
    //
    _n0(sdk::unknown_ptr) resume_devices_on_allocation_cb;
    
    // [SystemMemorySegment@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13d0, 0x158b bytes
    //
    _n1(sdk::unknown_ptr) system_memory_segment;
    
    // [UnmapTemporaryResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    //
    _n2(sdk::unknown_ptr) unmap_temporary_resource;
    
    // [VerifyResidentLimit@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x47290, 0x158b bytes
    //
    _n3(sdk::unknown_ptr) verify_resident_limit;
    
    // [MapAllocationsToIoMmu@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc8630, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc8c00, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) map_allocations_to_io_mmu;
    
    // [BeginTemporaryResourceAccess@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc73e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea1b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc79b0, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) begin_temporary_resource_access;
    
    // [BlockMemoryRanges@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc7430, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea1ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7a00, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) block_memory_ranges;
    
    // [??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92398, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xaed00, 0x20ba bytes
    // dxgmms2.sys PAGE:0x92a78, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) construct_instance_;
    
    // [Defragment@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) defragment;
    
    // [EndTemporaryResourceAccess@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) end_temporary_resource_access;
    
    // [FindSegmentLocationOutsideRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9769c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7d0c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc82dc, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) find_segment_location_outside_range;
    
    // [FreeForwardProgressMdl@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc7dd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeaafc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc83a4, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) free_forward_progress_mdl;
    
    // [GetAlignmentCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x86080, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3be0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86670, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) get_alignment_cb;
    
    // [IsDisplayingResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc84e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb200, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8ab0, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) is_displaying_resource_cb;
    
    // [IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc8550, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb270, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8b20, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) is_movable_resource_no_displaying_cb;
    
    // [MapPagesIntoAperture@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96f20, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7090, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc7660, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) map_pages_into_aperture;
    
    // [OldDefragment@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc8d44, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeba9c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9314, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) old_defragment;
    
    // [ProcessUnblockMemoryRanges@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc9214, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xebf3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc97e4, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) process_unblock_memory_ranges;
    
    // [ReclaimScrubRegionResources@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc99d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec6cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9fa4, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) reclaim_scrub_region_resources;
    
    // [ReserveOutsideRangeCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc9cb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec9b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca280, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) reserve_outside_range_cb;
    
    // [ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc9d50, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xecb00, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca410, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) reserve_outside_range_no_displaying_cb;
    
    // [RestoreResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4560, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9ab0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4b30, 0x1c52 bytes
    //
    _p1(sdk::unknown_ptr) restore_resource_cb;
    
    // [SaveResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb4750, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd9bf0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb4d20, 0x1c52 bytes
    //
    _p2(sdk::unknown_ptr) save_resource_cb;
    
    // [TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xca6dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed544, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcae80, 0x1c52 bytes
    //
    _p3(sdk::unknown_ptr) trim_all_marked_for_eviction_allocations;
    
    // [UnblockMemoryRanges@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcaa60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed96c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb204, 0x1c52 bytes
    //
    _p4(sdk::unknown_ptr) unblock_memory_ranges;
    
    // [UnmapPagesFromAperture@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _p5(sdk::unknown_ptr) unmap_pages_from_aperture;
    
    // [UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb69a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdbab4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb6f70, 0x1c52 bytes
    //
    _p6(sdk::unknown_ptr) update_virtual_address_for_new_resource_location;
    
    // [ValidateApertureUnmapToDummyPage@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71840, 0x158b bytes
    // dxgmms2.sys PAGE:0x860d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x866c0, 0x1c52 bytes
    //
    _p7(sdk::unknown_ptr) validate_aperture_unmap_to_dummy_page;
    
    // [ValidateMemoryRanges@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcad68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xedc88, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb50c, 0x1c52 bytes
    //
    _p8(sdk::unknown_ptr) validate_memory_ranges;
    
    // [VerifyIntegrity@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xcae80, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xedde0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb620, 0x1c52 bytes
    //
    _p9(sdk::unknown_ptr) verify_integrity;
    
    // [VerifyTransfer@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x73520, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83a10, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73b10, 0x1c52 bytes
    //
    _q0(sdk::unknown_ptr) verify_transfer;
    
    // [AllocateScratchRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96f20, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7090, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9e70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7660, 0x1c52 bytes
    //
    _q1(sdk::unknown_ptr) allocate_scratch_range;
    
    // [AttemptToGrowVPRForAllocation@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96f5c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc70e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9eac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc76b0, 0x1c52 bytes
    //
    _q2(sdk::unknown_ptr) attempt_to_grow_vpr_for_allocation;
    
    // [CheckForApertureGuardPageCorruption@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1fd50, 0x158b bytes
    // dxgmms2.sys .text:0x285f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x32784, 0x20ba bytes
    // dxgmms2.sys .text:0x28574, 0x1c52 bytes
    //
    _q3(sdk::unknown_ptr) check_for_aperture_guard_page_corruption;
    
    // [CheckFreeVPRReserve@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x971b8, 0x158b bytes
    // dxgmms2.sys PAGE:0xc75f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea410, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7bc4, 0x1c52 bytes
    //
    _q4(sdk::unknown_ptr) check_free_vpr_reserve;
    
    // [CheckLowestAddress@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97280, 0x158b bytes
    // dxgmms2.sys PAGE:0xc76d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea4e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7ca0, 0x1c52 bytes
    //
    _q5(sdk::unknown_ptr) check_lowest_address;
    
    // [CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47160, 0x158b bytes
    // dxgmms2.sys PAGE:0x5f590, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x95cbc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5fb80, 0x1c52 bytes
    //
    _q6(sdk::unknown_ptr) cleanup_marked_for_eviction_allocations;
    
    // [ComputeNewWorkingSet@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x479f8, 0x158b bytes
    // dxgmms2.sys PAGE:0x7fce8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99680, 0x20ba bytes
    // dxgmms2.sys PAGE:0x802d8, 0x1c52 bytes
    //
    _q7(sdk::unknown_ptr) compute_new_working_set;
    
    // [CurateVPR@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x972d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7734, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea560, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7d04, 0x1c52 bytes
    //
    _q8(sdk::unknown_ptr) curate_vpr;
    
    // [DecrementBytesCommitted@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47348, 0x158b bytes
    // dxgmms2.sys PAGE:0x6479c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98954, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64d8c, 0x1c52 bytes
    //
    _q9(sdk::unknown_ptr) decrement_bytes_committed;
    
    // [DefragmentResourcesOverRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x973e8, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7950, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea768, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7f20, 0x1c52 bytes
    //
    _r0(sdk::unknown_ptr) defragment_resources_over_range;
    
    // [??1VIDMM_SEGMENT@@UEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96e0c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc6fc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9db0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7590, 0x1c52 bytes
    //
    _r1(sdk::unknown_ptr) destroy_instance;
    
    // [DriverId@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13bc, 0x158b bytes
    // dxgmms2.sys .text:0x205c, 0x1c52 bytes
    // dxgmms2.sys .text:0x2160, 0x20ba bytes
    // dxgmms2.sys .text:0x205c, 0x1c52 bytes
    //
    _r2(sdk::unknown_ptr) driver_id;
    
    // [FlushPendingCPUAccess@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46f30, 0x158b bytes
    // dxgmms2.sys PAGE:0x848a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1cd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84e90, 0x1c52 bytes
    //
    _r3(sdk::unknown_ptr) flush_pending_cpu_access;
    
    // [FlushPendingGPUAccess@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x474c0, 0x158b bytes
    // dxgmms2.sys PAGE:0x85590, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa34a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85b80, 0x1c52 bytes
    //
    _r4(sdk::unknown_ptr) flush_pending_gpu_access;
    
    // [FlushTLB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _r5(sdk::unknown_ptr) flush_tlb;
    
    // [FreeScratchRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _r6(sdk::unknown_ptr) free_scratch_range;
    
    // [FreeSpaceForSecureResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9771c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7e68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeabcc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8438, 0x1c52 bytes
    //
    _r7(sdk::unknown_ptr) free_space_for_secure_resource;
    
    // [FreeVPRReserve@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x977c0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7f60, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeacc4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8530, 0x1c52 bytes
    //
    _r8(sdk::unknown_ptr) free_vpr_reserve;
    
    // [GetActiveVprEnd@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d82c, 0x158b bytes
    // dxgmms2.sys .text:0x23798, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d5d4, 0x20ba bytes
    // dxgmms2.sys .text:0x23718, 0x1c52 bytes
    //
    _r9(sdk::unknown_ptr) get_active_vpr_end;
    
    // [GetDeviceToSuspend@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x903d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xba2e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdee3c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xba8b8, 0x1c52 bytes
    //
    _s0(sdk::unknown_ptr) get_device_to_suspend;
    
    // [GetLargestGap@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97800, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7fa8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xead0c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8578, 0x1c52 bytes
    //
    _s1(sdk::unknown_ptr) get_largest_gap;
    
    // [GetPriorityClass@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65438, 0x158b bytes
    // dxgmms2.sys PAGE:0x84ce0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa203c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x852d0, 0x1c52 bytes
    //
    _s2(sdk::unknown_ptr) get_priority_class;
    
    // [Init@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d3e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d120, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad3e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d710, 0x1c52 bytes
    //
    _s3(sdk::unknown_ptr) init;
    
    // [InitializeForwardProgressMdl@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6d190, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d300, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad5b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d8f0, 0x1c52 bytes
    //
    _s4(sdk::unknown_ptr) initialize_forward_progress_mdl;
    
    // [InvalidateAllVirtualAddress@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97868, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8214, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeaf80, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc87e4, 0x1c52 bytes
    //
    _s5(sdk::unknown_ptr) invalidate_all_virtual_address;
    
    // [IsMovableResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97ab0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8500, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb220, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8ad0, 0x1c52 bytes
    //
    _s6(sdk::unknown_ptr) is_movable_resource_cb;
    
    // [IsNonOverlappingResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97b04, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8580, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb2a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8b50, 0x1c52 bytes
    //
    _s7(sdk::unknown_ptr) is_non_overlapping_resource_cb;
    
    // [LockAllocationBackingStore@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x473cc, 0x158b bytes
    // dxgmms2.sys PAGE:0x63974, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85678, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63f64, 0x1c52 bytes
    //
    _s8(sdk::unknown_ptr) lock_allocation_backing_store;
    
    // [LockAllocationRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97b50, 0x158b bytes
    // dxgmms2.sys PAGE:0xc85e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb300, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8bb0, 0x1c52 bytes
    //
    _s9(sdk::unknown_ptr) lock_allocation_range;
    
    // [LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x48af8, 0x158b bytes
    // dxgmms2.sys PAGE:0x63830, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85800, 0x20ba bytes
    // dxgmms2.sys PAGE:0x63e20, 0x1c52 bytes
    //
    _t0(sdk::unknown_ptr) log_lock_allocation_backing_store_to_etw;
    
    // [MapPagingBuffer@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _t1(sdk::unknown_ptr) map_paging_buffer;
    
    // [MarkResourcesForEviction@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47064, 0x158b bytes
    // dxgmms2.sys PAGE:0x6467c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98834, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64c6c, 0x1c52 bytes
    //
    _t2(sdk::unknown_ptr) mark_resources_for_eviction;
    
    // [MoveOneResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x97cd0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8760, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb4d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8d30, 0x1c52 bytes
    //
    _t3(sdk::unknown_ptr) move_one_resource;
    
    // [MoveResourcesForAllocationPlacement@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x98254, 0x158b bytes
    // dxgmms2.sys PAGE:0xc89f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb76c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8fc8, 0x1c52 bytes
    //
    _t4(sdk::unknown_ptr) move_resources_for_allocation_placement;
    
    // [NotifyAllocationReclaimed@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67550, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8a90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeb810, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9060, 0x1c52 bytes
    //
    _t5(sdk::unknown_ptr) notify_allocation_reclaimed;
    
    // [OfferAllocation@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4722c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8cc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3a7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9290, 0x1c52 bytes
    //
    _t6(sdk::unknown_ptr) offer_allocation;
    
    // [ProcessPendingMoves@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x982e4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc8de4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xebb38, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc93b4, 0x1c52 bytes
    //
    _t7(sdk::unknown_ptr) process_pending_moves;
    
    // [PurgeContent@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67e04, 0x158b bytes
    // dxgmms2.sys PAGE:0xc928c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xebfb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc985c, 0x1c52 bytes
    //
    _t8(sdk::unknown_ptr) purge_content;
    
    // [ReAllocateOldResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9864c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc96cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec3e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9c9c, 0x1c52 bytes
    //
    _t9(sdk::unknown_ptr) re_allocate_old_resource;
    
    // [ReclaimResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x46f3c, 0x158b bytes
    // dxgmms2.sys PAGE:0x629f8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1460, 0x20ba bytes
    // dxgmms2.sys PAGE:0x62fe8, 0x1c52 bytes
    //
    _u0(sdk::unknown_ptr) reclaim_resource;
    
    // [ReleaseResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x474d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x83e10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9f770, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84400, 0x1c52 bytes
    //
    _u1(sdk::unknown_ptr) release_resource;
    
    // [ReleaseTemporaryResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _u2(sdk::unknown_ptr) release_temporary_resource;
    
    // [RepairPendingResourceCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x98888, 0x158b bytes
    // dxgmms2.sys PAGE:0xc9a7c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec774, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca04c, 0x1c52 bytes
    //
    _u3(sdk::unknown_ptr) repair_pending_resource_cb;
    
    // [ReportSegment@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x988b8, 0x158b bytes
    // dxgmms2.sys PAGE:0x8d2e0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xad590, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8d8d0, 0x1c52 bytes
    //
    _u4(sdk::unknown_ptr) report_segment;
    
    // [ReportSegmentState@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x98924, 0x158b bytes
    // dxgmms2.sys PAGE:0xc9ab4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec7ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca084, 0x1c52 bytes
    //
    _u5(sdk::unknown_ptr) report_segment_state;
    
    // [ReserveResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47610, 0x158b bytes
    // dxgmms2.sys PAGE:0x642d0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e630, 0x20ba bytes
    // dxgmms2.sys PAGE:0x648c0, 0x1c52 bytes
    //
    _u6(sdk::unknown_ptr) reserve_resource;
    
    // [ReserveTemporaryResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96f20, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7090, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9e70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7660, 0x1c52 bytes
    //
    _u7(sdk::unknown_ptr) reserve_temporary_resource;
    
    // [ReserveVPRResource@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x98b04, 0x158b bytes
    // dxgmms2.sys PAGE:0xc9df0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xecc48, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca594, 0x1c52 bytes
    //
    _u8(sdk::unknown_ptr) reserve_vpr_resource;
    
    // [RestoreFromPurge@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14770, 0x158b bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18db0, 0x20ba bytes
    // dxgmms2.sys .text:0x145b0, 0x1c52 bytes
    //
    _u9(sdk::unknown_ptr) restore_from_purge;
    
    // [SetVprRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x98ef0, 0x158b bytes
    // dxgmms2.sys PAGE:0xca194, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xecfdc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xca938, 0x1c52 bytes
    //
    _v0(sdk::unknown_ptr) set_vpr_range;
    
    // [SuspendCpuAccess@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99030, 0x158b bytes
    // dxgmms2.sys PAGE:0xca318, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed1d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcaabc, 0x1c52 bytes
    //
    _v1(sdk::unknown_ptr) suspend_cpu_access;
    
    // [TrackAndValidatePagesOnLock@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x47980, 0x158b bytes
    // dxgmms2.sys PAGE:0x76b10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80dd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x77100, 0x1c52 bytes
    //
    _v2(sdk::unknown_ptr) track_and_validate_pages_on_lock;
    
    // [TrimAllocation@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99390, 0x158b bytes
    // dxgmms2.sys PAGE:0xca734, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed59c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcaed8, 0x1c52 bytes
    //
    _v3(sdk::unknown_ptr) trim_allocation;
    
    // [TrimMarkedForEvictionAllocations@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9943c, 0x158b bytes
    // dxgmms2.sys PAGE:0xca7f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed654, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcaf94, 0x1c52 bytes
    //
    _v4(sdk::unknown_ptr) trim_marked_for_eviction_allocations;
    
    // [TrimOfferList@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x994c0, 0x158b bytes
    // dxgmms2.sys PAGE:0xca87c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed6e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb020, 0x1c52 bytes
    //
    _v5(sdk::unknown_ptr) trim_offer_list;
    
    // [TrimOfferLists@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x995a8, 0x158b bytes
    // dxgmms2.sys PAGE:0xca9a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed7fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb144, 0x1c52 bytes
    //
    _v6(sdk::unknown_ptr) trim_offer_lists;
    
    // [TrimResidentBytes@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x471e8, 0x158b bytes
    // dxgmms2.sys PAGE:0x846a8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xed8bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84c98, 0x1c52 bytes
    //
    _v7(sdk::unknown_ptr) trim_resident_bytes;
    
    // [UnlockAllocationBackingStore@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x61dbc, 0x158b bytes
    // dxgmms2.sys PAGE:0x62ee4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83820, 0x20ba bytes
    // dxgmms2.sys PAGE:0x634d4, 0x1c52 bytes
    //
    _v8(sdk::unknown_ptr) unlock_allocation_backing_store;
    
    // [UnlockAllocationRange@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _v9(sdk::unknown_ptr) unlock_allocation_range;
    
    // [UnmapPagingBuffer@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99610, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7b70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea980, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8140, 0x1c52 bytes
    //
    _w0(sdk::unknown_ptr) unmap_paging_buffer;
    
    // [UpdateActiveVPRAfterMove@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x99648, 0x158b bytes
    // dxgmms2.sys PAGE:0xcab28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xeda5c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xcb2cc, 0x1c52 bytes
    //
    _w1(sdk::unknown_ptr) update_active_vpr_after_move;
    
    // [UpdatePendingResourceReserveCB@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x997cc, 0x158b bytes
    // dxgmms2.sys PAGE:0x86090, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3bf0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86680, 0x1c52 bytes
    //
    _w2(sdk::unknown_ptr) update_pending_resource_reserve_cb;
    
    // [VerifyCommitLimit@VIDMM_SEGMENT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x472dc, 0x158b bytes
    // dxgmms2.sys PAGE:0x64890, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ea48, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64e80, 0x1c52 bytes
    //
    _w3(sdk::unknown_ptr) verify_commit_limit;
};
#include "magic/api.end.hpp"
