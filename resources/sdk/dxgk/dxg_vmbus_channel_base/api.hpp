#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_vmbus_channel_base
{
    // [VmBusSendAsyncMessage@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5dea4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) vm_bus_send_async_message;
    
    // [??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x162d18, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f463c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16ec04, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [DisableChannel@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e058, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5cc84, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e248, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) disable_channel;
    
    // [PauseChannel@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235970, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3660dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235aa0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) pause_channel;
    
    // [SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235ba8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x366314, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235cd8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) send_vm_bus_message;
    
    // [SendVmBusMessageAsync@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235c98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3663f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235dc8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) send_vm_bus_message_async;
    
    // [VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x247e84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37f454, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x247fb4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) vm_bus_send_sync_message;
    
    // [VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x24819c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x37f7c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2482cc, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) vm_bus_send_sync_message_status_return;
};
#include "magic/api.end.hpp"
