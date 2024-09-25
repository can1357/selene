#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_host_remoteobjectchannel
{
    // [??1DXG_HOST_REMOTEOBJECTCHANNEL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3508f0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Delete@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afdb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351850, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afe50, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [ChannelClosed@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156310, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4900, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159160, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) channel_closed;
    
    // [ChannelPostStarted@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159170, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) channel_post_started;
    
    // [ChannelStarted@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) channel_started;
    
    // [ChannelSuspended@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159180, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) channel_suspended;
    
    // [CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x284d30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33ca30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x284db0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) cleanup_channel_object;
    
    // [CloseChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4930, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159190, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) close_channel_object;
    
    // [??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aebb4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x350708, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2aec54, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) construct_instance;
    
    // [CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x284da0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33caa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x284e20, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) create_bundle_object_callback;
    
    // [DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x285018, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33cd24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x285098, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) destroy_bundle_object_callback;
    
    // [ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2857f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33d028, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x285870, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) extract_bundle_object;
    
    // [IsSuspended@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b04d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351fd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b0570, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) is_suspended;
    
    // [ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x285a50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33d290, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x285ad0, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) process_channel_message;
};
#include "magic/api.end.hpp"
