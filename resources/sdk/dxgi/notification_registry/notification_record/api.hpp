#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::notification_registry::notification_record
{
    // [Dupe@NotificationRecord@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xbca4, 0x17e70 bytes
    // dxgi.dll .text:0xbcd4, 0x17e70 bytes
    // dxgi.dll .text:0x1e4e8, 0x18b10 bytes
    // dxgi.dll .text:0x6eb4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) dupe;
    
    // [IsValidWindowMessage@NotificationRecord@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f988, 0x17e70 bytes
    // dxgi.dll .text:0x6fa98, 0x17e70 bytes
    // dxgi.dll .text:0x7b190, 0x18b10 bytes
    // dxgi.dll .text:0x70ec8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) is_valid_window_message;
    
    // [Notify@NotificationRecord@NotificationRegistry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc1dc, 0x17e70 bytes
    // dxgi.dll .text:0xc20c, 0x17e70 bytes
    // dxgi.dll .text:0x1e560, 0x18b10 bytes
    // dxgi.dll .text:0x73ec, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) notify;
};
#include "magic/api.end.hpp"
