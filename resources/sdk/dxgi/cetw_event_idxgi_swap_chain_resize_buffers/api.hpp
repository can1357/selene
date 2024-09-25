#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_swap_chain_resize_buffers
{
    // [??0CETWEvent_IDXGISwapChain_ResizeBuffers@@QEAA@PEAXIIIW4DXGI_FORMAT@@I@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22164, 0x17e70 bytes
    // dxgi.dll .text:0x22444, 0x17e70 bytes
    // dxgi.dll .text:0x2a520, 0x18b10 bytes
    // dxgi.dll .text:0x230e4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGISwapChain_ResizeBuffers@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2064c, 0x17e70 bytes
    // dxgi.dll .text:0x2092c, 0x17e70 bytes
    // dxgi.dll .text:0x27dec, 0x18b10 bytes
    // dxgi.dll .text:0x215cc, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
