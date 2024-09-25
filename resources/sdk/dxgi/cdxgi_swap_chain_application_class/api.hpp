#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain_application_class
{
    // [ApplySwapChainCreationStateFullScreen@CDXGISwapChainApplicationClass]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e5d0, 0x17e70 bytes
    // dxgi.dll .text:0x6e6e0, 0x17e70 bytes
    // dxgi.dll .text:0x7a2d0, 0x18b10 bytes
    // dxgi.dll .text:0x6fb10, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) apply_swap_chain_creation_state_full_screen;
    
    // [??1CDXGISwapChainApplicationClass@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5db38, 0x17e70 bytes
    // dxgi.dll .text:0x5dc28, 0x17e70 bytes
    // dxgi.dll .text:0x69768, 0x18b10 bytes
    // dxgi.dll .text:0x5f05c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [FinalConstruct@CDXGISwapChainApplicationClass]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55d0, 0x17e70 bytes
    // dxgi.dll .text:0x55d0, 0x17e70 bytes
    // dxgi.dll .text:0x8de4, 0x18b10 bytes
    // dxgi.dll .text:0x3090, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) final_construct;
    
    // [GetControllingUnknown@CDXGISwapChainApplicationClass]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ecf0, 0x17e70 bytes
    // dxgi.dll .text:0x1f000, 0x17e70 bytes
    // dxgi.dll .text:0x26840, 0x18b10 bytes
    // dxgi.dll .text:0x1fdf0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) get_controlling_unknown;
};
#include "magic/api.end.hpp"
