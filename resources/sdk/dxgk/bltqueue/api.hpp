#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::bltqueue
{
    // [CreatePeriodicFrameNotification@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f7da4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc600, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7b14, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create_periodic_frame_notification;
    
    // [DestroyPeriodicFrameNotification@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f8024, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7d94, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_periodic_frame_notification;
    
    // [DestroyStagingBuffer@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f81ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bcb50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7f5c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_staging_buffer;
    
    // [LogRemoteVsyncTimeout@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f89b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd2d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8724, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) log_remote_vsync_timeout;
    
    // [PrepareStagingBuffer@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f8cfc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd664, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8a6c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) prepare_staging_buffer;
    
    // [RecreateVsyncSource@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153cb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db204, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156f68, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) recreate_vsync_source;
    
    // [WaitFence@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2fb500, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0558, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fb270, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) wait_fence;
    
    // [BltQueueWorker@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc529c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1117a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd9c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11da04, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) blt_queue_worker;
    
    // [BltQueueWorkerThread@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc56b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154f80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1581c0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) blt_queue_worker_thread;
    
    // [Cleanup@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184844, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7a48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc250, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f77b8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) cleanup;
    
    // [CompletePresentIndirectInternal@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1848e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7b08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc310, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7878, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) complete_present_indirect_internal;
    
    // [??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc49d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14ba18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c61c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ea34, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) construct_instance;
    
    // [??1BLTQUEUE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184740, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7894, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc0a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7604, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) destroy_instance;
    
    // [DisableHwVSyncWorker@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184b44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f845c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bce1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f81cc, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) disable_hw_v_sync_worker;
    
    // [DisableVSync@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184bc4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f84f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bcec0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8264, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) disable_v_sync;
    
    // [DiscardPendingPresent@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184c14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f8550, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bcf20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f82c0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) discard_pending_present;
    
    // [EnableVSync@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4d58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5604, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db068, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5c94, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) enable_v_sync;
    
    // [EnableVSyncEventSignaling@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4df0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd53e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1daca8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5a78, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) enable_v_sync_event_signaling;
    
    // [FinishCommand@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc5594, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x145b44, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ce30c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x148a54, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) finish_command;
    
    // [Flush@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4908, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14dbd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1daf08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14feb0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) flush;
    
    // [GetScanLineEmulation@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184d78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f86e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd0ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8450, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) get_scan_line_emulation;
    
    // [InsertQueueHead@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184e9c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f8830, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2222da, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f85a0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) insert_queue_head;
    
    // [InsertQueueTail@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184f44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f88f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd1fc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8664, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) insert_queue_tail;
    
    // [IssueCommand@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc55cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14dcb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dafe4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ff98, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) issue_command;
    
    // [PreparePresentIndirect@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184fe8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f8ae0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd43c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8850, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) prepare_present_indirect;
    
    // [Present@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1851bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f9444, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bdf44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f91b4, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) present;
    
    // [PresentDisplayOnly@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18576c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f9da0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bea18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9b10, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) present_display_only;
    
    // [PresentDisplayOnlyProgressDpcCb@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27710, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c440, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cdc0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c5d0, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) present_display_only_progress_dpc_cb;
    
    // [PresentDisplayOnlySetProgress@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27720, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c464, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cde4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c5f4, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) present_display_only_set_progress;
    
    // [ProcessBltQueue@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4e28, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14598c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cdff4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14889c, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) process_blt_queue;
    
    // [ProcessVSyncTdrWorker@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185934, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f9f80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bec28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9cf0, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) process_v_sync_tdr_worker;
    
    // [QueryPresentStatsDWM@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1859b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa008, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2223b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9d78, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) query_present_stats_dwm;
    
    // [RemoveQueueHead@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc5638, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x145ab4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bed64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1489c4, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) remove_queue_head;
    
    // [Reset@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185abc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa11c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bee3c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9e8c, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) reset;
    
    // [ResetInternal@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185b04, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa1f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bef10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9f60, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) reset_internal;
    
    // [ResetWorker@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185b3c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa234, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bef58, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9fa4, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) reset_worker;
    
    // [SetDWMTargetVsync@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27828, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c4fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6ce8c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c68c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) set_dwm_target_vsync;
    
    // [SetIndirectSwapChainHandles@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x278d8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa30c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bf014, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fa07c, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) set_indirect_swap_chain_handles;
    
    // [SetQueuedPresentLimit@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x186078, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa8b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bf6f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fa628, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) set_queued_present_limit;
    
    // [SetVisibilityIfDeferred@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x186120, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa968, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bf7b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fa6d8, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) set_visibility_if_deferred;
    
    // [SignalVSyncEvent@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4f50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd3fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ce150, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd44a0, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) signal_v_sync_event;
    
    // [StartVSync@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc50f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5a18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ce358, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd62d4, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) start_v_sync;
    
    // [Startup@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4c60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x153b88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db0c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156e38, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) startup;
    
    // [StopVSync@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc5068, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fafd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bfff0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fad40, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) stop_v_sync;
    
    // [UpdateDisplayModeInfo@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4dac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd55b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dae7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5c48, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) update_display_mode_info;
    
    // [UpdateDisplayModeInfoWorker@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc51c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5918, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1cd864, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd61d4, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) update_display_mode_info_worker;
    
    // [UpdatePresentStats@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x18680c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fb234, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3c0280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fafa4, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) update_present_stats;
    
    // [UpdateVsyncCount@BLTQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27ad4, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c704, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2f664, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c894, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) update_vsync_count;
};
#include "magic/api.end.hpp"
