#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain::proxy_flip_info
{
    // [SetBufferDesc@ProxyFlipInfo@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6bcac, 0x17e70 bytes
    // dxgi.dll .text:0x6bdbc, 0x17e70 bytes
    // dxgi.dll .text:0x77940, 0x18b10 bytes
    // dxgi.dll .text:0x6d1ec, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) set_buffer_desc;
    
    // [SetPrimaryDesc@ProxyFlipInfo@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c0d4, 0x17e70 bytes
    // dxgi.dll .text:0x6c1e4, 0x17e70 bytes
    // dxgi.dll .text:0x77de8, 0x18b10 bytes
    // dxgi.dll .text:0x6d614, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) set_primary_desc;
};
#include "magic/api.end.hpp"
