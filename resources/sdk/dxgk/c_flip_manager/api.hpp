#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_manager
{
    // [ApplyUpdateToConsumer@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7c570, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) apply_update_to_consumer;
    
    // [ConsumerDwmProcessUpdateTokens@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7ccb4, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) consumer_dwm_process_update_tokens;
    
    // [ConsumerIFlipTokenCompleted@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7cea4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) consumer_i_flip_token_completed;
    
    // [ConsumerIFlipTokenSubmitted@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7d148, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) consumer_i_flip_token_submitted;
    
    // [FreeExpiredCancels@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7d6ec, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) free_expired_cancels;
    
    // [GetUpdateForPresentId@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7d8fc, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) get_update_for_present_id;
    
    // [IsPresentCanceled@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7dd14, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) is_present_canceled;
    
    // [IssueAndFreeSignal@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7dd64, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) issue_and_free_signal;
    
    // [MarkAsLost@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7de58, 0x84380 bytes
    //
    _m8(sdk::unknown_ptr) mark_as_lost;
    
    // [PostFlipManagerIFlipFrameStatistics@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e01c, 0x84380 bytes
    //
    _m9(sdk::unknown_ptr) post_flip_manager_i_flip_frame_statistics;
    
    // [PostFlipManagerPresentStatusStatistics@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e12c, 0x84380 bytes
    //
    _n0(sdk::unknown_ptr) post_flip_manager_present_status_statistics;
    
    // [ProcessDiscardedProducerPresentUpdate@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e4ec, 0x84380 bytes
    //
    _n1(sdk::unknown_ptr) process_discarded_producer_present_update;
    
    // [ProcessPendingProducerPresentUpdate@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e5b0, 0x84380 bytes
    //
    _n2(sdk::unknown_ptr) process_pending_producer_present_update;
    
    // [ProcessSignal@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e6d8, 0x84380 bytes
    //
    _n3(sdk::unknown_ptr) process_signal;
    
    // [RemovePoolBuffer@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7e9fc, 0x84380 bytes
    //
    _n4(sdk::unknown_ptr) remove_pool_buffer;
    
    // [s_nextFlipManagerTracingId@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x132308, 0x84380 bytes
    //
    _n5(sdk::unknown_ptr) s_next_flip_manager_tracing_id;
    
    // [UpdateNextConsumerPresentIdForUpdate@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7eb98, 0x84380 bytes
    //
    _n6(sdk::unknown_ptr) update_next_consumer_present_id_for_update;
    
    // [IsValid@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1abb0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b230, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) is_valid;
    
    // [MarkInvalid@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68b80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x68d10, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) mark_invalid;
    
    // [Delete@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68620, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d3c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x687b0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) _delete;
    
    // [AddContent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67e7c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c36c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6800c, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) add_content;
    
    // [AddPoolBuffer@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67f54, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c490, 0x84380 bytes
    // dxgkrnl.sys .text:0x680e4, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) add_pool_buffer;
    
    // [Close@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68000, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c5e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x68190, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) close;
    
    // [ConsumerAcquirePresent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68070, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c650, 0x84380 bytes
    // dxgkrnl.sys .text:0x68200, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) consumer_acquire_present;
    
    // [ConsumerBeginProcessPresent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x680e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c6c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x68274, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) consumer_begin_process_present;
    
    // [ConsumerDwmApplyUpdates@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6827c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c888, 0x84380 bytes
    // dxgkrnl.sys .text:0x6840c, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) consumer_dwm_apply_updates;
    
    // [CreatePresentUpdateForProducer@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x684a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d1e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x68630, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) create_present_update_for_producer;
    
    // [CreateWaitedConsumerReturnForConsumer@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x685bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d354, 0x84380 bytes
    // dxgkrnl.sys .text:0x6874c, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) create_waited_consumer_return_for_consumer;
    
    // [EnqueueConsumerUpdate@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68694, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d538, 0x84380 bytes
    // dxgkrnl.sys .text:0x68824, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) enqueue_consumer_update;
    
    // [FreeCancels@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d5ec, 0x84380 bytes
    // dxgkrnl.sys .text:0x68920, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) free_cancels;
    
    // [FreeCurrentUpdates@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68814, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d678, 0x84380 bytes
    // dxgkrnl.sys .text:0x689a4, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) free_current_updates;
    
    // [FreeQueuedUpdates@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68888, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d76c, 0x84380 bytes
    // dxgkrnl.sys .text:0x68a18, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) free_queued_updates;
    
    // [GetType@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aba0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20650, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b220, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) get_type;
    
    // [Initialize@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68924, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7d940, 0x84380 bytes
    // dxgkrnl.sys .text:0x68ab4, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) initialize;
    
    // [OkToClose@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae10, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) ok_to_close;
    
    // [Open@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fb90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae10, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) open;
    
    // [OpenEndpoint@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68c58, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7df04, 0x84380 bytes
    // dxgkrnl.sys .text:0x68de8, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) open_endpoint;
    
    // [PresentCancel@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68d70, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e204, 0x84380 bytes
    // dxgkrnl.sys .text:0x68f00, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) present_cancel;
    
    // [ProcessCompletedProducerPresentUpdate@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68e2c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e300, 0x84380 bytes
    // dxgkrnl.sys .text:0x68fbc, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) process_completed_producer_present_update;
    
    // [ProcessConsumerDisconnect@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68f00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e438, 0x84380 bytes
    // dxgkrnl.sys .text:0x69090, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) process_consumer_disconnect;
    
    // [ProcessProducerDisconnect@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x68fb4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e644, 0x84380 bytes
    // dxgkrnl.sys .text:0x69144, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) process_producer_disconnect;
    
    // [QueryBufferAvailableEvent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69048, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e888, 0x84380 bytes
    // dxgkrnl.sys .text:0x691d8, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) query_buffer_available_event;
    
    // [ReleaseKernelPresentUpdateReferences@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x690d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e8e8, 0x84380 bytes
    // dxgkrnl.sys .text:0x69268, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) release_kernel_present_update_references;
    
    // [RemoveContent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6915c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7e9a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x692ec, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) remove_content;
    
    // [SetContent@CFlipManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x691b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ea80, 0x84380 bytes
    // dxgkrnl.sys .text:0x69340, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) set_content;
};
#include "magic/api.end.hpp"
