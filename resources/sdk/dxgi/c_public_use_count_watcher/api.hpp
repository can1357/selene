#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_public_use_count_watcher
{
    // [AddRef@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5b90, 0x17e70 bytes
    // dxgi.dll .text:0x5b90, 0x17e70 bytes
    // dxgi.dll .text:0x20570, 0x18b10 bytes
    // dxgi.dll .text:0x1a740, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [QueryInterface@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6a110, 0x17e70 bytes
    // dxgi.dll .text:0x6a220, 0x17e70 bytes
    // dxgi.dll .text:0x75de0, 0x18b10 bytes
    // dxgi.dll .text:0x6b650, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) query_interface;
    
    // [Release@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5bf0, 0x17e70 bytes
    // dxgi.dll .text:0x5bf0, 0x17e70 bytes
    // dxgi.dll .text:0x205e0, 0x18b10 bytes
    // dxgi.dll .text:0x1a7a0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) release;
    
    // [UCAddUse@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb170, 0x17e70 bytes
    // dxgi.dll .text:0xb1a0, 0x17e70 bytes
    // dxgi.dll .text:0x22c10, 0x18b10 bytes
    // dxgi.dll .text:0x1f9b0, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) uc_add_use;
    
    // [UCBreakCyclicReferences@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d0a0, 0x17e70 bytes
    // dxgi.dll .text:0x6d1b0, 0x17e70 bytes
    // dxgi.dll .text:0x78b00, 0x18b10 bytes
    // dxgi.dll .text:0x6e5e0, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) uc_break_cyclic_references;
    
    // [UCDestroy@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb230, 0x17e70 bytes
    // dxgi.dll .text:0xb260, 0x17e70 bytes
    // dxgi.dll .text:0x26950, 0x18b10 bytes
    // dxgi.dll .text:0x1fa70, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) uc_destroy;
    
    // [UCEstablishCyclicReferences@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d0e0, 0x17e70 bytes
    // dxgi.dll .text:0x6d1f0, 0x17e70 bytes
    // dxgi.dll .text:0x78b60, 0x18b10 bytes
    // dxgi.dll .text:0x6e620, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) uc_establish_cyclic_references;
    
    // [UCQueryInterface@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d220, 0x17e70 bytes
    // dxgi.dll .text:0x6d330, 0x17e70 bytes
    // dxgi.dll .text:0x78cd0, 0x18b10 bytes
    // dxgi.dll .text:0x6e760, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) uc_query_interface;
    
    // [UCReleaseUse@CPublicUseCountWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f340, 0x17e70 bytes
    // dxgi.dll .text:0x1f650, 0x17e70 bytes
    // dxgi.dll .text:0x22c40, 0x18b10 bytes
    // dxgi.dll .text:0x20fd0, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) uc_release_use;
};
#include "magic/api.end.hpp"
