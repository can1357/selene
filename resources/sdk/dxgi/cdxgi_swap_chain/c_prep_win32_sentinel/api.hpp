#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_swap_chain::c_prep_win32_sentinel
{
    // [PrepUser@CPrepWin32Sentinel@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21ce8, 0x17e70 bytes
    // dxgi.dll .text:0x21fc8, 0x17e70 bytes
    // dxgi.dll .text:0x29ef4, 0x18b10 bytes
    // dxgi.dll .text:0x22c68, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) prep_user;
    
    // [PrepWin32AndReturnAddRefedOutput@CPrepWin32Sentinel@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21abc, 0x17e70 bytes
    // dxgi.dll .text:0x21d9c, 0x17e70 bytes
    // dxgi.dll .text:0x29ca8, 0x18b10 bytes
    // dxgi.dll .text:0x22a3c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) prep_win32_and_return_add_refed_output;
    
    // [RestoreDesktopMode@CPrepWin32Sentinel@CDXGISwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6b00c, 0x17e70 bytes
    // dxgi.dll .text:0x6b11c, 0x17e70 bytes
    // dxgi.dll .text:0x7709c, 0x18b10 bytes
    // dxgi.dll .text:0x6c54c, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) restore_desktop_mode;
};
#include "magic/api.end.hpp"
