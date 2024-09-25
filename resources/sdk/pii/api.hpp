#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pii
{
    // [PiiFilterCreate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f718, 0x17e70 bytes
    // dxgi.dll .text:0x7f898, 0x17e70 bytes
    // dxgi.dll .text:0x80224, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) filter_create;
    
    // [PiiFilterDelete]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0xae60, 0x17e70 bytes
    // dxgi.dll .text:0xae90, 0x17e70 bytes
    // dxgi.dll .text:0x1f6a0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) filter_delete;
    
    // [PiiFilterExecute]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f854, 0x17e70 bytes
    // dxgi.dll .text:0x7f9d4, 0x17e70 bytes
    // dxgi.dll .text:0x80360, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) filter_execute;
    
    // [PiiFilterpAddEnvironment]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f024, 0x17e70 bytes
    // dxgi.dll .text:0x7f1a4, 0x17e70 bytes
    // dxgi.dll .text:0x7fb30, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) filterp_add_environment;
    
    // [PiiFilterpAddItemSorted]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f214, 0x17e70 bytes
    // dxgi.dll .text:0x7f394, 0x17e70 bytes
    // dxgi.dll .text:0x7fd20, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) filterp_add_item_sorted;
    
    // [PiiFilterpAddProfiles]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f2c8, 0x17e70 bytes
    // dxgi.dll .text:0x7f448, 0x17e70 bytes
    // dxgi.dll .text:0x7fdd4, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) filterp_add_profiles;
};
#include "magic/api.end.hpp"
