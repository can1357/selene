#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::flip_manager_object
{
    // [??0FlipManagerObject@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7bf18, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [NotifyAdapterCleanupTokenDiscard@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x7bd38, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) notify_adapter_cleanup_token_discard;
    
    // [QueryLostEvent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x79fb4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) query_lost_event;
    
    // [ConsumerDwmApplyUpdates@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x675d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67764, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) consumer_dwm_apply_updates;
    
    // [ProcessDiscardedProducerPresentUpdate@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bf0c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6c09c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) process_discarded_producer_present_update;
    
    // [AddContent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x657e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79a20, 0x84380 bytes
    // dxgkrnl.sys .text:0x65970, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_content;
    
    // [AddPoolBuffer@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65850, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79a90, 0x84380 bytes
    // dxgkrnl.sys .text:0x659e0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) add_pool_buffer;
    
    // [ConsumerAcquirePresent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x658cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79b0c, 0x84380 bytes
    // dxgkrnl.sys .text:0x65a5c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) consumer_acquire_present;
    
    // [ConsumerAdjustUsageReference@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65948, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79b88, 0x84380 bytes
    // dxgkrnl.sys .text:0x65ad8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) consumer_adjust_usage_reference;
    
    // [ConsumerBeginProcessPresent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x659d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79c18, 0x84380 bytes
    // dxgkrnl.sys .text:0x65b68, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) consumer_begin_process_present;
    
    // [ConsumerPostMessage@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65a48, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79c88, 0x84380 bytes
    // dxgkrnl.sys .text:0x65bd8, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) consumer_post_message;
    
    // [ConsumerQueryBufferInfo@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65ab0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79cf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x65c40, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) consumer_query_buffer_info;
    
    // [CreatePresentUpdateForProducer@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6765c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7b8f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x677ec, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) create_present_update_for_producer;
    
    // [CreateWaitedConsumerReturnForConsumer@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x676e4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7b980, 0x84380 bytes
    // dxgkrnl.sys .text:0x67874, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) create_waited_consumer_return_for_consumer;
    
    // [DisconnectEndpoint@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65b48, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79d8c, 0x84380 bytes
    // dxgkrnl.sys .text:0x65cd8, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) disconnect_endpoint;
    
    // [EnablePresentStatisticsType@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65bb4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79df8, 0x84380 bytes
    // dxgkrnl.sys .text:0x65d44, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) enable_present_statistics_type;
    
    // [IsDwmBound@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67ab4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7bcd8, 0x84380 bytes
    // dxgkrnl.sys .text:0x67c44, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) is_dwm_bound;
    
    // [IsEndpointConnected@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65c30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79e74, 0x84380 bytes
    // dxgkrnl.sys .text:0x65dc0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) is_endpoint_connected;
    
    // [ObjectInit@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67b20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7bfb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x67cb0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) object_init;
    
    // [OpenEndpoint@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67bc8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7bfe0, 0x84380 bytes
    // dxgkrnl.sys .text:0x67d58, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) open_endpoint;
    
    // [PresentCancel@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65ca8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79ee4, 0x84380 bytes
    // dxgkrnl.sys .text:0x65e38, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) present_cancel;
    
    // [QueryBufferAvailableEvent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65d08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x79f44, 0x84380 bytes
    // dxgkrnl.sys .text:0x65e98, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) query_buffer_available_event;
    
    // [QueryNextMessageToProducer@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65d78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7a040, 0x84380 bytes
    // dxgkrnl.sys .text:0x65f08, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) query_next_message_to_producer;
    
    // [RemoveContent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65e60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7a128, 0x84380 bytes
    // dxgkrnl.sys .text:0x65ff0, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) remove_content;
    
    // [RemovePoolBuffer@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65ec0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7a198, 0x84380 bytes
    // dxgkrnl.sys .text:0x66050, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) remove_pool_buffer;
    
    // [ResolveHandle@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x67c78, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7c068, 0x84380 bytes
    // dxgkrnl.sys .text:0x67e08, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) resolve_handle;
    
    // [SetContent@FlipManagerObject]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65f38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7a1f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x660c8, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) set_content;
};
#include "magic/api.end.hpp"
