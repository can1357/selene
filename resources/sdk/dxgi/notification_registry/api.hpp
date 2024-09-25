#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::notification_registry
{
    // [??1NotificationRegistry@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5dc64, 0x17e70 bytes
    // dxgi.dll .text:0x5dd54, 0x17e70 bytes
    // dxgi.dll .text:0x698f4, 0x18b10 bytes
    // dxgi.dll .text:0x5f188, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [InsertNotificationRecord@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xbacc, 0x17e70 bytes
    // dxgi.dll .text:0xbafc, 0x17e70 bytes
    // dxgi.dll .text:0x1e324, 0x18b10 bytes
    // dxgi.dll .text:0x6cdc, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) insert_notification_record;
    
    // [NotifyAll@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc1a4, 0x17e70 bytes
    // dxgi.dll .text:0xc1d4, 0x17e70 bytes
    // dxgi.dll .text:0x1e684, 0x18b10 bytes
    // dxgi.dll .text:0x73b4, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) notify_all;
    
    // [RegisterEvent@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xba78, 0x17e70 bytes
    // dxgi.dll .text:0xbaa8, 0x17e70 bytes
    // dxgi.dll .text:0x1e2d8, 0x18b10 bytes
    // dxgi.dll .text:0x6c88, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) register_event;
    
    // [RegisterWindowMessageA@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6fe38, 0x17e70 bytes
    // dxgi.dll .text:0x6ff48, 0x17e70 bytes
    // dxgi.dll .text:0x7b644, 0x18b10 bytes
    // dxgi.dll .text:0x71378, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) register_window_message_a;
    
    // [Unregister@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xcbc4, 0x17e70 bytes
    // dxgi.dll .text:0xcbf4, 0x17e70 bytes
    // dxgi.dll .text:0x6890, 0x18b10 bytes
    // dxgi.dll .text:0x7dd4, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) unregister;
};
#include "magic/api.end.hpp"
