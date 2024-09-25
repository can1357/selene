#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace wnf::helper
{
    // [DoNothingWnfCallbackFn@WNFHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x26ae0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) do_nothing_wnf_callback_fn;
    
    // [RegisterWNFNotificationStartingFromCurrentState@WNFHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb26c, 0x17e70 bytes
    // dxgi.dll .text:0xb29c, 0x17e70 bytes
    // dxgi.dll .text:0x1fb54, 0x18b10 bytes
    // dxgi.dll .text:0x6128, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) register_wnf_notification_starting_from_current_state;
};
#include "magic/api.end.hpp"
