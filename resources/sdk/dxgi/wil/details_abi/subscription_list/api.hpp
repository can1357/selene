#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi::subscription_list
{
    // [OnSignaled@SubscriptionList@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a558, 0x17e70 bytes
    // dxgi.dll .text:0x1a808, 0x17e70 bytes
    // dxgi.dll .text:0xa67c, 0x18b10 bytes
    // dxgi.dll .text:0x15d88, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) on_signaled;
    
    // [SubscribeUnderLock@SubscriptionList@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x188b4, 0x17e70 bytes
    // dxgi.dll .text:0x18b14, 0x17e70 bytes
    // dxgi.dll .text:0xb8b0, 0x18b10 bytes
    // dxgi.dll .text:0x14024, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) subscribe_under_lock;
    
    // [Unsubscribe@SubscriptionList@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2fc8, 0x17e70 bytes
    // dxgi.dll .text:0x2fc8, 0x17e70 bytes
    // dxgi.dll .text:0x6788, 0x18b10 bytes
    // dxgi.dll .text:0x4e48, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) unsubscribe;
};
#include "magic/api.end.hpp"
