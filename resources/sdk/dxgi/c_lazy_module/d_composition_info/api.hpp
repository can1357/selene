#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_lazy_module::d_composition_info
{
    // [ConfigureRelativeSize@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x584d8, 0x17e70 bytes
    // dxgi.dll .text:0x585c8, 0x17e70 bytes
    // dxgi.dll .text:0x63890, 0x18b10 bytes
    // dxgi.dll .text:0x59a6c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) configure_relative_size;
    
    // [DestroySprite@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5893c, 0x17e70 bytes
    // dxgi.dll .text:0x58a2c, 0x17e70 bytes
    // dxgi.dll .text:0x63cf8, 0x18b10 bytes
    // dxgi.dll .text:0x59edc, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_sprite;
    
    // [EnsureSprite@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58f84, 0x17e70 bytes
    // dxgi.dll .text:0x59074, 0x17e70 bytes
    // dxgi.dll .text:0x64444, 0x18b10 bytes
    // dxgi.dll .text:0x5a524, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) ensure_sprite;
    
    // [RemoveAllComposition@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59884, 0x17e70 bytes
    // dxgi.dll .text:0x59974, 0x17e70 bytes
    // dxgi.dll .text:0x65200, 0x18b10 bytes
    // dxgi.dll .text:0x5ae44, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) remove_all_composition;
    
    // [RemoveComposition@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59950, 0x17e70 bytes
    // dxgi.dll .text:0x59a40, 0x17e70 bytes
    // dxgi.dll .text:0x652f0, 0x18b10 bytes
    // dxgi.dll .text:0x5af10, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) remove_composition;
    
    // [SetSwapChain@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59fe0, 0x17e70 bytes
    // dxgi.dll .text:0x5a0d0, 0x17e70 bytes
    // dxgi.dll .text:0x65a30, 0x18b10 bytes
    // dxgi.dll .text:0x5b5a0, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) set_swap_chain;
    
    // [UpdateComposition@DCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5a1d0, 0x17e70 bytes
    // dxgi.dll .text:0x5a2c0, 0x17e70 bytes
    // dxgi.dll .text:0x65cc8, 0x18b10 bytes
    // dxgi.dll .text:0x5b790, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) update_composition;
};
#include "magic/api.end.hpp"
