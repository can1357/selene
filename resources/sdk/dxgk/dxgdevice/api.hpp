#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdevice
{
    // [CallCheckMultiPlaneOverlaySupport1DDI@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15dd78, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) call_check_multi_plane_overlay_support1ddi;
    
    // [CallCheckMultiPlaneOverlaySupport2DDI@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15dfd0, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) call_check_multi_plane_overlay_support2ddi;
    
    // [CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15e224, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) call_check_multi_plane_overlay_support3ddi;
    
    // [CheckMultiPlaneOverlayInternal2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15e4e8, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) check_multi_plane_overlay_internal2;
    
    // [CheckMultiPlaneOverlayInternal3@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15e548, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) check_multi_plane_overlay_internal3;
    
    // [ClassifyOverlayScenario@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15fa4c, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) classify_overlay_scenario;
    
    // [ClearDisplayedAllMultiPlaneOverlays@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xa364, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) clear_displayed_all_multi_plane_overlays;
    
    // [ConfigureSharedResourceWithSharedHandle@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15fdbc, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) configure_shared_resource_with_shared_handle;
    
    // [??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1b7664, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xae458, 0x60098 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance_;
    
    // [ConvertToCheckMultiPlaneOverlaySupport@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15feac, 0x60098 bytes
    //
    _n0(sdk::unknown_ptr) convert_to_check_multi_plane_overlay_support;
    
    // [DestroyAdapterAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d57b8, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) destroy_adapter_allocation;
    
    // [GetAllocationPhysicalAddress@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e5e34, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) get_allocation_physical_address;
    
    // [GetDisplayedMultiPlaneOverlay@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x27f14, 0x60098 bytes
    //
    _n3(sdk::unknown_ptr) get_displayed_multi_plane_overlay;
    
    // [GetPresentContext@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e6088, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) get_present_context;
    
    // [HasContextWithHintType@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x16484c, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) has_context_with_hint_type;
    
    // [IsGpuAccessToAllocationsPending@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x155368, 0x60098 bytes
    //
    _n6(sdk::unknown_ptr) is_gpu_access_to_allocations_pending;
    
    // [IsVSyncAvailable@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1474f0, 0x60098 bytes
    //
    _n7(sdk::unknown_ptr) is_v_sync_available;
    
    // [IsYUVAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x160d88, 0x60098 bytes
    //
    _n8(sdk::unknown_ptr) is_yuv_allocation;
    
    // [Lock2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x317b70, 0x84380 bytes
    //
    _n9(sdk::unknown_ptr) lock2;
    
    // [MarkDeviceAsError@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e6c84, 0x84380 bytes
    //
    _o0(sdk::unknown_ptr) mark_device_as_error;
    
    // [ReportDeviceSyncObjects@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e7a38, 0x84380 bytes
    //
    _o1(sdk::unknown_ptr) report_device_sync_objects;
    
    // [SetDisplayedAllMultiPlaneOverlays@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x27f68, 0x60098 bytes
    //
    _o2(sdk::unknown_ptr) set_displayed_all_multi_plane_overlays;
    
    // [SetDisplayedPrimaryUnsafe@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xa6b0, 0x60098 bytes
    //
    _o3(sdk::unknown_ptr) set_displayed_primary_unsafe;
    
    // [TraceCloseParavirtualizedAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2d7d6c, 0x84380 bytes
    //
    _o4(sdk::unknown_ptr) trace_close_paravirtualized_allocation;
    
    // [UnpinDirectFlipResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x161c40, 0x60098 bytes
    //
    _o5(sdk::unknown_ptr) unpin_direct_flip_resource;
    
    // [UpdateCheckPlaneWithIndependentFlip@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18cfe4, 0x60098 bytes
    //
    _o6(sdk::unknown_ptr) update_check_plane_with_independent_flip;
    
    // [UpdateCheckPlaneWithIndependentFlip2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18cd9c, 0x60098 bytes
    //
    _o7(sdk::unknown_ptr) update_check_plane_with_independent_flip2;
    
    // [UpdateCheckPlaneWithIndependentFlip3@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18cebc, 0x60098 bytes
    //
    _o8(sdk::unknown_ptr) update_check_plane_with_independent_flip3;
    
    // [UpdateGammaRamp@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x161f20, 0x60098 bytes
    //
    _o9(sdk::unknown_ptr) update_gamma_ramp;
    
    // [WaitUntilAllocationsNotBusy@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x155674, 0x60098 bytes
    //
    _p0(sdk::unknown_ptr) wait_until_allocations_not_busy;
    
    // [??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xdefa8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xe8f1c, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) construct_instance__;
    
    // [HasOpenGlContext@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd92b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x130fe0, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) has_open_gl_context;
    
    // [AddDeviceSyncObjectToList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x144468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a2c64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x147378, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) add_device_sync_object_to_list;
    
    // [ClearDisplayedAllMultiPlaneOverlaysUnsafe@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19fa4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e4f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a6e4, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) clear_displayed_all_multi_plane_overlays_unsafe;
    
    // [CreateStagingSurface2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24eda4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4cfc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24eee4, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) create_staging_surface2;
    
    // [CreateVidMmAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf6240, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x192210, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x102210, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) create_vid_mm_allocations;
    
    // [DestroyAllTrackedWorkloads@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe2cbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d9578, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdabe0, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) destroy_all_tracked_workloads;
    
    // [DestroyStagingSurface@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24ef54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4f00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24f094, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) destroy_staging_surface;
    
    // [GetAllocationPriority@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x222d08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d69c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x222e08, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) get_allocation_priority;
    
    // [GetDisplayedAllMultiPlaneOverlays@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27e7c, 0x60098 bytes
    // dxgkrnl.sys .text:0x485f4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4884c, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) get_displayed_all_multi_plane_overlays;
    
    // [GetStandardAllocationDriverData@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2231b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d6eec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2232b0, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) get_standard_allocation_driver_data;
    
    // [GetVistaBltStubInfo@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x454b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x573b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x456a0, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) get_vista_blt_stub_info;
    
    // [IsFullWDDMDevice@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2994, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7200, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d30, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) is_full_wddm_device;
    
    // [MakeAllocationResident@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x250694, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e68b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2507d4, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) make_allocation_resident;
    
    // [NotifyProcessStatusChange@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x115008, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7814, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121598, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) notify_process_status_change;
    
    // [PinResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2509c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6cd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x250b04, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) pin_resources;
    
    // [RemoveDeviceSyncObjectFromList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x10ec50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a2bec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11ac80, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) remove_device_sync_object_from_list;
    
    // [RemoveTrackedWorkloadFromList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7ccc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x346068, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7d6c, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) remove_tracked_workload_from_list;
    
    // [RemoveVidPnOwnership@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15c52c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e8e34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15f37c, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) remove_vid_pn_ownership;
    
    // [SetDeviceGammaRamp@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x40940, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4c398, 0x84380 bytes
    // dxgkrnl.sys .text:0x40b30, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) set_device_gamma_ramp;
    
    // [SetVirtualGpu@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d918, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5c4f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3db08, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) set_virtual_gpu;
    
    // [UnpinDeviceResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15e220, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ea154, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161070, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) unpin_device_resources;
    
    // [UnpinResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x159888, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d4e0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15c6d8, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) unpin_resource;
    
    // [UseCachedIndependentFlipParameters@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x251a74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15e16c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251bb4, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) use_cached_independent_flip_parameters;
    
    // [AddPrimaryAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8ef8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x151a14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dfff8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x154c54, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) add_primary_allocation;
    
    // [AllowLegacyPresent@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x172744, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x279118, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32efa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x279168, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) allow_legacy_present;
    
    // [AppendAllocationListToResourceOrDevice@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147504, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155fe0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e41c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158e30, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) append_allocation_list_to_resource_or_device;
    
    // [CheckMultiPlaneOverlaySupport@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15f464, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24e9a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e48f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24eae4, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) check_multi_plane_overlay_support;
    
    // [CheckMultiPlaneOverlaySupport2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15e8dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24dab8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4748, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24dbf8, 0x762b0 bytes
    //
    _r9(sdk::unknown_ptr) check_multi_plane_overlay_support2;
    
    // [CheckMultiPlaneOverlaySupport3@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15eea8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24dc78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15d8d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24ddb8, 0x762b0 bytes
    //
    _s0(sdk::unknown_ptr) check_multi_plane_overlay_support3;
    
    // [ClearStateReportingFlags@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15fc9c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24eb60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21f204, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24eca0, 0x762b0 bytes
    //
    _s1(sdk::unknown_ptr) clear_state_reporting_flags;
    
    // [CloseInternalCddPrimaryHandle@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x172f0c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a4f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3308a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a544, 0x762b0 bytes
    //
    _s2(sdk::unknown_ptr) close_internal_cdd_primary_handle;
    
    // [CollectDbgInfo@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15fcbc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24eb88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4aa4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24ecc8, 0x762b0 bytes
    //
    _s3(sdk::unknown_ptr) collect_dbg_info;
    
    // [CompleteAsynchronousUnpin@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15fdb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15c6a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d806c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15f4f4, 0x762b0 bytes
    //
    _s4(sdk::unknown_ptr) complete_asynchronous_unpin;
    
    // [ConfigureSharedResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7d20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x114cc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b0f68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x121254, 0x762b0 bytes
    //
    _s5(sdk::unknown_ptr) configure_shared_resource;
    
    // [ConfigureSharedResourceHelper@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7bd8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x114e3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1114, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1213cc, 0x762b0 bytes
    //
    _s6(sdk::unknown_ptr) configure_shared_resource_helper;
    
    // [CreateAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaa850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf66e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1901c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1026b0, 0x762b0 bytes
    //
    _s7(sdk::unknown_ptr) create_allocation;
    
    // [CreateAllocationObjects@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xacd20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf5a10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1927f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1019e0, 0x762b0 bytes
    //
    _s8(sdk::unknown_ptr) create_allocation_objects;
    
    // [CreateContext@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa86ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe4b34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b3708, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xefad0, 0x762b0 bytes
    //
    _s9(sdk::unknown_ptr) create_context;
    
    // [CreateDriverAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xac630, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe6100, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1837f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf10a0, 0x762b0 bytes
    //
    _t0(sdk::unknown_ptr) create_driver_allocations;
    
    // [CreateOverlay@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160018, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24ec94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4bd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24edd4, 0x762b0 bytes
    //
    _t1(sdk::unknown_ptr) create_overlay;
    
    // [CreatePagingQueue@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7898, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1183dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b17c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xef320, 0x762b0 bytes
    //
    _t2(sdk::unknown_ptr) create_paging_queue;
    
    // [CreateStandardAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa62f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x109030, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cf29c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x115060, 0x762b0 bytes
    //
    _t3(sdk::unknown_ptr) create_standard_allocation;
    
    // [DestroyAllContexts@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8244, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe1bc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d93ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdb20c, 0x762b0 bytes
    //
    _t4(sdk::unknown_ptr) destroy_all_contexts;
    
    // [DestroyAllDeviceState@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaebf4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe31fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1e44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd9e20, 0x762b0 bytes
    //
    _t5(sdk::unknown_ptr) destroy_all_device_state;
    
    // [DestroyAllDeviceSyncObjects@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8160, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2c58, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d90bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdac2c, 0x762b0 bytes
    //
    _t6(sdk::unknown_ptr) destroy_all_device_sync_objects;
    
    // [DestroyAllPagingQueues@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa81a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe1c90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a7c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdaf50, 0x762b0 bytes
    //
    _t7(sdk::unknown_ptr) destroy_all_paging_queues;
    
    // [DestroyAllocationInternal@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6870, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x110bb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a6e8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11ce18, 0x762b0 bytes
    //
    _t8(sdk::unknown_ptr) destroy_allocation_internal;
    
    // [DestroyAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xad6bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11a3d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19c3dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xee384, 0x762b0 bytes
    //
    _t9(sdk::unknown_ptr) destroy_allocations;
    
    // [DestroyClientAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x154ea4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x222704, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d63b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x222804, 0x762b0 bytes
    //
    _u0(sdk::unknown_ptr) destroy_client_allocations;
    
    // [DestroyClientResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x154f50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2227f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d64ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2228f8, 0x762b0 bytes
    //
    _u1(sdk::unknown_ptr) destroy_client_resource;
    
    // [DestroyContext@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa9044, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3554, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b154, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda178, 0x762b0 bytes
    //
    _u2(sdk::unknown_ptr) destroy_context;
    
    // [DestroyCoreAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x154fcc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2228b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d656c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2229b8, 0x762b0 bytes
    //
    _u3(sdk::unknown_ptr) destroy_core_allocations;
    
    // [DestroyDeferredAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaeff0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10a560, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19d3d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116590, 0x762b0 bytes
    //
    _u4(sdk::unknown_ptr) destroy_deferred_allocations;
    
    // [DestroyDevice@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa84b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2d08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x170900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd992c, 0x762b0 bytes
    //
    _u5(sdk::unknown_ptr) destroy_device;
    
    // [DestroyFlagsDefault@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x37d54, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x79420, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x91594, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x79450, 0x762b0 bytes
    //
    _u6(sdk::unknown_ptr) destroy_flags_default;
    
    // [??1DXGDEVICE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaee14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2968, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17eebc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd97f8, 0x762b0 bytes
    //
    _u7(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyOverlay@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160100, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24eed4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e4e54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24f014, 0x762b0 bytes
    //
    _u8(sdk::unknown_ptr) destroy_overlay;
    
    // [DestroyPagingQueue@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8fe4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe38dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b27d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda500, 0x762b0 bytes
    //
    _u9(sdk::unknown_ptr) destroy_paging_queue;
    
    // [DestroyResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xad634, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11a344, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1afaa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xee2f0, 0x762b0 bytes
    //
    _v0(sdk::unknown_ptr) destroy_resource;
    
    // [DisablePinnedAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd751c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15e2b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ea0f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161108, 0x762b0 bytes
    //
    _v1(sdk::unknown_ptr) disable_pinned_allocation;
    
    // [DisablePinnedHardware@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd7570, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15e198, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ea06c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x160fe8, 0x762b0 bytes
    //
    _v2(sdk::unknown_ptr) disable_pinned_hardware;
    
    // [DrainAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa77c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11a2c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7794, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xee270, 0x762b0 bytes
    //
    _v3(sdk::unknown_ptr) drain_allocations;
    
    // [DrainClientAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160164, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24f248, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e52f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24f388, 0x762b0 bytes
    //
    _v4(sdk::unknown_ptr) drain_client_allocations;
    
    // [DrainClientResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1601b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24f2b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e5364, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24f3f8, 0x762b0 bytes
    //
    _v5(sdk::unknown_ptr) drain_client_resources;
    
    // [DrainCoreAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1601f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24f314, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e53c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24f454, 0x762b0 bytes
    //
    _v6(sdk::unknown_ptr) drain_core_allocations;
    
    // [DrainResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7758, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2bdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d99c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdac90, 0x762b0 bytes
    //
    _v7(sdk::unknown_ptr) drain_resources;
    
    // [Escape@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1605b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24f8dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e5ab4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24fa1c, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) escape;
    
    // [Evict@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7974, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13fafc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d6740, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x142a0c, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) evict;
    
    // [EvictAllAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16073c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24faa8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e5cc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24fbe8, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) evict_all_allocations;
    
    // [FlushDeferredDestruction@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaeeec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3438, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1d24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda05c, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) flush_deferred_destruction;
    
    // [FlushPagingQueues@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7824, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d034, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b7a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdbc2c, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) flush_paging_queues;
    
    // [FlushScheduler@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8e1c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe2adc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d91b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdad0c, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) flush_scheduler;
    
    // [GetBroadcastPresentSyncObject@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24fbec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e5f60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24fd2c, 0x762b0 bytes
    //
    _w4(sdk::unknown_ptr) get_broadcast_present_sync_object;
    
    // [GetContexts@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1608f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24fcdc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6050, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24fe1c, 0x762b0 bytes
    //
    _w5(sdk::unknown_ptr) get_contexts;
    
    // [GetDeviceExecutionState@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6244, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe010c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b9a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdbcf0, 0x762b0 bytes
    //
    _w6(sdk::unknown_ptr) get_device_execution_state;
    
    // [GetDisplayedPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xe908, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x27e0, 0x84380 bytes
    // dxgkrnl.sys .text:0xb5f0, 0x762b0 bytes
    //
    _w7(sdk::unknown_ptr) get_displayed_primary;
    
    // [GetPinnedPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa61c, 0x60098 bytes
    // dxgkrnl.sys .text:0x1628, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2a14, 0x84380 bytes
    // dxgkrnl.sys .text:0x137cc, 0x762b0 bytes
    //
    _w8(sdk::unknown_ptr) get_pinned_primary;
    
    // [Initialize@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xae798, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x118d70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b4358, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe8868, 0x762b0 bytes
    //
    _w9(sdk::unknown_ptr) initialize;
    
    // [InsertDirectFlipAllocationToList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160924, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x159d88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d53c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15cbd8, 0x762b0 bytes
    //
    _x0(sdk::unknown_ptr) insert_direct_flip_allocation_to_list;
    
    // [InsertPrimaryAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa3bc, 0x60098 bytes
    // dxgkrnl.sys .text:0x19358, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e070, 0x84380 bytes
    // dxgkrnl.sys .text:0x19928, 0x762b0 bytes
    //
    _x1(sdk::unknown_ptr) insert_primary_allocation;
    
    // [InvalidatePrimaryAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160b24, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24fd14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x24fe54, 0x762b0 bytes
    //
    _x2(sdk::unknown_ptr) invalidate_primary_allocations;
    
    // [IsAllocationInPrimaryAllocationsList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7f40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd7adc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1620c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155e40, 0x762b0 bytes
    //
    _x3(sdk::unknown_ptr) is_allocation_in_primary_allocations_list;
    
    // [IsDirectFlipAllocationPinned@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160cf8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x159f24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d5554, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15cd74, 0x762b0 bytes
    //
    _x4(sdk::unknown_ptr) is_direct_flip_allocation_pinned;
    
    // [IsDisplayedPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20e94, 0x60098 bytes
    // dxgkrnl.sys .text:0x3cc78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a8d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3ce68, 0x762b0 bytes
    //
    _x5(sdk::unknown_ptr) is_displayed_primary;
    
    // [IsDisplayingOnVidPnSource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160d48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24ff54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6428, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x250094, 0x762b0 bytes
    //
    _x6(sdk::unknown_ptr) is_displaying_on_vid_pn_source;
    
    // [IsExecutionStateErrorState@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7694, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe00d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b96c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdbcb8, 0x762b0 bytes
    //
    _x7(sdk::unknown_ptr) is_execution_state_error_state;
    
    // [IsSupportOverlay@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24d40, 0x60098 bytes
    // dxgkrnl.sys .text:0x44930, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5676c, 0x84380 bytes
    // dxgkrnl.sys .text:0x44b20, 0x762b0 bytes
    //
    _x8(sdk::unknown_ptr) is_support_overlay;
    
    // [IsVidPnSourcePrimaryValid@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa68fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154ed8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4618, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158148, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) is_vid_pn_source_primary_valid;
    
    // [IssueSyncObjectOpForAllContexts@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6d408, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x24ffec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6470, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25012c, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) issue_sync_object_op_for_all_contexts;
    
    // [Lock@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8860, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf3e50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1683b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xffe20, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) lock;
    
    // [NotifyProcessFreeze@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7a40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe45c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16a56c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd83d4, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) notify_process_freeze;
    
    // [NotifyProcessThaw@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x6d2c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe1850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15b8a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdb8e8, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) notify_process_thaw;
    
    // [OfferAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaa3c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1381d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cac00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13ff00, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) offer_allocations;
    
    // [OpenAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xac2d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf5ea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x184120, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x101e70, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) open_allocations;
    
    // [OpenCddPrimaryHandle@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1736b4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27b278, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3316c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27b2c8, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) open_cdd_primary_handle;
    
    // [OpenResourceObject@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xacfb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd305c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x192cc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd31f4, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) open_resource_object;
    
    // [PinDirectFlipResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x160de8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x159b68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d5194, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15c9b8, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) pin_direct_flip_resources;
    
    // [PinPrimaryAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa800c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd7bc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1621bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x154f58, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) pin_primary_allocations;
    
    // [PopDirectFlipAllocationFromList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa76cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd7798, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e6ed4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e81c, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) pop_direct_flip_allocation_from_list;
    
    // [QueryAllocationResidency@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xaa6f4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x223658, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d746c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x223758, 0x762b0 bytes
    //
    _z1(sdk::unknown_ptr) query_allocation_residency;
    
    // [QueryLastCompletedPresentId@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16114c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x250bd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e717c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x250d10, 0x762b0 bytes
    //
    _z2(sdk::unknown_ptr) query_last_completed_present_id;
    
    // [QueryLastCompletedPresentIdDWM@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147424, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x250ca0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21f22a, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x250de0, 0x762b0 bytes
    //
    _z3(sdk::unknown_ptr) query_last_completed_present_id_dwm;
    
    // [ReclaimAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa9fe0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf1840, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cbb00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfd810, 0x762b0 bytes
    //
    _z4(sdk::unknown_ptr) reclaim_allocations;
    
    // [RemoveAllocationFromList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147640, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15608c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e724c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158edc, 0x762b0 bytes
    //
    _z5(sdk::unknown_ptr) remove_allocation_from_list;
    
    // [RemoveAllocationsAndTransferToList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147598, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x156194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158fe4, 0x762b0 bytes
    //
    _z6(sdk::unknown_ptr) remove_allocations_and_transfer_to_list;
    
    // [RemoveAllocationsWithoutDestroy@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1611f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x250e24, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7588, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x250f64, 0x762b0 bytes
    //
    _z7(sdk::unknown_ptr) remove_allocations_without_destroy;
    
    // [RemoveDirectFlipAllocationFromList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16129c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x159a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d50b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15c8e0, 0x762b0 bytes
    //
    _z8(sdk::unknown_ptr) remove_direct_flip_allocation_from_list;
    
    // [RemovePrimaryAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8d88, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1473c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7fb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b3f8, 0x762b0 bytes
    //
    _z9(sdk::unknown_ptr) remove_primary_allocation;
    
    // [RemoveResourceFromDeviceList@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8cfc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x250f18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7688, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251058, 0x762b0 bytes
    //
    _a0(sdk::unknown_ptr) remove_resource_from_device_list;
    
    // [ReportAllocationState@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161370, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x250fcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7770, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25110c, 0x762b0 bytes
    //
    _a1(sdk::unknown_ptr) report_allocation_state;
    
    // [ReportDeviceResources@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161400, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x251054, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e797c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251194, 0x762b0 bytes
    //
    _a2(sdk::unknown_ptr) report_device_resources;
    
    // [ReportState@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1614a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x251110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7ad8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251250, 0x762b0 bytes
    //
    _a3(sdk::unknown_ptr) report_state;
    
    // [Reset@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161634, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x251324, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7ce8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251464, 0x762b0 bytes
    //
    _a4(sdk::unknown_ptr) reset;
    
    // [SetAllocationPriority@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155424, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x223aa8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2d78e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x223ba8, 0x762b0 bytes
    //
    _a5(sdk::unknown_ptr) set_allocation_priority;
    
    // [SetDisplayMode@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6ce8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd8944, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x162368, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13d5f0, 0x762b0 bytes
    //
    _a6(sdk::unknown_ptr) set_display_mode;
    
    // [SetDisplayedPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa728, 0x60098 bytes
    // dxgkrnl.sys .text:0x52a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8c70, 0x84380 bytes
    // dxgkrnl.sys .text:0x6640, 0x762b0 bytes
    //
    _a7(sdk::unknown_ptr) set_displayed_primary;
    
    // [SetFullscreenGammaRampAdjustment@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161798, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2514f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7ed4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251638, 0x762b0 bytes
    //
    _a8(sdk::unknown_ptr) set_fullscreen_gamma_ramp_adjustment;
    
    // [SetQueuedPresentLimit@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7e78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14035c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c98c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14326c, 0x762b0 bytes
    //
    _a9(sdk::unknown_ptr) set_queued_present_limit;
    
    // [SetSchedulingPriorityAdjustment@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa7ee4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd9e98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16539c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7130, 0x762b0 bytes
    //
    _b0(sdk::unknown_ptr) set_scheduling_priority_adjustment;
    
    // [Stop@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1617dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x251540, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e7f1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251680, 0x762b0 bytes
    //
    _b1(sdk::unknown_ptr) stop;
    
    // [SynchronizePresentToPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6b50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x143cc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15a55c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x146bd8, 0x762b0 bytes
    //
    _b2(sdk::unknown_ptr) synchronize_present_to_primary;
    
    // [TerminateAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xadca0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xfe430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19f990, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10a400, 0x762b0 bytes
    //
    _b3(sdk::unknown_ptr) terminate_allocations;
    
    // [TestAndSetDisplayedPrimary@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa660, 0x60098 bytes
    // dxgkrnl.sys .text:0x18390, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d104, 0x84380 bytes
    // dxgkrnl.sys .text:0x18b20, 0x762b0 bytes
    //
    _b4(sdk::unknown_ptr) test_and_set_displayed_primary;
    
    // [TrimAllDmaPoolsToMinimum@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1619d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x151cf8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15cedc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd70cc, 0x762b0 bytes
    //
    _b5(sdk::unknown_ptr) trim_all_dma_pools_to_minimum;
    
    // [UmdManagesResidency@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa794, 0x60098 bytes
    // dxgkrnl.sys .text:0x2ce4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8404, 0x84380 bytes
    // dxgkrnl.sys .text:0x4084, 0x762b0 bytes
    //
    _b6(sdk::unknown_ptr) umd_manages_residency;
    
    // [Unlock@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa8b94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x137a00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c9f00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13f730, 0x762b0 bytes
    //
    _b7(sdk::unknown_ptr) unlock;
    
    // [Unlock2@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14726c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x26fa00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x317be0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26fb60, 0x762b0 bytes
    //
    _b8(sdk::unknown_ptr) unlock2;
    
    // [UnpinAllDirectFlipAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6a80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd76b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e8188, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e738, 0x762b0 bytes
    //
    _b9(sdk::unknown_ptr) unpin_all_direct_flip_allocations;
    
    // [UnpinDirectFlipAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161a30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1599dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d4ff4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15c82c, 0x762b0 bytes
    //
    _c0(sdk::unknown_ptr) unpin_direct_flip_allocation;
    
    // [UnpinDirectFlipAllocationSynchronous@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161b2c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2517b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e846c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2518f0, 0x762b0 bytes
    //
    _c1(sdk::unknown_ptr) unpin_direct_flip_allocation_synchronous;
    
    // [UnpinPrimaryAllocations@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa6920, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd750c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x161c34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13e8c4, 0x762b0 bytes
    //
    _c2(sdk::unknown_ptr) unpin_primary_allocations;
    
    // [UnpinTransitionalPrimaryAllocation@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161df8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2518f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e859c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x251a30, 0x762b0 bytes
    //
    _c3(sdk::unknown_ptr) unpin_transitional_primary_allocation;
    
    // [UpdateDodFrontBuffer@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16cd90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x26fb70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x317d60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26fcd0, 0x762b0 bytes
    //
    _c4(sdk::unknown_ptr) update_dod_front_buffer;
    
    // [UpdatePriorityClass@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa86a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xda130, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168ac0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd718c, 0x762b0 bytes
    //
    _c5(sdk::unknown_ptr) update_priority_class;
    
    // [ValidateDirectFlipResource@DXGDEVICE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x161f84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x159f78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d55a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15cdc8, 0x762b0 bytes
    //
    _c6(sdk::unknown_ptr) validate_direct_flip_resource;
};
#include "magic/api.end.hpp"
