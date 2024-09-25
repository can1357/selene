#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvmbuschannel
{
    // [AddMessageToChannel@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad498, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355af8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad538, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_message_to_channel;
    
    // [Cleanup@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad718, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351060, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad7b8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) cleanup;
    
    // [??0DXGVMBUSCHANNEL@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad164, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355710, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad204, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Create@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad88c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355f38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad92c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [??1DXGVMBUSCHANNEL@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad3b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3559e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad454, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Disable@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad928, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3519b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad9c8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) disable;
    
    // [Enable@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2aff14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351a34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2affb4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) enable;
    
    // [Initialize@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2adb0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3561c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2adbac, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [NotifyChannelClosed@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae14c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3569c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae1ec, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) notify_channel_closed;
    
    // [NotifyChannelPostStarted@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae204, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356a7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae2a4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) notify_channel_post_started;
    
    // [NotifyChannelSuspended@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae300, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356b78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae3a0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) notify_channel_suspended;
    
    // [ProcessPacket@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae488, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356cfc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae528, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) process_packet;
    
    // [ProxyFromSubscriberTag@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae594, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356df8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae634, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) proxy_from_subscriber_tag;
    
    // [RegisterSubscriber@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae62c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356e90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae6cc, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) register_subscriber;
    
    // [Release@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae7b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3521e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae858, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) release;
    
    // [UpdateVmBusHandle@DXGVMBUSCHANNEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae900, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357150, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae9a0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) update_vm_bus_handle;
};
#include "magic/api.end.hpp"
