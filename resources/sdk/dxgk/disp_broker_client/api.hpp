#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::disp_broker_client
{
    // [??1DispBrokerClient@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1e6e0, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [DisconnectDisplayBroker@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1f780, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) disconnect_display_broker;
    
    // [DisableDisplayBroker@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x18b18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e708, 0x84380 bytes
    // dxgkrnl.sys .text:0x18ea8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) disable_display_broker;
    
    // [EnsureConnected@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd64ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16031c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1505b8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) ensure_connected;
    
    // [IsClientHandleValid@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd6b40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1607c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x150b54, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_client_handle_valid;
    
    // [ReferencePort@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd6ac8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160750, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x150adc, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) reference_port;
    
    // [SendDisplayBrokerMessage@DispBrokerClient]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd6904, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160588, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x150918, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) send_display_broker_message;
};
#include "magic/api.end.hpp"
