#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_connection
{
    // [BoostCompositorClock@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22a930, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) boost_compositor_clock;
    
    // [ConfirmFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3e7f0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) confirm_frame;
    
    // [DiscardFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xae1f4, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) discard_frame;
    
    // [DiscardPreviousFrames@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3e988, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) discard_previous_frames;
    
    // [EmitSetBlurredWallpaperSurface@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22af70, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_blurred_wallpaper_surface;
    
    // [FindCompositionFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3e3bc, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) find_composition_frame;
    
    // [GetCompositorClockInfo@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22b3a8, 0x27ef0 bytes
    //
    _m6(sdk::unknown_ptr) get_compositor_clock_info;
    
    // [GetFrameId@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9e900, 0x27ef0 bytes
    //
    _m7(sdk::unknown_ptr) get_frame_id;
    
    // [GetPrimaryTargetId@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22b4bc, 0x27ef0 bytes
    //
    _m8(sdk::unknown_ptr) get_primary_target_id;
    
    // [OnDwmInitializeInternal@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9fcd8, 0x27ef0 bytes
    //
    _m9(sdk::unknown_ptr) on_dwm_initialize_internal;
    
    // [OnProcessDestruction@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x25ee4, 0x27ef0 bytes
    //
    _n0(sdk::unknown_ptr) on_process_destruction;
    
    // [QueryStats@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9ef90, 0x27ef0 bytes
    //
    _n1(sdk::unknown_ptr) query_stats;
    
    // [QueryTargetStats@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9eb38, 0x27ef0 bytes
    //
    _n2(sdk::unknown_ptr) query_target_stats;
    
    // [RenderBlack@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8004, 0x1eb80 bytes
    //
    _n3(sdk::unknown_ptr) render_black;
    
    // [RetireFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22b600, 0x27ef0 bytes
    //
    _n4(sdk::unknown_ptr) retire_frame;
    
    // [s_maxHardwareFeatureLevel@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .data:0x11d5d0, 0x1eb80 bytes
    //
    _n5(sdk::unknown_ptr) s_max_hardware_feature_level;
    
    // [s_minSafeFeatureLevel@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .data:0x11d5d4, 0x1eb80 bytes
    //
    _n6(sdk::unknown_ptr) s_min_safe_feature_level;
    
    // [SetBlurredWallpaperSurface@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22b6ec, 0x27ef0 bytes
    //
    _n7(sdk::unknown_ptr) set_blurred_wallpaper_surface;
    
    // [SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22b784, 0x27ef0 bytes
    //
    _n8(sdk::unknown_ptr) set_blurred_wallpaper_surface_internal;
    
    // [Synchronize@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe80a0, 0x1eb80 bytes
    //
    _n9(sdk::unknown_ptr) synchronize;
    
    // [GetBatchesFromFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x9ae48, 0x243e0 bytes
    // win32kbase.sys .text:0x83c48, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) get_batches_from_frame;
    
    // [GetDeferredBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1dce0c, 0x243e0 bytes
    // win32kbase.sys .text:0x1dabcc, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) get_deferred_batches;
    
    // [s_capabilityInfo@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .data:0x255188, 0x243e0 bytes
    // win32kbase.sys .data:0x252198, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) s_capability_info;
    
    // [AcquireShellResourceAccess@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc4bf0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7394, 0x27ef0 bytes
    // win32kbase.sys .text:0xbdbe0, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) acquire_shell_resource_access;
    
    // [IsSystemResourceOfType@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73770, 0x243e0 bytes
    // win32kbase.sys .text:0xb70f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xb880, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) is_system_resource_of_type;
    
    // [OnProcessCreation@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ff80, 0x243e0 bytes
    // win32kbase.sys .text:0x25d14, 0x27ef0 bytes
    // win32kbase.sys .text:0x7dffc, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) on_process_creation;
    
    // [ReferenceHandle@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x412f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ce68, 0x243e0 bytes
    // win32kbase.sys .text:0x86ac8, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) reference_handle;
    
    // [ReleaseShellResourceAccess@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fcfc, 0x243e0 bytes
    // win32kbase.sys .text:0x9fdc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x814d4, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) release_shell_resource_access;
    
    // [RemoveCompositionFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x3e710, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db698, 0x243e0 bytes
    // win32kbase.sys .text:0x1d9458, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) remove_composition_frame;
    
    // [AppendRetrievingBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8588, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc690, 0x243e0 bytes
    // win32kbase.sys .text:0x22a900, 0x27ef0 bytes
    // win32kbase.sys .text:0x1da450, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) append_retrieving_batches;
    
    // [BeginFrame@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3e460, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ce90, 0x243e0 bytes
    // win32kbase.sys .text:0xa128c, 0x27ef0 bytes
    // win32kbase.sys .text:0x80590, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) begin_frame;
    
    // [Connect@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f260, 0x1eb80 bytes
    // win32kbase.sys .text:0x801e8, 0x243e0 bytes
    // win32kbase.sys .text:0xe915c, 0x27ef0 bytes
    // win32kbase.sys .text:0x816e0, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) connect;
    
    // [Create@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81b30, 0x1eb80 bytes
    // win32kbase.sys .text:0x80384, 0x243e0 bytes
    // win32kbase.sys .text:0xe9338, 0x27ef0 bytes
    // win32kbase.sys .text:0x81d64, 0x243e0 bytes
    //
    _p2(sdk::unknown_ptr) create;
    
    // [CreateSystemResource@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ec80, 0x1eb80 bytes
    // win32kbase.sys .text:0x730c8, 0x243e0 bytes
    // win32kbase.sys .text:0x27738, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1d8, 0x243e0 bytes
    //
    _p3(sdk::unknown_ptr) create_system_resource;
    
    // [DesktopCaptureBits@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7cc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dc6c0, 0x243e0 bytes
    // win32kbase.sys .text:0x22abd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1da480, 0x243e0 bytes
    //
    _p4(sdk::unknown_ptr) desktop_capture_bits;
    
    // [DestroyHandle@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83260, 0x1eb80 bytes
    // win32kbase.sys .text:0x80074, 0x243e0 bytes
    // win32kbase.sys .text:0xbf2a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e220, 0x243e0 bytes
    //
    _p5(sdk::unknown_ptr) destroy_handle;
    
    // [DiscardAllCompositionFrames@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f56c, 0x1eb80 bytes
    // win32kbase.sys .text:0x7fcd0, 0x243e0 bytes
    // win32kbase.sys .text:0xd97ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x814a8, 0x243e0 bytes
    //
    _p6(sdk::unknown_ptr) discard_all_composition_frames;
    
    // [Disconnect@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f088, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f2f0, 0x243e0 bytes
    // win32kbase.sys .text:0xbf35c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f968, 0x243e0 bytes
    //
    _p7(sdk::unknown_ptr) disconnect;
    
    // [EnableMMCSS@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7e00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dca60, 0x243e0 bytes
    // win32kbase.sys .text:0x22affc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1da820, 0x243e0 bytes
    //
    _p8(sdk::unknown_ptr) enable_mmcss;
    
    // [ForceRender@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7ec0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd1f0c, 0x243e0 bytes
    // win32kbase.sys .text:0xe1fd4, 0x27ef0 bytes
    // win32kbase.sys .text:0xd08ac, 0x243e0 bytes
    //
    _p9(sdk::unknown_ptr) force_render;
    
    // [GetBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe7f2c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dcd04, 0x243e0 bytes
    // win32kbase.sys .text:0x22b2a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1daac4, 0x243e0 bytes
    //
    _q0(sdk::unknown_ptr) get_batches;
    
    // [GetDefaultConnection@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3fd7c, 0x1eb80 bytes
    // win32kbase.sys .text:0x75b94, 0x243e0 bytes
    // win32kbase.sys .text:0x2764c, 0x27ef0 bytes
    // win32kbase.sys .text:0xdcd4, 0x243e0 bytes
    //
    _q1(sdk::unknown_ptr) get_default_connection;
    
    // [GetFrameStatistics@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ea08, 0x1eb80 bytes
    // win32kbase.sys .text:0x75628, 0x243e0 bytes
    // win32kbase.sys .text:0x27584, 0x27ef0 bytes
    // win32kbase.sys .text:0xd768, 0x243e0 bytes
    //
    _q2(sdk::unknown_ptr) get_frame_statistics;
    
    // [GetNewBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f3c4, 0x1eb80 bytes
    // win32kbase.sys .text:0x7fc78, 0x243e0 bytes
    // win32kbase.sys .text:0xd91f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x8014c, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) get_new_batches;
    
    // [GetReadyBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb8644, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dcec4, 0x243e0 bytes
    // win32kbase.sys .text:0x22b55c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dac84, 0x243e0 bytes
    //
    _q4(sdk::unknown_ptr) get_ready_batches;
    
    // [Initialize@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f5b4, 0x1eb80 bytes
    // win32kbase.sys .text:0xbe2e8, 0x243e0 bytes
    // win32kbase.sys .text:0x87b9c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7dc4c, 0x243e0 bytes
    //
    _q5(sdk::unknown_ptr) initialize;
    
    // [IsConnected@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f220, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e0d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2b038, 0x27ef0 bytes
    // win32kbase.sys .text:0x7eca0, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) is_connected;
    
    // [KeepOrDeferBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb85a4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1dcf5c, 0x243e0 bytes
    // win32kbase.sys .text:0xa159c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dad1c, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) keep_or_defer_batches;
    
    // [OnDwmRenderThreadExit@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77f90, 0x1eb80 bytes
    // win32kbase.sys .text:0x80130, 0x243e0 bytes
    // win32kbase.sys .text:0xbf218, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e198, 0x243e0 bytes
    //
    _q8(sdk::unknown_ptr) on_dwm_render_thread_exit;
    
    // [OnSessionCreation@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x814f4, 0x1eb80 bytes
    // win32kbase.sys .text:0xbe1f0, 0x243e0 bytes
    // win32kbase.sys .text:0x87a84, 0x27ef0 bytes
    // win32kbase.sys .text:0x7dad4, 0x243e0 bytes
    //
    _q9(sdk::unknown_ptr) on_session_creation;
    
    // [PostBatch@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f424, 0x1eb80 bytes
    // win32kbase.sys .text:0x7f01c, 0x243e0 bytes
    // win32kbase.sys .text:0x2afe4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f914, 0x243e0 bytes
    //
    _r0(sdk::unknown_ptr) post_batch;
    
    // [ReclaimSessionGlobalConnection@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81c00, 0x1eb80 bytes
    // win32kbase.sys .text:0x80464, 0x243e0 bytes
    // win32kbase.sys .text:0xcfac4, 0x27ef0 bytes
    // win32kbase.sys .text:0x81e44, 0x243e0 bytes
    //
    _r1(sdk::unknown_ptr) reclaim_session_global_connection;
    
    // [ReferenceSystemResource@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ec18, 0x1eb80 bytes
    // win32kbase.sys .text:0x752b8, 0x243e0 bytes
    // win32kbase.sys .text:0x2b43c, 0x27ef0 bytes
    // win32kbase.sys .text:0xd3c8, 0x243e0 bytes
    //
    _r2(sdk::unknown_ptr) reference_system_resource;
    
    // [RegisterChannel@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f4e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7a9f8, 0x243e0 bytes
    // win32kbase.sys .text:0xa2468, 0x27ef0 bytes
    // win32kbase.sys .text:0xac76c, 0x243e0 bytes
    //
    _r3(sdk::unknown_ptr) register_channel;
    
    // [Release@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3eab4, 0x1eb80 bytes
    // win32kbase.sys .text:0x75600, 0x243e0 bytes
    // win32kbase.sys .text:0x2755c, 0x27ef0 bytes
    // win32kbase.sys .text:0xd740, 0x243e0 bytes
    //
    _r4(sdk::unknown_ptr) release;
    
    // [ReleaseSystemResource@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ebd8, 0x1eb80 bytes
    // win32kbase.sys .text:0x75398, 0x243e0 bytes
    // win32kbase.sys .text:0x2b9d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd4a8, 0x243e0 bytes
    //
    _r5(sdk::unknown_ptr) release_system_resource;
    
    // [RetrieveBatches@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ed18, 0x1eb80 bytes
    // win32kbase.sys .text:0x9af68, 0x243e0 bytes
    // win32kbase.sys .text:0xa01a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x83d68, 0x243e0 bytes
    //
    _r6(sdk::unknown_ptr) retrieve_batches;
    
    // [s_pDwmRenderThread@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9a8, 0x1eb80 bytes
    // win32kbase.sys .data:0x25add8, 0x243e0 bytes
    // win32kbase.sys .data:0x2afbe0, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e08, 0x243e0 bytes
    //
    _r7(sdk::unknown_ptr) s_p_dwm_render_thread;
    
    // [s_pSessionConnection@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f9a0, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ade0, 0x243e0 bytes
    // win32kbase.sys .data:0x2afbe8, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e10, 0x243e0 bytes
    //
    _r8(sdk::unknown_ptr) s_p_session_connection;
    
    // [s_pSessionConnectionLock@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x11f998, 0x1eb80 bytes
    // win32kbase.sys .data:0x25ade8, 0x243e0 bytes
    // win32kbase.sys .data:0x2afbf0, 0x27ef0 bytes
    // win32kbase.sys .data:0x257e18, 0x243e0 bytes
    //
    _r9(sdk::unknown_ptr) s_p_session_connection_lock;
    
    // [s_qpcFrequency@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x122538, 0x1eb80 bytes
    // win32kbase.sys .data:0x25e778, 0x243e0 bytes
    // win32kbase.sys .data:0x2b35c0, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b7a8, 0x243e0 bytes
    //
    _s0(sdk::unknown_ptr) s_qpc_frequency;
    
    // [UnregisterChannel@CConnection@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3f464, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e018, 0x243e0 bytes
    // win32kbase.sys .text:0x9c400, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ebe8, 0x243e0 bytes
    //
    _s1(sdk::unknown_ptr) unregister_channel;
};
#include "magic/api.end.hpp"
