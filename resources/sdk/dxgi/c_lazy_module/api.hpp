#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_lazy_module
{
    // [BlitOcclusionWarn@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e774, 0x17e70 bytes
    // dxgi.dll .text:0x1ea84, 0x17e70 bytes
    // dxgi.dll .text:0x1fc10, 0x18b10 bytes
    // dxgi.dll .text:0x1a040, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) blit_occlusion_warn;
    
    // [??0CLazyModule@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd8e0, 0x17e70 bytes
    // dxgi.dll .text:0xd910, 0x17e70 bytes
    // dxgi.dll .text:0x16b28, 0x18b10 bytes
    // dxgi.dll .text:0x8af0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1CLazyModule@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xcc70, 0x17e70 bytes
    // dxgi.dll .text:0xcca0, 0x17e70 bytes
    // dxgi.dll .text:0x17ad8, 0x18b10 bytes
    // dxgi.dll .text:0x7e80, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [ETWRundown@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58a14, 0x17e70 bytes
    // dxgi.dll .text:0x58b04, 0x17e70 bytes
    // dxgi.dll .text:0x63e00, 0x18b10 bytes
    // dxgi.dll .text:0x59fb4, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) etw_rundown;
    
    // [GetSwapChain@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59234, 0x17e70 bytes
    // dxgi.dll .text:0x59324, 0x17e70 bytes
    // dxgi.dll .text:0x64b28, 0x18b10 bytes
    // dxgi.dll .text:0x5a7d4, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) get_swap_chain;
    
    // [GetSwapChainByCompositionSurface@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59280, 0x17e70 bytes
    // dxgi.dll .text:0x59370, 0x17e70 bytes
    // dxgi.dll .text:0x64b80, 0x18b10 bytes
    // dxgi.dll .text:0x5a820, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) get_swap_chain_by_composition_surface;
    
    // [InsertSwapChain@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d484, 0x17e70 bytes
    // dxgi.dll .text:0x1d794, 0x17e70 bytes
    // dxgi.dll .text:0x1d5d0, 0x18b10 bytes
    // dxgi.dll .text:0x18d14, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) insert_swap_chain;
    
    // [IsWinComp@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x595d4, 0x17e70 bytes
    // dxgi.dll .text:0x596c4, 0x17e70 bytes
    // dxgi.dll .text:0x64f7c, 0x18b10 bytes
    // dxgi.dll .text:0x5ab84, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) is_win_comp;
    
    // [RemoveGlobalDCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x599cc, 0x17e70 bytes
    // dxgi.dll .text:0x59abc, 0x17e70 bytes
    // dxgi.dll .text:0x65374, 0x18b10 bytes
    // dxgi.dll .text:0x5af8c, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) remove_global_d_composition_info;
    
    // [UpdateGlobalDCompositionInfo@CLazyModule]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5a814, 0x17e70 bytes
    // dxgi.dll .text:0x5a904, 0x17e70 bytes
    // dxgi.dll .text:0x66418, 0x18b10 bytes
    // dxgi.dll .text:0x5bdd4, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) update_global_d_composition_info;
};
#include "magic/api.end.hpp"
