#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_host_compositionobjectchannel
{
    // [QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e1614, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) query_stats_callback;
    
    // [Delete@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afd80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afe20, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286a38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df444, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286ab8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) bind_composition_surface_callback;
    
    // [ChannelClosed@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159160, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) channel_closed;
    
    // [ChannelPostStarted@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159170, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) channel_post_started;
    
    // [ChannelStarted@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) channel_started;
    
    // [ChannelSuspended@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159180, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) channel_suspended;
    
    // [CleanupChannelObject@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286d00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286d80, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) cleanup_channel_object;
    
    // [CloseChannelObject@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286d60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df8e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286de0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) close_channel_object;
    
    // [CreateCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286f1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2dfae4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286f9c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) create_composition_surface_callback;
    
    // [??1DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aec6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x350858, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aed0c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_instance;
    
    // [EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2873d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2dffe4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x287454, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) enqueue_flip_ex_token_callback;
    
    // [Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x287748, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e03c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2877c8, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) initialize;
    
    // [IsSuspended@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b04d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351fd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0570, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) is_suspended;
    
    // [ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2880c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288140, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) process_channel_message;
    
    // [QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28847c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1794, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2884fc, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) query_swap_chain_binding_status;
    
    // [ReleaseCompositionSurfaceReferenceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28879c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1a78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28881c, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) release_composition_surface_reference_callback;
    
    // [UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28914c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e271c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2891cc, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) unbind_composition_surface_callback;
};
#include "magic/api.end.hpp"
