#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgcontext
{
    // [AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x19902c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_multi_plane_overlay3_flip_fences;
    
    // [CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1878fc, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) check_multi_plane_overlay_support_from_cached_data;
    
    // [ConvertThunkOverlayToPackedAttributes@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x188260, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) convert_thunk_overlay_to_packed_attributes;
    
    // [ConvertThunkOverlayToPackedAttributes2@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x187f24, 0x60098 bytes
    //
    _m3(sdk::unknown_ptr) convert_thunk_overlay_to_packed_attributes2;
    
    // [ConvertToPresentMultiPlaneOverlay@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x188480, 0x60098 bytes
    //
    _m4(sdk::unknown_ptr) convert_to_present_multi_plane_overlay;
    
    // [PrepareIndependentFlipToken@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x9ebe0, 0x60098 bytes
    //
    _m5(sdk::unknown_ptr) prepare_independent_flip_token;
    
    // [SubmitPresentHistoryToken@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xa23b0, 0x60098 bytes
    //
    _m6(sdk::unknown_ptr) submit_present_history_token;
    
    // [SubmitPresentMultiPlaneOverlays@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18c46c, 0x60098 bytes
    //
    _m7(sdk::unknown_ptr) submit_present_multi_plane_overlays;
    
    // [SubmitPresentMultiPlaneOverlays2@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x18b200, 0x60098 bytes
    //
    _m8(sdk::unknown_ptr) submit_present_multi_plane_overlays2;
    
    // [BltFromVm@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x279a7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32fb58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x279acc, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) blt_from_vm;
    
    // [CreateHwQueue@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2671fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30e3dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26735c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) create_hw_queue;
    
    // [DestroyAllHwQueues@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2673ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30e638, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26754c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) destroy_all_hw_queues;
    
    // [DestroyHwQueue@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26795c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ec6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x267abc, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_hw_queue;
    
    // [DestroyHwQueueOnHost@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x267aac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ee64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x267c0c, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) destroy_hw_queue_on_host;
    
    // [DisplayOnlyPresent@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x29eae4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x319e40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29eb84, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) display_only_present;
    
    // [GetInProcessSchedulingPriority@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x229a7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2a3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229bac, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) get_in_process_scheduling_priority;
    
    // [GetRenderHwQueueCount@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26822c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30f668, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26838c, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_render_hw_queue_count;
    
    // [ReserveDmaBuffersForBlts@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27c570, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x332b9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27c5c8, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) reserve_dma_buffers_for_blts;
    
    // [SetInProcessSchedulingPriority@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe0500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169f4c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd7a00, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) set_in_process_scheduling_priority;
    
    // [SignalRenderKmMonitoredFence@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x289fcc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2215d6, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28a04c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) signal_render_km_monitored_fence;
    
    // [SubmitCommandToImplicitQueue@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x229ea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e34c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229fd0, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) submit_command_to_implicit_queue;
    
    // [SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27cf90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x220f46, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27cfe8, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) synchronize_implicit_queue_with_render_queues;
    
    // [UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2a2310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31a888, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a23b0, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) update_display_state_for_full_wddm_device;
    
    // [AcquireDmaBuffer@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9ea94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x157f44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e60f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15ad94, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) acquire_dma_buffer;
    
    // [Blt@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1727ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x279194, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32f048, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2791e4, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) blt;
    
    // [CheckDevicePresentSettings@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1877fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1406a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x185270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1435b0, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) check_device_present_settings;
    
    // [CollectDbgInfo@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1594c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2299a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2934, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229ad0, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) collect_dbg_info;
    
    // [??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa0a40, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe4814, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b3898, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xef7b0, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) construct_instance;
    
    // [ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x188108, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29e96c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x198ee8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29ea0c, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) convert_thunk_overlay_to_packed_attributes3;
    
    // [CopyPresentArgs@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1c5e0, 0x60098 bytes
    // dxgkrnl.sys .text:0x441f4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2e996, 0x84380 bytes
    // dxgkrnl.sys .text:0x443e4, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) copy_present_args;
    
    // [DestroyAllocation@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x172f8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a6ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x330a9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a73c, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) destroy_allocation;
    
    // [DestroyContext@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9fd84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3a64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16b240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda688, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) destroy_context;
    
    // [??1DXGCONTEXT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa0830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3628, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b2924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda24c, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) destroy_instance;
    
    // [DisableDdiRenderAllocationList@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9998, 0x60098 bytes
    // dxgkrnl.sys .text:0x2a00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x70b4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d9c, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) disable_ddi_render_allocation_list;
    
    // [EnsurePriviledgedDmaPool@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa073c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe1730, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1ef8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14d80c, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) ensure_priviledged_dma_pool;
    
    // [GetVidMmCompanionContext@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x159588, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x229ad0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2a90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229c00, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) get_vid_mm_companion_context;
    
    // [GetVidSchCompanionContext@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1595f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x229b3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2afc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229c6c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) get_vid_sch_companion_context;
    
    // [HandleVistaBltStub@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173110, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27a960, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x330d94, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27a9b0, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) handle_vista_blt_stub;
    
    // [Initialize@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa00d4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe4c9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b2bc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xefc38, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) initialize;
    
    // [OpenResourceFromSharedHandle@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x173b80, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27b83c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x331e08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27b88c, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) open_resource_from_shared_handle;
    
    // [Present@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x990d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xef350, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x188f70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb320, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) present;
    
    // [PresentFromCdd@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa0bb0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14333c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x159c30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14624c, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) present_from_cdd;
    
    // [PresentMultiPlaneOverlay@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18a4d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a0cc8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31a580, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a0d68, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) present_multi_plane_overlay;
    
    // [PresentMultiPlaneOverlay2@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x188990, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29f2a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x31a28c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29f340, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) present_multi_plane_overlay2;
    
    // [PresentMultiPlaneOverlay3@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1896c4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x29f558, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x196380, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29f5f8, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) present_multi_plane_overlay3;
    
    // [ReleaseReference@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x10f60, 0x60098 bytes
    // dxgkrnl.sys .text:0x23708, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b318, 0x84380 bytes
    // dxgkrnl.sys .text:0x2427c, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) release_reference;
    
    // [Render@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa11b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe8670, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x181f80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf3260, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) render;
    
    // [RenderKmLda@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x176b30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28934c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33e304, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2893cc, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) render_km_lda;
    
    // [ReportState@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1596a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x229be0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2ba0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x229d10, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) report_state;
    
    // [ResizeUserModeBuffers@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x159834, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x148618, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2df8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14be58, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) resize_user_mode_buffers;
    
    // [SetSchedulingPriority@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x975e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xda184, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x168b14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd71e0, 0x762b0 bytes
    //
    _r0(sdk::unknown_ptr) set_scheduling_priority;
    
    // [SubmitCommand@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x97650, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xeaa70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18d790, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf6a40, 0x762b0 bytes
    //
    _r1(sdk::unknown_ptr) submit_command;
    
    // [SubmitPresent@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x985c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xf0980, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18a970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfc950, 0x762b0 bytes
    //
    _r2(sdk::unknown_ptr) submit_present;
    
    // [SubmitPresentLda@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x174734, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27c690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x332d3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27c6e8, 0x762b0 bytes
    //
    _r3(sdk::unknown_ptr) submit_present_lda;
    
    // [SubmitPresentMultiPlaneOverlays3@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18bb54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2a128c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x198010, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2a132c, 0x762b0 bytes
    //
    _r4(sdk::unknown_ptr) submit_present_multi_plane_overlays3;
    
    // [SubmitPresentWithDmaBuffer@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x97f20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe7690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x182bb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf2630, 0x762b0 bytes
    //
    _r5(sdk::unknown_ptr) submit_present_with_dma_buffer;
    
    // [UnreserveDmaBuffersForBlts@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd4e00, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x27d508, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x333834, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27d560, 0x762b0 bytes
    //
    _r6(sdk::unknown_ptr) unreserve_dma_buffers_for_blts;
    
    // [ValidatePresentRegions@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x97e44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1429c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d0400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1458d4, 0x762b0 bytes
    //
    _r7(sdk::unknown_ptr) validate_present_regions;
    
    // [WaitForQueuedPresentLimit@DXGCONTEXT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1476ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x141bb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1854a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x144ac0, 0x762b0 bytes
    //
    _r8(sdk::unknown_ptr) wait_for_queued_present_limit;
};
#include "magic/api.end.hpp"
