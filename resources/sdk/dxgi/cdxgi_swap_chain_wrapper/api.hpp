#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain_wrapper
{
    // [Convert@CDXGISwapChainWrapper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x70a2c, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) convert;
    
    // [Blt@CDXGISwapChainWrapper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x645ec, 0x17e70 bytes
    // dxgi.dll .text:0x646dc, 0x17e70 bytes
    // dxgi.dll .text:0x359e0, 0x18b10 bytes
    // dxgi.dll .text:0x65b0c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) blt;
};
#include "magic/api.end.hpp"
