#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_guest_remoteobjectchannel
{
    // [??1DXG_GUEST_REMOTEOBJECTCHANNEL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x35080c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x285fd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x286058, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) send_create_bundle_object;
    
    // [Delete@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afd60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3517f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afe00, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) _delete;
    
    // [ChannelClosed@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159160, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) channel_closed;
    
    // [ChannelPostStarted@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159170, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) channel_post_started;
    
    // [ChannelStarted@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) channel_started;
    
    // [ChannelSuspended@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159180, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) channel_suspended;
    
    // [CleanupChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af5f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3510d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2af690, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) cleanup_channel_object;
    
    // [CloseChannelObject@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2af630, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2af6d0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) close_channel_object;
    
    // [IsSuspended@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b04d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351fd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0570, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) is_suspended;
    
    // [ProcessChannelMessage@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352180, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0730, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) process_channel_message;
    
    // [SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2865f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33d804, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x286674, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) send_create_bundle_object_by_pointer;
    
    // [SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2868bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33daa8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28693c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) send_destroy_bundle_object;
};
#include "magic/api.end.hpp"
