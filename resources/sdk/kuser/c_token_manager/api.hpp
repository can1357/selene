#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_token_manager
{
    // [AddUnBindTokenInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf8120, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) add_un_bind_token_internal;
    
    // [ConfirmOutstandingAnalogTokenInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf8318, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) confirm_outstanding_analog_token_internal;
    
    // [CreateFlipExToken@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40144, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) create_flip_ex_token;
    
    // [DeleteAllTokensInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x407bc, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) delete_all_tokens_internal;
    
    // [DeleteOutstandingAnalogTokenInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3feb4, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) delete_outstanding_analog_token_internal;
    
    // [EnsureRenderFenceWait@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40994, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) ensure_render_fence_wait;
    
    // [GetAnalogExclusiveTokenEventInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf8368, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) get_analog_exclusive_token_event_internal;
    
    // [GetAnalogSurfaceUpdatesInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf8414, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) get_analog_surface_updates_internal;
    
    // [NotifyCompositionTokensOfRedirectionStop@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf856c, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) notify_composition_tokens_of_redirection_stop;
    
    // [NotifyQueuesOfRedirectionStop@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf8634, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) notify_queues_of_redirection_stop;
    
    // [ReleaseCompositionHandleTokensToFrame@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40800, 0x1eb80 bytes
    //
    _n0(sdk::unknown_ptr) release_composition_handle_tokens_to_frame;
    
    // [ReleaseToFrameInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40aa4, 0x1eb80 bytes
    //
    _n1(sdk::unknown_ptr) release_to_frame_internal;
    
    // [ReturnLegacyTokenBufferInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40750, 0x1eb80 bytes
    //
    _n2(sdk::unknown_ptr) return_legacy_token_buffer_internal;
    
    // [SetAdapterInfo@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x406fc, 0x1eb80 bytes
    //
    _n3(sdk::unknown_ptr) set_adapter_info;
    
    // [SignalGpuFenceInternal@CTokenManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x40a0c, 0x1eb80 bytes
    //
    _n4(sdk::unknown_ptr) signal_gpu_fence_internal;
};
#include "magic/api.end.hpp"
