#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain::cross_adapter_fence
{
    // [Release@CrossAdapterFence@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x219e8, 0x17e70 bytes
    // dxgi.dll .text:0x21cc8, 0x17e70 bytes
    // dxgi.dll .text:0x1fa40, 0x18b10 bytes
    // dxgi.dll .text:0x22968, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
