#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_guest_compositionobjectchannel
{
    // [??1DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3507c0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [SendQueryStats@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2e2064, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) send_query_stats;
    
    // [Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afd40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3517c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afde0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) _delete;
    
    // [ChannelClosed@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159160, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) channel_closed;
    
    // [ChannelPostStarted@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159170, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) channel_post_started;
    
    // [ChannelStarted@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) channel_started;
    
    // [ChannelSuspended@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159180, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) channel_suspended;
    
    // [CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286cd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df850, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286d50, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) cleanup_channel_object;
    
    // [CloseChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x286d30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2df8b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286db0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) close_channel_object;
    
    // [IsSuspended@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b04d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351fd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0570, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) is_suspended;
    
    // [ProcessChannelMessage@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153b60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156e10, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) process_channel_message;
    
    // [RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2886e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e19c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288760, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) register_composition_surface_proxy;
    
    // [SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288818, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1afc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288898, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) send_bind_composition_surface;
    
    // [SendCreateCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288a14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1cd4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288a94, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) send_create_composition_surface;
    
    // [SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288b40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e1e44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288bc0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) send_enqueue_flip_ex_token;
    
    // [SendReleaseCompositionSurfaceReference@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x288d40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2274, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x288dc0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) send_release_composition_surface_reference;
    
    // [SendUnbindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x289000, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e2590, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x289080, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) send_unbind_composition_surface;
};
#include "magic/api.end.hpp"
