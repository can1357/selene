#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cetw_event_idxgi_swap_chain_resize_target
{
    // [??0CETWEvent_IDXGISwapChain_ResizeTarget@@QEAA@PEAXPEBUDXGI_MODE_DESC@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x636c8, 0x17e70 bytes
    // dxgi.dll .text:0x637b8, 0x17e70 bytes
    // dxgi.dll .text:0x6f498, 0x18b10 bytes
    // dxgi.dll .text:0x64be8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CETWEvent_IDXGISwapChain_ResizeTarget@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x638d0, 0x17e70 bytes
    // dxgi.dll .text:0x639c0, 0x17e70 bytes
    // dxgi.dll .text:0x6f764, 0x18b10 bytes
    // dxgi.dll .text:0x64df0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
